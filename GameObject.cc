#include "GameObject.h"
#include "Transform.h"

using namespace Ogre;

NameCountMap GameObject::namecount_ = NameCountMap();

GameObject::GameObject(){
  name_ = "gameobject";
  transform_ = NULL;
  init();
}

GameObject::GameObject(SString name){
  name_ = name;
  transform_ = NULL;
  init();
}

void GameObject::init(){
  name_ = getUniqueName(name_);
  // FIXME untested
  if( transform_ != NULL ) delete transform_ ;
  components_.clear();

  transform_ = new STransform();
  addComponent(transform_);
}

GameObject::~GameObject(){
  components_.clear ();
}

void GameObject::addComponent(Component* cmp){
  if (components_.find(cmp->type()) != components_.end()){
      // FIXME throw sajat exception
      return;
  }
  components_[cmp->type()] = cmp ;
  cmp->onAdd(name_, transform_);
}

Component* const GameObject::component(SString name){
  // if ( !hasComponent(name) ) FIXME Exception
  return components_[name] ;
}

bool GameObject::hasComponent(SString name) const{
  return ( components_.find(name) != components_.end() );
}

STransform* const GameObject::transform(){
  return transform_;
}

void GameObject::sendInit(StormfighterApp* app){
  for (ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    (*it).second->setInterface(this, app);
  }
  transform_->onInit(); // guarantee first call, since map is not ordered (not required yet, but maybe later)
  for (ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    if((*it).second->type() != "Transform" && (*it).second->state() != Component::READY){
      (*it).second->onInit();
    }
  }
}

SString GameObject::getUniqueName(SString basename){
  NameCountMap::iterator it = namecount_.find(basename);
  if (it != namecount_.end()){
      // exists
      int num = ++(*it).second;
      return basename+"_"+Ogre::StringConverter::toString(num);
  }
  namecount_[basename]=0;
  return basename;
}

SString GameObject::debug(){
  return "["+name()+"]:<"+StringConverter::toString(transform()->position())+">";
}
