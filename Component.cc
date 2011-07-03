#include "Component.h"

void Component::setInterface (GameObject* object, StormfighterApp* app){
  object_ = object;
  application_ = app;
}

Component::Component(){
  setInterface(NULL,NULL);
}

bool Component::hasInterface() const{
  return (object_ != NULL) && (application_ != NULL) ;
}

GameObject* Component::object() const {
  return object_;
}

StormfighterApp* Component::application() const {
  return application_;
}
