#ifndef STORMFIGHTER_STORMFIGHTERAPP_H_
#define STORMFIGHTER_STORMFIGHTERAPP_H_

#include "OgreFramework.h"
#include "GameObject.h"

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

    Ogre::SceneNode*	 m_pCubeNode;
    Ogre::Entity*	 m_pCubeEntity;
    bool	 m_bShutdown;
};

#endif

