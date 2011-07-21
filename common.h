#ifndef STORMFIGHTER_COMMON_H_
#define STORMFIGHTER_COMMON_H_

#include <OgrePrerequisites.h>
#include <OgreVector3.h>
#include <OgreQuaternion.h>
#include "OgreFramework.h"
#include "BulletOgreGlue.h"

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

/// An std::vector of SStrings
typedef std::vector<SString> StringVector;

/// Any code may use pointers to these classes
class GameObject;
class Component;
class StormfighterApp;

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

// UGLY but EASY!
#ifdef DEBUG
#define STRING(what) Ogre::StringConverter::toString(what)
#define LOG(what) OgreFramework::getSingletonPtr()->m_pLog->logMessage(what)
#endif

// A macro to disallow the copy constructor and operator= functions
// This should be used in the private: declarations for a class
#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);               \
  void operator=(const TypeName&)
#endif
