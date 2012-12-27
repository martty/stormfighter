#ifndef STORMFIGHTER_CAMERA_H_
#define STORMFIGHTER_CAMERA_H_

#include "common.h"
#include <OgreCamera.h>
#include "MovableObject.h"

namespace SF {

/**
 * @brief Component for GameObject, represents a camera
 */
class Camera : public MovableObject {
 public:
  enum PolygonMode {
    POINTS = Ogre::PM_POINTS,
    WIREFRAME = Ogre::PM_WIREFRAME,
    SOLID = Ogre::PM_SOLID
  };

  enum ProjectionType {
    ORTHOGRAPHIC = Ogre::PT_ORTHOGRAPHIC,
    PERSPECTIVE = Ogre::PT_PERSPECTIVE
  };

  Camera();
  ~Camera();

  virtual void save();
  virtual void load();

  Camera* clone() const;

  /// set near clip distance
  void setNearClipDistance(SReal distance);
  SReal nearClipDistance() const;

  /// set far clip distance
  void setFarClipDistance(SReal distance);
  SReal farClipDistance() const;

  /// set aspect ratio
  void setAspectRatio(SReal ratio);
  SReal aspectRatio() const;

  /// set polygon mode
  void setPolygonMode(PolygonMode polymode);
  Camera::PolygonMode polygonMode() const;

  /// set FOV (field of view) y coordinate in radians
  /// typical values between 45 and 60 degrees
  void setFOVy(SReal fovy);
  SReal FOVy() const;

  /// set projection type (wireframe/textured)
  void setProjectionType(ProjectionType pt);
  Camera::ProjectionType projectionType() const;

  /// sets this camera the default viewport's camera
  void activate();
  /// returns true if this camera is the default viewport's camera
  bool isActive() const;

  unsigned int onAdd(SString goname, Transform* transform);

  SAxisAlignedBox getBoundingBox() const;

  Ogre::Camera* _camera(){return camera_;}

 protected:
  SString name() const { return "Camera"; }

 protected:
  Ogre::Camera* camera_;
};

}; // namespace SF

#endif
