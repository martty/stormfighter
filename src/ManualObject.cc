#include "ManualObject.h"
#include "Graphics.h"
#include "Transform.h"
#include <OgreManualObject.h>

namespace SF {

ManualObject::ManualObject(bool isStatic):manual_(NULL){
  static_ = true;
  setState(CREATED);
}

ManualObject::~ManualObject(){
  //dtor
}

ManualObject* ManualObject::clone() const {
  ManualObject* mo = new ManualObject(static_);
  return mo;
}

unsigned int ManualObject::onAdd(SString goname, Transform* transform){
  transform_ = transform;
  manual_ = Graphics::getSingleton().sceneManager()->createManualObject(goname+"_manual");
  manual_->setDynamic(!static_);
  valid_ = false;
  setState(PREPARED);
  return NONE;
}

  // ManualObject methods
void ManualObject::begin(SString materialName, OperationType opType){
  manual_->begin(materialName, static_cast<Ogre::RenderOperation::OperationType>(opType));
}

void ManualObject::finishSection(){
  manual_->end();
}

void ManualObject::finish(){
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

void ManualObject::position(const SVector3& pos){
  manual_->position(pos);
}

void ManualObject::colour(const SColourValue& col){
  manual_->colour(col);
}

void ManualObject::normal(const SVector3& normal){
  manual_->normal(normal);
}

void ManualObject::tangent(const SVector3& tangent){
  manual_->tangent(tangent);
}

void ManualObject::textureCoord(const SVector3& uvw){
  // DISCARDS 3rd component
  manual_->textureCoord(uvw.x, uvw.y);
}

void ManualObject::index(uint32_t ind){
  manual_->index(ind);
}

void ManualObject::triangle(uint32_t ind1, uint32_t ind2, uint32_t ind3){
  manual_->triangle(ind1, ind2, ind3);
}

void ManualObject::quad(uint32_t ind1, uint32_t ind2, uint32_t ind3, uint32_t ind4){
  manual_->quad(ind1, ind2, ind3, ind4);
}

void ManualObject::clear(){
  manual_->clear();
}

}; // namespace SF
