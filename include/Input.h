#ifndef STORMFIGHTER_INPUT_H_
#define STORMFIGHTER_INPUT_H_

#include <OISEvents.h>
#include <OISMouse.h>
#include <OISKeyboard.h>
#include <OISJoyStick.h>
#include <OISInputManager.h>

#include <OgreRenderWindow.h>

/**
* @brief Class managing input
*
*
*/

class Input : public OIS::KeyListener, OIS::MouseListener {
 friend class GUI; // GUI might require raw objects(mouse)
 public:
  enum Axis {X, Y, Z};
  Input(Ogre::RenderWindow* renderWindow);
  ~Input();

  // for buffered input events, for GUI
  bool keyPressed(const OIS::KeyEvent &keyEventRef);
  bool keyReleased(const OIS::KeyEvent &keyEventRef);
  bool mouseMoved(const OIS::MouseEvent &evt);
  bool mousePressed(const OIS::MouseEvent &evt, OIS::MouseButtonID id);
  bool mouseReleased(const OIS::MouseEvent &evt, OIS::MouseButtonID id);

  bool isKeyDown(const OIS::KeyCode key);
  bool isModifierDown(const OIS::Keyboard::Modifier mod);
  bool isButtonDown(const OIS::MouseButtonID button);

  int axisRelative(Axis axis);
  int axisAbsolute(Axis axis);

  void capture();

  void setGUI(OIS::KeyListener* key, OIS::MouseListener* mouse);

 private:
  OIS::InputManager* inputManager_;
  OIS::Keyboard*	 keyboard_;
  OIS::Mouse*	 mouse_;

  OIS::KeyListener* guiKey_;
  OIS::MouseListener* guiMouse_;
};

#endif // STORMFIGHTER_INPUT_H_
