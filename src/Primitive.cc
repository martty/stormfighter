#include "Primitive.h"
#include "Graphics.h"
#include <OgreSubEntity.h>

namespace SF {

Primitive::Primitive(PrimitiveType type) : Mesh(){
  type_ = type;
  setState(CREATED);
}

Primitive::~Primitive(){
}

unsigned int Primitive::onAdd(SString goname, Transform* transform){
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

Primitive* Primitive::clone() const{
  Primitive* sp = new Primitive(type_);
  sp->setMaterialName(entity_->getSubEntity(0)->getMaterialName());
  return sp;
}

}; // namespace SF
