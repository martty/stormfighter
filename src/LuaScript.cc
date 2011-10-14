#include "LuaScript.h"
#include "Scripting.h"

SLuaScript::SLuaScript(SString type):SScript(type){
  id_ = -1;
}

SLuaScript::~SLuaScript(){
  LOG("i'm dead (LS)");
}

void SLuaScript::setTrackingId(int id){
  id_ = id;
}

void SLuaScript::onInit(){
 if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onInit");
  application()->scripting()->executeFunctionCall(2,0);
}

void SLuaScript::onUpdate(){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onUpdate");
  application()->scripting()->executeFunctionCall(2,0);
}

void SLuaScript::onPhysicsUpdate(){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onPhysicsUpdate");
  application()->scripting()->executeFunctionCall(2,0);
}

void SLuaScript::onCollisionEnter(const CollisionData* collisionData){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onCollisionEnter");
  application()->scripting()->pushLightUserType(collisionData, "CollisionData");
  application()->scripting()->executeFunctionCall(3,0);
}

void SLuaScript::onCollisionExit(const CollisionData* collisionData){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onCollisionExit");
  application()->scripting()->pushLightUserType(collisionData, "CollisionData");
  application()->scripting()->executeFunctionCall(3,0);
}

void SLuaScript::onCollisionStay(const CollisionData* collisionData){
  if(id_ < 0)
    return;
  application()->scripting()->selectGlobal("System");
  application()->scripting()->index("_fireComponentEvent");
  application()->scripting()->pushNumber(id_);
  application()->scripting()->pushString("onCollisionStay");
  application()->scripting()->pushLightUserType(collisionData, "CollisionData");
  application()->scripting()->executeFunctionCall(3,0);
}
