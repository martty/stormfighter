#include "SphereCollider.h"
#include "GameObject.h"
#include "Mesh.h"

SSphereCollider::SSphereCollider(SReal radius):SCollider(){
  init(radius);
}

SSphereCollider::SSphereCollider(){
  autoConfig_ = true;
}

SSphereCollider::~SSphereCollider(){

}

void SSphereCollider::init(SReal radius){
  collisionShape_ = new btSphereShape(radius);
  setState(READY);
}

void SSphereCollider::onInit(){
  if(!autoConfig_) // if we are not using autocfg, then this component is already READY
    return;
  SMesh* mesh = static_cast<SMesh*>(object()->component("Mesh"));
  SReal radius = mesh->getBoundingSphereRadius();
  collisionShape_ = new btSphereShape(radius);
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
}
