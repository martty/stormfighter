#ifndef STORMFIGHTER_PAGEDTERRAIN_H
#define STORMFIGHTER_PAGEDTERRAIN_H

#include "common.h"
#include <Terrain/OgreTerrain.h>
#include <Terrain/OgreTerrainGroup.h>
#include <Paging/OgrePaging.h>

namespace SF {

class Camera;
class PageProvider;
class TerrainPaging;
class TerrainPagedWorldSection;

class PagedTerrain {
 public:
  PagedTerrain(Ogre::SceneManager* sm);
  ~PagedTerrain();

  void createWorld(SString name);

  Ogre::TerrainGroup* createTerrainGroup(Ogre::Terrain::Alignment alignment, int terrainSize, SReal worldSize);
  TerrainPagedWorldSection* createWorldSection(SString name, SString worldName, Ogre::TerrainGroup* tg, SReal loadRadius, SReal holdRadius);

  TerrainPagedWorldSection* section(SString worldName, SString sectionName) const;
 // Ogre::Terrain::TerrainGroup terrainGroup(SString worldName, SString sectionName) const;
  void initBlendMaps(Ogre::Terrain* terrain);
  void setTerrainLight(Ogre::Light* light);
  void addCamera(Camera* cam);

 private:

  Ogre::PageManager* pageManager_;
  PageProvider* pageProvider_;
  TerrainPaging* terrainPaging_;
  Ogre::TerrainGlobalOptions* terrainGlobals_;

  Ogre::SceneManager* sceneManager_;
};

};

#endif // STORMFIGHTER_PAGEDTERRAIN_H
