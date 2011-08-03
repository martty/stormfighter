#ifndef STORMFIGHTER_GRAPHICS_H_
#define STORMFIGHTER_GRAPHICS_H_

#include "common.h"
#include <Terrain/OgreTerrain.h>

/**
* @brief Class managing the graphics module (Ogre)
*
*
*/

class Graphics : public Ogre::Singleton<Graphics>{
 public:
  Graphics();
  ~Graphics();

  bool initialize(const SString& windowTitle);

  /// Set light used for lighting terrain
  void setTerrainLight(Ogre::Light* light);

  void addFrameListener(Ogre::FrameListener* listener);

  void startRendering();

  /// Return a SRay through active camera at (x,y) coordinates
  SRay activeCameraToViewportRay(SReal screenx, SReal screeny);

  /// Raycast into the scene (accurate)
  SingleRayCastResult closestExactRayQuery(SRay ray);
  /// Set Camera to render on the default viewport
  void setActiveCamera(Ogre::Camera* camera);
  /// Get Camera of the default viewport
  Ogre::Camera* activeCamera() const;

  /// Get aspect ratio of default viewport
  Ogre::Real getDefaultAspectRatio();

  /// Get default viewport
  inline Ogre::Viewport* defaultViewport() const{ return viewport_; }

  /// Get default renderwindow (for stats)
  inline Ogre::RenderWindow* defaultRenderWindow() const{ return renderWindow_; }

  /// Get SceneManager
  inline Ogre::SceneManager* sceneManager() const{ return sceneManager_; }
 private:
  DISALLOW_COPY_AND_ASSIGN(Graphics);

  Ogre::Root*	 root_;

  Ogre::SceneManager* sceneManager_;

  Ogre::String resourcesCfg_;
  Ogre::String pluginsCfg_;

  Ogre::Camera*	 defaultCamera_;
  Ogre::RenderWindow*	 renderWindow_;
  Ogre::Viewport*	 viewport_;

  Ogre::TerrainGlobalOptions* terrainGlobals_;

  Ogre::RaySceneQuery* ray_scene_query_;

  void getMeshInformation(Ogre::Entity *entity, size_t &vertex_count, Ogre::Vector3* &vertices, size_t &index_count, Ogre::uint32* &indices,
                                  const Ogre::Vector3 &position, const Ogre::Quaternion &orient,
                                  const Ogre::Vector3 &scale);
};

#endif // STORMFIGHTER_GRAPHICS_H_
