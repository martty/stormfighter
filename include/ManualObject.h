#ifndef STORMFIGHTER_MANUALOBJECT_H_
#define STORMFIGHTER_MANUALOBJECT_H_

#include "common.h"
#include "Mesh.h"

class SManualObject : public SMesh {
 public:
  enum OperationType {
    OT_POINT_LIST = Ogre::RenderOperation::OT_POINT_LIST,
    OT_LINE_LIST = Ogre::RenderOperation::OT_LINE_LIST,
    OT_LINE_STRIP = Ogre::RenderOperation::OT_LINE_STRIP,
    OT_TRIANGLE_LIST = Ogre::RenderOperation::OT_TRIANGLE_LIST,
    OT_TRIANGLE_STRIP = Ogre::RenderOperation::OT_TRIANGLE_STRIP,
    OT_TRIANGLE_FAN = Ogre::RenderOperation::OT_TRIANGLE_FAN
  };

  SManualObject(bool isStatic);
  ~SManualObject();

  /// not really cloneable at the moment
  SManualObject* clone() const;

  unsigned int onAdd(SString goname, STransform* transform);

  // ManualObject methods
  void begin(SString materialName, OperationType opType);
  // end is a reserved word in lua
  void finish();

  void position(SVector3 pos);
  void colour(SColourValue col);
  void normal(SVector3 normal);
  void tangent(SVector3 tangent);
  /// Add texture coordinate, discards w component (UV only)
  void textureCoord(SVector3 uvw);

  void index(uint32_t ind);
  void triangle(uint32_t ind1, uint32_t ind2, uint32_t ind3);
  void quad(uint32_t ind1, uint32_t ind2, uint32_t ind3, uint32_t ind4);

  void clear();
 private:
  Ogre::ManualObject* manual_;
  bool static_;
};

#endif // STORMFIGHTER_MANUALOBJECT_H_
