#include "TrimeshCollider.h"
#include "BulletOgreMeshToShape.h"
#include "Mesh.h"
#include "GameObject.h"

namespace SF {

TrimeshCollider::TrimeshCollider(){
  autoConfig_ = true;
  setState(PREPARED);
}

TrimeshCollider::~TrimeshCollider(){
}

void TrimeshCollider::onInit(){
  Mesh* mesh = static_cast<Mesh*>(object()->componentGroup("Mesh"));
  VertexIndexToShape* vits = new StaticMeshToShapeConverter(mesh->entity());
  collisionShape_ = vits->createTrimesh();
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
}

}; // namespace SF
