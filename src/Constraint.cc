#include "Constraint.h"
#include "RigidBody.h"
#include "Frame.h"

namespace SF {

Constraint::Constraint(RigidBody* rbA, RigidBody* rbB, const Frame& frameA, const Frame& frameB, bool disableCollision){
  cons_ = new btGeneric6DofConstraint(*(rbA->rigidBody()), *(rbB->rigidBody()), Convert::toBullet(frameA), Convert::toBullet(frameB), true);
  disableCollision_ = disableCollision;
  /*btTransform& off = cons_->getFrameOffsetA();
  btQuaternion r = off.getRotation();
  r.setEuler(0, 0, Ogre::Math::PI/2);
  off.setRotation(r);*/
}

Constraint::~Constraint(){
}

void Constraint::setDbgDrawSize(SReal size){
  cons_->setDbgDrawSize(size);
}

void Constraint::setCFMParam(SReal value, int index){
  cons_->setParam(BT_CONSTRAINT_STOP_CFM, value, index);
}
void Constraint::setERPParam(SReal value, int index){
  cons_->setParam(BT_CONSTRAINT_STOP_ERP, value, index);
}

void Constraint::setLinearLowerLimit(SVector3 limit){
  cons_->setLinearLowerLimit(Convert::toBullet(limit));
}
void Constraint::setLinearUpperLimit(SVector3 limit){
  cons_->setLinearUpperLimit(Convert::toBullet(limit));
}
void Constraint::setAngularLowerLimit(SVector3 limit){
  cons_->setAngularLowerLimit(Convert::toBullet(limit));
}
void Constraint::setAngularUpperLimit(SVector3 limit){
  cons_->setAngularUpperLimit(Convert::toBullet(limit));
}

}; //namespace SF
