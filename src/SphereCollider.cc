#include "SphereCollider.h"
#include "GameObject.h"
#include "Mesh.h"

namespace SF {

SphereCollider::SphereCollider(SReal radius):Collider(){
  init(radius);
}

SphereCollider::SphereCollider(){
  autoConfig_ = true;
}

SphereCollider::~SphereCollider(){

}

void SphereCollider::init(SReal radius){
  collisionShape_ = new btSphereShape(radius);
  setState(READY);
}

void SphereCollider::onInit(){
  if(!autoConfig_) // if we are not using autocfg, then this component is already READY
    return;
  Mesh* mesh = static_cast<Mesh*>(object()->componentGroup("Mesh"));
  SReal radius = mesh->getBoundingSphereRadius();
  collisionShape_ = new btSphereShape(radius);
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
}

}; // namespace SF
