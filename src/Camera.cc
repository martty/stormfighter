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

void Camera::setNearClipDistance(SReal distance){
  camera_->setNearClipDistance(distance);
}
SReal Camera::nearClipDistance() const{
  return camera_->getNearClipDistance();
}

void Camera::setFarClipDistance(SReal distance){
  camera_->setFarClipDistance(distance);
}
SReal Camera::farClipDistance() const{
  return camera_->getFarClipDistance();
}

void Camera::setAspectRatio(SReal ratio){
  camera_->setAspectRatio(ratio);
}
SReal Camera::aspectRatio() const{
  return camera_->getAspectRatio();
}

void Camera::setPolygonMode(PolygonMode mode){
  camera_->setPolygonMode(static_cast<Ogre::PolygonMode>(mode));
}
Camera::PolygonMode Camera::polygonMode() const{
  return static_cast<Camera::PolygonMode>(camera_->getPolygonMode());
}

void Camera::setFOVy(SReal fovy){
  camera_->setFOVy(SRadian(fovy));
}
SReal Camera::FOVy() const{
  return camera_->getFOVy().valueRadians();
}

void Camera::setProjectionType(ProjectionType pt){
  camera_->setProjectionType(static_cast<Ogre::ProjectionType>(pt));
}
Camera::ProjectionType Camera::projectionType() const{
  return static_cast<Camera::ProjectionType>(camera_->getProjectionType());
}

void Camera::activate(){
  Graphics::getSingletonPtr()->setActiveCamera(camera_);
}

bool Camera::isActive() const{
  if(Graphics::getSingletonPtr()->activeCamera() == camera_)
    return true;
  return false;
}

SAxisAlignedBox Camera::getBoundingBox() const{
  return camera_->getBoundingBox();
}

}; // namespace SF
