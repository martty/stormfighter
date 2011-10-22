#include "Collider.h"
#include "GameObject.h"

namespace SF {

btTransform Collider::shapeTransform(){
  if(hasInterface()){
    return Convert::transform(object()->transform()->worldPosition(), object()->transform()->worldOrientation());
  } else {
    btTransform tf;
    tf.setIdentity();
    return tf;
  }
}

Collider* Collider::clone() const{
  return NULL; // FIXME
}

}; // namespace SF
