#ifndef STORMFIGHTER_MOVABLEOBJECT_H_
#define STORMFIGHTER_MOVABLEOBJECT_H_

#include "common.h"
#include "Component.h"

namespace SF {

class MovableObject : public Component {
  public:
    virtual SAxisAlignedBox getBoundingBox() const = 0;
};

}; // namespace SF

#endif
