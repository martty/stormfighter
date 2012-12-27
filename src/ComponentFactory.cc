#include "ComponentFactory.h"

#include "Transform.h"
#include "Mesh.h"
#include "Light.h"
#include "Camera.h"

namespace SF {

ComponentFactory::ComponentFactory(){}

ComponentFactory::~ComponentFactory(){}

Component* ComponentFactory::createComponent(SString type){
  if(type == "Mesh")
    return createMesh();
  else if (type == "Camera")
    return createCamera();
  else if (type == "Light")
    return createLight();
  else
    throw SException("[ComponentFactory] Tried to create component, which I don't know of :"+type);
}


/** @brief (one liner)
  *
  * (documentation goes here)
  */
Camera* ComponentFactory::createCamera(){
  return new Camera();
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
Light* ComponentFactory::createLight(){
  return new Light();
}

/** @brief (one liner)
  *
  * (documentation goes here)
  */
Mesh* ComponentFactory::createMesh(){
  return new Mesh();
}

};
