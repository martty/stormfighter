#ifndef STORMFIGHTER_LIGHT_H_
#define STORMFIGHTER_LIGHT_H_

#include "common.h"
#include <OgreLight.h>
#include "MovableObject.h"

namespace SF {

class Light : public MovableObject {
 public:
  enum LightTypes {
    LT_POINT = Ogre::Light::LT_POINT,
    LT_DIRECTIONAL = Ogre::Light::LT_DIRECTIONAL,
    LT_SPOTLIGHT = Ogre::Light::LT_SPOTLIGHT
  };
  Light(LightTypes type);

  Light* clone() const;

  unsigned int onAdd(SString goname, Transform* transform);

  /// Set diffuse colour
  void setDiffuseColour(SColourValue diffuse_colour);

  /// Set specular colour
  void setSpecularColour(Ogre::ColourValue specular_colour);

  SAxisAlignedBox getBoundingBox() const;

  /// Sets this light the light which is used to compute lightmaps for terrains
  void setAsTerrainLight();

 protected:
  SString name() const { return "Light"; }

 private:
  Ogre::Light* light_;
  LightTypes type_;
};

}; // namespace SF

#endif
