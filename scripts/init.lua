print("hai");

-- typedefs (we can drop the S if we want)
SVector3 = Ogre.Vector3;
SQuaternion = Ogre.Quaternion;
SDegree = Ogre.Degree;
SRadian = Ogre.Radian;
-- ...

function empty_function()
end

function to_rad(degree)
  return SRadian:new_local(degree:valueRadians());
end

-- hijack print, so that it does not print to stdout, but rather to log
stdout_print = print;
function print(something)
  Logger:logMessage(tostring(something));
end

System = {};
System.active_components = {};
System.n_active_components = 0;

function System:loadComponent(filename)
  local f = assert(loadfile(filename));
  component = f();
  return self:_addComponent(component);
end

function System:_addComponent(component)
  self.n_active_components = self.n_active_components + 1;
  local ac = self.active_components;
  local type = component.meta.type or error('set name for component!');
  new_component = SLuaScript:new(type, 'System.active_components['..self.n_active_components..']');
  new_component._onInit = component.onInit or empty_function;
  new_component._onUpdate = component.onUpdate or empty_function;
  new_component._onPhysicsUpdate = component.onPhysicsUpdate or empty_function;
  new_component._onCollisionEnter = component.onCollisionEnter or empty_function;
  new_component._onCollisionExit = component.onCollisionExit or empty_function;
  new_component._onCollisionStay = component.onCollisionStay or empty_function;
  component.onInit = nil; component.onUpdate = nil; component.onPhysicsUpdate = nil;
  component.onCollisionEnter = nil; component.onCollisionExit = nil; component.onCollisionStay = nil;
  for key, value in pairs(component) do
    new_component[key] = value;
  end
  ac[self.n_active_components] = {};
  ac[self.n_active_components] = new_component;
  return new_component;
end

local plane = Hierarchy:createGameObject("platform");
plane:transform():setScale(SVector3:new(1, 0.1, 1));
plane:transform():setPosition(SVector3(0, 0, 0));
plane:transform():setPosition(SVector3(0, 0, 0));
plane:addComponent(SPrimitive:new(SPrimitive.CUBE));

local cam = Hierarchy:createGameObject("cammy");
c = SCamera:new();
cam:addComponent(c);
c:setNearClipDistance(1);
c:setAspectRatio(Graphics:getDefaultAspectRatio());
c:activate();
cam:transform():setPosition(SVector3(0,60,160));
cam:transform():lookAt(SVector3(0,0,0));

local fcc = System:loadComponent('scripts/freecameracontroller.lua');
cam:addComponent(fcc);

function lua_update()
  local deltaTime = Application:deltaTime();
  Input:capture();
  Hierarchy:update();
  Physics:tick(deltaTime);
  GUI:update(deltaTime);
end
