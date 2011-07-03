#ifndef STORMFIGHTER_STRANSFORM_H_
#define STORMFIGHTER_STRANSFORM_H_

#include "common.h"
#include <OgreSceneNode.h>
#include "Component.h"

/**
 * @brief Mandatory component for GameObject, sets position, orientation and scale
 */
class STransform : public Component {
 public:

  /**
   * @brief Contructor of transfer
   * @param position Translation vector
   * @param orientation Rotation quaternion
   */
  STransform(Ogre::Vector3 position, Ogre::Quaternion orientation);

  /// Same as above but without rotation
  explicit STransform(Ogre::Vector3 position);

  /// Same as above but transform will be identity
  STransform();

  /// Destroy transform component
  ~STransform();

  /// The Transform component's type string is @b "Transform"
  SString const type() const { return "Transform"; }

  // POSITION, ORIENTATION, SCALE
  Ogre::Vector3 const position(){return node_->getPosition();}
  Ogre::Quaternion const orientation(){return node_->getOrientation();}
  Ogre::Vector3 const scale(){return node_->getScale();}

  void setPosition(Ogre::Vector3 position){node_->setPosition(position);}
  void setOrientation(Ogre::Quaternion orientation){node_->setOrientation(orientation);}
  void setScale(Ogre::Vector3 scale){node_->setScale(scale);}

  // ADVANCED TRANSFORMS

  void lookAt(Ogre::Vector3 position); // worldspace, -z (like camera lookAt)

  // PARENTING
  STransform* const parent();
  void setParent(STransform* parent);

  // Ogre specific
  /// Attach Ogre::MovableObject to this STransform
  void attachObject(Ogre::MovableObject* object);
  /// Detach Ogre::MovableObject from this STransform
  void detachObject(Ogre::MovableObject* object);

 private:
  Ogre::SceneNode* node_;

  void init(Ogre::Vector3 position, Ogre::Quaternion orientation, Ogre::Vector3 scale);
};

#endif