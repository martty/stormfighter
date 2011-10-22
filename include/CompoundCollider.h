#ifndef STORMFIGHTER_COMPOUNDCOLLIDER_H_
#define STORMFIGHTER_COMPOUNDCOLLIDER_H_

#include "Collider.h"

namespace SF{

/**
* @brief Traverses scene hierarchy below current GO, and adds the colliders it finds to one big shape if autocfg; you can add them manually too
*
*
*
*/

class CompoundCollider : public Collider {
 public:
  /// Autocfg, finds and adds colliders
  CompoundCollider();
  /** Default destructor */
  ~CompoundCollider();

  void onInit();

 protected:
  SString name() const { return "Collider/CompoundCollider"; }
};

}; // namespace SF

#endif // STORMFIGHTER_COMPOUNDCOLLIDER_H_
