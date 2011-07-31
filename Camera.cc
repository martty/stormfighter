#include "Camera.h"
#include "Graphics.h"
#include "GameObject.h"

using namespace Ogre;

SCamera::SCamera(){
  setState(CREATED);
}

SCamera::~SCamera(){
}

SCamera* SCamera::clone() const{
  // TODO: clone other attribs
  return new SCamera();
}

unsigned int SCamera::onAdd(SString goname, STransform* transform){
  camera_ = Graphics::getSingletonPtr()->sceneManager()->createCamera(goname+"_camera");
  transform->attachObject(camera_);
  camera_->setFarClipDistance(10000.0f);
  setState(READY);
  return NONE;
}

void SCamera::setAspectRatio(SReal ratio){
  camera_->setAspectRatio(ratio);
}

void SCamera::setNearClipDistance(SReal distance){
  camera_->setNearClipDistance(distance);
}

void SCamera::activate(){
  Graphics::getSingletonPtr()->setActiveCamera(camera_);
}

void SCamera::setPolygonMode(Ogre::PolygonMode mode){
  camera_->setPolygonMode(mode);
}
