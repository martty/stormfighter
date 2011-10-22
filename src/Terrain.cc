#include "Terrain.h"
#include "Graphics.h"

namespace SF {

Terrain::Terrain() {
  init(Ogre::Terrain::ALIGN_X_Z, 513, 1200.0f);
}

Terrain::Terrain(Ogre::Terrain::Alignment alignment, uint16_t terrainSize, SReal worldSize){
  init(alignment, terrainSize, worldSize);
}

void Terrain::init(Ogre::Terrain::Alignment alignment, uint16_t terrainSize, SReal worldSize){
  terrainGroup_ = OGRE_NEW Ogre::TerrainGroup(Graphics::getSingletonPtr()->sceneManager(), alignment, terrainSize, worldSize);

  // Configure default import settings for if we use imported image
  Ogre::Terrain::ImportData& defaultimp = terrainGroup_->getDefaultImportSettings();
  defaultimp.terrainSize = terrainSize;
  defaultimp.worldSize = worldSize;
  defaultimp.inputScale = 60;
  defaultimp.minBatchSize = 33;
  defaultimp.maxBatchSize = 65;
  // textures
  /*defaultimp.layerList.resize(3);
  defaultimp.layerList[0].worldSize = 100;
  defaultimp.layerList[0].textureNames.push_back("dirt_grayrocky_diffusespecular.dds");
  defaultimp.layerList[0].textureNames.push_back("dirt_grayrocky_normalheight.dds");
  defaultimp.layerList[1].worldSize = 30;
  defaultimp.layerList[1].textureNames.push_back("grass_green-01_diffusespecular.dds");
  defaultimp.layerList[1].textureNames.push_back("grass_green-01_normalheight.dds");
  defaultimp.layerList[2].worldSize = 200;
  defaultimp.layerList[2].textureNames.push_back("growth_weirdfungus-03_diffusespecular.dds");
  defaultimp.layerList[2].textureNames.push_back("growth_weirdfungus-03_normalheight.dds");
  */
  setState(CREATED);
}

Terrain* Terrain::clone() const {
  // TODO: clone all
  Terrain* terr = new Terrain();
  return terr;
}

void Terrain::defineTerrain(long x, long y){
  Ogre::String filename = terrainGroup_->generateFilename(x, y);
  if (Ogre::ResourceGroupManager::getSingleton().resourceExists(terrainGroup_->getResourceGroup(), filename)) {
    terrainGroup_->defineTerrain(x, y);
  } else {
    Coordinate coord(x,y);
    CoordinateImportData::iterator it = importdatas_.find(coord);
    if (it != importdatas_.end()){
      // the slot has been specified, load it
      terrainGroup_->defineTerrain(x, y, (*it).second);
    } else {
      // fallback, if no specification
      Ogre::Image img;
      getTerrainImage(x % 2 != 0, y % 2 != 0, img);
      terrainGroup_->defineTerrain(x, y, &img);
    }
    terrainsImported_= true;
  }
}

void Terrain::getTerrainImage(bool flipX, bool flipY, Ogre::Image& img) {
  img.load("terrain.png", Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
  if (flipX)
    img.flipAroundY();
  if (flipY)
    img.flipAroundX();
}

void Terrain::initBlendMaps(Ogre::Terrain* terrain){
  Ogre::TerrainLayerBlendMap* blendMap0 = terrain->getLayerBlendMap(1);
  Ogre::TerrainLayerBlendMap* blendMap1 = terrain->getLayerBlendMap(2);
  Ogre::Real minHeight0 = 1;
  Ogre::Real fadeDist0 = 40;
  Ogre::Real minHeight1 = 70;
  Ogre::Real fadeDist1 = 15;
  float* pBlend1 = blendMap1->getBlendPointer();
  for (Ogre::uint16 y = 0; y < terrain->getLayerBlendMapSize(); ++y) {
    for (Ogre::uint16 x = 0; x < terrain->getLayerBlendMapSize(); ++x) {
      Ogre::Real tx, ty;
      blendMap0->convertImageToTerrainSpace(x, y, &tx, &ty);
      Ogre::Real height = terrain->getHeightAtTerrainPosition(tx, ty);
      Ogre::Real val = (height - minHeight0) / fadeDist0;
      val = Ogre::Math::Clamp(val, (Ogre::Real)0, (Ogre::Real)1);
      val = (height - minHeight1) / fadeDist1;
      val = Ogre::Math::Clamp(val, (Ogre::Real)0, (Ogre::Real)1);
      *pBlend1++ = val;
    }
  }
  blendMap0->dirty();
  blendMap1->dirty();
  blendMap0->update();
  blendMap1->update();
}

Ogre::Terrain::ImportData* Terrain::prepareImportData(int x, int y){
  Coordinate coord(x,y);
  CoordinateImportData::iterator it = importdatas_.find(coord);
  if (it != importdatas_.end()){
      return (*it).second;
  } else {
    importdatas_[coord] = new Ogre::Terrain::ImportData(terrainGroup_->getDefaultImportSettings()); // copy of default
    return importdatas_[coord];
  }
  return NULL; // never reached
}

void Terrain::addLayerTo(int x, int y, SReal worldSize, SString texture_diffusespecular, SString texture_normalheight){
  Ogre::Terrain::ImportData* import = prepareImportData(x,y);
  int layer = import->layerList.size(); // the next layer
  import->layerList.resize(layer+1);
  import->layerList[layer].worldSize = worldSize;
  import->layerList[layer].textureNames.push_back(texture_diffusespecular);
  import->layerList[layer].textureNames.push_back(texture_normalheight);
}
void Terrain::setHeightImageTo(int x, int y, SString heightmap){
  Ogre::Terrain::ImportData* import = prepareImportData(x,y);
  Ogre::Image* img = OGRE_NEW Ogre::Image();
  img->load(heightmap, Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
  import->inputImage = img;
  import->deleteInputData = true; // let Ogre delete the Image
}
void Terrain::setConstantHeightTo(int x, int y, SReal height){
  Ogre::Terrain::ImportData* import = prepareImportData(x,y);
  import->constantHeight = height;
}

void Terrain::setInputScalingTo(int x, int y, SReal inputscale){
  Ogre::Terrain::ImportData* import = prepareImportData(x,y);
  import->inputScale = inputscale;
}

unsigned int Terrain::onAdd(SString goname, Transform* transform){
  terrainGroup_->setFilenameConvention(goname+"_terrain", Ogre::String("dat"));
  terrainGroup_->setOrigin(transform->position());

  // TODO: configurable indexes to load for terrains
  for (long x = 0; x <= 0; ++x){
    for (long y = 0; y <= 0; ++y){
      defineTerrain(x, y);
    }
  }
  // sync load since we want everything in place when we start
  terrainGroup_->loadAllTerrains(true);
  if (terrainsImported_) {
    Ogre::TerrainGroup::TerrainIterator ti = terrainGroup_->getTerrainIterator();
    while(ti.hasMoreElements()) {
      Ogre::Terrain* t = ti.getNext()->instance;
 //     initBlendMaps(t);
    }
  }
  terrainGroup_->freeTemporaryResources();
  setState(READY);
  return NONE;
}

SReal* Terrain::heightData(int x, int y){
  return terrainGroup_->getTerrain(x,y)->getHeightData();
}

SReal Terrain::minHeight(int x, int y){
  return terrainGroup_->getTerrain(x,y)->getMinHeight();
}

SReal Terrain::maxHeight(int x, int y){
  return terrainGroup_->getTerrain(x,y)->getMaxHeight();
}

SReal Terrain::worldSize(){
  return terrainGroup_->getTerrainWorldSize();
}

uint16_t Terrain::terrainSize(int x, int y){
  return terrainGroup_->getTerrain(x,y)->getSize();
}

Ogre::Vector3 Terrain::terrainPosition(int x, int y){
  return terrainGroup_->getTerrain(x,y)->getPosition();
}

void Terrain::setMaterialNameTo(int x, int y, SString matname){
//  terrainGroup_->getTerrain(x,y)->setMaterialName(matname);
}

Ogre::Vector3 Terrain::normalAt(Ogre::Vector3 point){
  long x, y;
  terrainGroup_->convertWorldPositionToTerrainSlot(point, &x, &y);
  Ogre::Vector3 pos1, pos2, pos3;
  SReal height1 = terrainGroup_->getTerrain(x, y)->getHeightAtWorldPosition(point+Ogre::Vector3(0, 10, 0));
  SReal height2 = terrainGroup_->getTerrain(x, y)->getHeightAtWorldPosition(point+Ogre::Vector3(0.1, 10, 0));
  SReal height3 = terrainGroup_->getTerrain(x, y)->getHeightAtWorldPosition(point+Ogre::Vector3(0, 10, 0.1));
  pos1 = point;
  pos1.y = height1;
  pos2 = point+Ogre::Vector3(0.1, 0, 0);
  pos2.y = height2;
  pos3 = point+Ogre::Vector3(0, 0, 0.1);
  pos3.y = height3;
  Ogre::Vector3 normal = -(pos2-pos1).crossProduct((pos3-pos1));
  return normal.normalisedCopy();
}

}; // namespace SF
