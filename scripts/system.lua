-- typedefs (we can drop the S if we want)
SVector3 = Ogre.Vector3;
SVector3.__tostring = function(e)
  return e.x..','..e.y..','..e.z;
end
SQuaternion = Ogre.Quaternion;
SQuaternion.__tostring = function (e)
  local vec, angle = SVector3(0,0,0),SDegree(2);
  e:ToAngleAxis(angle,vec);
  return tostring(vec)..':'..angle:valueDegrees();
end
SDegree = Ogre.Degree;
SRadian = Ogre.Radian;
SRay = Ogre.Ray;
SPlane = Ogre.Plane;
SSphere = Ogre.Sphere;
SColourValue = Ogre.ColourValue;
SAxisAlignedBox = Ogre.AxisAlignedBox;
OIS.Modifier = OIS.Keyboard;
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

function print_as_table(tbl)
  for i,k in pairs(tbl) do
    print("["..tostring(i) .. "]".. System:serializeNative(k));
  end
end

System = {};
System.active_components = {};
System.n_active_components = 0;

System.annotations = {};

System.tracked_objects = {};
--setmetatable(System.tracked_objects, { __mode = 'v' }); -- tracking is done with weak tables - we don't prevent GC
System.object_counter = 0;

Components = {};

System.defers = {};
System.deferred_functions = {};

function System.deepcopy(object)
  local lookup_table = {}
  local function _copy(object)
    if type(object) ~= "table" then
        return object
    elseif lookup_table[object] then
        return lookup_table[object]
    end
    local new_table = {}
    lookup_table[object] = new_table
    for index, value in pairs(object) do
        new_table[_copy(index)] = _copy(value)
    end
    return setmetatable(new_table, getmetatable(object))
  end
  return _copy(object)
end

function System.stripped_type(object)
  local stripped_classname = tolua.type(object);
  local _,ind = stripped_classname:find("::");
  return stripped_classname:sub(ind+1);
end

function System:loadComponent(filename)
  local f = assert(loadfile(filename));
  component = f();
  return self:_addComponent(component);
end

function System:_addComponent(component)
  self.n_active_components = self.n_active_components + 1;
  local ac = self.active_components;
  local type = component.meta.type or error('set name for component!');
  component.type = type;
  new_component = LuaScript:new(type);
  --'System.active_components['..self.n_active_components..']'
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

function System._fireComponentEvent(tracking_id, event_name, param)
  local obj = System:getObject(tracking_id);
  if(event_name == "onCollisionStay") then
    obj:_onCollisionStay(param);
  elseif(event_name == "onCollisionEnter") then
    obj:_onCollisionEnter(param);
  elseif(event_name == "onCollisionExit") then
    obj:_onCollisionExit(param);
  elseif(event_name == "onInit") then
    obj:_onInit();
  elseif(event_name == "onUpdate") then
    obj:_onUpdate();
  elseif(event_name == "onPhysicsUpdate") then
    obj:_onPhysicsUpdate();
  end
end

--provide 2D vector :)
function SVector2(x,y)
  return SVector3(x,y,0);
end

function System:_initialise()
  -- dump SF.* into global namespace
  local global_env = getfenv(0);
  for k,v in pairs(SF) do
    if( not global_env[k] ) then -- do not overwrite globals
      global_env[k] = v;
    end
  end
  setfenv(0, global_env);
  self:_hijackGameObject();
  self:_hijackModules();
  self:_annotateBasicTypes();
  self:_annotateCoreComponents();
  self:_registerComponents();
  self:_setupDeferredFunctions();
end

function System:_hijackModules()
  local old = Hierarchy.createGameObject;
  Hierarchy.createGameObject = function (hie, goname)
    local go = old(hie, goname);
    self:track(go);
    self:track(go:transform());
    return go;
  end
end

function System:_hijackGameObject()
  local old = GameObject.component;
  -- add automatic casting to component get
  GameObject.component = function (go, otype)
    local cmp = old(go, otype);
    if(cmp.group == "LuaScript") then
      return tolua.cast(cmp, "SF::LuaScript");
    else
      return tolua.cast(cmp, "SF::"..cmp.type);
    end
  end
  -- annotate gameobject
  -- add component tracking + syntactic sugar for chaining
  local old2 = GameObject.addComponent;
  GameObject.addComponent = function (go, cmp)
    old2(go, cmp);
    self:track(cmp);
    if(tolua.type(cmp) == "SF::LuaScript") then -- we need to add events
      cmp:setTrackingId(cmp.tracking_id);
    end
    return cmp;
  end

  local old3 = GameObject.clone;
  GameObject.clone = function (go, newname)
    local ngo = nil;
    if(newname) then
      ngo = old3(go, newname);
    else
      ngo = old3(go);
    end
    self:track(ngo);
    local cmps = ngo:allComponents();
    print("Cloned and now tracking:");
    for i=0,cmps:size()-1 do
      self:track(cmps[i]);
      print(cmps[i].type);
      if(cmps[i].group == "LuaScript") then -- we need to add events
        local script = tolua.cast(cmps[i], "SF::LuaScript");
        script:setTrackingId(cmps[i].tracking_id);
        local old_script = go:component(script.type);
        local old_peer = tolua.getpeer(old_script);
        local new_peer = System.deepcopy(old_peer);
        tolua.setpeer(script, new_peer);
      end
    end
    return ngo;
  end
end

function System:_registerComponents()
  self:registerComponent('Transform', Transform.new);
  self:registerComponent('Primitive', Primitive.new);
end

function System:registerComponent(cname, newfun)
  Components[cname] = newfun;
end

function System:_annotateBasicTypes()
  System.annotations.SVector3 = {};
  local v = System.annotations.SVector3;
  v.serialize = function(vector)
    return vector.x..','..vector.y..','..vector.z;
  end
  System.annotations['Ogre::Vector3'] = v;
  System.annotations.SQuaternion = {};
  v = System.annotations.SQuaternion;
  v.serialize = function(quat)
    return quat.x..','..quat.y..','..quat.z..','..quat.w;
  end
  System.annotations['Ogre::Quaternion'] = v;
end

function System:_annotateCoreComponents()
  --Transform
  self:annotate('Transform', 'position', 'SVector3');
  self:annotate('Transform', 'orientation', 'SQuaternion');
  self:annotate('Transform', 'scale', 'SVector3');

  self:annotate('Mesh', 'meshName', 'string');
  self:annotate('Primitive', 'meshName', 'string');
end

function System:annotate(object, field, otype, method, get, set, options)
  local opts = options or {};
  method = method or 'property';
  if( not self.annotations[object] ) then
    self.annotations[object] = {};
    self.annotations[object].properties = {};
  end
  self.annotations[object].properties[field] = {};
  if(method == 'normal') then
    self.annotations[object].properties[field].method = 'normal';
    self.annotations[object].properties[field].type = otype;
    self.annotations[object].properties[field].options = opts;
    self.annotations[object].properties[field].get_str = get;
    self.annotations[object].properties[field].set_str = set;
    self.annotations[object].properties[field].get = loadstring(get);
    self.annotations[object].properties[field].set = loadstring(set);
  else
    self.annotations[object].properties[field].method = 'property';
    self.annotations[object].properties[field].type = otype;
    self.annotations[object].properties[field].options = opts;
  end
end

function System:track(object)
  self.object_counter = self.object_counter + 1;
  object.tracking_id = self.object_counter;
  self.tracked_objects[self.object_counter] = object;
end

function System:getObject(tracking_id)
  return self.tracked_objects[tracking_id];
end

-- sets an annotated object's field to the given value
function System:setField(object, field, value)
  local otype = tolua.type(object);
  if(self.annotations[otype] and self.annotations[otype].properties[field]) then
    if(self.annotations[otype].properties[field].method == 'normal') then
      return self.annotations[otype].properties[field].set(object, value);
    else --property
      object[field] = value;
    end
  else
    print('Tried to set for unannotated object!');
  end
end

-- returns an annotated object's field
function System:getField(object, field)
  local otype = tolua.type(object);
  if(self.annotations[otype] and self.annotations[otype].properties[field]) then
    if(self.annotations[otype].properties[field].method == 'normal') then
      return self.annotations[otype].properties[field].get(object);
    else --property
      return object[field];
    end
  else
    print('Tried to get for unannotated object!');
  end
end

-- returns a string which is almost a valid setField command in lua (only missing the end part)[for JS]
-- example: System:makeSetCommand(myvar, 'position')
--       -->"System:setField(System:getObject(1234), 'position',"
function System:makeSetCommand(object, field)
  return [["System:setField(System:getObject(]]..object.tracking_id..[[), ']]..field..[[',"]];
end

function System:_setupDeferredFunctions()
  self:_defer(SF.RigidBody, "addPoint2PointConstraint");
end

function System:_defer(class, func)
  self.deferred_functions[func] = class[func];
  class[func] = function (obj, ...)
    System:_deferredCall(obj, func, arg);
  end
end

function System:_deferredCall(object, funcname, args)
  table.insert(self.defers, {object, funcname, System.deferred_functions[funcname], args});
end

-- some component attributes can only be modified after they have been initalized
-- this function is used to make those changes, but be transparent to the user
-- unless such attributes are queried beforehand
function System:_deferredInit()
  for k,v in pairs(self.defers) do
    local obj = v[1];
    local funcname = v[2];
    local func = v[3];
    local args = v[4];
    func(obj, unpack(args));
    -- restore function call

    SF[System.stripped_type(obj)][funcname]=func;
  end
end

-- serializes a basic type : lua builtins and math objects (eg. SVector3)
function System:simpleSerialize(obj)
  if(self.annotations[tolua.type(obj)]) then
    return self.annotations[tolua.type(obj)].serialize(obj);
  elseif (not type(obj) == 'userdata') then
    return self:serializeNative(obj);
  end
  return '';
end
--[[
function System:serializeGameObject(go, ident)
  ident = ident or '';
  local serial = ident..'GameObject{\n';
  ident = ident..' ';
  serial = serial..ident..'name = "'..go:name()..'",\n';
  local cmps = go:allComponents();
  for i=0,cmps:size()-1 do
    serial = serial..self:serialize(cmps[i], ident);
  end
  local children = go:children();
  for i=0, children:size()-1 do
    serial = serial..self:serializeGameObject(children[i], ident);
  end
  ident = ident:sub(2);
  if(ident == '') then
    serial = serial..ident..'}\n';
  else
    serial = serial..ident..'},\n';
  end
  return serial;
end

function System:serialize(object, ident)
  ident = ident or '';
  local serial = '';
  local otype = '';
  --print(tolua.type(object));
  if (tolua.type(object) == 'Component') then
    otype = 'S'..object:type();
    object = tolua.cast(object, otype);
  elseif( type(object) == 'userdata') then
    otype = tolua.type(object);
  else
    otype = 'native';
  end
  if(self.annotations[otype]) then -- this is a core component or basic otype w/ annotations
    local annot = self.annotations[otype];
    if(annot.serialize) then -- basic otype
      serial = annot.serialize(object);
    else -- core component
      serial = ident..'Component{\n';
      ident = ident..' ';
      serial = serial..ident..'type = "'..otype..'",\n';
      -- properties
      for field,v in pairs(annot.properties) do
        serial = serial..ident..'property{\n';
        serial = serial..ident..' name = "'..field..'",\n';
        serial = serial..ident..' type = "'..v.type..'",\n';
        serial = serial..ident..' value = '..self:serialize(v.get(object), ident)..'\n'..ident..'},\n';
      end
      ident = ident:sub(2);
      serial = serial..ident..'},\n'
    end
  elseif (otype == 'native') then -- this is a lua otype
    serial = serial .. self:serializeNative(object);
  else -- unannotated c++ otype (probably component) -> unserializable
    return ident..'Component{\n'..ident..' type = "'..otype..'" --unserializable \n'..ident..'},\n';
  end
  return serial;
end
--]]
function System:serializeNative(o, level)
  if(level == nil) then
    level = 0;
  end
  if(level > 3) then
    return '';
  end
  local serial = '';
  if o == nil then
    serial = serial .. '""';
  elseif type(o) == "number" then
    serial = serial .. o
  elseif type(o) == "string" then
    serial = serial .. string.format("%q", o)
  elseif type(o) == "table" then
    serial = serial..("{\n")
    for k,v in pairs(o) do
      serial = serial .. "  ".. tostring(k) .. " = "
      serial = serial .. self:serializeNative(v, level + 1)
      serial = serial .. ",\n"
    end
    serial = serial .. "}\n"
  elseif type(o) == "function" then
    serial = tostring(o);
  else
    --error("cannot serialize a " .. type(o))
    serial = tostring(o);
  end
  return serial;
end
--[[
function System:deserialize(str)
  local f, err = loadstring(str);
  if(not f) then assert(nil, err); end
  local gofun = function(tabl)
    print(tabl.name)
  end
  local propertyfun = function(tabl)
    print(tabl.name);
  end
  local componentfun = function(tabl)
    print(tabl.type);
  end
  local loadenv = {GameObject = gofun, property = propertyfun, loadstring = loadstring, assert = assert, SQuaternion = SQuaternion, SVector3 = SVector3, Component = componentfun};
  setfenv(f, loadenv);
  f();
end
--]]
