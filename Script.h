#ifndef STORMFIGHTER_SCRIPT_H_
#define STORMFIGTHER_SCRIPT_H_

#include "common.h"
#include "Component.h"

struct CollisionData;

class Script : public Component{
 public:
  Script(){type_="Script"; calls_=INIT|UPDATE|PHYSICS_UPDATE|COLLISION;}

  Script(SString type){type_ = type;}

  Script(SString type, unsigned int calls){type_ = type; calls_ = calls;}

  unsigned int onAdd(){return calls_;}

  const SString name() const {return type_;}

  // Override these for functionality
  virtual void onInit() {};
  virtual void onUpdate() {};
  virtual void onPhysicsUpdate() {};
  virtual void onCollision(CollisionData* collisionData) {};
 private:
  SString type_;
  unsigned int calls_;
};

#endif
