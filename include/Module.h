#ifndef STORMFIGHTER_MODULE_H_
#define STORMFIGHTER_MODULE_H_

#include "common.h"

namespace SF {

/// Base class for modules (Graphics, Logger, Physics..)
class Module {
 public:
  Module(StormfighterApp* app);
  virtual ~Module();

  //bool initialise();

 protected:
  inline StormfighterApp* application() { return application_; };
 private:
  StormfighterApp* application_;
};

}; // namespace SF

#endif // STORMFIGHTER_MODULE_H_
