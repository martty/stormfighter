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
--platform:component("Primitive"):setMaterialName("Test/Grass");
-- hozzáadunk egy BoxCollider komponenst, ez a fizikai szimulációban használt testet adja meg
platform:addComponent(BoxCollider:new());
-- hozzáadunk egy RigidBody komponenst, ez a fizikai szimulációt engedélyezi erre a testre (merevtest)
-- a 0-s paraméter a tömege a testnek, tehát ez nem fog mozogni
platform:addComponent(RigidBody:new(0, true));

platform:transform():setVisible(false, true);

-- hasonlóan mint elõbb
walker = Hierarchy:createGameObject("walker");
walker:transform().position = SVector3(0,120,0);
walker:transform().scale = SVector3(2,2,2);
-- most egy külsõ mesh file-t töltünk be
-- ehhez alapesetben már van rendelve egy material
walker:addComponent(Mesh:new("jaiqua/jaiqua.mesh"));

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
