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
--platform:component("Primitive"):setMaterialName("Test/Grass");
-- hozz�adunk egy BoxCollider komponenst, ez a fizikai szimul�ci�ban haszn�lt testet adja meg
platform:addComponent(BoxCollider:new());
-- hozz�adunk egy RigidBody komponenst, ez a fizikai szimul�ci�t enged�lyezi erre a testre (merevtest)
-- a 0-s param�ter a t�mege a testnek, teh�t ez nem fog mozogni
platform:addComponent(RigidBody:new(0, true));

platform:transform():setVisible(false, true);

-- hasonl�an mint el�bb
walker = Hierarchy:createGameObject("walker");
walker:transform().position = SVector3(0,120,0);
walker:transform().scale = SVector3(2,2,2);
-- most egy k�ls� mesh file-t t�lt�nk be
-- ehhez alapesetben m�r van rendelve egy material
walker:addComponent(Mesh:new("jaiqua/jaiqua.mesh"));

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

local lightGO = Hierarchy:createGameObject("lightGO");
local light = Light:new(Light.LT_DIRECTIONAL);
lightGO:addComponent(light);
light:setDiffuseColour(SColourValue(1,1,1));
lightGO:transform().position = SVector3(0,100,0);
lightGO:transform().orientation = SQuaternion(to_rad(SDegree(90)), SVector3(1,0,1));
light:setAsTerrainLight();

-- Terrain test

Terrain = Graphics:pagedTerrain();
Terrain:addCamera(c);
Terrain:createWorld("defaultWorld");
local tg0 = Terrain:createTerrainGroup(Ogre.Terrain.ALIGN_X_Z, 65, 1000);
tg0:setOrigin(SVector3(0, 0, 0));
tg0:setFilenameConvention("testTerrain", "dat");

--local imp = tg0:getDefaultImportSettings();
--[[imp.terrainSize = 257;
imp.worldSize = 200;
imp.inputScale = 100;
imp.minBatchSize = 33;
imp.maxBatchSize = 65;
imp.layerList:resize(1);
imp.layerList[0].worldSize = 1000;
imp.layerList[0].textureNames:push_back("dirt_grayrocky_diffusespecular.dds");
imp.layerList[0].textureNames:push_back("dirt_grayrocky_normalheight.dds");--]]
--local img = Ogre.Image();
--img:load("terrain.png", "General");
--imp.inputImage = img;
--tg0:defineTerrainHeightfield(1,0,img);
tg0:defineTerrainConstantHeight(0,0,-10);
tg0:defineTerrainConstantHeight(0,1,10);
tg0:defineTerrainConstantHeight(1,0,30);
tg0:defineTerrainConstantHeight(1,1,50);
--tg0:defineTerrainAuto(0,0);
--tg0:defineTerrainAuto(0,1);
--tg0:defineTerrainAuto(1,1);
--tg0:defineTerrainAuto(1,0);
--tg0:defineTerrainConstantHeight(0,1,5);
--tg0:defineTerrainConstantHeight(0,-1,-50);
--tg0:defineTerrainConstantHeight(1,0,00);
--tg0:defineTerrainConstantHeight(1,1,50);
--tg0:defineTerrainConstantHeight(1,-1,-50);
--tg0:loadAllTerrains(true);
Terrain:createWorldSection("section0", "defaultWorld", tg0, 30, 90);

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
