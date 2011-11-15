-- INIT FILE
-- LEFUT AMIKOR ELINDUL A PROGRAM
-- ÉS MÁR MINDEN ALRENDSZER KÉSZ ÁLLAPOTBAN VAN

--  a -- -al kezdõdõ sorok a kommentek

print("hai");

dofile('scripts/system.lua');
--dofile('scripts/editor.lua');
System:_initialise();

-- innentõl jön az igazi kód

-- egy új GameObject létrehozása
platform = Hierarchy:createGameObject("platform");

-- a GameObject Transform komponensével beállítjuk a nagyítást és pozíciót
platform:transform().scale = (SVector3(2, 0.1, 8));
platform:transform().position = SVector3(0, 0, 0);
-- hozzáadunk egy Primitive komponenst, ami jelen esetben egy kocka (de ugye a scale miatt hasáb lesz)
platform:addComponent(Primitive:new(Primitive.CUBE));
-- beállítjuk az "anyagát", ez most egyszerûen egy textúra
platform:component("Primitive"):setMaterialName("Test/Grass");
-- hozzáadunk egy BoxCollider komponenst, ez a fizikai szimulációban használt testet adja meg
platform:addComponent(BoxCollider:new());
-- hozzáadunk egy RigidBody komponenst, ez a fizikai szimulációt engedélyezi erre a testre (merevtest)
-- a 0-s paraméter a tömege a testnek, tehát ez nem fog mozogni
platform:addComponent(RigidBody:new(0, true));

-- hasonlóan mint elõbb
walker = Hierarchy:createGameObject("walker");
walker:transform().position = SVector3(0,5,0);
walker:transform().scale = SVector3(2,2,2);
-- most egy külsõ mesh file-t töltünk be
-- ehhez alapesetben már van rendelve egy material
walker:addComponent(Mesh:new("jaiqua.mesh"));

-- betöltünk egy külön fájlból egy komponenst
local plc = System:loadComponent('scripts/player.controller.lua');
-- és hozzáadjuk a karakterhez
walker:addComponent(plc);

-- megcsináljuk a kamerát
local cam = Hierarchy:createGameObject("cammy");
c = Camera:new();
cam:addComponent(c);
c:setNearClipDistance(1);
c:setAspectRatio(Graphics:getDefaultAspectRatio());
c:activate();
cam:transform().position = (SVector3(0,0,150));
cam:transform():lookAt(SVector3(0,0,0));

local fcc = System:loadComponent('scripts/freecameracontroller.lua');
--cam:addComponent(fcc);
local ccc = System:loadComponent('scripts/chasecameracontroller.lua');
cam:addComponent(ccc);

-- beállítjuk hogy a chasecameracontroller mit kövessen
ccc.target = walker;
--Editor:init();
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
  --Editor:update();
  --print('edi');
end

--[[
function gc_delta()
  local s = "";
    for i,k in pairs(_G) do
      --print(i);
      if(not (i == "_G")) then
        s = s.."["..tostring(i) .. "]".. System:serializeNative(k);
      end
    end
    print(s);
    collectgarbage("collect");
    local g = "";
    for i,k in pairs(_G) do
      if(not (i == "_G")) then
        g = g.."["..tostring(i) .. "]".. System:serializeNative(k);
      end
    end
    local f = assert(io.open("dbg.log", 'w'));
    f:write(s);
    f:write("----------------------------------------------------------------------");
    f:write(g);
    f:close();
end
--]]
