#include "GUI.h"

GUI::GUI(Input* input){
  // init sdktraymanager
  trayManager_ = new OgreBites::SdkTrayManager("TrayMgr", OgreFramework::getSingletonPtr()->defaultRenderWindow(), input->mouse_, this);
  trayManager_->showFrameStats(OgreBites::TL_BOTTOMLEFT);
  trayManager_->showLogo(OgreBites::TL_BOTTOMRIGHT);
  trayManager_->hideCursor();
  input->setGUI(this, this);
}

GUI::~GUI(){
  delete trayManager_;
  trayManager_ = NULL;
}

void GUI::update(double deltaTime){
  Ogre::FrameEvent evt;
  evt.timeSinceLastFrame = deltaTime;
  trayManager_->frameRenderingQueued(evt);
}

bool GUI::keyPressed(const OIS::KeyEvent& evt){
  if(evt.key == OIS::KC_O){
    if(trayManager_->isLogoVisible()){
      trayManager_->hideLogo();
      trayManager_->hideFrameStats();
    } else {
      trayManager_->showLogo(OgreBites::TL_BOTTOMRIGHT);
      trayManager_->showFrameStats(OgreBites::TL_BOTTOMLEFT);
    }
  }
  return false;
}

bool GUI::keyReleased(const OIS::KeyEvent &keyEventRef) {
  return false;
}

bool GUI::mousePressed(const OIS::MouseEvent& evt, OIS::MouseButtonID id) {
  if (trayManager_->injectMouseDown(evt, id))
    return true;
    /* normal mouse processing here... */
  return false;
}

bool GUI::mouseReleased(const OIS::MouseEvent& evt, OIS::MouseButtonID id) {
  if (trayManager_->injectMouseUp(evt, id))
    return false;
  /* normal mouse processing here... */
  return false;
}

bool GUI::mouseMoved(const OIS::MouseEvent& evt) {
  if (trayManager_->injectMouseMove(evt))
    return true;
  return false;
}
