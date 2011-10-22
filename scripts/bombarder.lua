-- free camera controller (fcc)
local fcc = {};

fcc.meta = {};
fcc.meta.type = "bombarder";
fcc.meta.group = "User"; -- default

function fcc:onInit()
  print("INITING");
  self.rb = self:object():component("RigidBody");
  self:object():transform():setInheritScale(false);
  self.rb:setDamping(0.0, 1.0);
  self.set = false;
  self.fset = false;
end

function fcc:onUpdate()
  self.rb:setLinearVelocity(SVector3(-10, 0, 0));
  if(not self.set) then
    --self.rb:setLinearVelocity(SVector3(-10, 0, 0));
  elseif(self.fset) then
    --self.rb:remove();
    local pos = self:object():transform().position;
    --self.target:addChild(self:object());
    --self:object():transform().position = pos-self.target:transform().position;
    local cmps = self.target:allComponents(); --:updateCollider();
    for i = 0, cmps:size()-1 do
      print("type");
      print(cmps[i].type)
    end
    self.fset = false;
  end
end

function fcc:onPhysicsUpdate()
  --[[local lin = self.rb:linearVelocity();
  lin.y = 0;
  self.rb:setLinearVelocity(lin);
  local ang = self.rb:angularVelocity();
  ang.x = 0;
  self.rb:setAngularVelocity(ang);--]]
end

function fcc:onCollisionEnter(cdata)
  if(cdata.other:name() ~= "platform" and self.set == false) then

    local ptA = cdata.pointOnA;
    ptA.y = 10;
    ptA = ptA - self:object():transform().position;
    local ptB = cdata.pointOnA;
    ptB.y = 10;
    ptB = ptB - cdata.other:transform().position;
    self.rb:addPoint2PointConstraint(cdata.other:component("RigidBody"), ptA, ptB);
    self.target = cdata.other;
    self.set = true;
    self.fset = true;
  end
end

return fcc;
