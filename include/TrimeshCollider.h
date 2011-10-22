#ifndef STORMFIGHTER_TRIMESHCOLLIDER_H_
#define STORMFIGHTER_TRIMESHCOLLIDER_H_

#include "Collider.h"

namespace SF {

/**
* @brief Static triangle mesh for collision (no movement)
*
*
*/
class TrimeshCollider : public Collider {
  public:
  /// Constructor, autocfg
  TrimeshCollider();
  /// Constructor, explicit mesh
  //TrimeshCollider(Ogre::MeshPtr)
  /** Default destructor */
  ~TrimeshCollider();

  void onInit();

 protected:
  SString name() const { return "Collider/TrimeshCollider"; }
};

// TODO: add support for batching multiple meshes into one big trimesh -> less expensive (needs GO hierarchy)

}; // namespace SF

#endif // STORMFIGHTER_TRIMESHCOLLIDER_H_
