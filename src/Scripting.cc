#include "Scripting.h"
#include "LuaBindings.h"
#include <stdio.h>

Scripting::Scripting(){
  luaState_ = lua_open();
  luaL_openlibs(luaState_);
  tolua_Stormfighter_open(luaState_);
}

Scripting::~Scripting(){
  lua_close(luaState_);
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
