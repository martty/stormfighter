print("hai");

dofile('scripts/system.lua');
dofile('scripts/editor.lua');

System:_initialise();

local plane = Hierarchy:createGameObject("platform");
plane:transform().scale = (SVector3(1, 0.1, 1));
plane:addComponent(SPrimitive:new(SPrimitive.CUBE));

local robot = Hierarchy:createGameObject("robot");
robot:transform().position = (SVector3(-140, 0, 0));
robot:addComponent(SMesh:new("robot.mesh"));
print(robot:transform().position.z);

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
end
