#ifndef STORMFIGHTER_PRIMITIVE_H_
#define STORMFIGHTER_PRIMITIVE_H_

#include "common.h"
#include "Mesh.h"
#include <OgreSceneManager.h>
#include "Transform.h"

namespace SF {

/**
 * @brief Prefab primitive from Ogre
 */
class Primitive : public Mesh {
 public:
  enum PrimitiveType {
    CUBE = Ogre::SceneManager::PT_CUBE,
    SPHERE = Ogre::SceneManager::PT_SPHERE,
    PLANE = Ogre::SceneManager::PT_PLANE
  };
  /// Create a Primitive component of type
  Primitive(PrimitiveType type);

  /// Destructor
  ~Primitive();

  Primitive* clone() const;

  virtual unsigned int onAdd(SString goname, Transform* transform);
 protected:
  SString name() const { return "Mesh/Primitive"; }
 private:
  PrimitiveType type_;
};

}; // namespace SF

#endif
