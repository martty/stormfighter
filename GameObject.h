#ifndef STORMFIGHTER_GAMEOBJECT_H_
#define STORMFIGHTER_GAMEOBJECT_H_

#include <map>
#include "common.h"
#include "Component.h"
#include "Transform.h"

// Nem szeretek sokat irni
typedef std::map<SString, Component*> ComponentMap ;
typedef std::map<SString, int> NameCountMap;

/**
 *@brief Generic parent class for all GameObject
 *
 * Suggested abbroviation: GO, :)
 */
class GameObject {
  public:

  /// Initialize GameObject with empty component map - name will be gameobject_n
  GameObject();

  /// Initialize GO with given name, if exists
  GameObject(SString name);

  /// Delete GameObject
  ~GameObject();

  /// Add's component to GameObject's component map
  void addComponent(Component* component);

  /// Returns component with given type
  Component* const component(SString name);

  /// Returns true if GameObject has component with type "name"
  bool hasComponent(SString name) const;

  /// Returns the transform component of the GameObject, alias for component("Transform")
  STransform* const transform() const;

  void sendInit(StormfighterApp* app);

  SString name() const {return name_;}

  SString debug();

 private:
  void init();
  /// Handling unique names in the format of name_n
  SString static getUniqueName(SString basename);

  SString name_;
  ComponentMap components_;
  STransform* transform_;
  /// map for counting names
  static NameCountMap namecount_;
};

#endif
