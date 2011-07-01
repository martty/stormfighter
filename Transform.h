#ifndef STORMFIGHTER_TRANSFORM_H_
#define STORMFIGHTER_TRANSFORM_H_

#include "common.h"
#include <OgreSceneNode.h>
#include "Component.h"

class Transform : public Component {
 public:
  Transform(); // IDENTITY
  Transform(Ogre::Vector3 position);
  Transform(Ogre::Vector3 position, Ogre::Quaternion orientation);

  ~Transform();

  MyString const type(){ return "Transform"; }

  // POSITION, ORIENTATION, SCALE
  Ogre::Vector3 const position();
  Ogre::Quaternion const orientation();
  Ogre::Vector3 const scale();

  void setPosition(Ogre::Vector3 position);
  void setOrientation(Ogre::Quaternion orientation);
  void setScale(Ogre::Vector3 scale);

  // PARENTING
  Transform* const parent();
  void setParent(Transform* parent);

 private:
  Ogre::SceneNode* node_;
};

#endif
