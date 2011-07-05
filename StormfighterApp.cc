#include "StormfighterApp.h"

StormfighterApp::StormfighterApp(){
    terrainGlobals_ = NULL;
}
StormfighterApp::~StormfighterApp(){
    delete OgreFramework::getSingletonPtr();
}
void StormfighterApp::startStormfighter(){
    new OgreFramework();
    if(!OgreFramework::getSingletonPtr()->initOgre("StormfighterApp v1.0", this, 0))
        return;
    m_bShutdown = false;
    // set up physics!
    log("Initializing physics");
    physics_ = new Physics();
    log("Physics initialized!");
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
  //OgreFramework::getSingletonPtr()->m_pSceneMgr->createLight("Light")->setPosition(75,75,75);

  GameObject* lighty = new GameObject();
  SLight* light = new SLight(Ogre::Light::LT_DIRECTIONAL);
  lighty->addComponent(light);
  light->setDiffuseColour(Ogre::ColourValue(1,0,0));
  lighty->transform()->setPosition(Ogre::Vector3(0,100,0));
  lighty->transform()->setOrientation(Ogre::Quaternion(Ogre::Degree(90), Ogre::Vector3(1,0,1)));
  lighty->sendInit(this);
  light->setAsTerrainLight();

/*  GameObject* terrain = new GameObject();
  STerrain* t = new STerrain(Ogre::Terrain::ALIGN_X_Z, 513, 1200.0f);
  terrain->addComponent(t);
  t->addLayerTo(0,0,100,"dirt_grayrocky_diffusespecular.dds","dirt_grayrocky_normalheight.dds");
  t->addLayerTo(0,0,30,"grass_green-01_diffusespecular.dds","grass_green-01_normalheight.dds");
  t->addLayerTo(0,0,200,"growth_weirdfungus-03_diffusespecular.dds","growth_weirdfungus-03_normalheight.dds");
  t->setHeightImageTo(0,0,"terrain.png");
  //t->setInputScalingTo(0,0,60);
  terrain->sendInit(this);
  */

  GameObject* sampleMesh = new GameObject();
  sampleMesh->addComponent(new SMesh("robot.mesh"));
  sampleMesh->transform()->setPosition(Ogre::Vector3(0,10,10));
  sampleMesh->sendInit(this);
  GameObject* cam = new GameObject("cammy");
  SCamera* c = new SCamera();
  cam->addComponent(c);
  cam->sendInit(this);
  c->setNearClipDistance(1);
  c->setAspectRatio(OgreFramework::getSingletonPtr()->getDefaultAspectRatio());
  c->activate();
  cam->transform()->setPosition(Ogre::Vector3(0,60,160));
  cam->transform()->lookAt(Ogre::Vector3(0,0,0));

  GameObject* prim = new GameObject("a");
  SPrimitive* sp = new SPrimitive(Ogre::SceneManager::PT_SPHERE);
  prim->addComponent(sp);
  prim->transform()->setPosition(Ogre::Vector3(0, 100, 0));
  prim->addComponent(new SSphereCollider(50));
  prim->addComponent(new SRigidBody(10));
  prim->sendInit(this);

  GameObject* plane = new GameObject("plane");
  plane->addComponent(new SBoxCollider(Ogre::Vector3(100, 10, 100)));
  plane->addComponent(new SPrimitive(Ogre::SceneManager::PT_CUBE));
  plane->transform()->setOrientation(Ogre::Quaternion(Ogre::Degree(30), Ogre::Vector3(0,0,1)));
  plane->transform()->setScale(Ogre::Vector3(1, 0.1, 1));
  plane->addComponent(new SRigidBody(0));
  plane->sendInit(this);
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(sampleMesh->name());
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(sampleMesh->debug());
}
void StormfighterApp::runStormfighter(){
    OgreFramework::getSingletonPtr()->m_pLog->logMessage("Start main loop...");
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
            OgreFramework::getSingletonPtr()->m_pKeyboard->capture();
            OgreFramework::getSingletonPtr()->m_pMouse->capture();
            OgreFramework::getSingletonPtr()->updateOgre(timeSinceLastFrame);
            OgreFramework::getSingletonPtr()->m_pRoot->renderOneFrame();
            timeSinceLastFrame = OgreFramework::getSingletonPtr()->m_pTimer->getMillisecondsCPU() - startTime;
            // tick physics
            physics_->tick(SReal(timeSinceLastFrame)/1000.0f);
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

bool StormfighterApp::keyPressed(const OIS::KeyEvent &keyEventRef){
    OgreFramework::getSingletonPtr()->keyPressed(keyEventRef);
    if(OgreFramework::getSingletonPtr()->m_pKeyboard->isKeyDown(OIS::KC_F)){
        //do something
    }
    return true;
}

bool StormfighterApp::keyReleased(const OIS::KeyEvent &keyEventRef){
    OgreFramework::getSingletonPtr()->keyReleased(keyEventRef);
    return true;
}

void StormfighterApp::log(SString message){
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(message);
}

void StormfighterApp::setTerrainLight(Ogre::Light* light){
  terrainGlobals_->setLightMapDirection(light->getDerivedDirection());
  terrainGlobals_->setCompositeMapAmbient(OgreFramework::getSingletonPtr()->m_pSceneMgr->getAmbientLight());
  terrainGlobals_->setCompositeMapDiffuse(light->getDiffuseColour());
}
