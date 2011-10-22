#include "ConvexHullCollider.h"
#include "BulletOgreMeshToShape.h"
#include "Mesh.h"
#include "GameObject.h"

namespace SF {

ConvexHullCollider::ConvexHullCollider(){
  autoConfig_ = true;
  isAnimated_ = false;
  isBaked_ = true;
  setState(CREATED);
}

ConvexHullCollider::~ConvexHullCollider(){
}

void ConvexHullCollider::onInit(){
  Mesh* mesh = static_cast<Mesh*>(object()->componentGroup("Mesh"));
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

btTransform ConvexHullCollider::shapeTransform(){
  if(isBaked_){
    btTransform ret;
    ret.setIdentity();
    return ret;
  } else {
    return Collider::shapeTransform();
  }
}

}; // namespace SF
