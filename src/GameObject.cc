#include "common.h"
#include "GameObject.h"
#include "Transform.h"
#include "MovableObject.h"
#include "StormfighterApp.h"
#include "Hierarchy.h"
#include "Physics.h"

#include <boost/foreach.hpp>
#include <boost/property_tree/json_parser.hpp>

namespace SF {

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

GameObject::GameObject(const SString& name, bool isCloning){
  name_ = name;
  if(!isCloning)
    init(false);
  isRoot_ = false;
  transform_ = NULL;
  components_.clear();
  callsdispatch_.clear();
  collisionmap_.clear();

  name_ = getUniqueName(name_);

  next_ = children_ = parent_ = NULL ;
  application_ = NULL;
}

void GameObject::init(bool isRoot){
  isRoot_ = isRoot;
  transform_ = NULL;
  components_.clear();
  callsdispatch_.clear();
  collisionmap_.clear();

  name_ = getUniqueName(name_);
  transform_ = new Transform(isRoot_);
  addComponent(transform_);

  next_ = children_ = parent_ = NULL ;
  application_ = NULL;
}

GameObject::~GameObject(){
  LOG("~GameObject: "+name_);
  for(ComponentMap::iterator it=components_.begin(); it!=components_.end(); it++ ){
    delete (*it).second;
  }
  components_.clear();
  clearChildren();
  delete next_;
}

GameObject* GameObject::clone(){
  return clone(name_);
}

GameObject* GameObject::clone(SString name){
  GameObject* clone = NULL;
  if(application_)
    clone = application_->hierarchy()->_cloneGameObject(name);
  else
    clone = new GameObject(name, true);
  // iterate over components and clone them
  LOG(name_ + "->" + clone->name_);
  clone->transform_ = transform_->clone(); // SUSY!
  clone->addComponent(clone->transform_);
  addSibling(clone); // enter it into hierarchy
  for(ComponentMap::iterator it = components_.begin(); it != components_.end(); it++){
    if((*it).first != "Transform"){
      clone->addComponent((*it).second->clone());
    }
  }
  return clone;
}

void GameObject::addSibling(GameObject* go){
  // if GO has parent, remove from it
  if(go->parent_){
    go->parent_->removeChild(go);
    go->parent_ = NULL;
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
    go->parent_ = NULL;
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

void GameObject::reParent(){
  // reparenting root is not allowed
  if(isRoot_)
    return;
  application_->hierarchy()->addChildToRoot(this);
}

GameObject* GameObject::next(){
    return next_;
}

GameObject* GameObject::child(){
    return children_;
}

GameObject* GameObject::parent(){
    return parent_;
}

void GameObject::setNext(GameObject* go){
    next_ = go;
}

GameObjectList GameObject::children(){
  GameObjectList golist;
  for(GameObject* g = children_; g != NULL; g = g->next()){
    golist.push_back(g);
  }
  return golist;
}
// BFS implementation of find (probably more efficient in usual scenegraphs)
// TODO: tests!
GameObject* GameObject::find(const SString& name){
  GameObject* found = NULL;
  if(name == name_)
    return this;
  if(parent_){
    return parent_->_find(name);
  } else {
    return _find(name);
  }
}

GameObject* GameObject::_find(const SString& name){
  GameObject* found = NULL;
  if(name == name_)
    return this;
  if( next_ != NULL )
    found = next_->_find(name);
  if( children_ != NULL && found == NULL)
    return children_->_find(name);
  return found;
}


// BFS implementation of find (probably more efficient in usual scenegraphs)
GameObject* GameObject::find(const GameObject* go){
  GameObject* found = NULL;
  if(go == this)
    return this;
  if( next_ != NULL )
    found = next_->find(go);
  if( children_ != NULL && found == NULL)
    return children_->find(go);
  return found;
}

void GameObject::clearChildren(){
  delete children_;
  children_ = NULL;
}

void GameObject::addComponent(Component* cmp){

  /// Search component with same group name already in component map (if it is not a script)
  if(cmp->group() != "Script") {
    for(ComponentMap::iterator it=components_.begin(); it!=components_.end(); it++ ){
        if( (*it).second->group() == cmp->group() ) {
            throw SException(debug() + " | duplicate component group: " + cmp->group() + " for component: " + cmp->type());
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

Component* GameObject::componentGroup(const SString& group){
  for(ComponentMap::iterator it=components_.begin(); it!=components_.end(); it++ ){
    if( (*it).second->group() == group )
      return (*it).second;
  }
  return NULL;
}

bool GameObject::hasComponent(const SString& name) const{
  return ( components_.find(name) != components_.end() );
}

bool GameObject::hasComponentGroup(const SString& group) const{
  for(ComponentMap::const_iterator it=components_.begin(); it!=components_.end(); it++ ){
    if( (*it).second->group() == group )
      return true;
  }
  return NULL;
}

ComponentVector GameObject::allComponents() {
  ComponentVector all;
  for(ComponentMap::iterator it = components_.begin(); it != components_.end(); it++){
    all.push_back((*it).second);
  }
  return all;
}

Transform* GameObject::transform(){
  return transform_;
}

void GameObject::coreInitialize(StormfighterApp* app, bool recursive){
  application_ = app;
  if(recursive){
    if(children_)
      children_->coreInitialize(app, true);
    if(next_)
      next_->coreInitialize(app, true);
  }
  for(ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    (*it).second->setInterface(this,app);
  }
  LOG("begin coreinit for " + name());
  transform_->onInit(); // guarantee first call, since map is not ordered (not required yet, but maybe later)
  // TODO: from callsdispatch
  for(ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    if((*it).second->type() != "Transform" && (*it).second->state() != Component::READY && (*it).second->group() != "LuaScript"){
      LOG("initing:"+(*it).second->type());
      (*it).second->onInit();
    }
  }
}

void GameObject::scriptInitialize(StormfighterApp* app, bool recursive){
  if(recursive){
    if(children_)
      children_->scriptInitialize(app, true);
    if(next_)
      next_->scriptInitialize(app, true);
  }
  LOG("begin scriptinit for " + name());
  for(ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    if(((*it).second->state() != Component::READY) && ((*it).second->group() == "LuaScript")) {
      LOG("initing:"+(*it).second->type());
      (*it).second->onInit();
    }
  }
}

void GameObject::update(bool recursive){
  for(ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    if((*it).second->state() == Component::READY)
      (*it).second->onUpdate();
  }
  if(recursive){
    if(children_)
      children_->update(true);
    if(next_)
      next_->update(true);
  }
}

void GameObject::physicsUpdate(bool recursive){
  for(ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    if((*it).second->state() == Component::READY)
      (*it).second->onPhysicsUpdate();
  }
  if(recursive){
    if(children_)
      children_->physicsUpdate(true);
    if(next_)
      next_->physicsUpdate(true);
  }
  collision();
}


SString GameObject::getUniqueName(SString name){
  size_t pos;
  SString basename = ((pos = name.rfind("_")) == std::string::npos) ? name : name.substr(0,pos);
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
  return "["+name()+"]:<"+Ogre::StringConverter::toString(transform()->position())+">";
}

void GameObject::collision(){
  if(callsdispatch_.empty() || callsdispatch_.find(Component::COLLISION) == callsdispatch_.end())
    return;
  ComponentVector collisionCallList = callsdispatch_[Component::COLLISION];
  // check what events do we need to send out
  std::vector<SString> removes;
  for(CollisionMap::iterator it = collisionmap_.begin(); it != collisionmap_.end(); it++){
    for(ComponentVector::iterator iter = collisionCallList.begin(); iter != collisionCallList.end(); iter++){
      if((*it).second->stale){
        (*iter)->onCollisionExit((*it).second);
        removes.push_back((*it).first);
      } else if ((*it).second->fresh){
        (*iter)->onCollisionEnter((*it).second);
      } else {
        (*iter)->onCollisionStay((*it).second);
      }
    }
    (*it).second->stale = true;
    (*it).second->fresh = false;
  }
  // remove exited entries
  for(std::vector<SString>::iterator it = removes.begin(); it != removes.end(); it++){
    collisionmap_.erase(*it);
  }
}

// BFS
Component* GameObject::firstComponentInChildren(const SString& type){
  if(hasComponent(type))
    return component(type);
  if(children_){
    return children_->_firstComponentInChildren(type);
  }
  return NULL;
}

Component* GameObject::_firstComponentInChildren(const SString& type){
  Component* ret = NULL;
  if(hasComponent(type))
    return component(type);
  if(next_)
    ret = next_->_firstComponentInChildren(type);
  if(children_ && ret == NULL)
    ret = children_->_firstComponentInChildren(type);
  return ret;
}

Component* GameObject::firstComponentGroupInChildren(const SString& group){
  if(hasComponentGroup(group))
    return componentGroup(group);
  if(children_){
    return children_->_firstComponentGroupInChildren(group);
  }
  return NULL;
}

Component* GameObject::_firstComponentGroupInChildren(const SString& group){
  Component* ret = NULL;
  if(hasComponentGroup(group))
    return componentGroup(group);
  if(next_)
    ret = next_->_firstComponentGroupInChildren(group);
  if(children_ && ret == NULL)
    ret = children_->_firstComponentGroupInChildren(group);
  return ret;
}

ComponentVector GameObject::allComponentInChildren(const SString& type){
  ComponentVector vec;
  if(hasComponent(type))
    vec.push_back(component(type));
  if(children_){
    children_->_allComponentInChildren(type, &vec);
  }
  return vec;
}

void GameObject::_allComponentInChildren(const SString& type, ComponentVector* vec){
  if(hasComponent(type))
    vec->push_back(component(type));
  if(next_)
    next_->_allComponentInChildren(type, vec);
  if(children_)
    children_->_allComponentInChildren(type,vec);
}

void GameObject::addCollision(CollisionData* colld){
  CollisionMap::iterator it = collisionmap_.find(colld->other->name_);
  CollisionData* old;
  if(it != collisionmap_.end() && (*it).second->stale){ // replace old collisiondata with new if and only if stale
    old = (*it).second;
    (*it).second = colld;
    delete old;
  } else if(it == collisionmap_.end()){ // insert new and make it fresh
    collisionmap_[colld->other->name_] = colld;
    colld->fresh = true;
  }
}

SPropertyTree GameObject::serialise(bool recursive){
  if (hasTag("no-serialise-recursive")){ // this means we return an empty tree, serialisation hits an end
    return SPropertyTree();
  }
  SPropertyTree ptree;
  SPropertyTree cmps;
  SPropertyTree children;
  ptree.put("name", name_);
  for(ComponentMap::iterator it=components_.begin(); it != components_.end(); it++){
    (*it).second->save();
    cmps.push_back(std::make_pair((*it).first, (*it).second->serialise()));
  }
  ptree.add_child("components", cmps);
  if(recursive){
    if(children_){
      for(GameObject* f = children_; f != NULL; f=f->next_){
        SPropertyTree ptch = f->serialise(true);
        if(!ptch.empty()) // don't put empty subtrees in
          children.push_back(std::make_pair("", ptch));
      }
      if(!children.empty()) // only create node if a children wanted serialisation
        ptree.add_child("children", children);
    }
  }
  if(hasTag("no-serialise")){ // this gameobject stays out of the tree, return only the children as an array
    return children;
  } else {
    return ptree;
  }
}

SString GameObject::serialiseJSON(bool recursive){
  SPropertyTree pt = serialise(recursive);
  std::stringstream ss;
  boost::property_tree::write_json(ss, pt, true); // pretty print
  return ss.str();
}

GameObject* GameObject::deserialise(SPropertyTree src){
  // two possibilities : top node - GO
  //                   : top node - array of GOs
  if(src.count("name") == 1){ // top node - GO
    SString name = src.get<SString>("name");
    GameObject* go = new GameObject(name);
    BOOST_FOREACH(SPropertyTree::value_type &v, src.get_child("components")){
      if(v.first == "Transform"){
        go->transform()->deserialise(v.second);
        go->transform()->load();
      }
    }
    if(src.count("children") != 0){
      BOOST_FOREACH(SPropertyTree::value_type &v, src.get_child("children")){
        go->addChild(GameObject::deserialise(v.second));
      }
    }
    return go;
  } else {  // top node - array of GOs
    GameObjectList gos;
    // create all GOs and put them in a list
    BOOST_FOREACH(SPropertyTree::value_type &v, src){
      gos.push_back(GameObject::deserialise(v.second));
    }
    // if we have just one GO, we are done
    if (gos.size() == 1)
      return gos[0];
    // make them siblings of the first one
    for(int i = 1; i < gos.size(); i++){
      gos[0]->addSibling(gos[i]);
    }
    return gos[0];
  }
}

SAxisAlignedBox GameObject::getBoundingBox(){
  ComponentVector meshes = allComponentInChildren("Mesh");
  ComponentVector cameras = allComponentInChildren("Camera");
  ComponentVector lights = allComponentInChildren("Light");
  ComponentVector bounded;
  bounded.insert(bounded.end(), meshes.begin(), meshes.end());
  bounded.insert(bounded.end(), cameras.begin(), cameras.end());
  bounded.insert(bounded.end(), lights.begin(), lights.end());
  SAxisAlignedBox bbox;
  for(ComponentVector::iterator it = bounded.begin(); it != bounded.end(); it++){
    MovableObject* mo = static_cast<MovableObject*>(*it);
    bbox.merge(mo->getBoundingBox());
  }
  return bbox;
}

void GameObject::addTag(SString tag){
  tags_.insert(tag);
}

void GameObject::removeTag(SString tag){
  tags_.erase(tags_.find(tag));
}

bool GameObject::hasTag(SString tag){
  if(tags_.find(tag) == tags_.end())
    return false;
  else
    return true;
}

StringVector GameObject::tags(){
  StringVector vec;
  for (std::set<SString>::iterator it=tags_.begin(); it!=tags_.end(); it++)
    vec.push_back(*it);
  return vec;
}


}; // namespace SF
