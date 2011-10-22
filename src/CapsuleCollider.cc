#include "CapsuleCollider.h"
#include "Mesh.h"
#include "GameObject.h"
#include <BulletCollision/CollisionShapes/btCapsuleShape.h>
#include "BulletOgreMeshToShape.h"
#include "StormfighterApp.h"

namespace SF {

CapsuleCollider::CapsuleCollider(SReal radius, SReal height){
  autoConfig_ = false;
  //init(radius, height);
}

CapsuleCollider::CapsuleCollider(){
  autoConfig_ = true;
}

CapsuleCollider::~CapsuleCollider()
{
  //dtor
}

}; // namespace SF
