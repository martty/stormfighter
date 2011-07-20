#ifndef STORMFIGHTER_SCRIPT_H_
#define STORMFIGHTER_SCRIPT_H_

#include "common.h"
#include "Component.h"
#include "StormfighterApp.h"
#include "GameObject.h"

struct CollisionData;

class SScript : public Component{
 public:
  SScript(){type_="Script"; calls_=INIT|UPDATE|PHYSICS_UPDATE|COLLISION;}

  SScript(SString type){type_ = type; calls_=INIT|UPDATE|PHYSICS_UPDATE|COLLISION;}

  SScript(SString type, unsigned int calls){type_ = type; calls_ = calls;}

  virtual ~SScript(){}

  unsigned int onAdd(SString objectname, STransform* transform){return calls_;}

  const SString type() const {return type_;}

  // Override these for functionality
  virtual void onInit() {}
  virtual void onUpdate() {}
  virtual void onPhysicsUpdate() {}
  /// to be called when the holder GameObject collides, once
  virtual void onCollisionEnter(const CollisionData* collisionData){}
  /// to be called when the holder GameObject stops colliding (with an other one), once
  virtual void onCollisionExit(const CollisionData* collisionData){}
  /// to be called when the holder GameObject collider, every tick
  virtual void onCollisionStay(const CollisionData* collisionData){}
 protected:
    // ALIASES (less typing, more fun! at the price of increased compilation time.. :S)
  // Application aliases
  inline Input* input() const { return application()->input(); }
  inline Physics* physics() const { return application()->physics(); }
  inline SReal deltaTime() const { return application()->deltaTime(); }
  // Object aliases
  inline STransform* transform() const { return object()->transform(); }

  SString type_;
  unsigned int calls_;
};

#endif
