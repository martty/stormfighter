#include "BoxCollider.h"
#include "Mesh.h"
#include "GameObject.h"
#include <BulletCollision/CollisionShapes/btBoxShape.h>
#include <OgreAxisAlignedBox.h>
#include "BulletOgreMeshToShape.h"
#include "StormfighterApp.h"

namespace SF {

BoxCollider::BoxCollider(Ogre::Vector3 halfextents){
  init(halfextents);
}

BoxCollider::BoxCollider(){
  autoConfig_ = true;
  setState(PREPARED);
}


BoxCollider::~BoxCollider(){
}

BoxCollider* BoxCollider::clone() const {
  BoxCollider* box = new BoxCollider();
  return box;
}

void BoxCollider::init(Ogre::Vector3 halfextents){
  collisionShape_ = new btBoxShape(Convert::toBullet(halfextents));
  setState(READY);
}

void BoxCollider::onInit(){
  if(!autoConfig_) // if we are not using autocfg, then this component is already READY
    return;
  Mesh* mesh = static_cast<Mesh*>(object()->componentGroup("Mesh"));
  //const Ogre::AxisAlignedBox* aabb = mesh->getBounds();
  //collisionShape_ = new btBoxShape(Convert::toBullet(aabb->getHalfSize()));
  VertexIndexToShape* vits;
  vits = new StaticMeshToShapeConverter(mesh->entity());
  collisionShape_ = vits->createBox();
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->worldScale()));
  setState(READY);
  delete vits;
}

}; // namespace SF
