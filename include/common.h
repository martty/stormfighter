#ifndef STORMFIGHTER_COMMON_H_
#define STORMFIGHTER_COMMON_H_

#include <OgrePrerequisites.h>
#include <OgreVector3.h>
#include <OgreQuaternion.h>
#include <OgreStringConverter.h>
#include "BulletOgreGlue.h"
#include "Logger.h"

#define DEBUG true
#define TEST true||DEBUG

/// String class
typedef std::string SString;

/// Real number class
typedef Ogre::Real SReal;

/// 3D Vector class
typedef Ogre::Vector3 SVector3;

/// Quaternion class
typedef Ogre::Quaternion SQuaternion;

/// Angle (radian) class
typedef Ogre::Radian SRadian;

/// Angle (degree) class
typedef Ogre::Degree SDegree;

/// Ray class
typedef Ogre::Ray SRay;

/// Colour class
typedef Ogre::ColourValue SColourValue;

/// Basic mathematical objects' typedefs
typedef Ogre::AxisAlignedBox SAxisAlignedBox;
typedef Ogre::Sphere SSphere;
typedef Ogre::Plane SPlane;

/// An std::vector of SStrings
typedef std::vector<SString> StringVector;

/// Any code may use pointers to these classes
class GameObject;
class Component;
class StormfighterApp;

/// An std::vector of GameObjects
typedef std::vector<GameObject*> GameObjectList;

/// Exception class
class SException : public std::exception {
 public:
  SException();
  SException(const SString& str);
  ~SException() throw () {return;}

  virtual const char* what() const throw();
 private:
  SString what_;
};

struct SingleRayCastResult {
  GameObject* hitObject;
  Ogre::Vector3 hitPoint;
};

// UGLY but EASY!
#ifdef DEBUG
#define STRING(what) Ogre::StringConverter::toString(what)
#define LOG(what) Logger::getSingletonPtr()->logMessage(what)
#endif

// A macro to disallow the copy constructor and operator= functions
// This should be used in the private: declarations for a class
#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);               \
  void operator=(const TypeName&)

#endif
