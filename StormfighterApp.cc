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
#include "FreeLookCameraController.h"

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
  // set up physics!
  log("Initializing physics");
  physics_ = new Physics();
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

  GameObject* terrain = hierarchy_->createGameObject();
  STerrain* t = new STerrain(Ogre::Terrain::ALIGN_X_Z, 129, 1200.0f);
  t->addLayerTo(0,0,100,"dirt_grayrocky_diffusespecular.dds","dirt_grayrocky_normalheight.dds");
  //t->addLayerTo(0,0,30,"grass_green-01_diffusespecular.dds","grass_green-01_normalheight.dds");
  //t->addLayerTo(0,0,200,"growth_weirdfungus-03_diffusespecular.dds","growth_weirdfungus-03_normalheight.dds");
  t->setHeightImageTo(0,0,"terrain.png");
  terrain->addComponent(t);
  terrain->addComponent(new STerrainCollider());
  SRigidBody* rb = new SRigidBody(0);
  terrain->addComponent(rb);
  rb->disableDebugDraw();

  GameObject* pp = hierarchy_->createGameObject("hietop");
  GameObject* sampleMesh = hierarchy_->createGameObject("hiechild");
  pp->addChild(sampleMesh);
  pp->transform()->setPosition(Ogre::Vector3(0, 0, -120));
  sampleMesh->addComponent(new SMesh("robot.mesh"));
  sampleMesh->addComponent(new SConvexHullCollider());
  //SRigidBody* sr = new SRigidBody(1);
  //sr->setKinematic(false);
  //sampleMesh->addComponent(sr);
  sampleMesh->transform()->setPosition(Ogre::Vector3(0,10,10));

  GameObject* cam = hierarchy_->createGameObject("cammy");
  SCamera* c = new SCamera();
  cam->addComponent(c);
  cam->addComponent(new SFreeLookCameraController());
  c->setNearClipDistance(1);
  c->setAspectRatio(OgreFramework::getSingletonPtr()->getDefaultAspectRatio());
  c->activate();
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
    go->addComponent(new SRigidBody(4));
    //go->sendInit(this);
  }
//  rby->setKinematic(true);
  //plane->transform()->setOrientation(Ogre::Quaternion(Ogre::Degree(30), Ogre::Vector3(0,0,1)));

}
void StormfighterApp::runStormfighter(){
  log("Initializing GameObjects");
  hierarchy_->initialize(this);
  log(hierarchy_->debug());
  log("Start main loop...");
  double timeSinceLastFrame = 0;
  double startTime = 0;
  OgreFramework::getSingletonPtr()->defaultRenderWindow()->resetStatistics();
  while(!m_bShutdown && !OgreFramework::getSingletonPtr()->isOgreToBeShutDown()){
      if(OgreFramework::getSingletonPtr()->defaultRenderWindow()->isClosed())
          m_bShutdown = true;
#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32 || OGRE_PLATFORM == OGRE_PLATFORM_LINUX
      Ogre::WindowEventUtilities::messagePump();
#endif

      if(OgreFramework::getSingletonPtr()->defaultRenderWindow()->isActive()){
          startTime = OgreFramework::getSingletonPtr()->m_pTimer->getMillisecondsCPU();
          // capture input
          input_->capture();
          OgreFramework::getSingletonPtr()->updateOgre(timeSinceLastFrame);
          OgreFramework::getSingletonPtr()->m_pRoot->renderOneFrame();
          timeSinceLastFrame = OgreFramework::getSingletonPtr()->m_pTimer->getMillisecondsCPU() - startTime;
          deltaTime_ = timeSinceLastFrame/1000.0d;
          // update GOs
          hierarchy_->update();
          // tick physics
          physics_->tick(deltaTime_);
          // update GUI
          gui_->update(deltaTime_);
          // check for exit
          if(input_->isKeyDown(OIS::KC_ESCAPE))
            m_bShutdown = true;

      } else {
#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
          Sleep(1000);
#else
          sleep(1);
#endif
      }
  }
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
