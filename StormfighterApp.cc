#include "StormfighterApp.h"

StormfighterApp::StormfighterApp(){
    m_pCubeNode	= 0;
    m_pCubeEntity = 0;
}
StormfighterApp::~StormfighterApp(){
    delete OgreFramework::getSingletonPtr();
}
void StormfighterApp::startStormfighter(){
    new OgreFramework();
    if(!OgreFramework::getSingletonPtr()->initOgre("StormfighterApp v1.0", this, 0))
        return;
    m_bShutdown = false;
    OgreFramework::getSingletonPtr()->m_pLog->logMessage("Stormfighter initialized!");
    setupStormfighterScene();
    runStormfighter();
}
void StormfighterApp::setupStormfighterScene(){
  OgreFramework::getSingletonPtr()->m_pSceneMgr->setSkyBox(true, "Examples/SpaceSkyBox");
  OgreFramework::getSingletonPtr()->m_pSceneMgr->createLight("Light")->setPosition(75,75,75);

  GameObject terrain();
  //GameObject.addComponent(new Transform());
  //terrain.addComponent(new MyPlane());

  //terrain.sendInit(this);
  GameObject* sampleMesh = new GameObject();
  sampleMesh->addComponent(new SMesh("robot.mesh"));
  sampleMesh->transform()->setPosition(Ogre::Vector3(0,0,10));
  sampleMesh->sendInit(this);
  GameObject* sampleMesh2 = new GameObject();
  GameObject* sampleMesh3 = new GameObject();
  GameObject* sampleMesh4 = new GameObject("a");
  GameObject* sampleMesh5 = new GameObject("a");
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(sampleMesh->name());
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(sampleMesh2->name());
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(sampleMesh3->name());
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(sampleMesh4->name());
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(sampleMesh5->name());
  OgreFramework::getSingletonPtr()->m_pLog->logMessage(sampleMesh->debug());
}
void StormfighterApp::runStormfighter(){
    OgreFramework::getSingletonPtr()->m_pLog->logMessage("Start main loop...");
    double timeSinceLastFrame = 0;
    double startTime = 0;
    OgreFramework::getSingletonPtr()->m_pRenderWnd->resetStatistics();
    while(!m_bShutdown && !OgreFramework::getSingletonPtr()->isOgreToBeShutDown()){
        if(OgreFramework::getSingletonPtr()->m_pRenderWnd->isClosed())
            m_bShutdown = true;
        #if OGRE_PLATFORM == OGRE_PLATFORM_WIN32 || OGRE_PLATFORM == OGRE_PLATFORM_LINUX
        Ogre::WindowEventUtilities::messagePump();
        #endif
        if(OgreFramework::getSingletonPtr()->m_pRenderWnd->isActive()){
            startTime = OgreFramework::getSingletonPtr()->m_pTimer->getMillisecondsCPU();
            OgreFramework::getSingletonPtr()->m_pKeyboard->capture();
            OgreFramework::getSingletonPtr()->m_pMouse->capture();
            OgreFramework::getSingletonPtr()->updateOgre(timeSinceLastFrame);
            OgreFramework::getSingletonPtr()->m_pRoot->renderOneFrame();
            timeSinceLastFrame = OgreFramework::getSingletonPtr()->m_pTimer->getMillisecondsCPU() - startTime;
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
