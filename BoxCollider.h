#ifndef STORMFIGHTER_BOXCOLLIDER_H_
#define STORMFIGHTER_BOXCOLLIDER_H_

#include "common.h"
#include "Collider.h"
#include <BulletCollision/CollisionShapes/btBoxShape.h>


class SBoxCollider : public SCollider
{
 public:
  /** Default constructor */
  SBoxCollider(Ogre::Vector3 halfextents);
  /** Default destructor */
  ~SBoxCollider();

  SString const type() const { return "Collider"; }

 private:
  void init(Ogre::Vector3 halfextents);
};

#endif // STORMFIGHTER_BOXCOLLIDER_H_
