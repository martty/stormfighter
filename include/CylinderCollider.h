#ifndef STORMFIGHTER_CYLINDERCOLLIDER_H
#define STORMFIGHTER_CYLINDERCOLLIDER_H

#include "Collider.h"

namespace SF {

class CylinderCollider : public Collider
{
 public:
  /** Default constructor */
  CylinderCollider(SVector3 halfextents);
  /// autocfg
  CylinderCollider();
  /** Default destructor */
  ~CylinderCollider();

  void onInit();

 protected:
  SString name() const { return "Collider/CylinderCollider"; }

 private:
  void init(SVector3 halfextents);
};

}; // namespace SF

#endif // STORMFIGHTER_CYLINDERCOLLIDER_H
