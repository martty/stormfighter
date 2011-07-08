#ifndef STORMFIGHTER_COLLIDER_H_
#define STORMFIGHTER_COLLIDER_H_

#include "common.h"
#include <BulletCollision/CollisionShapes/btCollisionShape.h>
#include "Component.h"

/**
* @brief Parent class for all colliders (abstract)
*
*/
class SCollider : public Component
{
 public:
  /** Default constructor, by default we do not have autocfg */
  SCollider(){collisionShape_ = NULL; autoConfig_ = false; }
  /** Default destructor */
  virtual ~SCollider(){delete collisionShape_;}

  btCollisionShape* collisionShape(){return collisionShape_;}

 protected:
  btCollisionShape* collisionShape_;
  /// define whether this collider should size and orient itself based on the other components in the GO
  bool autoConfig_;
};

#endif
