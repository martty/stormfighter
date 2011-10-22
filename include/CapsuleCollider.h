#ifndef STORMFIGHTER_CAPSULECOLLIDER_H
#define STORMFIGHTER_CAPSULECOLLIDER_H

#include "Collider.h"

namespace SF {

class CapsuleCollider : public Collider
{
 public:
  /** Default constructor */
  CapsuleCollider(SReal radius, SReal height);
  /// autocfg
  CapsuleCollider();
  /** Default destructor */
  ~CapsuleCollider();


  //void onInit();

 protected:
  SString name() const { return "Collider/CapsuleCollider"; }

 private:
  void init(SReal radius, SReal height);
};

}; // namespace SF

#endif // STORMFIGHTER_CAPSULECOLLIDER_H
