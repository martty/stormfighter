#include "CharacterController.h"
#include "GameObject.h"
#include "StormfighterApp.h"
#include "RigidBody.h"
#include "Mesh.h"
#include "Terrain.h"
#include "Input.h"
#include "Physics.h"

SCharacterController::SCharacterController():SScript("CharacterController"), offset_(48.0f){
  moveSpeed_ = 100.0f;
  rotateSpeed_ = 30.0f;
  isJumping_ = false;
  currentRot_ = 0;
  speedy_ = 0.0f;
}

SCharacterController::~SCharacterController(){
  //dtor
}

void SCharacterController::onInit(){

}

void SCharacterController::onUpdate(){
  if(application()->input()->isKeyDown(OIS::KC_SPACE) && !isJumping_){ // JUMPING
    jump();
  }
  // MOVEMENT
  moveScale_ = moveSpeed_ * application()->deltaTime();
  rotScale_ = rotateSpeed_ * application()->deltaTime();
  translateVector_ = Ogre::Vector3::ZERO;
  if(application()->input()->isKeyDown(OIS::KC_A)) translateVector_.x = -moveScale_;
  if(application()->input()->isKeyDown(OIS::KC_D)) translateVector_.x = moveScale_;
  if(application()->input()->isKeyDown(OIS::KC_W)) translateVector_.z = -moveScale_;
  if(application()->input()->isKeyDown(OIS::KC_S)) translateVector_.z = moveScale_;
  object()->transform()->moveRelative(SVector3(0, speedy_, 0));
  object()->transform()->moveRelative(translateVector_);
  // Turning
  transform()->yaw(application()->input()->axisRelative(Input::X) * -rotScale_);

  // Mesh animation
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
  // falling
  speedy_ += -0.98 *deltaTime();
  // rayscast for staying on objects & ground
  SingleRayCastResult sr = application()->physics()->closestRayCast(object()->transform()->position()-SVector3(0, -2+offset_, 0), object()->transform()->position()+SVector3(0, -100, 0));
  if(sr.hitObject){
    SVector3 cpos = object()->transform()->position();
    SReal absdist = (cpos-sr.hitPoint).length();
    SReal dist = cpos.y-sr.hitPoint.y;
    if(dist < offset_){ // we are inside something
      object()->transform()->move(SVector3(0, offset_-absdist,0));
      isJumping_ = false;
      speedy_ = 0;
    } else if (dist > offset_ && dist < offset_+0.1f){ // we are just above something
      speedy_ = 0;
      isJumping_ = false;
    }
  }
}

void SCharacterController::jump(){
  speedy_ += 0.7f;
  isJumping_ = true;
}

void SCharacterController::onPhysicsUpdate(){

}

/// to be called when the holder GameObject collides, once
void SCharacterController::onCollisionEnter(const CollisionData* collisionData){
  if(collisionData->other->name() == "Water"){
    // lost :(
    application()->lose();
    return;
  }
  SVector3 pt = collisionData->pointOnA;
  SReal pty = pt.y-transform()->position().y + offset_;
  if(pty < 10.f){
    // hit leg
  } else if (pty > 10.f && pty < 90.f){
    // hit body, push away
    SVector3 pos = SVector3(transform()->position().x, 0, transform()->position().z);
    SVector3 hit = SVector3(pt.x, 0, pt.y);
    SVector3 displace = pos-hit;
    transform()->move(collisionData->normalOnB*2.f);
  } else {
    // hit head
    //speedy_ = 0.0f;
  }
  // check where has collision happened
  // 1 - on the sides : push a bit back
  // 2 - top : rebound
}
/// to be called when the holder GameObject stops colliding (with an other one), once
void SCharacterController::onCollisionExit(const CollisionData* collisionData){
  //application()->log("Exit" + collisionData->other->name());
}
/// to be called when the holder GameObject collider, every tick
void SCharacterController::onCollisionStay(const CollisionData* collisionData){
  //application()->log("Stay" + collisionData->other->name());
  SRigidBody* rb = static_cast<SRigidBody*>(collisionData->other->component("RigidBody"));
  if(rb->mass() > 0.0f) return; // no dynamic ones plz
  SVector3 pt = collisionData->pointOnA;
  SReal pty = pt.y-transform()->position().y + offset_;
  if (pty > 10.f && pty < 90.f){
    // hit body, push away
    transform()->move(collisionData->normalOnB*1.8f);
  }
}
