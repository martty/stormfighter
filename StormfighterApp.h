#ifndef STORMFIGHTER_STORMFIGHTERAPP_H_
#define STORMFIGHTER_STORMFIGHTERAPP_H_

#include <map>
#include "OgreFramework.h"
#include <Terrain/OgreTerrain.h>
#include "Hierarchy.h"
#include "Physics.h"

class StormfighterApp : public OIS::KeyListener {
 public:
  StormfighterApp();
  ~StormfighterApp();

  void startStormfighter();
  bool keyPressed(const OIS::KeyEvent &keyEventRef);
  bool keyReleased(const OIS::KeyEvent &keyEventRef);

  /// Shorthand for OgreFramework::getSingletonPtr()->m_pLog->logMessage(string);
  void log(SString message);

  /// Set light used for lighting terrain
  void setTerrainLight(Ogre::Light* light);

  Physics* physics() const { return physics_; };

 private:
  void setupStormfighterScene();
  void runStormfighter();

  Ogre::TerrainGlobalOptions* terrainGlobals_;
  bool	 m_bShutdown;
  Hierarchy* hierarchy_;
  Physics* physics_;
};

#endif

