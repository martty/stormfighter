#include "PageProvider.h"
#include <Terrain/OgreTerrainGroup.h>
#include <Terrain/OgreTerrain.h>
#include <Terrain/OgreTerrainPagedWorldSection.h>

namespace SF {

PageProvider::PageProvider()
{
  //ctor
}

PageProvider::~PageProvider()
{
  //dtor
}

bool PageProvider::prepareProceduralPage(Ogre::Page* page, Ogre::PagedWorldSection* section){
  Ogre::TerrainPagedWorldSection* tpws = static_cast<Ogre::TerrainPagedWorldSection*>(section);
  Ogre::TerrainGroup* tg = tpws->getTerrainGroup();
  //unpack
  long x;
  long y;
  tg->unpackIndex(page->getID(),&x,&y);

  Ogre::TerrainGroup::TerrainSlotDefinition* tsd = tg->getTerrainDefinition(x,y);
  if(!tsd){
    //tg->defineTerrain(x,y,0.0f);
    LOG("Warning - terrain not prepared at:"+STRING(x)+","+STRING(y));
  } else {
    LOG("page already prepared:"+STRING(x)+","+STRING(y));
  }
  return true;
}
bool PageProvider::loadProceduralPage(Ogre::Page* page, Ogre::PagedWorldSection* section){
  Ogre::TerrainPagedWorldSection* tpws = static_cast<Ogre::TerrainPagedWorldSection*>(section);
  Ogre::TerrainGroup* tg = tpws->getTerrainGroup();
  long x;
  long y;
  tg->unpackIndex(page->getID(),&x,&y);
  //load, if not loaded yet
  if(!tg->getTerrain(x,y)){
    Ogre::TerrainGroup::TerrainSlotDefinition* tsd = tg->getTerrainDefinition(x,y);
    if(tsd){
      tg->loadTerrain(x,y,true);
    //tg->update();
      LOG("loading page:"+STRING(x)+","+STRING(y));
    } else {
      LOG("Warning - unprepared terrain not loaded at:"+STRING(x)+","+STRING(y));
    }
  } else {
    LOG("page already loaded:"+STRING(x)+","+STRING(y));
  }
  return true;
}
bool PageProvider::unloadProceduralPage(Ogre::Page* page, Ogre::PagedWorldSection* section){
  Ogre::TerrainPagedWorldSection* tpws = static_cast<Ogre::TerrainPagedWorldSection*>(section);
  Ogre::TerrainGroup* tg = tpws->getTerrainGroup();
  long x;
  long y;
  tg->unpackIndex(page->getID(),&x,&y);
  LOG("unloading page:"+STRING(x)+","+STRING(y));
  return true;
}
bool PageProvider::unprepareProceduralPage(Ogre::Page* page, Ogre::PagedWorldSection* section){
  Ogre::TerrainPagedWorldSection* tpws = static_cast<Ogre::TerrainPagedWorldSection*>(section);
  Ogre::TerrainGroup* tg = tpws->getTerrainGroup();
  long x;
  long y;
  tg->unpackIndex(page->getID(),&x,&y);
  LOG("unpreparing page:"+STRING(x)+","+STRING(y));
  return true;
}

};
