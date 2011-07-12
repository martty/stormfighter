#include "CompoundCollider.h"
#include "GameObject.h"

SCompoundCollider::SCompoundCollider(){
  autoConfig_ = true;
}

SCompoundCollider::~SCompoundCollider(){
}

void SCompoundCollider::onInit(){
  GameObject* go = object();
  // TODO: if we have GO hierarchy, this can be done
}
