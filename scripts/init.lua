-- INIT FILE
-- LEFUT AMIKOR ELINDUL A PROGRAM
-- �S M�R MINDEN ALRENDSZER K�SZ �LLAPOTBAN VAN

--  a -- -al kezd�d� sorok a kommentek

print("hai");

dofile('scripts/system.lua');
dofile('scripts/world.lua');
--dofile('scripts/editor.lua');
System:_initialise();
World:initialise("world1");
-- innent�l j�n az igazi k�d

-- egy �j GameObject l�trehoz�sa
--[[
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
--]]

-- hasonl�an mint el�bb
walkertop = Hierarchy:createGameObject("walkertop");
walker = Hierarchy:createGameObject("walker");
walkertop:addChild(walker);
walkertop:transform().position = SVector3(2312,2278,2597);
walker:transform().scale = SVector3(0.12, 0.12, 0.12);
-- most egy k�ls� mesh file-t t�lt�nk be
-- ehhez alapesetben m�r van rendelve egy material
walker:addComponent(Mesh:new("jaiqua/jaiqua.mesh"));

-- bet�lt�nk egy k�l�n f�jlb�l egy komponenst
local plc = System:loadComponent('scripts/player.controller.lua');
-- �s hozz�adjuk a karakterhez
walkertop:addComponent(plc);
plc.low = walker;
-- megcsin�ljuk a kamer�t
local cam = Hierarchy:createGameObject("cammy");
c = Camera:new();
cam:addComponent(c);
c:setNearClipDistance(1);
c:setAspectRatio(Graphics:getDefaultAspectRatio());
c:activate();
cam:transform().position = SVector3(2312,2300,2600);
cam:transform():lookAt(SVector3(2312,2278,2597));

local fcc = System:loadComponent('scripts/freecameracontroller.lua');
cam:addComponent(fcc);
local ccc = System:loadComponent('scripts/chasecameracontroller.lua');
--cam:addComponent(ccc);

-- be�ll�tjuk hogy a chasecameracontroller mit k�vessen
ccc.target = walkertop;
ccc.yawtarget = walker;

local lightGO = Hierarchy:createGameObject("lightGO");
local light = Light:new(Light.LT_DIRECTIONAL);
lightGO:addComponent(light);
light:setDiffuseColour(SColourValue(1,1,1));
lightGO:transform().position = SVector3(0,100,0);
lightGO:transform().orientation = SQuaternion(to_rad(SDegree(90)), SVector3(1,0,1));
light:setAsTerrainLight();

local reference = Hierarchy:createGameObject("reference_cube");
reference:transform().scale = SVector3(0.01, 0.01, 0.01);
reference:transform().position = SVector3(2312,2278,2587)
reference:addComponent(Primitive:new(Primitive.CUBE));
reference:clone():transform().position = SVector3(2312,2295,2587);
-- Terrain test
Terrain = Graphics:pagedTerrain();
Terrain:createWorld("defaultWorld");
Terrain:addCamera(c);

--local tg0 = Terrain:createTerrainGroup(Ogre.Terrain.ALIGN_X_Z, 1025, 16000);
--tg0:setOrigin(SVector3(0, 0, 0));
--tg0:setFilenameConvention("testTerrain", "dat");

--local imp = Ogre.Terrain.ImportData:new(tg0:getDefaultImportSettings());
--local imp = tg0:getDefaultImportSettings();

--[[local compimg = Ogre.Image:new_local();
compimg:loadTwoImagesAsRGBA("terrain/snowvalley/colormap.png", "terrain/snowvalley/specular.png", "Terrain" ,Ogre.PF_BYTE_RGBA);
compimg:save("media/terrain/snowvalley/colorspec.png");
compimg:loadTwoImagesAsRGBA("terrain/snowvalley/normal.png", "terrain/snowvalley/height.png", "Terrain" ,Ogre.PF_BYTE_RGBA);
compimg:save("media/terrain/snowvalley/normalheight.png");--]]

local sec = World:createSection("snowvalley_splat", 1025, 8000, SVector3(0,0,0), 3000, 6000);
local snow,snown = sec:loadOrCreateTerrainMaps("terrain/snow_1.png", "black_512.png", "terrain/snow_1_normal.png", "black_512.png");
local rock,rockn = sec:loadOrCreateTerrainMaps("terrain/rock_1.png", "black_512.png", "terrain/rock_1_normal.png", "black_512.png");
local path,pathn = sec:loadOrCreateTerrainMaps("terrain/path_1.png", "black_512.png", "terrain/path_1_normal.png", "black_512.png");
local tg = sec.terrainGroup;
local imp = sec:importData(0,0);
local img = Ogre.Image();
img:load("terrain/height.png", sec.sectionName);
imp.inputImage = img;
imp.worldSize = 2625;
imp.inputScale = imp.inputScale;
sec:defineLayer(0,0, 0, 50, snow, snown, "");
sec:defineLayer(0,0, 1, 50, rock, rockn, "terrain/slopemask_hi.png");
sec:defineLayer(0,0, 2, 100, path, pathn, "terrain/pathmask_hi_3.png");
tg:defineTerrainImportData(0,0,imp);
--[[tg:loadAllTerrains(true);
terr = tg:getTerrain(0,0);
print(terr:getLayerTextureName(0,0));
print(terr:getLayerTextureName(0,1));
print(terr:getLayerTextureName(0,2));
print(terr:getLayerTextureName(1,0));
print(terr:getLayerTextureName(1,1));
print(terr:getLayerTextureName(1,2));
--]]
--print (a .. b);
--Ogre.Terrain.LayerInstanceList();
--Ogre.Terrain.LayerInstance();
--sec:defineTileDSNH(0,0,"terrain/colormap.png", "terrain/specular.png", "terrain/normal.png", "terrain/height.png");
--[[
for x=0,19 do
  for y=0,19 do
    sec:defineTileDSNH(x,y,"terrain/colormap_x"..x.."_y"..y..".png", "terrain/specular_x"..x.."_y"..y..".png",
    "terrain/normal_x"..x.."_y"..y..".png", "terrain/height_x"..x.."_y"..y..".png");
  end
end
--]]
--sec:save();
--sec:setPageRangeMaxX(19);
--sec:setPageRangeMaxY(19);
--[[
local img = Ogre.Image();
img:load("terrain/snowvalley/height.png", "Terrain");
imp.inputImage = img;
imp.layerList:resize(1);
--imp.layerList[0].worldSize = 1000;
imp.layerList[0].textureNames:clear();
imp.layerList[0].textureNames:push_back("terrain/snowvalley/colorspec.png");
imp.layerList[0].textureNames:push_back("terrain/snowvalley/normalheight.png");
--tg0:defineTerrainHeightfield(1,0,img);
--tg0:defineTerrainAuto(0,0);
--tg0:defineTerrainImportData(0,0,imp);
--tg0:defineTerrainConstantHeight(0,1,10);
--tg0:defineTerrainConstantHeight(1,0,30);
--tg0:defineTerrainConstantHeight(1,1,50);
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

local tg1 = Terrain:createTerrainGroup(Ogre.Terrain.ALIGN_X_Z, 65, 1000);
tg1:setOrigin(SVector3(0, 0, -6000));
tg1:setFilenameConvention("testTerrain", "dat");
tg1:defineTerrainConstantHeight(0,0, 0);
tg1:defineTerrainConstantHeight(0,1, 0);
Terrain:createWorldSection("section1", "defaultWorld", tg1, 30, 90);
--]]

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
