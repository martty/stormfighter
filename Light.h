#ifndef STORMFIGHTER_LIGHT_H_
#define STORMFIGHTER_LIGHT_H_

#include "common.h"
#include <OgreLight.h>
#include "Component.h"

class SLight : public Component {
 public:
  SLight(Ogre::Light::LightTypes type);

  SString const type() const { return "Terrain"; }

  SLight* clone() const;

  unsigned int onAdd(SString goname, STransform* transform);

  /// Set diffuse colour
  void setDiffuseColour(Ogre::ColourValue diffuse_colour);
  /// Set specular colour
  void setSpecularColour(Ogre::ColourValue specular_colour);

  /// Sets this light the light which is used to compute lightmaps for terrains
  void setAsTerrainLight();

 private:
  Ogre::Light* light_;
  Ogre::Light::LightTypes type_;
};

#endif
