--[[
  hierarchy.lua

  Part of the editor that interacts with the UI widget Hierarchy
--]]

function HierarchyW:init()
  self.cachedCallData = '';
  self.selectedGO = nil;
end

-- dispatch endpoint
function HierarchyW:receive(calldata)
  local cmd = calldata.meta.command;
  --tprint(calldata);
  if (cmd == "reparent") then
    self:reparent(calldata.data);
  elseif (cmd == "destroy") then

  elseif (cmd == "create") then

  end
end


-- moves source GO in the hierarchy
function HierarchyW:reparent(data)
  local method = data.method;
  local srcgoname = data.source.name;
  local srcgo = Hierarchy:find(srcgoname);
  local targetgoname = data.target.name;
  local targetgo = Hierarchy:find(targetgoname);
  if((method == "addSiblingBefore") or (method == "addSiblingAfter")) then -- not caring about child order
    targetgo:addSibling(srcgo);
  else
    targetgo:addChild(srcgo);
  end
end

-- updates UI representation to match engine data
function HierarchyW:update()
  local hierdata = Hierarchy:serialiseStructureJSON();
  local calldata = '{"meta" : {"callee" : "hierarchy", "command" : "update"}, "data" : '..hierdata..'}';
  if(self.cachedCallData ~= calldata) then
    Editor:send(calldata);
    self.cachedCallData = calldata;
  end
end

function HierarchyW:select(go)
  local goname = go:name();
  local calldata = '{"meta" : {"callee" : "hierarchy", "command" : "select"}, "data" : { "name" : "'..goname..'"}}';
  if(self.selectedGO ~= go) then
    Editor:send(calldata);
    print(calldata);
    self.selectedGO = go;
  end
end

function HierarchyW:deselect()
  local calldata = '{"meta" : {"callee" : "hierarchy", "command" : "deselect"}, "data" : {} }';
  if(self.selectedGO) then
    Editor:send(calldata);
    self.selectedGO = nil;
  end
end
