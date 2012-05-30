#include "Input.h"
#include <OgreStringConverter.h>

namespace SF {

Input::Input(Ogre::RenderWindow* renderWindow){
  const bool events = true;

  unsigned long hWnd = 0;
  OIS::ParamList paramList;
  renderWindow->getCustomAttribute("WINDOW", &hWnd);
  paramList.insert(OIS::ParamList::value_type("WINDOW", Ogre::StringConverter::toString(hWnd)));
#if defined OIS_WIN32_PLATFORM
  paramList.insert(std::make_pair(std::string("w32_mouse"), std::string("DISCL_FOREGROUND" )));
  paramList.insert(std::make_pair(std::string("w32_mouse"), std::string("DISCL_NONEXCLUSIVE")));
  paramList.insert(std::make_pair(std::string("w32_keyboard"), std::string("DISCL_FOREGROUND")));
  paramList.insert(std::make_pair(std::string("w32_keyboard"), std::string("DISCL_NONEXCLUSIVE")));
#elif defined OIS_LINUX_PLATFORM
  paramList.insert(std::make_pair(std::string("x11_mouse_grab"), std::string("false")));
  paramList.insert(std::make_pair(std::string("x11_mouse_hide"), std::string("false")));
  paramList.insert(std::make_pair(std::string("x11_keyboard_grab"), std::string("false")));
  paramList.insert(std::make_pair(std::string("XAutoRepeatOn"), std::string("true")));
#endif
  inputManager_ = OIS::InputManager::createInputSystem(paramList);

  keyboard_ = static_cast<OIS::Keyboard*>(inputManager_->createInputObject(OIS::OISKeyboard, events));
  mouse_ = static_cast<OIS::Mouse*>(inputManager_->createInputObject(OIS::OISMouse, events));
  mouse_->getMouseState().height = renderWindow->getHeight();
  mouse_->getMouseState().width	 = renderWindow->getWidth();

  keyboard_->setEventCallback(this);
  mouse_->setEventCallback(this);
}

Input::~Input(){
  if(inputManager_)
    OIS::InputManager::destroyInputSystem(inputManager_);
}

bool Input::keyPressed(const OIS::KeyEvent &keyEventRef){
  /*if(m_pKeyboard->isKeyDown(OIS::KC_SYSRQ))
  {
      renderWindow_->writeContentsToTimestampedFile("BOF_Screenshot_", ".png");
      return true;
  }*/
  if(guiKey_)
    guiKey_->keyPressed(keyEventRef);
  return true;
}

bool Input::keyReleased(const OIS::KeyEvent &keyEventRef){
  if(guiKey_)
    guiKey_->keyReleased(keyEventRef);
  return true;
}

bool Input::mouseMoved(const OIS::MouseEvent &evt){
  if(guiMouse_)
    guiMouse_->mouseMoved(evt);
  return true;
}

bool Input::mousePressed(const OIS::MouseEvent &evt, OIS::MouseButtonID id){
  if(guiMouse_)
    guiMouse_->mousePressed(evt, id);
  return true;
}

bool Input::mouseReleased(const OIS::MouseEvent &evt, OIS::MouseButtonID id){
  if(guiMouse_)
    guiMouse_->mouseReleased(evt, id);
  return true;
}

void Input::capture(){
  keyboard_->capture();
  mouse_->capture();
}

bool Input::isKeyDown(const OIS::KeyCode key){
  return keyboard_->isKeyDown(key);
}

bool Input::isModifierDown(const OIS::Keyboard::Modifier mod){
  return keyboard_->isModifierDown(mod);
}

bool Input::isButtonDown(const OIS::MouseButtonID button){
  return mouse_->getMouseState().buttonDown(button);
}

int Input::axisRelative(Axis axis){
  switch(axis){
    case X : return mouse_->getMouseState().X.rel;
    case Y : return mouse_->getMouseState().Y.rel;
    case Z : return mouse_->getMouseState().Z.rel;
    default: return 0;
  }
}

int Input::axisAbsolute(Axis axis){
  switch(axis){
    case X : return mouse_->getMouseState().X.abs;
    case Y : return mouse_->getMouseState().Y.abs;
    case Z : return mouse_->getMouseState().Z.abs;
    default: return 0;
  }
}

void Input::setGUI(OIS::KeyListener* key, OIS::MouseListener* mouse){
  guiKey_ = key;
  guiMouse_ = mouse;
}

}; // namespace SF
