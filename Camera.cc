#include "Camera.h"
#include "GameObject.h"

using namespace Ogre;

SCamera::SCamera(){
}

SCamera::~SCamera(){
}

unsigned int SCamera::onAdd(SString goname, STransform* transform){
  camera_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->createCamera(goname+"_camera");
  transform->attachObject(camera_);
  return NONE;
}

void SCamera::setAspectRatio(SReal ratio){
  camera_->setAspectRatio(ratio);
}

void SCamera::setNearClipDistance(SReal distance){
  camera_->setNearClipDistance(distance);
}

void SCamera::activate(){
  OgreFramework::getSingletonPtr()->setActiveCamera(camera_);
}

void SCamera::setPolygonMode(Ogre::PolygonMode mode){
  camera_->setPolygonMode(mode);
}
