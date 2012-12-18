#include "Resources.h"
#include "Graphics.h"
#include <sys/stat.h>
#include <iostream>
#include <fstream>
#include <boost/property_tree/json_parser.hpp>

namespace SF {

Resources::Resources(StormfighterApp* app):Module(app), DEFAULT_RESOURCE_GROUP_NAME(Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME){
  #ifdef _DEBUG
  resourcesCfg_ = "resources_d.cfg";
  #else
  resourcesCfg_ = "resources.cfg";
  #endif
}

Resources::~Resources(){
}

void Resources::initialise(){
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
      //if(i->second == "Zip") // add only zip files, use recursive for everything else
      Ogre::ResourceGroupManager::getSingleton().addResourceLocation(archName, typeName, secName);
    }
  }
  Ogre::ResourceGroupManager::getSingleton().addResourceLocation ("media/common", "FileSystem", Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME, true);
  Ogre::TextureManager::getSingleton().setDefaultNumMipmaps(5);
  Ogre::ResourceGroupManager::getSingleton().initialiseAllResourceGroups();
}

void Resources::createResourceGroup(SString groupName) {
  Ogre::ResourceGroupManager::getSingleton().createResourceGroup(groupName, true);
}

void Resources::addResourceLocation(SString path, SString type, SString resourceGroup, bool recursive){
  Ogre::ResourceGroupManager::getSingleton().addResourceLocation(path, type, resourceGroup, recursive);
  Ogre::ResourceGroupManager::getSingleton().initialiseResourceGroup(resourceGroup);
  //Ogre::StringVectorPtr p = Ogre::ResourceGroupManager::getSingleton().listResourceNames(resourceGroup, false);
  //for (Ogre::StringVector::iterator iter = p->begin(); iter != p->end(); iter++){
  //  LOG(*iter);
  //}
}

SString Resources::getResourceDirectory(SString resourceName, SString resourceGroup) {
  Ogre::FileInfoListPtr fileInfo = Ogre::ResourceGroupManager::getSingleton().findResourceFileInfo(resourceGroup, resourceName);
  if ((*fileInfo)[0].archive->getType() != "FileSystem")
    throw SException("tried to get directory for resource which is not of FileSystem type - unsupported");
  return (*fileInfo)[0].archive->getName();
}

bool Resources::resourceExists(SString resourceName, SString resourceGroup){
  return Ogre::ResourceGroupManager::getSingleton().resourceExists(resourceGroup, resourceName);
}

long long Resources::getResourceModified(SString resourceName, SString resourceGroup){
  Ogre::FileInfoListPtr fileInfo = Ogre::ResourceGroupManager::getSingleton().findResourceFileInfo(resourceGroup, resourceName);
  SString file_to_timestamp;
  if (fileInfo.isNull()){
    OGRE_EXCEPT(Ogre::Exception::ERR_FILE_NOT_FOUND, "File " + Ogre::String(resourceName) + " not found.", "!");
  }
  if ((*fileInfo)[0].archive->getType() == "FileSystem"){
      // non-archived - just check the file directly
      file_to_timestamp = (*fileInfo)[0].archive->getName() + "/" + (*fileInfo)[0].filename;
  } else {
      // archived - check the timestamp of the archive
      file_to_timestamp = (*fileInfo)[0].archive->getName();
  }

  struct stat fileStat;
  if(stat(file_to_timestamp.c_str(),&fileStat) < 0)
    throw SException("stat failed on: "+file_to_timestamp);
  return static_cast<long long>(fileStat.st_mtime);
}

void Resources::reloadMaterials() {
   // This is optional if you don't need textures to update
    LOG("RELOADING!!!!");
    Ogre::TextureManager::getSingletonPtr()->reloadAll();

    Ogre::GpuProgramManager* gpm = Ogre::GpuProgramManager::getSingletonPtr();
    Ogre::HighLevelGpuProgramManager* hlgpm = Ogre::HighLevelGpuProgramManager::getSingletonPtr();
    Ogre::MaterialManager* mm = Ogre::MaterialManager::getSingletonPtr();
    Ogre::ResourceGroupManager* rgm = Ogre::ResourceGroupManager::getSingletonPtr();

    // This is optional if you don't want to update low level GPU programs
    Ogre::ResourceManager::ResourceMapIterator i = gpm->getResourceIterator();
    while (i.hasMoreElements())
    {
        Ogre::ResourcePtr r = i.getNext();
        SString name = r->getName();
        SString origin = r->getOrigin();
        SString group = r->getGroup();
        Ogre::GpuProgramType type = ((Ogre::GpuProgramPtr)r)->getType();
        SString syntax = ((Ogre::GpuProgramPtr)r)->getSyntaxCode();

        if (!origin.empty())
        {
            gpm->remove(r);
            try {
            gpm->load(name, group, origin, type, syntax);
            } catch ( std::exception& e) {
              LOG("bb");
            }
        }
    }

    // This is optional if you don't want to update high level GPU programs (most shaders)
    /*Ogre::ResourceManager::ResourceMapIterator it =
        Ogre::MaterialManager::getSingleton().getResourceIterator();
    while (it.hasMoreElements())
    {
        Ogre::MaterialPtr material = it.getNext();
      Ogre::Material::TechniqueIterator techniqueIterator = material->getTechniqueIterator();
      while (techniqueIterator.hasMoreElements())
      {
         Ogre::Technique* technique = techniqueIterator.getNext();
         Ogre::Technique::PassIterator passIterator = technique->getPassIterator();
         while (passIterator.hasMoreElements())
         {
            Ogre::Pass* pass = passIterator.getNext();
            if(pass->hasVertexProgram())
            {
               std::string vert_program_name = pass->getVertexProgramName();
               // get original params
               Ogre::GpuProgramParametersSharedPtr vparamsSPtr = pass->getVertexProgramParameters();
               // save them for the moment
               Ogre::GpuProgramParameters old_vert_params;
               old_vert_params.copyConstantsFrom(*vparamsSPtr.getPointer());
               pass->getVertexProgram()->reload();
               // re-assign the vertex shader and reset the params
               pass->setVertexProgram(vert_program_name, true);
               // copy the old ones back
               //pass->getVertexProgramParameters()->copyConstantsFrom(old_vert_params);
            }
            if(pass->hasFragmentProgram())
            {
               std::string frag_program_name = pass->getFragmentProgramName();
               // get original params
               Ogre::GpuProgramParametersSharedPtr fparamsSPtr = pass->getFragmentProgramParameters();
               LOG("START");
               //pass->getFragmentProgram()->createParameters();
               /*const Ogre::GpuProgramParameters::AutoConstantList& clist1 = fparamsSPtr->getAutoConstantList();
               for (Ogre::GpuProgramParameters::AutoConstantList::const_iterator it = clist1.begin(); it!=clist1.end(); it++){
                 LOG(STRING((*it).paramType));
               }
               LOG("END");
               pass->getFragmentProgram()->reload();
               material->compile();
               //pass->getFragmentProgram()->createParameters();
               //pass->setFragmentProgram(frag_program_name, true);
               LOG("START2");
               const Ogre::GpuProgramParameters::AutoConstantList& clist2 = pass->getFragmentProgramParameters()->getAutoConstantList();
               for (Ogre::GpuProgramParameters::AutoConstantList::const_iterator it = clist2.begin(); it!=clist2.end(); it++){
                 LOG(STRING((*it).paramType));
               }
               LOG("END2");
               // re-assign the fragment shader and reset the params
               // copy the old ones back
               //pass->getFragmentProgramParameters()->copyConstantsFrom(old_frag_params);
            }
            pass->_notifyNeedsRecompile();
         }
        }
    }*/
    i = hlgpm->getResourceIterator();
    hlgpm->setVerbose(true);
    while (i.hasMoreElements())
    {
        Ogre::ResourcePtr r = i.getNext();
        if(!r->isLoaded())
          continue;
        Ogre::HighLevelGpuProgramPtr h = static_cast<Ogre::HighLevelGpuProgramPtr>(r);
        Ogre::String origin = r->getOrigin();
        Ogre::String group = r->getGroup();
        Ogre::NameValuePairList list;
        SString lang = h->getLanguage();
        SString n = h->getName();
        Ogre::GpuProgramType ty = h->getType();
        //hlgpm->remove(r);
        h->reload();
    }

    // This is where we reload the actual material scripts
    i = mm->getResourceIterator();
    StringVector mats;
    while (i.hasMoreElements())
    {
        Ogre::ResourcePtr r = i.getNext();
        Ogre::MaterialPtr m = static_cast<Ogre::MaterialPtr>(r);
        SString origin = r->getOrigin();
        SString group = r->getGroup();
        bool exists = false;
        for (unsigned int j = 0; j < mats.size(); j++){
          if (mats[j] == r->getName()){
            exists = true;
            break;
          }
        }
        if (!origin.empty() && r->isLoaded() && !exists)
        {
            //LOG(origin);
            //LOG(group);
            SString name = r->getName();
            mm->remove(r);
            r = mm->getByName(name);
            if (!r.isNull()){
              LOG("NOT REMOVED");
            }
            if (mm->resourceExists(name)){
              LOG("STILL EXISTS");
            }
            Ogre::DataStreamPtr pt = rgm->openResource(origin, group);
            try {
              mm->parseScript(pt, group);
              mm->load(name, group);
              mats.push_back(name);
            } catch ( std::exception& e){
              LOG("Error loading material: "+ r->getName());
            }
        }
    }
    LOG("Reload complete.");
    // Here, you reset the materials on all entities in the scene
    Ogre::SceneManager::MovableObjectIterator j = Graphics::getSingletonPtr()->sceneManager()->getMovableObjectIterator("Entity");
    while (j.hasMoreElements())
    {
        Ogre::Entity* e = (Ogre::Entity*)j.getNext();
        for (int k = 0; k < e->getNumSubEntities(); k++)
        {
            Ogre::SubEntity* se = e->getSubEntity(k);
            se->setMaterialName(se->getMaterialName());
        }
    }

    // Here, you reset the materials on all particle systems in the scene
    j = Graphics::getSingletonPtr()->sceneManager()->getMovableObjectIterator("ParticleSystem");
    while (j.hasMoreElements())
    {
        Ogre::ParticleSystem* ps = (Ogre::ParticleSystem*)j.getNext();
        ps->setMaterialName(ps->getMaterialName());
    }

    // Do this for the rest of the objects in your scene you want to update materials for

    Ogre::Root& root = Ogre::Root::getSingleton();
		if(Ogre::Pass::getDirtyHashList().size()!=0 || Ogre::Pass::getPassGraveyard().size()!=0)
		{
			Ogre::SceneManagerEnumerator::SceneManagerIterator scenesIter = root.getSceneManagerIterator();

			while(scenesIter.hasMoreElements())
			{
				Ogre::SceneManager* pScene = scenesIter.getNext();
				if(pScene)
				{
					Ogre::RenderQueue* pQueue = pScene->getRenderQueue();
					if(pQueue)
					{
						Ogre::RenderQueue::QueueGroupIterator groupIter = pQueue->_getQueueGroupIterator();
						while(groupIter.hasMoreElements())
						{
							Ogre::RenderQueueGroup* pGroup = groupIter.getNext();
							if(pGroup)
								pGroup->clear(false);
						}//end_while(groupIter.hasMoreElements())
					}//end_if(pScene)
				}//end_if(pScene)
			}//end_while(scenesIter.hasMoreElements())

			// Now trigger the pending pass updates
			Ogre::Pass::processPendingPassUpdates();

		}//end_if(m_Root..

  //if(!Ogre::ResourceGroupManager::getSingletonPtr()->resourceExistsInAnyGroup(materialName))
  //  return;
  //SString resgroup = Ogre::ResourceGroupManager::getSingletonPtr()->findGroupContainingResource(materialName);
  /*Ogre::MaterialManager::getSingletonPtr()->unload(materialName);
  Ogre::MaterialManager::getSingletonPtr()->remove(materialName);
  Ogre::ResourcePtr rptr = Ogre::MaterialManager::getSingletonPtr()->load(materialName, Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
  LOG("RELOADING");
  /*Ogre::MeshManager::ResourceMapIterator it = Ogre::MeshManager::getSingletonPtr()->getResourceIterator();
  while(it.hasMoreElements()){
    Ogre::Mesh* mesh = static_cast<Ogre::Mesh*>(it.getNext().getPointer());
    LOG(mesh->getName());
    //mesh->updateMaterialForAllSubMeshes();
    Ogre::Mesh::SubMeshIterator sit = mesh->getSubMeshIterator();
    while(sit.hasMoreElements()){
      Ogre::SubMesh* smesh = static_cast<Ogre::SubMesh*>(sit.getNext());
      LOG(smesh->getMaterialName());
      if (!smesh->getMaterialName().empty()){
        SString resgroup = Ogre::ResourceGroupManager::getSingletonPtr()->findGroupContainingResource(smesh->getMaterialName());
        smesh->setMaterialName(smesh->getMaterialName(), resgroup);
      }
    }
  }*/
  /*Ogre::SceneManager::MovableObjectIterator iterator = Graphics::getSingletonPtr()->sceneManager()->getMovableObjectIterator("Entity");
  while(iterator.hasMoreElements()){
      Ogre::Entity* e = static_cast<Ogre::Entity*>(iterator.getNext());
      LOG(e->getName());
      for (int i = 0; i < e->getNumSubEntities(); i++){
        LOG(e->getSubEntity(i)->getMaterialName());
        SString mat = e->getSubEntity(i)->getMaterialName();
        e->getSubEntity(i)->setMaterialName("BaseWhite");
        //Ogre::MaterialManager::getSingletonPtr()->unload(materialName);
        e->getSubEntity(i)->setMaterialName(mat);
      }
  }
  rptr->reload();*/
}

void Resources::writeObjectFile(SString filename, SPropertyTree tree){
  boost::property_tree::write_json(filename, tree);
}

SPropertyTree Resources::readObjectFile(SString filename){
  SPropertyTree tree;
  boost::property_tree::read_json(filename, tree);
  return tree;
}

};
