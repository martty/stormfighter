#include "Physics.h"
#include "GameObject.h"

Physics::Physics()
{
  init(btVector3(-1500, -1500, -1500), btVector3(1500, 1500, 1500), 2048); // sensible defaults? maybe
}

Physics::~Physics()
{
  delete dWorld_;
  delete solver_;
  delete collisionDispatcher_;
  delete collisionConfiguration_;
  delete broadphase_;
}

void Physics::init(btVector3 wAABBmin, btVector3 wAABBmax, int maxprox){
  broadphase_ = new btAxisSweep3(wAABBmin,wAABBmax,maxprox);
  collisionConfiguration_ = new btDefaultCollisionConfiguration();
  collisionDispatcher_ = new btCollisionDispatcher(collisionConfiguration_);
  solver_ = new btSequentialImpulseConstraintSolver;
  dWorld_ = new btDiscreteDynamicsWorld(collisionDispatcher_,broadphase_,solver_,collisionConfiguration_);
  Ogre::SceneNode * rootnode = OgreFramework::getSingletonPtr()->m_pSceneMgr->getRootSceneNode();
  debugdrawer_ = new DebugDrawer(rootnode, dWorld_);
  debugdrawer_->setDebugMode(true);
  dWorld_->setDebugDrawer(debugdrawer_);

  dWorld_->setInternalTickCallback(&Physics::tickCallback);
}

void Physics::tick(SReal deltaTime){
  dWorld_->stepSimulation(deltaTime);//, 14, btScalar(1.)/btScalar(1200.));
  dWorld_->debugDrawWorld();
  debugdrawer_->step();
}

void Physics::addRigidBody(btRigidBody* rigidbody){
  dWorld_->addRigidBody(rigidbody);
}

void Physics::addRigidBody(btRigidBody* rigidbody, short type, short collidesWith){
  dWorld_->addRigidBody(rigidbody, type, collidesWith);
}

void Physics::removeRigidBody(btRigidBody* rigidBody){
  dWorld_->removeRigidBody(rigidBody);
}

void Physics::tickCallback(btDynamicsWorld* world, btScalar timeStep){
  int numManifolds = world->getDispatcher()->getNumManifolds();
	for (int i=0;i<numManifolds;i++){
		btPersistentManifold* contactManifold = world->getDispatcher()->getManifoldByIndexInternal(i);
		btCollisionObject* obA = static_cast<btCollisionObject*>(contactManifold->getBody0());
		btCollisionObject* obB = static_cast<btCollisionObject*>(contactManifold->getBody1());

		GameObject* goA = static_cast<GameObject*>(obA->getUserPointer());
		GameObject* goB = static_cast<GameObject*>(obB->getUserPointer());

		if(!goA || !goB)
      return;

		int numContacts = contactManifold->getNumContacts();

		CollisionData* collisionData = new CollisionData();
		collisionData->num_contact_points = numContacts;
		collisionData->pointsOnA = new Ogre::Vector3[numContacts];
		collisionData->pointsOnB = new Ogre::Vector3[numContacts];
		collisionData->normalsOnB = new Ogre::Vector3[numContacts];
		for (int j=0;j<numContacts;j++){
			btManifoldPoint& pt = contactManifold->getContactPoint(j);
			if (pt.getDistance()<0.f){
				const btVector3& ptA = pt.getPositionWorldOnA();
				const btVector3& ptB = pt.getPositionWorldOnB();
				const btVector3& normalOnB = pt.m_normalWorldOnB;
				collisionData->pointsOnA[j] = Convert::toOgre(ptA);
				collisionData->pointsOnB[j] = Convert::toOgre(ptB);
				collisionData->normalsOnB[j] = Convert::toOgre(normalOnB);
			}
		}
		collisionData->other = goB;
		goA->onCollision(collisionData);
		delete collisionData;
	}
}
