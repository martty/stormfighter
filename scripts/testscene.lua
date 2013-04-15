-- testscene.lua

-- creates a scene to quickly prototype stuff

-- innentõl jön az igazi kód
tprint(System.JSON:decode(Resources:readDirectoryContentsJSON('media/')));
print(Resources:readDirectoryContentsJSON('media/'));
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

World:initialise("world1");

local li = Hierarchy:createGameObject("lighty");
l = Light:new();
l.diffuseColour = SColourValue(0.1, 0.2, 0.3, 1);
l.specularColour = SColourValue(0.4, 0.5, 0.5, 1);
l.lightType = Light.POINT;
li:addComponent(LuaScript:new("FreeLookCameraControllerLUA"));

--local ccc = System:loadComponent('scripts/chasecameracontroller.lua');
--cam:addComponent(ccc);
--local compimg = Ogre.Image:new_local();
--compimg:loadTwoImagesAsRGBA("samplediffuse.png", "samplegloss.png", "General" ,Ogre.PF_BYTE_RGBA);
--compimg:save("media/common/samplediffusegloss2.png");
--[[Showcase:createShowcase();
Showcase:addMaterial("Base/FlatShadedExample");
Showcase:addMaterial("Base/DiffuseGlossExample");
Showcase:addMaterial("Base/MonsterExample");--]]
citywall = Hierarchy:createGameObject("citywall");
citywall:addComponent(Mesh:new("citywall.mesh"));
citywall:addComponent(l);

a = citywall:serialiseJSON(false,true);
b = citywall:serialiseJSON(false,false);
print('\n'..a..'\n'..b..'\n---------------------------');
-- setup some test data
A = Hierarchy:createGameObject("A");
citywall:addChild(A)
A:addChild(Hierarchy:createGameObject("AA"));
A:addChild(Hierarchy:createGameObject("AB"));
AC = Hierarchy:createGameObject("AC");
A:addChild(AC);
AC:addChild(Hierarchy:createGameObject("ACA"));
B= Hierarchy:createGameObject("B");
citywall:addChild(B)
B:addChild(Hierarchy:createGameObject("BA"));
B:addChild(Hierarchy:createGameObject("BB"));
citywall:addChild(Hierarchy:createGameObject("C"))
c = Hierarchy:serialiseStructureJSON();
print('\n'..c);
--print(citywall:component("Mesh").type);
--dofile("scripts/terrain_test.lua");
--cam:transform().orientation = SQuaternion:new_local(SQuaternion.ZERO);
