#ifndef STORMFIGHTER_PLATFORMPOSITIONER_H_
#define STORMFIGHTER_PLATFORMPOSITIONER_H_

#include "Script.h"


class SPlatformPositioner : public SScript{
 public:
  /** Default constructor */
  SPlatformPositioner(GameObject* plane);
  /** Default destructor */
  ~SPlatformPositioner();

  void onInit();
  void onUpdate();

 private:
  SReal current_height_;

  void growLevel();

  int rand_range(int low, int high);

  GameObject* platform_template_;
};

#endif // STORMFIGHTER_PLATFORMPOSITIONER_H
