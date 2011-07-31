#include "Primitive.h"
#include "Graphics.h"

using namespace Ogre;

SPrimitive::SPrimitive(SceneManager::PrefabType type) : SMesh(){
  type_ = type;
  setState(CREATED);
}

SPrimitive::~SPrimitive(){
}

unsigned int SPrimitive::onAdd(SString goname, STransform* transform){
  entity_ = Graphics::getSingletonPtr()->sceneManager()->createEntity(goname+"_primitive", type_);
  transform->attachObject(entity_);
  valid_ = true;
  setState(READY);
  return NONE;
}

SPrimitive* SPrimitive::clone() const{
  return new SPrimitive(type_);
}
