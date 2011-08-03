REM Building Lua bindings
tools\tolua++\tolua++ -o src\LuaBindings.cc -H include\LuaBindings.h include\Stormfighter.pkg
REM Done
pause