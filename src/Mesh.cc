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
  if(meshname_.empty()){
    valid_ = false;
  } else {
    entity_ = Graphics::getSingletonPtr()->sceneManager()->createEntity(goname+meshname_, meshname_);
    transform->attachObject(entity_);
    valid_ = true;
  }
  setState(READY);
  return NONE;
}

const Ogre::AxisAlignedBox* SMesh::getBounds(){
  return &(entity_->getMesh()->getBounds());
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
