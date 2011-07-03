#include "GameObject.h"
#include "Transform.h"

using namespace Ogre;

GameObject::GameObject(){
  transform_ = NULL;
  init();
}

void GameObject::init(){
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
    if((*it).second->type() != "Transform"){
      OgreFramework::getSingletonPtr()->m_pLog->logMessage((*it).second->type());
      (*it).second->onInit();
    }
  }
}
