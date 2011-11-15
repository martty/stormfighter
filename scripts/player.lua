-- free camera controller (fcc)
local player = {};

player.meta = {};
player.meta.type = "Player";
player.meta.group = "User"; -- default

function player:onInit()
  self.currentpr = self:createProj();
  self.timeoutcntr = 0;
  self.ready = true;
  self.timeout = 1.5;
end

function player:onUpdate()
  -- move pad
  if(self.leftKey and Input:isKeyDown(self.leftKey)) then
    self.currentpr:transform():move(SVector3(0,0,1));
  end
  if(self.rightKey and Input:isKeyDown(self.rightKey)) then
    self.currentpr:transform():move(SVector3(0,0,-1));
  end
  -- handle fire & reload
  if(self.fireKey and Input:isKeyDown(self.fireKey) and self.ready) then
    self.currentpr:component("bombarder").player = self;
    self.currentpr:component("RigidBody"):add();
    self.timeoutcntr = 0;
    self.ready = false;
  end

  if(not self.ready) then
    if(self.timeoutcntr < self.timeout)then
      self.timeoutcntr = self.timeoutcntr + Application:deltaTime();
    else
      self.ready = true;
      print("CREATING NEW");
      self.currentpr = self:createProj();
    end
  end
end

function player:createProj()
htest = System:loadComponent('scripts/bombarder.lua');
local projectile = Hierarchy:createGameObject("projectile");
projectile:transform().scale = SVector3(0.05, 0.05, 0.05);
projectile:addComponent(Primitive:new(Primitive.CUBE));
projectile:component("Primitive"):setMaterialName("Torqube/FallCubes");
projectile:transform().scale = SVector3(0.1, 0.1, 0.1);
projectile:transform().position = SVector3(0,0,0);
projectile:addComponent(BoxCollider:new());
projectile:addComponent(RigidBody:new(1,false));
projectile:addComponent(htest);
projectile:transform().position = self:object():transform().position;
--projectile:component("RigidBody"):setKinematic(true);
return projectile;
end

return player;
