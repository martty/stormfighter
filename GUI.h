#ifndef STORMFIGHTER_GUI_H_
#define STORMFIGHTER_GUI_H_

#include "common.h"
#include "Input.h"
#include <SdkTrays.h>

class GUI : public OgreBites::SdkTrayListener, OIS::KeyListener, OIS::MouseListener {
 public:
  GUI(Input* input);
  ~GUI();

  void update(double deltaTime);

  bool keyPressed(const OIS::KeyEvent &keyEventRef);
  bool keyReleased(const OIS::KeyEvent &keyEventRef);
  bool mouseMoved(const OIS::MouseEvent &evt);
  bool mousePressed(const OIS::MouseEvent &evt, OIS::MouseButtonID id);
  bool mouseReleased(const OIS::MouseEvent &evt, OIS::MouseButtonID id);

 private:
  OgreBites::SdkTrayManager* trayManager_;
};

#endif // STORMFIGHTER_GUI_H_
