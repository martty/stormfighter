// FROM BTOGRE

#ifndef STORMFIGHTER_BULLETOGREGLUE_H_
#define STORMFIGHTER_BULLETOGREGLUE_H_

#include <LinearMath/btVector3.h>
#include <LinearMath/btQuaternion.h>
#include <LinearMath/btTransform.h>
#include <OgreVector3.h>
#include <OgreQuaternion.h>
//#include "Frame.h"

namespace SF {

namespace Convert {

	static inline btQuaternion toBullet(const Ogre::Quaternion &q){
		return btQuaternion(q.x, q.y, q.z, q.w);
	}
	static inline btVector3 toBullet(const Ogre::Vector3 &v){
		return btVector3(v.x, v.y, v.z);
	}

	static inline Ogre::Quaternion toOgre(const btQuaternion &q){
		return Ogre::Quaternion(q.w(), q.x(), q.y(), q.z());
	}
	static inline Ogre::Vector3 toOgre(const btVector3 &v){
		return Ogre::Vector3(v.x(), v.y(), v.z());
	}

  // OWN
	static inline btTransform transform(const Ogre::Vector3 &position, const Ogre::Quaternion &orientation){
	  return btTransform(toBullet(orientation), toBullet(position));
	}
};

}; // namespace SF

#endif
