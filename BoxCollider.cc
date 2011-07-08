#include "BoxCollider.h"

SBoxCollider::SBoxCollider(Ogre::Vector3 halfextents){
  init(halfextents);
}

SBoxCollider::SBoxCollider(){
  autoConfig_ = true;
  setState(PREPARED);
}


SBoxCollider::~SBoxCollider(){
}

void SBoxCollider::init(Ogre::Vector3 halfextents){
  collisionShape_ = new btBoxShape(Convert::toBullet(halfextents));
  setState(READY);
}

void SBoxCollider::onInit(){
  if(!autoConfig_) // if we are not using autocfg, then this component is already READY
    return;
  SMesh* mesh = static_cast<SMesh*>(object()->component("Mesh"));
  const Ogre::AxisAlignedBox* aabb = mesh->getBounds();
  collisionShape_ = new btBoxShape(Convert::toBullet(aabb->getHalfSize()));
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
}
