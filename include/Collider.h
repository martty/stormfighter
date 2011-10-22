#ifndef STORMFIGHTER_COLLIDER_H_
#define STORMFIGHTER_COLLIDER_H_

#include "common.h"
#include <BulletCollision/CollisionShapes/btCollisionShape.h>
#include "Component.h"

namespace SF {

/**
* @brief Parent class for all colliders (abstract)
*
*/
class Collider : public Component
{
 public:
  /** Default constructor, by default we do not have autocfg */
  Collider(){collisionShape_ = NULL; autoConfig_ = false; }
  /** Default destructor */
  virtual ~Collider(){delete collisionShape_;}

  virtual Collider* clone() const;

  btCollisionShape* collisionShape(){return collisionShape_;}

  virtual btTransform shapeTransform();

 protected:
  SString name() const = 0;
  btCollisionShape* collisionShape_;
  /// define whether this collider should size and orient itself based on the other components in the GO
  bool autoConfig_;
};

}; // namespace SF

#endif
