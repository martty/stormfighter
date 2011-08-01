#include "LuaScript.h"
#include "Scripting.h"

SLuaScript::SLuaScript(SString type, SString callpath):SScript(type), callpath_(callpath){
}

SLuaScript::~SLuaScript(){
}

void SLuaScript::onInit(){
  application()->scripting()->executeString(callpath_+":_onInit();");
}

void SLuaScript::onUpdate(){
  application()->scripting()->executeString(callpath_+":_onUpdate();");
}

void SLuaScript::onPhysicsUpdate(){
  application()->scripting()->executeString(callpath_+":_onPhysicsUpdate();");
}

void SLuaScript::onCollisionEnter(const CollisionData* collisionData){
  application()->scripting()->executeString(callpath_+":_onCollisionEnter();");
}

void SLuaScript::onCollisionExit(const CollisionData* collisionData){
  application()->scripting()->executeString(callpath_+":_onCollisionExit();");
}

void SLuaScript::onCollisionStay(const CollisionData* collisionData){
  application()->scripting()->executeString(callpath_+":onCollisionStay();");
}
