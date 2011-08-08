@echo off 
setlocal enableextensions 
for /f "tokens=*" %%a in ( 
'tools\tolua++\tolua++ -o src\LuaBindings.cc -H include\LuaBindings.h include\Stormfighter.pkg'
) do ( 
set myvar=%%a 
)
echo %myvar% | find "tolua" > nul
if errorlevel 1 goto :eof
goto :error
endlocal

:error
tools\tolua++\tolua++ -o src\LuaBindings.cc -H include\LuaBindings.h include\Stormfighter.pkg
pause