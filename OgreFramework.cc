#include "OgreFramework.h"

using namespace Ogre;

template<> OgreFramework* Ogre::Singleton<OgreFramework>::ms_Singleton = 0;

OgreFramework::OgreFramework(){
  m_bShutDownOgre	 = false;
  m_iNumScreenShots	 = 0;
  m_pRoot	 = 0;
  m_pSceneMgr	 = 0;
  renderWindow_	 = 0;
  defaultCamera_	 = 0;
  viewPort_	 = 0;
  m_pLog	 = 0;
  m_pTimer	 = 0;
  m_FrameEvent = Ogre::FrameEvent();
}

bool OgreFramework::initOgre(Ogre::String wndTitle){
  Ogre::LogManager* logMgr = new Ogre::LogManager();
  m_pLog = Ogre::LogManager::getSingleton().createLog("OgreLogfile.log", true, true, false);
  m_pLog->setDebugOutputEnabled(true);
#ifdef _DEBUG
      m_ResourcesCfg = "resources_d.cfg";
      m_PluginsCfg = "plugins_d.cfg";
#else
      m_ResourcesCfg = "resources.cfg";
      m_PluginsCfg = "plugins.cfg";
#endif
  m_pRoot = new Ogre::Root(m_PluginsCfg);
  if(!m_pRoot->showConfigDialog()) return false;
  renderWindow_ = m_pRoot->initialise(true, wndTitle);
  m_pSceneMgr = m_pRoot->createSceneManager(ST_GENERIC, "SceneManager");
  m_pSceneMgr->setAmbientLight(Ogre::ColourValue(0.7f, 0.7f, 0.7f));
  defaultCamera_ = m_pSceneMgr->createCamera("Camera");
  viewPort_ = renderWindow_->addViewport(defaultCamera_);
  viewPort_->setBackgroundColour(ColourValue(0.8f, 0.7f, 0.6f, 1.0f));
  viewPort_->setCamera(defaultCamera_);
  Ogre::String secName, typeName, archName;
  Ogre::ConfigFile cf;
  cf.load(m_ResourcesCfg);
  Ogre::ConfigFile::SectionIterator seci = cf.getSectionIterator();
  while (seci.hasMoreElements()){
    secName = seci.peekNextKey();
    Ogre::ConfigFile::SettingsMultiMap *settings = seci.getNext();
    Ogre::ConfigFile::SettingsMultiMap::iterator i;
    for (i = settings->begin(); i != settings->end(); ++i){
      typeName = i->first;
      archName = i->second;
      Ogre::ResourceGroupManager::getSingleton().addResourceLocation(archName, typeName, secName);
    }
  }
  Ogre::TextureManager::getSingleton().setDefaultNumMipmaps(5);
  Ogre::ResourceGroupManager::getSingleton().initialiseAllResourceGroups();
  m_pTimer = new Ogre::Timer();
  m_pTimer->reset();
  renderWindow_->setActive(true);
  return true;
}

OgreFramework::~OgreFramework(){
    if(m_pRoot) delete m_pRoot;
}

void OgreFramework::setActiveCamera(Camera* camera){
  viewPort_->setCamera(camera);
}

Camera* OgreFramework::activeCamera() const{
  return viewPort_->getCamera();
}

Real OgreFramework::getDefaultAspectRatio(){
  return Real(viewPort_->getActualWidth()) / Real(viewPort_->getActualHeight());
}
