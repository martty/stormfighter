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
  return result+"@\n";
}

void KVSerialiser::deserialise(SString src){
  KVmap_.clear();
  size_t current_pos = 0;
  LOG("GET ERROR NAO");
  while(current_pos < src.length()){
    size_t colon = src.find(":", current_pos);
    if(colon == SString::npos)
      break;
    SString key = src.substr(current_pos, colon-current_pos);
    size_t end_of_line = src.find("\n", colon);
    SString value = src.substr(colon+1, end_of_line-colon-1);
    LOG("KEY:"+key);
    LOG("VALUE:"+value);
    KVmap_[key] = value;
    current_pos = end_of_line+1;
  }
  LOG("NO ERROR");
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
