#ifndef STORMFIGHTER_GRAPHICS_H_
#define STORMFIGHTER_GRAPHICS_H_

#include "common.h"
#include "Module.h"
#include <Ogre.h>

namespace SF {

/**
* @brief Class managing the graphics module (Ogre)
*
*
*/

class DebugDrawer;
class PagedTerrain;
class Graphics : public Module, public Ogre::Singleton<Graphics>, Ogre::RenderTargetListener{
 public:
  Graphics(StormfighterApp* app, const SString& windowTitle);
  ~Graphics();

  bool initialise();
  void initializeResources();

  virtual void preRenderTargetUpdate(const Ogre::RenderTargetEvent& evt);
	virtual void postRenderTargetUpdate(const Ogre::RenderTargetEvent& evt);

  /// Set light used for lighting terrain
  void setTerrainLight(Ogre::Light* light);

  PagedTerrain* pagedTerrain() { return pagedTerrain_; }

  void addFrameListener(Ogre::FrameListener* listener);

  void startRendering();

  /// Renders a single GameObject & saves it as a file
  void renderGameObjectIntoFile(GameObject* go, SString filename, SReal width, SReal height);

  /// Returns the names of loaded Materials
  StringVector getLoadedMaterialNames();

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

  void setSkyBoxMaterial(SString mat);
  void setSkyBoxEnabled(bool enable);

  DebugDrawer* debugDrawer(){ return debugDrawer_; }
 private:
  DISALLOW_COPY_AND_ASSIGN(Graphics);

  Ogre::Root*	 root_;

  Ogre::SceneManager* sceneManager_;

  DebugDrawer* debugDrawer_;

  Ogre::String pluginsCfg_;

  SString windowTitle_;
  GameObject* rttGameObject_;

  SString skyBoxMaterialName_;

  std::map<SString, bool> vismap_;

  Ogre::Camera* defaultCamera_;
  Ogre::Camera* rttCamera_;
  Ogre::RenderWindow*	 renderWindow_;
  Ogre::Viewport*	 viewport_;

  PagedTerrain* pagedTerrain_;


  Ogre::RaySceneQuery* ray_scene_query_;

  void getMeshInformation(Ogre::Entity *entity, size_t &vertex_count, Ogre::Vector3* &vertices, size_t &index_count, Ogre::uint32* &indices,
                                  const Ogre::Vector3 &position, const Ogre::Quaternion &orient,
                                  const Ogre::Vector3 &scale);
  void tagHierarchyForVisibility(GameObject* start);
};

}; // namespace SF

#endif // STORMFIGHTER_GRAPHICS_H_
