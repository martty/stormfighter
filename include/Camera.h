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
  Camera();
  ~Camera();

  Camera* clone() const;

  void setNearClipDistance(SReal distance);
  void setAspectRatio(SReal ratio);
  void setPolygonMode(Ogre::PolygonMode polymode);

  void activate();

  unsigned int onAdd(SString goname, Transform* transform);

  SAxisAlignedBox getBoundingBox() const;

 protected:
  SString name() const { return "Camera"; }

 private:

  Ogre::Camera* camera_;
};

}; // namespace SF

#endif
