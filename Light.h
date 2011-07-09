#ifndef STORMFIGHTER_LIGHT_H_
#define STORMFIGHTER_LIGHT_H_

#include "common.h"
#include <OgreLight.h>
#include "Component.h"

class SLight : public Component {
 public:
  SLight(Ogre::Light::LightTypes type);

  SString const type() const { return "Terrain"; }

  /// Set diffuse colour
  void setDiffuseColour(Ogre::ColourValue diffuse_colour);
  /// Set specular colour
  void setSpecularColour(Ogre::ColourValue specular_colour);

  /// Sets this light the light which is used to compute lightmaps for terrains
  void setAsTerrainLight();

  void onInit();

 private:
  void init(Ogre::Light::LightTypes type);
  Ogre::Light* light_;
};

#endif
