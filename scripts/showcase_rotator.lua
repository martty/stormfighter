-- free camera controller (fcc)
local fcc = {};

fcc.meta = {};
fcc.meta.type = "Showcase/Rotator";
fcc.meta.group = "User"; -- default

function fcc:onInit()
end

function fcc:onUpdate()
  self:object():transform():yaw(to_rad(SDegree:new_local(4*self:application():deltaTime())));
end

return fcc;
