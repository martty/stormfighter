#include "RigidBody.h"
#include "GameObject.h"
#include "StormfighterApp.h"
#include "Collider.h"
#include "Terrain.h"

SRigidBody::SRigidBody(SReal mass){
  mass_ = mass;
  rigidBody_ = NULL;
  internalTransform_ = btTransform::getIdentity();
  isKinematic_ = false;
  collisionFlags_ = 0;
  lin_damp_ = 0.0f;
  ang_damp_ = 0.0f;
  setState(PREPARED);
}

SRigidBody::~SRigidBody(){
  application()->physics()->removeRigidBody(rigidBody_);
}

void SRigidBody::getWorldTransform(btTransform &retVal) const {
  retVal = internalTransform_;
}

void SRigidBody::setKinematicTransform(Ogre::Vector3 position, Ogre::Quaternion orientation){
  internalTransform_ = Convert::transform(position, orientation);
}

void SRigidBody::setWorldTransform(const btTransform &newTransform){
  if (object() == NULL) // if no interface, no transform -> no set :(
    return;
  STransform* transform = object()->transform();
  btQuaternion rot = newTransform.getRotation();
  transform->_setOrientation(Convert::toOgre(rot));
  btVector3 pos = newTransform.getOrigin();
  transform->_setPosition(Convert::toOgre(pos));
  internalTransform_ = newTransform;
}

void SRigidBody::onInit(){
  // search for a collider component in GO & children
  // TOOD: autoCompound & autoTrimesh
  internalTransform_ = Convert::transform(object()->transform()->worldPosition(), object()->transform()->worldOrientation());
  SCollider* collider = NULL;
  if(object()->firstComponentInChildren("Collider")){
    collider = static_cast<SCollider*>(object()->firstComponentInChildren("Collider"));
    // let's rush this collider, we need the shape now
    if(collider->state() == PREPARED){
      collider->onInit();
    }
    btCollisionShape* collisionShape = collider->collisionShape();
    btVector3 myinertia(0,0,0);
    if(mass_ > 0)
      collisionShape->calculateLocalInertia(mass_, myinertia);
    // FIXME: component name should be used for this
    // if we have a terrain, assume we are doing a terrain collider we must modify origin
    if(object()->hasComponent("Terrain")){
      STerrain* terrain = static_cast<STerrain*>(object()->component("Terrain"));
      Ogre::Vector3 terrainPosition = terrain->terrainPosition(0,0);
      internalTransform_.setOrigin(
                 btVector3(
                     terrainPosition.x,
                     terrainPosition.y + (terrain->maxHeight(0,0)-terrain->minHeight(0,0))/2,
                     terrainPosition.z));
    }
    btRigidBody::btRigidBodyConstructionInfo rigidbodyCI(mass_, this, collisionShape, myinertia);
    rigidBody_ = new btRigidBody(rigidbodyCI);
    rigidBody_->setUserPointer(object()); // this component is set for callbacks, which is TODO of course :)
    application()->physics()->addRigidBody(rigidBody_);
    rigidBody_->setCollisionFlags(rigidBody_->getCollisionFlags() | collisionFlags_ | btCollisionObject::CF_CUSTOM_MATERIAL_CALLBACK);
    if(isKinematic_){
      rigidBody_->setCollisionFlags(rigidBody_->getCollisionFlags() | btCollisionObject::CF_KINEMATIC_OBJECT);
      rigidBody_->setActivationState(DISABLE_DEACTIVATION);
    }
    rigidBody_->setFriction(1.0f);
    rigidBody_->setRestitution(0.0f);
    rigidBody_->setDamping(lin_damp_, ang_damp_);
    setState(READY);
  }
}

void SRigidBody::setKinematic(bool isKinematic){
  if(state() == READY){
    if(isKinematic){
      application()->physics()->removeRigidBody(rigidBody_);
      rigidBody_->setCollisionFlags(rigidBody_->getCollisionFlags() | btCollisionObject::CF_KINEMATIC_OBJECT);
      rigidBody_->setActivationState(DISABLE_DEACTIVATION);
      application()->physics()->addRigidBody(rigidBody_);
      isKinematic_ = true;
    } else {
      if(isKinematic_){
        application()->physics()->removeRigidBody(rigidBody_);
        rigidBody_->setCollisionFlags(rigidBody_->getCollisionFlags() - btCollisionObject::CF_KINEMATIC_OBJECT);
        application()->physics()->addRigidBody(rigidBody_);
        isKinematic_ = false;
        //rigidBody_->forceActivationState(ACTIVE_TAG);
      }
    }
  } else {
    isKinematic_ = isKinematic;
  }
}

void SRigidBody::disableDebugDraw(){
  if(rigidBody_)
    rigidBody_->setCollisionFlags(rigidBody_->getCollisionFlags() | btCollisionObject::CF_DISABLE_VISUALIZE_OBJECT);
  else
    collisionFlags_ = collisionFlags_ | btCollisionObject::CF_DISABLE_VISUALIZE_OBJECT;
}

void SRigidBody::applyCentralImpulse(Ogre::Vector3 direction){
  rigidBody_->applyCentralImpulse(Convert::toBullet(direction));
}

void SRigidBody::setDamping(SReal linear, SReal angular){
  if(state() != READY){
    lin_damp_ = linear;
    ang_damp_ = angular;
  } else {
    rigidBody_->setDamping(linear, angular);
  }
}

void SRigidBody::flush(){
  application()->physics()->removeRigidBody(rigidBody_);
  application()->physics()->addRigidBody(rigidBody_);
}
