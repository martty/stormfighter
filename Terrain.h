#ifndef STORMFIGHTER_TERRAIN_H_
#define STORMFIGHTER_TERRAIN_H_

#include "common.h"
#include <utility> // for pair
#include <map>
#include <Terrain/OgreTerrain.h>
#include <Terrain/OgreTerrainGroup.h>
#include "Component.h"
#include "GameObject.h"

typedef std::pair<int, int> Coordinate;
typedef std::map<Coordinate, Ogre::Terrain::ImportData*> CoordinateImportData;

/**
 * @brief Terrain class, holds a number individual terrain tiles, which can be independently specified/loaded/unloaded.
 */
class STerrain : public Component {
 public:
  /// Create a terrain with default values
  STerrain();

  STerrain(Ogre::Terrain::Alignment alignment, uint16_t terrainSize, SReal worldSize);

  SString const type() const { return "Terrain"; }

  // TODO: default settings

  // Individual specification of Ogre::Terrain tiles
  /// Add a texture layer to (x,y) Terrain
  void addLayerTo(int x, int y, SReal worldSize, SString texture_diffusespecular, SString texture_normalheight);
  /// Set the heightmap to use for (x,y) Terrain
  void setHeightImageTo(int x, int y, SString heightmap);
  /// Set the (x,y) Terrain to constant height
  void setConstantHeightTo(int x, int y, SReal height);
  // TODO: more importdata settings
  void onInit();

 private:
  Ogre::Terrain::ImportData* prepareImportData(int x, int y);

  void defineTerrain(long x, long y);
  void initBlendMaps(Ogre::Terrain* terrain);
 // void configureTerrainDefaults(Ogre::Light* light);

  void getTerrainImage(bool flipX, bool flipY, Ogre::Image& img); // FIXME: probably bad place

  Ogre::TerrainGroup* terrainGroup_;
  bool terrainsImported_;

  CoordinateImportData importdatas_;

  void init(Ogre::Terrain::Alignment aligment, uint16_t terrainSize, SReal worldSize);
};

#endif
