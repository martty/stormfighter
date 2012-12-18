#ifndef STORMFIGHTER_GUI_H_
#define STORMFIGHTER_GUI_H_

#include "common.h"
#include "Module.h"
#include "Input.h"
#include <SdkTrays.h>
#include <Awesomium/awesomium_capi.h>
#include "ViewPortOverlay.h"

namespace SF {

class GUI : public Module, public OgreBites::SdkTrayListener, public Ogre::ManualResourceLoader, public OIS::KeyListener, public OIS::MouseListener {
 public:
  GUI(StormfighterApp* app);
  ~GUI();

  void update(double deltaTime);

  bool keyPressed(const OIS::KeyEvent &keyEventRef);
  bool keyReleased(const OIS::KeyEvent &keyEventRef);
  bool mouseMoved(const OIS::MouseEvent &evt);
  bool mousePressed(const OIS::MouseEvent &evt, OIS::MouseButtonID id);
  bool mouseReleased(const OIS::MouseEvent &evt, OIS::MouseButtonID id);

  void createMaterial();

  void loadResource(Ogre::Resource* resource);

  void executeJS(SString script);

  /// check if the page has been loaded and you can issue JS calls
  bool ready(){return ready_;}

  void reload();

  SString pollCommands();

  /// checks whether this point is opaque in the GUI, for determining input
  bool isInGUI(int x, int y);

  void initialise();

 private:
  void displayWebView();
  OgreBites::SdkTrayManager* trayManager_;
  awe_webview* webView_;
  awe_string* url_str_;
  awe_renderbuffer* renderBuffer_;

  int getWebKeyFromOISKey(OIS::KeyCode kc);

  unsigned char* temp_;

  bool ready_; // flag for page loaded

  SReal counter;
  int width_;
  int height_;
  int texWidth, texHeight;
  SReal opacity_;
  Ogre::TexturePtr viewTexture_;
  bool compensateNPOT_;
  ViewportOverlay* overlay_;
  awe_string* base;
};

}; // namespace SF

#endif // STORMFIGHTER_GUI_H_
