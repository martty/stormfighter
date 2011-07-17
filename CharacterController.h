#ifndef STORMFIGHTER_CHARACTERCONTROLLER_H_
#define STORMFIGHTER_CHARACTERCONTROLLER_H_

#include "Script.h"


class SCharacterController : public SScript {
 public:
  SCharacterController();
  ~SCharacterController();

  void onInit();
  void onUpdate();
  //void onPhysicsUpdate();
  void onCollision(const CollisionData* colldata);

 private:
  Ogre::Vector3	 translateVector_;
  Ogre::Real	 moveSpeed_;
  Ogre::Degree	 rotateSpeed_;
  float	 moveScale_;
  Ogre::Degree	 rotScale_;
  Ogre::Degree currentRot_;

  SReal timeout_;

  bool isJumping_;
  bool readyToLand_;
  bool colliding_;
};

#endif // STORMFIGHTER_CHARACTERCONTROLLER_H_
