#ifndef STORMFIGHTER_RIGIDBODY_H_
#define STORMFIGHTER_RIGIDBODY_H_

// FIXME: kisebb include
#include <btBulletDynamicsCommon.h>
#include "Component.h"
#include "Transform.h"

namespace SF {

class Constraint;

class RigidBody : public Component, public btMotionState {
 friend class Physics;
 friend class Transform;
 public:
  /** Default constructor */
  RigidBody(SReal mass, bool addOnInit);
  /** Default destructor */
  ~RigidBody();

  RigidBody* clone() const;

	void onInit();

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
	void addPoint2PointConstraint(RigidBody* rbB, const SVector3& pivotInA, const SVector3& pivotInB);
	void addFixedConstraint(RigidBody* rbB, bool disableCollisions);

	void removeConstraint(int index);

	void setDamping(SReal linear, SReal angular);
	void setDisableDeactivation(bool disable);

	void setLinearVelocity(SVector3 linvel);
	SVector3 linearVelocity();
	void setAngularVelocity(SVector3 angvel);
	SVector3 angularVelocity();
	void setGravity(SVector3 gravity);

	// FORCES & the like
	void applyCentralImpulse(SVector3 direction);
	void applyCentralForce(SVector3 direction);
	void applyTorque(SVector3 direction);
	void applyTorqueImpulse(SVector3 direction);

	/// does not draw this rigidbody in debug drawing
	void disableDebugDraw();

	static inline RigidBody* cast(Component* cmp) {return static_cast<RigidBody*>(cmp);}

	btRigidBody* rigidBody() { return rigidBody_; }
	btTransform physicsTransform(){ return rigidBody_->getCenterOfMassTransform(); }
	Frame getFrame(){ return Convert::toSF(rigidBody_->getCenterOfMassTransform()); }

	void add();
	void remove();

 protected:
  SString name() const { return "RigidBody"; }

 private:
  void init(SReal mass);

  // MotionState overrides [BtOgre]
  /// get btTransform of object (internal, for Physics)
  void getWorldTransform(btTransform &retVal) const;

  /// set position (only for kinematic objects, for Transform)
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
  bool addOnInit_;

  SString group_;
  StringVector collidesWith_;
  std::vector< btTypedConstraint* > constraints_;

  btTransform internalTransform_; // for motionstate
};

}; // namespace SF

#endif // RIGIDBODY_H
