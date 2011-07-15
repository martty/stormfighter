#ifndef STORMFIGHTER_CAMERA_H_
#define STORMFIGHTER_CAMERA_H_

#include "common.h"
#include <OgreCamera.h>
#include "Component.h"

/**
 * @brief Component for GameObject, represents a camera
 */
class SCamera : public Component {
 public:
  SCamera();
  ~SCamera();

  SString const type() const { return "Camera"; }

  void setNearClipDistance(SReal distance);
  void setAspectRatio(SReal ratio);

  void activate();

  unsigned int onAdd(SString goname, STransform* transform);

 private:

  Ogre::Camera* camera_;
};

#endif
