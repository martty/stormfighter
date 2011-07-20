#include "CharacterController.h"
#include "GameObject.h"
#include "StormfighterApp.h"
#include "RigidBody.h"
#include "Mesh.h"
#include "Terrain.h"

SCharacterController::SCharacterController():SScript("CharacterController"){
  moveSpeed_ = 100.0f;
  rotateSpeed_ = 30.0f;
  isJumping_ = false;
  currentRot_ = 0;
  timeout_ = 0.0f;
  speed_ = SVector3::ZERO;
  readyToLand_ = false;
  colliding_ = false;
}

SCharacterController::~SCharacterController(){
  //dtor
}

void SCharacterController::onInit(){

}

void SCharacterController::onUpdate(){
  // TODO: documentation & cleanup
  // TODO: disabling collision with terrain after jump
  // TODO: air control
  SRigidBody* rb = static_cast<SRigidBody*>(object()->component("RigidBody"));
  if(application()->input()->isKeyDown(OIS::KC_SPACE) && !isJumping_){
    jump();
  }
    moveScale_ = moveSpeed_ * application()->deltaTime();
    rotScale_ = rotateSpeed_ * application()->deltaTime();
    translateVector_ = Ogre::Vector3::ZERO;
    if(application()->input()->isKeyDown(OIS::KC_A)) translateVector_.x = -moveScale_;
    if(application()->input()->isKeyDown(OIS::KC_D)) translateVector_.x = moveScale_;
    if(application()->input()->isKeyDown(OIS::KC_W)) translateVector_.z = -moveScale_;
    if(application()->input()->isKeyDown(OIS::KC_S)) translateVector_.z = moveScale_;
    /*if(application()->input()->isKeyDown(OIS::KC_LSHIFT))
      speed_ += translateVector_;
    else
      speed_ += translateVector_/10;*/
    SReal y = speed_.y;
    if(speed_.length()>0.5)
      speed_ *= 0.5/speed_.length();
    speed_.y = y;
    object()->transform()->moveRelative(speed_);
    object()->transform()->moveRelative(translateVector_);
    //object()->transform()->yaw(Ogre::Degree(application()->input()->axisRelative(X) * -rotScale_));
    GameObject* go = object()->find("PlayerMesh");
    if(!go)
      return;
    SMesh* mesh = static_cast<SMesh*>(go->component("Mesh"));
    if(!mesh)
      return;
    if(translateVector_.length() > 0 && !isJumping_){
      mesh->setAnimationStateEnabled("Walk", true);
      mesh->setAnimationStateLoop("Walk", true);
      if(application()->input()->isKeyDown(OIS::KC_LSHIFT))
        mesh->addAnimationTime("Walk", application()->deltaTime());
      else
        mesh->addAnimationTime("Walk", application()->deltaTime());
    } else {
      mesh->setAnimationStateEnabled("Walk", false);
    }
    transform()->yaw(application()->input()->axisRelative(X) * -rotScale_);
  if(!colliding_){
    speed_ += SVector3(0, -0.98, 0)*deltaTime();
  }
  SingleRayCastResult sr = application()->physics()->closestRayCast(object()->transform()->position()-Ogre::Vector3(0, -2, 0), object()->transform()->position()+Ogre::Vector3(0, -100, 0));
  if(sr.hitObject){
    //application()->log(Ogre::StringConverter::toString(sr.hitPoint));
    SVector3 cpos = object()->transform()->position();
    SReal absdist = (cpos-sr.hitPoint).length();
    SReal dist = cpos.y-sr.hitPoint.y;
    if(dist < 0.0f){
      object()->transform()->move(SVector3(0, absdist,0));
    } else if (dist > 0.0f && dist < 0.1f){
      speed_.y = 0;
    }
    //currentRot_ += Ogre::Degree(application()->input()->axisRelative(X) * -rotScale_);
  }
}

void SCharacterController::jump(){
  speed_ += SVector3(0, 0.7f, 0);
  isJumping_ = true;
}

void SCharacterController::onPhysicsUpdate(){

}

/// to be called when the holder GameObject collides, once
void SCharacterController::onCollisionEnter(const CollisionData* collisionData){
  application()->log("Enter" + collisionData->other->name());
  if(collisionData->other->name() == "Terrain"){
    colliding_ = true;
    speed_.y = 0;
    isJumping_ = false;
  }
}
/// to be called when the holder GameObject stops colliding (with an other one), once
void SCharacterController::onCollisionExit(const CollisionData* collisionData){
  application()->log("Exit" + collisionData->other->name());
  if(collisionData->other->name() == "Terrain"){
    colliding_ = false;
  }
}
/// to be called when the holder GameObject collider, every tick
void SCharacterController::onCollisionStay(const CollisionData* collisionData){
  //application()->log("Stay" + collisionData->other->name());
}
