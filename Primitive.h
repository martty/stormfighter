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
  /// Create a Primitive component of type
  SPrimitive(Ogre::SceneManager::PrefabType type);

  /// Destructor
  ~SPrimitive();

  /// The mesh component's type string is "Mesh/Primitive"
  SString const type() const { return "Mesh"; }

  virtual unsigned int onAdd(SString goname, STransform* transform);
 private:
  Ogre::SceneManager::PrefabType type_;
};

#endif
