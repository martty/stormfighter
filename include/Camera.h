#ifndef STORMFIGHTER_CAMERA_H_
#define STORMFIGHTER_CAMERA_H_

#include "common.h"
#include <OgreCamera.h>
#include "MovableObject.h"

/**
 * @brief Component for GameObject, represents a camera
 */
class SCamera : public SMovableObject {
 public:
  SCamera();
  ~SCamera();

  SCamera* clone() const;

  SString const type() const { return "Camera"; }

  void setNearClipDistance(SReal distance);
  void setAspectRatio(SReal ratio);
  void setPolygonMode(Ogre::PolygonMode polymode);

  void activate();

  unsigned int onAdd(SString goname, STransform* transform);

  SAxisAlignedBox getBoundingBox() const;

 private:

  Ogre::Camera* camera_;
};

#endif
