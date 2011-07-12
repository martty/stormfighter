#include "TrimeshCollider.h"
#include "BulletOgreMeshToShape.h"
#include "Mesh.h"
#include "GameObject.h"

STrimeshCollider::STrimeshCollider(){
  autoConfig_ = true;
  setState(PREPARED);
}

STrimeshCollider::~STrimeshCollider(){
}

void STrimeshCollider::onInit(){
  SMesh* mesh = static_cast<SMesh*>(object()->component("Mesh"));
  bool isAnimated_ = isAnimated_ || mesh->animated();
  VertexIndexToShape* vits = new StaticMeshToShapeConverter(mesh->entity());
  collisionShape_ = vits->createTrimesh();
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
}
