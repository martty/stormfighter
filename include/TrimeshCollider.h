#ifndef STORMFIGHTER_TRIMESHCOLLIDER_H_
#define STORMFIGHTER_TRIMESHCOLLIDER_H_

#include "Collider.h"

/**
* @brief Static triangle mesh for collision (no movement)
*
*
*/
class STrimeshCollider : public SCollider {
  public:
  /// Constructor, autocfg
  STrimeshCollider();
  /// Constructor, explicit mesh
  //STrimeshCollider(Ogre::MeshPtr)
  /** Default destructor */
  ~STrimeshCollider();

  void onInit();

  SString const type() const { return "Collider"; }
};

// TODO: add support for batching multiple meshes into one big trimesh -> less expensive (needs GO hierarchy)

#endif // STORMFIGHTER_TRIMESHCOLLIDER_H_
