#ifndef STORMIFIGHTER_PHYSICS_H_
#define STORMIFIGHTER_PHYSICS_H_

#include <btBulletDynamicsCommon.h>
#include "common.h"
#include <OgreSceneNode.h>
#include "BulletOgreDebugDraw.h"

struct CollisionData {
  Ogre::Vector3 pointOnA;
  Ogre::Vector3 pointOnB;
  Ogre::Vector3 normalOnB;

  bool stale;
  bool fresh;

  GameObject* other;
};

struct SingleRayCastResult {
  GameObject* hitObject;
  Ogre::Vector3 hitPoint;
};

typedef std::map<SString, short> MaskMap;

extern ContactProcessedCallback gContactProcessedCallback;

class Physics {
 public:
  /** Default constructor */
  Physics(StormfighterApp* app);
  /** Default destructor */
  ~Physics();

  /// Add a rigidbody to the simulation
  void addRigidBody(btRigidBody* rigidBody);
  /// Add a rigidbody to the simulation, with collision filtering
  void addRigidBody(btRigidBody* rigidBody, short group, short collidesWith);

  void addRigidBody(btRigidBody* rigidBody, SString group, StringVector collidesWith);

  void removeRigidBody(btRigidBody* rigidBody);

  void addCollisionGroup(SString name);

  SingleRayCastResult closestRayCast(Ogre::Vector3 from, Ogre::Vector3 to);

  /// Update physics world
  void tick(SReal deltaTime);

  void setDebugDraw(bool draw);

  static void tickCallback(btDynamicsWorld* world, btScalar timestep);

  static bool contactProcessedCallback(btManifoldPoint& cp, void* body0, void* body1);

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

  MaskMap collisionGroups_;
  int collision_group_counter;
};

#endif // STORMIFIGHTER_PHYSICS_H_
