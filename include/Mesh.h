#ifndef STORMFIGHTER_MESH_H_
#define STORMFIGHTER_MESH_H_

#include "common.h"
#include <OgreEntity.h>
#include "MovableObject.h"

namespace SF{

/**
 * @brief Mesh (triangle appearance) component of a GameObject
 */
class Mesh : public MovableObject {
 public:
  /// Create an empty Mesh component (mesh can be changed at any time)
  Mesh();
  /// Create a Mesh component with meshname mesh loaded
  Mesh(SString meshname);

  /// Destructor
  ~Mesh();

  virtual void save() const;
  virtual void load();

  virtual Mesh* clone() const;

  virtual unsigned int onAdd(SString goname, Transform* transform);

  /// Set or change mesh
  void setMeshName(SString meshname);
  /// Get mesh name
  SString meshName();

  void setMaterialName(SString materialName);

  SAxisAlignedBox getBoundingBox() const;

  SReal getBoundingSphereRadius() const;

  // ANIMATION
  bool animated() const;
  void setAnimationStateEnabled(SString animstate, bool enabled);
  void setAnimationStateLoop(SString animstate, bool loop);
  void addAnimationTime(SString animstate, SReal time);

  Ogre::Entity* entity(){return entity_;}

  static Mesh* cast(Component* cmp) { return static_cast<Mesh*>(cmp); }

 protected:
  SString name() const { return "Mesh"; }

  Ogre::Entity* entity_;
  SString goname_;

  /// true if there is a proper entity; if false, this should NOT enter hierarchy
  bool valid_;

  Transform* transform_;
  SString meshname_, materialname_;
};

}; // namespace SF

#endif
