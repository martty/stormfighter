#include "ChaseCameraController.h"
#include "GameObject.h"
#include "StormfighterApp.h"

SChaseCameraController::SChaseCameraController(GameObject* target, Ogre::Vector3 camera_offset, Ogre::Vector3 target_offset):SScript("ChaseCamerController", INIT|UPDATE){
  target_ = target;
  camera_offset_ = camera_offset;
  target_offset_ = target_offset;
}

SChaseCameraController::~SChaseCameraController(){
  //dtor
}

void SChaseCameraController::onInit(){
  if(!object()->hasComponent("Camera"))
    throw SException(object()->debug()+" | No Camera for "+type_);
  camera_ = static_cast<SCamera*>(object()->component("Camera"));
  object()->transform()->setFixedYawAxis(true, Ogre::Vector3::UNIT_Y);
}

void SChaseCameraController::onUpdate(){
  Ogre::Vector3 dest = target_->transform()->position() + target_->transform()->orientation() * camera_offset_;
  Ogre::Vector3 src = object()->transform()->position();
  Ogre::Vector3 interp = (dest-src)*0.1f;
  object()->transform()->move(interp);
  object()->transform()->lookAt(target_->transform()->position() + target_->transform()->orientation() * target_offset_);

  // up-down
  camera_offset_.y += application()->input()->axisRelative(Y);
}
