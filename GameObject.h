#ifndef STORMFIGHTER_GAMEOBJECT_H_
#define STORMFIGHTER_GAMEOBJECT_H_

#include <map>
#include "common.h"
#include "Component.h"
#include "Transform.h"

// Nem szeretek sokat irni
typedef std::map<MyString, Component*> ComponentMap ;

/**
 *@brief Generic parent class for all GameObject
 *
 * Suggested abbroviation: GO, :)
 */
class GameObject {
  public:

  /// Initialize GameObject with empty component map
  GameObject();

  /// Delete GameObject
  ~GameObject();

  /// Add's component to GameObject's component map
  void addComponent(Component* component);

  /// Returns component with given type
  Component* const component(MyString name);

  /// Returns true if GameObject has component with type "name"
  bool hasComponent(MyString name) const;

  /// Returns the transform component of the GameObject, alias for component("Transform")
  STransform* const transform();

  void sendInit(StormfighterApp* app) ;

 private:
  void init();

  ComponentMap components_;
  STransform* transform_;
};

#endif
