#include "WaterRiser.h"

SWaterRiser::SWaterRiser(){
  //ctor
}

SWaterRiser::~SWaterRiser(){
  //dtor
}

void SWaterRiser::onUpdate(){
  object()->transform()->move(SVector3(0, 5*deltaTime(), 0));
}
