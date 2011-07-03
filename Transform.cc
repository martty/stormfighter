#include "Transform.h"

using namespace Ogre ;

STransform::~STransform(){
  delete node_;
}

void STransform::init (Vector3 position, Quaternion orientation, Vector3 scale){
  node_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->getRootSceneNode()->createChildSceneNode(); // by default in top hierarchy
  node_->setPosition(position);
  node_->setOrientation(orientation);
  node_->setScale(scale);
}

STransform::STransform(Vector3 position, Quaternion orientation) : node_(NULL){
  init(position,orientation, Vector3::UNIT_SCALE);
}

STransform::STransform(Vector3 position): node_(NULL){
  init(position, Quaternion::IDENTITY, Vector3::UNIT_SCALE);
}

STransform::STransform(): node_(NULL){
  init(Vector3::ZERO, Quaternion::IDENTITY, Vector3::UNIT_SCALE);
}

void STransform::attachObject(MovableObject* object){
  node_->attachObject(object);
}

void STransform::detachObject(MovableObject* object){
  node_->detachObject(object);
}

void STransform::lookAt(Vector3 position){
  node_->lookAt(position, SceneNode::TS_WORLD);
}
