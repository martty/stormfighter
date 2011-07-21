#include "CapsuleCollider.h"
#include "Mesh.h"
#include "GameObject.h"
#include <BulletCollision/CollisionShapes/btCapsuleShape.h>
#include "BulletOgreMeshToShape.h"
#include "StormfighterApp.h"

SCapsuleCollider::SCapsuleCollider(SReal radius, SReal height){
  autoConfig_ = false;
  //init(radius, height);
}

SCapsuleCollider::SCapsuleCollider(){
  autoConfig_ = true;
}

SCapsuleCollider::~SCapsuleCollider()
{
  //dtor
}
