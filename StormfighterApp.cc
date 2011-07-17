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
#include "FreeLookCameraController.h"
#include "ChaseCameraController.h"
#include "CharacterController.h"

StormfighterApp::StormfighterApp(){
  physics_ = NULL;
  input_ = NULL;
  hierarchy_ = NULL;
  gui_ = NULL;
  terrainGlobals_ = NULL;
  deltaTime_ = 0;
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
  terrainGlobals_->setMaxPixelError(8);
  // testing composite map
  terrainGlobals_->setCompositeMapDistance(3000);
  OgreFramework::getSingletonPtr()->m_pLog->logMessage("Stormfighter initialized!");
  setupStormfighterScene();
  runStormfighter();
}
void StormfighterApp::setupStormfighterScene(){
  OgreFramework::getSingletonPtr()->m_pSceneMgr->setSkyBox(true, "Examples/SpaceSkyBox");

  GameObject* lighty = hierarchy_->createGameObject();
  SLight* light = new SLight(Ogre::Light::LT_DIRECTIONAL);
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
  terrain->addComponent(rb);
  rb->disableDebugDraw();

  GameObject* player = hierarchy_->createGameObject("Player");
  GameObject* mesh = hierarchy_->createGameObject("PlayerMesh");
  mesh->addComponent(new SMesh("robot.mesh"));
  mesh->addComponent(new SConvexHullCollider());
  //mesh->transform()->setScale(Ogre::Vector3(0.1, 0.1, 0.1));
  player->addChild(mesh);
  mesh->transform()->yaw(Ogre::Degree(90));
  player->transform()->setPosition(Ogre::Vector3(0, 100, 0));
  SRigidBody* sr = new SRigidBody(30);
  sr->setKinematic(true);
  sr->setDamping(0.0f,1.0f);
  player->addComponent(new SCompoundCollider());
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

  /*GameObject* plane = new GameObject("plane");
  plane->addComponent(new SBoxCollider());
  plane->transform()->setScale(Ogre::Vector3(10, 0.1, 10));
  //plane->transform()->showBoundingBox(true);
  SPrimitive* spr = new SPrimitive(Ogre::SceneManager::PT_CUBE);
  plane->addComponent(spr);
  spr->setMaterialName("Examples/BumpyMetal");
  SRigidBody* rby = new SRigidBody(0);
  plane->addComponent(rby);
  plane->sendInit(this);
  */
  for(int i = 0; i < 20; i++){
    GameObject* go = hierarchy_->createGameObject("faller");
    SPrimitive* pr = new SPrimitive(Ogre::SceneManager::PT_SPHERE);
    go->addComponent(pr);
    pr->setMaterialName("Examples/RustySteel");
    //SReal scale = (std::rand() % 100)/100;
    go->transform()->setScale(Ogre::Vector3(0.1, 0.1, 0.1));
    int x = std::rand() % 100;
    int z = std::rand() % 100;
    int y = std::rand() % 20;
    go->transform()->setPosition(Ogre::Vector3(x,100+y,z));
    go->addComponent(new SSphereCollider());
    //go->addComponent(new SRigidBody(4));
    //go->sendInit(this);
  }
//  rby->setKinematic(true);
  //plane->transform()->setOrientation(Ogre::Quaternion(Ogre::Degree(30), Ogre::Vector3(0,0,1)));

}

bool StormfighterApp::frameStarted(const Ogre::FrameEvent& evt){
  input_->capture();
  deltaTime_ = evt.timeSinceLastFrame;
  hierarchy_->update();
  // tick physics
  physics_->tick(deltaTime_);
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
