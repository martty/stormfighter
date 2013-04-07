--[[
  manipulator.lua

  Part of the editor that handles object selection, the display of a 'manipulator' object
    and the interactions with this manipulator
  modes: select, translate, rotate, scale

  Select: selects gameobjects with click, selects multiple gos with drag
  Translate: translates gameobject, can be constrained with the manipulator
  Rotate: rotates gameobject, can be constrained with the manipulator
  Scale: scales gameobject, can be constrained with the manipulator

  constraints:
  1D, along selected side's normal
  2D, along a plane, which normal is the selected side's normal
  unconstrained
--]]
function Manipulator:init(editor)
  self.editor = editor;
  -- initialise manipulator state
  self.isSelected = false;
  self.scale = SVector3(1.2,1.2,1.2);
  self.isSideSelected = false;

  self.mode = "select";
  self.translation_mode = "local"; -- translation can either be done by local axes or global axes (X,Y,Z)

  self.action = "none";

  self:findOrCreate();

  self.debugDraw = true;

  --add modeselect omnibar
  -- todo: onguiload
  --GUI:executeJS([[omnibar.addButton("translate-icon.png", "Editor:manipulator():setMode('translate');");]]);
end

function Manipulator:update()
  if(self.mode == "select") then
    if(self.editor:isMouseClicked() or self.editor:isMouseDragReleased()) then
      local ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
      local result = Graphics:closestExactRayQuery(ray);
      if(result.hitObject) then
        local go = result.hitObject;
        local goname = go:name();
        if(goname:find("manipulator-")) then -- we picked a manipulator
        else
          self:show(go);
          self.editor:inspector():setGameObject(go);
        end
      else
        self:hide();
      end
    end
    if(self.editor:isMouseDragged()) then
      -- show selection box & boxselect
    end
  elseif (self.mode == "translate") then
    if(self.editor:isMouseDragged() and self.isSelected) then
      if(self.currentSide) then -- restricted translate
        if(Input:isModifierDown(OIS.Modifier.Alt)) then -- 2D restrict
          self:translate2D();
        else
          self:translate1D();
        end
      end
    else -- clear
        self.action = "none";
    end
    self:checkForSideSelection();
  elseif (self.mode == "rotate") then
    if(self.editor:isMouseDragged() and self.isSelected) then
      self:rotate1D();
    else
      self.action = "none";
      self:checkForSideSelection();
    end
  elseif (self.mode == "scale") then
    if(self.editor:isMouseDragged() and self.isSelected) then
      self:scale1D();
    else
      self.action = "none";
      self:checkForSideSelection();
    end
  end
end

-- translate in the plane which is defined by the normal of the face you grabbed
-- PROGRESS: 100%

function Manipulator:translate2D()
  local origin = self.selection:transform().position;
  local normal = self.normal;
  if(self.translation_mode == "local") then
    normal = (self.selection:transform().orientation*self.normal):normalisedCopy();
  end
  if(not (self.action == "2D_translate")) then -- begin drag
    self.current = {};
    self.current.drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
    self.current.drag_begin_plane = SPlane(normal, origin);
    local intersection = Ogre.Math:intersects(self.current.drag_begin_ray, self.current.drag_begin_plane);
    if(intersection.first) then
      self.current.drag_begin_point = self.current.drag_begin_ray:getPoint(intersection.second);
      self.current.center_offset_to_begin = self.current.drag_begin_point - origin;
      self.action = "2D_translate";
    end
  else -- continue drag
    local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    local plane = SPlane(normal, origin);
    debugdrawplane(plane, 50, SColourValue.White, true);
    local intersection = Ogre.Math:intersects(drag_current_ray,plane);
    if (intersection.first) then
      self.selection:transform().position = drag_current_ray:getPoint(intersection.second) - self.current.center_offset_to_begin;
    end
  end
end

-- TODO: make this work better (make it view dependent)
-- Translate along the normal of the face you selected
-- PROGRESS: 60%
function Manipulator:translate1D()
  local rotated_normal = (self.selection:transform().orientation*self.normal):normalisedCopy();
  local origin = self.selection:transform().position;
  if(not (self.action == "1D_translate")) then -- begin drag
    self.current = {};
    self.current.drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
    self.current.plane = SPlane(rotated_normal, origin);
    local intersection = Ogre.Math:intersects(self.current.drag_begin_ray, self.current.plane);
    if (intersection.first) then
      self.current.drag_begin_point = self.current.drag_begin_ray:getPoint(intersection.second);
      self.current.center_offset_to_begin = self.current.drag_begin_point - origin;
      self.current.origin = origin;
      self.action = "1D_translate";
    end
  else -- continue drag
    local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    local plane = SPlane(rotated_normal, self.current.origin);
    if self.debugDraw then
      debugdrawplane(plane, 51, SColourValue.Red, true);
    end
    local intersection = Ogre.Math:intersects(drag_current_ray, plane);
    if (intersection) then
      local diff = drag_current_ray:getPoint(intersection.second) - self.current.center_offset_to_begin;
      if self.debugDraw then
        debugdrawvector(drag_current_ray:getPoint(intersection.second), self.current.origin, SColourValue.Green);
        debugdrawvector(self.current.center_offset_to_begin, self.current.origin, SColourValue.White);
        debugdrawvector(self.current.origin, SVector3(0,0,0), SColourValue.Blue);
      end
      local angle = self.normal:angleBetween(diff):valueDegrees();
      local direction = false;
      if(angle > 90) then
        direction = -1;
      else
        direction = 1;
      end
      self.selection:transform():move(self.normal * diff:length() * direction * Editor.settings.manipulator.translateFactor);
    end
  end
end

function Manipulator:translate1D_old()
  local alternate_dir_1 = SVector3(self.normal.y,self.normal.z,self.normal.x);
  local alternate_dir_2 = SVector3(self.normal.z,self.normal.x,self.normal.z);
  local plane_1_normal = self.normal:crossProduct(alternate_dir_1);
  local plane_2_normal = self.normal:crossProduct(alternate_dir_2);
  local rotated_normal = (self.selection:transform().orientation*self.normal):normalisedCopy();
  local origin = self.selection:transform().position;
  if(not (self.action == "1D_translate")) then -- begin drag
    self.current = {};
    self.current.drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
    self.current.drag_begin_plane_1 = SPlane(plane_1_normal, origin);
    self.current.drag_begin_plane_2 = SPlane(plane_2_normal, origin);
    local intersection = self:rayIntersectTwoPlanesNearestHit(self.current.drag_begin_ray, self.current.drag_begin_plane_1, self.current.drag_begin_plane_2);
    if(intersection) then
      self.current.drag_begin_point = self.current.drag_begin_ray:getPoint(intersection.second);
      self.current.center_offset_to_begin = self.current.drag_begin_point - origin;
      self.action = "1D_translate";
    end
  else -- continue drag
    local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    local plane_1 = SPlane(plane_1_normal, origin);
    local plane_2 = SPlane(plane_2_normal, origin);
    local plane_3 = SPlane(rotated_normal, origin);
    if self.debugDraw then
      debugdrawplane(plane_1, 51, SColourValue.Red, true);
      debugdrawplane(plane_2, 51, SColourValue.Blue, true);
      debugdrawplane(plane_3, 51, SColourValue.White, true);
    end
    local intersection = self:rayIntersectTwoPlanesNearestHit(drag_current_ray, plane_1, plane_2);
    if (intersection) then
      local diff = drag_current_ray:getPoint(intersection.second) - self.current.center_offset_to_begin;
      if self.debugDraw then
        debugdrawvector(drag_current_ray:getPoint(intersection.second), origin, SColourValue.Green);
        debugdrawvector(self.current.center_offset_to_begin, origin, SColourValue.White);
      end
      local angle = self.normal:angleBetween(diff):valueDegrees();
      local direction = false;
      if(angle > 90) then
        direction = -1;
      else
        direction = 1;
      end
      --self.selection:transform():move(self.normal * diff:length() * direction * Editor.settings.manipulator.translateFactor);
    end
  end
end

function Manipulator:rayIntersectTwoPlanesNearestHit(ray, plane_1, plane_2)
  local intersection_1 = Ogre.Math:intersects(ray, plane_1);
  local intersection_2 = Ogre.Math:intersects(ray, plane_2);
  local firstintersection = false
  if(intersection_1.first and intersection_2.first) then -- both planes got hit
    if(intersection_1.second < intersection_2.second) then -- 1 wins
      firstintersection = intersection_1;
    else -- 2 wins
      firstintersection = intersection_2;
    end
  elseif(intersection_1.first) then -- only 1 got hit
    firstintersection = intersection_1;
  elseif(intersection_2.first) then -- only 2 got hit
    firstintersection = intersection_2;
  end
  return firstintersection;
end

function Manipulator:rotate1D()
  local rotated_normal = (self.selection:transform().orientation*self.normal):normalisedCopy();
  local plane_offset = self.selection:transform().orientation*(SVector3(self.go:transform().scale)*self.normal*0.5);
  local origin = self.selection:transform().position + plane_offset;
  if(self.currentSide) then -- restricted rotate
    if(not (self.action == "1D_rotate")) then -- begin drag
      self.current = {};
      self.current.drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
      self.current.drag_begin_plane = SPlane(rotated_normal, origin);
      local intersection = Ogre.Math:intersects(self.current.drag_begin_ray, self.current.drag_begin_plane);
      if(intersection.first) then
        self.current.drag_begin_point = self.current.drag_begin_ray:getPoint(intersection.second);
        self.current.center_offset_to_begin = self.current.drag_begin_point - origin;
        self.current.delta_rotation = SQuaternion(SQuaternion.IDENTITY);
        self.action = "1D_rotate";
      end
    else -- continue drag
      local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
      local plane = SPlane(rotated_normal, origin);
      -- debug draw this planes
      --debugdrawplane(plane, 53, SColourValue.Red, true);
      local intersection = Ogre.Math:intersects(drag_current_ray,plane);
      if (intersection.first) then
        local center_offset_to_current = drag_current_ray:getPoint(intersection.second) - origin;
        --debugdrawvector(center_offset_to_current, origin, SColourValue.Blue);
        --debugdrawvector(rotated_normal*30, origin, SColourValue.White);
        local rotated_center_offset_to_begin = self.current.delta_rotation * self.current.center_offset_to_begin;
        --debugdrawvector(self.current.center_offset_to_begin, origin, SColourValue.White);
        --debugdrawvector(rotated_center_offset_to_begin, origin, SColourValue.Green);
        local rot = rotated_center_offset_to_begin:normalisedCopy():getRotationTo(center_offset_to_current:normalisedCopy(), rotated_normal)--*0.00001;
        if(true) then
          self.current.delta_rotation = rot * self.current.delta_rotation;
          self.selection:transform().orientation = rot* self.selection:transform().orientation;
        end
      end
    end
  end
end

function Manipulator:scale1D()
  local rotated_normal = (self.selection:transform().orientation*self.normal):normalisedCopy();
  local plane_offset = self.selection:transform().orientation*(SVector3(self.go:transform().scale)*self.normal*0.5);
  local origin = self.selection:transform().position + plane_offset;
  if(self.currentSide) then -- restricted rotate
    if(not (self.action == "1D_scale")) then -- begin drag
      self.current = {};
      self.current.drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
      self.current.drag_begin_plane = SPlane(rotated_normal, origin);
      local intersection = Ogre.Math:intersects(self.current.drag_begin_ray, self.current.drag_begin_plane);
      if(intersection.first) then
        self.current.drag_begin_point = self.current.drag_begin_ray:getPoint(intersection.second);
        self.current.center_offset_to_begin = self.current.drag_begin_point - origin;
        self.action = "1D_scale";
      end
    else -- continue drag
      local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
      local plane = SPlane(rotated_normal, origin);
      debugdrawplane(plane, 70, SColourValue.White, true);
      local intersection = Ogre.Math:intersects(drag_current_ray,plane);
      if (intersection.first) then
        local center_offset_to_current = drag_current_ray:getPoint(intersection.second) - origin;
        debugdrawvector(center_offset_to_current, origin, SColourValue.Blue);
        debugdrawvector(self.current.center_offset_to_begin, origin, SColourValue.Red);
        local diff = center_offset_to_current - self.current.center_offset_to_begin;
        local angle = center_offset_to_current:angleBetween(self.current.center_offset_to_begin):valueDegrees();
        local direction = false;
        if(angle > 90) then
          direction = -1;
        else
          direction = 1;
        end
        local delta_scale = rotated_normal * direction * center_offset_to_current:length() * self.editor.settings.manipulator.scaleFactor;
        self.selection:transform().scale = self.selection:transform().scale + delta_scale;
        local bbox = self.selection:getBoundingBox();
        self.go:transform().scale = bbox:getSize();
      end
    end
  end
end

function Manipulator:findOrCreate()
  local bbox = SAxisAlignedBox(SVector3(-0.5, -0.5, -0.5), SVector3(0.5, 0.5, 0.5)); -- unit sized
  -- initalize manipulator meshes
  self.go = Hierarchy:find("manipulator");
  if(self.go) then -- we already have a manipulator instance set up (we hope)
    return;
  end
  self.go = Hierarchy:createGameObject("manipulator"); -- create manipulator root go
  self.go:addTag("no-serialise-recursive");
  local man = self.go;
  local obj = Hierarchy:createGameObject("manipulator-front");
  man:transform():setInheritScale(false);
  man:addChild(obj);
  local mo = ManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_transparent", ManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_TOP));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_TOP));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_BOTTOM));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_BOTTOM));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-back");
  man:addChild(obj);
  local mo = ManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_transparent", ManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_TOP));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_BOTTOM));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_BOTTOM));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_TOP));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-top");
  man:addChild(obj);
  mo = ManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_transparent", ManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_TOP));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_TOP));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_TOP));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_TOP));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-bottom");
  man:addChild(obj);
  mo = ManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_transparent", ManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_BOTTOM));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_BOTTOM));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_BOTTOM));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_BOTTOM));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-left");
  man:addChild(obj);
  mo = ManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_transparent", ManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_BOTTOM));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_BOTTOM));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_TOP));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_TOP));
  mo:quad(0,1,2,3);
  mo:finish();
  obj = Hierarchy:createGameObject("manipulator-right");
  man:addChild(obj);
  mo = ManualObject:new(true);
  obj:addComponent(mo);
  mo:begin("Editor/manipulator_transparent", ManualObject.OT_TRIANGLE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_BOTTOM));
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_TOP));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_TOP));
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_BOTTOM));
  mo:quad(0,1,2,3);
  mo:finish();
  -- make edge lines
  obj = Hierarchy:createGameObject("manipulator-edges");
  man:addChild(obj);
  mo = ManualObject:new(true);
  obj:addComponent(mo);
  local edge_colour = SColourValue.Black;
  mo:begin("Editor/manipulator_edge", ManualObject.OT_LINE_LIST);
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_TOP));
  mo:colour(edge_colour);
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_TOP));
  mo:colour(edge_colour);
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_LEFT_BOTTOM));
  mo:colour(edge_colour);
  mo:position(bbox:getCorner(SAxisAlignedBox.NEAR_RIGHT_BOTTOM));
  mo:colour(edge_colour);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_TOP));
  mo:colour(edge_colour);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_RIGHT_BOTTOM));
  mo:colour(edge_colour);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_BOTTOM));
  mo:colour(edge_colour);
  mo:position(bbox:getCorner(SAxisAlignedBox.FAR_LEFT_TOP));
  mo:colour(edge_colour);
  -- front face
  mo:index(0);mo:index(1);
  mo:index(1);mo:index(2);
  mo:index(2);mo:index(3);
  mo:index(3);mo:index(0);
  -- back face
  mo:index(4);mo:index(5);
  mo:index(5);mo:index(6);
  mo:index(6);mo:index(7);
  mo:index(7);mo:index(4);
  -- top
  mo:index(7);mo:index(1);
  mo:index(1);mo:index(0);
  mo:index(0);mo:index(4);
  mo:index(4);mo:index(7);
  -- bottom
  mo:index(2);mo:index(6);
  mo:index(6);mo:index(5);
  mo:index(5);mo:index(3);
  mo:index(3);mo:index(2);
  -- left
  mo:index(1);mo:index(7);
  mo:index(7);mo:index(6);
  mo:index(6);mo:index(2);
  mo:index(2);mo:index(1);
  --right
  mo:index(4);mo:index(0);
  mo:index(0);mo:index(3);
  mo:index(3);mo:index(5);
  mo:index(5);mo:index(4);
  mo:finish();
  -- hide for now
  man:transform():setVisible(false, true);
end

function Manipulator:show(go)
  local bbox = go:getBoundingBox();
  go:addChild(self.go);
  self.isSelected = true;
  self.selection = go;
  if(bbox:isNull()) then
    bbox = SAxisAlignedBox(SVector3(-0.5, -0.5, -0.5), SVector3(0.5, 0.5, 0.5)); -- unit sized
  end
  self.go:transform().position = (bbox:getCenter());
  self.go:transform().scale = (bbox:getSize());
  self.go:transform():setVisible(true, true);
end

function Manipulator:checkForSideSelection()
  if(self.editor:isMouseMoved() and self.isSelected) then
    local ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    local result = Graphics:closestExactRayQuery(ray);
    if(result.hitObject) then
      local goname = result.hitObject:name();
      if(goname:find("manipulator-") and not (goname == "manipulator-edges")) then -- we picked a manipulator
        self:selectSide(goname);
      end
    end
  end
end

function Manipulator:selectSide(goname)
  local str = "manipulator-";
  local side = goname:sub(str:len()+1);
  local go = Hierarchy:find(goname);
  if(self.currentSide) then
    if(self.currentSide == go) then -- 2 selects != deselect
      return;
    else
      self:deselectCurrentSide();
    end
  end
  go:component("ManualObject"):setMaterialName("Editor/manipulator_selected");
  self.currentSide = go;
  local normal = SVector3(0,0,0);
  if(side == "top") then
    normal = SVector3(0,1,0);
  elseif(side == "bottom") then
    normal = SVector3(0,-1,0);
  elseif(side == "left") then
    normal = SVector3(-1, 0, 0);
  elseif(side == "right") then
    normal = SVector3(1, 0, 0);
  elseif(side == "front") then
    normal = SVector3(0, 0, 1);
  elseif(side == "back") then
    normal = SVector3(0, 0, -1);
  end
  self.normal = normal;
end

function Manipulator:deselectCurrentSide()
  self.currentSide:component("ManualObject"):setMaterialName("Editor/manipulator_transparent");
  self.currentSide = nil;
  self.normal = nil;
end

function Manipulator:hide()
  local go = self.go;
  self.isSelected = false;
  self.selection = nil;
  if(self.currentSide) then
    self:deselectCurrentSide();
  end
  go:reParent();
  go:transform().scale = SVector3(0,0,0);
  go:transform():setVisible(false, true);
end

function Manipulator:setMode(mode)
  print('manipulator mode is now '.. mode);
  self.mode = mode;
  if(self.currentSide) then
    self:deselectCurrentSide();
  end
end
