#include "Resources.h"
#include <sys/stat.h>

namespace SF {

Resources::Resources(StormfighterApp* app):Module(app), DEFAULT_RESOURCE_GROUP_NAME(Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME){
  #ifdef _DEBUG
  resourcesCfg_ = "resources_d.cfg";
  #else
  resourcesCfg_ = "resources.cfg";
  #endif
}

Resources::~Resources(){
}

void Resources::initialise(){
  Ogre::String secName, typeName, archName;
  Ogre::ConfigFile cf;
  cf.load(resourcesCfg_);
  Ogre::ConfigFile::SectionIterator seci = cf.getSectionIterator();
  while (seci.hasMoreElements()){
    secName = seci.peekNextKey();
    Ogre::ConfigFile::SettingsMultiMap *settings = seci.getNext();
    Ogre::ConfigFile::SettingsMultiMap::iterator i;
    for (i = settings->begin(); i != settings->end(); ++i){
      typeName = i->first;
      archName = i->second;
      //if(i->second == "Zip") // add only zip files, use recursive for everything else
      Ogre::ResourceGroupManager::getSingleton().addResourceLocation(archName, typeName, secName);
    }
  }
  Ogre::ResourceGroupManager::getSingleton().addResourceLocation ("media/common", "FileSystem", Ogre::ResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME, true);
  Ogre::TextureManager::getSingleton().setDefaultNumMipmaps(5);
  Ogre::ResourceGroupManager::getSingleton().initialiseAllResourceGroups();
}

void Resources::createResourceGroup(SString groupName) {
  Ogre::ResourceGroupManager::getSingleton().createResourceGroup(groupName, true);
}

void Resources::addResourceLocation(SString path, SString type, SString resourceGroup, bool recursive){
  Ogre::ResourceGroupManager::getSingleton().addResourceLocation(path, type, resourceGroup, recursive);
  Ogre::ResourceGroupManager::getSingleton().initialiseResourceGroup(resourceGroup);
  //Ogre::StringVectorPtr p = Ogre::ResourceGroupManager::getSingleton().listResourceNames(resourceGroup, false);
  //for (Ogre::StringVector::iterator iter = p->begin(); iter != p->end(); iter++){
  //  LOG(*iter);
  //}
}

SString Resources::getResourceDirectory(SString resourceName, SString resourceGroup) {
  Ogre::FileInfoListPtr fileInfo = Ogre::ResourceGroupManager::getSingleton().findResourceFileInfo(resourceGroup, resourceName);
  if ((*fileInfo)[0].archive->getType() != "FileSystem")
    throw SException("tried to get directory for resource which is not of FileSystem type - unsupported");
  return (*fileInfo)[0].archive->getName();
}

bool Resources::resourceExists(SString resourceName, SString resourceGroup){
  return Ogre::ResourceGroupManager::getSingleton().resourceExists(resourceGroup, resourceName);
}

long long Resources::getResourceModified(SString resourceName, SString resourceGroup){
  Ogre::FileInfoListPtr fileInfo = Ogre::ResourceGroupManager::getSingleton().findResourceFileInfo(resourceGroup, resourceName);
  SString file_to_timestamp;
  if (fileInfo.isNull()){
    OGRE_EXCEPT(Ogre::Exception::ERR_FILE_NOT_FOUND, "File " + Ogre::String(resourceName) + " not found.", "!");
  }
  if ((*fileInfo)[0].archive->getType() == "FileSystem"){
      // non-archived - just check the file directly
      file_to_timestamp = (*fileInfo)[0].archive->getName() + "/" + (*fileInfo)[0].filename;
  } else {
      // archived - check the timestamp of the archive
      file_to_timestamp = (*fileInfo)[0].archive->getName();
  }

  struct stat fileStat;
  if(stat(file_to_timestamp.c_str(),&fileStat) < 0)
    throw SException("stat failed on: "+file_to_timestamp);
  return static_cast<long long>(fileStat.st_mtime);
}

};
