#ifndef STORMFIGHTER_MOVABLEOBJECT_H_
#define STORMFIGHTER_MOVABLEOBJECT_H_

#include "common.h"
#include "Component.h"

class SMovableObject : public Component {
  public:
    virtual SAxisAlignedBox getBoundingBox() const = 0;
};

#endif
