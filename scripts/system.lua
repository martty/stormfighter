-- typedefs
SVector3 = Ogre.Vector3;
-- human readable (debug format)
SVector3.__tostring = function(e)
  return '<'..e.x..','..e.y..','..e.z..'>';
end
SQuaternion = Ogre.Quaternion;
-- human readable (debug format)
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

function clamp(value, min, max)
  if(value > max) then
    return max;
  elseif (value < min) then
    return min;
  else
    return value;
  end
end

function string:rfind(token, start)
  start = start or 1;
  local rev = self:reverse();
  local pos = rev:find(token, start);
  return self:len()-pos+1;
end

-- hijack print, so that it does not print to stdout, but rather to log
stdout_print = print;
function print(something)
  Logger:logMessage(tostring(something));
end

function tprint (tbl, indent)
  if not indent then indent = 0 end
  for k, v in pairs(tbl) do
    formatting = string.rep("  ", indent) .. k .. ": "
    if type(v) == "table" then
      print(formatting)
      tprint(v, indent+1)
    elseif type(v) == 'boolean' then
      print(formatting .. tostring(v))
    else
      print(formatting .. v)
    end
  end
end


function debugdrawplane(plane, size, colour, fill)
  local normal = plane.normal;
  local deviant = normal:perpendicular():normalisedCopy() * size;
  local deviant_2 = normal:crossProduct(deviant):normalisedCopy() * size;
  local middlepoint = normal*plane.d*-1;
  local a,b,c,d = middlepoint + deviant + deviant_2, middlepoint - deviant + deviant_2 , middlepoint - deviant - deviant_2, middlepoint + deviant - deviant_2;
  Graphics:debugDrawer():drawQuad({d,a,b,c}, colour, fill);
end

function debugdrawline(line_begin, line_end, colour)
  Graphics:debugDrawer():drawLine(line_begin, line_end, colour);
end

function debugdrawvector(vector, origin, colour)
  Graphics:debugDrawer():drawLine(origin, origin+vector, colour);
end
--[[
oldtoluatype = tolua.type
function tolua.type(obj)
  local typ = oldtoluatype(tolua.type);
  if(type == "Ogre::Vector3") then
    return "SVector3";
  elseif (type == "Ogre::Quaternion") then
    return "SQuaternion";
  end
  return type;
end
--]]
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

function System.writeSymbolsToFile(filename)
  local s = "";
  for i,k in pairs(_G) do
    --print(i);
    if(not (i == "_G")) then
      s = s.."["..tostring(i) .. "]".. System:serializeNativeType(k);
    end
  end
  local f = assert(io.open(filename, 'w'));
  f:write(s);
  f:close();
end

-- dumps variable into filename
function System.saveToFile(var, filename)
  print("saving");
  local f = assert(io.open(filename, 'w'));
  f:write(tostring(var));
  f:close();
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

function System.type(var)
  local typ = tolua.type(var);
  local rtyp = typ;
  if (typ == "Ogre::Vector3") then
    rtyp = "SF::SVector3";
  elseif (typ == "Ogre::Quaternion") then
    rtyp = "SF::SQuaternion";
  elseif (typ == "Ogre::ColourValue") then
    rtyp = "SF::SColourValue";
  end
  -- strip SF:: from the beginning
  local _,ind = rtyp:find("SF::");
  if (ind) then
    return rtyp:sub(ind+1);
  else
    return rtyp;
  end
end

--provide 2D vector :)
function SVector2(x,y)
  return SVector3(x,y,0);
end

-- do some initialisation
function System:_initialise()
  -- dump SF.* into global namespace
  local global_env = getfenv(0);
  for k,v in pairs(SF) do
    if( not global_env[k] ) then -- do not overwrite globals
      global_env[k] = v;
    end
  end
  setfenv(0, global_env);
  self.JSON = (loadfile "scripts/JSON.lua")() -- load JSON library
  self:_hijackGameObject();
  self:_hijackModules();
  self:_setupSFSerialise();
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
      --print(cmps[i].type);
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

-- Annotations
-- because we cannot directly access usertype fields
-- we manually provide getter and setter methods for the fields of the objects

-- object: string name of class
-- field: string name of field
-- otype : typename
-- options : options passed to the UI to affect rendering the widget

-- field behaves like a property eg.: object[field] = value
function System:annotateProperty(object, field, otype, options)
  local opts = options or {};
  if( not self.annotations[object] ) then
    self.annotations[object] = {};
    self.annotations[object].properties = {};
  end
  self.annotations[object].properties[field] = {};
  self.annotations[object].properties[field].method = 'property';
  self.annotations[object].properties[field].type = otype;
  self.annotations[object].properties[field].options = opts;
end


-- provide set and get functions
-- get, set: getter and setter functions names in string (must be global identifiers!!), only for normal method
--      set: takes two parameters, an object and value (eg. longhand for Object:setSpecificField(value))
--      get: takes one parameter, the object to get for (eg. longhand for Object:getSpecificField())
function System:annotateField(object, field, otype, get, set, options)
  local opts = options or {};
  if( not self.annotations[object] ) then
    self.annotations[object] = {};
    self.annotations[object].properties = {};
  end
  self.annotations[object].properties[field] = {};
  self.annotations[object].properties[field].method = 'normal';
  self.annotations[object].properties[field].type = otype;
  self.annotations[object].properties[field].options = opts;
  self.annotations[object].properties[field].get_str = get;
  self.annotations[object].properties[field].set_str = set;
  self.annotations[object].properties[field].get = loadstring(get);
  self.annotations[object].properties[field].set = loadstring(set);
end

-- serialise both lua types and Ogre/SF types
function System:serialise(var)
  local luatype = type(var);
  if (not (luatype == "userdata")) then
    return System:serialiseNativeType(var);
  else
    return System:serialiseSFType(var);
  end
end

-- serialises a "native" type
-- supported types:
--                 number, string, nil, bool, function
function System:serialiseNativeType(o, level)
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
    serial = serial .. string.format("%s", o)
  elseif type(o) == "table" then
    serial = serial..("{\n")
    for k,v in pairs(o) do
      serial = serial .. "  ".. tostring(k) .. " = "
      serial = serial .. self:serialiseNativeType(v, level + 1)
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

function System:_setupSFSerialise()
  seri = {};
  seri.SVector3 = function (e)
    return 'SVector3('..e.x..','..e.y..','..e.z..')';
  end
  seri.SQuaternion = function (e)
    return 'SQuaternion('..e.x..','..e.y..','..e.z..','..e.w..')';
  end
  seri.SColourValue = function (e)
    return 'SColourValue('..e.r..','..e.g..','..e.b..','..e.a..')';
  end
  System.serialisable = seri;
end

-- serializes an SF type math object (eg. SVector3)
function System:serialiseSFType(object)
  local stripped = System.type(object);
  --print('serialising type:'..stripped);
  return self.serialisable[stripped](object);
end

-- here we set up the annotations for core components
function System:_annotateCoreComponents()
  --Transform
  self:annotateProperty('Transform', 'position', 'SVector3');
  self:annotateProperty('Transform', 'orientation', 'SQuaternion');
  self:annotateProperty('Transform', 'scale', 'SVector3');

  self:annotateProperty('Camera', 'nearClipDistance', 'SReal');
  self:annotateProperty('Camera', 'farClipDistance', 'SReal');
  self:annotateProperty('Camera', 'FOVy', 'SReal', {render = 'slider', min = 0, max = 2*math.pi});
  self:annotateProperty('Camera', 'projectionType', 'enum', {values = {["Camera.PERSPECTIVE"] = Camera.PERSPECTIVE, ["Camera.ORTHOGRAPHIC"] = Camera.ORTHOGRAPHIC}});
  self:annotateProperty('Camera', 'polygonMode', 'enum');

  self:annotateProperty('Light', 'lightType', 'enum');
  self:annotateProperty('Light', 'diffuseColour', 'SColourValue');
  self:annotateProperty('Light', 'specularColour', 'SColourValue');

  self:annotateProperty('Mesh', 'meshName', 'SString');
  self:annotateProperty('Primitive', 'meshName', 'SString');
end

-- assigns a unique id (ID) for an object (eg. gameobject, component..)
function System:track(object)
  self.object_counter = self.object_counter + 1;
  object.tracking_id = self.object_counter;
  self.tracked_objects[self.object_counter] = object;
end

-- retrieves an objects based on its unique id (ID)
function System:getObject(tracking_id)
  return self.tracked_objects[tracking_id];
end

-- sets an annotated object's field to the given value
function System:setField(object, field, value)
  local otype = System.type(object);
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
-- object is an existing object, eg. GO
-- field is the string name of the given field
function System:getField(object, field)
  local otype = System.type(object);
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
