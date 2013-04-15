#ifndef STORMFIGHTER_SCRIPTING_H_
#define STORMFIGHTER_SCRIPTING_H_

#include "common.h"
#include "Module.h"
extern "C" {
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}

#include "tolua++.h"

namespace SF {
class CollisionData;
class LuaScript;

class Scripting : public Module{
 public:
  Scripting(StormfighterApp* app);
  ~Scripting();

  bool initialise();

  bool parseFile(SString file);

  bool executeString(const SString& luaString);

  void selectGlobal(const SString& index);
  void getField(const SString& field_name);
  void index(const SString& index);
  void prepareFunctionCall();
  void pushNumber(int num);
  //void pushNumber(SReal num);
  void pushString(const SString& string);
  void pushLightUserType(const void* usertype, const SString& type);
  void executeFunctionCall(int numberOfArguments, int numberOfResults);

  void setGlobal(void* variable, const SString& type_name, const SString& lua_name);
  void unsetGlobal(const SString& lua_name);

  /// Component event to lua bindings (verbose, maybe it is more efficient this way?)
  /// onInit
  void callOnInit(const SString& cmpname, LuaScript* ls);
  /// onUpdate
  void callOnUpdate(const SString& cmpname, LuaScript* ls);
  /// onPhysicsUpdate
  void callOnPhysicsUpdate(const SString& cmpname, LuaScript* ls);
  /// onCollisionEnter
  void callOnCollisionEnter(const SString& cmpname, LuaScript* ls, const CollisionData* data);
  /// onCollisionStay
  void callOnCollisionStay(const SString& cmpname, LuaScript* ls, const CollisionData* data);
  /// onCollisionExit
  void callOnCollisionExit(const SString& cmpname, LuaScript* ls, const CollisionData* data);


  /// Resets the VM in the next frame
  void reset();
 private:
  lua_State* luaState_;

  bool reset_;

  void _reset();
};

}; // namespace SF

#endif // STORMFIGHTER_SCRIPTING_H_
