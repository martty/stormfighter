#include "Mesh.h"

using namespace Ogre;

SMesh::SMesh(){
  entity_ = NULL;
  meshname_ = "";
}

SMesh::SMesh(SString meshname){
  entity_ = NULL;
  meshname_ = meshname;
}

SMesh::~SMesh(){
  // TODO: cleanup
}

void SMesh::onInit(){
  if(meshname_.empty()){
    valid_ = false;
  } else {
    entity_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->createEntity(object()->name()+meshname_, meshname_);
    object()->transform()->attachObject(entity_);
    valid_ = true;
  }
}

// TODO: impl
