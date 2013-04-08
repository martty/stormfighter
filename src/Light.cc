#include "Light.h"
#include "Graphics.h"
#include "GameObject.h"
#include "StormfighterApp.h"

namespace SF {

Light::Light(){
  light_ = NULL;
  setProperty("lightType", POINT);
  setProperty("diffuseColour", SColourValue(1,1,1,1));
  setProperty("specularColour", SColourValue(1,1,1,1));
  light_ = Graphics::getSingletonPtr()->sceneManager()->createLight("light_"+Ogre::StringConverter::toString(Graphics::getUniqueId()));
  setState(CREATED);
}

Light::~Light(){
}

void Light::save(){
  Component::save();
  setProperty("lightType", static_cast<unsigned>(light_->getType()));
  setProperty("diffuseColour", light_->getDiffuseColour());
  setProperty("specularColour", light_->getSpecularColour());
}

void Light::load(){
  setLightType(static_cast<LightType>(getIntegerProperty("lightType")));
  setDiffuseColour(getSColourValueProperty("diffuseColour"));
  setSpecularColour(getSColourValueProperty("specularColour"));
}

unsigned int Light::onAdd(SString goname, Transform* tf){
  tf->attachObject(light_);
  setState(READY);
  return NONE;
}

Light* Light::clone() const{
  Light* light = new Light();
  light->deserialise(serialise());
  return light;
}

void Light::setLightType(LightType type){
  light_->setType(static_cast<Ogre::Light::LightTypes>(type));
}

Light::LightType Light::lightType() const{
  return static_cast<Light::LightType>(light_->getType());
}

void Light::setDiffuseColour(SColourValue col){
  light_->setDiffuseColour(col);
}

const SColourValue& Light::diffuseColour() const{
  return light_->getDiffuseColour();
}

void Light::setSpecularColour(SColourValue col){
  light_->setSpecularColour(col);
}

const SColourValue& Light::specularColour() const{
  return light_->getSpecularColour();
}

void Light::setAsTerrainLight(){
  if(application()){
    application()->graphics()->setTerrainLight(light_);
  }
}

SAxisAlignedBox Light::getBoundingBox() const{
  return light_->getBoundingBox();
}

}; // namespace SF
