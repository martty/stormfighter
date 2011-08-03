print("hai");

dofile('scripts/system.lua');
dofile('scripts/editor.lua');

local plane = Hierarchy:createGameObject("platform");
plane:transform():setScale(SVector3:new(1, 0.1, 1));
plane:transform():setPosition(SVector3(0, 30, 0));
plane:addComponent(SPrimitive:new(SPrimitive.CUBE));

local cam = Hierarchy:createGameObject("cammy");
c = SCamera:new();
cam:addComponent(c);
c:setNearClipDistance(1);
c:setAspectRatio(Graphics:getDefaultAspectRatio());
c:activate();
cam:transform():setPosition(SVector3(0,60,160));
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

str = "abcdef";
print(str:rfind("b"));

Editor:init();

function lua_update()
  local deltaTime = Application:deltaTime();
  Input:capture();
  Hierarchy:update();
  Physics:tick(deltaTime);
  GUI:update(deltaTime);
  Editor:update();
end
