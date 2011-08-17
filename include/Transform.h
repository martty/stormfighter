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
   * @param scale Scale vector
   */
  STransform(SVector3 position, SQuaternion orientation, SVector3 scale);

  /// Same as above but without rotation & scale
  explicit STransform(SVector3 position);

  /// Construct Transform, which may or may not be root (identity)
  explicit STransform(bool isRoot);

  /// Construct non-root identity Transform
  STransform();

  /// Destroy transform component
  ~STransform();

  /// clones the component
  STransform* clone() const;

  /// The Transform component's type string is @b "Transform"
  SString const type() const { return "Transform"; }

  // POSITION, ORIENTATION, SCALE (local space)
  const SVector3& position() const{return node_->getPosition();}
  const SQuaternion& orientation() const{return node_->getOrientation();}
  const SVector3& scale() const{return node_->getScale();}

  void setPosition(const SVector3 position);
  void setOrientation(const SQuaternion orientation);
  void setScale(const SVector3 scale){node_->setScale(scale);}

  const Ogre::Matrix4& worldMatrix() const;

  // POSITION, ORIENTATION (world space)
  const SVector3& worldPosition() const;
  const SQuaternion& worldOrientation() const;

  // ADVANCED TRANSFORMS

  void lookAt(const SVector3 position); /// worldspace, -z (like camera lookAt)

  void move(const SVector3 delta); /// equivalent of setPosition(position()+delta)
  void moveRelative(const SVector3 delta); /// equivalent of setPosition(position()+orientation*delta)

  void rotate(const SQuaternion delta); /// equivalent of setOrientation(orientation() * delta)

  void yaw(const Ogre::Radian angle);
  void pitch(const Ogre::Radian angle);
  void roll(const Ogre::Radian angle);

  void setFixedYawAxis(bool useFixed, const SVector3 fixedAxis);

  void setInheritScale(bool inherit);

  void setInheritOrientation(bool inherit);

  void setVisible(bool visible, bool cascade);

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
  DISALLOW_COPY_AND_ASSIGN(STransform);
   // INTERNAL FOR MOTIONSTATE
  void _setPosition(SVector3 position){node_->setPosition(position);}
  void _setOrientation(SQuaternion orientation){node_->setOrientation(orientation);}

  void _notifyTransformChange();

  Ogre::SceneNode* node_;

  bool isRoot_;

  void init(SVector3 position, SQuaternion orientation, SVector3 scale);
};

#endif
