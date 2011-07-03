#ifndef STORMFIGHTER_STORMFIGHTERAPP_H_
#define STORMFIGHTER_STORMFIGHTERAPP_H_

#include <map>
#include "OgreFramework.h"
#include "GameObject.h"
#include "Mesh.h"
#include "Camera.h"
#include "Terrain.h"

class StormfighterApp : public OIS::KeyListener {
 public:
  StormfighterApp();
  ~StormfighterApp();

  void startStormfighter();
  bool keyPressed(const OIS::KeyEvent &keyEventRef);
  bool keyReleased(const OIS::KeyEvent &keyEventRef);

 private:
  void setupStormfighterScene();
  void runStormfighter();

  Ogre::TerrainGlobalOptions* terrainGlobals_;
  bool	 m_bShutdown;
};

#endif

