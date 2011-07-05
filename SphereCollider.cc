#include "SphereCollider.h"

SSphereCollider::SSphereCollider(SReal radius):SCollider(){
  init(radius);
}

SSphereCollider::~SSphereCollider(){

}

void SSphereCollider::init(SReal radius){
  collisionShape_ = new btSphereShape(radius);
}
