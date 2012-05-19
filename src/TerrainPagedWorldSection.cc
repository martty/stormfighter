#include "TerrainPagedWorldSection.h"
#include <Paging/OgrePagedWorld.h>

namespace SF {

TerrainPagedWorldSection::TerrainPagedWorldSection(const Ogre::String &name, Ogre::PagedWorld *parent, Ogre::SceneManager *sm):
  Ogre::TerrainPagedWorldSection(name, parent, sm){
  LOG("impostor in place!");
}

TerrainPagedWorldSection::~TerrainPagedWorldSection()
{
  //dtor
}

void TerrainPagedWorldSection::init(Ogre::TerrainGroup* grp){
  if (mTerrainGroup == grp)
    return;

  if (mTerrainGroup)
    OGRE_DELETE mTerrainGroup;

  mTerrainGroup = grp;
  syncSettings();

  // Unload all existing terrain pages, because we want the paging system
  // to be in charge of this
  // HELL NAW
  // mTerrainGroup->removeAllTerrains();
}

void TerrainPagedWorldSection::loadPage(Ogre::PageID pageID, bool forceSynchronous){
  //LOG("loadPage called!");
    if (!mParent->getManager()->getPagingOperationsEnabled())
			return;
/*  PageMap::iterator i = mPages.find(pageID);
		if (i == mPages.end())
		{
			// trigger terrain load
			long x, y;
			// pageID is the same as a packed index
			mTerrainGroup->unpackIndex(pageID, &x, &y);
      Ogre::TerrainGroup::TerrainSlotDefinition* tsd = mTerrainGroup->getTerrainDefinition(x,y);
      if(!tsd){
       // tg->defineTerrain(x,y,float(0.0f));
        LOG("preparing page(TO BE BLANK!):"+STRING(x)+","+STRING(y));
      } else {
        LOG("page already prepared:"+STRING(x)+","+STRING(y));
      }
			//mTerrainGroup->defineTerrain(x, y);
			//mTerrainGroup->loadTerrain(x, y, forceSynchronous);
		}*/

  PagedWorldSection::loadPage(pageID, forceSynchronous);
  return;
}

void TerrainPagedWorldSection::unloadPage(Ogre::PageID pageID, bool forceSynchronous){
		if (!mParent->getManager()->getPagingOperationsEnabled())
			return;


		// trigger terrain unload
		long x, y;
		// pageID is the same as a packed index
		mTerrainGroup->unpackIndex(pageID, &x, &y);
    // remove if not being updated to avoid resource hogging (probably irrelevant later on)
    // FIXME: we are removing because reloading does not happen if unloading
    // maybe fixed later
		if (!mTerrainGroup->isDerivedDataUpdateInProgress()){
		  // save slotdef
		  Ogre::TerrainGroup::TerrainSlotDefinition* tsd = mTerrainGroup->getTerrainDefinition(x,y);
		  LOG("extracting");
		  if(!tsd)
        LOG("tsd is null");
      if(!tsd->importData)
        LOG("impd is null");
		  //Ogre::Terrain::ImportData imp = Ogre::Terrain::ImportData(*(tsd->importData));
		  // remove
      mTerrainGroup->unloadTerrain(x, y);
      PagedWorldSection::unloadPage(pageID, forceSynchronous);
      // redefine
      // TODO: do this for file based loads too
      LOG("redefining!");
      //mTerrainGroup->defineTerrain(x, y, &imp);
		}
    //mTerrainGroup->defineTerrain(x,y)
    LOG("unloading page:"+STRING(x)+","+STRING(y));
	}

};
