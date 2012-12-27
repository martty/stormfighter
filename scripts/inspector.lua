--[[
  inspector.lua

  Part of the editor that interacts with the UI widget Inspector
--]]

function Inspector:init()
  -- set command patterns
  Editor:executeJS('inspector.setCommandPatterns({"setproperty" : "Editor:inspector():setProperty($0, $1, $2);", "setcomponentproperty" : "Editor:inspector():setComponentProperty($0, $1, $2, $3);", "addcomponent" : "Editor:inspector():addComponent($0, $1);", "savegameobject" : "Editor:inspector():saveGameObject($0);"});');
  self.go = nil;
end

function Inspector:show()
  Editor:executeJS('inspector.show();');
end

function Inspector:clear()
  Editor:executeJS('inspector.clear();');
  self.go = nil;
end

-- open Inspector and show a GO's components
function Inspector:showGameObject(goname)
  self:show();
  self:clear();
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

function Inspector:update()
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

-- save a gameobject
function Inspector:saveGameObject(goname)
  print('saving:'..goname);
  local go = Hierarchy:find(goname);
  go:save();
  local filename = "media/objects/"..goname..".object.json";
  local json = go:serialiseJSON(true);
  local f = assert(io.open(filename, 'w'));
  f:write(json);
  f:close();
  print('..done');
end
