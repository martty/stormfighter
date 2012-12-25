-- INIT FILE
-- LEFUT AMIKOR ELINDUL A PROGRAM
-- ÉS MÁR MINDEN ALRENDSZER KÉSZ ÁLLAPOTBAN VAN

--  a -- -al kezdõdõ sorok a kommentek

print("hai");

dofile('scripts/system.lua');
dofile('scripts/input.lua');
dofile('scripts/world.lua');
dofile('scripts/showcase.lua');
dofile('scripts/editor.lua');
System:_initialise();
World:initialise("world1");
-- innentõl jön az igazi kód

-- egy új GameObject létrehozása
--[[
platform = Hierarchy:createGameObject("platform");

-- a GameObject Transform komponensével beállítjuk a nagyítást és pozíciót
platform:transform().scale = (SVector3(2, 0.1, 8));
platform:transform().position = SVector3(0, 0, 0);
-- hozzáadunk egy Primitive komponenst, ami jelen esetben egy kocka (de ugye a scale miatt hasáb lesz)
platform:addComponent(Primitive:new(Primitive.CUBE));
-- beállítjuk az "anyagát", ez most egyszerûen egy textúra
--platform:component("Primitive"):setMaterialName("Test/Grass");
-- hozzáadunk egy BoxCollider komponenst, ez a fizikai szimulációban használt testet adja meg
platform:addComponent(BoxCollider:new());
-- hozzáadunk egy RigidBody komponenst, ez a fizikai szimulációt engedélyezi erre a testre (merevtest)
-- a 0-s paraméter a tömege a testnek, tehát ez nem fog mozogni
platform:addComponent(RigidBody:new(0, true));

platform:transform():setVisible(false, true);
--]]

-- megcsináljuk a kamerát
local cam = Hierarchy:createGameObject("cammy");
c = Camera:new();
cam:addComponent(c);
c.nearClipDistance = 1;
c.aspectRatio = Graphics:getDefaultAspectRatio();
c:activate();
cam:transform().position = SVector3(2312,2300,2600);
cam:transform():lookAt(SVector3(2312,2278,2597));

local fcc = System:loadComponent('scripts/freecameracontroller.lua');
cam:addComponent(fcc);
local ccc = System:loadComponent('scripts/chasecameracontroller.lua');
--cam:addComponent(ccc);
local compimg = Ogre.Image:new_local();
compimg:loadTwoImagesAsRGBA("samplediffuse.png", "samplegloss.png", "General" ,Ogre.PF_BYTE_RGBA);
compimg:save("media/common/samplediffusegloss2.png");
--[[Showcase:createShowcase();
Showcase:addMaterial("Base/FlatShadedExample");
Showcase:addMaterial("Base/DiffuseGlossExample");
Showcase:addMaterial("Base/MonsterExample");--]]
citywall = Hierarchy:createGameObject("citywall");
citywall:addComponent(Mesh:new("citywall.mesh"));
--print(citywall:component("Mesh").type);
cam:transform().position = SVector3(0,10,-100);
cam:transform():lookAt(SVector3(0,0,0));
--dofile("scripts/terrain_test.lua");
--cam:transform().orientation = SQuaternion:new_local(SQuaternion.ZERO);
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
        s = s.."["..tostring(i) .. "]".. System:serializeNativeType(k);
      end
    end
    print(s);
    collectgarbage("collect");
    local g = "";
    for i,k in pairs(_G) do
      if(not (i == "_G")) then
        g = g.."["..tostring(i) .. "]".. System:serializeNativeType(k);
      end
    end
    local f = assert(io.open("dbg.log", 'w'));
    f:write(s);
    f:write("----------------------------------------------------------------------");
    f:write(g);
    f:close();
end
