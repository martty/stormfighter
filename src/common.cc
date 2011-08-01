#include "common.h"

const char* SException::what() const throw() {
  return what_.c_str();
}

SException::SException(){
  what_ = "EMPTY";
}

SException::SException(const SString& str){
  what_ = str;
}
