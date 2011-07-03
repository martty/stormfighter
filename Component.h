#ifndef STORMFIGHTER_COMPONENT_H_
#define STORMFIGHTER_COMPONENT_H_

#include "common.h"

/**
 * @brief Compenents are responsible for a part of a GameObject's behavior, appearance, etc.
 */
class Component{
 public:
  /**
   * @brief Create Component
   * @param object GameObject in which the component acts
   * @param app The application interface the component can access
   */
  void setInterface(GameObject* object, StormfighterApp* app);
  bool hasInterface() const;

  /// Default constructor will create non-acting contructor
  Component();

  /// destroys component
  virtual ~Component(){return;}

  /// returns type of component as string
  SString const virtual type() const = 0;

  /// to be called before each frame is rendered
  virtual void onUpdate(){}

  /// to be called once after Ogre startup
  virtual void onInit(){}

protected:
  GameObject* object() const;
  StormfighterApp* application() const;

 private:
  GameObject* object_;
  StormfighterApp* application_;

  void init(){}
};

#endif
