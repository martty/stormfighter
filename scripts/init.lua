-- INIT FILE
-- LEFUT AMIKOR ELINDUL A PROGRAM
-- �S M�R MINDEN ALRENDSZER K�SZ �LLAPOTBAN VAN

--  a -- -al kezd�d� sorok a kommentek

print("hai");

dofile('scripts/system.lua');
--dofile('scripts/editor.lua');
System:_initialise();

-- innent�l j�n az igazi k�d

-- egy �j GameObject l�trehoz�sa
platform = Hierarchy:createGameObject("platform");

-- a GameObject Transform komponens�vel be�ll�tjuk a nagy�t�st �s poz�ci�t
platform:transform().scale = (SVector3(2, 0.1, 8));
platform:transform().position = SVector3(0, 0, 0);
-- hozz�adunk egy Primitive komponenst, ami jelen esetben egy kocka (de ugye a scale miatt has�b lesz)
platform:addComponent(Primitive:new(Primitive.CUBE));
-- be�ll�tjuk az "anyag�t", ez most egyszer�en egy text�ra
platform:component("Primitive"):setMaterialName("Test/Grass");
-- hozz�adunk egy BoxCollider komponenst, ez a fizikai szimul�ci�ban haszn�lt testet adja meg
platform:addComponent(BoxCollider:new());
-- hozz�adunk egy RigidBody komponenst, ez a fizikai szimul�ci�t enged�lyezi erre a testre (merevtest)
-- a 0-s param�ter a t�mege a testnek, teh�t ez nem fog mozogni
platform:addComponent(RigidBody:new(0, true));

-- hasonl�an mint el�bb
walker = Hierarchy:createGameObject("walker");
walker:transform().position = SVector3(0,5,0);
walker:transform().scale = SVector3(2,2,2);
-- most egy k�ls� mesh file-t t�lt�nk be
-- ehhez alapesetben m�r van rendelve egy material
walker:addComponent(Mesh:new("jaiqua.mesh"));

-- bet�lt�nk egy k�l�n f�jlb�l egy komponenst
local plc = System:loadComponent('scripts/player.controller.lua');
-- �s hozz�adjuk a karakterhez
walker:addComponent(plc);

-- megcsin�ljuk a kamer�t
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

-- be�ll�tjuk hogy a chasecameracontroller mit k�vessen
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
