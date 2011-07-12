#include "ConvexHullCollider.h"
#include "BulletOgreMeshToShape.h"
#include "Mesh.h"
#include "GameObject.h"

SConvexHullCollider::SConvexHullCollider(){
  autoConfig_ = true;
  isAnimated_ = false;
  setState(CREATED);
}

SConvexHullCollider::~SConvexHullCollider(){
}

void SConvexHullCollider::onInit(){
  SMesh* mesh = static_cast<SMesh*>(object()->component("Mesh"));
  bool isAnimated_ = isAnimated_ || mesh->animated();
  VertexIndexToShape* vits;

  if(isAnimated_)
    vits = new AnimatedMeshToShapeConverter(mesh->entity());
  else
    vits = new StaticMeshToShapeConverter(mesh->entity());
  collisionShape_ = vits->createConvexHull();
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
}
