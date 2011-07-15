#include "Mesh.h"
#include "Transform.h"

using namespace Ogre;

SMesh::SMesh(){
  entity_ = NULL;
  meshname_ = "";
  setState(CREATED);
}

SMesh::SMesh(SString meshname){
  entity_ = NULL;
  meshname_ = meshname;
  setState(CREATED);
}

SMesh::~SMesh(){
  // TODO: cleanup
}

unsigned int SMesh::onAdd(SString goname, STransform* transform){
  if(meshname_.empty()){
    valid_ = false;
  } else {
    entity_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->createEntity(goname+meshname_, meshname_);
    transform->attachObject(entity_);
    valid_ = true;
  }
  setState(READY);
  return NONE;
}

const Ogre::AxisAlignedBox* SMesh::getBounds(){
  return &(entity_->getMesh()->getBounds());
}

SReal SMesh::getBoundingSphereRadius() const{
  return entity_->getMesh()->getBoundingSphereRadius();
}

void SMesh::setMaterialName(SString materialName){
  entity_->setMaterialName(materialName);
}

bool SMesh::animated() const{
  return entity_->hasSkeleton() || entity_->hasVertexAnimation();
}
