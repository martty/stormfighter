--[[
  inspector.lua

  Part of the editor that interacts with the UI widget Inspector
--]]

function Inspector:init()
  self.go = nil;
  self.cdata = {}; -- current data of go
end

-- dispatch endpoint
function Inspector:receive(calldata)
  local cmd = calldata.meta.command;
  tprint(calldata);
  if (cmd == "delta") then
    self:delta(calldata.data);
  elseif (cmd == "destroy") then
    self:destroy(calldata.data);
  elseif (cmd == "create") then
    self:create(calldata.data);
  end
end


-- updates gameobject to match incoming data
-- TODO: double seri/deseri
function Inspector:delta(data)
  self.go:deserialiseJSON(System.JSON:encode(data));
end

function Inspector:destroy(data)
  local cmpname = data.components[1].type;
  self.go:destroyComponent(cmpname);
end

function Inspector:create(data)
  local cmpname = data.components[1].type;
  local cmp = _G[cmpname]:new();
  print('created new component'..cmpname);
  self.go:addComponent(cmp);
end

-- set our GO object and notify for update
function Inspector:setGameObject(go)
  self.go = go;
  self.cachedCallData = '';
  self:update();
end

-- updates UI representation to match engine data
function Inspector:update()
  if(not self.go) then -- no selection, nothing to update
    return;
  end

  local godata = self.go:serialiseJSON(false, false);
  local calldata = '{"meta" : {"callee" : "inspector", "command" : "update"}, "data" : '..godata..'}';
  if(self.cachedCallData ~= calldata) then
    Editor:send(calldata);
    self.cachedCallData = calldata;
    print('\n'..godata);
  end
--[[
  local ndata = {}; -- new component data
  local cmps = self.go:allComponents();
  for i=0,cmps:size()-1 do
    if(cmps[i].group == "LuaScript") then
      print('[!]not adding LuaScript');
    else
      -- the components are of Component type, so make SF::type and cast
      local otype = "SF::"..cmps[i].type;
      cmps[i] = tolua.cast(cmps[i], otype);
      -- if we have annotations for this type, then extract properties
      if(System.annotations[cmps[i].type]) then
        ndata[cmps[i].type] = {};
        for field,v in pairs(System.annotations[cmps[i].type].properties) do
          --set property to current value using getField
          local fieldval = System:getField(cmps[i], field);
          local serivalue = System:serialise(fieldval);
          ndata[cmps[i].type][field] = {field_type=v.type, field_value=serivalue};
        end
      end
    end
  end
  local equal, diff = self:tablesEqual(self.cdata, ndata);
  if not(equal) then
    self.cdata = ndata;
    if(diff == "len" or diff == "key") then
      self:showGameObject(self.go:name());
    else
      self:updateValues();
    end
  end--]]
end
--[[
  Editor:executeJS("inspector.setGameObjectName('"..goname.."');");
  local go = Hierarchy:find(goname);
  -- save currently selected go
  self.go = go;
  -- get all components for go
  local cmps = go:allComponents();
  for i=0,cmps:size()-1 do
    if(cmps[i].group == "LuaScript") then
      print('[!]not adding LuaScript');
    else
      -- the components are of Component type, so make SF::type and cast
      local otype = "SF::"..cmps[i].type;
      cmps[i] = tolua.cast(cmps[i], otype);
      -- add component
      Editor:executeJS("inspector.addComponent('"..cmps[i].type.."');");
      -- if we have annotations for this type, then extract properties
      if(System.annotations[cmps[i].type]) then
        for field,v in pairs(System.annotations[cmps[i].type].properties) do
          --add property
          local optsjson = System.JSON:encode(v.options);
          Editor:executeJS("inspector.addProperty('"..cmps[i].type.."','"..field.."','"..v.type.."','"..optsjson.."');");
          --set property to current value using getField
          local fieldval = System:getField(cmps[i], field);
          local serivalue = System:serialise(fieldval);
          Editor:executeJS("inspector.setProperty('"..cmps[i].type.."','"..field.."','"..v.type.."','"..serivalue.."');");
        end
      end
    end
  end
end
--]]
function Inspector:updateValues()
  if(not self.go) then -- no selection, nothing to update
    return
  end
  local cmps = self.go:allComponents();
  for i=0,cmps:size()-1 do
    if(cmps[i].group == "LuaScript") then
      print('[!]not adding LuaScript');
    else
      -- the components are of Component type, so make SF::type and cast
      local otype = "SF::"..cmps[i].type;
      cmps[i] = tolua.cast(cmps[i], otype);
      -- if we have annotations for this type, then extract properties
      if(System.annotations[cmps[i].type]) then
        for field,v in pairs(System.annotations[cmps[i].type].properties) do
          --set property to current value using getField
          local fieldval = System:getField(cmps[i], field);
          local serivalue = System:serialise(fieldval);
          Editor:executeJS("inspector.setProperty('"..cmps[i].type.."','"..field.."','"..v.type.."','"..serivalue.."');");
        end
      end
    end
  end
end

-- compare two tables by key and value equivalence
function Inspector:tablesEqual(table1, table2)
  -- if different length, then definietly not same
  -- pitfall: #table returns 0 for maps
  local table1len = 0 for _, _ in pairs(table1) do table1len = table1len + 1 end
  local table2len = 0 for _, _ in pairs(table2) do table2len = table2len + 1 end
  if not(table1len == table2len) then
    return false, "len";
  end
  for k,v in pairs(table1) do
    if(table2[k] == nil) then -- table2 does not have an index from table1
      return false, "key";
    end
    if not (table1[k] == table2[k]) then -- table1[k] value does not match table2[k] value
      if (type(table1[k]) == "table") then -- table values should be compared through recursion
        if not self:tablesEqual(table1[k], table2[k]) then
          return false, "value";
        end
      else -- non table value means different tables
        return false, "value";
      end
    end
  end
  return true;
end

-- Inspector widget commands go through here

-- utility function to convert value strings into lua variables
function Inspector:value(valstring)
  local f,err = loadstring('return '..valstring,'local')
  if (err) then
    print('[Inspector]Error when converting value:'..err, 0);
  end
  return f();
end

-- set property of a GO
function Inspector:setProperty(gameobject, property, valstring)
  System:setField(self.go, property, self:value(valstring));
end

-- set property of a GO's component
function Inspector:setComponentProperty(goname, cmpname, property, valstring)
  local cmp = self.go:component(cmpname);
  System:setField(cmp, property, self:value(valstring));
end

-- add a component to GO
function Inspector:addComponent(goname, cmpname)
  local cmp;
  if(self.go:hasComponent(cmpname)) then
    print(goname.." already has component "..cmpname);
    return;
  end
  if (cmpname == "Mesh") then
    cmp = Mesh:new();
  elseif (cmpname == "Camera") then
    cmp = Camera:new();
  elseif (cmpname == "Light") then
    cmp = Light:new();
  end
  self.go:addComponent(cmp);
end

-- save a gameobject
function Inspector:saveGameObject(goname)
  print('saving:'..goname);
  local go = Hierarchy:find(goname);
  go:save(true);
  local filename = "media/objects/"..goname..".object.json";
  local json = go:serialiseJSON(true);
  local f = assert(io.open(filename, 'w'));
  f:write(json);
  f:close();
  print('..done');
end
