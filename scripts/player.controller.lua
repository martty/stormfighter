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
    local intersection = Ogre.Math:intersects(ray, plane); -- f�legyenes - s�k metsz�spont keres�s
    if (intersection.first) then -- ha ez true, akkor volt metsz�spont
      local destination = ray:getPoint(intersection.second); -- ez megadja a metsz�spont koordin�t�it
      destination.y = self:object():transform().position.y;
      local deltapos = destination - self:object():transform().position;
      -- interpol�ci�
      self:object():transform().position = deltapos:normalisedCopy()*self.moveSpeed + self:object():transform().position;
      local forward = self:object():transform().orientation * SVector3(0,0,-1); -- egy el�re vektor
      local rot = forward:getRotationTo(deltapos) * self.rotSpeed; -- kisz�moljuk a sz�ks�ges forgat�st
      self:object():transform():rotate(rot);
    end
    -- mozg� anim
    self:object():component("Mesh"):addAnimationTime("Walk", Application:deltaTime());
  else

  end
end

return plc;

