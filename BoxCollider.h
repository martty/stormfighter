#ifndef STORMFIGHTER_BOXCOLLIDER_H_
#define STORMFIGHTER_BOXCOLLIDER_H_

#include "common.h"
#include "Collider.h"

class SBoxCollider : public SCollider
{
 public:
  /// Constructor, setting the halfextents of the box
  SBoxCollider(Ogre::Vector3 halfextents);
  /// Constructor, using autocfg
  SBoxCollider();
  /** Default destructor */
  ~SBoxCollider();

  void onInit();

  SString const type() const { return "Collider"; }

 private:
  void init(Ogre::Vector3 halfextents);
};

#endif // STORMFIGHTER_BOXCOLLIDER_H_
