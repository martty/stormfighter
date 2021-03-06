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

  self.translateFactor1D = 0.5;
  self.translateFactorFree = 1;
  self.rotateFactor2D = 1;
  self.scaleFactor1D = 0.1;
  self.scaleFactor2D = 0.0001;
  self.scaleFactor3D = 0.001;
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
          self.editor:select(go);
        end
      else
        self.editor:deselect();
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
      else
        self:translateFree();
      end
    else -- clear
        self.action = "none";
    end
    self:checkForSideSelection();
  elseif (self.mode == "rotate") then
    if(self.editor:isMouseDragged() and self.isSelected) then
      if(self.currentSide) then -- restricted translate
        self:rotate1D();
      end
    else
      self.action = "none";
      self:checkForSideSelection();
    end
  elseif (self.mode == "scale") then
    if(self.editor:isMouseDragged() and self.isSelected) then
      if(self.currentSide) then -- restricted scale
        if(Input:isModifierDown(OIS.Modifier.Alt)) then -- 2D restrict
          self:scale2D();
        else
          self:scale1D();
        end
      else
        self:scale3D();
      end
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
  if(not (self.action == "translate2D")) then -- begin drag
    self.current = {};
    self.current.drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
    self.current.drag_begin_plane = SPlane(normal, origin);
    local intersection = Ogre.Math:intersects(self.current.drag_begin_ray, self.current.drag_begin_plane);
    if(intersection.first) then
      self.current.drag_begin_point = self.current.drag_begin_ray:getPoint(intersection.second);
      self.current.center_offset_to_begin = self.current.drag_begin_point - origin;
      self.action = "translate2D";
    end
  else -- continue drag
    local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    local plane = SPlane(normal, origin);
    debugdrawplane(plane, self.go:transform().scale:dotProduct(self.normal), SColourValue.White, true);
    local intersection = Ogre.Math:intersects(drag_current_ray,plane);
    if (intersection.first) then
      self.selection:transform().position = drag_current_ray:getPoint(intersection.second) - self.current.center_offset_to_begin;
    end
  end
end

-- 1D Translate
-- Translate along the normal of the face you selected
-- Basically creates translates along a normal based on the length you drag in camera space
function Manipulator:translate1D()
  -- note: camera looks down -z
  -- get picked manipulator face normal in world space
  local normal = (self.selection:transform().orientation*self.normal):normalisedCopy();
  -- get camera normal in world space
  local camera_normal = self.editor.cameraGO:transform().orientation * SVector3(0,0,-1);
  -- get selection origin
  local origin = self.selection:transform().position;
  -- create plane on which we will work (intersections)
  local workplane = SPlane(camera_normal, origin);
  -- get normal vector scale
  local scale = self.go:transform().scale:dotProduct(self.normal);
  -- draw axis of translation to better visualise transform
  -- TODO: debugdraw is not appropriate?
  debugdrawvector(normal*scale*2, origin-normal*scale, SColourValue.White);

  if(not (self.action == "translate1D")) then -- begin drag
    self.current = {};
    -- make a ray from mouse coordinates through active camera
    local drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
    -- save workplane
    self.current.plane = workplane;
    -- intersect ray with workplane
    local intersection = Ogre.Math:intersects(drag_begin_ray, workplane);
    if (intersection.first) then
      -- save begin point
      self.current.drag_begin_point = drag_begin_ray:getPoint(intersection.second);
      self.action = "translate1D";
    end
  else -- continue drag
    -- make a ray from mouse coordinates through active camera
    local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    -- intersect with saved plane (because new work plane might be different)
    -- using current workplane results in a less snappy version (but also works)
    local intersection = Ogre.Math:intersects(drag_current_ray, self.current.plane);
    if (intersection) then
      local current_point = drag_current_ray:getPoint(intersection.second);
      -- calculate difference from last point
      local diff = current_point - self.current.drag_begin_point;
      -- project difference onto normal
      local delta_amount = normal:dotProduct(diff);
      -- scale normal by difference
      local delta_vec = normal * delta_amount * self.translateFactor1D;
      -- move object by difference
      self.selection:transform():move(delta_vec);
      -- save new point as starting point
      self.current.drag_begin_point = current_point;
    end
  end
end

-- Free Translate
-- Translate on the plane defined by (camera normal, origin)
function Manipulator:translateFree()
  -- note: camera looks down -z
  -- get camera normal in world space
  local camera_normal = self.editor.cameraGO:transform().orientation * SVector3(0,0,-1);
  -- get selection origin
  local origin = self.selection:transform().position;
  -- create plane on which we will work (intersections)
  local workplane = SPlane(camera_normal, origin);

  if(not (self.action == "translateFree")) then -- begin drag
    self.current = {};
    -- make a ray from mouse coordinates through active camera
    local drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
    -- intersect ray with workplane
    local intersection = Ogre.Math:intersects(drag_begin_ray, workplane);
    if (intersection.first) then
      -- save begin point
      self.current.drag_begin_point = drag_begin_ray:getPoint(intersection.second);
      self.action = "translateFree";
    end
  else -- continue drag
    -- make a ray from mouse coordinates through active camera
    local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    -- intersect with current workplane (doesn't change)
    local intersection = Ogre.Math:intersects(drag_current_ray, workplane);
    if (intersection) then
      local current_point = drag_current_ray:getPoint(intersection.second);
      -- calculate difference from last point
      local diff = current_point - self.current.drag_begin_point;
      -- scale difference by a factor
      local delta_vec = diff * self.translateFactorFree;
      -- move object by difference
      self.selection:transform():move(delta_vec);
      -- save new point as starting point
      self.current.drag_begin_point = current_point;
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
    if(not (self.action == "rotate1D")) then -- begin drag
      self.current = {};
      self.current.drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
      self.current.drag_begin_plane = SPlane(rotated_normal, origin);
      local intersection = Ogre.Math:intersects(self.current.drag_begin_ray, self.current.drag_begin_plane);
      if(intersection.first) then
        self.current.drag_begin_point = self.current.drag_begin_ray:getPoint(intersection.second);
        self.current.center_offset_to_begin = self.current.drag_begin_point - origin;
        self.current.delta_rotation = SQuaternion(SQuaternion.IDENTITY);
        self.action = "rotate1D";
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

-- 1D Scale
-- Scales the object along the selected face's normal
function Manipulator:scale1D()
  -- note: camera looks down -z
  -- get picked manipulator face normal in world space
  local normal = (self.selection:transform().orientation*self.normal):normalisedCopy();
  -- get camera normal in world space
  local camera_normal = self.editor.cameraGO:transform().orientation * SVector3(0,0,-1);
  -- get selection origin
  local origin = self.selection:transform().position;
  -- create plane on which we will work (intersections)
  local workplane = SPlane(camera_normal, origin);
  -- get normal vector scale
  local scale = self.go:transform().scale:dotProduct(self.normal);
  -- draw axis of translation to better visualise transform
  -- TODO: debugdraw is not appropriate?
  debugdrawvector(normal*scale*2, origin-normal*scale, SColourValue.White);

  if(not (self.action == "scale1D")) then -- begin drag
    self.current = {};
    -- make a ray from mouse coordinates through active camera
    local drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
    -- save workplane
    self.current.plane = workplane;
    -- intersect ray with workplane
    local intersection = Ogre.Math:intersects(drag_begin_ray, workplane);
    if (intersection.first) then
      -- save begin point
      self.current.drag_begin_point = drag_begin_ray:getPoint(intersection.second);
      self.action = "scale1D";
    end
  else -- continue drag
    -- make a ray from mouse coordinates through active camera
    local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    -- intersect with saved plane (because new work plane might be different)
    -- using current workplane results in a less snappy version (but also works)
    local intersection = Ogre.Math:intersects(drag_current_ray, self.current.plane);
    if (intersection) then
      local current_point = drag_current_ray:getPoint(intersection.second);
      -- calculate difference from last point
      local diff = current_point - self.current.drag_begin_point;
      -- project difference onto normal
      local delta_amount = normal:dotProduct(diff);
      -- scale normal by difference, use object-space normal!
      local delta_vec = self.normal * delta_amount;
      -- scale object by difference
      self.selection:transform().scale = self.selection:transform().scale + delta_vec * self.scaleFactor1D;
      -- also scale manipulator
      self:rescale();
      -- save new point as starting point
      self.current.drag_begin_point = current_point;
    end
  end
end

function Manipulator:scale2D()
  -- note: camera looks down -z
  -- get picked manipulator face normal in world space
  local normal = (self.selection:transform().orientation*self.normal):normalisedCopy();
  -- get camera normal in world space
  local camera_normal = self.editor.cameraGO:transform().orientation * SVector3(0,0,-1);
  -- get selection origin
  local origin = self.selection:transform().position;
  -- create plane on which we will work (intersections)
  local workplane = SPlane(camera_normal, origin);

  if(not (self.action == "scale2D")) then -- begin drag
    self.current = {};
    -- make a ray from mouse coordinates through active camera
    local drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
    -- intersect ray with workplane
    local intersection = Ogre.Math:intersects(drag_begin_ray, workplane);
    if (intersection.first) then
      -- save begin point
      self.current.drag_begin_point = drag_begin_ray:getPoint(intersection.second);
      self.action = "scale2D";
    end
  else -- continue drag
    -- make a ray from mouse coordinates through active camera
    local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    -- intersect with workplane
    local intersection = Ogre.Math:intersects(drag_current_ray, workplane);
    if (intersection) then
      local current_point = drag_current_ray:getPoint(intersection.second);
      -- calculate difference from last point
      local diff = current_point - self.current.drag_begin_point;
      -- from origin to start point
      local to_start = current_point-origin;
      -- make dot product
      local dot = to_start:dotProduct(diff);
      -- determine dot product sign
      local sign = dot>0 and 1 or dot<0 and -1 or 0;
      -- determine the axes which need to be modified
      -- + boolean to number conversion
      local dx = (self.normal:dotProduct(SVector3.UNIT_X) == 0) and 1 or 0;
      local dy = (self.normal:dotProduct(SVector3.UNIT_Y) == 0) and 1 or 0;
      local dz = (self.normal:dotProduct(SVector3.UNIT_Z) == 0) and 1 or 0;
      -- project difference onto axes
      local dtx = SVector3(dx,0,0):dotProduct(diff);
      local dty = SVector3(0,dy,0):dotProduct(diff);
      local dtz = SVector3(0,0,dz):dotProduct(diff);
      -- construct delta vector out of individual components
      local delta_vec = SVector3(dx,dy,dz)*dot;--SVector3(dtx,dty,dtz);
      -- scale object by difference
      self.selection:transform().scale = self.selection:transform().scale + delta_vec * self.scaleFactor2D;
      -- also scale manipulator
      self:rescale();
      -- save new point as starting point
      self.current.drag_begin_point = current_point;
    end
  end
end

-- 3D Scale
-- Scale all three axes by drag amount
function Manipulator:scale3D()
  -- note: camera looks down -z
  -- get camera normal in world space
  local camera_normal = self.editor.cameraGO:transform().orientation * SVector3(0,0,-1);
  -- get selection origin
  local origin = self.selection:transform().position;
  -- create plane on which we will work (intersections)
  local workplane = SPlane(camera_normal, origin);

  if(not (self.action == "scale3D")) then -- begin drag
    self.current = {};
    -- make a ray from mouse coordinates through active camera
    local drag_begin_ray = Graphics:activeCameraToViewportRay(self.editor.internal.mouse.downPosition.x, self.editor.internal.mouse.downPosition.y);
    -- intersect ray with workplane
    local intersection = Ogre.Math:intersects(drag_begin_ray, workplane);
    if (intersection.first) then
      -- save begin point
      self.current.drag_begin_point = drag_begin_ray:getPoint(intersection.second);
      self.action = "scale3D";
    end
  else -- continue drag
    -- make a ray from mouse coordinates through active camera
    local drag_current_ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    -- intersect with current workplane (doesn't change)
    local intersection = Ogre.Math:intersects(drag_current_ray, workplane);
    if (intersection) then
      local current_point = drag_current_ray:getPoint(intersection.second);
      -- calculate difference from last point
      local diff = current_point - self.current.drag_begin_point;
      -- from origin to start point
      local to_start = self.current.drag_begin_point-origin;
      -- scale difference by a factor
      local delta_vec = SVector3(1,1,1) * to_start:dotProduct(diff) * self.scaleFactor3D;
      -- scale object uniformly by difference
      self.selection:transform().scale = self.selection:transform().scale + delta_vec;
      -- rescale manipulator
      self:rescale();
      -- save new point as starting point
      self.current.drag_begin_point = current_point;
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

function Manipulator:show(selection)
  selection:addChild(self.go);
  self.isSelected = true;
  self.selection = selection;
  self.go:transform():setVisible(true, true);
  local bbox = self:rescale();
  self.go:transform().position = bbox:getCenter();
end

function Manipulator:rescale()
  local bbox = self.selection:getBoundingBox();
  if(bbox:isNull()) then
    bbox = SAxisAlignedBox(SVector3(-0.5, -0.5, -0.5), SVector3(0.5, 0.5, 0.5)); -- unit sized
  end
  self.go:transform().scale = bbox:getSize();
  return bbox;
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
    else
      self:deselectCurrentSide();
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
  if(self.currentSide) then
    self.currentSide:component("ManualObject"):setMaterialName("Editor/manipulator_transparent");
    self.currentSide = nil;
    self.normal = nil;
  end
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
