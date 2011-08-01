#include "CylinderCollider.h"
#include "Mesh.h"
#include "GameObject.h"
#include <BulletCollision/CollisionShapes/btCylinderShape.h>
#include "BulletOgreMeshToShape.h"
#include "StormfighterApp.h"

SCylinderCollider::SCylinderCollider(SVector3 halfextents){
  init(halfextents);
}

SCylinderCollider::~SCylinderCollider(){
  //dtor
}


SCylinderCollider::SCylinderCollider(){
  autoConfig_ = true;
}

void SCylinderCollider::init(SVector3 halfextents){
  collisionShape_ = new btCylinderShape(Convert::toBullet(halfextents));
  setState(READY);
}

void SCylinderCollider::onInit(){
  if(!autoConfig_) // if we are not using autocfg, then this component is already READY
    return;
  SMesh* mesh = static_cast<SMesh*>(object()->component("Mesh"));
  VertexIndexToShape* vits;
  vits = new StaticMeshToShapeConverter(mesh->entity());
  collisionShape_ = vits->createCylinder();
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
  delete vits;
}
