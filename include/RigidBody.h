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

  SRigidBody* clone() const;

	void onInit();

	SString const type() const { return "RigidBody"; }

	void setKinematic(bool isKinematic);
	void setStatic(bool isStatic);
	void setCollisionResponse(bool hasResponse);
	void setCallbacks(bool hasCallbacks);

	bool kinematic() const { return flag(btCollisionObject::CF_KINEMATIC_OBJECT); }
	bool static_() const { return false; }; // TODO: na most mi a teendõ?
  bool trigger() const {return flag(btCollisionObject::CF_NO_CONTACT_RESPONSE); }
  SReal mass() const { return mass_; }

	void setCollisionGroup(SString group);
	void setCollidesWith(StringVector collidesWith);

  // CONSTRAINTS
	void addPoint2PointConstraint(const SVector3& pivotInA);
	void addPoint2PointConstraint(SRigidBody* rbB, const SVector3& pivotInA, const SVector3& pivotInB);

	void setDamping(SReal linear, SReal angular);

	void setLinearVelocity(SVector3 linvel);
	SVector3 linearVelocity();
	void setAngularVelocity(SVector3 angvel);
	SVector3 angularVelocity();

	// FORCES & the like
	void applyCentralImpulse(Ogre::Vector3 direction);

	/// does not draw this rigidbody in debug drawing
	void disableDebugDraw();

	static inline SRigidBody* cast(Component* cmp) {return static_cast<SRigidBody*>(cmp);}

	btRigidBody* rigidBody() { return rigidBody_; }

	void add();
	void remove();

 private:
  void init(SReal mass);

  // MotionState overrides [BtOgre]
  /// get btTransform of object (internal, for Physics)
  void getWorldTransform(btTransform &retVal) const;

  /// set position (only for kinematic objects, for STransform)
	void setKinematicTransform(Ogre::Vector3 position, Ogre::Quaternion orientation);
  /// set world transform (internal, for Physics)
	void setWorldTransform(const btTransform &transform);

	void setFlag(unsigned int flag);
	void unsetFlag(unsigned int flag);
	void setFlagTo(unsigned int flag, bool set);

	bool flag(unsigned int flag) const;

	void flush();

  SReal mass_;
  btRigidBody* rigidBody_;
  bool isKinematic_; // until init
  unsigned int collisionFlags_;
  SReal lin_damp_, ang_damp_;

  SString group_;
  StringVector collidesWith_;
  std::vector< btTypedConstraint* > constraints_;

  btTransform internalTransform_; // for motionstate
};

#endif // RIGIDBODY_H
