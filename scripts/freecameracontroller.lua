-- free camera controller (fcc)
local fcc = {};

fcc.meta = {};
fcc.meta.type = "FreeLookCameraControllerLUA";
fcc.meta.group = "User"; -- default

fcc.meta.editor = {}; -- editor setup
fcc.meta.editor.property = {};
fcc.meta.editor.property.moveSpeed = {};
fcc.meta.editor.property.moveSpeed.range = {500, 2000};

fcc.translateVector_ = SVector3:new_local();
fcc.moveSpeed_ = 1000;
fcc.rotateSpeed_ = SDegree:new_local();
fcc.moveScale_ = 0;
fcc.rotScale_ = 300;

fcc.camera_ = {};

function fcc:onInit()
  print("fcc: init");
  if(not self:object():hasComponent("Camera")) then
    error('no camera!');
  end
  self.camera_ = self:object():component("Camera");
  print("fcc: inited");
end

function fcc:onUpdate()
  self.moveScale_ = self.moveSpeed_ * self:application():deltaTime();
  self.rotScale_ = self.rotateSpeed_ * self:application():deltaTime();
  self.translateVector_ = SVector3:new_local(SVector3.ZERO);
  if(Input:isKeyDown(OIS.KC_A)) then self.translateVector_.x = -self.moveScale_; end
  if(Input:isKeyDown(OIS.KC_D)) then self.translateVector_.x = self.moveScale_; end
  if(Input:isKeyDown(OIS.KC_W)) then self.translateVector_.z = -self.moveScale_; end
  if(Input:isKeyDown(OIS.KC_S)) then self.translateVector_.z = self.moveScale_; end
  if(Input:isKeyDown(OIS.KC_E)) then self.translateVector_.y = self.moveScale_; end
  if(Input:isKeyDown(OIS.KC_Q)) then self.translateVector_.y = -self.moveScale_; end
  if(Input:isKeyDown(OIS.KC_LSHIFT)) then
    self:object():transform():moveRelative(self.translateVector_);
  else
    self:object():transform():moveRelative(self.translateVector_ / 10);
  end
  --[[if(Input:isKeyDown(OIS.KC_P)) then self.camera_:setPolygonMode(Ogre.PM_WIREFRAME); end
  if(Input:isKeyDown(OIS.KC_O)) then self.camera_:setPolygonMode(Ogre.PM_SOLID); end--]]
  if(Input:isButtonDown(OIS.MB_Right)) then
    self:object():transform():yaw(to_rad(SDegree:new_local(Input:axisRelative(Input.X) * -0.1)));
    self:object():transform():pitch(to_rad(SDegree:new_local(Input:axisRelative(Input.Y) * -0.1)));
  end
 --[[ if(Input:isKeyDown(OIS.KC_P)) then
    print("position:"..tostring(self:object():transform().position));
    print("height:"..World:getHeightAt(self:object():transform().position));
    print("normal:");
    print(World:getNormalAt(self:object():transform().position));
  end --]]
end

return fcc;
