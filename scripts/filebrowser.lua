--[[
  filebrowser.lua

  Part of the editor that interacts with the UI widget FileBrowser
--]]

function FileBrowser:init()
  self.cachedCallData = '';
  self.currentDir = 'media/';
end

-- dispatch endpoint
function FileBrowser:receive(calldata)
  local cmd = calldata.meta.command;
  if (cmd == "request-subdir") then
    self:loadsubdir(calldata.data);
  end
end

-- updates UI representation to match engine data
function FileBrowser:update()
  local dirdata = Resources:readDirectoryContentsJSON(self.currentDir);
  local calldata = '{"meta" : {"callee" : "filebrowser", "command" : "update"}, "data" : '..dirdata..'}';
  if(self.cachedCallData ~= calldata) then
    Editor:send(calldata);
    self.cachedCallData = calldata;
  end
end

function FileBrowser:loadsubdir(path)
  local dirdata = Resources:readDirectoryContentsJSON(path);
  local calldata = '{"meta" : {"callee" : "filebrowser", "command" : "load-subdir"}, "data" : {"path": "'..path..'", "content" :'..dirdata..'}}';
  print(calldata);
  Editor:send(calldata);
end
