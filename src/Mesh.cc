#include "Mesh.h"
#include "Graphics.h"
#include "Transform.h"

using namespace Ogre;

SMesh::SMesh(){
  entity_ = NULL;
  meshname_ = "";
  setState(CREATED);
}

SMesh::SMesh(SString meshname){
  entity_ = NULL;
  meshname_ = meshname;
  setState(CREATED);
}

SMesh::~SMesh(){
  // TODO: cleanup
}

SMesh* SMesh::clone() const{
  // TODO: animationstate & materialname not copied
  SMesh* mesh = new SMesh(meshname_);
  return mesh;
}

unsigned int SMesh::onAdd(SString goname, STransform* transform){
  transform_ = transform;
  goname_ = goname;
  if(meshname_.empty()){
    valid_ = false;
  } else {
    entity_ = Graphics::getSingletonPtr()->sceneManager()->createEntity(goname+meshname_, meshname_);
    Ogre::UserObjectBindings& binds = entity_->getUserObjectBindings();
    binds.setUserAny(Ogre::Any(static_cast<Component*>(this)));
    transform_->attachObject(entity_);
    valid_ = true;
  }
  setState(READY);
  return NONE;
}

void SMesh::setMeshName(SString meshname){
  if(valid_) {
    delete entity_;
  }
  meshname_ = meshname;
  entity_ = Graphics::getSingletonPtr()->sceneManager()->createEntity(goname_+meshname_, meshname_);
  Ogre::UserObjectBindings& binds = entity_->getUserObjectBindings();
  binds.setUserAny(Ogre::Any(static_cast<Component*>(this)));
  transform_->attachObject(entity_);
  valid_ = true;
}

SString SMesh::meshName(){
  return meshname_;
}

SAxisAlignedBox SMesh::getBoundingBox() const{
  SAxisAlignedBox aabb = entity_->getBoundingBox();
  if(transform_){ // if scale has a negative component, this will assert, so we must pass the abs components
    SVector3 absscale = transform_->scale();
    absscale.x = Ogre::Math::Abs(absscale.x);
    absscale.y = Ogre::Math::Abs(absscale.y);
    absscale.z = Ogre::Math::Abs(absscale.z);
    aabb.scale(absscale);
  }
  return aabb;
}

SReal SMesh::getBoundingSphereRadius() const{
  return entity_->getMesh()->getBoundingSphereRadius();
}

void SMesh::setMaterialName(SString materialName){
  entity_->setMaterialName(materialName);
}

bool SMesh::animated() const{
  return entity_->hasSkeleton() || entity_->hasVertexAnimation();
}

void SMesh::setAnimationStateEnabled(SString animstate, bool enabled){
  entity_->getAnimationState(animstate)->setEnabled(enabled);
}
void SMesh::setAnimationStateLoop(SString animstate, bool loop){
  entity_->getAnimationState(animstate)->setLoop(loop);
}

void SMesh::addAnimationTime(SString animstate, SReal time){
  entity_->getAnimationState(animstate)->addTime(time);
}
