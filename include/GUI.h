#ifndef STORMFIGHTER_GUI_H_
#define STORMFIGHTER_GUI_H_

#include "common.h"
#include "Input.h"
#include <SdkTrays.h>
#include <Awesomium/awesomium_capi.h>
#include "ViewPortOverlay.h"

namespace SF {

class GUI : public OgreBites::SdkTrayListener, public Ogre::ManualResourceLoader, public OIS::KeyListener, public OIS::MouseListener {
 public:
  GUI(Input* input);
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
