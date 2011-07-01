#ifndef STORMFIGHTER_GAMEOBJECT_H_
#define STORMFIGHTER_GAMEOBJECT_H_

#include <map>
#include "common.h"
#include "Component.h"
#include "Transform.h"

class GameObject {
 public:
  GameObject();
  ~GameObject();

  void addComponent(Component* component);
  Component* const component(MyString name);
  bool hasComponent(MyString name);

  Transform* const transform();

 private:
  std::map<MyString, Component*> components_;
  Transform* transform_;
};

#endif
