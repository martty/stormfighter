#include "LuaScript.h"
#include "Scripting.h"

namespace SF {

LuaScript::LuaScript(SString type):Script(type){
  id_ = -1;
}

LuaScript::~LuaScript(){
  LOG("~LuaScript");
}

void LuaScript::setTrackingId(int id){
  id_ = id;
}

void LuaScript::onInit(){
  application()->scripting()->callOnInit(mytype_, this);
  setState(READY);
}

void LuaScript::onUpdate(){
  application()->scripting()->callOnUpdate(mytype_, this);
}

void LuaScript::onPhysicsUpdate(){
  application()->scripting()->callOnPhysicsUpdate(mytype_, this);
}

void LuaScript::onCollisionEnter(const CollisionData* collisionData){
  application()->scripting()->callOnCollisionEnter(mytype_, this, collisionData);
}

void LuaScript::onCollisionExit(const CollisionData* collisionData){
  application()->scripting()->callOnCollisionExit(mytype_, this, collisionData);
}

void LuaScript::onCollisionStay(const CollisionData* collisionData){
  application()->scripting()->callOnCollisionStay(mytype_, this, collisionData);
}

}; // namespace SF
