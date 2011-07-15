#ifndef STORMFIGHTER_STRANSFORM_H_
#define STORMFIGHTER_STRANSFORM_H_

#include "common.h"
#include <OgreSceneNode.h>
#include "Component.h"

/**
 * @brief Mandatory component for GameObject, sets position, orientation and scale
 */
class STransform : public Component {
 friend class SRigidBody;
 public:

  /**
   * @brief Contructor of transform
   * @param position Translation vector
   * @param orientation Rotation quaternion
   */
  STransform(Ogre::Vector3 position, Ogre::Quaternion orientation);

  /// Same as above but without rotation
  explicit STransform(Ogre::Vector3 position);

  /// Construct Transform, which may or may not be root (identity)
  explicit STransform(bool isRoot);

  /// Construct non-root identity Transform
  STransform();

  /// Destroy transform component
  ~STransform();

  /// The Transform component's type string is @b "Transform"
  SString const type() const { return "Transform"; }

  // POSITION, ORIENTATION, SCALE
  Ogre::Vector3 const position(){return node_->getPosition();}
  Ogre::Quaternion const orientation(){return node_->getOrientation();}
  Ogre::Vector3 const scale(){return node_->getScale();}

  void setPosition(const Ogre::Vector3 position);
  void setOrientation(const Ogre::Quaternion orientation);
  void setScale(const Ogre::Vector3 scale){node_->setScale(scale);}

  // ADVANCED TRANSFORMS

  void lookAt(const Ogre::Vector3 position); /// worldspace, -z (like camera lookAt)

  void move(const Ogre::Vector3 delta); /// equivalent of setPosition(position()+delta)
  void moveRelative(const Ogre::Vector3 delta); /// equivalent of setPosition(position()+orientation*delta)

  void yaw(const Ogre::Radian angle);
  void pitch(const Ogre::Radian angle);
  void roll(const Ogre::Radian angle);

  // PARENTING
  STransform* const parent();
  void setParent(STransform* parent);
  void addChild(STransform* child);

  // DEBUG
  void showBoundingBox(bool show);

  // Ogre specific
  /// Attach Ogre::MovableObject to this STransform
  void attachObject(Ogre::MovableObject* object);
  /// Detach Ogre::MovableObject from this STransform
  void detachObject(Ogre::MovableObject* object);

 private:
   // INTERNAL FOR MOTIONSTATE
  void _setPosition(Ogre::Vector3 position){node_->setPosition(position);}
  void _setOrientation(Ogre::Quaternion orientation){node_->setOrientation(orientation);}

  Ogre::SceneNode* node_;

  bool isRoot_;

  void init(Ogre::Vector3 position, Ogre::Quaternion orientation, Ogre::Vector3 scale);
};

#endif
