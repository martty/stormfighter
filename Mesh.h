#ifndef STORMFIGHTER_MESH_H_
#define STORMFIGHTER_MESH_H_

#include "common.h"
#include <OgreEntity.h>
#include "Component.h"
#include "GameObject.h"

/**
 * @brief Mesh (triangle appearance) component of a GameObject
 */
class SMesh : public Component {
 public:
  /// Create an empty Mesh component (mesh can be changed at any time)
  SMesh();
  /// Create a Mesh component with meshname mesh loaded
  SMesh(MyString meshname);

  /// Destructor
  ~SMesh();

  /// The mesh component's type string is "Mesh"
  MyString const type() const { return "Mesh"; }

  /// At Ogre startup
  virtual void onInit();

  /// Set or change mesh
//  void setMesh(MyString meshname);
  /// Get mesh name
//  MyString meshname();

 private:
  Ogre::Entity* entity_;
  /// true if there is a proper entity; if false, this should NOT enter hierarchy
  bool valid_;

  MyString meshname_;
};

#endif
