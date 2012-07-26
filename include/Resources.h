#ifndef STORMFIGHTER_RESOURCES_H_
#define STORMFIGHTER_RESOURCES_H_

#include "Module.h"
#include <Ogre.h>

namespace SF {

class Resources : public Module{
 public:
  Resources(StormfighterApp* app);
  ~Resources();

  void initialise();

  // create new ResourceGroup
  void createResourceGroup(SString groupName);
  // add location to a resource group (initialisation is also performed)
  void addResourceLocation(SString path, SString type, SString resourceGroup, bool recursive);
  // check if this resource exists in the group
  bool resourceExists(SString resourceName, SString resourceGroup);

  SString getResourceDirectory(SString resourceName, SString resourceGroup);

  // returns the time when the given resource was modified
  long long getResourceModified(SString resourceName, SString resourceGroup);

  // reloads all loaded materials (eg. in scene)
  void reloadMaterials();

  const SString DEFAULT_RESOURCE_GROUP_NAME;

 private:
  Ogre::String resourcesCfg_;
};

};

#endif // RESOURCES_H
