#ifndef STORMFIGHTER_MESH_H_
#define STORMFIGHTER_MESH_H_
#include "common.h"
#include "Component.h"

/**
 * @brief Mesh (triangle appearance) component of a GameObject
 */
class Mesh : public Component {
 public:
  Mesh();
  ~Mesh(){}

  /// The mesh component's type string is "Mesh"
  MyString const type() const { return "Mesh"; }

 private:
  void init();

};

#endif
