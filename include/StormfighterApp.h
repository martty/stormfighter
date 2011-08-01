#ifndef STORMFIGHTER_STORMFIGHTERAPP_H_
#define STORMFIGHTER_STORMFIGHTERAPP_H_

#include "common.h"
#include <map>
#include <OgreFrameListener.h>
class Logger;
class Graphics;
class Physics;
class Input;
class Hierarchy;
class Scripting;
class GUI;

class StormfighterApp : public Ogre::FrameListener{
 public:
  StormfighterApp();
  ~StormfighterApp();

  void startStormfighter();

  /// Shorthand for Logger:getSingletonPtr()->logMessage(string);
  void log(const SString& message);

  Graphics* graphics() const { return graphics_; }

  Physics* physics() const { return physics_; }

  Input* input() const {return input_; }

  Hierarchy* hierarchy() const { return hierarchy_; }

  Scripting* scripting() const { return scripting_; }

  double inline deltaTime() const {return deltaTime_;}

  void setPhysicsDeltaTime(SReal pdt) {physicsDeltaTime_ = pdt; }

  SReal inline physicsDeltaTime() const { return physicsDeltaTime_; }

  // game specific
  void lose() { hasLost_ = true; isPlaying_ = false; }
  void win() {hasWon_ = true; isPlaying_ = false; }

  bool frameStarted(const Ogre::FrameEvent& evt);

 private:
  void setupStormfighterScene();
  void runStormfighter();

  bool	 m_bShutdown;
  Logger* logger_;
  Graphics* graphics_;
  Hierarchy* hierarchy_;
  Physics* physics_;
  Input* input_;
  GUI* gui_;
  Scripting* scripting_;
  double deltaTime_;
  SReal physicsDeltaTime_;

  bool hasWon_;
  bool hasLost_;
  bool isPlaying_;
};

#endif

