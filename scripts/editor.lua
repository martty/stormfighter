Editor = {};

Editor.keys = {};
Editor.keydown = {};

Editor.internal = {};
Editor.settings = {};
Editor.settings.advanced = {};
Editor.settings.advanced.gui_poll_fps = 10;

Editor.settings.manipulator = {};
Editor.settings.manipulator.translateFactor = 0.001;

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

function Editor:init()
  -- show omnibar
  self:addKey(OIS.KC_R);
  self:addKey(OIS.KC_H);
  self:addKey(OIS.KC_P);
  self:initialiseManipulator();
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
  if(self:isMouseClicked()) then
    ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    result = Graphics:closestExactRayQuery(ray);
    if(result.hitObject) then
      local goname = result.hitObject:name();
      -- GUI:executeJS("showInspector('"..result.hitObject:name().."');");
      if(goname:find("manipulator-")) then -- we picked a manipulator
        self:selectManipulatorSide(goname);
      else
        self:showManipulator(goname);
      end
    else
      self:hideManipulator();
    end
  end
  if(self:isMouseDragged()) then
    -- woo translation now!
    local a,drag_start,drag_end = self:isMouseDragged();
    if(self.internal.manipulator.isSelected) then
      local drag = drag_end-drag_start;
      local drag_length = drag:length();
      local angle = drag:angleBetween(SVector2(0,1)):valueDegrees();
      local dir = 1;
      if(angle > 90) then
        dir = 1;
      else
        dir = -1;
      end
      if(self.internal.manipulator.currentSide) then -- restricted translate
        local normal = SVector3(self.internal.manipulator.normal); --copy
        normal = normal * drag_length * self.settings.manipulator.translateFactor * dir;
        self.internal.manipulator.selection:transform():move(normal);
      end
    else
      --show selection box!
    end
  end
  if(self:isMouseMoved()) then
    if(self.internal.manipulator.isSelected) then
      ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
      result = Graphics:closestExactRayQuery(ray);
      if(result.hitObject) then
        local goname = result.hitObject:name();
        if(goname:find("manipulator-")) then -- we picked a manipulator
          self:selectManipulatorSide(goname);
        end
      end
    end
  end
  if(self:isKeyPressed(OIS.KC_R)) then
    -- reload UI
    GUI:reload();
  end
  if(self:isKeyPressed(OIS.KC_H)) then
    self:openHierarchyBrowser();
  end
  if(self:onFixedFPS('gui', self.settings.advanced.gui_poll_fps)) then
    local cmd = GUI:pollCommands();
    local ocmd = cmd;
    --print(ocmd);
    if(cmd:find(';')) then
      cmd = cmd:sub(1, cmd:rfind(';')); -- chop off scrambled shit if appears
      if(not (cmd == ";")) then
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

function Editor:openHierarchyBrowser()
  --obtain GOs from hierarchy
  local js = "showHierarchy([";
  local list = Hierarchy:debug();
  local gos = {};
  local pos = 0;
  local lastpos = 0;
  while pos < list:len() do
    pos = list:find('\n', lastpos);
    if(pos == nil) then
      break;
    end
    table.insert(gos, list:sub(lastpos, pos));
    lastpos = pos+1;
  end
  for i=1, #gos do
    local str = gos[i];
    gos[i] = {};
    local s = str:find('[', 1, true);
    local e = str:find(']', 1, true);
    gos[i].name = '"'..str:sub(s+1, e-1)..'"';
    local j = 0;
    local c = 0;
    while j do
      j = str:find('*', j+1);
      c = c+1;
    end
    gos[i].level = c-1;
    gos[i].command = "'Editor:hierarchySelect("..gos[i].name..");'";
   -- gos[i].command ="'print(\"ohai\");'";
    js = js..gos[i].name..','..gos[i].level..','..gos[i].command..',';
  end
  js = js:sub(1, js:len()-1);
  js = js..']);';
  --print(js);
  GUI:executeJS(js);
end

function Editor:hierarchySelect(goname)
  --self:showManipulator(goname);
end

function Editor:initialiseManipulator()
  local bbox = SAxisAlignedBox(SVector3(-0.5, -0.5, -0.5), SVector3(0.5, 0.5, 0.5)); -- unit sized
  -- initalize manipulator meshes
  self.internal.manipulator.go = Hierarchy:createGameObject("manipulator");
  local man = self.internal.manipulator.go;
  local obj = Hierarchy:createGameObject("manipulator-front");
  man:transform():setInheritScale(false);
  man:addChild(obj);
  local mo = SManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_unselected", SManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_TOP));
  mo:textureCoord(SVector3(0.5, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_TOP));
  mo:textureCoord(SVector3(0, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_BOTTOM));
  mo:textureCoord(SVector3(0, 0.5, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_BOTTOM));
  mo:textureCoord(SVector3(0.5, 0.5, 0));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-back");
  man:addChild(obj);
  local mo = SManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_unselected", SManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_TOP));
  mo:textureCoord(SVector3(0.5, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_BOTTOM));
  mo:textureCoord(SVector3(0, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_BOTTOM));
  mo:textureCoord(SVector3(0, 0.5, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_TOP));
  mo:textureCoord(SVector3(0.5, 0.5, 0));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-top");
  man:addChild(obj);
  mo = SManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_unselected", SManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_TOP));
  mo:textureCoord(SVector3(0.5, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_TOP));
  mo:textureCoord(SVector3(0, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_TOP));
  mo:textureCoord(SVector3(0, 0.5, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_TOP));
  mo:textureCoord(SVector3(0.5, 0.5, 0));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-bottom");
  man:addChild(obj);
  mo = SManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_unselected", SManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_BOTTOM));
  mo:textureCoord(SVector3(0.5, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_BOTTOM));
  mo:textureCoord(SVector3(0, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_BOTTOM));
  mo:textureCoord(SVector3(0, 0.5, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_BOTTOM));
  mo:textureCoord(SVector3(0.5, 0.5, 0));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-left");
  man:addChild(obj);
  mo = SManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_unselected", SManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_BOTTOM));
  mo:textureCoord(SVector3(0.5, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_BOTTOM));
  mo:textureCoord(SVector3(0, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_TOP));
  mo:textureCoord(SVector3(0, 0.5, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_TOP));
  mo:textureCoord(SVector3(0.5, 0.5, 0));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-right");
  man:addChild(obj);
  mo = SManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_unselected", SManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_BOTTOM));
  mo:textureCoord(SVector3(0.5, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_TOP));
  mo:textureCoord(SVector3(0, 0, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_TOP));
  mo:textureCoord(SVector3(0, 0.5, 0));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_BOTTOM));
  mo:textureCoord(SVector3(0.5, 0.5, 0));
  mo:quad(0,1,2,3);
  mo:finish();
  -- hide for now
  man:transform():setVisible(false, true);
  -- initialize manipulator state
  self.internal.manipulator.isSelected = false;
  self.internal.manipulator.scale = SVector3(1.2,1.2,1.2);
  self.internal.manipulator.isSideSelected = false;
end

function Editor:showManipulator(goname)
  local go = Hierarchy:find(goname);
  local bbox = go:getBoundingBox();
  go:addChild(self.internal.manipulator.go);
  self.internal.manipulator.isSelected = true;
  self.internal.manipulator.selection = go;
  self.internal.manipulator.go:transform():setPosition(bbox:getCenter());
  self.internal.manipulator.go:transform():setScale(bbox:getSize());
  self.internal.manipulator.go:transform():setVisible(true, true);
end

function Editor:selectManipulatorSide(goname)
  local str = "manipulator-";
  local side = goname:sub(str:len()+1);
  local go = Hierarchy:find(goname);
  if(self.internal.manipulator.currentSide) then
    if(self.internal.manipulator.currentSide == go) then -- 2 selects != deselect
      return;
    else
      self:deselectCurrentManipulatorSide();
    end
  end
  go:component("Mesh"):setMaterialName("Editor/manipulator_selected");
  self.internal.manipulator.currentSide = go;
  local normal = SVector3(0,0,0);
  if(side == "top") then
    normal = SVector3(0,1,0);
  elseif(side == "bottom") then
    normal = SVector3(0,-1,0);
  elseif(side == "left") then
    normal = SVector3(1, 0, 0);
  elseif(side == "right") then
    normal = SVector3(-1, 0, 0);
  elseif(side == "front") then
    normal = SVector3(0, 0, -1);
  elseif(side == "back") then
    normal = SVector3(0, 0, 1);
  end
  self.internal.manipulator.normal = normal;
end

function Editor:deselectCurrentManipulatorSide()
  self.internal.manipulator.currentSide:component("Mesh"):setMaterialName("Editor/manipulator_unselected");
  self.internal.manipulator.currentSide = nil;
  self.internal.manipulator.normal = nil;
end

function Editor:hideManipulator()
  local go = self.internal.manipulator.go;
  go:parent():removeChild(go);
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
