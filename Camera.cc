#include "Camera.h"

using namespace Ogre;

SCamera::SCamera(){
}

SCamera::~SCamera(){
}

void SCamera::onInit(){
  camera_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->createCamera(object()->name()+"_camera");
  object()->transform()->attachObject(camera_);
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
