#ifndef SSPHERECOLLIDER_H_
#define SSPHERECOLLIDER_H_

#include "common.h"
#include "Collider.h"
#include <BulletCollision/CollisionShapes/btSphereShape.h>

class SSphereCollider : public SCollider
{
 public:
  /** Default constructor */
  SSphereCollider(SReal radius);
  /** Default destructor */
  ~SSphereCollider();

  // TODO: differentiating in type
  SString const type() const { return "Collider"; }

 private:
  void init(SReal radius);

};

#endif // SSPHERECOLLIDER_H
