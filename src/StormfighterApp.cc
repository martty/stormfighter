#include "StormfighterApp.h"
#include <cstdlib>

#include "Logger.h"
#include "DebugDrawer.h"
#include "Graphics.h"
#include "Hierarchy.h"
#include "Physics.h"
#include "Input.h"
#include "GUI.h"
#include "Resources.h"
#include "Scripting.h"

#include "GameObject.h"
#include "Mesh.h"
#include "Camera.h"
#include "Light.h"
#include "Primitive.h"
#include "RigidBody.h"
#include "SphereCollider.h"
#include "BoxCollider.h"
#include "ConvexHullCollider.h"
#include "TrimeshCollider.h"
#include "CompoundCollider.h"
#include "CylinderCollider.h"

namespace SF {

StormfighterApp::StormfighterApp(){
  physics_ = NULL;
  input_ = NULL;
  hierarchy_ = NULL;
  gui_ = NULL;
  graphics_ = NULL;
  logger_ = NULL;
  resources_ = NULL;
  deltaTime_ = 0;
}
StormfighterApp::~StormfighterApp(){
  log("~StormfighterApp start");
  log("Destroying hierarchy");
  delete hierarchy_;
  log("Destroying physics");
  delete physics_;
  log("Destroying input");
  delete input_;
  //log("Destroying GUI");
  //delete gui_;
  log("Destroying resources");
  delete resources_;
  log("Destroying graphics");
  delete graphics_;
  log("~StormfighterApp end");
}
void StormfighterApp::startStormfighter(){
  std::srand ( std::time(NULL) );
  logger_ = new Logger();
  graphics_ = new Graphics(this, "StormfighterApp v0.8");

  if(!graphics_->initialise())
      return;
  log("Initializing resources");
  resources_ = new Resources(this);
  resources_->initialise();
  log("Initializing input");
  input_ = new Input(graphics_->defaultRenderWindow());
  log("Input initialized!");
  log("Initializing GUI");
  gui_ = new GUI(this);
  log("GUI initialized!");
  gui_->initialise();
  log("Initializing hierarchy");
  hierarchy_ = new Hierarchy(this);
  log("Hierarchy initialized!");
  log("Initializing physics");
  physics_ = new Physics(this);
  log("Physics initialized!");
  scripting_ = new Scripting(this);
  //physics_->setDebugDraw(true);
  graphics_->addFrameListener(this);
  if(!scripting_->initialise())
    exit(1);
  log("Scripting initialized!");
  logger_->logMessage("Stormfighter initialized!");
  setupStormfighterScene();
  runStormfighter();
}

void StormfighterApp::setupStormfighterScene(){
  graphics_->setSkyBoxMaterial("Examples/EarlyMorningSkyBox");
  graphics_->setSkyBoxEnabled(true);

  if(!scripting_->parseFile("scripts/testscene.lua"))
    exit(1);

  physics_->addCollisionGroup("terrain");
  physics_->addCollisionGroup("player");
  physics_->addCollisionGroup("faller");
/*
  GameObject* lighty = hierarchy_->createGameObject("Light");
  Light* light = new Light(Ogre::Light::LT_POINT);
  lighty->addComponent(light);
  light->setDiffuseColour(Ogre::ColourValue(1,1,1));
  lighty->transform()->setPosition(Ogre::Vector3(0,100,0));
  lighty->transform()->setOrientation(Ogre::Quaternion(Ogre::Degree(90), Ogre::Vector3(1,0,1)));
  light->setAsTerrainLight();

  GameObject* terrain = hierarchy_->createGameObject("Terrain");
  Terrain* t = new Terrain(Ogre::Terrain::ALIGN_X_Z, 129, 1200.0f);
  //t->addLayerTo(0,0,100,"dirt_grayrocky_diffusespecular.dds","dirt_grayrocky_normalheight.dds");
  t->addLayerTo(0,0,30,"grass_green-01_diffusespecular.dds","grass_green-01_normalheight.dds");
  //t->addLayerTo(0,0,200,"growth_weirdfungus-03_diffusespecular.dds","growth_weirdfungus-03_normalheight.dds");
  t->setHeightImageTo(0,0,"terrain.png");
  terrain->addComponent(t);
  terrain->addComponent(new TerrainCollider());
  RigidBody* rb = new RigidBody(0);
  rb->setCollisionGroup("terrain");
  terrain->addComponent(rb);
  rb->disableDebugDraw();

  GameObject* player = hierarchy_->createGameObject("Player");
  GameObject* mesh = hierarchy_->createGameObject("PlayerMesh");
  mesh->addComponent(new Mesh("robot.mesh"));
  mesh->addComponent(new CylinderCollider());
  mesh->transform()->setPosition(SVector3(0, -48, 0));
  mesh->transform()->yaw(Ogre::Degree(90));
  player->addChild(mesh);
  player->transform()->setPosition(Ogre::Vector3(0, 100, 0));
  RigidBody* sr = new RigidBody(0);
  sr->setKinematic(true);
  sr->setDamping(0.0f,1.0f);
  sr->setCallbacks(true);
  sr->setCollisionGroup("player");

  //player->addComponent(new CompoundCollider());
  player->addComponent(sr);
  player->addComponent(new SCharacterController());

  GameObject* chaseCam = hierarchy_->createGameObject("chaseCam");
  Camera* c = new Camera();
  chaseCam->addComponent(c);
  c->setNearClipDistance(1);
  c->setAspectRatio(graphics_->getDefaultAspectRatio());
  c->activate();
  chaseCam->transform()->setPosition(SVector3(0, 60, -100));
  //chaseCam->addComponent(new SChaseCameraController(player, Ogre::Vector3(0, 140, 100), Ogre::Vector3(0, 20, -40)));


  GameObject* cam = hierarchy_->createGameObject("cammy");
  c = new Camera();
  cam->addComponent(c);
  cam->addComponent(new SFreeLookCameraController());
  c->setNearClipDistance(1);
  c->setAspectRatio(graphics_->getDefaultAspectRatio());
  //c->activate();
  cam->transform()->setPosition(Ogre::Vector3(0,60,160));
  cam->transform()->lookAt(Ogre::Vector3(0,0,0));

  GameObject* plane = hierarchy_->createGameObject("platform");
  plane->addComponent(new BoxCollider());
  plane->transform()->setScale(SVector3(1, 0.1, 1));
  plane->transform()->setPosition(SVector3(100, 60, 0));
  plane->addComponent(new Primitive(Ogre::SceneManager::PT_CUBE));
  //spr->setMaterialName("Examples/BumpyMetal");
  RigidBody* rby = new RigidBody(0);
  // FIXME: setting event generation manually on RigidBody
  rby->setKinematic(true);
  plane->addComponent(rby);

  GameObject* glob = hierarchy_->createGameObject("scripts");
  glob->addComponent(new SPlatformPositioner(plane));

  GameObject* water = hierarchy_->createGameObject("Water");
  water->addComponent(new Primitive(Ogre::SceneManager::PT_CUBE));
  water->transform()->setScale(SVector3(1000, 0.01, 1000));
  Mesh::cast(water->component("Mesh"))->setMaterialName("Examples/WaterStream");
  water->transform()->setPosition(SVector3(0, -10, 0));
  //water->addComponent(new SWaterRiser());
  water->addComponent(new BoxCollider());
  water->addComponent(new RigidBody(0));
  RigidBody::cast(water->component("RigidBody"))->setKinematic(true);
  RigidBody::cast(water->component("RigidBody"))->setCollisionResponse(false);
  StringVector st;
  st.push_back("player");
  RigidBody::cast(water->component("RigidBody"))->setCollidesWith(st);
  */
}

bool StormfighterApp::frameStarted(const Ogre::FrameEvent& evt){
  deltaTime_ = evt.timeSinceLastFrame;
  // check for exit
  if(input_->isKeyDown(OIS::KC_ESCAPE))
    return false;
  scripting()->executeString("lua_update();");
  graphics_->debugDrawer()->build();
  return true;
}

bool StormfighterApp::frameEnded(const Ogre::FrameEvent& evt){
  graphics_->debugDrawer()->clear();
  return true;
}

void StormfighterApp::runStormfighter(){
  log("Initializing GameObjects");
  hierarchy_->initialise();
  //log(hierarchy_->debug());
  log("Running deferred initializations");
  scripting()->executeString("System:_deferredInit();");
  log("Start main loop...");

  graphics_->defaultRenderWindow()->resetStatistics();

  graphics_->startRendering();

  logger_->logMessage("Main loop quit");
  logger_->logMessage("Shutdown OGRE...");
}

void StormfighterApp::log(const SString& message){
  logger_->logMessage(message);
}

}; // namespace SF
