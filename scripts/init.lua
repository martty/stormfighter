print("hai");

dofile('scripts/system.lua');
--dofile('scripts/editor.lua');
--collectgarbage("stop");
System:_initialise();

platform = Hierarchy:createGameObject("platform");
sideA = Hierarchy:createGameObject("sideA");
neutral = Hierarchy:createGameObject("neutral");
sideB = Hierarchy:createGameObject("sideB");

platform:transform().scale = (SVector3(1, 0.1, 1));

platform:addChild(sideA);platform:addChild(neutral);platform:addChild(sideB);

sideA:addComponent(SPrimitive:new(SPrimitive.CUBE));
sideB:addComponent(SPrimitive:new(SPrimitive.CUBE));
neutral:addComponent(SPrimitive:new(SPrimitive.CUBE));

sideA:transform().position = SVector3(-55, 1, 0);
sideB:transform().position = SVector3(55, 0, 0);
neutral:transform().scale = SVector3(0.1, 1, 1);

sideA:component("Mesh"):setMaterialName("Torqube/SideA");
neutral:component("Mesh"):setMaterialName("Torqube/Neutral");
sideB:component("Mesh"):setMaterialName("Torqube/SideB");

smallcube = Hierarchy:createGameObject("smallcube");
smallcube:transform().scale = SVector3(0.05, 0.05, 0.05);
smallcube:addComponent(SPrimitive:new(SPrimitive.CUBE));
smallcube:component("Mesh"):setMaterialName("Torqube/Railfixtures");
local dx, dy, dz = 100, 7, 45;
smallcube:transform().position = SVector3(dx, dy, dz);
smallcube:clone():transform().position = SVector3(dx, dy, -dz);
smallcube:clone():transform().position = SVector3(-dx, dy, dz);
smallcube:clone():transform().position = SVector3(-dx, dy, -dz);

rail = Hierarchy:createGameObject("rail");
rail:transform().scale = SVector3(0.01, 0.05, 0.90);
rail:addComponent(SPrimitive:new(SPrimitive.CUBE));
rail:component("Mesh"):setMaterialName("Torqube/Rail");
rail:transform().position = SVector3(dx, dy, 0);
rail:clone():transform().position = SVector3(-dx, dy, 0);

--Physics:setDebugDraw(true);
middlepad = System:loadComponent('scripts/middlepad.lua');

local test = Hierarchy:createGameObject("middlepad");
test:transform().position = SVector3(0, 10, 0);
local mesh = Hierarchy:createGameObject("middlepad_mesh");
mesh:addComponent(SPrimitive:new(SPrimitive.CUBE));
mesh:component("Mesh"):setMaterialName("Torqube/Railfixtures");
mesh:transform().scale = SVector3(0.1, 0.1, 0.3);
test:addChild(mesh);
mesh:addComponent(SBoxCollider:new());
test:addComponent(SRigidBody:new(1));
test:component("RigidBody"):addPoint2PointConstraint(SVector3(0,-1,0));
test:addComponent(middlepad);


platform:addComponent(SBoxCollider:new(SVector3(105, 5, 50)));
platform:addComponent(SRigidBody:new(0));

htest = System:loadComponent('scripts/bombarder.lua');

test = smallcube:clone();
test:transform().scale = SVector3(0.1, 0.1, 0.1);
test:transform().position = SVector3(30, 10, 10);
test:addComponent(SBoxCollider:new());
test:addComponent(SRigidBody:new(1));
test:addComponent(htest);
print("track-----");
test:clone():transform().position = SVector3(60, 10, 20);
test:clone():transform().position = SVector3(40, 10, 30);

local cam = Hierarchy:createGameObject("cammy");
c = SCamera:new();
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
