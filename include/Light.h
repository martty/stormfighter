#ifndef STORMFIGHTER_LIGHT_H_
#define STORMFIGHTER_LIGHT_H_

#include "common.h"
#include <OgreLight.h>
#include "MovableObject.h"

namespace SF {
/********************************************//**
 * @brief Light component
 *
 * This makes the GameObject which has this Component act like a light source.
 * There are three types of lights : point, directional and spotlight.
 *
 * The class is a wrapper for the implementation of a light source of the Graphics engine (Ogre::Light).
 ***********************************************/
class Light : public MovableObject {
 public:
  /// Enum of light types, importing Ogre constants
  enum LightType {
    POINT = Ogre::Light::LT_POINT, /// Point light
    DIRECTIONAL = Ogre::Light::LT_DIRECTIONAL, /// Directional light
    SPOTLIGHT = Ogre::Light::LT_SPOTLIGHT /// Spotlight
  };

  Light();

  ~Light();

  virtual void save();
  virtual void load();

  Light* clone() const;

  /// Set light type
  void setLightType(LightType type);
  /// Get light type
  LightType lightType() const;

  /// Set diffuse colour
  void setDiffuseColour(SColourValue diffuse_colour);
  /// Get diffuse colour
  const SColourValue& diffuseColour() const;

  /// Set specular colour
  void setSpecularColour(SColourValue specular_colour);
  /// Get specular colour
  const SColourValue& specularColour() const;

  /// Returns the bounding box for this Light
  SAxisAlignedBox getBoundingBox() const;

  /// Sets this light the light which is used to compute lightmaps for terrains
  void setAsTerrainLight();

  unsigned int onAdd(SString goname, Transform* transform);

 protected:
  SString name() const { return "Light"; }

 private:
  Ogre::Light* light_;
};

}; // namespace SF

#endif
