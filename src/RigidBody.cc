#include "RigidBody.h"
#include "GameObject.h"
#include "StormfighterApp.h"
#include "Collider.h"
#include "Terrain.h"
#include "Physics.h"

SRigidBody::SRigidBody(SReal mass){
  mass_ = mass;
  rigidBody_ = NULL;
  internalTransform_ = btTransform::getIdentity();
  isKinematic_ = false;
  collisionFlags_ = 0;
  lin_damp_ = 0.0f;
  ang_damp_ = 0.0f;
  group_ = "default";
  collidesWith_.clear();
  collidesWith_.push_back("all");
  constraints_.clear();
  setState(PREPARED);
}

SRigidBody::~SRigidBody(){
  remove();
}

SRigidBody* SRigidBody::clone() const {
  SRigidBody* rb = new SRigidBody(mass_);
  rb->collidesWith_ = collidesWith_;
  rb->collisionFlags_ = collisionFlags_;
  rb->group_ = group_;
  rb->lin_damp_ = lin_damp_;
  rb->ang_damp_ = ang_damp_;
  rb->isKinematic_ = isKinematic_;
  return rb;
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
  SQuaternion worldOri = SQuaternion(object()->transform()->worldOrientation()).normalise(); // have to normalise, otherwise strange stuff happen
  internalTransform_ = Convert::transform(object()->transform()->worldPosition(), worldOri);
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
    add();
    setState(READY);
    setFlag(collisionFlags_);
    if(isKinematic_){
      setFlag(btCollisionObject::CF_KINEMATIC_OBJECT);
      rigidBody_->setActivationState(DISABLE_DEACTIVATION);
    }
    rigidBody_->setFriction(1.0f);
    rigidBody_->setRestitution(0.0f);
    rigidBody_->setDamping(lin_damp_, ang_damp_);
  } else {
    throw SException(object()->debug() +": Collider not found for RigidBody");
  }
}

void SRigidBody::setKinematic(bool isKinematic){
  if(state() == READY){
    if(isKinematic){
      setFlag(btCollisionObject::CF_KINEMATIC_OBJECT);
      rigidBody_->setActivationState(DISABLE_DEACTIVATION);
      isKinematic_ = true;
    } else {
      unsetFlag(btCollisionObject::CF_KINEMATIC_OBJECT);
      isKinematic_ = false;
      //rigidBody_->forceActivationState(ACTIVE_TAG);
    }
  } else {
    isKinematic_ = isKinematic;
  }
}

void SRigidBody::setLinearVelocity(SVector3 linvel){
  if(state() == READY){
    rigidBody_->setLinearVelocity(Convert::toBullet(linvel));
  }
}
SVector3 SRigidBody::linearVelocity(){
  if(state() == READY){
    return Convert::toOgre(rigidBody_->getLinearVelocity());
  }
  return SVector3::ZERO;
}

void SRigidBody::setAngularVelocity(SVector3 angvel){
  if(state() == READY){
    rigidBody_->setAngularVelocity(Convert::toBullet(angvel));
  }
}

SVector3 SRigidBody::angularVelocity(){
  if(state() == READY){
    return Convert::toOgre(rigidBody_->getAngularVelocity());
  }
  return SVector3::ZERO;
}

void SRigidBody::addPoint2PointConstraint(const SVector3& pivotInA){
  if(state() == READY){
    btTypedConstraint* constraint = new btPoint2PointConstraint(*rigidBody_, Convert::toBullet(pivotInA));
    constraints_.push_back(constraint);
    application()->physics()->addConstraint(constraint);
  }
}

void SRigidBody::addPoint2PointConstraint(SRigidBody* rbB, const SVector3& pivotInA, const SVector3& pivotInB){
  if(state() == READY){
    btTypedConstraint* constraint = new btPoint2PointConstraint(*rigidBody_, *(rbB->rigidBody()), Convert::toBullet(pivotInA), Convert::toBullet(pivotInB));
    constraints_.push_back(constraint);
    application()->physics()->addConstraint(constraint);
  }
}

void SRigidBody::disableDebugDraw(){
  setFlag(btCollisionObject::CF_DISABLE_VISUALIZE_OBJECT);
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

void SRigidBody::setCollisionResponse(bool hasResponse){
  setFlagTo(btCollisionObject::CF_NO_CONTACT_RESPONSE, hasResponse);
}

void SRigidBody::setFlag(unsigned int flag){
  if(state() == READY)
    rigidBody_->setCollisionFlags(rigidBody_->getCollisionFlags() | flag);
  else
    collisionFlags_ |= flag;
}

void SRigidBody::unsetFlag(unsigned int flag){
  if(state() == READY)
    rigidBody_->setCollisionFlags(rigidBody_->getCollisionFlags() & ~flag);
  else
    collisionFlags_ &= ~flag;
}

void SRigidBody::setFlagTo(unsigned int flag, bool set){
  if(set)
    setFlag(flag);
  else
    unsetFlag(flag);
}

bool SRigidBody::flag(unsigned int flag) const{
  if(state() == READY)
    return rigidBody_->getCollisionFlags() & flag;
  return collisionFlags_ & flag;
}

void SRigidBody::setCollisionGroup(SString group){
  group_ = group;
  if(state() == READY)
    flush();
}

void SRigidBody::setCollidesWith(StringVector collidesWith){
  collidesWith_ = collidesWith;
  if(state() == READY)
    flush();
}

void SRigidBody::setCallbacks(bool hasCallbacks){
  setFlagTo(btCollisionObject::CF_CUSTOM_MATERIAL_CALLBACK, hasCallbacks);
}

void SRigidBody::remove(){
  application()->physics()->removeRigidBody(rigidBody_);
}

void SRigidBody::add(){
  application()->physics()->addRigidBody(rigidBody_, group_, collidesWith_);
}

void SRigidBody::flush(){
  remove();
  add();
}
