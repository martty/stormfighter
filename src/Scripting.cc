#include "Scripting.h"
#include "StormfighterApp.h"
#include "LuaBindings.h"
#include <stdio.h>

namespace SF {

Scripting::Scripting(StormfighterApp* app) : Module(app){
  luaState_ = lua_open();
  luaL_openlibs(luaState_);
  tolua_Stormfighter_open(luaState_);
  reset_ = false;
}

Scripting::~Scripting(){
  lua_close(luaState_);
}

bool Scripting::initialise(){
  // export globals to lua
  setGlobal(application()->input(), "SF::Input", "Input");
  setGlobal(application()->hierarchy(), "SF::Hierarchy", "Hierarchy");
  setGlobal(application()->gui(), "SF::GUI", "GUI");
  setGlobal(application()->physics(), "SF::Physics", "Physics");
  setGlobal(application()->logger(), "SF::Logger", "Logger");
  setGlobal(application()->resources(), "SF::Resources", "Resources");
  setGlobal(application()->graphics(), "SF::Graphics", "Graphics");
  setGlobal(this, "SF::Scripting", "Scripting");
  setGlobal(application(), "SF::StormfighterApp", "Application");
  // do lua side initialisation
  return parseFile("scripts/init.lua");
}


bool Scripting::parseFile(SString file){
  if(luaL_dofile(luaState_, file.c_str())){
    LOG(lua_tostring(luaState_,-1));
    return false;
  }
  return true;
}

void Scripting::setGlobal(void* variable, const SString& type_name, const SString& lua_name){
  tolua_pushusertype(luaState_, variable, type_name.c_str());
  lua_setglobal(luaState_, lua_name.c_str());
}

void Scripting::unsetGlobal(const SString& lua_name){
  lua_pushnil(luaState_);
  lua_setglobal(luaState_, lua_name.c_str());
}

bool Scripting::executeString(const SString& luaString){
  if(reset_){
    _reset();
  }
  if(luaL_dostring(luaState_, luaString.c_str())){
    LOG(lua_tostring(luaState_,-1));
    return false;
  }
  return true;
}

void Scripting::prepareFunctionCall(){
  if(!lua_isfunction(luaState_,-1)){
      LOG("error in preparing function call: ");
      LOG(lua_tostring(luaState_, -1));
      lua_pop(luaState_,1);
  }
}

void Scripting::selectGlobal(const SString& index){
  lua_getglobal(luaState_, index.c_str());
}

void Scripting::getField(const SString& field_name){
  lua_pushstring(luaState_, field_name.c_str());
  lua_gettable(luaState_, -2);
}


void Scripting::index(const SString& index){
  lua_getfield(luaState_, -1, index.c_str()); /* function to be called */
  lua_remove(luaState_, -2);
}

void Scripting::pushLightUserType(const void* usertype, const SString& type){
  tolua_pushusertype(luaState_,const_cast<void*>(usertype), type.c_str());
}

void Scripting::pushNumber(int num){
  tolua_pushnumber(luaState_, num);
}

void Scripting::pushString(const SString& string){
  tolua_pushstring(luaState_, string.c_str());
}

void Scripting::executeFunctionCall(int numberOfArguments, int numberOfResults){
  int res = lua_pcall(luaState_, numberOfArguments, numberOfResults, 0);
  if (res != 0) {
    LOG("error running function: ");
    LOG(lua_tostring(luaState_, -1));
  }
}

void Scripting::callOnInit(const SString& cmpname, LuaScript* ls){
  // 1) push function onto stack
  // 1a) get Components table
  lua_getglobal(luaState_, "Components");
  // 1b) get this component's table
  lua_getfield(luaState_, -1, cmpname.c_str());
  // 1d) remove Components table from stack
  lua_remove(luaState_, -2);
  // 1e) get function
  lua_getfield(luaState_, -1, "onInit");
  // 1f) remove component table
  lua_remove(luaState_, -2);
  // 2) push args
  // 2a) the LuaScript component (self)
  tolua_pushusertype(luaState_,static_cast<void*>(ls),"SF::LuaScript");
  // 3) call function
  int res = lua_pcall(luaState_, 1, 0, 0);
  if (res == 0) { // more likely
    return;
  } else {
    LOG("error running function: ");
    LOG(lua_tostring(luaState_, -1));
  }
}

void Scripting::callOnUpdate(const SString& cmpname, LuaScript* ls){
  // 1) push function onto stack
  // 1a) get Components table
  lua_getglobal(luaState_, "Components");
  // 1b) get this component's table
  lua_getfield(luaState_, -1, cmpname.c_str());
  // 1d) remove Components table from stack
  lua_remove(luaState_, -2);
  // 1e) get function
  lua_getfield(luaState_, -1, "onUpdate");
  // 1f) remove component table
  lua_remove(luaState_, -2);
  // 2) push args
  // 2a) the LuaScript component (self)
  tolua_pushusertype(luaState_,static_cast<void*>(ls),"SF::LuaScript");
  // 3) call function
  int res = lua_pcall(luaState_, 1, 0, 0);
  if (res == 0) { // more likely
    return;
  } else {
    LOG("error running function: ");
    LOG(lua_tostring(luaState_, -1));
  }
}

void Scripting::callOnPhysicsUpdate(const SString& cmpname, LuaScript* ls){
  // 1) push function onto stack
  // 1a) get Components table
  lua_getglobal(luaState_, "Components");
  // 1b) get this component's table
  lua_getfield(luaState_, -1, cmpname.c_str());
  // 1d) remove Components table from stack
  lua_remove(luaState_, -2);
  // 1e) get function
  lua_getfield(luaState_, -1, "onPhysicsUpdate");
  // 1f) remove component table
  lua_remove(luaState_, -2);
  // 2) push args
  // 2a) the LuaScript component (self)
  tolua_pushusertype(luaState_,static_cast<void*>(ls),"SF::LuaScript");
  // 3) call function
  int res = lua_pcall(luaState_, 1, 0, 0);
  if (res == 0) { // more likely
    return;
  } else {
    LOG("error running function: ");
    LOG(lua_tostring(luaState_, -1));
  }
}

void Scripting::callOnCollisionEnter(const SString& cmpname, LuaScript* ls, const CollisionData* data){
  // 1) push function onto stack
  // 1a) get Components table
  lua_getglobal(luaState_, "Components");
  // 1b) get this component's table
  lua_getfield(luaState_, -1, cmpname.c_str());
  // 1d) remove Components table from stack
  lua_remove(luaState_, -2);
  // 1e) get function
  lua_getfield(luaState_, -1, "onCollisionEnter");
  // 1f) remove component table
  lua_remove(luaState_, -2);
  // 2) push args
  // 2a) the LuaScript component (self)
  tolua_pushusertype(luaState_,static_cast<void*>(ls),"SF::LuaScript");
  // 2b) the args if any
  tolua_pushusertype(luaState_,const_cast<void*>(static_cast<const void*>(data)),"SF::CollisionData");
  // 3) call function
  int res = lua_pcall(luaState_, 1, 0, 0);
  if (res == 0) { // more likely
    return;
  } else {
    LOG("error running function: ");
    LOG(lua_tostring(luaState_, -1));
  }
}

void Scripting::callOnCollisionStay(const SString& cmpname, LuaScript* ls, const CollisionData* data){
  // 1) push function onto stack
  // 1a) get Components table
  lua_getglobal(luaState_, "Components");
  // 1b) get this component's table
  lua_getfield(luaState_, -1, cmpname.c_str());
  // 1d) remove Components table from stack
  lua_remove(luaState_, -2);
  // 1e) get function
  lua_getfield(luaState_, -1, "onCollisionStay");
  // 1f) remove component table
  lua_remove(luaState_, -2);
  // 2) push args
  // 2a) the LuaScript component (self)
  tolua_pushusertype(luaState_,static_cast<void*>(ls),"SF::LuaScript");
  // 2b) the args if any
  tolua_pushusertype(luaState_,const_cast<void*>(static_cast<const void*>(data)),"SF::CollisionData");
  // 3) call function
  int res = lua_pcall(luaState_, 1, 0, 0);
  if (res == 0) { // more likely
    return;
  } else {
    LOG("error running function: ");
    LOG(lua_tostring(luaState_, -1));
  }
}

void Scripting::callOnCollisionExit(const SString& cmpname, LuaScript* ls, const CollisionData* data){
  // 1) push function onto stack
  // 1a) get Components table
  lua_getglobal(luaState_, "Components");
  // 1b) get this component's table
  lua_getfield(luaState_, -1, cmpname.c_str());
  // 1d) remove Components table from stack
  lua_remove(luaState_, -2);
  // 1e) get function
  lua_getfield(luaState_, -1, "onCollisionExit");
  // 1f) remove component table
  lua_remove(luaState_, -2);
  // 2) push args
  // 2a) the LuaScript component (self)
  tolua_pushusertype(luaState_,static_cast<void*>(ls),"SF::LuaScript");
  // 2b) the args if any
  tolua_pushusertype(luaState_,const_cast<void*>(static_cast<const void*>(data)),"SF::CollisionData");
  // 3) call function
  int res = lua_pcall(luaState_, 1, 0, 0);
  if (res == 0) { // more likely
    return;
  } else {
    LOG("error running function: ");
    LOG(lua_tostring(luaState_, -1));
  }
}


void Scripting::reset(){
  reset_ = true;
}

void Scripting::_reset(){
  lua_close(luaState_);
  luaState_ = lua_open();
  luaL_openlibs(luaState_);
  tolua_Stormfighter_open(luaState_);
  initialise();
  reset_ = false;
}


}; // namespace SF
