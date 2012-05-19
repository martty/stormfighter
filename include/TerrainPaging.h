#ifndef STORMFIGHTER_TERRAINPAGING_H_
#define STORMFIGHTER_TERRAINPAGING_H_

// REIMPLEMENTATION OF OGRE'S TERRAINPAGING CLASS TO USE OUR TERRAINPAGEDWORLDSECTION
#include <Paging/OgrePaging.h>
#include <Terrain/OgreTerrainGroup.h>

namespace SF {

class TerrainPagedWorldSection;

class TerrainPaging
{
  public:
    /** Default constructor */
    TerrainPaging(Ogre::PageManager* pageMgr);
    /** Default destructor */
    virtual ~TerrainPaging();

    TerrainPagedWorldSection* createWorldSection(Ogre::PagedWorld* world, Ogre::TerrainGroup* terrainGroup,
			Ogre::Real loadRadius, Ogre::Real holdRadius,
			Ogre::int32 minX = -10, Ogre::int32 minY = -10, Ogre::int32 maxX = 10, Ogre::int32 maxY = 10,
			const Ogre::String& sectionName = Ogre::StringUtil::BLANK);

  protected:
    class _OgreTerrainExport SectionFactory : public Ogre::PagedWorldSectionFactory
		{
		public:
			static const Ogre::String FACTORY_NAME;
			const Ogre::String& getName() const;
			Ogre::PagedWorldSection* createInstance(const Ogre::String& name, Ogre::PagedWorld* parent, Ogre::SceneManager* sm);
			void destroyInstance(Ogre::PagedWorldSection*);

		};

		SectionFactory mSectionFactory;
		Ogre::PageManager* mManager;
};

};

#endif // STORMFIGHTER_TERRAINPAGING_H_
