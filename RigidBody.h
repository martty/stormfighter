#ifndef STORMFIGHTER_RIGIDBODY_H_
#define STORMFIGHTER_RIGIDBODY_H_

// FIXME: kisebb include
#include <btBulletDynamicsCommon.h>
#include "Component.h"
#include "Transform.h"
#include "GameObject.h"
#include "StormfighterApp.h"
#include "Collider.h"

class SRigidBody : public Component, public btMotionState {
 public:
  /** Default constructor */
  SRigidBody(SReal mass);
  /** Default destructor */
  ~SRigidBody();
  // MotionState overrides [BtOgre]
  /// get btTransform of object
  // FIXME: internal for bullet
  void getWorldTransform(btTransform &retVal) const;

  // FIXME: this should not be public, should be used by STransform
	void setKinematicPos(Ogre::Vector3 position, Ogre::Quaternion orientation);
  /// For Bullet (internal)
  // FIXME: this should not be public as well
	void setWorldTransform(const btTransform &transform);

	void onInit();

	SString const type() const { return "RigidBody"; }

 private:
  void init(SReal mass);

  SReal mass_;
  btRigidBody* rigidBody_;

  btTransform internalTransform_; // for motionstate
};

#endif // RIGIDBODY_H
