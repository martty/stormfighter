#include "Component.h"

namespace SF {

void Component::setInterface (GameObject* object, StormfighterApp* app){
  object_ = object;
  application_ = app;
}

Component::Component(){
  setInterface(NULL,NULL);
  setState(CREATED);
  group_.clear();
  type_.clear();
}

Component::~Component() {
  LOG("~Component");
}

bool Component::hasInterface() const{
  return (object_ != NULL) && (application_ != NULL) ;
}

Component::State Component::state() const {
  return state_;
}

void Component::setState(State new_state){
  state_ = new_state;
}

const SString& Component::group() const {
  if(!group_.empty())
    return group_;
  size_t pos;
  pos = name().find("/");
  if(pos == std::string::npos){
    group_ = name();
  } else {
    group_ = name().substr(0,pos);
  }
  return group_;
};

const SString& Component::type() const {
  if(!type_.empty())
    return type_;
  size_t pos;
  pos = name().find("/");
  if(pos == std::string::npos){
    type_ = name();
  } else {
    type_ = name().substr(pos+1);
  }
  return type_;
};

}; // namespace SF
