#include "Frame.h"
#include <OgreMatrix4.h>

namespace SF {

Frame::Frame(const SVector3& position, const SQuaternion& orientation):position_(position), orientation_(orientation){
  Ogre::Matrix4 mat(orientation_);
  mat.extract3x3Matrix(rotmatrix_);
}

Frame::~Frame(){
  //dtor
}

Frame Frame::inverse() const{
  Ogre::Matrix3 inv = rotmatrix_.Transpose();
  return Frame(inv*-position_, SQuaternion(inv));
}

SVector3 Frame::operator*(const SVector3& x) const{
  return SVector3(SVector3(rotmatrix_[0]).dotProduct(x) + position_.x, SVector3(rotmatrix_[1]).dotProduct(x) + position_.y, SVector3(rotmatrix_[2]).dotProduct(x) + position_.z);
}

}; // namespace SF
