#include "KVSerialiser.h"

namespace SF {

KVSerialiser::KVSerialiser(){
  KVmap_.clear();
  componentName_ = "NOT SET";
}

void KVSerialiser::setComponentName(SString name){
  componentName_ = name;
}

SString KVSerialiser::serialise(){
  SString result = "#"+componentName_+"\n";
  for(KVmap::iterator it=KVmap_.begin(); it != KVmap_.end(); it++){
    result += (*it).first + ":" + (*it).second + "\n";
  }
  return result;
}

void KVSerialiser::deserialise(SString source){
  KVmap_.clear();
}

void KVSerialiser::saveSVector3(SString key, SVector3 src){
  KVmap_[key] = Ogre::StringConverter::toString(src);
}

void KVSerialiser::saveSQuaternion(SString key, SQuaternion src){
  KVmap_[key] = Ogre::StringConverter::toString(src);
}

void KVSerialiser::saveSString(SString key, SString src){
  KVmap_[key] = src;
}

SVector3 KVSerialiser::loadSVector3(SString key){
  return Ogre::StringConverter::parseVector3(KVmap_[key]);
}

SQuaternion KVSerialiser::loadSQuaternion(SString key){
  return Ogre::StringConverter::parseQuaternion(KVmap_[key]);
}

SString KVSerialiser::loadSString(SString key){
  return KVmap_[key];
}

};
