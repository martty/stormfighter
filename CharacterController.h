#ifndef STORMFIGHTER_CHARACTERCONTROLLER_H_
#define STORMFIGHTER_CHARACTERCONTROLLER_H_

#include "Script.h"


class SCharacterController : public SScript {
 public:
  SCharacterController();
  ~SCharacterController();

  void onInit();
  void onUpdate();
  void onPhysicsUpdate();
  /// to be called when the holder GameObject collides, once
  void onCollisionEnter(const CollisionData* collisionData);
  /// to be called when the holder GameObject stops colliding (with an other one), once
  void onCollisionExit(const CollisionData* collisionData);
  /// to be called when the holder GameObject collider, every tick
  void onCollisionStay(const CollisionData* collisionData);

  void jump();

 private:
  Ogre::Vector3	 translateVector_;
  Ogre::Real	 moveSpeed_;
  Ogre::Degree	 rotateSpeed_;
  float	 moveScale_;
  Ogre::Degree	 rotScale_;
  Ogre::Degree currentRot_;

  SVector3 speed_;

  SReal timeout_;

  bool isJumping_;
  bool readyToLand_;
  bool colliding_;
};

#endif // STORMFIGHTER_CHARACTERCONTROLLER_H_
