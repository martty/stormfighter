--[[
  inspector.lua

  Part of the editor that interacts with the UI widget Inspector
--]]

function Inspector:init()
  -- set command patterns
  Editor:executeJS('inspector.setCommandPatterns({"setproperty" : "Editor:inspector():setProperty($0, $1, $2);", "setcomponentproperty" : "Editor:inspector():setComponentProperty($0, $1, $2, $3);", "addcomponent" : "Editor:inspector():addComponent($0, $1);", "savegameobject" : "Editor:inspector():saveGameObject($0);"});');
end

function Inspector:show()
  Editor:executeJS('inspector.show();');
end

function Inspector:clear()
  Editor:executeJS('inspector.clear();');
end

-- open Inspector and show a GO's components
function Inspector:showGameObject(goname)
  self:show();
  self:clear();
  Editor:executeJS("inspector.setGameObjectName('"..goname.."');");
  local go = Hierarchy:find(goname);
  -- get all components for go
  local cmps = go:allComponents();
  for i=0,cmps:size()-1 do
    -- the components are of Component type, so make SF::type and cast
    local otype = "SF::"..cmps[i].type;
    cmps[i] = tolua.cast(cmps[i], otype);
    -- add component
    Editor:executeJS("inspector.addComponent('"..cmps[i].type.."');");
    -- if we have annotations for this type, then extract properties
    if(System.annotations[otype]) then
      for field,v in pairs(System.annotations[otype].properties) do
        --add property
        Editor:executeJS("inspector.addProperty('"..cmps[i].type.."','"..field.."','"..v.type.."');");
        --set property to current value using getField
        Editor:executeJS("inspector.setProperty('"..cmps[i].type.."','"..field.."','"..v.type.."','"..tostring(System:getField(cmps[i], field)).."');");
      end
    end
  end
end

-- Inspector widget commands go through here

-- set property of a GO
function Inspector:setProperty(gameobject, property, value)

end

-- set property of a GO's component
function Inspector:setComponentProperty(goname, component, property, value)
  print(goname..component..property..value);
end

-- save a gameobject
function Inspector:saveGameObject(goname)
  print('saving:'..goname);
  local filename = "media/objects/"..goname..".object.json";
  local json = Hierarchy:find(goname):serialiseJSON(true);
  local f = assert(io.open(filename, 'w'));
  f:write(json);
  f:close();
  print('..done');
end
