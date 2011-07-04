#include "Primitive.h"

using namespace Ogre;

SPrimitive::SPrimitive(SceneManager::PrefabType type) : SMesh(){
  type_ = type;
}

SPrimitive::~SPrimitive(){
}

void SPrimitive::onInit(){
  entity_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->createEntity(object()->name()+"_primitive", type_);
  object()->transform()->attachObject(entity_);
  valid_ = true;
}
