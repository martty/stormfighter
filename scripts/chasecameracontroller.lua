-- chase camera controller (ccc)
local ccc = {};

ccc.meta = {};
ccc.meta.type = "ChaseCameraController";

ccc.position_offset = SVector3(0, 15, 15);
ccc.target_offset = SVector3(0,3,0);

ccc.target = "";

ccc.moveSpeed = 0.1;

function ccc:onInit()
  print("ccc: init");
  if(not self:object():hasComponent("Camera")) then
    error('no camera!');
  end
  self.camera_ = self:object():component("Camera");
  self:object():transform():setFixedYawAxis(true, SVector3(0,1,0)); -- hogy ne forogjon a kamera ki a Z tengely körül
  print("ccc: inited");
end

function ccc:onUpdate()
  if(self:application():input():isKeyDown(OIS.KC_P)) then self.camera_:setPolygonMode(Ogre.PM_WIREFRAME); end
  if(self:application():input():isKeyDown(OIS.KC_O)) then self.camera_:setPolygonMode(Ogre.PM_SOLID); end
  if (self.target) then -- ha van követendõ célpont
    local target_pos = self.target:transform().position; -- célpont pozíció
    local rotated_position_offset = self.yawtarget:transform().orientation * self.position_offset; -- számítsuk ki az elfordulásnak megfelelõ kamera offszetet
    local destination_pos = target_pos + rotated_position_offset; -- ide kell vinnünk a kamerát
    local delta = (destination_pos - self:object():transform().position)*self.moveSpeed; -- interpolálunk
    self:object():transform():move(delta);

    local rotated_target_offset = self.yawtarget:transform().orientation * self.target_offset;
    self:object():transform():lookAt(rotated_target_offset + target_pos); -- a céltárgy + elforgatott target_offset-et nézzük
  end
end

return ccc;
