#ifndef STORMFIGHTER_COMPONENTFACTORY_H_
#define STORMFIGHTER_COMPONENTFACTORY_H_

#include "common.h"

namespace SF {
  class Mesh;
  class Light;
  class Camera;

/********************************************//**
 * @brief Class for creating core Components
 *
 ***********************************************/
class ComponentFactory {
 public:
  /// creates a Component determined by @param type
  static Component* createComponent(SString type);
  // graphics
  static Mesh* createMesh();
  static Light* createLight();
  static Camera* createCamera();
  // physics
  // TODO!
 private:
  ComponentFactory();
  ~ComponentFactory();
};

};

#endif // STORMFIGHTER_COMPONENTFACTORY_H_
