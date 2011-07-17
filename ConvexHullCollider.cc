#include "ConvexHullCollider.h"
#include "BulletOgreMeshToShape.h"
#include "Mesh.h"
#include "GameObject.h"

SConvexHullCollider::SConvexHullCollider(){
  autoConfig_ = true;
  isAnimated_ = false;
  isBaked_ = true;
  setState(CREATED);
}

SConvexHullCollider::~SConvexHullCollider(){
}

void SConvexHullCollider::onInit(){
  SMesh* mesh = static_cast<SMesh*>(object()->component("Mesh"));
  bool isAnimated_ = isAnimated_ || mesh->animated();
  VertexIndexToShape* vits;

  if(isAnimated_)
    vits = new AnimatedMeshToShapeConverter(mesh->entity(), object()->transform()->worldMatrix());
  else
    vits = new StaticMeshToShapeConverter(mesh->entity(), object()->transform()->worldMatrix());
  collisionShape_ = vits->createConvexHull();
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
  delete vits;
}

btTransform SConvexHullCollider::shapeTransform(){
  if(isBaked_){
    btTransform ret;
    ret.setIdentity();
    return ret;
  } else {
    return SCollider::shapeTransform();
  }
}
