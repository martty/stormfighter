-- player controller (plc)
local plc = {};

plc.meta = {};
plc.meta.type = "LocalPlayerController";

plc.moveSpeed = 0.2;
plc.rotSpeed = 0.001;

function plc:onInit()
  self:object():component("Mesh"):setAnimationStateEnabled("Walk", true);
end

function plc:onUpdate()
  if(Input:isButtonDown(OIS.MB_Left)) then
    local ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
    local normal = SVector3(0,1,0);
    local origin = SVector3(0,0,0);
    local plane = SPlane(normal, origin);
    local intersection = Ogre.Math:intersects(ray, plane); -- félegyenes - sík metszéspont keresés
    if (intersection.first) then -- ha ez true, akkor volt metszéspont
      local destination = ray:getPoint(intersection.second); -- ez megadja a metszéspont koordinátáit
      destination.y = self:object():transform().position.y;
      local deltapos = destination - self:object():transform().position;
      -- interpoláció
      self:object():transform().position = deltapos:normalisedCopy()*self.moveSpeed + self:object():transform().position;
      local forward = self:object():transform().orientation * SVector3(0,0,-1); -- egy elõre vektor
      local rot = forward:getRotationTo(deltapos) * self.rotSpeed; -- kiszámoljuk a szükséges forgatást
      self:object():transform():rotate(rot);
    end
    -- mozgó anim
    self:object():component("Mesh"):addAnimationTime("Walk", Application:deltaTime());
  else

  end
end

return plc;

