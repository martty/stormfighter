print("hai");

dofile('scripts/system.lua');
--dofile('scripts/editor.lua');
--collectgarbage("stop");
System:_initialise();

for k,v in pairs(SF) do
  print(k)
end

platform = Hierarchy:createGameObject("platform");
sideA = Hierarchy:createGameObject("sideA");
neutral = Hierarchy:createGameObject("neutral");
sideB = Hierarchy:createGameObject("sideB");

platform:transform().scale = (SVector3(0.1, 1, 1));

platform:addChild(sideA);platform:addChild(neutral);platform:addChild(sideB);

sideA:addComponent(Primitive:new(Primitive.CUBE));
sideB:addComponent(Primitive:new(Primitive.CUBE));
neutral:addComponent(Primitive:new(Primitive.CUBE));

sideA:transform().position = SVector3(0, -55, 0);
sideB:transform().position = SVector3(0, 55, 0);
neutral:transform().scale = SVector3(1, 0.1, 1);

sideA:component("Primitive"):setMaterialName("Torqube/SideA");
neutral:component("Primitive"):setMaterialName("Torqube/Neutral");
sideB:component("Primitive"):setMaterialName("Torqube/SideB");

smallcube = Hierarchy:createGameObject("smallcube");
smallcube:transform().scale = SVector3(0.05, 0.05, 0.05);
smallcube:addComponent(Primitive:new(Primitive.CUBE));
smallcube:component("Primitive"):setMaterialName("Torqube/Railfixtures");
local dx, dy, dz = 7, 100, 45;
smallcube:transform().position = SVector3(dx, dy, dz);
smallcube:clone():transform().position = SVector3(dx, dy, -dz);
smallcube:clone():transform().position = SVector3(dx, -dy, dz);
smallcube:clone():transform().position = SVector3(dx, -dy, -dz);

rail = Hierarchy:createGameObject("rail");
rail:transform().scale = SVector3(0.01, 0.05, 0.90);
rail:addComponent(Primitive:new(Primitive.CUBE));
rail:component("Primitive"):setMaterialName("Torqube/Rail");
rail:transform().position = SVector3(dx, dy, 0);
rail:clone():transform().position = SVector3(dx, -dy, 0);

local padone = Hierarchy:createGameObject("padone");
padone:transform().position = SVector3(10, dy, 0);

local padtwo = Hierarchy:createGameObject("padtwo");
padtwo:transform().position = SVector3(10, -dy, 0);

--Physics:setDebugDraw(true);
middlepad = System:loadComponent('scripts/middlepad.lua');

local test = Hierarchy:createGameObject("middlepad");
test:transform().position = SVector3(10, 0, 0);
local mesh = Hierarchy:createGameObject("middlepadmesh");
mesh:addComponent(Primitive:new(Primitive.CUBE));
mesh:component("Primitive"):setMaterialName("Torqube/Railfixtures");
mesh:transform().scale = SVector3(0.1, 0.01, 0.9);
test:addChild(mesh);
mesh:addComponent(BoxCollider:new());
test:addComponent(RigidBody:new(0.1, true));
--test:component("RigidBody"):addPoint2PointConstraint(SVector3(0,10,0));
test:addComponent(middlepad);


platform:addComponent(BoxCollider:new(SVector3(5, 105, 50)));
platform:addComponent(RigidBody:new(0, true));

local playerOne = System:loadComponent('scripts/player.lua');
local playerTwo = System:loadComponent('scripts/player.lua');

playerOne.dir = SVector3(0,-1,0);
playerTwo.dir = SVector3(0,1,0);
playerOne.fireKey = OIS.KC_C;
playerOne.leftKey = OIS.KC_LEFT;
playerOne.rightKey = OIS.KC_RIGHT;
playerOne.name = "goo";

playerTwo.fireKey = OIS.KC_P;
playerTwo.leftKey = OIS.KC_J;
playerTwo.rightKey = OIS.KC_L;
padone:addComponent(playerOne);
padtwo:addComponent(playerTwo);
--[[
test:clone():transform().position = SVector3(10, 100, 5);
test:clone():transform().position = SVector3(10, 60, 25);
test:clone():transform().position = SVector3(10, 200, 25);
for i=1, 50 do
  test:clone():transform().position = SVector3(10, 200 + i*40, 25);
end
--]]
--[[for i=1, 10 do
  local t = test:clone()
  t:transform().position = SVector3(10, 200 + 400 + i*50, 25);
  t:transform().scale = SVector3(0.1, 0.2+i*0.01, 0.1+(i%2)*0.1*i);
end--]]
--test:clone():transform().position = SVector3(40, 10, 30);

local cam = Hierarchy:createGameObject("cammy");
c = Camera:new();
cam:addComponent(c);
c:setNearClipDistance(1);
c:setAspectRatio(Graphics:getDefaultAspectRatio());
c:activate();
cam:transform().position = (SVector3(0,0,150));
cam:transform():lookAt(SVector3(0,0,0));

Hierarchy:createGameObject("camm");
local a = Hierarchy:createGameObject("whammy");
cam:addChild(a);
local b = Hierarchy:createGameObject("whamm")
cam:addChild(b);
b:addChild(Hierarchy:createGameObject("whamoo"));

a:addChild(Hierarchy:createGameObject("damm"));
local fcc = System:loadComponent('scripts/freecameracontroller.lua');
cam:addComponent(fcc);

print(Hierarchy:debug());

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
