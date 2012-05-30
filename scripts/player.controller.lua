-- player controller (plc)
local plc = {};

plc.meta = {};
plc.meta.type = "LocalPlayerController";

plc.moveSpeed = 1;
plc.rotSpeed = 0.0001;

function plc:onInit()
  self.low:component("Mesh"):setAnimationStateEnabled("Walk", true);
  self.cuboid = Hierarchy:createGameObject("cub");
  self.cuboid:addComponent(Primitive:new(Primitive.CUBE));
  self.cuboid:transform().scale = SVector3(0.01,0.01,0.01);
  self.cuboid:transform().position = self:object():transform().position + SVector3(0, 40, 0);
end

function plc:onUpdate()
  if(Input:isKeyDown(OIS.KC_R)) then
    dofile('scripts/player.controller.lua');
  end
  if(Input:isButtonDown(OIS.MB_Left)) then
    --intersects, destination = self:rayCastAgainstPlane();
    intersects, destination = self:rayCastAgainstWorld();
    if(intersects) then
      local pos = self:object():transform().position;
      local deltapos = destination - self:object():transform().position;
      --if(deltapos:length() < 10) then return end
      local deltaxz = SVector3(deltapos);
      deltaxz.y = 0;

      local terrainNormal = World:getNormalAt(pos);
      local terrainHeight = World:getHeightAt(pos);

      -- interpoláció
      self:object():transform().position = deltapos:normalisedCopy()*self.moveSpeed + self:object():transform().position;
      self:object():transform().position.y = terrainHeight;
      local plane = SPlane(SVector3(0,1,0), destination);
      --debugdrawplane(plane, 8000, SColourValue.Blue, true);
      local forward = self.low:transform().orientation * SVector3(0,0,-1); -- egy elõre vektor
      forward.y = 0;
      local up = self:object():transform().orientation * SVector3(0,1,0); -- egy fel vektor
      local rot = forward:getRotationTo(deltaxz) * self.rotSpeed; -- kiszámoljuk a szükséges forgatást
      --self:object():transform():rotate(rot);

      --print(terrainNormal);
      local currentOrientation = self:object():transform().orientation;
      debugdrawvector(terrainNormal*100, destination, SColourValue.Red);
      --self.cuboid:transform().position = destination + SVector3(0,00,0);
      --debugdrawvector(up*100, pos, SColourValue.Blue);
      --debugdrawvector(forward*100, pos, SColourValue.Green);
      local uprot = up:getRotationTo(terrainNormal);
      local uprotlen = uprot:normalise();
      local uprotforce = clamp(uprotlen, 0, 0.1);

      --self:object():transform().orientation = uprot;
      --self:object():transform():rotate(rot);
      local delta = SQuaternion:Slerp(0.1, currentOrientation, currentOrientation*uprot, true);
      --self:object():transform():rotate(uprot);
      self:object():transform().orientation = delta;
      self.low:transform():rotate(rot);
--[[      local currentOrientation = self:object():transform().orientation;
      local localY = currentOrientation:yAxis();

      local weight = 0.10;  -- Weight of the new normal
      local newNormal = localY * ( 1 - weight ) + terrainNormal * weight;

      inclinationAngle = math.acos(localY:dotProduct(newNormal));
      if(inclinationAngle ~= 0.0) then
        inclinationAxis = ( localY:crossProduct( newNormal) ):normalisedCopy();
        inclination = SQuaternion(SRadian(inclinationAngle), inclinationAxis);
        -- Can't just call rotate, have to multiply inclination first or things get a little crazy
        -- sceneNode->rotate(inclination);
        self:object():transform().orientation =  inclination * currentOrientation;
      end
      --]]
      -- mozgó anim
      self.low:component("Mesh"):addAnimationTime("Walk", Application:deltaTime()*plc.moveSpeed);
    end
  else

  end
end

function plc:rayCastAgainstPlane()
  local ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
  local normal = SVector3(0,1,0);
  local origin = SVector3(0,0,0);
  local plane = SPlane(normal, origin);
  local intersection = Ogre.Math:intersects(ray, plane); -- félegyenes - sík metszéspont keresés
  if (intersection.first) then -- ha ez true, akkor volt metszéspont
    local destination = ray:getPoint(intersection.second); -- ez megadja a metszéspont koordinátáit
    destination.y = self:object():transform().position.y;
  end
  return intersection.first, destination;
end

function plc:rayCastAgainstWorld()
  local ray = Graphics:activeCameraToViewportRay(Input:axisAbsolute(Input.X), Input:axisAbsolute(Input.Y));
  local hit, position = World:rayQuery(ray, 0);
  return hit, position;
end

return plc;

