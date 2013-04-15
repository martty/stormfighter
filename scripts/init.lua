-- init.lua
-- responsible for initing the lua VM
-- SHOULD NOT CHANGE ANYTHING ENGINE SIDE

--  a -- -al kezdõdõ sorok a kommentek

__ = require 'scripts/underscore'

dofile('scripts/system.lua');
dofile('scripts/input.lua');
dofile('scripts/world.lua');
dofile('scripts/showcase.lua');
dofile('scripts/editor.lua');
System:_initialise();

System:loadComponent('scripts/freecameracontroller.lua');

-- rebind all LuaScript entitites
local scripts = Hierarchy:getRoot():allScriptInChildren();
for i=0,scripts:size()-1 do
  print("rebinding");
  local ls = scripts[i];
  System:bindContext(ls);
end

Editor:init();

function lua_update()
  local deltaTime = Application:deltaTime();
  Input:capture();
  --print('input');
  Hierarchy:update();
  --print('hie');
  Physics:tick(deltaTime);
  --print('phy');
  GUI:update(deltaTime);
  --print('gui');
  Editor:update();
  --print('edi');
  --[[if Input:isKeyPressed(OIS.KC_R) then
    Resources:reloadMaterials();
  end--]]
end


function gc_delta()
  local s = "";
    for i,k in pairs(_G) do
      --print(i);
      if(not (i == "_G")) then
        s = s.."["..tostring(i) .. "]".. System:serialiseNativeType(k);
      end
    end
    print(s);
    collectgarbage("collect");
    local g = "";
    for i,k in pairs(_G) do
      if(not (i == "_G")) then
        g = g.."["..tostring(i) .. "]".. System:serialiseNativeType(k);
      end
    end
    local f = assert(io.open("dbg.log", 'w'));
    f:write(s);
    f:write("----------------------------------------------------------------------");
    f:write(g);
    f:close();
end
