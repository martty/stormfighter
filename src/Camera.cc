#include "Camera.h"
#include "Graphics.h"
#include "GameObject.h"

namespace SF {

Camera::Camera(){
  camera_ = NULL;
  setProperty("nearClipDistance", 0.1f);
  setProperty("farClipDistance", 10000.f);
  setProperty("FOVy", SDegree(60).valueRadians());
  setProperty("aspectRatio", Graphics::getSingletonPtr()->getDefaultAspectRatio());
  camera_ = Graphics::getSingletonPtr()->sceneManager()->createCamera("camera_"+Ogre::StringConverter::toString(Graphics::getUniqueId()));
  setState(CREATED);
}

Camera::~Camera(){
  //Graphics::getSingletonPtr()->sceneManager()->destroyCamera(camera_);
  camera_ = NULL;
}

void Camera::save(){
  Component::save();
  setProperty("nearClipDistance", nearClipDistance());
  setProperty("farClipDistance", farClipDistance());
  setProperty("FOVy", FOVy());
  setProperty("aspectRatio", aspectRatio());
}

void Camera::load(){
  setNearClipDistance(getSRealProperty("nearClipDistance"));
  setFarClipDistance(getSRealProperty("farClipDistance"));
  setFOVy(getSRealProperty("FOVy"));
  setAspectRatio(getSRealProperty("aspectRatio"));
}


Camera* Camera::clone() const{
  Camera* cam = new Camera();
  cam->deserialise(serialise());
  return cam;
}

unsigned int Camera::onAdd(SString goname, Transform* transform){
  transform->attachObject(camera_);
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
