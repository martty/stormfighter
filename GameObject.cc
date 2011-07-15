#include "common.h"
#include "GameObject.h"
#include "Transform.h"

using namespace Ogre;

NameCountMap GameObject::namecount_ = NameCountMap();

GameObject::GameObject(){
  name_ = "gameobject";
  init(false);
}

GameObject::GameObject(const SString& name){
  name_ = name;
  init(false);
}

GameObject::GameObject(bool isRoot){
  if(isRoot)
    name_ = "root";
  else
    name_ = "gameobject";
  init(isRoot);
}

void GameObject::init(bool isRoot){
  isRoot_ = isRoot;
  transform_ = NULL;
  components_.clear();
  callsdispatch_.clear();

  name_ = getUniqueName(name_);
  transform_ = new STransform(isRoot_);
  addComponent(transform_);

  next_ = children_ = parent_ = NULL ;
}

GameObject::~GameObject(){
  components_.clear ();
  clearChildren();
  delete next_;
}

void GameObject::addSibling(GameObject* go){
  // if GO has parent, remove from it
  if(go->parent_){
    go->parent_->removeChild(go);
  }
  if(next_ == NULL)
    next_ = go;
  else
    next_->addSibling(go);
  go->transform()->setParent(parent_->transform_);
  go->parent_ = parent_;
}

void GameObject::addChild(GameObject* go){
  // if GO has parent, remove from it
  if(go->parent_){
    go->parent_->removeChild(go);
  }
  if(children_ == NULL)
    children_ = go;
  else
    children_->addSibling(go);
  go->transform()->setParent(transform_);
  go->parent_ = this;
}

void GameObject::removeChild(GameObject* go){
  // if 1st child
  if(children_ == go){
    if(children_->next_)
      children_ = children_->next_;
    else
      children_ = NULL;
    go->next_ = NULL;
    return;
  }
  // if not 1st child, loop
  if(children_ != NULL){
    for(GameObject* child = children_; child; child = child->next_){
      if(child->next_ == go){
        child->next_ = child->next_->next_;
        go->next_ = NULL;
        return;
      }
    }
  }
  throw SException(debug() + " | child does not exist:" + go->name_);
}

void GameObject::setParent(GameObject* parent){
  // reparenting root is not allowed
  if(isRoot_)
    return;
  parent->addChild(this);
}

GameObject* GameObject::next(){
    return next_;
}

GameObject* GameObject::children(){
    return children_;
}

GameObject* GameObject::parent(){
    return parent_;
}

void GameObject::setNext(GameObject* go){
    next_ = go;
}

// BFS implementation of find (probably more efficient in usual scenegraphs)
const GameObject* GameObject::find(const SString& name){
  if(name == name_)
    return this;
  if( next_ != NULL )
    return next_->find(name);
  if( children_ != NULL)
    return children_->find(name);
  return NULL;
}

// BFS implementation of find (probably more efficient in usual scenegraphs)
const GameObject* GameObject::find(const GameObject* go){
  if(go == this)
    return this;
  if( next_ != NULL )
    return next_->find(go);
  if( children_ != NULL)
    return children_->find(go);
  return NULL;
}

void GameObject::clearChildren(){
  delete children_;
  children_ = NULL;
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
  unsigned int calls = cmp->onAdd(name_, transform_);
  // subscribe component for calls
  if(calls != Component::NONE){
    for(unsigned int mask = 1; mask < 129; mask = mask<<1){
      if(mask & calls){ // if component would like calls for this event
        // if that particular call list does not exist, initalize it
        // FIXME: kell ez? nemtudom pontosan.. :S
        if(callsdispatch_.find(mask) == callsdispatch_.end())
          callsdispatch_[mask] = std::vector<Component*>();
        // add this component to the particular call list
        callsdispatch_[mask].push_back(cmp);
      }
    }
  }
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

void GameObject::initialize(StormfighterApp* app, bool recursive){
  //OgreFramework::getSingletonPtr()->m_pLog->logMessage(name_);
  for(ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    (*it).second->setInterface(this,app);
  }

  transform_->onInit(); // guarantee first call, since map is not ordered (not required yet, but maybe later)
  // TODO: from callsdispatch
  for(ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    if((*it).second->type() != "Transform" && (*it).second->state() != Component::READY){
      (*it).second->onInit();
    }
  }
  if(recursive){
    if(children_)
      children_->initialize(app, true);
    if(next_)
      next_->initialize(app, true);
  }
}

void GameObject::update(bool recursive){
  for(ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
      (*it).second->onUpdate();
  }
  if(recursive){
    if(children_)
      children_->update(true);
    if(next_)
      next_->update(true);
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

void GameObject::onCollision(const CollisionData* collisionData){
  if(callsdispatch_.empty())
    return;
  if(callsdispatch_.find(Component::COLLISION) == callsdispatch_.end())
    return;
  std::vector<Component*> collisionCallList = callsdispatch_[Component::COLLISION];
  for(std::vector<Component*>::iterator iter = collisionCallList.begin(); iter != collisionCallList.end(); iter++){
      (*iter)->onCollision(collisionData);
  }
}
