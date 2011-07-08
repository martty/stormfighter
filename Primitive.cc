#include "Primitive.h"

using namespace Ogre;

SPrimitive::SPrimitive(SceneManager::PrefabType type) : SMesh(){
  type_ = type;
}

SPrimitive::~SPrimitive(){
}

void SPrimitive::onAdd(SString goname, STransform* transform){
  entity_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->createEntity(goname+"_primitive", type_);
  transform->attachObject(entity_);
  valid_ = true;
}
