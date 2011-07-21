#ifndef STORMFIGHTER_PLATFORMMOVERVERTICAL_H_
#define STORMFIGHTER_PLATFORMMOVERVERTICAL_H_

#include "Script.h"


class SPlatformMoverVertical : public SScript{
 public:
  /** Default constructor */
  SPlatformMoverVertical(SReal elevationmax);
  /** Default destructor */
  ~SPlatformMoverVertical();

  void onInit();
  void onUpdate();
 private:
  SReal elevationmax_;
  SReal elevationmin_;
  bool up_;
};

#endif // STORMFIGHTER_PLATFORMMOVERVERTICAL_H
