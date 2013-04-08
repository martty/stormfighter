Editor = {};

Editor.keys = {};
Editor.keydown = {};

Editor.internal = {};
Editor.settings = {};
Editor.settings.advanced = {};
Editor.settings.advanced.gui_update_fps = 10;

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

Editor.internal.ui = {};
Editor.internal.ui.inspector = {};
Editor.internal.ui.console = {};

Editor.UI = Editor.internal.ui;

Manipulator = Editor.internal.manipulator;
dofile('scripts/manipulator.lua');
Manipulator = nil;

Inspector = Editor.internal.ui.inspector;
dofile('scripts/inspector.lua');
Inspector = nil;

Console = Editor.internal.ui.console;
dofile('scripts/console.lua');
Console = nil;



function Editor:init()
  self.internal.time_started = os.time();
  -- show omnibar
  self:addKey(OIS.KC_1); --select
  self:addKey(OIS.KC_2); --translate
  self:addKey(OIS.KC_3); --rotate
  self:addKey(OIS.KC_4); --scale
  self:manipulator():init(self);
  self.cameraGO = Hierarchy:createGameObject("editorCamera");
  self.cameraGO:addTag("no-serialise");
  self.camera = Camera:new();
  self.camera:activate();
  self.cameraGO:addComponent(self.camera);
  local fcc = System:loadComponent('scripts/freecameracontroller.lua');
  self.cameraGO:addComponent(fcc);
  self.cameraGO:transform().position = SVector3(0,0,-100);
  self.cameraGO:transform():lookAt(SVector3(0,0,0));
end

function Editor:manipulator()
  return self.internal.manipulator;
end

function Editor:inspector()
  return self.UI.inspector;
end

function Editor:console()
  return self.UI.console;
end

function Editor.UI:init()
  --self.inspector:init();
  --self.console:init();
  --Editor:openHierarchyBrowser();
  --Editor:openFileBrowser('media/objects');
  Editor.internal.time_ui_loaded = os.time();
  Editor.internal.time_to_ui_load = Editor.internal.time_ui_loaded - Editor.internal.time_started;
  print(tostring(Editor.internal.time_to_ui_load));
end



-- reloads the reloadable parts of the editor
function Editor:reloadEditor()
  print = logprint;
  dofile('scripts/editor.lua');
  Editor:init();
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

-- check that no modifiers are down
function Editor:isKeyPressedOnly(keycode)
  if(Input:isModifierDown(OIS.Modifier.Alt) or Input:isModifierDown(OIS.Modifier.Ctrl) or Input:isModifierDown(OIS.Modifier.Shift)) then
    return false;
  end
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
  if(self:isKeyPressedOnly(OIS.KC_1)) then
    self:manipulator():setMode("select");
  end
  if(self:isKeyPressedOnly(OIS.KC_2)) then
    self:manipulator():setMode("translate");
  end
  if(self:isKeyPressedOnly(OIS.KC_3)) then
    self:manipulator():setMode("rotate");
  end
  if(self:isKeyPressedOnly(OIS.KC_4)) then
    self:manipulator():setMode("scale");
  end
  --[[
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
  --]]
  if(self:onFixedFPS('gui', self.settings.advanced.gui_update_fps)) then
    self:updateUI();
  end
end

function Editor:updateUI()
  if(not GUI:ready()) then -- UI is not yet ready, don't bother
    self.internal.ui.ready = false;
    return
  elseif (not self.internal.ui.ready) then -- UI is ready for the first time after a load/reload, perform init
    self.UI:init();
    self.UI.ready = true;
  end
  -- parse UI messages & execute
  self:dispatchUIMessage(GUI:pollCommands());
  -- update Inspector
  self:inspector():update();
end

function Editor:dispatchUIMessage(msg)
  local datas = self:parseUIMessage(msg);
  for i=1,#datas do
    local callee = datas[i].meta.callee;
    if(callee == "inspector") then
      self:inspector():receive(datas[i]);
    else
      print("Unknown callee");
    end
  end
end

function Editor:parseUIMessage(message)
  print('Parsing...');
  print(message);
  local decoded = System.JSON:decode(message);
  tprint(decoded);
  return decoded;
end

function Editor:send(message)
  local jsstring = 'editor.receive('..message..');';
  logprint(jsstring);
  GUI:executeJS('editor.receive('..message..');');
end

-- UI is being reloaded, so set ready to false
function Editor:reloadUI()
  self.internal.ui.ready = false;
  GUI:reload();
end

logprint = print;
function print(something)
  logprint(something)
  GUI:executeJS('console.log("'..escapeTextForJS(something)..'");');
end

function print(something, level)
  level = level or 1;
  logprint(something)
  GUI:executeJS('console.log("'..escapeTextForJS(something)..'",'..level..');');
end

function escapeTextForJS(text)
  if(text) then
    return text:gsub('"', '&quot;');
  end
end

function Editor:executeJS(js)
  local escapedjs = escapeTextForJS(js);
  logprint(js);
  GUI:executeJS([[console.logJSCall("]]..escapedjs..[[");]]);
  GUI:executeJS(js);
end

function Editor:openHierarchyBrowser()
  -- set up commands
  Editor:executeJS('hierarchy.setCommandPatterns({"select" : "Editor:selectGameObject($0);", "addgameobject" : "Editor:addGameObject($0, $1);", "delete" : "Editor:delete($0);", "reparent" : "Editor:reparent($0, $1);"});');
  --obtain GOs from hierarchy
  local hierarchyJSON = Hierarchy:serialise();
  local js = "hierarchy.update('"..hierarchyJSON.."');";
  Editor:executeJS(js);
end

function Editor:openFileBrowser(path)
  -- set up commands
  Editor:executeJS('filebrowser.setCommandPatterns({"loadobject" : "Editor:loadGameObject($0);"});');
  --obtain GOs from hierarchy
  local dirJSON = Resources:readDirectoryContentsJSON(path);
  local js = "filebrowser.update('"..dirJSON.."');";
  Editor:executeJS(js);
end

function Editor:loadGameObject(filename)
  local go = Hierarchy:loadGameObjectFromFile(filename);
  go:load(true);
  Editor:openHierarchyBrowser();
end

function Editor:selectGameObject(goname)
  self:manipulator():show(goname);
  self:inspector():showGameObject(goname);
end

function Editor:addGameObject(newgoname, parentgoname)
  local parentgo = Hierarchy:find(parentgoname);
  local newgo = Hierarchy:createGameObject(newgoname);
  parentgo:addChild(newgo);
  Editor:openHierarchyBrowser();
end

function Editor:saveScene()

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
