#include "Physics.h"
#include "GameObject.h"
#include "StormfighterApp.h"
#include "Graphics.h"
#include "Hierarchy.h"
#include <limits>

Physics::Physics(StormfighterApp* app){
  application_ = app;
  collisionGroups_.clear();
  collision_group_counter = 0;
  init(btVector3(-1500, -1500, -1500), btVector3(1500, 1500, 1500), 2048); // sensible defaults? maybe
}

Physics::~Physics(){
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
  Ogre::SceneNode * rootnode = Graphics::getSingletonPtr()->sceneManager()->getRootSceneNode();
  debugdrawer_ = new DebugDrawer(rootnode, dWorld_);
  debugdrawer_->setDebugMode(false);
  dWorld_->setDebugDrawer(debugdrawer_);

  dWorld_->setInternalTickCallback(&Physics::tickCallback, NULL, false);
  gContactProcessedCallback = &Physics::contactProcessedCallback;
  dWorld_->setWorldUserInfo(application_);

  // create the 3 basic collisiongroups
  addCollisionGroup("default");
  // manually
  collisionGroups_["all"] = std::numeric_limits<short>::max();
  collisionGroups_["none"] = 0;
}

void Physics::tick(SReal deltaTime){
  //Graphics::getSingletonPtr()->m_pLog->logMessage("tick:"+Ogre::StringConverter::toString(Graphics::getSingletonPtr()->m_pTimer->getMilliseconds()));
  dWorld_->stepSimulation(deltaTime);//, 1, btScalar(1.)/btScalar(120.));//, 14, btScalar(1.)/btScalar(1200.));
  //Graphics::getSingletonPtr()->m_pLog->logMessage("stepped:"+Ogre::StringConverter::toString(Graphics::getSingletonPtr()->m_pTimer->getMilliseconds()));
  //dWorld_->debugDrawWorld();
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
  //Graphics::getSingletonPtr()->m_pLog->logMessage("tickCB:"+Ogre::StringConverter::toString(Graphics::getSingletonPtr()->m_pTimer->getMilliseconds()));
  StormfighterApp* app = static_cast<StormfighterApp*>(world->getWorldUserInfo());
  app->setPhysicsDeltaTime(SReal(timeStep));
  app->hierarchy()->physicsUpdate();
  /*
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
		//Graphics::getSingletonPtr()->m_pLog->logMessage(goA->name() + ":" + goB->name());
		//Graphics::getSingletonPtr()->m_pLog->logMessage(Ogre::StringConverter::toString(Graphics::getSingletonPtr()->m_pTimer->getMilliseconds()));
		collisionData->other = goB;
		goA->onCollision(collisionData);
		delete collisionData;
	}*/
}

bool Physics::contactProcessedCallback(btManifoldPoint& pt, void* body0, void* body1){
  btCollisionObject* obj0 = static_cast<btCollisionObject*>(body0);
  btCollisionObject* obj1 = static_cast<btCollisionObject*>(body1);
  GameObject* goA = static_cast<GameObject*>(obj0->getUserPointer());
  GameObject* goB = static_cast<GameObject*>(obj1->getUserPointer());
  const btVector3& ptA = pt.getPositionWorldOnA();
  const btVector3& ptB = pt.getPositionWorldOnB();
  const btVector3& normalOnB = pt.m_normalWorldOnB;
  CollisionData* collisionData = new CollisionData(); // GO handles freeing

	collisionData->pointOnA = Convert::toOgre(ptA);
  collisionData->pointOnB = Convert::toOgre(ptB);
  collisionData->normalOnB = Convert::toOgre(normalOnB);
  collisionData->other = goB;
  collisionData->stale = false;
  goA->addCollision(collisionData);
  CollisionData* collisionDataB = new CollisionData(); // GO handles freeing
	collisionDataB->pointOnA = Convert::toOgre(ptA);
  collisionDataB->pointOnB = Convert::toOgre(ptB);
  collisionDataB->normalOnB = Convert::toOgre(-normalOnB);
  collisionDataB->other = goA;
  collisionDataB->stale = false;
  goB->addCollision(collisionDataB);
  return false;
}

SingleRayCastResult Physics::closestRayCast(Ogre::Vector3 from, Ogre::Vector3 to){
  SingleRayCastResult result;
  btCollisionWorld::ClosestRayResultCallback* crrc = new btCollisionWorld::ClosestRayResultCallback(Convert::toBullet(from), Convert::toBullet(to));
  dWorld_->rayTest(Convert::toBullet(from), Convert::toBullet(to), *crrc);
  result.hitPoint = Convert::toOgre(crrc->m_hitPointWorld);
  if(!crrc->m_collisionObject) {
    result.hitObject = NULL;
  } else {
    btCollisionObject* obA = static_cast<btCollisionObject*>(crrc->m_collisionObject);
    result.hitObject = static_cast<GameObject*>(obA->getUserPointer());
  }
  return result;
}

void Physics::addCollisionGroup(SString name){
  // we are not checking for duplicates atm
  if(collisionGroups_.size() == 15)
    return;
  collisionGroups_[name] = 1<<collision_group_counter;
  collision_group_counter++;
}

void Physics::addRigidBody(btRigidBody* rigidBody, SString group, StringVector collidesWith){
  // we are not checking for non-existant groups
  short groupno = collisionGroups_[group];
  short collideno = 0;
  for(StringVector::iterator it = collidesWith.begin(); it != collidesWith.end(); it++){
    collideno |= collisionGroups_[(*it)];
  }
  addRigidBody(rigidBody, groupno, collideno);
}

void Physics::setDebugDraw(bool draw){
  debugdrawer_->setDebugMode(draw);
}
