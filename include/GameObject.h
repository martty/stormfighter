#ifndef STORMFIGHTER_GAMEOBJECT_H_
#define STORMFIGHTER_GAMEOBJECT_H_

#include <map>
#include <set>
#include "common.h"
#include "Component.h"
#include "Transform.h"

namespace SF {

// Nem szeretek sokat irni
typedef std::map<SString, Component*> ComponentMap ;
typedef std::map<SString, int> NameCountMap;
typedef std::map<unsigned int, std::vector<Component*> > CallsMap;
typedef std::vector<Component*> ComponentVector;
typedef std::map<SString, CollisionData*> CollisionMap;

struct CollisionData;

/**
 *@brief Generic parent class for all GameObject
 *
 * Suggested abbroviation: GO, :)
 */
class GameObject {
 friend class Hierarchy;
 friend class Physics;
 public:
  // Core functions for GameObject
  GameObject(); /// Initialize GameObject with empty component map - name will be gameobject_n
  GameObject(bool isRoot); /// Initialize GameObject as Root (if isRoot = true)
  GameObject(const SString& name); /// Initialize GO with given name, if exists
  GameObject(const SString& name, bool cloning); /// Initialize GO with given name, allow for cloning constructor
  virtual ~GameObject(); /// Delete GameObject
  const SString& name() const {return name_;}
  SString debug();
  GameObject* clone(); /// Creates a clone, with the name current_GO_name_clone_n
  GameObject* clone(SString name); /// Creates a clone with name

  // Components
  void addComponent(Component* component);   /// Add's component to GameObject's component map
  Component* component(const SString& type); /// Returns component with given type
  Component* componentGroup(const SString& group); /// Returns the component which is in the given group (not usable with Script)
  ComponentVector allComponents(); /// Returns all components in this GameObject
  bool hasComponent(const SString& type) const;   /// Returns true if GameObject has component with type "type"
  bool hasComponentGroup(const SString& group) const;   /// Returns true if GameObject has component with group "group"
  Transform* transform();   /// Returns the transform component of the GameObject, alias for component("Transform")

  // Advanced components
  Component* firstComponentInChildren(const SString& type); /// Get the first component of type, searched first in this GameObject, then children
  Component* firstComponentGroupInChildren(const SString& group); /// Get the first component of type, searched first in this GameObject, then children
  ComponentVector allComponentInChildren(const SString& type); /// Get all components of type, searched first in this GameObject, then children

  // Component management
  /// sends onInit to core components, will follow list if recursive is true
  void coreInitialize(StormfighterApp* app, bool recursive );
  /// sends onInit to script components, will follow list if recursive is true
  void scriptInitialize(StormfighterApp* app, bool recursive );
  /// sends onUpdate to components, will follow list if recursive is true
  void update(bool recursive);
  /// sends onPhysicsUpdate to components, will follow list if recursive is true
  void physicsUpdate(bool recursive);
  /// sends collision events to components
  void collision();

  // Game object list managament
  ///Add equal level member to GameObject list
  void addSibling(GameObject* go);
  ///Add children(lower in hierarchy) member to GameObject list
  void addChild(GameObject* go);
  /// Set parent GameObject
  void setParent(GameObject* go);
  /// Sets the root as this GameObjects's parent
  void reParent();
  GameObject* parent(); /// Parent of this GameObject
  GameObjectList children(); /// Returns all children of this GameObject

  ///Find object with given name
  GameObject* find(const SString& name);
  ///Find object
  GameObject* find(const GameObject* go);

  ///Destroy all children (call their destructors)
  void clearChildren();

  ///Serialise GO (and descendants if recursive == true)
  SPropertyTree serialise(bool recursive);

  ///Serialise GO into JSON
  SString serialiseJSON(bool recursive);

  ///Deserialise a GO hierarchy from SPropertyTree
  static GameObject* deserialise(SPropertyTree src);

  /// Gets an AABB which bounds this GameObject and it's descendants
  SAxisAlignedBox getBoundingBox();

  // Tagging
  /// add tag to GO
  void addTag(SString tag);
  /// remove tag from GO
  void removeTag(SString tag);
  /// check for tag on GO
  bool hasTag(SString tag);
  /// get all tags from GO
  StringVector tags();


 protected:
  GameObject* next(); ///The next GameObject in the list
  GameObject* child(); ///The root of the children list
  void setNext(GameObject* go); ///Set next sibling in list(use this for insertion&deletion)

 private:
  void init(bool isRoot);
  /// Handling unique names in the format of name_n
  SString static getUniqueName(SString basename);

  /// Removes child from hierarchy (does NOT destroy)
  void removeChild(GameObject* go);

  /// Adds a collision (for Physics)
  void addCollision(CollisionData* collisionData);

  Component* _firstComponentInChildren(const SString& type); /// internal helper
  Component* _firstComponentGroupInChildren(const SString& group); /// internal helper
  void _allComponentInChildren(const SString& type, ComponentVector* vec); /// internal helper

  GameObject* _find(const SString& name);

  bool isRoot_;
  SString name_;
  ComponentMap components_;
  std::vector<SString> component_groups_;
  Transform* transform_;
  CollisionMap collisionmap_;

  GameObject* next_; /// Next sibling in list
  GameObject* children_; /// Root of children's list
  GameObject* parent_;

  StormfighterApp* application_;

  /// map for counting names
  static NameCountMap namecount_;
  /// map for registering components to calls
  CallsMap callsdispatch_;
  /// tag set
  std::set<SString> tags_;
};

}; // namespace SF

#endif
