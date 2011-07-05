#include "BoxCollider.h"

SBoxCollider::SBoxCollider(Ogre::Vector3 halfextents){
  init(halfextents);
}

SBoxCollider::~SBoxCollider(){
}

void SBoxCollider::init(Ogre::Vector3 halfextents){
  collisionShape_ = new btBoxShape(Convert::toBullet(halfextents));
}
