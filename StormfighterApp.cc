#include "StormfighterApp.h"
#include <cstdlib>
#include "GameObject.h"
#include "Mesh.h"
#include "Camera.h"
#include "Terrain.h"
#include "Light.h"
#include "Primitive.h"
#include "RigidBody.h"
#include "SphereCollider.h"
#include "BoxCollider.h"
#include "ConvexHullCollider.h"
#include "TrimeshCollider.h"
#include "TerrainCollider.h"
#include "CompoundCollider.h"
#include "CylinderCollider.h"
#include "FreeLookCameraController.h"
#include "ChaseCameraController.h"
#include "CharacterController.h"
#include "PlatformMoverVertical.h"
#include "PlatformPositioner.h"
#include "WaterRiser.h"

StormfighterApp::StormfighterApp(){
  physics_ = NULL;
  input_ = NULL;
  hierarchy_ = NULL;
  gui_ = NULL;
  terrainGlobals_ = NULL;
  deltaTime_ = 0;
  hasWon_ = false;
  hasLost_ = false;
  isPlaying_ = true;
}
StormfighterApp::~StormfighterApp(){
  delete OgreFramework::getSingletonPtr();
}
void StormfighterApp::startStormfighter(){
  std::srand ( std::time(NULL) );
  new OgreFramework();
  if(!OgreFramework::getSingletonPtr()->initOgre("StormfighterApp v1.0"))
      return;
  m_bShutdown = false;
  log("Initializing input");
  input_ = new Input(OgreFramework::getSingletonPtr()->defaultRenderWindow());
  log("Input initialized!");
  log("Initializing hierarchy");
  hierarchy_ = new Hierarchy();
  log("Hierarchy initialized!");
  log("Initializing physics");
  physics_ = new Physics(this);
  log("Physics initialized!");
  log("Initializing GUI");
  gui_ = new GUI(input_);
  log("GUI initialized!");
  terrainGlobals_ = OGRE_NEW Ogre::TerrainGlobalOptions();
  // global terrain settings cfg
  terrainGlobals_->setMaxPixelError(1);
  // testing composite map
  terrainGlobals_->setCompositeMapDistance(3000);
  //physics_->setDebugDraw(true);
  OgreFramework::getSingletonPtr()->m_pLog->logMessage("Stormfighter initialized!");
  setupStormfighterScene();
  runStormfighter();
}
void StormfighterApp::setupStormfighterScene(){
  OgreFramework::getSingletonPtr()->m_pSceneMgr->setSkyBox(true, "Examples/SpaceSkyBox");

  physics_->addCollisionGroup("terrain");
  physics_->addCollisionGroup("player");
  physics_->addCollisionGroup("faller");

  GameObject* lighty = hierarchy_->createGameObject("Light");
  SLight* light = new SLight(Ogre::Light::LT_POINT);
  lighty->addComponent(light);
  light->setDiffuseColour(Ogre::ColourValue(1,1,1));
  lighty->transform()->setPosition(Ogre::Vector3(0,100,0));
  lighty->transform()->setOrientation(Ogre::Quaternion(Ogre::Degree(90), Ogre::Vector3(1,0,1)));
  light->setAsTerrainLight();

  GameObject* terrain = hierarchy_->createGameObject("Terrain");
  STerrain* t = new STerrain(Ogre::Terrain::ALIGN_X_Z, 129, 1200.0f);
  //t->addLayerTo(0,0,100,"dirt_grayrocky_diffusespecular.dds","dirt_grayrocky_normalheight.dds");
  t->addLayerTo(0,0,30,"grass_green-01_diffusespecular.dds","grass_green-01_normalheight.dds");
  //t->addLayerTo(0,0,200,"growth_weirdfungus-03_diffusespecular.dds","growth_weirdfungus-03_normalheight.dds");
  t->setHeightImageTo(0,0,"terrain.png");
  terrain->addComponent(t);
  terrain->addComponent(new STerrainCollider());
  SRigidBody* rb = new SRigidBody(0);
  rb->setCollisionGroup("terrain");
  terrain->addComponent(rb);
  rb->disableDebugDraw();

  GameObject* player = hierarchy_->createGameObject("Player");
  GameObject* mesh = hierarchy_->createGameObject("PlayerMesh");
  mesh->addComponent(new SMesh("robot.mesh"));
  mesh->addComponent(new SCylinderCollider());
  mesh->transform()->setPosition(SVector3(0, -48, 0));
  mesh->transform()->yaw(Ogre::Degree(90));
  player->addChild(mesh);
  player->transform()->setPosition(Ogre::Vector3(0, 100, 0));
  SRigidBody* sr = new SRigidBody(0);
  sr->setKinematic(true);
  sr->setDamping(0.0f,1.0f);
  sr->setCallbacks(true);
  sr->setCollisionGroup("player");

  //player->addComponent(new SCompoundCollider());
  player->addComponent(sr);
  player->addComponent(new SCharacterController());

  GameObject* chaseCam = hierarchy_->createGameObject("chaseCam");
  SCamera* c = new SCamera();
  chaseCam->addComponent(c);
  c->setNearClipDistance(1);
  c->setAspectRatio(OgreFramework::getSingletonPtr()->getDefaultAspectRatio());
  c->activate();
  chaseCam->addComponent(new SChaseCameraController(player, Ogre::Vector3(0, 140, 100), Ogre::Vector3(0, 20, -40)));


  GameObject* cam = hierarchy_->createGameObject("cammy");
  c = new SCamera();
  cam->addComponent(c);
  cam->addComponent(new SFreeLookCameraController());
  c->setNearClipDistance(1);
  c->setAspectRatio(OgreFramework::getSingletonPtr()->getDefaultAspectRatio());
  //c->activate();
  cam->transform()->setPosition(Ogre::Vector3(0,60,160));
  cam->transform()->lookAt(Ogre::Vector3(0,0,0));

  GameObject* plane = hierarchy_->createGameObject("platform");
  plane->addComponent(new SBoxCollider());
  plane->transform()->setScale(SVector3(1, 0.1, 1));
  plane->transform()->setPosition(SVector3(100, 60, 0));
  plane->addComponent(new SPrimitive(Ogre::SceneManager::PT_CUBE));
  //spr->setMaterialName("Examples/BumpyMetal");
  SRigidBody* rby = new SRigidBody(0);
  // FIXME: setting event generation manually on SRigidBody
  rby->setKinematic(true);
  plane->addComponent(rby);

  GameObject* glob = hierarchy_->createGameObject("scripts");
  glob->addComponent(new SPlatformPositioner(plane));

  GameObject* water = hierarchy_->createGameObject("Water");
  water->addComponent(new SPrimitive(Ogre::SceneManager::PT_CUBE));
  water->transform()->setScale(SVector3(1000, 0.01, 1000));
  SMesh::cast(water->component("Mesh"))->setMaterialName("Examples/WaterStream");
  water->transform()->setPosition(SVector3(0, -10, 0));
  water->addComponent(new SWaterRiser());
  water->addComponent(new SBoxCollider());
  water->addComponent(new SRigidBody(0));
  SRigidBody::cast(water->component("RigidBody"))->setKinematic(true);
  SRigidBody::cast(water->component("RigidBody"))->setCollisionResponse(false);
  StringVector st;
  st.push_back("player");
  SRigidBody::cast(water->component("RigidBody"))->setCollidesWith(st);
}

bool StormfighterApp::frameStarted(const Ogre::FrameEvent& evt){
  input_->capture();
  deltaTime_ = evt.timeSinceLastFrame;
  if(isPlaying_){
    hierarchy_->update();
    // tick physics
    physics_->tick(deltaTime_);
  } else {
    if(hasLost_)
      gui_->showLosingText();
  }
  // update GUI
  gui_->update(deltaTime_);
  // check for exit
  if(input_->isKeyDown(OIS::KC_ESCAPE))
    return false;
  return true;
}

void StormfighterApp::runStormfighter(){
  log("Initializing GameObjects");
  hierarchy_->initialize(this);
  log(hierarchy_->debug());
  log("Start main loop...");

  OgreFramework::getSingletonPtr()->defaultRenderWindow()->resetStatistics();

  OgreFramework::getSingletonPtr()->m_pRoot->addFrameListener(this);
  OgreFramework::getSingletonPtr()->m_pRoot->startRendering();

  OgreFramework::getSingletonPtr()->m_pLog->logMessage("Main loop quit");
  OgreFramework::getSingletonPtr()->m_pLog->logMessage("Shutdown OGRE...");
}

void StormfighterApp::log(SString message){
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(message);
}

void StormfighterApp::setTerrainLight(Ogre::Light* light){
  terrainGlobals_->setLightMapDirection(light->getDerivedDirection());
  terrainGlobals_->setCompositeMapAmbient(OgreFramework::getSingletonPtr()->m_pSceneMgr->getAmbientLight());
  terrainGlobals_->setCompositeMapDiffuse(light->getDiffuseColour());
}
