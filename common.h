#ifndef STORMFIGHTER_COMMON_H_
#define STORMFIGHTER_COMMON_H_

#include <OgrePrerequisites.h>
#include <OgreVector3.h>
#include <OgreQuaternion.h>

#include "OgreFramework.h"

#ifndef NULL
#define NULL 0
#endif

typedef std::string SString;
typedef Ogre::Real SReal;

class GameObject;
class Component;
class StormfighterApp;

// A macro to disallow the copy constructor and operator= functions
// This should be used in the private: declarations for a class
#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);               \
  void operator=(const TypeName&)

#endif
