#ifndef STORMFIGHTER_MESHCOLLIDER_H_
#define STORMFIGHTER_MESHCOLLIDER_H_

#include "Collider.h"

namespace SF {

/**
* @brief Convex hull collider
*
*
*/
class ConvexHullCollider : public Collider {
 public:
  /// Constructor, autocfg + check mesh for animation
  ConvexHullCollider();
  /// Constructor, autocfg, set animation by param
  ConvexHullCollider(bool isAnimated);
  /// Constructor, explicit mesh & animation
  //SMeshCollider(Ogre::MeshPtr)
  /** Default destructor */
  ~ConvexHullCollider();

  btTransform shapeTransform();

  void onInit();

 protected:
  SString name() const { return "Collider/ConvexHullCollider"; }
 private:
  bool isAnimated_;
  bool isBaked_;
};

}; // namespace SF

#endif // STORMFIGHTER_MESHCOLLIDER_H_
