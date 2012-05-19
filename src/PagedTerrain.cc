#include "PagedTerrain.h"
#include "Camera.h"
#include "PageProvider.h"
#include "TerrainPagedWorldSection.h"
#include "TerrainPaging.h"
#include <Terrain/OgreTerrainMaterialGeneratorA.h>

namespace SF {

PagedTerrain::PagedTerrain(Ogre::SceneManager* sm){
  sceneManager_ = sm;

  terrainGlobals_ = OGRE_NEW Ogre::TerrainGlobalOptions();

  pageManager_ = OGRE_NEW Ogre::PageManager();
  pageManager_->setDebugDisplayLevel(1);
  pageProvider_ = new PageProvider();
  pageManager_->setPageProvider(pageProvider_);
  terrainPaging_ = new TerrainPaging(pageManager_);

  // global terrain settings cfg
  terrainGlobals_->setMaxPixelError(8);
  // testing composite map
  terrainGlobals_->setCompositeMapDistance(3000);

  /*terrainGlobals_->getDefaultMaterialGenerator()->setDebugLevel(1);
  Ogre::TerrainMaterialGeneratorA::SM2Profile* matProfile =
         static_cast<Ogre::TerrainMaterialGeneratorA::SM2Profile*>(terrainGlobals_->getDefaultMaterialGenerator()->getActiveProfile());
  matProfile->setLayerParallaxMappingEnabled(false);
  matProfile->setLayerSpecularMappingEnabled(false);
  matProfile->setLightmapEnabled(false);
  matProfile->setCompositeMapEnabled(false);
  matProfile->setGlobalColourMapEnabled(false);
  matProfile->setReceiveDynamicShadowsEnabled(false);*/

  //createWorld("defaultWorld");
  Ogre::ResourceGroupManager::getSingleton().createResourceGroup("Terrain", true);
  sceneManager_->setAmbientLight(Ogre::ColourValue(0.2, 0.2, 0.2));
 /* Ogre::TerrainGroup* tg0 = createTerrainGroup(Ogre::Terrain::ALIGN_X_Z, 513, 12000);
  tg0->setOrigin(SVector3(0, 0, 0));
  tg0->setFilenameConvention("terrain_test", "terraindat");
  Ogre::Image img;
  img.load("terrain.png", Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME);
  tg0->defineTerrain(0,0,&img);
  tg0->loadAllTerrains(true);
  Ogre::TerrainGroup::TerrainIterator ti = tg0->getTerrainIterator();
        while(ti.hasMoreElements()){
            Ogre::Terrain* t = ti.getNext()->instance;
            initBlendMaps(t);
        }
  */
}

PagedTerrain::~PagedTerrain(){
}

void PagedTerrain::createWorld(SString name){
  pageManager_->createWorld(name);
}

Ogre::TerrainGroup* PagedTerrain::createTerrainGroup(Ogre::Terrain::Alignment alignment, int terrainSize, SReal worldSize){
  Ogre::TerrainGroup* tg = OGRE_NEW Ogre::TerrainGroup(sceneManager_, alignment, terrainSize, worldSize);
  tg->setResourceGroup("Terrain");
  Ogre::Terrain::ImportData& defaultimp = tg->getDefaultImportSettings();
  defaultimp.terrainSize = terrainSize;
  defaultimp.worldSize = worldSize;
  defaultimp.inputScale = 600;
  defaultimp.minBatchSize = 33;
  defaultimp.maxBatchSize = 65;
  // textures
  defaultimp.layerList.resize(3);
  defaultimp.layerList[0].worldSize = 100;
  defaultimp.layerList[0].textureNames.push_back("dirt_grayrocky_diffusespecular.dds");
  defaultimp.layerList[0].textureNames.push_back("dirt_grayrocky_normalheight.dds");
  defaultimp.layerList[1].worldSize = 30;
  defaultimp.layerList[1].textureNames.push_back("grass_green-01_diffusespecular.dds");
  defaultimp.layerList[1].textureNames.push_back("grass_green-01_normalheight.dds");
  defaultimp.layerList[2].worldSize = 200;
  defaultimp.layerList[2].textureNames.push_back("growth_weirdfungus-03_diffusespecular.dds");
  defaultimp.layerList[2].textureNames.push_back("growth_weirdfungus-03_normalheight.dds");
  defaultimp.layerList.resize(1);
//  tg->defineTerrain(0,0,1.0f);
  tg->defineTerrain(0,1,10.0f);
//  tg->loadAllTerrains(true);
//  tg->saveAllTerrains(false, true);
//  tg->saveGroupDefinition("tg0.groupdef");
  return tg;
}

Ogre::PagedWorldSection* PagedTerrain::createWorldSection(SString name, SString worldName, Ogre::TerrainGroup* tg, SReal loadRadius, SReal holdRadius){
  Ogre::PagedWorld* world = pageManager_->getWorld(worldName);
  return terrainPaging_->createWorldSection(world, tg, loadRadius, holdRadius, 0, 0, 1, 1, name);
}

Ogre::PagedWorldSection* PagedTerrain::section(SString worldName, SString sectionName) const{
  Ogre::PagedWorld* world = pageManager_->getWorld(worldName);
  return world->getSection(sectionName);
}

void PagedTerrain::addCamera(Camera* cam){
  pageManager_->addCamera(cam->_camera());
}

void PagedTerrain::setTerrainLight(Ogre::Light* light){
  terrainGlobals_->setLightMapDirection(light->getDerivedDirection());
  terrainGlobals_->setCompositeMapAmbient(sceneManager_->getAmbientLight());
  terrainGlobals_->setCompositeMapDiffuse(light->getDiffuseColour());
}

void PagedTerrain::initBlendMaps(Ogre::Terrain* terrain){
    Ogre::TerrainLayerBlendMap* blendMap0 = terrain->getLayerBlendMap(1);
    //Ogre::TerrainLayerBlendMap* blendMap1 = terrain->getLayerBlendMap(2);
  /*  Ogre::Real minHeight0 = 70;
    Ogre::Real fadeDist0 = 40;
    Ogre::Real minHeight1 = 70;
    Ogre::Real fadeDist1 = 15;
    float* pBlend1 = blendMap1->getBlendPointer();
    for (Ogre::uint16 y = 0; y < terrain->getLayerBlendMapSize(); ++y)
    {
        for (Ogre::uint16 x = 0; x < terrain->getLayerBlendMapSize(); ++x)
        {
            Ogre::Real tx, ty;

            blendMap0->convertImageToTerrainSpace(x, y, &tx, &ty);
            Ogre::Real height = terrain->getHeightAtTerrainPosition(tx, ty);
            Ogre::Real val = (height - minHeight0) / fadeDist0;
            val = Ogre::Math::Clamp(val, (Ogre::Real)0, (Ogre::Real)1);

            val = (height - minHeight1) / fadeDist1;
            val = Ogre::Math::Clamp(val, (Ogre::Real)0, (Ogre::Real)1);
            *pBlend1++ = val;
        }
    }*/
    blendMap0->dirty();
    //blendMap1->dirty();
    blendMap0->update();
    //blendMap1->update();
}
};
