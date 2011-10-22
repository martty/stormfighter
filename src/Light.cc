#include "Light.h"
#include "Graphics.h"
#include "GameObject.h"
#include "StormfighterApp.h"

namespace SF {

Light::Light(Ogre::Light::LightTypes type){
  light_ = NULL;
  type_ = type;
  setState(CREATED);
}

unsigned int Light::onAdd(SString goname, Transform* tf){
  light_ = Graphics::getSingletonPtr()->sceneManager()->createLight(goname);
  light_->setType(type_);
  tf->attachObject(light_);
  setState(READY);
  return NONE;
}

Light* Light::clone() const{
  // TODO: clone all parameters
  Light* light = new Light(type_);
  return light;
}

void Light::setDiffuseColour(SColourValue col){
  light_->setDiffuseColour(col);
}

void Light::setSpecularColour(SColourValue col){
  light_->setSpecularColour(col);
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
