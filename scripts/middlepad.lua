-- free camera controller (fcc)
local fcc = {};

fcc.meta = {};
fcc.meta.type = "middlepad";
fcc.meta.group = "User"; -- default

function fcc:onInit()
  self.rb = self:object():component("RigidBody");
  frameOfB = Hierarchy:find("platform"):component("RigidBody"):getFrame();
  frameOfA = self.rb:getFrame();
  frameInA = Frame(SVector3(0,0,0), SQuaternion.IDENTITY);
  frameInB = Frame(frameOfB:inverse()*(frameOfA:position()), frameOfB:inverse():orientation()*frameOfA:orientation());
  local cons = Constraint(self.rb, Hierarchy:find("platform"):component("RigidBody"), frameInA, frameInB, true);
  cons:setDbgDrawSize(20);
  cons:setAngularLowerLimit(SVector3(-math.pi,0,0));
  cons:setAngularUpperLimit(SVector3(math.pi,0,0));
  self.rb:setGravity(SVector3(0,0,0));
  Physics:addConstraint(cons);
end

function fcc:updateCollider()
  print('choo choo');
end

return fcc;
