#ifndef STORMFIGHTER_SCRIPTING_H_
#define STORMFIGHTER_SCRIPTING_H_

#include "common.h"

extern "C" {
    #include <lua.h>
    #include <lauxlib.h>
    #include <lualib.h>
}

#include "tolua++.h"

class Scripting {
 public:
  /** Default constructor */
  Scripting();
  /** Default destructor */
  ~Scripting();

  bool parseFile(SString file);

  bool executeString(const SString& luaString);

  void selectGlobal(const SString& index);
  void index(const SString& index);
  void prepareFunctionCall();
  void pushNumber(int num);
  //void pushNumber(SReal num);
  void pushString(const SString& string);
  void pushLightUserType(const void* usertype, const SString& type);
  void executeFunctionCall(int numberOfArguments, int numberOfResults);
  //int getResultNumber();

  void setGlobal(void* variable, const SString& type_name, const SString& lua_name);
  void unsetGlobal(const SString& lua_name);
 private:
  lua_State* luaState_;
};

#endif // STORMFIGHTER_SCRIPTING_H_
