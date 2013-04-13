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
  --tprint(calldata);
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
  Editor:manipulator():rescale();
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

-- unset our GO object and notify for update
function Inspector:unsetGameObject(go)
  self.go = nil;
  self:update();
end

-- updates UI representation to match engine data
function Inspector:update()
  local godata = '""';
  if(not self.go) then -- no selection, send empty data
    godata = '""';
  else
    godata = self.go:serialiseJSON(false, false);
  end

  local calldata = '{"meta" : {"callee" : "inspector", "command" : "update"}, "data" : '..godata..'}';
  if(self.cachedCallData ~= calldata) then
    Editor:send(calldata);
    self.cachedCallData = calldata;
    --print('\n'..godata);
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
