#include "Terrain.h"

using namespace Ogre;

STerrain::STerrain() {
  init(Ogre::Terrain::ALIGN_X_Z, 513, 1200.0f);
}

STerrain::STerrain(Terrain::Alignment alignment, uint16_t terrainSize, SReal worldSize){
  init(alignment, terrainSize, worldSize);
}

void STerrain::init(Terrain::Alignment alignment, uint16_t terrainSize, SReal worldSize){
  terrainGroup_ = OGRE_NEW Ogre::TerrainGroup(OgreFramework::getSingletonPtr()->m_pSceneMgr, alignment, terrainSize, worldSize);

  // Configure default import settings for if we use imported image
  Ogre::Terrain::ImportData& defaultimp = terrainGroup_->getDefaultImportSettings();
  defaultimp.terrainSize = 513;
  defaultimp.worldSize = 1200.0f;
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
}

void STerrain::defineTerrain(long x, long y){
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

void STerrain::getTerrainImage(bool flipX, bool flipY, Ogre::Image& img) {
  img.load("terrain.png", Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
  if (flipX)
    img.flipAroundY();
  if (flipY)
    img.flipAroundX();
}

void STerrain::initBlendMaps(Ogre::Terrain* terrain){
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

Terrain::ImportData* STerrain::prepareImportData(int x, int y){
  Coordinate coord(x,y);
  CoordinateImportData::iterator it = importdatas_.find(coord);
  if (it != importdatas_.end()){
      return (*it).second;
  } else {
    importdatas_[coord] = new Terrain::ImportData(terrainGroup_->getDefaultImportSettings()); // copy of default
    return importdatas_[coord];
  }
  return NULL; // never reached
}

void STerrain::addLayerTo(int x, int y, SReal worldSize, SString texture_diffusespecular, SString texture_normalheight){
  Terrain::ImportData* import = prepareImportData(x,y);
  int layer = import->layerList.size(); // the next layer
  import->layerList.resize(layer+1);
  import->layerList[layer].worldSize = worldSize;
  import->layerList[layer].textureNames.push_back(texture_diffusespecular);
  import->layerList[layer].textureNames.push_back(texture_normalheight);
}
void STerrain::setHeightImageTo(int x, int y, SString heightmap){
  Terrain::ImportData* import = prepareImportData(x,y);
  Image* img = OGRE_NEW Image();
  img->load(heightmap, Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
  import->inputImage = img;
  import->deleteInputData = true; // let Ogre delete the Image
}
void STerrain::setConstantHeightTo(int x, int y, SReal height){
  Terrain::ImportData* import = prepareImportData(x,y);
  import->constantHeight = height;
}

void STerrain::setInputScalingTo(int x, int y, SReal inputscale){
  Terrain::ImportData* import = prepareImportData(x,y);
  import->inputScale = inputscale;
}

void STerrain::onInit(){
  terrainGroup_->setFilenameConvention(object()->name()+"_terrain", Ogre::String("dat"));
  terrainGroup_->setOrigin(object()->transform()->position());

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
}
