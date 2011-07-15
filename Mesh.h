#ifndef STORMFIGHTER_MESH_H_
#define STORMFIGHTER_MESH_H_

#include "common.h"
#include <OgreEntity.h>
#include "Component.h"

/**
 * @brief Mesh (triangle appearance) component of a GameObject
 */
class SMesh : public Component {
 friend class SConvexHullCollider;
 friend class STrimeshCollider;
 public:
  /// Create an empty Mesh component (mesh can be changed at any time)
  SMesh();
  /// Create a Mesh component with meshname mesh loaded
  SMesh(SString meshname);

  /// Destructor
  ~SMesh();

  /// The mesh component's type string is "Mesh"
  SString const type() const { return "Mesh"; }

  virtual unsigned int onAdd(SString goname, STransform* transform);

  /// Set or change mesh
//  void setMesh(SString meshname);
  /// Get mesh name
//  SString meshname();

  void setMaterialName(SString materialName);

  const Ogre::AxisAlignedBox* getBounds();

  SReal getBoundingSphereRadius() const;

  bool animated() const;

 protected:
  Ogre::Entity* entity_;

  Ogre::Entity* entity(){return entity_;}
  /// true if there is a proper entity; if false, this should NOT enter hierarchy
  bool valid_;
 private:

  SString meshname_;
};

#endif
