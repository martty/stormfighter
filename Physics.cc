#include "Physics.h"

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
    //dWorld_->setGravity(btVector3(0,9.8f, 0));
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
