print("hai");

-- typedefs (we can drop the S if we want)
SVector3 = Ogre.Vector3;
SQuaternion = Ogre.Quaternion;
-- ...

plane = Hierarchy:createGameObject("platform");
plane:transform():setScale(SVector3:new(1, 0.1, 1));
plane:transform():setPosition(SVector3(0, 0, 0));
plane:transform():setPosition(SVector3(0, 0, 0));
plane:addComponent(SPrimitive:new(SPrimitive.CUBE));

cam = Hierarchy:createGameObject("cammy");
c = SCamera:new();
cam:addComponent(c);
--cam:addComponent(new SFreeLookCameraController());
c:setNearClipDistance(1);
--c:setAspectRatio(OgreFramework::getSingletonPtr()->getDefaultAspectRatio());
c:activate();
cam:transform():setPosition(SVector3(0,60,160));
cam:transform():lookAt(SVector3(0,0,0));
