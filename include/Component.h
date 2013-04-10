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

  /// pulls properties into foreground state and returns it
  SPropertyTree serialise() const{ save(); return fg_state_; }
  /// writes foreground state and writes to properties
  void deserialise(SPropertyTree src){ fg_state_ = src; load(); }

  /// pulls properties to foreground state
  virtual void save() const{fg_state_.put("type", type());}
  /// writes properteis to foreground state
  virtual void load(){}
  /// pulls foreground state to background state
  void saveFG(){bg_state_ = fg_state_; }
  /// pulls background state to foreground state
  void loadBG(){fg_state_ = bg_state_; }

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

  /// foreground state (eg.: current)
  mutable SPropertyTree fg_state_;
  /// background state (eg.: sth stored)
  SPropertyTree bg_state_;

  void setProperty(SString key, SReal value) const {fg_state_.put("properties."+key, value);}
  void setProperty(SString key, SString value) const {fg_state_.put("properties."+key, value);}
  void setProperty(SString key, SVector3 value) const {fg_state_.put("properties."+key, Ogre::StringConverter::toString(value));}
  void setProperty(SString key, SQuaternion value) const {fg_state_.put("properties."+key, Ogre::StringConverter::toString(value));}
  void setProperty(SString key, SColourValue value) const {fg_state_.put("properties."+key, Ogre::StringConverter::toString(value));}

  int getIntegerProperty(SString key) const {return fg_state_.get<int>("properties."+key);}
  SReal getSRealProperty(SString key) const {return fg_state_.get<SReal>("properties."+key);}
  SString getSStringProperty(SString key) const {return fg_state_.get<SString>("properties."+key);}
  SVector3 getSVector3Property(SString key) const {return Ogre::StringConverter::parseVector3(fg_state_.get<SString>("properties."+key));}
  SQuaternion getSQuaternionProperty(SString key) const {return Ogre::StringConverter::parseQuaternion(fg_state_.get<SString>("properties."+key));}
  SColourValue getSColourValueProperty(SString key) const {return Ogre::StringConverter::parseColourValue(fg_state_.get<SString>("properties."+key));}
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
