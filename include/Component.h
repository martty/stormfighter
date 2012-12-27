#ifndef STORMFIGHTER_COMPONENT_H_
#define STORMFIGHTER_COMPONENT_H_

#include "common.h"

namespace SF {

struct CollisionData;
class Transform;
class Serialiser;

/**
 * @brief Compenents are responsible for a part of a GameObject's behavior, appearance, etc.
 */
class Component{
 public:
  /// Default constructor will create non-acting contructor
  Component();

  /// destroys component
  virtual ~Component();

  /// returns group of component as string
  virtual const SString& group() const;

  /// returns type of component as string
  virtual const SString& type() const;

  /// clones the component
  virtual Component* clone() const = 0;

  /**
  * @brief Called when the component is added to a GameObject
  * @param objectname Name of the GO, so that the component can appropriately name
  * @param transform Transform component of the GO
  */
  virtual unsigned int onAdd(SString objectname, Transform* transform){ return NONE; }
  /**
   * @brief Exposes the GameObject and the Application to the component
   * @param object GameObject in which the component acts
   * @param app The application interface the component can access
   */
  void setInterface(GameObject* object, StormfighterApp* app);
  bool hasInterface() const;

  /// to be called when component should be ready
  virtual void onInit(){}

  /// to be called before each frame is rendered
  virtual void onUpdate(){}

  /// to be called on each physics tick
  virtual void onPhysicsUpdate(){}

  /// to be called when the holder GameObject collides, once
  virtual void onCollisionEnter(const CollisionData* collisionData){}
  /// to be called when the holder GameObject stops colliding (with an other one), once
  virtual void onCollisionExit(const CollisionData* collisionData){}
  /// to be called when the holder GameObject collides, every tick
  virtual void onCollisionStay(const CollisionData* collisionData){}

  virtual SPropertyTree serialise(){ return tree_; }
  virtual void deserialise(SPropertyTree src){ tree_ = src; }

  /// pulls the current state
  virtual void save(){tree_.put("type", type_);}
  virtual void load(){}

  enum State {CREATED, PREPARED, READY};

  State state() const;

  enum Calls {
    NONE = 0, // No calls needed
    INIT = 1, // needs onInit called
    UPDATE = 2, // needs onUpdate called
    PHYSICS_UPDATE = 4, // needs onPhysicsUpdate called
    COLLISION = 8 // needs onCollision called TODO: collision helyett simple_collision, adv_collision..?
  };

  inline GameObject* object() const {return object_;}
  inline StormfighterApp* application() const {return application_;}

protected:
  void setState(State new_state);

  virtual SString name() const = 0;

  SPropertyTree tree_;

  void setProperty(SString key, SReal value){tree_.put(key, value);}
  void setProperty(SString key, SString value){tree_.put(key, value);}
  void setProperty(SString key, SVector3 value){tree_.put(key, Ogre::StringConverter::toString(value));}
  void setProperty(SString key, SQuaternion value){tree_.put(key, Ogre::StringConverter::toString(value));}
  void setProperty(SString key, SColourValue value){tree_.put(key, Ogre::StringConverter::toString(value));}

  int getIntegerProperty(SString key) const {return tree_.get<int>(key);}
  SReal getSRealProperty(SString key) const {return tree_.get<SReal>(key);}
  SString getSStringProperty(SString key) const {return tree_.get<SString>(key);}
  SVector3 getSVector3Property(SString key) const {return Ogre::StringConverter::parseVector3(tree_.get<SString>(key));}
  SQuaternion getSQuaternionProperty(SString key) const {return Ogre::StringConverter::parseQuaternion(tree_.get<SString>(key));}
  SColourValue getSColourValueProperty(SString key) const {return Ogre::StringConverter::parseColourValue(tree_.get<SString>(key));}
 private:
  GameObject* object_;
  StormfighterApp* application_;
  State state_;

  mutable SString group_;
  mutable SString type_;

  void init(){}
};

}; // namespace SF

#endif
