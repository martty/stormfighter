#ifndef STORMIFIGHTER_PHYSICS_H_
#define STORMIFIGHTER_PHYSICS_H_

#include <btBulletDynamicsCommon.h>
#include "common.h"
#include <OgreSceneNode.h>
#include "BulletOgreDebugDraw.h"

struct CollisionData {
  int num_contact_points;
  Ogre::Vector3* pointsOnA;
  Ogre::Vector3* pointsOnB;
  Ogre::Vector3* normalsOnB;

  GameObject* other;
};

struct SingleRayCastResult {
  GameObject* hitObject;
  Ogre::Vector3 hitPoint;
};

extern ContactAddedCallback gContactAddedCallback;

class Physics {
 public:
  /** Default constructor */
  Physics(StormfighterApp* app);
  /** Default destructor */
  ~Physics();

  /// Add a rigidbody to the simulation
  void addRigidBody(btRigidBody* rigidBody);
  /// Add a rigidbody to the simulation, with collision filtering
  void addRigidBody(btRigidBody* rigidBody, short type, short collidesWith);

  void removeRigidBody(btRigidBody* rigidBody);

  SingleRayCastResult closestRayCast(Ogre::Vector3 from, Ogre::Vector3 to);

  /// Update physics world
  void tick(SReal deltaTime);

  static void tickCallback(btDynamicsWorld* world, btScalar timestep);

  static bool contactAddedCallback(btManifoldPoint& cp,
                           const btCollisionObject* colObj0,int partId0,int index0,
                           const btCollisionObject* colObj1,int partId1,int index1);

 private:
  DISALLOW_COPY_AND_ASSIGN(Physics);

  void init(btVector3 wAABBmin, btVector3 wAABBmax, int maxprox);

  btDiscreteDynamicsWorld* dWorld_;
  btAxisSweep3* broadphase_;
  btDefaultCollisionConfiguration* collisionConfiguration_;
  btCollisionDispatcher* collisionDispatcher_;
  btSequentialImpulseConstraintSolver* solver_;

  DebugDrawer* debugdrawer_;
  StormfighterApp* application_;
};

#endif // STORMIFIGHTER_PHYSICS_H_
