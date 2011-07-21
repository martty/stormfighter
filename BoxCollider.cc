#include "BoxCollider.h"
#include "Mesh.h"
#include "GameObject.h"
#include <BulletCollision/CollisionShapes/btBoxShape.h>
#include <OgreAxisAlignedBox.h>
#include "BulletOgreMeshToShape.h"
#include "StormfighterApp.h"

SBoxCollider::SBoxCollider(Ogre::Vector3 halfextents){
  init(halfextents);
}

SBoxCollider::SBoxCollider(){
  autoConfig_ = true;
  setState(PREPARED);
}


SBoxCollider::~SBoxCollider(){
}

SBoxCollider* SBoxCollider::clone() const {
  SBoxCollider* box = new SBoxCollider();
  return box;
}

void SBoxCollider::init(Ogre::Vector3 halfextents){
  collisionShape_ = new btBoxShape(Convert::toBullet(halfextents));
  setState(READY);
}

void SBoxCollider::onInit(){
  if(!autoConfig_) // if we are not using autocfg, then this component is already READY
    return;
  SMesh* mesh = static_cast<SMesh*>(object()->component("Mesh"));
  //const Ogre::AxisAlignedBox* aabb = mesh->getBounds();
  //collisionShape_ = new btBoxShape(Convert::toBullet(aabb->getHalfSize()));
  VertexIndexToShape* vits;
  vits = new StaticMeshToShapeConverter(mesh->entity());
  collisionShape_ = vits->createBox();
  collisionShape_->setLocalScaling(Convert::toBullet(object()->transform()->scale()));
  setState(READY);
  delete vits;
}
