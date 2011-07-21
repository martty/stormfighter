#include "PlatformMoverVertical.h"

SPlatformMoverVertical::SPlatformMoverVertical(SReal elevationmax){
  elevationmin_ = elevationmax_ = elevationmax;
  up_ = true;
}

SPlatformMoverVertical::~SPlatformMoverVertical(){
  //dtor
}

void SPlatformMoverVertical::onInit(){
  elevationmin_ = transform()->position().y;
}

void SPlatformMoverVertical::onUpdate(){
  SReal moveFactor = 10.0f;
  if(!up_)
    moveFactor *= -1;
  transform()->move(SVector3(0, moveFactor*deltaTime(),0));
  if(transform()->position().y > elevationmax_){
    up_ = false;
  } else if (transform()->position().y < elevationmin_){
    up_ = true;
  }
}
