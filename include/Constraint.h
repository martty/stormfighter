#ifndef STORMFIGHTER_CONSTRAINT_H_
#define STORMFIGHTER_CONSTRAINT_H_

#include "common.h"
#include <btBulletDynamicsCommon.h>

namespace SF {

class Frame;
class RigidBody;

/// Abstraction class for constraints

class Constraint {
 public:
  Constraint(RigidBody* rbA, RigidBody* rbB, const Frame& frameA, const Frame& frameB, bool disableCollision);
  virtual ~Constraint();

  void setDbgDrawSize(SReal size);
  void setCFMParam(SReal value, int index);
  void setERPParam(SReal value, int index);

  void setLinearLowerLimit(SVector3 limit);
  void setLinearUpperLimit(SVector3 limit);
  void setAngularLowerLimit(SVector3 limit);
  void setAngularUpperLimit(SVector3 limit);

  btTypedConstraint* constraint(){return cons_;}
  bool disableCollision(){return disableCollision_;}

 protected:
  btGeneric6DofConstraint* cons_;
  bool disableCollision_;
};

}; // namespace SF

#endif // CONSTRAINT_H
