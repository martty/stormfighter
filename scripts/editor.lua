Editor = {};

Editor.click = false;
Editor.keys = {};
Editor.keydown = {};

Editor.settings = {};
Editor.settings.advanced = {};
Editor.settings.advanced.gui_poll_fps = 30;

Editor.internal = {};
Editor.internal.counters = {}; -- timing

Editor.internal.counters.gui = 0;

function Editor:init()
  -- show omnibar
  GUI:executeJS("showOmnibar();");
  self:addKey(OIS.KC_R);
  self:addKey(OIS.KC_H);
  self:addKey(OIS.KC_P);
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
  self:advanceCounters();
  if(Input:isButtonDown(OIS.MB_Left) and not self.click) then
    self.click = true;
    ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    vec = SVector3(0,0,10);
    from = ray:getOrigin();
    revdir = SVector3(ray:getDirection())*1;
    to = SVector3(ray:getDirection())*10000 + ray:getOrigin();
    result = Graphics:closestExactRayQuery(SRay(ray:getOrigin(), revdir));
    if(result.hitObject) then
      print(result.hitObject:name());
      GUI:executeJS("showInspector('"..result.hitObject:name().."');");
    end
    print('click');
  end
  if(not Input:isButtonDown(OIS.MB_Left)) then
    self.click = false;
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
  print('selecting..'..goname);
end
