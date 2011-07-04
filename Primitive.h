#ifndef STORMFIGHTER_PRIMITIVE_H_
#define STORMFIGHTER_PRIMITIVE_H_

#include "common.h"
#include "Mesh.h"

/**
 * @brief Prefab primitive from Ogre
 */
class SPrimitive : public SMesh {
 public:
  /// Create a Primitive component of type
  SPrimitive(Ogre::SceneManager::PrefabType type);

  /// Destructor
  ~SPrimitive();

  /// The mesh component's type string is "Mesh"
  SString const type() const { return "Mesh/Primitive"; }

  /// At Ogre startup
  virtual void onInit();
 private:
  Ogre::SceneManager::PrefabType type_;
};

#endif
