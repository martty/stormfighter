#ifndef STORMFIGHTER_SCRIPT_H_
#define STORMFIGHTER_SCRIPT_H_

#include "common.h"
#include "Component.h"
#include "StormfighterApp.h"
#include "GameObject.h"

namespace SF {

struct CollisionData;

class Script : public Component{
 public:
  Script(){mytype_="Script"; calls_=INIT|UPDATE|PHYSICS_UPDATE|COLLISION;}

  Script(SString type){mytype_ = type; calls_=INIT|UPDATE|PHYSICS_UPDATE|COLLISION;}

  Script(SString type, unsigned int calls){mytype_ = type; calls_ = calls;}

  virtual ~Script(){}

  virtual Script* clone() const { return new Script(mytype_, calls_); }

  unsigned int onAdd(SString objectname, Transform* transform){return calls_;}

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
  SString name() const { return "Script/"+mytype_; }
  // ALIASES (less typing, more fun! at the price of increased compilation time.. :S)
  // Application aliases
  inline Input* input() const { return application()->input(); }
  inline Physics* physics() const { return application()->physics(); }
  inline SReal deltaTime() const { return application()->deltaTime(); }
  // Object aliases
  inline Transform* transform() const { return object()->transform(); }

  SString mytype_;
  unsigned int calls_;
};

}; // namespace SF

#endif
