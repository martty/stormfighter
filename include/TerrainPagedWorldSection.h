#ifndef STORMFIGHTER_TERRAINPAGEDWORLDSECTION_H_
#define STORMFIGHTER_TERRAINPAGEDWORLDSECTION_H_

#include <Terrain/OgreTerrainGroup.h>
#include <Terrain/OgreTerrainPaging.h>
#include <Terrain/OgreTerrainPagedWorldSection.h>

#include "common.h"

namespace SF {

class TerrainPagedWorldSection : public Ogre::TerrainPagedWorldSection{
  public:
    /** Default constructor */
    TerrainPagedWorldSection(const Ogre::String &name, Ogre::PagedWorld *parent, Ogre::SceneManager *sm);

    void init(Ogre::TerrainGroup* grp);

    void loadPage(Ogre::PageID pageID, bool forceSynchronous=false);
    void unloadPage(Ogre::PageID pageID, bool forceSynchronous=false);
    /** Default destructor */
    virtual ~TerrainPagedWorldSection();
  protected:
  private:
};

};

#endif // STORMFIGHTER_TERRAINPAGEDWORLDSECTION_H_
