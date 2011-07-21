#include "PlatformPositioner.h"

SPlatformPositioner::SPlatformPositioner(GameObject* platform){
  platform_template_ = platform;
  current_height_ = platform_template_->transform()->position().y;
}

SPlatformPositioner::~SPlatformPositioner(){
  //dtor
}

void SPlatformPositioner::onInit(){
  int number_of_levels = rand_range(5, 20);

  for(int i = 0; i < number_of_levels; i++){
    growLevel();
  }
}

void SPlatformPositioner::onUpdate(){
  GameObject* player = object()->find("Player");
  if(!player)
    return;
  //LOG("growing");
  if(player->transform()->position().y + 100 > current_height_){
    growLevel();
  }
}

void SPlatformPositioner::growLevel(){
  int angle_deviation = rand_range(60, 85);
  int leaf_deviation = rand_range(85, 90);
  const int maxReachable = 60;
  int distance = rand_range(100, 160);
  int leaves = rand_range(0, 3);
  SVector3 currpos = platform_template_->transform()->position();
  GameObject* currpt = platform_template_;
  GameObject* clone = currpt->clone();
  SVector3 deviation = SVector3::UNIT_Y.randomDeviant(SDegree(angle_deviation), SVector3::UNIT_X);
  clone->transform()->move(deviation.normalisedCopy() * distance);
  for(int j = 0; j < leaves; j++){
    GameObject* leaf = currpt->clone();
    SVector3 deviation = SVector3::UNIT_Y.randomDeviant(SDegree(leaf_deviation), SVector3::UNIT_X);
    leaf->transform()->move(deviation.normalisedCopy() * distance * 3);
  }
  current_height_ = clone->transform()->position().y;
  platform_template_ = clone;
}

int SPlatformPositioner::rand_range(int min, int max){
  return (std::rand()%(max-min+1))+min;
}
