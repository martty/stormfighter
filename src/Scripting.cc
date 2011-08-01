#include "Scripting.h"
#include "LuaBindings.h"

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
