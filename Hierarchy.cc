#include "Hierarchy.h"

Hierarchy::Hierarchy(){
  // set up root GO
  root_ = new GameObject(true);
}

Hierarchy::~Hierarchy(){
  delete root_;
}

void Hierarchy::initialize(StormfighterApp* app){
  root_->initialize(app, true);
}

void Hierarchy::update(){
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
    g = g->parent_->next_;
  }
  return str;
}
