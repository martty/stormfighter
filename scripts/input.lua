Input.enabled = true;

Input.keydown = {};

Input.mouse = {};
Input.mouse.left = false;
Input.mouse.right = false;
Input.mouse.isClicking = false;
Input.mouse.isDragged = false;
Input.mouse.isDraggedRight = false;
Input.mouse.isMoved = false;
Input.mouse.lastPosition = SVector2(0,0);
Input.mouse.downPosition = SVector2(0,0);

-- do Input enable control
do
  local axisAbs = Input.axisAbsolute;
  function Input:axisAbsolute(axis)
    if(self.enabled) then
      return axisAbs(Input,axis);
    else
      return 0;
    end
  end

  local keydown = Input.isKeyDown;
  function Input:isKeyDown(key)
    if(self.enabled) then
      return keydown(Input,key);
    else
      return false;
    end
  end
end

function Input:addKey(keycode)
  --table.insert(self.keys, keycode);
  self.keydown[keycode]= 0;
end

function Input:hasKey(keycode)
  if self.keydown[keycode] then -- 0 is not false, it is true
    return true;
  else
    return false;
  end
end

function Input:handleKeyPress()
  for index,val in pairs(self.keydown) do
    if(not Input:isKeyDown(val)) then
      self.keydown[val] = 0;
    elseif(Input:isKeyDown(val) and self.keydown[val] == 1) then
      self.keydown[val] = 2;
    end
  end
end

function Input:isKeyPressed(keycode)
  if not self:hasKey(keycode) then -- rather inefficient
    self:addKey(keycode);
  end
  if(Input:isKeyDown(keycode) and self.keydown[keycode] < 2) then
    self.keydown[keycode] = 1;
    return true;
  end
  return false;
end

function Input:handleMouse()
  -- click: buttonDown(true) -> no buttonDown(false)
  -- drag: buttonDown(false) -> movement (true) -> no buttonDown(false)
  -- move: no buttonDown + movement
  local x,y = Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y);
  local pos = SVector2(x,y);
  if(Input:isButtonDown(OIS.MB_Left)) then -- left mb down
    self.mouse.isMoved = false;
    if(not self.mouse.left) then -- just pressed mb
      self.mouse.left = true;
      self.mouse.downPosition = pos;
    else -- has been pressing it : either click or drag
      if(not self.mouse.downPosition:positionEquals(pos)) then -- drag
        self.mouse.isDragged = true;
      else -- might be a click or a drag
      end
    end
  elseif(Input:isButtonDown(OIS.MB_Right)) then -- right mb down
    self.mouse.isMoved = false;
  elseif(self.mouse.left) then -- left mb release
    if(self.mouse.isDragged) then -- drag release
      self.mouse.isDragReleased = true;
      self.mouse.isDragged = false;
    else -- click
      self.mouse.isClicked = true;
    end
    self.mouse.left = false;
  elseif(self.mouse.right) then -- right mb release
  else -- no mb activity, clear + check for movement
    self.mouse.isClicked = false;
    self.mouse.isDragged = false;
    self.mouse.isDragReleased = false;
    self.mouse.isMoved = not pos:positionEquals(self.mouse.lastPosition);
  end
  self.mouse.lastPosition = pos;
end

function Input:isMouseDragged()
  local drag_start = self.mouse.downPosition;
  local drag_end = SVector2(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
  if(self.mouse.isDragged) then
    return true, drag_start, drag_end;
  end
  return false;
end

function Input:isMouseDragReleased()
  local drag_start = self.mouse.downPosition;
  local drag_end = SVector2(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
  if(self.mouse.isDragReleased) then
    return true, drag_start, drag_end;
  else
    return false;
  end
end

function Input:isMouseClicked()
  if(self.mouse.isClicked) then
    return true;
  else
    return false;
  end
end

function Input:isMouseMoved()
  if(self.mouse.isMoved) then
    return true;
  else
    return false;
  end
end

function Input:update()
  self:handleKeyPress();
  self:handleMouse();
end

function Input:setEnabled(en)
  self.enabled = en;
end
