-- free camera controller (fcc)
local fcc = {};

fcc.meta = {};
fcc.meta.type = "bombarder";
fcc.meta.group = "User"; -- default

function fcc:onInit()
  self.rb = self:object():component("RigidBody");
  self:object():transform():setInheritScale(false);
  self.rb:setDamping(0.3, 0.3);
  self.set = false;
  self.speed = 50;
  self.rb:setGravity(SVector3(0,0,0));
  self.rb:setDisableDeactivation(true);
  if(not self.player) then
    self.player = {};
    --self.player.name = "noone";
    self.player.dir = SVector3(0,0,0);
  end
end

function fcc:setPlayer(player)
  self.player = player;
end

function fcc:onUpdate()
  if(not self.set) then
    self.rb:setLinearVelocity(self.player.dir*self.speed);
  end
  if (Input:isKeyDown(OIS.KC_SPACE)) then
    --Physics:setDebugDraw(false);
    self.rb:removeConstraint(0);
    print("update"..self:object():name());
    print(self.player.name);
    print(self.player.dir);
  end
end

function fcc:onCollisionEnter(cdata)
  if(cdata.other:name() ~= "platform" and self.set == false) then
    local rbB = cdata.other:component("RigidBody");
    self.rb:addFixedConstraint(rbB, false);
    self.target = cdata.other;
    self.fset = true;
  end
end

return fcc;
