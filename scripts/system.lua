-- typedefs (we can drop the S if we want)
SVector3 = Ogre.Vector3;
SQuaternion = Ogre.Quaternion;
SDegree = Ogre.Degree;
SRadian = Ogre.Radian;
SRay = Ogre.Ray;
SAxisAlignedBox = Ogre.AxisAlignedBox;
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

--provide 2D vector :)
function SVector2(x,y)
  return SVector3(x,y,0);
end

function System:_initialise()
  self:_hijackGameObject();
end

function System:_hijackGameObject()
  local old = GameObject.component;
  -- add automatic casting to component get
  GameObject.component = function (go, type)
    return tolua.cast(old(go, type), "S"..type);
  end
end
