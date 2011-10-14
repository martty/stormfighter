#include "Primitive.h"
#include "Graphics.h"
#include <OgreSubEntity.h>

using namespace Ogre;

SPrimitive::SPrimitive(PrimitiveType type) : SMesh(){
  type_ = type;
  setState(CREATED);
}

SPrimitive::~SPrimitive(){
}

unsigned int SPrimitive::onAdd(SString goname, STransform* transform){
  transform_ = transform;
  entity_ = Graphics::getSingletonPtr()->sceneManager()->createEntity(goname+"_primitive", static_cast<Ogre::SceneManager::PrefabType>(type_));
  Ogre::UserObjectBindings& binds = entity_->getUserObjectBindings();
  binds.setUserAny(Ogre::Any(static_cast<Component*>(this)));
  transform->attachObject(entity_);
  valid_ = true;
  setState(READY);
  if(!materialname_.empty()){
      setMaterialName(materialname_);
  }
  return NONE;
}

SPrimitive* SPrimitive::clone() const{
  SPrimitive* sp = new SPrimitive(type_);
  sp->setMaterialName(entity_->getSubEntity(0)->getMaterialName());
  return sp;
}
