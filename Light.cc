#include "Light.h"
#include "Graphics.h"
#include "GameObject.h"
#include "StormfighterApp.h"

using namespace Ogre;

SLight::SLight(Light::LightTypes type){
  light_ = NULL;
  type_ = type;
  setState(CREATED);
}

unsigned int SLight::onAdd(SString goname, STransform* tf){
  light_ = Graphics::getSingletonPtr()->sceneManager()->createLight(goname);
  light_->setType(type_);
  tf->attachObject(light_);
  setState(READY);
  return NONE;
}

SLight* SLight::clone() const{
  // TODO: clone all parameters
  SLight* light = new SLight(type_);
  return light;
}

void SLight::setDiffuseColour(ColourValue col){
  light_->setDiffuseColour(col);
}

void SLight::setSpecularColour(ColourValue col){
  light_->setSpecularColour(col);
}

void SLight::setAsTerrainLight(){
  if(application()){
    application()->graphics()->setTerrainLight(light_);
  }
}
