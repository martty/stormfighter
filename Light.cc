#include "Light.h"

using namespace Ogre;

SLight::SLight(Light::LightTypes type){
  light_ = NULL;
  init(type);
}

void SLight::init(Light::LightTypes type){
  light_ = OgreFramework::getSingletonPtr()->m_pSceneMgr->createLight(); // TODO: GO name
}

void SLight::setDiffuseColour(ColourValue col){
  light_->setDiffuseColour(col);
}

void SLight::setSpecularColour(ColourValue col){
  light_->setSpecularColour(col);
}

void SLight::setAsTerrainLight(){
  if(application()){
    application()->setTerrainLight(light_);
  }
}

void SLight::onInit(){
  object()->transform()->attachObject(light_);
}
