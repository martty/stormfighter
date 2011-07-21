#ifndef STORMFIGHTER_TERRAINCOLLIDER_H_
#define STORMFIGHTER_TERRAINCOLLIDER_H_

#include "Collider.h"


class STerrainCollider : public SCollider
{
  public:
    /** Default constructor */
    STerrainCollider();
    /** Default destructor */
    ~STerrainCollider();

    STerrainCollider* clone() const;

    void onInit();

    SString const type() const { return "Collider"; }
};

#endif // STORMFIGHTER_TERRAINCOLLIDER_H_
