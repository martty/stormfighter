#ifndef STORMFIGHTER_STORMFIGHTERAPP_H_
#define STORMFIGHTER_STORMFIGHTERAPP_H_

#include <map>
#include "OgreFramework.h"
#include <Terrain/OgreTerrain.h>
#include "Hierarchy.h"
#include "Physics.h"
#include "Input.h"
#include "GUI.h"

class StormfighterApp : public Ogre::FrameListener{
 public:
  StormfighterApp();
  ~StormfighterApp();

  void startStormfighter();

  /// Shorthand for OgreFramework::getSingletonPtr()->m_pLog->logMessage(string);
  void log(SString message);

  /// Set light used for lighting terrain
  void setTerrainLight(Ogre::Light* light);

  Physics* physics() const { return physics_; }

  Input* input() const {return input_; }

  Hierarchy* hierarchy() const { return hierarchy_; }

  double inline deltaTime() const {return deltaTime_;}

  void setPhysicsDeltaTime(SReal pdt) {physicsDeltaTime_ = pdt; }

  SReal inline physicsDeltaTime() const { return physicsDeltaTime_; }

  bool frameStarted(const Ogre::FrameEvent& evt);

 private:
  void setupStormfighterScene();
  void runStormfighter();

  Ogre::TerrainGlobalOptions* terrainGlobals_;
  bool	 m_bShutdown;
  Hierarchy* hierarchy_;
  Physics* physics_;
  Input* input_;
  GUI* gui_;
  double deltaTime_;
  SReal physicsDeltaTime_;
};

#endif

