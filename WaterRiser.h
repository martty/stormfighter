#ifndef STORMFIGHTER_WATERRISER_H_
#define STORMFIGHTER_WATERRISER_H_

#include "Script.h"


class SWaterRiser : public SScript {
 public:
  /** Default constructor */
  SWaterRiser();
  /** Default destructor */
  ~SWaterRiser();

  void onUpdate();
  private:
};

#endif // STORMFIGHTER_WATERRISER_H_
