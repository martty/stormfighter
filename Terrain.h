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
  /**
  * @brief Create terrain with given values
  * @param alignment Alignment of the terrain plane (X/Z, X/Y, Y/Z)
  * @param terrainSize The number of vertices along the side of one tile of terrain (2^N + 1)
  * @param worldSize The size of one tile of terrain in world units
  */
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
  /// Set the scaling of input data
  void setInputScalingTo(int x, int y, SReal inputScale);
  // TODO: more importdata settings
  unsigned int onAdd(SString goname, STransform* transform);

  SReal* heightData(int x, int y);
  SReal worldSize();
  uint16_t terrainSize(int x, int y);
  SReal minHeight(int x, int y);
  SReal maxHeight(int x, int y);
  Ogre::Vector3 terrainPosition(int x, int y);
  void setMaterialNameTo(int x, int y, SString matname);

  Ogre::Vector3 normalAt(Ogre::Vector3 point);

 private:
  STerrain();
  /// prepares an importdata for filling in user values
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
