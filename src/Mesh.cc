#include "Mesh.h"
#include "Graphics.h"
#include "Transform.h"

namespace SF {

Mesh::Mesh(){
  entity_ = NULL;
  meshname_ = "unitcube.mesh";
  materialname_ = "";
  setProperty("meshName", "unitcube.mesh");
  entity_ = Graphics::getSingletonPtr()->sceneManager()->createEntity("entity_"+Ogre::StringConverter::toString(Graphics::getUniqueId()), meshname_);
  Ogre::UserObjectBindings& binds = entity_->getUserObjectBindings();
  binds.setUserAny(Ogre::Any(static_cast<Component*>(this)));
  setState(CREATED);
}

Mesh::Mesh(SString meshname){
  entity_ = NULL;
  meshname_ = meshname;
  materialname_ = "";
  entity_ = Graphics::getSingletonPtr()->sceneManager()->createEntity("entity_"+Ogre::StringConverter::toString(Graphics::getUniqueId()), meshname_);
  Ogre::UserObjectBindings& binds = entity_->getUserObjectBindings();
  binds.setUserAny(Ogre::Any(static_cast<Component*>(this)));
  setState(CREATED);
}

Mesh::~Mesh(){
  entity_->detachFromParent();
  Graphics::getSingletonPtr()->sceneManager()->destroyEntity(entity_);
  entity_ = NULL;
}

void Mesh::save() const{
  Component::save();
  setProperty("meshName", meshname_);
}

void Mesh::load(){
  setMeshName(getSStringProperty("meshName"));
}

Mesh* Mesh::clone() const{
  // TODO: animationstate & materialname not copied
  Mesh* mesh = new Mesh(meshname_);
  return mesh;
}

unsigned int Mesh::onAdd(SString goname, Transform* transform){
  transform_ = transform;
  goname_ = goname;
  if(meshname_.empty()){
    valid_ = false;
  } else {
    transform_->attachObject(entity_);
    valid_ = true;
  }
  setState(READY);
  if(!materialname_.empty()){
      setMaterialName(materialname_);
  }
  return NONE;
}

void Mesh::setMeshName(SString meshname){
  if(valid_) {
    Graphics::getSingletonPtr()->sceneManager()->destroyEntity(entity_);
  }
  meshname_ = meshname;
  entity_ = Graphics::getSingletonPtr()->sceneManager()->createEntity(meshname_);
  Ogre::UserObjectBindings& binds = entity_->getUserObjectBindings();
  binds.setUserAny(Ogre::Any(static_cast<Component*>(this)));
  transform_->attachObject(entity_);
  valid_ = true;
}

SString Mesh::meshName(){
  return meshname_;
}

SAxisAlignedBox Mesh::getBoundingBox() const{
  if(entity_){
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
  return SAxisAlignedBox();
}

SReal Mesh::getBoundingSphereRadius() const{
  if(entity_)
    return entity_->getMesh()->getBoundingSphereRadius();
  return 0;
}

void Mesh::setMaterialName(SString materialName){
  if(state() == READY && entity_)
    entity_->setMaterialName(materialName);
  else {
    materialname_ = materialName;
  }
}

bool Mesh::animated() const{
  if(entity_)
    return entity_->hasSkeleton() || entity_->hasVertexAnimation();
}

void Mesh::setAnimationStateEnabled(SString animstate, bool enabled){
  entity_->getAnimationState(animstate)->setEnabled(enabled);
}
void Mesh::setAnimationStateLoop(SString animstate, bool loop){
  entity_->getAnimationState(animstate)->setLoop(loop);
}

void Mesh::addAnimationTime(SString animstate, SReal time){
  entity_->getAnimationState(animstate)->addTime(time);
}

}; // namespace SF
