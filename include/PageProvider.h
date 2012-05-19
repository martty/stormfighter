#ifndef STORMFIGHTER_PAGEPROVIDER_H_
#define STORMFIGHTER_PAGEPROVIDER_H_

#include "common.h"
#include <Paging/OgrePaging.h>

namespace SF {

class PageProvider : public Ogre::PageProvider {
 public:
  PageProvider();
  virtual ~PageProvider();

  virtual bool prepareProceduralPage(Ogre::Page* page, Ogre::PagedWorldSection* section);
  virtual bool loadProceduralPage(Ogre::Page* page, Ogre::PagedWorldSection* section);
  virtual bool unloadProceduralPage(Ogre::Page* page, Ogre::PagedWorldSection* section);
  virtual bool unprepareProceduralPage(Ogre::Page* page, Ogre::PagedWorldSection* section);
};

};

#endif // STORMFIGHTER_PAGEPROVIDER_H_
