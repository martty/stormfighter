// @ Ogre Wiki Basic Ogre Framework
//|||||||||||||||||||||||||||||||||||||||||||||||
#ifndef OGRE_FRAMEWORK_HPP
#define OGRE_FRAMEWORK_HPP
#include "Library.h"

#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);               \
  void operator=(const TypeName&)

class OgreFramework : public Ogre::Singleton<OgreFramework>, OIS::KeyListener, OIS::MouseListener, OgreBites::SdkTrayListener {
 public:
  OgreFramework();
  ~OgreFramework();

  bool initOgre(Ogre::String wndTitle, OIS::KeyListener *pKeyListener = 0, OIS::MouseListener *pMouseListener = 0);
  void updateOgre(double timeSinceLastFrame);

  void moveCamera();
  void getInput();

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

  bool isOgreToBeShutDown()const{return m_bShutDownOgre;}

  bool keyPressed(const OIS::KeyEvent &keyEventRef);
  bool keyReleased(const OIS::KeyEvent &keyEventRef);
  bool mouseMoved(const OIS::MouseEvent &evt);
  bool mousePressed(const OIS::MouseEvent &evt, OIS::MouseButtonID id);
  bool mouseReleased(const OIS::MouseEvent &evt, OIS::MouseButtonID id);

  Ogre::Root*	 m_pRoot;
  Ogre::SceneManager*	 m_pSceneMgr;
  Ogre::Log*	 m_pLog;
  Ogre::Timer*	 m_pTimer;
  OIS::InputManager*	 m_pInputMgr;
  OIS::Keyboard*	 m_pKeyboard;
  OIS::Mouse*	 m_pMouse;
private:
  DISALLOW_COPY_AND_ASSIGN(OgreFramework);

  OgreBites::SdkTrayManager*	 m_pTrayMgr;
  Ogre::FrameEvent m_FrameEvent;
  int	 m_iNumScreenShots;
  bool	 m_bShutDownOgre;
  Ogre::Vector3	 m_TranslateVector;
  Ogre::Real	 m_MoveSpeed;
  Ogre::Degree	 m_RotateSpeed;
  float	 m_MoveScale;
  Ogre::Degree	 m_RotScale;
  Ogre::String m_ResourcesCfg;
  Ogre::String m_PluginsCfg;

  Ogre::Camera*	 defaultCamera_;
  Ogre::RenderWindow*	 renderWindow_;
  Ogre::Viewport*	 viewPort_;
};
//|||||||||||||||||||||||||||||||||||||||||||||||
#endif
//|||||||||||||||||||||||||||||||||||||||||||||||
