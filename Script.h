#ifndef STORMFIGHTER_SCRIPT_H_
#define STORMFIGTHER_SCRIPT_H_

#include "common.h"
#include "Component.h"

struct CollisionData;

class SScript : public Component{
 public:
  SScript(){type_="Script"; calls_=INIT|UPDATE|PHYSICS_UPDATE|COLLISION;}

  SScript(SString type){type_ = type;}

  SScript(SString type, unsigned int calls){type_ = type; calls_ = calls;}

  virtual ~SScript(){}

  unsigned int onAdd(){return calls_;}

  const SString type() const {return type_;}

  // Override these for functionality
  virtual void onInit() {};
  virtual void onUpdate() {};
  virtual void onPhysicsUpdate() {};
  virtual void onCollision(CollisionData* collisionData) {};
 protected:
  SString type_;
  unsigned int calls_;
};

#endif
