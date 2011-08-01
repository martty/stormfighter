#ifndef STORMFIGHTER_CYLINDERCOLLIDER_H
#define STORMFIGHTER_CYLINDERCOLLIDER_H

#include "Collider.h"


class SCylinderCollider : public SCollider
{
 public:
  /** Default constructor */
  SCylinderCollider(SVector3 halfextents);
  /// autocfg
  SCylinderCollider();
  /** Default destructor */
  ~SCylinderCollider();

  void onInit();

  SString const type() const { return "Collider"; }

 private:
  void init(SVector3 halfextents);
};

#endif // STORMFIGHTER_CYLINDERCOLLIDER_H
