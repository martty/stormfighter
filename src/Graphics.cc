#include "Graphics.h"
#include "Library.h"
#include "Component.h"
#include <OgreSubMesh.h>
#include <OgreSubEntity.h>

template<> Graphics* Ogre::Singleton<Graphics>::ms_Singleton = 0;

Graphics::Graphics():root_(NULL), sceneManager_(NULL), renderWindow_(NULL), viewport_(NULL), defaultCamera_(NULL){
}

Graphics::~Graphics(){
  if(root_)
    delete root_;
}

bool Graphics::initialize(const SString& windowTitle){
  #ifdef _DEBUG
  resourcesCfg_ = "resources_d.cfg";
  pluginsCfg_ = "plugins_d.cfg";
  #else
  resourcesCfg = "resources.cfg";
  pluginsCfg_ = "plugins.cfg";
  #endif
  root_ = new Ogre::Root(pluginsCfg_);
  if(!root_->showConfigDialog())
    return false;

  renderWindow_ = root_->initialise(true, windowTitle);

  sceneManager_ = root_->createSceneManager(Ogre::ST_GENERIC, "SceneManager");
  sceneManager_->setAmbientLight(Ogre::ColourValue(0.7f, 0.7f, 0.7f));

  defaultCamera_ = sceneManager_->createCamera("Camera");
  viewport_ = renderWindow_->addViewport(defaultCamera_);
  viewport_->setBackgroundColour(Ogre::ColourValue(0.8f, 0.7f, 0.6f, 1.0f));
  viewport_->setCamera(defaultCamera_);

  Ogre::String secName, typeName, archName;
  Ogre::ConfigFile cf;
  cf.load(resourcesCfg_);
  Ogre::ConfigFile::SectionIterator seci = cf.getSectionIterator();
  while (seci.hasMoreElements()){
    secName = seci.peekNextKey();
    Ogre::ConfigFile::SettingsMultiMap *settings = seci.getNext();
    Ogre::ConfigFile::SettingsMultiMap::iterator i;
    for (i = settings->begin(); i != settings->end(); ++i){
      typeName = i->first;
      archName = i->second;
      Ogre::ResourceGroupManager::getSingleton().addResourceLocation(archName, typeName, secName);
    }
  }
  Ogre::TextureManager::getSingleton().setDefaultNumMipmaps(5);
  Ogre::ResourceGroupManager::getSingleton().initialiseAllResourceGroups();
  renderWindow_->setActive(true);

  terrainGlobals_ = OGRE_NEW Ogre::TerrainGlobalOptions();
  // global terrain settings cfg
  terrainGlobals_->setMaxPixelError(5);
  // testing composite map
  terrainGlobals_->setCompositeMapDistance(3000);

  ray_scene_query_ = sceneManager_->createRayQuery(Ogre::Ray());
  if (ray_scene_query_ == NULL) {
    LOG("Failed to create Ogre::RaySceneQuery instance");
  }
  ray_scene_query_->setSortByDistance(true);
  return true;
}

void Graphics::setActiveCamera(Ogre::Camera* camera){
  viewport_->setCamera(camera);
}

Ogre::Camera* Graphics::activeCamera() const{
  return viewport_->getCamera();
}

SReal Graphics::getDefaultAspectRatio(){
  return SReal(viewport_->getActualWidth()) / SReal(viewport_->getActualHeight());
}

void Graphics::addFrameListener(Ogre::FrameListener* listener){
  root_->addFrameListener(listener);
}

void Graphics::startRendering(){
  root_->startRendering();
}

void Graphics::setTerrainLight(Ogre::Light* light){
  terrainGlobals_->setLightMapDirection(light->getDerivedDirection());
  terrainGlobals_->setCompositeMapAmbient(sceneManager()->getAmbientLight());
  terrainGlobals_->setCompositeMapDiffuse(light->getDiffuseColour());
}

SRay Graphics::activeCameraToViewportRay(SReal screenx, SReal screeny){
  screenx /= viewport_->getActualWidth();
  screeny /= viewport_->getActualHeight();
  return viewport_->getCamera()->getCameraToViewportRay(screenx, screeny);
}

// create the ray scene query object
SingleRayCastResult Graphics::closestExactRayQuery(SRay ray){
  SingleRayCastResult result;
  result.hitObject = NULL;
  result.hitPoint = SVector3::ZERO;
// raycast from a point in to the scene.
// returns success or failure.
// on success the point is returned in the result.
// check we are initialised
  ray_scene_query_->setRay(ray);
  // execute the query, returns a vector of hits
  if (ray_scene_query_->execute().size() <= 0) {
    // raycast did not hit an objects bounding box
    return result;
  }
  // at this point we have raycast to a series of different objects bounding boxes.
  // we need to test these different objects to see which is the first polygon hit.
  // there are some minor optimizations (distance based) that mean we wont have to
  // check all of the objects most of the time, but the worst case scenario is that
  // we need to test every triangle of every object.
  Ogre::Real closest_distance = -1.0f;
  Ogre::Entity* closest_ent = NULL;
  Ogre::Vector3 closest_result;
  Ogre::RaySceneQueryResult &query_result = ray_scene_query_->getLastResults();
  for (size_t qr_idx = 0; qr_idx < query_result.size(); qr_idx++) {
    // stop checking if we have found a raycast hit that is closer
    // than all remaining entities
    if ((closest_distance >= 0.0f) && (closest_distance < query_result[qr_idx].distance)) {
      break;
    }
    // only check this result if its a hit against an entity
    if ((query_result[qr_idx].movable != NULL) && (query_result[qr_idx].movable->getMovableType().compare("Entity") == 0)) {
      // get the entity to check
      Ogre::Entity *pentity = static_cast<Ogre::Entity*>(query_result[qr_idx].movable);
      // mesh data to retrieve
      size_t vertex_count; size_t index_count; Ogre::Vector3 *vertices; Ogre::uint32 *indices;
      // get the mesh information
      getMeshInformation(pentity, vertex_count, vertices, index_count, indices,  pentity->getParentSceneNode()->convertLocalToWorldPosition(SVector3::ZERO), pentity->getParentNode()->convertLocalToWorldOrientation(SQuaternion::IDENTITY), pentity->getParentSceneNode()->_getDerivedScale());
      // test for hitting individual triangles on the mesh
      bool new_closest_found = false;
      for (int i = 0; i < static_cast<int>(index_count); i += 3) {
        // check for a hit against this triangle
        std::pair<bool, Ogre::Real> hit = Ogre::Math::intersects(ray, vertices[indices[i]], vertices[indices[i+1]], vertices[indices[i+2]], true, false);
        // if it was a hit check if its the closest
        if (hit.first) {
          if ((closest_distance < 0.0f) || (hit.second < closest_distance)) {
            // this is the closest so far, save it off
            closest_distance = hit.second; new_closest_found = true;
            closest_ent = pentity;
          }
        }
      }
      // free the verticies and indicies memory
      delete[] vertices; delete[] indices;
      // if we found a new closest raycast for this object, update the
      // closest_result before moving on to the next object.
      if (new_closest_found) {
        closest_result = ray.getPoint(closest_distance);
      }
    }
  }
  // return the result
  if (closest_distance >= 0.0f) {
    // raycast success
    result.hitPoint = closest_result;
    Component* mesh = Ogre::any_cast<Component*>(closest_ent->getUserObjectBindings().getUserAny());
    result.hitObject = mesh->object();
    return result;
  } else {
    // raycast failed
    return result;
  }
}

void Graphics::getMeshInformation(Ogre::Entity *entity, size_t &vertex_count, Ogre::Vector3* &vertices, size_t &index_count, Ogre::uint32* &indices,
                                  const Ogre::Vector3 &position, const Ogre::Quaternion &orient,
                                  const Ogre::Vector3 &scale) {
  bool added_shared = false;
  size_t current_offset = 0;
  size_t shared_offset = 0;
  size_t next_offset = 0;
  size_t index_offset = 0;
  vertex_count = index_count = 0;
  Ogre::MeshPtr mesh = entity->getMesh();
  bool useSoftwareBlendingVertices = entity->hasSkeleton();
  if (useSoftwareBlendingVertices) {
    entity->_updateAnimation();
  }
  // Calculate how many vertices and indices we're going to need
  for(unsigned short i = 0; i < mesh->getNumSubMeshes(); ++i) {
    Ogre::SubMesh* submesh = mesh->getSubMesh( i );
    // We only need to add the shared vertices once
    if(submesh->useSharedVertices) {
      if( !added_shared ) {
        vertex_count += mesh->sharedVertexData->vertexCount;
        added_shared = true;
      }
    } else {
      vertex_count += submesh->vertexData->vertexCount;
    }
    // Add the indices
    index_count += submesh->indexData->indexCount;
  }
  // Allocate space for the vertices and indices
  vertices = new Ogre::Vector3[vertex_count];
  indices = new Ogre::uint32[index_count];
  added_shared = false;
  // Run through the submeshes again, adding the data into the arrays
  for ( unsigned short i = 0; i < mesh->getNumSubMeshes(); ++i) {
    Ogre::SubMesh* submesh = mesh->getSubMesh(i);
    //---------------------------------------------------------------- // GET VERTEXDATA //----------------------------------------------------------------
    Ogre::VertexData* vertex_data;
     //When there is animation:
     if(useSoftwareBlendingVertices)
     vertex_data = submesh->useSharedVertices ? entity->_getSkelAnimVertexData() : entity->getSubEntity(i)->_getSkelAnimVertexData();
     else
     vertex_data = submesh->useSharedVertices ? mesh->sharedVertexData : submesh->vertexData;
     if((!submesh->useSharedVertices)||(submesh->useSharedVertices && !added_shared)) {
       if(submesh->useSharedVertices) {
         added_shared = true;
         shared_offset = current_offset;
        }
        const Ogre::VertexElement* posElem = vertex_data->vertexDeclaration->findElementBySemantic(Ogre::VES_POSITION);
        Ogre::HardwareVertexBufferSharedPtr vbuf = vertex_data->vertexBufferBinding->getBuffer(posElem->getSource());
        unsigned char* vertex = static_cast<unsigned char*>(vbuf->lock(Ogre::HardwareBuffer::HBL_READ_ONLY));
        // There is _no_ baseVertexPointerToElement() which takes an Ogre::Real or a double
        // as second argument. So make it float, to avoid trouble when Ogre::Real will
        // be comiled/typedefed as double:
        // Ogre::Real* pReal;
        float* pReal;
        for( size_t j = 0; j < vertex_data->vertexCount; ++j, vertex += vbuf->getVertexSize()) {
          posElem->baseVertexPointerToElement(vertex, &pReal);
          Ogre::Vector3 pt(pReal[0], pReal[1], pReal[2]);
          vertices[current_offset + j] = (orient * (pt * scale)) + position; }
          vbuf->unlock(); next_offset += vertex_data->vertexCount; }
           Ogre::IndexData* index_data = submesh->indexData;
           size_t numTris = index_data->indexCount / 3;
           Ogre::HardwareIndexBufferSharedPtr ibuf = index_data->indexBuffer;
           bool use32bitindexes = (ibuf->getType() == Ogre::HardwareIndexBuffer::IT_32BIT);
           void* hwBuf = ibuf->lock(Ogre::HardwareBuffer::HBL_READ_ONLY);
           size_t offset = (submesh->useSharedVertices)? shared_offset : current_offset;
           size_t index_start = index_data->indexStart; size_t last_index = numTris*3 + index_start;
           if (use32bitindexes) {
             Ogre::uint32* hwBuf32 = static_cast<Ogre::uint32*>(hwBuf);
             for (size_t k = index_start; k < last_index; ++k) {
               indices[index_offset++] = hwBuf32[k] + static_cast<Ogre::uint32>( offset );
              }
            } else {
              Ogre::uint16* hwBuf16 = static_cast<Ogre::uint16*>(hwBuf);
              for (size_t k = index_start; k < last_index; ++k) {
                indices[ index_offset++ ] = static_cast<Ogre::uint32>( hwBuf16[k] ) + static_cast<Ogre::uint32>( offset );
                }
              }
            ibuf->unlock();
            current_offset = next_offset;
          }
}
