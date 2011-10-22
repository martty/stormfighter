#ifndef STORMFIGHTER_LOGGER_H_
#define STORMFIGHTER_LOGGER_H_

#include <OgreSingleton.h>

namespace SF {

#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);               \
  void operator=(const TypeName&)

typedef std::string SString;

class Logger : public Ogre::Singleton<Logger>{
 public:
  Logger();
  ~Logger();

  void logMessage(const SString& message);
 private:
  DISALLOW_COPY_AND_ASSIGN(Logger);

  Ogre::Log*	 defaultLog_;
};

}; // namespace SF

#endif // STORMFIGHTER_LOGGER_H_
