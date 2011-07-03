#ifndef STORMFIGHTER_TRANSFORM_H_
#define STORMFIGHTER_TRANSFORM_H_

#include "common.h"
#include <OgreSceneNode.h>
#include "Component.h"

/**
 * @brief Non-mandatory component for GameObject, sets position and orientation
 */
class Transform : public Component {
 public:

  /**
   * @brief Contructor of transfer
   * @param position Translation vector
   * @param orientation Rotation quaternion
   */
  Transform(Ogre::Vector3 position, Ogre::Quaternion orientation);

  /// Same as above but without rotation
  explicit Transform(Ogre::Vector3 position);

  /// Same as above but transform will be identity
  Transform();

  /// Destroy transform component
  ~Transform(){return;}

  /// The transform component's type string is @b "Transform"
  MyString const type() const { return "Transform"; }

  // POSITION, ORIENTATION, SCALE
  Ogre::Vector3 const position(){ return position_;}
  Ogre::Quaternion const orientation(){return orientation_;}
  Ogre::Vector3 const scale();

  void setPosition(Ogre::Vector3 position);
  void setOrientation(Ogre::Quaternion orientation);
  void setScale(Ogre::Vector3 scale);

  // PARENTING
  Transform* const parent();
  void setParent(Transform* parent);

 private:
  Ogre::Vector3 position_;
  Ogre::Quaternion orientation_;
  Ogre::SceneNode* node_;

  void init(Ogre::Vector3 position, Ogre::Quaternion orientation);
};

#endif
