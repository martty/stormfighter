#include "Collider.h"
#include "GameObject.h"

btTransform SCollider::shapeTransform(){
  if(hasInterface()){
    return Convert::transform(object()->transform()->worldPosition(), object()->transform()->worldOrientation());
  } else {
    btTransform tf;
    tf.setIdentity();
    return tf;
  }
}
