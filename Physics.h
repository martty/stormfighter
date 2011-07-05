#ifndef STORMIFIGHTER_PHYSICS_H_
#define STORMIFIGHTER_PHYSICS_H_

#include <btBulletDynamicsCommon.h>
#include "common.h"
#include <OgreSceneNode.h>
#include "BulletOgreDebugDraw.h"

class Physics {
 public:
  /** Default constructor */
  Physics();
  /** Default destructor */
  ~Physics();

  /// Add a rigidbody to the simulation
  void addRigidBody(btRigidBody* rigidBody);
  /// Add a rigidbody to the simulation, with collision filtering
  void addRigidBody(btRigidBody* rigidBody, short type, short collidesWith);

  /// Update physics world
  void tick(SReal deltaTime);

 private:
  DISALLOW_COPY_AND_ASSIGN(Physics);

  void init(btVector3 wAABBmin, btVector3 wAABBmax, int maxprox);

  btDiscreteDynamicsWorld* dWorld_;
  btAxisSweep3* broadphase_;
  btDefaultCollisionConfiguration* collisionConfiguration_;
  btCollisionDispatcher* collisionDispatcher_;
  btSequentialImpulseConstraintSolver* solver_;

  DebugDrawer *debugdrawer_;
};

#endif // STORMIFIGHTER_PHYSICS_H_
