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

SAxisAlignedBox SMesh::getBoundingBox() const{
  SAxisAlignedBox aabb = entity_->getBoundingBox();
  if(transform_)
    aabb.scale(transform_->scale());
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