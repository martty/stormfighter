#include "RigidBody.h"

SRigidBody::SRigidBody(SReal mass){
  mass_ = mass;
  rigidBody_ = NULL;
  internalTransform_ = btTransform::getIdentity();
}

SRigidBody::~SRigidBody(){
  //dtor
}

void SRigidBody::getWorldTransform(btTransform &retVal) const {
  retVal = internalTransform_;
}

void SRigidBody::setKinematicPos(Ogre::Vector3 position, Ogre::Quaternion orientation){
  internalTransform_ = Convert::transform(position, orientation);
}

void SRigidBody::setWorldTransform(const btTransform &newTransform){
  if (object() == NULL) // if no interface, no transform -> no set :(
    return;
  STransform* transform = object()->transform();
  btQuaternion rot = newTransform.getRotation();
  transform->setOrientation(Convert::toOgre(rot));
  btVector3 pos = newTransform.getOrigin();
  transform->setPosition(Convert::toOgre(pos));
  internalTransform_ = newTransform;
  // FIXME: something is missing here (internalTransform?)
}

void SRigidBody::onInit(){
  // search for a collider component in GO
  // TODO: search in children too (somehow) -> compoundShape collisionshape
  internalTransform_ = Convert::transform(object()->transform()->position(), object()->transform()->orientation());
  SCollider* collider = NULL;
  if(object()->hasComponent("Collider")){
    collider = static_cast<SCollider*>(object()->component("Collider"));
    btCollisionShape* collisionShape = collider->collisionShape();
    btVector3 myinertia(0,0,0);
    if(mass_ > 0)
      collisionShape->calculateLocalInertia(mass_, myinertia);
    btRigidBody::btRigidBodyConstructionInfo rigidbodyCI(mass_, this, collisionShape, myinertia);
    rigidBody_ = new btRigidBody(rigidbodyCI);
    rigidBody_->setActivationState(DISABLE_DEACTIVATION);
    rigidBody_->setUserPointer(this); // this component is set for callbacks, which is TODO of course :)
    application()->physics()->addRigidBody(rigidBody_);
  }
}
