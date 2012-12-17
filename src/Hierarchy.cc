#include "Hierarchy.h"
#include "StormfighterApp.h"
#include "Resources.h"
#include <boost/property_tree/json_parser.hpp>

namespace SF {

Hierarchy::Hierarchy(StormfighterApp* app){
  // set up root GO
  root_ = new GameObject(true);
  fresh_.clear();
  application_ = app;
  state_ = DOWN;
}

Hierarchy::~Hierarchy(){
  delete root_;
}

void Hierarchy::initialise(){
  state_ = UP;
  root_->coreInitialize(application_, true);
  root_->scriptInitialize(application_, true);
}

void Hierarchy::update(){
  for(GameObjectList::iterator it = fresh_.begin(); it != fresh_.end(); it++){
    (*it)->coreInitialize(application_, true);
  }
  for(GameObjectList::iterator it = fresh_.begin(); it != fresh_.end(); it++){
    (*it)->scriptInitialize(application_, true);
  }
  fresh_.clear();
  root_->update(true);
}

void Hierarchy::physicsUpdate(){
  root_->physicsUpdate(true);
}

GameObject* Hierarchy::createGameObject(){
  GameObject* go = new GameObject();
  root_->addChild(go);
  if(state_ == UP)
    fresh_.push_back(go);
  return go;
}

GameObject* Hierarchy::createGameObject(SString name){
  GameObject* go = new GameObject(name);
  root_->addChild(go);
  if(state_ == UP){
    fresh_.push_back(go);
  }
  return go;
}

GameObject* Hierarchy::_cloneGameObject(SString name){
  GameObject* go = new GameObject(name, true);
  if(state_ == UP)
    fresh_.push_back(go);
  return go;
}

void Hierarchy::addChildToRoot(GameObject* go){
  if(go != root_)
    root_->addChild(go);
}

GameObject* Hierarchy::getRoot(){
  return root_;
}

void Hierarchy::destroyGameObject(SString name){
  return;
}

void Hierarchy::destroyGameObject(GameObject* obj){
  return;
}

void Hierarchy::loadGameObjectFromFile(SString filename){
  LOG("in hier");
  SString src = application_->resources()->readObjectFile(filename);
  LOG("read.");
  //TODO: fix
  //GameObject* go = GameObject::deserialise(src);
  //if(go)
  //  addChildToRoot(go);
}

GameObject* Hierarchy::find(SString name){
  return root_->find(name);
}

SString Hierarchy::debug(){
  SString str = "";
  SString prefix = "*";
  GameObject* g = root_;
  while(g){
    str += prefix+g->debug()+"\n";
    if(g->children_){
      // loop through children
      prefix += "*";
      g = g->children_;
      continue;
    }
    if(g->next_){
      g = g->next_;
      continue;
    }
    prefix = prefix.substr(0, prefix.length()-1);
    if(g->parent_ && g->parent_->next_)
      g = g->parent_->next_;
    else
      return str;
  }
  return str;
}

SString Hierarchy::serialise(){
  using boost::property_tree::ptree;
  ptree pt;

  pt.add_child("hierarchy", _serialiseSubtree(root_));
  std::stringstream ss;
  write_json(ss, pt, false);
  write_json("test.json", pt);
  return ss.str();
}

boost::property_tree::ptree Hierarchy::_serialiseSubtree(GameObject* g){
  using boost::property_tree::ptree;
  ptree pt;
  ptree children;

  pt.put("name", g->name());
  pt.put("isDisabled", false); // FIXME

  if (g->children_){
    for(GameObject* f = g->children_; f != NULL; f=f->next_){
      children.push_back(std::make_pair("", _serialiseSubtree(f)));
    }
    pt.add_child("children", children);
  }
  return pt;
}

}; // namespace SF
