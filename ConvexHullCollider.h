#ifndef STORMFIGHTER_MESHCOLLIDER_H_
#define STORMFIGHTER_MESHCOLLIDER_H_

#include "Collider.h"

/**
* @brief Convex hull collider
*
*
*/
class SConvexHullCollider : public SCollider {
 public:
  /// Constructor, autocfg + check mesh for animation
  SConvexHullCollider();
  /// Constructor, autocfg, set animation by param
  SConvexHullCollider(bool isAnimated);
  /// Constructor, explicit mesh & animation
  //SMeshCollider(Ogre::MeshPtr)
  /** Default destructor */
  ~SConvexHullCollider();

  void onInit();

  SString const type() const { return "Collider"; }
 private:
  bool isAnimated_;
};

#endif // STORMFIGHTER_MESHCOLLIDER_H_
