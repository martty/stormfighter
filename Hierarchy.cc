#include "Hierarchy.h"

Hierarchy::Hierarchy(){
  // set up root GO
  root_ = new GameObject(true);
  fresh_.clear();
  application_ = NULL;
}

Hierarchy::~Hierarchy(){
  delete root_;
}

void Hierarchy::initialize(StormfighterApp* app){
  application_ = app;
  root_->initialize(application_, true);
}

void Hierarchy::update(){
  for(GameObjectList::iterator it = fresh_.begin(); it != fresh_.end(); it++){
    (*it)->initialize(application_, true);
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
  return go;
}

GameObject* Hierarchy::createGameObject(SString name){
  GameObject* go = new GameObject(name);
  root_->addChild(go);
  return go;
}

GameObject* Hierarchy::_cloneGameObject(SString name){
  GameObject* go = new GameObject(name, true);
  fresh_.push_back(go);
  return go;
}

void Hierarchy::destroyGameObject(SString name){
  return;
}

void Hierarchy::destroyGameObject(GameObject* obj){
  return;
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
