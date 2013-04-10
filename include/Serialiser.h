#ifndef STORMFIGHTER_SERIALISER_H_
#define STORMFIGHTER_SERIALISER_H_

#include "common.h"

namespace SF {

class Serialiser {
 public:
  virtual void setComponentName(SString name) = 0;

  virtual void saveSVector3(SString key, SVector3 src) = 0;
  virtual void saveSQuaternion(SString key, SQuaternion src) = 0;
  virtual void saveSString(SString key, SString src) = 0;

  virtual SVector3 loadSVector3(SString key) = 0;
  virtual SQuaternion loadSQuaternion(SString key) = 0;
  virtual SString loadSString(SString key) = 0;

  virtual SString serialise() = 0;
  virtual void deserialise(SString src) = 0;
};

};

#endif
