#ifndef SSPHERECOLLIDER_H_
#define SSPHERECOLLIDER_H_

#include "common.h"
#include "Collider.h"
#include <BulletCollision/CollisionShapes/btSphereShape.h>

namespace SF {

class SphereCollider : public Collider
{
 public:
  /// Constructor, setting the radius of the sphere
  SphereCollider(SReal radius);
  /// Constructor, with autocfg
  SphereCollider();
  /** Default destructor */
  ~SphereCollider();

  void onInit();
 protected:
  SString name() const { return "Collider/SphereCollider"; }
 private:
  void init(SReal radius);

};

}; // namespace SF

#endif // SSPHERECOLLIDER_H
