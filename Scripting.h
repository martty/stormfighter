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

  void parseFile(SString file);

  void setGlobal(void* variable, const SString& type_name, const SString& lua_name);
  void unsetGlobal(const SString& lua_name);
 private:
  lua_State* luaState_;
};

#endif // STORMFIGHTER_SCRIPTING_H_
