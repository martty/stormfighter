#include "Transform.h"

using namespace Ogre ;
void Transform::init (Vector3 position, Quaternion orientation){
  position_ = position;
  orientation_ = orientation;

  node_ = NULL;
}

Transform::Transform(Vector3 position, Quaternion orientation){
  init(position,orientation);
}

Transform::Transform(Vector3 position){
  init(position,
       Quaternion(Radian(0.0), Vector3(1.0, 0.0, 0.0)));
}

Transform::Transform(){
  init(Vector3(0.0, 0.0, 0.0),
       Quaternion(Radian(0.0), Vector3(1.0, 0.0, 0.0)));
}
