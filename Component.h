#ifndef STORMFIGHTER_COMPONENT_H_
#define STORMFIGHTER_COMPONENT_H_

#include "common.h"

class Component{
 public:
  virtual ~Component() = 0;

  MyString const virtual type() = 0;
};

#endif
