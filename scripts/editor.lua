Editor = {};

Editor.keys = {};
Editor.keydown = {};

Editor.internal = {};
Editor.settings = {};
Editor.settings.advanced = {};
Editor.settings.advanced.gui_poll_fps = 10;

Editor.settings.manipulator = {};
Editor.settings.manipulator.translateFactor = 0.001;
Editor.settings.manipulator.rotateFactor = 0.0001;
Editor.settings.manipulator.scaleFactor = 0.0001;

Editor.internal.counters = {}; -- timing
Editor.internal.counters.gui = 0;

Editor.internal.mouse = {};
Editor.internal.mouse.left = false;
Editor.internal.mouse.right = false;
Editor.internal.mouse.isClicking = false;
Editor.internal.mouse.isDragged = false;
Editor.internal.mouse.isDraggedRight = false;
Editor.internal.mouse.isMoved = false;
Editor.internal.mouse.lastPosition = SVector2(0,0);
Editor.internal.mouse.downPosition = SVector2(0,0);

Editor.internal.manipulator = {};

Manipulator = Editor.internal.manipulator;
dofile('scripts/manipulator.lua');

function Editor:init()
  -- show omnibar
  self:addKey(OIS.KC_R);
  self:addKey(OIS.KC_H);
  self:addKey(OIS.KC_P);
  self:addKey(OIS.KC_T);
  self:addKey(OIS.KC_M);
  self:addKey(OIS.KC_1); --select
  self:addKey(OIS.KC_2); --translate
  self:addKey(OIS.KC_3); --rotate
  self:addKey(OIS.KC_4); --scale
  self:manipulator():initialise(self);
end

function Editor:manipulator()
  return self.internal.manipulator;
end

-- reloads the reloadable parts of the editor
function Editor:reload()
  dofile('scripts/manipulator.lua');
end

function Editor:addKey(keycode)
  table.insert(self.keys, keycode);
  self.keydown[keycode]= false;
end

function Editor:handleKeyPress()
  for index,val in pairs(self.keys) do
    if(not Input:isKeyDown(val)) then
      self.keydown[val] = false;
    end
  end
end

function Editor:isKeyPressed(keycode)
  if(Input:isKeyDown(keycode) and not self.keydown[keycode]) then
    self.keydown[keycode] = true;
    return true;
  end
  return false;
end

function Editor:handleMouse()
  -- click: buttonDown(true) -> no buttonDown(false)
  -- drag: buttonDown(false) -> movement (true) -> no buttonDown(false)
  -- move: no buttonDown + movement
  local x,y = Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y);
  local pos = SVector2(x,y);
  if(Input:isButtonDown(OIS.MB_Left)) then -- left mb down
    self.internal.mouse.isMoved = false;
    if(not self.internal.mouse.left) then -- just pressed mb
      self.internal.mouse.left = true;
      self.internal.mouse.downPosition = pos;
    else -- has been pressing it : either click or drag
      if(not self.internal.mouse.downPosition:positionEquals(pos)) then -- drag
        self.internal.mouse.isDragged = true;
      else -- might be a click or a drag
      end
    end
  elseif(Input:isButtonDown(OIS.MB_Right)) then -- right mb down
    self.internal.mouse.isMoved = false;
  elseif(self.internal.mouse.left) then -- left mb release
    if(self.internal.mouse.isDragged) then -- drag release
      self.internal.mouse.isDragReleased = true;
      self.internal.mouse.isDragged = false;
    else -- click
      self.internal.mouse.isClicked = true;
    end
    self.internal.mouse.left = false;
  elseif(self.internal.mouse.right) then -- right mb release
  else -- no mb activity, clear + check for movement
    self.internal.mouse.isClicked = false;
    self.internal.mouse.isDragged = false;
    self.internal.mouse.isDragReleased = false;
    self.internal.mouse.isMoved = not pos:positionEquals(self.internal.mouse.lastPosition);
  end
  self.internal.mouse.lastPosition = pos;
end

function Editor:isMouseDragged()
  local drag_start = self.internal.mouse.downPosition;
  local drag_end = SVector2(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
  if(self.internal.mouse.isDragged) then
    return true, drag_start, drag_end;
  end
  return false;
end

function Editor:isMouseDragReleased()
  local drag_start = self.internal.mouse.downPosition;
  local drag_end = SVector2(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
  if(self.internal.mouse.isDragReleased) then
    return true, drag_start, drag_end;
  else
    return false;
  end
end

function Editor:isMouseClicked()
  if(self.internal.mouse.isClicked) then
    return true;
  else
    return false;
  end
end

function Editor:isMouseMoved()
  if(self.internal.mouse.isMoved) then
    return true;
  else
    return false;
  end
end

function Editor:advanceCounters()
  for k,v in pairs(self.internal.counters) do
    self.internal.counters[k] = v + Application:deltaTime();
  end
end

function Editor:onFixedFPS(counter_string, fps)
  if(self.internal.counters[counter_string] > (1/fps)) then
    self.internal.counters[counter_string] = 0;
    return true;
  else
    return false;
  end
end

function Editor:update()
  self:handleKeyPress();
  self:handleMouse();
  self:advanceCounters();
  if(not GUI:isInGUI(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y))) then
    self:manipulator():update();
  end
  if(self:isKeyPressed(OIS.KC_1)) then
    self:manipulator():setMode("select");
  end
  if(self:isKeyPressed(OIS.KC_2)) then
    self:manipulator():setMode("translate");
  end
  if(self:isKeyPressed(OIS.KC_3)) then
    self:manipulator():setMode("rotate");
  end
  if(self:isKeyPressed(OIS.KC_4)) then
    self:manipulator():setMode("scale");
  end
  if(self:isKeyPressed(OIS.KC_I)) then
    self:saveScene()
  end
  if(self:isKeyPressed(OIS.KC_T)) then
    self:_test();
  end
  if(self:isKeyPressed(OIS.KC_R)) then
    -- reload UI
    GUI:reload();
  end
  if(self:isKeyPressed(OIS.KC_H)) then
    self:openHierarchyBrowser();
  end
  if(self:isKeyPressed(OIS.KC_M)) then
    self:reload();
  end
  if(self:onFixedFPS('gui', self.settings.advanced.gui_poll_fps)) then
    local cmd = GUI:pollCommands();
    local ocmd = cmd;
    if(cmd:find(';')) then
      cmd = cmd:sub(1, cmd:rfind(';')); -- chop off scrambled shit if appears
      if(not (cmd == ";")) then
        print(cmd);
        local f = loadstring(cmd);
        if(f) then
          f();
        else
          print('error in cmd:'..cmd..','..ocmd);
        end
      end
    end
  end
end

function string:rfind(token, start)
  start = start or 1;
  local rev = self:reverse();
  local pos = rev:find(token, start);
  return self:len()-pos+1;
end

logprint = print;
function print(something)
  logprint(something)
  GUI:executeJS('console.log("'..something..'");');
end

function Editor:executeJS(js)
  local escapedjs = js:gsub('"', '&quot;');
  GUI:executeJS([[console.logJSCall("]]..escapedjs..[[");]]);
  GUI:executeJS(js);
end

function Editor:openHierarchyBrowser()
  -- set up commands
  Editor:executeJS('hierarchy.setCommandPatterns({"select" : "Editor:selectGameObject($0);", "delete" : "Editor:delete($0);", "reparent" : "Editor:reparent($0, $1);"});');
  --obtain GOs from hierarchy
  local hierarchyJSON = Hierarchy:serialise();
  local js = "hierarchy.update('"..hierarchyJSON.."');";
  Editor:executeJS(js);
end

function Editor:selectGameObject(goname)
  self:manipulator():show(goname);
end

function Editor:saveScene()
  print('saving');
  -- strategy :
  -- save off hierarchy (most important)
  -- save off module states (if needed)
  -- save off editor state & misc
  local scenename = "test.object.lua"; -- this should be a setable thing
  local root = Hierarchy:getRoot();
  local plat = root:find('platform');
  --plat.components
  local seri = System:serializeGameObject(plat);
  local f = assert(io.open(scenename, 'w'));
  print(seri);
  f:write(seri);
  f:close();
  System:deserialize(seri);
end

function Editor:openInspector(goname)
  Editor:executeJS('inspector.setCommandPatterns({"setproperty" : "Editor:setProperty($0, $1, $2);", "setcomponentproperty" : "Editor:setComponentProperty($0, $1, $2, $3);", "addcomponent" : "Editor:addComponent($0, $1);"});');
  GUI:executeJS("inspector.clear(); inspector.show();");
  GUI:executeJS("inspector.setGameObjectName('"..goname.."');");
  print("inspector.setGameObjectName('"..goname.."');");
  local go = Hierarchy:find(goname);
  local cmps = go:allComponents();
  for i=0,cmps:size()-1 do
    local otype = "SF::"..cmps[i].type;
    cmps[i] = tolua.cast(cmps[i], otype);
    print("inspector.addComponent('"..cmps[i].type.."');");
    GUI:executeJS("inspector.addComponent('"..cmps[i].type.."');");
    if(System.annotations[otype]) then
      for field,v in pairs(System.annotations[otype].properties) do
        print("inspector.addProperty('"..cmps[i].type.."','"..field.."','"..v.type.."');");
        GUI:executeJS("inspector.addProperty('"..cmps[i].type.."','"..field.."','"..v.type.."');");
        print("inspector.setProperty('"..cmps[i].type.."','"..field.."','"..v.type.."','"..tostring(System:getField(cmps[i], field)).."');");
        GUI:executeJS("inspector.setProperty('"..cmps[i].type.."','"..field.."','"..v.type.."','"..tostring(System:getField(cmps[i], field)).."');");
      end
    end
  end
end

function Editor:setComponentProperty(goname, component, property, value)
  print(goname..component..property..value);
end

function Editor:_generateMaterialThumbnails()
  local matgo = Hierarchy:createGameObject("matrtt");
  matgo:addComponent(Primitive:new(Primitive.CUBE));
  --matgo:transform().scale = SVector3(0.1,0.1,0.1);
  local matstrings = Graphics:getLoadedMaterialNames();

  for i=0, matstrings:size()-1 do
    matgo:component("Mesh"):setMaterialName(matstrings[i]);
    local matnunder = matstrings[i]:gsub("/", "_");
    Graphics:renderGameObjectIntoFile(matgo, "media/thumbnails/materials/"..matnunder.."_thumb.png", 100, 100);
  end
  matgo:transform():setVisible(false, true);
  -- TODO: remove it
end

function Editor:generateAndShowMaterialBrowser()
  self:_generateMaterialThumbnails();
  local matstrings = Graphics:getLoadedMaterialNames();

  for i=0, matstrings:size()-1 do
    local matnunder = matstrings[i]:gsub("/", "_");
    local thumbpath = "media/thumbnails/materials/"..matnunder.."_thumb.png";
    GUI:executeJS("materialbrowser.addMaterial('"..matstrings[i].."', '"..thumbpath.."');");
    print("materialbrowser.addMaterial('"..matstrings[i].."', '"..thumbpath.."');");
  end
  GUI:executeJS("materialbrowser.show();");
end

function Editor:_testMouseFunctions()
  if(self:isMouseClicked()) then
    print('click');
  end
  if(self:isMouseDragged()) then
    print('drag');
  end
  if(self:isMouseDragReleased()) then
    print('drag release');
  end
  if(self:isMouseMoved()) then
    print('move');
  end
end

function Editor:_test()

end
