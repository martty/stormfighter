#include "Camera.h"
#include "Graphics.h"
#include "GameObject.h"

namespace SF {

Camera::Camera(){
  camera_ = NULL;
  setState(CREATED);
}

Camera::~Camera(){
  //Graphics::getSingletonPtr()->sceneManager()->destroyCamera(camera_);
  camera_ = NULL;
}

Camera* Camera::clone() const{
  // TODO: clone other attribs
  return new Camera();
}

unsigned int Camera::onAdd(SString goname, Transform* transform){
  camera_ = Graphics::getSingletonPtr()->sceneManager()->createCamera(goname+"_camera");
  transform->attachObject(camera_);
  camera_->setFarClipDistance(10000.0f);
  setState(READY);
  return NONE;
}

void Camera::setAspectRatio(SReal ratio){
  camera_->setAspectRatio(ratio);
}

void Camera::setNearClipDistance(SReal distance){
  camera_->setNearClipDistance(distance);
}

void Camera::activate(){
  Graphics::getSingletonPtr()->setActiveCamera(camera_);
}

void Camera::setPolygonMode(Ogre::PolygonMode mode){
  camera_->setPolygonMode(mode);
}

SAxisAlignedBox Camera::getBoundingBox() const{
  return camera_->getBoundingBox();
}

}; // namespace SF
