#include "Transform.h"
#include "GameObject.h"
#include "RigidBody.h"

using namespace Ogre ;

STransform::~STransform(){
  if(!isRoot_)
    delete node_;
}

void STransform::init (Vector3 position, Quaternion orientation, Vector3 scale){
  isRoot_ = false;
  node_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->getRootSceneNode()->createChildSceneNode(); // by default in top hierarchy
  node_->setPosition(position);
  node_->setOrientation(orientation);
  node_->setScale(scale);

  UserObjectBindings& bindings = node_->getUserObjectBindings();
  bindings.setUserAny(Any(this));
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

STransform::STransform(bool isRoot) : node_(NULL){
  isRoot_ = isRoot;
  if(!isRoot_){
    init(Vector3::ZERO, Quaternion::IDENTITY, Vector3::UNIT_SCALE);
    return;
  }
  // Root scenenode get
  node_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->getRootSceneNode();
  node_->setPosition(Vector3::ZERO);
  node_->setOrientation(Quaternion::IDENTITY);

  UserObjectBindings& bindings = node_->getUserObjectBindings();
  bindings.setUserAny(Any(this));
}

const Ogre::Vector3 STransform::worldPosition() const{
  return node_->convertLocalToWorldPosition(Ogre::Vector3::ZERO);
}

const Ogre::Quaternion STransform::worldOrientation() const{
  return node_->convertLocalToWorldOrientation(Ogre::Quaternion::IDENTITY);
}

void STransform::setPosition(Vector3 position){
  node_->setPosition(position);
  // notify rigidbodies in hierarchy
  _notifyTransformChange();
}

void STransform::setOrientation(Quaternion orientation){
  node_->setOrientation(orientation);
  // notify rigidbodies in hierarchy
  _notifyTransformChange();
}

void STransform::_notifyTransformChange(){
  if(hasInterface()){
    if(object()->hasComponent("RigidBody")){
      SRigidBody* rigidbody = static_cast<SRigidBody*>(object()->component("RigidBody"));
      rigidbody->setKinematicTransform(worldPosition(), worldOrientation());
    }
  }
  SceneNode::ChildNodeIterator it = node_->getChildIterator();
  SceneNode* child;
  STransform* child_tf;
  while(it.hasMoreElements()){
    child = static_cast<SceneNode*>(it.getNext());
    child_tf = Ogre::any_cast<STransform*>(child->getUserObjectBindings().getUserAny());
    child_tf->_notifyTransformChange();
  }
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

STransform* const STransform::parent(){
  UserObjectBindings& bindings = node_->getParentSceneNode()->getUserObjectBindings();
  return any_cast<STransform*>(bindings.getUserAny());
}

void STransform::setParent(STransform* parent){
  // reparent, parent has the obligation to detach from current parent
  parent->addChild(this);
}

void STransform::addChild(STransform* child){
  child->node_->getParentSceneNode()->removeChild(child->node_);
  node_->addChild(child->node_);
}

void STransform::showBoundingBox(bool show){
  node_->showBoundingBox(show);
}

void STransform::move(Vector3 delta){
  setPosition(position()+delta);
}

void STransform::moveRelative(Vector3 delta){
  setPosition(position()+orientation()*delta);
}

void STransform::yaw(Radian angle){
  node_->yaw(angle);
  node_->setOrientation(orientation());
}

void STransform::pitch(Radian angle){
  node_->pitch(angle);
  node_->setOrientation(orientation());
}

void STransform::setFixedYawAxis(bool useFixed, const Ogre::Vector3 fixedAxis){
  node_->setFixedYawAxis(useFixed, fixedAxis);
}

Ogre::Matrix4 STransform::worldMatrix() const{
  Ogre::Matrix4 mat(worldOrientation());
  mat.setTrans(position());
  return mat;
}
