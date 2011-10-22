#include "LuaScript.h"
#include "Scripting.h"

namespace SF {

LuaScript::LuaScript(SString type):Script(type){
  id_ = -1;
}

LuaScript::~LuaScript(){
  LOG("i'm dead (LS)");
}

void LuaScript::setTrackingId(int id){
  id_ = id;
}

void LuaScript::onInit(){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onInit");
  application()->scripting()->executeFunctionCall(2,0);
}

void LuaScript::onUpdate(){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onUpdate");
  application()->scripting()->executeFunctionCall(2,0);
}

void LuaScript::onPhysicsUpdate(){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onPhysicsUpdate");
  application()->scripting()->executeFunctionCall(2,0);
}

void LuaScript::onCollisionEnter(const CollisionData* collisionData){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onCollisionEnter");
  application()->scripting()->pushLightUserType(collisionData, "SF::CollisionData");
  application()->scripting()->executeFunctionCall(3,0);
}

void LuaScript::onCollisionExit(const CollisionData* collisionData){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onCollisionExit");
  application()->scripting()->pushLightUserType(collisionData, "SF::CollisionData");
  application()->scripting()->executeFunctionCall(3,0);
}

void LuaScript::onCollisionStay(const CollisionData* collisionData){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onCollisionStay");
  application()->scripting()->pushLightUserType(collisionData, "SF::CollisionData");
  application()->scripting()->executeFunctionCall(3,0);
}

}; // namespace SF
