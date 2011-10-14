#ifndef STORMFIGHTER_LUASCRIPT_H_
#define STORMFIGHTER_LUASCRIPT_H_

#include "Script.h"


class SLuaScript : public SScript{
 public:
  /** Default constructor */
  SLuaScript(SString type);
  /** Default destructor */
  ~SLuaScript();

  void setTrackingId(int id);
  virtual SLuaScript* clone() const { return new SLuaScript(type_); }

  // Override these for functionality
  void onInit();
  void onUpdate();
  void onPhysicsUpdate();
  /// to be called when the holder GameObject collides, once
  void onCollisionEnter(const CollisionData* collisionData);
  /// to be called when the holder GameObject stops colliding (with an other one), once
  void onCollisionExit(const CollisionData* collisionData);
  /// to be called when the holder GameObject collider, every tick
  void onCollisionStay(const CollisionData* collisionData);
 private:
  int id_;
};

#endif // STORMFIGHTER_LUASCRIPT_H_
