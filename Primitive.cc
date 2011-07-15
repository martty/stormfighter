#include "Primitive.h"

using namespace Ogre;

SPrimitive::SPrimitive(SceneManager::PrefabType type) : SMesh(){
  type_ = type;
  setState(CREATED);
}

SPrimitive::~SPrimitive(){
}

unsigned int SPrimitive::onAdd(SString goname, STransform* transform){
  entity_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->createEntity(goname+"_primitive", type_);
  transform->attachObject(entity_);
  valid_ = true;
  setState(READY);
  return NONE;
}
