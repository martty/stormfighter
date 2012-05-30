#ifndef STORMFIGHTER_TERRAINPAGEDWORLDSECTION_H_
#define STORMFIGHTER_TERRAINPAGEDWORLDSECTION_H_

#include <Terrain/OgreTerrainGroup.h>
#include <Terrain/OgreTerrainPaging.h>
#include <Terrain/OgreTerrainPagedWorldSection.h>

#include "common.h"

namespace SF {
  typedef std::pair<long, long> TerrainIndex;
  typedef std::map< TerrainIndex, Ogre::Terrain::ImportData > ImportDataMap;

class TerrainPagedWorldSection : public Ogre::TerrainPagedWorldSection{
 public:
  TerrainPagedWorldSection(const Ogre::String &name, Ogre::PagedWorld *parent, Ogre::SceneManager *sm);

  void init(Ogre::TerrainGroup* grp);

  void loadPage(Ogre::PageID pageID, bool forceSynchronous=false);
  void unloadPage(Ogre::PageID pageID, bool forceSynchronous=false);

  Ogre::Terrain::ImportData& importData(long x, long y);
  void defineLayer(long x, long y, unsigned int layer, float worldSize, SString first, SString second, SString blend);
  void initBlendMaps(long x, long y);

  SVector3 getNormalAt(SVector3 position);

  /** Default destructor */
  virtual ~TerrainPagedWorldSection();
 private:
  ImportDataMap impdatamap_;
};

};

#endif // STORMFIGHTER_TERRAINPAGEDWORLDSECTION_H_
