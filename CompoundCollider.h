#ifndef STORMFIGHTER_COMPOUNDCOLLIDER_H_
#define STORMFIGHTER_COMPOUNDCOLLIDER_H_

#include "Collider.h"

/**
* @brief Traverses scene hierarchy below current GO, and adds the colliders it finds to one big shape if autocfg; you can add them manually too
*
*
*
*/

class SCompoundCollider : public SCollider {
  public:
    /// Autocfg, finds and adds colliders
    SCompoundCollider();
    /** Default destructor */
    ~SCompoundCollider();

    void onInit();
};

#endif // STORMFIGHTER_COMPOUNDCOLLIDER_H_
