#include "Logger.h"
#include <OgreLogManager.h>

namespace SF {

template<> Logger* Ogre::Singleton<Logger>::msSingleton = 0;

Logger::Logger(){
  Ogre::LogManager* logMgr = new Ogre::LogManager();
  Ogre::LogManager::getSingleton().setLogDetail(Ogre::LL_BOREME);
  defaultLog_ = Ogre::LogManager::getSingleton().createLog("OgreLogfile.log", true, true, false);
  defaultLog_->setDebugOutputEnabled(true);
}

Logger::~Logger(){
  //dtor
}

void Logger::logMessage(const SString& message){
  defaultLog_->logMessage(message);
}

}; // namespace SF
