#include "Graphics.h"
#include "Library.h"

template<> Graphics* Ogre::Singleton<Graphics>::ms_Singleton = 0;

Graphics::Graphics():root_(NULL), sceneManager_(NULL), renderWindow_(NULL), viewPort_(NULL), defaultCamera_(NULL){
}

Graphics::~Graphics(){
  if(root_)
    delete root_;
}

bool Graphics::initialize(const SString& windowTitle){
  #ifdef _DEBUG
  resourcesCfg_ = "resources_d.cfg";
  pluginsCfg_ = "plugins_d.cfg";
  #else
  resourcesCfg = "resources.cfg";
  pluginsCfg_ = "plugins.cfg";
  #endif
  root_ = new Ogre::Root(pluginsCfg_);
  if(!root_->showConfigDialog())
    return false;

  renderWindow_ = root_->initialise(true, windowTitle);

  sceneManager_ = root_->createSceneManager(Ogre::ST_GENERIC, "SceneManager");
  sceneManager_->setAmbientLight(Ogre::ColourValue(0.7f, 0.7f, 0.7f));

  defaultCamera_ = sceneManager_->createCamera("Camera");
  viewPort_ = renderWindow_->addViewport(defaultCamera_);
  viewPort_->setBackgroundColour(Ogre::ColourValue(0.8f, 0.7f, 0.6f, 1.0f));
  viewPort_->setCamera(defaultCamera_);

  Ogre::String secName, typeName, archName;
  Ogre::ConfigFile cf;
  cf.load(resourcesCfg_);
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
  renderWindow_->setActive(true);

  terrainGlobals_ = OGRE_NEW Ogre::TerrainGlobalOptions();
  // global terrain settings cfg
  terrainGlobals_->setMaxPixelError(5);
  // testing composite map
  terrainGlobals_->setCompositeMapDistance(3000);
  return true;
}

void Graphics::setActiveCamera(Ogre::Camera* camera){
  viewPort_->setCamera(camera);
}

Ogre::Camera* Graphics::activeCamera() const{
  return viewPort_->getCamera();
}

SReal Graphics::getDefaultAspectRatio(){
  return SReal(viewPort_->getActualWidth()) / SReal(viewPort_->getActualHeight());
}

void Graphics::addFrameListener(Ogre::FrameListener* listener){
  root_->addFrameListener(listener);
}

void Graphics::startRendering(){
  root_->startRendering();
}

void Graphics::setTerrainLight(Ogre::Light* light){
  terrainGlobals_->setLightMapDirection(light->getDerivedDirection());
  terrainGlobals_->setCompositeMapAmbient(sceneManager()->getAmbientLight());
  terrainGlobals_->setCompositeMapDiffuse(light->getDiffuseColour());
}

SRay Graphics::activeCameraToViewPortRay(SReal screenx, SReal screeny){
  return viewPort_->getCamera()->getCameraToViewportRay(screenx, screeny);
}
