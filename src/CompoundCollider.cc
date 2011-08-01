#include "CompoundCollider.h"
#include "GameObject.h"
#include "StormfighterApp.h"
#include <BulletCollision/CollisionShapes/btCompoundShape.h>

SCompoundCollider::SCompoundCollider(){
  autoConfig_ = true;
}

SCompoundCollider::~SCompoundCollider(){
}

void SCompoundCollider::onInit(){
  btCompoundShape* comp = new btCompoundShape();
  collisionShape_ = comp;
  GameObject* go = object();
  ComponentVector colliders = go->allComponentInChildren("Collider");
  for(ComponentVector::iterator it = colliders.begin(); it != colliders.end(); it++){
    SCollider* sc = static_cast<SCollider*>(*it);
    if(sc == this)
      continue;
    if(sc->state() == PREPARED){
      // force load
      sc->onInit();
    }
    application()->log("added" + sc->object()->debug());
    btTransform chtr = sc->shapeTransform();
    //chtr.setIdentity();
    comp->addChildShape(chtr, sc->collisionShape());
  }
}
