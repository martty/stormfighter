#ifndef STORMFIGHTER_TERRAINCOLLIDER_H_
#define STORMFIGHTER_TERRAINCOLLIDER_H_

#include "Collider.h"

namespace SF {

class TerrainCollider : public Collider
{
  public:
    /** Default constructor */
    TerrainCollider();
    /** Default destructor */
    ~TerrainCollider();

    TerrainCollider* clone() const;

    void onInit();

 protected:
  SString name() const { return "Collider/TerrainCollider"; }
};

}; // namespace SF

#endif // STORMFIGHTER_TERRAINCOLLIDER_H_
