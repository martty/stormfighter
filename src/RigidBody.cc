#include "RigidBody.h"
#include "GameObject.h"
#include "StormfighterApp.h"
#include "Collider.h"
#include "Physics.h"

namespace SF {

RigidBody::RigidBody(SReal mass, bool addOnInit){
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
  addOnInit_ = addOnInit;
  setState(PREPARED);
}

RigidBody::~RigidBody(){
  remove();
}

RigidBody* RigidBody::clone() const {
  RigidBody* rb = new RigidBody(mass_, addOnInit_);
  rb->collidesWith_ = collidesWith_;
  rb->collisionFlags_ = collisionFlags_;
  rb->group_ = group_;
  rb->lin_damp_ = lin_damp_;
  rb->ang_damp_ = ang_damp_;
  rb->isKinematic_ = isKinematic_;
  return rb;
}

void RigidBody::getWorldTransform(btTransform &retVal) const {
  retVal = internalTransform_;
}

void RigidBody::setKinematicTransform(Ogre::Vector3 position, Ogre::Quaternion orientation){
  internalTransform_ = Convert::transform(position, orientation);
}

void RigidBody::setWorldTransform(const btTransform &newTransform){
  if (object() == NULL) // if no interface, no transform -> no set :(
    return;
  Transform* transform = object()->transform();
  btQuaternion rot = newTransform.getRotation();
  transform->_setOrientation(Convert::toOgre(rot));
  btVector3 pos = newTransform.getOrigin();
  transform->_setPosition(Convert::toOgre(pos));
  internalTransform_ = newTransform;
}

void RigidBody::onInit(){
  // search for a collider component in GO & children
  // TOOD: autoCompound & autoTrimesh
  SQuaternion worldOri = SQuaternion(object()->transform()->worldOrientation()).normalise(); // have to normalise, otherwise strange stuff happen
  setKinematicTransform(object()->transform()->worldPosition(), worldOri);
  Collider* collider = static_cast<Collider*>(object()->firstComponentGroupInChildren("Collider"));
  if(collider){
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
/*    if(object()->hasComponent("Terrain")){
      Terrain* terrain = static_cast<Terrain*>(object()->component("Terrain"));
      Ogre::Vector3 terrainPosition = terrain->terrainPosition(0,0);
      internalTransform_.setOrigin(
                 btVector3(
                     terrainPosition.x,
                     terrainPosition.y + (terrain->maxHeight(0,0)-terrain->minHeight(0,0))/2,
                     terrainPosition.z));
    }*/
    btRigidBody::btRigidBodyConstructionInfo rigidbodyCI(mass_, this, collisionShape, myinertia);
    rigidBody_ = new btRigidBody(rigidbodyCI);
    rigidBody_->setUserPointer(object());
    if(addOnInit_)
      add();
    setState(READY);
    setFlag(collisionFlags_);
    if(isKinematic_){
      setFlag(btCollisionObject::CF_KINEMATIC_OBJECT);
      rigidBody_->setActivationState(DISABLE_DEACTIVATION);
    }
    //rigidBody_->setActivationState(DISABLE_DEACTIVATION);
    rigidBody_->setFriction(0.0f);
    rigidBody_->setRestitution(0.0f);
    rigidBody_->setDamping(lin_damp_, ang_damp_);
  } else {
    throw SException(object()->debug() +": Collider not found for RigidBody");
  }
}

void RigidBody::setKinematic(bool isKinematic){
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

void RigidBody::setLinearVelocity(SVector3 linvel){
  if(state() == READY){
    rigidBody_->setLinearVelocity(Convert::toBullet(linvel));
  }
}
SVector3 RigidBody::linearVelocity(){
  if(state() == READY){
    return Convert::toOgre(rigidBody_->getLinearVelocity());
  }
  return SVector3::ZERO;
}

void RigidBody::setAngularVelocity(SVector3 angvel){
  if(state() == READY){
    rigidBody_->setAngularVelocity(Convert::toBullet(angvel));
  }
}

SVector3 RigidBody::angularVelocity(){
  if(state() == READY){
    return Convert::toOgre(rigidBody_->getAngularVelocity());
  }
  return SVector3::ZERO;
}

void RigidBody::setGravity(SVector3 gravity){
  if(state() == READY){
    rigidBody_->setGravity(Convert::toBullet(gravity));
  }
}

void RigidBody::addPoint2PointConstraint(const SVector3& pivotInA){
  if(state() == READY){
    btTypedConstraint* constraint = new btPoint2PointConstraint(*rigidBody_, physicsTransform().inverse()*Convert::toBullet(pivotInA));
    constraints_.push_back(constraint);
    application()->physics()->addConstraint(constraint, true);
  }
}

void RigidBody::addPoint2PointConstraint(RigidBody* rbB, const SVector3& pivotInA, const SVector3& pivotInB){
  if(state() == READY){
    btTypedConstraint* constraint = new btPoint2PointConstraint(*rigidBody_, *(rbB->rigidBody()), Convert::toBullet(pivotInA), Convert::toBullet(pivotInB));
    constraints_.push_back(constraint);
    application()->physics()->addConstraint(constraint, true);
  }
}

void RigidBody::addFixedConstraint(RigidBody* rbB, bool disableCollisions){
  if(state() == READY){
    btTransform frame21 = rbB->physicsTransform().inverse() * physicsTransform();
    btTransform identity;
    identity.setIdentity();
    btGeneric6DofConstraint* constraint1 = new btGeneric6DofConstraint(*rigidBody_, *(rbB->rigidBody()), identity, frame21, true);
    constraint1->setDbgDrawSize(btScalar(10.f));
    constraints_.push_back(constraint1);
    constraint1->setLinearLowerLimit(btVector3(0,0,0));
    constraint1->setLinearUpperLimit(btVector3(0,0,0));
    constraint1->setAngularLowerLimit(btVector3(0,0,0));
    constraint1->setAngularUpperLimit(btVector3(0,0,0));
    constraints_.push_back(constraint1);
    application()->physics()->addConstraint(constraint1, disableCollisions);
  }
}

void RigidBody::removeConstraint(int index){
  if(constraints_.size() > index){
    btTypedConstraint* cons = constraints_[index];
    application()->physics()->removeConstraint(cons);
    // benne marad a vectorban!
  }
}

void RigidBody::disableDebugDraw(){
  setFlag(btCollisionObject::CF_DISABLE_VISUALIZE_OBJECT);
}

void RigidBody::applyCentralImpulse(Ogre::Vector3 direction){
  rigidBody_->applyCentralImpulse(Convert::toBullet(direction));
}

void RigidBody::applyCentralForce(Ogre::Vector3 direction){
  rigidBody_->applyCentralForce(Convert::toBullet(direction));
}

void RigidBody::applyTorque(Ogre::Vector3 direction){
  rigidBody_->applyTorque(Convert::toBullet(direction));
}

void RigidBody::applyTorqueImpulse(Ogre::Vector3 direction){
  rigidBody_->applyTorqueImpulse(Convert::toBullet(direction));
}

void RigidBody::setDamping(SReal linear, SReal angular){
  if(state() != READY){
    lin_damp_ = linear;
    ang_damp_ = angular;
  } else {
    rigidBody_->setDamping(linear, angular);
  }
}

void RigidBody::setDisableDeactivation(bool disable){
  if(state() == READY){
    if(disable)
      rigidBody_->setActivationState(DISABLE_DEACTIVATION);
    else
      rigidBody_->setActivationState(ACTIVE_TAG);
  }
}

void RigidBody::setCollisionResponse(bool hasResponse){
  setFlagTo(btCollisionObject::CF_NO_CONTACT_RESPONSE, hasResponse);
}

void RigidBody::setFlag(unsigned int flag){
  if(state() == READY)
    rigidBody_->setCollisionFlags(rigidBody_->getCollisionFlags() | flag);
  else
    collisionFlags_ |= flag;
}

void RigidBody::unsetFlag(unsigned int flag){
  if(state() == READY)
    rigidBody_->setCollisionFlags(rigidBody_->getCollisionFlags() & ~flag);
  else
    collisionFlags_ &= ~flag;
}

void RigidBody::setFlagTo(unsigned int flag, bool set){
  if(set)
    setFlag(flag);
  else
    unsetFlag(flag);
}

bool RigidBody::flag(unsigned int flag) const{
  if(state() == READY)
    return rigidBody_->getCollisionFlags() & flag;
  return collisionFlags_ & flag;
}

void RigidBody::setCollisionGroup(SString group){
  group_ = group;
  if(state() == READY)
    flush();
}

void RigidBody::setCollidesWith(StringVector collidesWith){
  collidesWith_ = collidesWith;
  if(state() == READY)
    flush();
}

void RigidBody::setCallbacks(bool hasCallbacks){
  setFlagTo(btCollisionObject::CF_CUSTOM_MATERIAL_CALLBACK, hasCallbacks);
}

void RigidBody::remove(){
  application()->physics()->removeRigidBody(rigidBody_);
}

void RigidBody::add(){
  SQuaternion worldOri = SQuaternion(object()->transform()->worldOrientation()).normalise(); // have to normalise, otherwise strange stuff happen
  setKinematicTransform(object()->transform()->worldPosition(), worldOri);
  rigidBody_->setMotionState(this);
  application()->physics()->addRigidBody(rigidBody_, group_, collidesWith_);
}

void RigidBody::flush(){
  remove();
  add();
}

}; // namespace SF
