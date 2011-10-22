#include "CylinderCollider.h"
#include "Mesh.h"
#include "GameObject.h"
#include <BulletCollision/CollisionShapes/btCylinderShape.h>
#include "BulletOgreMeshToShape.h"
#include "StormfighterApp.h"

namespace SF {

CylinderCollider::CylinderCollider(SVector3 halfextents){
  init(halfextents);
}

CylinderCollider::~CylinderCollider(){
  //dtor
}


CylinderCollider::CylinderCollider(){
  autoConfig_ = true;
}

void CylinderCollider::init(SVector3 halfextents){
  collisionShape_ = new btCylinderShape(Convert::toBullet(halfextents));
  setState(READY);
}

void CylinderCollider::onInit(){
  if(!autoConfig_) // if we are not using autocfg, then this component is already READY
    return;
  Mesh* mesh = static_cast<Mesh*>(object()->componentGroup("Mesh"));
  VertexIndexToShape* vits;
  vits = new StaticMeshToShapeConverter(mesh->entity());
  collisionShape_ = vits->createCylinder();
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
  delete vits;
}

}; // namespace SF
