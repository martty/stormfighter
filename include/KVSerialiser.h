#ifndef STORMFIGHER_KVSERIALISER_H_
#define STORMFIGHER_KVSERIALISER_H_

#include "Serialiser.h"

namespace SF {

class KVSerialiser : public Serialiser {
  typedef std::map<SString, SString> KVmap;

 public:
  KVSerialiser();

  void setComponentName(SString name);

  void saveSVector3(SString key, SVector3 src);
  void saveSQuaternion(SString key, SQuaternion src);
  void saveSString(SString key, SString src);

  SVector3 loadSVector3(SString key);
  SQuaternion loadSQuaternion(SString key);
  SString loadSString(SString key);

  SString serialise();
  /// reads the string into the internal map (which is cleared before)
  void deserialise(SString src);

 protected:
  SString componentName_;
  KVmap KVmap_;
};

};

#endif // STORMFIGHER_KVSERIALISER_H_
