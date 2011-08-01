#ifndef STORMFIGHTER_CAPSULECOLLIDER_H
#define STORMFIGHTER_CAPSULECOLLIDER_H

#include "Collider.h"


class SCapsuleCollider : public SCollider
{
 public:
  /** Default constructor */
  SCapsuleCollider(SReal radius, SReal height);
  /// autocfg
  SCapsuleCollider();
  /** Default destructor */
  ~SCapsuleCollider();


  //void onInit();

  SString const type() const { return "Collider"; }

 private:
  void init(SReal radius, SReal height);
};

#endif // STORMFIGHTER_CAPSULECOLLIDER_H
