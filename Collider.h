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
  /** Default constructor */
  SCollider(){collisionShape_ = NULL; }
  /** Default destructor */
  virtual ~SCollider(){delete collisionShape_;}

  btCollisionShape* collisionShape(){return collisionShape_;}

 protected:
  btCollisionShape* collisionShape_;
};

#endif
