#ifndef STORMFIGHTER_MODULE_H_
#define STORMFIGHTER_MODULE_H_

#include "common.h"

/// Base class for modules (Graphics, Logger, Physics..)
class Module {
 public:
  Module(StormfighterApp* app);
  virtual ~Module();

  //bool initialize();

 protected:
  inline StormfighterApp* application() { return application_; };
 private:
  StormfighterApp* application_;
};

#endif // STORMFIGHTER_MODULE_H_
