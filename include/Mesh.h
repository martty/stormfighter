#ifndef STORMFIGHTER_MESH_H_
#define STORMFIGHTER_MESH_H_

#include "common.h"
#include <OgreEntity.h>
#include "MovableObject.h"

/**
 * @brief Mesh (triangle appearance) component of a GameObject
 */
class SMesh : public SMovableObject {
 public:
  /// Create an empty Mesh component (mesh can be changed at any time)
  SMesh();
  /// Create a Mesh component with meshname mesh loaded
  SMesh(SString meshname);

  /// Destructor
  ~SMesh();

  /// The mesh component's type string is "Mesh"
  SString const type() const { return "Mesh"; }

  virtual SMesh* clone() const;

  virtual unsigned int onAdd(SString goname, STransform* transform);

  /// Set or change mesh
//  void setMesh(SString meshname);
  /// Get mesh name
//  SString meshname();

  void setMaterialName(SString materialName);

  SAxisAlignedBox getBoundingBox() const;

  SReal getBoundingSphereRadius() const;

  // ANIMATION
  bool animated() const;
  void setAnimationStateEnabled(SString animstate, bool enabled);
  void setAnimationStateLoop(SString animstate, bool loop);
  void addAnimationTime(SString animstate, SReal time);

  Ogre::Entity* entity(){return entity_;}

  static SMesh* cast(Component* cmp) { return static_cast<SMesh*>(cmp); }

 protected:
  Ogre::Entity* entity_;

  /// true if there is a proper entity; if false, this should NOT enter hierarchy
  bool valid_;

  STransform* transform_;
 private:

  SString meshname_;
};

#endif