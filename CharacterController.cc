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
  readyToLand_ = false;
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
  if(application()->input()->isKeyDown(OIS::KC_SPACE) && !isJumping_){
    isJumping_ = true;
    SRigidBody* sr = static_cast<SRigidBody*>(object()->component("RigidBody"));
    // give back control to physics
    sr->setKinematic(false);
    // launch at an angle
    sr->applyCentralImpulse(object()->transform()->orientation()* Ogre::Vector3(0, 30, 0.0f)); // up
    timeout_ = OgreFramework::getSingletonPtr()->m_pTimer->getMilliseconds();
    readyToLand_ = false;
  }
  if(colliding_ == false){
    readyToLand_ = true;
  }
  if(!isJumping_){
    SRigidBody* rb = static_cast<SRigidBody*>(object()->component("RigidBody"));
    // give back control to player
    rb->setKinematic(true);
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

    SingleRayCastResult sr = application()->physics()->closestRayCast(object()->transform()->position()-Ogre::Vector3(0, -2, 0), object()->transform()->position()+Ogre::Vector3(0, -100, 0));
    if(sr.hitObject){
      Ogre::Vector3 cpos = object()->transform()->position();
      Ogre::Vector3 npos = cpos;
      cpos.y = sr.hitPoint.y + 0.1f;
      object()->transform()->move((cpos-npos)*0.1f);
      GameObject* hit = sr.hitObject;
      currentRot_ += Ogre::Degree(application()->input()->axisRelative(X) * -rotScale_);
      if(hit->hasComponent("Terrain")){
        STerrain* terr = static_cast<STerrain*>(hit->component("Terrain"));
        Ogre::Vector3 normal = terr->normalAt(sr.hitPoint);
        //application()->log(Ogre::StringConverter::toString(normal));
        Ogre::Quaternion rot = Ogre::Vector3::UNIT_Y.getRotationTo(normal);
        Ogre::Quaternion nrot = Ogre::Quaternion::Slerp(0.01f, object()->transform()->orientation(), rot);
        Ogre::Quaternion control = Ogre::Quaternion::IDENTITY;
        control.FromAngleAxis(currentRot_,object()->transform()->orientation()*Ogre::Vector3::UNIT_Y );
        nrot = control;// * nrot;
        object()->transform()->setOrientation(nrot);
      }
    }
    //object()->transform()->yaw(Ogre::Degree(application()->input()->axisRelative(X) * -rotScale_));
    GameObject* go = object()->find("PlayerMesh");
    if(!go)
      return;
    SMesh* mesh = static_cast<SMesh*>(go->component("Mesh"));
    if(!mesh)
      return;
    if(translateVector_.length() > 0){
      mesh->setAnimationStateEnabled("Walk", true);
      mesh->setAnimationStateLoop("Walk", true);
      if(application()->input()->isKeyDown(OIS::KC_LSHIFT))
        mesh->addAnimationTime("Walk", application()->deltaTime());
      else
        mesh->addAnimationTime("Walk", application()->deltaTime()/10);
    } else {
      mesh->setAnimationStateEnabled("Walk", false);
    }
  }
  colliding_ = false;
}

void SCharacterController::onCollision(const CollisionData* collisionData){
  //application()->log(collisionData->other->name());
  //OgreFramework::getSingletonPtr()->m_pLog->logMessage(Ogre::StringConverter::toString(OgreFramework::getSingletonPtr()->m_pTimer->getMilliseconds()));
  colliding_ = true;
  if(isJumping_ && readyToLand_){
    if(OgreFramework::getSingletonPtr()->m_pTimer->getMilliseconds()-timeout_ < 100.0f)
      return;
    isJumping_ = false;
  }
}
