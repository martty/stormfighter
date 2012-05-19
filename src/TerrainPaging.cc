#include "TerrainPaging.h"
#include "TerrainPagedWorldSection.h"

namespace SF {

//---------------------------------------------------------------------
TerrainPaging::TerrainPaging(Ogre::PageManager* pageMgr)
  : mManager(pageMgr)
{
  mManager->addWorldSectionFactory(&mSectionFactory);
}
//---------------------------------------------------------------------
TerrainPaging::~TerrainPaging()
{
  mManager->removeWorldSectionFactory(&mSectionFactory);
}
//---------------------------------------------------------------------
TerrainPagedWorldSection* TerrainPaging::createWorldSection(
  Ogre::PagedWorld* world, Ogre::TerrainGroup* terrainGroup,
  Ogre::Real loadRadius, Ogre::Real holdRadius, Ogre::int32 minX, Ogre::int32 minY, Ogre::int32 maxX, Ogre::int32 maxY,
  const Ogre::String& sectionName)
{
  TerrainPagedWorldSection* ret = static_cast<TerrainPagedWorldSection*>(
    world->createSection(terrainGroup->getSceneManager(), SectionFactory::FACTORY_NAME, sectionName));

  ret->init(terrainGroup);
  ret->setLoadRadius(loadRadius);
  ret->setHoldRadius(holdRadius);
  ret->setPageRange(minX, minY, maxX, maxY);

  return ret;

}
//---------------------------------------------------------------------
//---------------------------------------------------------------------
const Ogre::String TerrainPaging::SectionFactory::FACTORY_NAME("Terrain");

const Ogre::String& TerrainPaging::SectionFactory::getName() const
{
  return FACTORY_NAME;
}
//---------------------------------------------------------------------
Ogre::PagedWorldSection* TerrainPaging::SectionFactory::createInstance(const Ogre::String& name, Ogre::PagedWorld* parent, Ogre::SceneManager* sm)
{
  return OGRE_NEW TerrainPagedWorldSection(name, parent, sm);
}
//---------------------------------------------------------------------
void TerrainPaging::SectionFactory::destroyInstance(Ogre::PagedWorldSection* s)
{
  OGRE_DELETE s;
}

};
