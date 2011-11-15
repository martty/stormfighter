#ifndef STORMFIGHTER_FRAME_H_
#define STORMFIGHTER_FRAME_H_

#include "common.h"
#include <OgreMatrix3.h>

namespace SF {

class Frame{
 public:
  Frame(const SVector3& position, const SQuaternion& orientation);
  ~Frame();

  inline const SVector3& position() const { return position_; }
  inline const SQuaternion& orientation() const { return orientation_; }

  Frame inverse() const;
  SVector3 operator*(const SVector3& x) const;
 private:
  SVector3 position_;
  Ogre::Matrix3 rotmatrix_;
  SQuaternion orientation_;
};

namespace Convert {
  static inline Frame toSF(const btTransform& tf){
	  return Frame(toOgre(tf.getOrigin()), toOgre(tf.getRotation()));
	}
	static inline btTransform toBullet(const Frame& fr){
	  return transform(fr.position(), fr.orientation());
	}
}; // namespace Convert

}; // namespace SF

#endif // STORMFIGHTER_FRAME_H_
