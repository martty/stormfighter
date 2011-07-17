#ifndef STORMFIGHTER_RIGIDBODY_H_
#define STORMFIGHTER_RIGIDBODY_H_

// FIXME: kisebb include
#include <btBulletDynamicsCommon.h>
#include "Component.h"
#include "Transform.h"

class SRigidBody : public Component, public btMotionState {
 friend class Physics;
 friend class STransform;
 public:
  /** Default constructor */
  SRigidBody(SReal mass);
  /** Default destructor */
  ~SRigidBody();

	void onInit();

	SString const type() const { return "RigidBody"; }

	void setKinematic(bool isKinematic);

	void setDamping(SReal linear, SReal angular);

	// FORCES & the like
	void applyCentralImpulse(Ogre::Vector3 direction);

	/// does not draw this rigidbody in debug drawing
	void disableDebugDraw();

	void flush();

 private:
  void init(SReal mass);

  // MotionState overrides [BtOgre]
  /// get btTransform of object (internal, for Physics)
  void getWorldTransform(btTransform &retVal) const;

  /// set position (only for kinematic objects, for STransform)
	void setKinematicTransform(Ogre::Vector3 position, Ogre::Quaternion orientation);
  /// set world transform (internal, for Physics)
	void setWorldTransform(const btTransform &transform);

  SReal mass_;
  btRigidBody* rigidBody_;
  bool isKinematic_; // until init
  unsigned int collisionFlags_;
  SReal lin_damp_, ang_damp_;

  btTransform internalTransform_; // for motionstate
};

#endif // RIGIDBODY_H
