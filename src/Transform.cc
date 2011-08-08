#include "Transform.h"
#include "Graphics.h"
#include "GameObject.h"
#include "RigidBody.h"

STransform::~STransform(){
  // FIXME: find out how to safely dispose node_
 /* if(!isRoot_)
    delete node_;*/
}

void STransform::init (SVector3 position, SQuaternion orientation, SVector3 scale){
  isRoot_ = false;
  node_ = Graphics::getSingletonPtr()->sceneManager()->getRootSceneNode()->createChildSceneNode(); // by default in top hierarchy
  node_->setPosition(position);
  node_->setOrientation(orientation);
  node_->setScale(scale);

  Ogre::UserObjectBindings& bindings = node_->getUserObjectBindings();
  bindings.setUserAny(Ogre::Any(this));
}

STransform::STransform(SVector3 position, SQuaternion orientation, SVector3 scale) : node_(NULL){
  init(position,orientation, scale);
}

STransform::STransform(SVector3 position): node_(NULL){
  init(position, SQuaternion::IDENTITY, SVector3::UNIT_SCALE);
}

STransform::STransform(): node_(NULL){
  init(SVector3::ZERO, SQuaternion::IDENTITY, SVector3::UNIT_SCALE);
}

STransform::STransform(bool isRoot) : node_(NULL){
  isRoot_ = isRoot;
  if(!isRoot_){
    init(SVector3::ZERO, SQuaternion::IDENTITY, SVector3::UNIT_SCALE);
    return;
  }
  // Root scenenode get
  node_ = Graphics::getSingletonPtr()->sceneManager()->getRootSceneNode();
  node_->setPosition(SVector3::ZERO);
  node_->setOrientation(SQuaternion::IDENTITY);

  Ogre::UserObjectBindings& bindings = node_->getUserObjectBindings();
  bindings.setUserAny(Ogre::Any(this));
}

STransform* STransform::clone() const{
  // TODO: fixed yaw axis not copied
  // TODO: bounding box show not copied
  STransform* ntf = new STransform(position(), orientation(), scale());
  return ntf;
}

const SVector3 STransform::worldPosition() const{
  return node_->convertLocalToWorldPosition(SVector3::ZERO);
}

const SQuaternion STransform::worldOrientation() const{
  return node_->convertLocalToWorldOrientation(SQuaternion::IDENTITY);
}

void STransform::setPosition(SVector3 position){
  node_->setPosition(position);
  // notify rigidbodies in hierarchy
  _notifyTransformChange();
}

void STransform::setOrientation(SQuaternion orientation){
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
  Ogre::SceneNode::ChildNodeIterator it = node_->getChildIterator();
  Ogre::SceneNode* child;
  STransform* child_tf;
  while(it.hasMoreElements()){
    child = static_cast<Ogre::SceneNode*>(it.getNext());
    child_tf = Ogre::any_cast<STransform*>(child->getUserObjectBindings().getUserAny());
    child_tf->_notifyTransformChange();
  }
}
void STransform::attachObject(Ogre::MovableObject* object){
  node_->attachObject(object);
}

void STransform::detachObject(Ogre::MovableObject* object){
  node_->detachObject(object);
}

void STransform::lookAt(SVector3 position){
  node_->lookAt(position, Ogre::SceneNode::TS_WORLD);
}

STransform* const STransform::parent(){
  Ogre::UserObjectBindings& bindings = node_->getParentSceneNode()->getUserObjectBindings();
  return Ogre::any_cast<STransform*>(bindings.getUserAny());
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

void STransform::move(SVector3 delta){
  setPosition(position()+delta);
}

void STransform::moveRelative(SVector3 delta){
  setPosition(position()+orientation()*delta);
}

void STransform::yaw(SRadian angle){
  node_->yaw(angle);
  _notifyTransformChange();
}

void STransform::pitch(SRadian angle){
  node_->pitch(angle);
  _notifyTransformChange();
}

void STransform::roll(SRadian angle){
  node_->roll(angle);
 _notifyTransformChange();
}

void STransform::setFixedYawAxis(bool useFixed, const SVector3 fixedAxis){
  node_->setFixedYawAxis(useFixed, fixedAxis);
}

Ogre::Matrix4 STransform::worldMatrix() const{
  Ogre::Matrix4 mat(worldOrientation());
  mat.setTrans(position());
  return mat;
}


void STransform::setInheritScale(bool inherit){
  node_->setInheritScale(inherit);
}

void STransform::setInheritOrientation(bool inherit){
  node_->setInheritOrientation(inherit);
}

void STransform::setVisible(bool visible, bool cascade){
  node_->setVisible(visible, cascade);
}
