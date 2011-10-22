#ifndef STORMFIGHTER_BOXCOLLIDER_H_
#define STORMFIGHTER_BOXCOLLIDER_H_

#include "common.h"
#include "Collider.h"

namespace SF {

class BoxCollider : public Collider
{
 public:
  /// Constructor, setting the halfextents of the box
  BoxCollider(Ogre::Vector3 halfextents);
  /// Constructor, using autocfg
  BoxCollider();
  /** Default destructor */
  ~BoxCollider();

  BoxCollider* clone() const;

  void onInit();

 protected:
  SString name() const { return "Collider/BoxCollider"; }
 private:
  void init(Ogre::Vector3 halfextents);
};

}; // namespace SF

#endif // STORMFIGHTER_BOXCOLLIDER_H_
