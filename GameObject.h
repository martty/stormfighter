#ifndef STORMFIGHTER_GAMEOBJECT_H_
#define STORMFIGHTER_GAMEOBJECT_H_

#include <map>
#include "common.h"
#include "Component.h"
#include "Transform.h"

// Nem szeretek sokat irni
typedef std::map<SString, Component*> ComponentMap ;
typedef std::map<SString, int> NameCountMap;
typedef std::map<unsigned int, std::vector<Component*> > CallsMap;
typedef std::vector<Component*> ComponentVector;

struct CollisionData;

/**
 *@brief Generic parent class for all GameObject
 *
 * Suggested abbroviation: GO, :)
 */
class GameObject {
 friend class Hierarchy;
 public:
  // Core functions for GameObject
  GameObject(); /// Initialize GameObject with empty component map - name will be gameobject_n
  GameObject(bool isRoot); /// Initialize GameObject as Root (if isRoot = true)
  GameObject(const SString& name); /// Initialize GO with given name, if exists
  virtual ~GameObject(); /// Delete GameObject
  const SString& name() const {return name_;}
  SString debug();

  // Components
  void addComponent(Component* component);   /// Add's component to GameObject's component map
  Component* component(const SString& type); /// Returns component with given type
  bool hasComponent(const SString& type) const;   /// Returns true if GameObject has component with type "type"
  STransform* transform();   /// Returns the transform component of the GameObject, alias for component("Transform")

  // Advanced components
  Component* firstComponentInChildren(const SString& type); /// Get the first component of type, searched first in this GameObject, then children
  ComponentVector allComponentInChildren(const SString& type); /// Get all components of type, searched first in this GameObject, then children

  // Component management
  /// sends onInit to components, will follow list if recursive is true
  void initialize(StormfighterApp* app, bool recursive );
  /// sends onUpdate to components, will follow list if recursive is true
  void update(bool recursive);
  /// sends onPhysicsUpdate to components, will follow list if recursive is true
  void physicsUpdate(bool recursive);
  /// sends collision to components
  void onCollision(const CollisionData* collisionData);

  // Game object list managament
  ///Add equal level member to GameObject list
  void addSibling(GameObject* go);
  ///Add children(lower in hierarchy) member to GameObject list
  void addChild(GameObject* go);
  /// Set parent GameObject
  void setParent(GameObject* go);

  ///Find object with given name
  GameObject* find(const SString& name);
  ///Find object
  GameObject* find(const GameObject* go);

  /// Removes child from hierarchy (does NOT destroy)
  void removeChild(GameObject* go);
  ///Destroy all children (call their destructors)
  void clearChildren();
 protected:
  GameObject* next(); ///The next GameObject in the list
  GameObject* children(); ///The root of the children list
  GameObject* parent(); /// Parent of this GameObject
  void setNext(GameObject* go); ///Set next sibling in list(use this for insertation&deletion)

 private:
  void init(bool isRoot);
  /// Handling unique names in the format of name_n
  SString static getUniqueName(SString basename);

  Component* _firstComponentInChildren(const SString& type); /// internal helper
  void _allComponentInChildren(const SString& type, ComponentVector* vec); /// internal helper

  bool isRoot_;
  SString name_;
  ComponentMap components_;
  std::vector<SString> component_groups_;
  STransform* transform_;

  GameObject* next_; /// Next sibling in list
  GameObject* children_; /// Root of children's list
  GameObject* parent_;

  /// map for counting names
  static NameCountMap namecount_;
  /// map for registering components to calls
  CallsMap callsdispatch_;
};

#endif
