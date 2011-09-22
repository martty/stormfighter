#include "ManualObject.h"
#include "Graphics.h"
#include "Transform.h"
#include <OgreManualObject.h>

SManualObject::SManualObject(bool isStatic):manual_(NULL){
  static_ = true;
  setState(CREATED);
}

SManualObject::~SManualObject(){
  //dtor
}

SManualObject* SManualObject::clone() const {
  SManualObject* mo = new SManualObject(static_);
  return mo;
}

unsigned int SManualObject::onAdd(SString goname, STransform* transform){
  transform_ = transform;
  manual_ = Graphics::getSingleton().sceneManager()->createManualObject(goname+"_manual");
  manual_->setDynamic(!static_);
  valid_ = false;
  setState(PREPARED);
  return NONE;
}

  // ManualObject methods
void SManualObject::begin(SString materialName, OperationType opType){
  manual_->begin(materialName, static_cast<Ogre::RenderOperation::OperationType>(opType));
}

void SManualObject::finishSection(){
  manual_->end();
}

void SManualObject::finish(){
  manual_->end();
  if(static_){
    Ogre::MeshPtr mesh = manual_->convertToMesh(manual_->getName()+"mesh");
    entity_ = Graphics::getSingleton().sceneManager()->createEntity(manual_->getName(), manual_->getName()+"mesh");
    Ogre::UserObjectBindings& binds = entity_->getUserObjectBindings();
    binds.setUserAny(Ogre::Any(static_cast<Component*>(this)));
    transform_->attachObject(entity_);
    valid_ = true;
    setState(READY);
  }
}

void SManualObject::position(const SVector3& pos){
  manual_->position(pos);
}

void SManualObject::colour(const SColourValue& col){
  manual_->colour(col);
}

void SManualObject::normal(const SVector3& normal){
  manual_->normal(normal);
}

void SManualObject::tangent(const SVector3& tangent){
  manual_->tangent(tangent);
}

void SManualObject::textureCoord(const SVector3& uvw){
  // DISCARDS 3rd component
  manual_->textureCoord(uvw.x, uvw.y);
}

void SManualObject::index(uint32_t ind){
  manual_->index(ind);
}

void SManualObject::triangle(uint32_t ind1, uint32_t ind2, uint32_t ind3){
  manual_->triangle(ind1, ind2, ind3);
}

void SManualObject::quad(uint32_t ind1, uint32_t ind2, uint32_t ind3, uint32_t ind4){
  manual_->quad(ind1, ind2, ind3, ind4);
}

void SManualObject::clear(){
  manual_->clear();
}
