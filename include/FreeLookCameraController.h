#ifndef STORMFIGHTER_FREELOOKCAMERACONTROLLER_H_
#define STORMFIGHTER_FREELOOKCAMERACONTROLLER_H_

#include "Script.h"
#include "Camera.h"


class SFreeLookCameraController : public SScript
{
 public:
  SFreeLookCameraController();
  ~SFreeLookCameraController();

  void onInit();
  void onUpdate();
 private:
  Ogre::Vector3	 translateVector_;
  Ogre::Real	 moveSpeed_;
  Ogre::Degree	 rotateSpeed_;
  float	 moveScale_;
  Ogre::Degree	 rotScale_;

  SCamera* camera_;
};

#endif // STORMFIGHTER_FREELOOKCAMERACONTROLLER_H
