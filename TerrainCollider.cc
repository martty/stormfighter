#include "TerrainCollider.h"
#include "Terrain.h"
#include <BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h>

STerrainCollider::STerrainCollider(){
  autoConfig_ = true;
}

STerrainCollider::~STerrainCollider(){
}

STerrainCollider* STerrainCollider::clone() const {
  // collision shape sharing
  STerrainCollider* tcol = new STerrainCollider();
  tcol->collisionShape_ = collisionShape_;
  return tcol;
}

void STerrainCollider::onInit(){
if(!autoConfig_) // if we are not using autocfg, then this component is already READY
    return;
  STerrain* terrain = static_cast<STerrain*>(object()->component("Terrain"));
  // FIXME: we should not use (0,0)
  SReal* heightDataPT = terrain->heightData(0,0);
  SReal minHeight = terrain->minHeight(0,0);
  SReal maxHeight = terrain->maxHeight(0,0);
  int terrainSize = terrain->terrainSize(0,0);
  SReal* heightData = new SReal[terrainSize*terrainSize];
  // VOODOO
  for(int i = 0; i < terrainSize; i++){
    memcpy(heightData+terrainSize*i, heightDataPT+terrainSize*(terrainSize-i-1), sizeof(float)*(terrainSize) );
  }
  btHeightfieldTerrainShape* heightfieldShape = new btHeightfieldTerrainShape(terrainSize, terrainSize, heightData, 1, btScalar(minHeight), btScalar(maxHeight), 1, PHY_FLOAT, true);
  heightfieldShape->setUseDiamondSubdivision(true);
  collisionShape_ = heightfieldShape;
  float metersBetweenVertices = terrain->worldSize()/(terrainSize-1);
  btVector3 localScaling(metersBetweenVertices, 1, metersBetweenVertices);
  collisionShape_->setLocalScaling(localScaling);
  setState(READY);
}
