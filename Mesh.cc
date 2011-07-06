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

void SMesh::onAdd(SString goname, STransform* transform){
  if(meshname_.empty()){
    valid_ = false;
  } else {
    entity_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->createEntity(goname+meshname_, meshname_);
    transform->attachObject(entity_);
    valid_ = true;
  }
}

const Ogre::AxisAlignedBox* SMesh::getBounds(){
  return &(entity_->getMesh()->getBounds());
}

SReal SMesh::getBoundingSphereRadius() const{
  return entity_->getMesh()->getBoundingSphereRadius();
}
// TODO: impl
