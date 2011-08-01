#include "FreeLookCameraController.h"
#include "GameObject.h"
#include "StormfighterApp.h"
#include "Input.h"

SFreeLookCameraController::SFreeLookCameraController():SScript("FreeLookCameraController", INIT|UPDATE){
  moveSpeed_ = 1000.0f;
  rotateSpeed_ = 300.0f;
}

SFreeLookCameraController::~SFreeLookCameraController(){
}

void SFreeLookCameraController::onInit(){
  if(!object()->hasComponent("Camera"))
    throw SException(object()->debug()+" | No Camera for "+type_);
  camera_ = static_cast<SCamera*>(object()->component("Camera"));
}

void SFreeLookCameraController::onUpdate(){
  if(application()->input()->isKeyDown(OIS::KC_M)){ // Polymode change
    static int mode = 0;
    if(mode == 2){
        camera_->setPolygonMode(Ogre::PM_SOLID);
        mode = 0;
    }
    else if(mode == 0){
        camera_->setPolygonMode(Ogre::PM_WIREFRAME);
        mode = 1;
    }
    else if(mode == 1){
        camera_->setPolygonMode(Ogre::PM_POINTS);
        mode = 2;
    }
  }
  // MOVEMENT
  moveScale_ = moveSpeed_ * application()->deltaTime();
  rotScale_ = rotateSpeed_ * application()->deltaTime();
  translateVector_ = Ogre::Vector3::ZERO;
  if(application()->input()->isKeyDown(OIS::KC_A)) translateVector_.x = -moveScale_;
  if(application()->input()->isKeyDown(OIS::KC_D)) translateVector_.x = moveScale_;
  if(application()->input()->isKeyDown(OIS::KC_W)) translateVector_.z = -moveScale_;
  if(application()->input()->isKeyDown(OIS::KC_S)) translateVector_.z = moveScale_;
  if(application()->input()->isKeyDown(OIS::KC_LSHIFT))
    object()->transform()->moveRelative(translateVector_);
  else
    object()->transform()->moveRelative(translateVector_ / 10);

  object()->transform()->yaw(Ogre::Degree(application()->input()->axisRelative(Input::X) * -0.1f));
  object()->transform()->pitch(Ogre::Degree(application()->input()->axisRelative(Input::Y) * -0.1f));
}

