-- hasonlóan mint elõbb
walkertop = Hierarchy:createGameObject("walkertop");
walker = Hierarchy:createGameObject("walker");
walkertop:addChild(walker);
walkertop:transform().position = SVector3(2312,2278,2597);
walker:transform().scale = SVector3(0.12, 0.12, 0.12);
-- most egy külsõ mesh file-t töltünk be
-- ehhez alapesetben már van rendelve egy material
walker:addComponent(Mesh:new("jaiqua/jaiqua.mesh"));

-- betöltünk egy külön fájlból egy komponenst
local plc = System:loadComponent('scripts/player.controller.lua');
-- és hozzáadjuk a karakterhez
walkertop:addComponent(plc);
plc.low = walker;

-- beállítjuk hogy a chasecameracontroller mit kövessen
--ccc.target = walkertop;
--ccc.yawtarget = walker;

local lightGO = Hierarchy:createGameObject("lightGO");
local light = Light:new(Light.LT_DIRECTIONAL);
lightGO:addComponent(light);
light:setDiffuseColour(SColourValue(1,1,1));
lightGO:transform().position = SVector3(0,100,0);
lightGO:transform().orientation = SQuaternion(to_rad(SDegree(90)), SVector3(1,0,1));
light:setAsTerrainLight();

-- Terrain test

Terrain = Graphics:pagedTerrain();
Terrain:createWorld("defaultWorld");
Terrain:addCamera(c);

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



--[[local compimg = Ogre.Image:new_local();
compimg:loadTwoImagesAsRGBA("terrain/snowvalley/colormap.png", "terrain/snowvalley/specular.png", "Terrain" ,Ogre.PF_BYTE_RGBA);
compimg:save("media/terrain/snowvalley/colorspec.png");
compimg:loadTwoImagesAsRGBA("terrain/snowvalley/normal.png", "terrain/snowvalley/height.png", "Terrain" ,Ogre.PF_BYTE_RGBA);
compimg:save("media/terrain/snowvalley/normalheight.png");--]]

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
