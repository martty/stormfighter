#include "Transform.h"
#include "Graphics.h"
#include "GameObject.h"
#include "RigidBody.h"
#include "KVSerialiser.h"

namespace SF {

Transform::~Transform(){
  // FIXME: find out how to safely dispose node_
 /* if(!isRoot_)
    delete node_;*/
}

void Transform::init (SVector3 position, SQuaternion orientation, SVector3 scale){
  isRoot_ = false;
  node_ = Graphics::getSingletonPtr()->sceneManager()->getRootSceneNode()->createChildSceneNode(); // by default in top hierarchy
  node_->setPosition(position);
  node_->setOrientation(orientation);
  node_->setScale(scale);

  Ogre::UserObjectBindings& bindings = node_->getUserObjectBindings();
  bindings.setUserAny(Ogre::Any(this));
}

Transform::Transform(SVector3 position, SQuaternion orientation, SVector3 scale) : node_(NULL){
  init(position,orientation, scale);
}

Transform::Transform(SVector3 position): node_(NULL){
  init(position, SQuaternion::IDENTITY, SVector3::UNIT_SCALE);
}

Transform::Transform(): node_(NULL){
  init(SVector3::ZERO, SQuaternion::IDENTITY, SVector3::UNIT_SCALE);
}

Transform::Transform(bool isRoot) : node_(NULL){
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

Transform* Transform::clone() const{
  // TODO: fixed yaw axis not copied
  // TODO: bounding box show not copied
  Transform* ntf = new Transform(position(), orientation(), scale());
  return ntf;
}
// TODO: !important this is botched
//        we are returning temporary variables
//        maybe scrap tolua_property? or cache these
const SVector3& Transform::worldPosition() const{
  return node_->convertLocalToWorldPosition(SVector3::ZERO);
}

const SQuaternion& Transform::worldOrientation() const{
  return node_->convertLocalToWorldOrientation(SQuaternion::IDENTITY);
}

const SVector3& Transform::worldScale() const{
  return node_->_getDerivedScale();
}

void Transform::setPosition(SVector3 position){
  node_->setPosition(position);
  // notify rigidbodies in hierarchy
  _notifyTransformChange();
}

void Transform::setOrientation(SQuaternion orientation){
  node_->setOrientation(orientation);
  // notify rigidbodies in hierarchy
  _notifyTransformChange();
}

void Transform::_notifyTransformChange(){
  if(hasInterface()){
    if(object()->hasComponent("RigidBody")){
      RigidBody* rigidbody = static_cast<RigidBody*>(object()->component("RigidBody"));
      rigidbody->setKinematicTransform(worldPosition(), worldOrientation());

    }
  }
  Ogre::SceneNode::ChildNodeIterator it = node_->getChildIterator();
  Ogre::SceneNode* child;
  Transform* child_tf;
  while(it.hasMoreElements()){
    child = static_cast<Ogre::SceneNode*>(it.getNext());
    child_tf = Ogre::any_cast<Transform*>(child->getUserObjectBindings().getUserAny());
    child_tf->_notifyTransformChange();
  }
}
void Transform::attachObject(Ogre::MovableObject* object){
  node_->attachObject(object);
}

void Transform::detachObject(Ogre::MovableObject* object){
  node_->detachObject(object);
}

void Transform::lookAt(SVector3 position){
  node_->lookAt(position, Ogre::SceneNode::TS_WORLD);
}

Transform* const Transform::parent(){
  Ogre::UserObjectBindings& bindings = node_->getParentSceneNode()->getUserObjectBindings();
  return Ogre::any_cast<Transform*>(bindings.getUserAny());
}

void Transform::setParent(Transform* parent){
  // reparent, parent has the obligation to detach from current parent
  parent->addChild(this);
}

void Transform::addChild(Transform* child){
  child->node_->getParentSceneNode()->removeChild(child->node_);
  node_->addChild(child->node_);
}

void Transform::showBoundingBox(bool show){
  node_->showBoundingBox(show);
}

void Transform::move(SVector3 delta){
  setPosition(position()+delta);
}

void Transform::moveRelative(SVector3 delta){
  setPosition(position()+orientation()*delta);
}

void Transform::rotate(SQuaternion delta){
  node_->rotate(delta);
}

void Transform::yaw(SRadian angle){
  node_->yaw(angle);
  _notifyTransformChange();
}

void Transform::pitch(SRadian angle){
  node_->pitch(angle);
  _notifyTransformChange();
}

void Transform::roll(SRadian angle){
  node_->roll(angle);
 _notifyTransformChange();
}

void Transform::setFixedYawAxis(bool useFixed, const SVector3 fixedAxis){
  node_->setFixedYawAxis(useFixed, fixedAxis);
}

const Ogre::Matrix4& Transform::worldMatrix() const{
  Ogre::Matrix4 mat(worldOrientation());
  mat.setTrans(position());
  return mat;
}


void Transform::setInheritScale(bool inherit){
  node_->setInheritScale(inherit);
}

void Transform::setInheritOrientation(bool inherit){
  node_->setInheritOrientation(inherit);
}

void Transform::setVisible(bool visible, bool cascade){
  node_->setVisible(visible, cascade);
}

bool Transform::isVisible(){
  bool isVisible = false;
  Ogre::SceneNode::ObjectIterator it = node_->getAttachedObjectIterator();
  while(it.hasMoreElements()){
    Ogre::MovableObject* mov = it.getNext();
    if(mov->isVisible())
      isVisible = true;
  }
  return isVisible;
}

void Transform::save() const{
  setProperty("position", position());
  setProperty("orientation", orientation());
  setProperty("scale", scale());
  Component::save();
}

void Transform::load(){
  setPosition(getSVector3Property("position"));
  setOrientation(getSQuaternionProperty("orientation"));
  setScale(getSVector3Property("scale"));
}

}; // namespace SF
