// @ Ogre Wiki Basic Ogre Framework
//|||||||||||||||||||||||||||||||||||||||||||||||
#ifndef OGRE_FRAMEWORK_HPP
#define OGRE_FRAMEWORK_HPP
#include "Library.h"

#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);               \
  void operator=(const TypeName&)

class OgreFramework : public Ogre::Singleton<OgreFramework> {
 public:
  OgreFramework();
  ~OgreFramework();

  bool initOgre(Ogre::String wndTitle);

  /// Set Camera to render on the default viewport
  void setActiveCamera(Ogre::Camera* camera);
  /// Get Camera of the default viewport
  Ogre::Camera* activeCamera() const;

  /// Get aspect ratio of default viewport
  Ogre::Real getDefaultAspectRatio();

  /// Get default viewport
  //Ogre::Viewport* defaultViewport() const{ return viewPort_; }

  /// Get default renderwindow (for stats)
  Ogre::RenderWindow* defaultRenderWindow() const{ return renderWindow_; }

  // TODO: more cfg might be necessary (or elsewhere)
  bool isOgreToBeShutDown()const{return m_bShutDownOgre;}

  Ogre::Root*	 m_pRoot;
  Ogre::SceneManager*	 m_pSceneMgr;
  Ogre::Log*	 m_pLog;
  Ogre::Timer*	 m_pTimer;
private:
  DISALLOW_COPY_AND_ASSIGN(OgreFramework);

  Ogre::FrameEvent m_FrameEvent;
  int	 m_iNumScreenShots;
  bool	 m_bShutDownOgre;
  Ogre::String m_ResourcesCfg;
  Ogre::String m_PluginsCfg;

  Ogre::Camera*	 defaultCamera_;
  Ogre::RenderWindow*	 renderWindow_;
  Ogre::Viewport*	 viewPort_;
};
//|||||||||||||||||||||||||||||||||||||||||||||||
#endif
//|||||||||||||||||||||||||||||||||||||||||||||||
