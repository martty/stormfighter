#ifndef STORMFIGHTER_LUASCRIPT_H_
#define STORMFIGHTER_LUASCRIPT_H_

#include "Script.h"

namespace SF {

class LuaScript : public Script{
 public:
  /** Default constructor */
  LuaScript(SString type);
  /** Default destructor */
  ~LuaScript();

  void setTrackingId(int id);
  virtual LuaScript* clone() const { return new LuaScript(mytype_); }

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
 protected:
  SString name() const { return "LuaScript/"+mytype_; }
 private:
  int id_;
};

}; // namespace SF

#endif // STORMFIGHTER_LUASCRIPT_H_
