#ifndef SCHASECAMERACONTROLLER_H_
#define SCHASECAMERACONTROLLER_H_

#include "Script.h"
#include "Camera.h"

class SChaseCameraController : public SScript
{
 public:
  SChaseCameraController(GameObject* target, Ogre::Vector3 camera_offset, Ogre::Vector3 target_offset);
  ~SChaseCameraController();

  void onInit();
  void onUpdate();
 private:
  GameObject* target_;
  Ogre::Vector3 camera_offset_;
  Ogre::Vector3 target_offset_;
  SCamera* camera_;
};

#endif // SCHASECAMERACONTROLLER_H_
