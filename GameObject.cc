#include "common.h"
#include "GameObject.h"
#include "Transform.h"

using namespace Ogre;

NameCountMap GameObject::namecount_ = NameCountMap();

GameObject::GameObject(){
  name_ = "gameobject";
  transform_ = NULL;
  init();
}

GameObject::GameObject(const SString& name){
  name_ = name;
  transform_ = NULL;
  init();
}

void GameObject::init(){
  components_.clear();

  name_ = getUniqueName(name_);
  transform_ = new STransform();
  addComponent(transform_);
}

GameObject::~GameObject(){
  components_.clear ();
}

void GameObject::addComponent(Component* cmp){
  if(TEST){
    SString cmp_group; size_t pos;

    /// Find group (cmp's type until '/')
    cmp_group = ((pos = cmp->type().find("/")) == std::string::npos) ? cmp->type() : cmp->type().substr(0,pos);

    /// Search component with same group name already in component map
    for(ComponentMap::iterator it=components_.begin(); it!=components_.end(); it++ ){
        if( (pos = (*it).first.find(cmp_group)) != std::string::npos && pos == 0 ) {
            throw SException(debug() + " | duplicate component group: " + cmp_group + " for component: " + cmp->type());
        }
    }
  }

  components_[cmp->type()] = cmp ;
}

Component* GameObject::component(const SString& name){
  if ( !hasComponent(name) ) throw SException(debug() + " | component unknown:" + name);
  return components_[name] ;
}

bool GameObject::hasComponent(const SString& name) const{
  return ( components_.find(name) != components_.end() );
}

STransform* GameObject::transform(){
  return transform_;
}

void GameObject::sendInit(StormfighterApp* app){
  for (ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    (*it).second->setInterface(this, app);
  }
  transform_->onInit(); // guarantee first call, since map is not ordered (not required yet, but maybe later)
  for (ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    if((*it).second->type() != "Transform"){
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

SString GameObject::debug() {
  return "["+name()+"]:<"+StringConverter::toString(transform()->position())+">";
}
