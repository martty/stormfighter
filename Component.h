#ifndef STORMFIGHTER_COMPONENT_H_
#define STORMFIGHTER_COMPONENT_H_

#include "common.h"

class STransform;
struct CollisionData;

/**
 * @brief Compenents are responsible for a part of a GameObject's behavior, appearance, etc.
 */
class Component{
 public:
  /// Default constructor will create non-acting contructor
  Component();

  /// destroys component
  virtual ~Component(){return;}

  /// returns type of component as string
  SString const virtual type() const = 0;

  /**
  * @brief Called when the component is added to a GameObject
  * @param objectname Name of the GO, so that the component can appropriately name
  * @param transform Transform component of the GO
  */
  virtual unsigned int onAdd(SString objectname, STransform* transform){ return NONE; }
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

  /// to be called when the holder GameObject collides
  virtual void onCollision(const CollisionData* collisionData){}

  enum State {CREATED, PREPARED, READY};

  State state() const;

  enum Calls {
    NONE = 0, // No calls needed
    INIT = 1, // needs onInit called
    UPDATE = 2, // needs onUpdate called
    PHYSICS_UPDATE = 4, // needs onPhysicsUpdate called
    COLLISION = 8 // needs onCollision called TODO: collision helyett simple_collision, adv_collision..?
  };
protected:
  GameObject* object() const;
  StormfighterApp* application() const;

  void setState(State new_state);
 private:
  GameObject* object_;
  StormfighterApp* application_;
  State state_;

  void init(){}
};

#endif
