#ifndef STORMFIGHTER_TERRAINPAGEDWORLDSECTION_H_
#define STORMFIGHTER_TERRAINPAGEDWORLDSECTION_H_

#include <Terrain/OgreTerrainGroup.h>
#include <Terrain/OgreTerrainPaging.h>
#include <Terrain/OgreTerrainPagedWorldSection.h>

#include "common.h"

namespace SF {

class TerrainPagedWorldSection : public Ogre::TerrainPagedWorldSection{
 public:
  TerrainPagedWorldSection(const Ogre::String &name, Ogre::PagedWorld *parent, Ogre::SceneManager *sm);

  void init(Ogre::TerrainGroup* grp);

  void loadPage(Ogre::PageID pageID, bool forceSynchronous=false);
  void unloadPage(Ogre::PageID pageID, bool forceSynchronous=false);

  Ogre::Terrain::ImportData& importData() { return *impdata_; }
  void defineLayer(unsigned int layer, float worldSize, SString first, SString second);

  /** Default destructor */
  virtual ~TerrainPagedWorldSection();
 private:
  Ogre::Terrain::ImportData* impdata_;
};

};

#endif // STORMFIGHTER_TERRAINPAGEDWORLDSECTION_H_
