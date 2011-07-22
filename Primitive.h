#ifndef STORMFIGHTER_PRIMITIVE_H_
#define STORMFIGHTER_PRIMITIVE_H_

#include "common.h"
#include "Mesh.h"
#include "Transform.h"

/**
 * @brief Prefab primitive from Ogre
 */
class SPrimitive : public SMesh {
 public:
  enum PrimitiveType {
    CUBE = Ogre::SceneManager::PT_CUBE,
    SPHERE = Ogre::SceneManager::PT_SPHERE,
    PLANE = Ogre::SceneManager::PT_PLANE
  };
  /// Create a Primitive component of type
  SPrimitive(PrimitiveType type);

  /// Destructor
  ~SPrimitive();

  SPrimitive* clone() const;

  /// The mesh component's type string is "Mesh/Primitive"
  SString const type() const { return "Mesh"; }

  virtual unsigned int onAdd(SString goname, STransform* transform);
 private:
  PrimitiveType type_;
};

#endif
