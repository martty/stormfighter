#include "TerrainPagedWorldSection.h"
#include <Paging/OgrePagedWorld.h>

namespace SF {

TerrainPagedWorldSection::TerrainPagedWorldSection(const Ogre::String &name, Ogre::PagedWorld *parent, Ogre::SceneManager *sm):
  Ogre::TerrainPagedWorldSection(name, parent, sm){
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
  //impdata_ = new Ogre::Terrain::ImportData(grp->getDefaultImportSettings());

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
		  //LOG("extracting");
		  /*if(!tsd)
        LOG("tsd is null");
      if(!tsd->importData)
        LOG("impd is null");*/
		  //Ogre::Terrain::ImportData imp = Ogre::Terrain::ImportData(*(tsd->importData));
		  // remove
      mTerrainGroup->unloadTerrain(x, y);
      PagedWorldSection::unloadPage(pageID, forceSynchronous);
      // redefine
      // TODO: do this for file based loads too
      //LOG("redefining!");
      //mTerrainGroup->defineTerrain(x, y, &imp);
      LOG("unloading page:"+STRING(x)+","+STRING(y));
		}
    //mTerrainGroup->defineTerrain(x,y)
	}

Ogre::Terrain::ImportData& TerrainPagedWorldSection::importData(long x, long y){
  TerrainIndex ti(x,y);
  ImportDataMap::iterator it;
  it = impdatamap_.find(ti);
  if(it == impdatamap_.end()){
    impdatamap_[ti] = Ogre::Terrain::ImportData(mTerrainGroup->getDefaultImportSettings());
    return impdatamap_[ti];
  }
  return it->second;
}

/*
for(ImportDataMap::iterator it = impdatamap_.begin(); it != impdatamap_.end(); it++){
    if((*it).first == "Transform"){
      clone->addComponent((*it).second->clone());
    }
}
*/

void TerrainPagedWorldSection::defineLayer(long x, long y, unsigned int layer, float worldSize, SString first, SString second, SString blend) {
  TerrainIndex ti(x,y);
  ImportDataMap::iterator it;
  it = impdatamap_.find(ti);
  if(it == impdatamap_.end())
    throw SException("non-existent ImportData accessed");
  Ogre::Terrain::ImportData* impdata = &(it->second);
  impdata->layerList.resize(layer+1);
  impdata->layerList[layer].worldSize = worldSize;
  impdata->layerList[layer].textureNames.clear();
  impdata->layerList[layer].textureNames.push_back(first);
  impdata->layerList[layer].textureNames.push_back(second);
  if(blend != "")
    impdata->layerList[layer].textureNames.push_back(blend);
}

SVector3 TerrainPagedWorldSection::getNormalAt(SVector3 position){
  long xx,yy;
  Ogre::Image image;
  mTerrainGroup->convertWorldPositionToTerrainSlot(position,&xx,&yy);
  Ogre::Terrain* terrain = mTerrainGroup->getTerrain(xx,yy);

  SVector3 terrPos;
  terrain->getTerrainPosition(position.x, 0.f, position.z, &terrPos);

  // x and y are [0-1] values on the terrain-space plane
  SReal x = terrPos.x;
  SReal y = terrPos.y;

  // We're going to form a plane to retrieve our normal

  // get left / bottom points (rounded down)
  SReal factor = (SReal)terrain->getSize() - 1.0f;
  SReal invFactor = 1.0f / factor;

  long startX = static_cast<long>(x * factor);
  long startY = static_cast<long>(y * factor);
  long endX = startX + 1;
  long endY = startY + 1;

  // now get points in terrain space (effectively rounding them to boundaries)
  // note that we do not clamp! We need a valid plane
  SReal startXTS = startX * invFactor;
  SReal startYTS = startY * invFactor;
  SReal endXTS = endX * invFactor;
  SReal endYTS = endY * invFactor;

  // now clamp
  endX = std::min(endX, (long)terrain->getSize()-1);
  endY = std::min(endY, (long)terrain->getSize()-1);

  // get parametric from start coord to next point
  SReal xParam = (x - startXTS) / invFactor;
  SReal yParam = (y - startYTS) / invFactor;


  /* For even / odd tri strip rows, triangles are this shape:
  even     odd
  3---2   3---2
  | / |   | \ |
  0---1   0---1
  */

  // Build all 4 positions in terrain space, using point-sampled height
  // - note:  I've modified this code from the original to return verticies in world space, which is required
  //   to get a proper terrain normal below
  SVector3 v0 (startXTS * terrain->getWorldSize(), terrain->getWorldSize() - startYTS * terrain->getWorldSize(), terrain->getHeightAtPoint(startX, startY));
  SVector3 v1 (endXTS * terrain->getWorldSize(), terrain->getWorldSize() - startYTS * terrain->getWorldSize(), terrain->getHeightAtPoint(endX, startY));
  SVector3 v2 (endXTS * terrain->getWorldSize(), terrain->getWorldSize() - endYTS * terrain->getWorldSize(), terrain->getHeightAtPoint(endX, endY));
  SVector3 v3 (startXTS * terrain->getWorldSize(), terrain->getWorldSize() - endYTS * terrain->getWorldSize(), terrain->getHeightAtPoint(startX, endY));

  // Define the plane in world space, paying attention to the differing tessilation of even/odd rows
  SPlane plane;
  if (startY % 2)
  {
    // odd row
    bool secondTri = ((1.0 - yParam) > xParam);
    if (secondTri)
       plane.redefine(v0, v1, v3);
    else
       plane.redefine(v1, v2, v3);
  }
  else
  {
    // even row
    bool secondTri = (yParam > xParam);
    if (secondTri)
       plane.redefine(v0, v2, v3);
    else
       plane.redefine(v0, v1, v2);
  }

  // All the above calculations are based on the terrain being in the x-y plane.
  // convert normal to terrain being in the x-z plane.
  return SVector3( -plane.normal.x, -plane.normal.z, -plane.normal.y );
/*
  terrain->getTerrainNormalMap()->convertToImage(image);
  //image.save("normal.png");

  SColourValue tempColor = image.getColourAt(position.x, position.z, 0);
  // normalMap is from -1.0 -> 1.0, so shift and return
  return SVector3((tempColor.r*0.5f)+0.5f, (tempColor.g*0.5f)+0.5f,(tempColor.b*0.5f)+0.5f);
  */
}

void TerrainPagedWorldSection::initBlendMaps(long x, long y){
  TerrainIndex ti(x,y);
  ImportDataMap::iterator it;
  it = impdatamap_.find(ti);
  if(it == impdatamap_.end())
    throw SException("non-existent ImportData accessed");
  Ogre::Terrain* terrain = mTerrainGroup->getTerrain(x,y);
  int blendTextureCount =terrain->getLayerCount()-1;
  LOG("initing blend textures: "+STRING(blendTextureCount));
  LOG("layerCount:"+STRING(terrain->getLayerCount()));
  // from 1, because layer 0 is not blended
  for (int blendlayer = 1; blendlayer <= blendTextureCount; blendlayer++){
    Ogre::TerrainLayerBlendMap* blendMap0 = terrain->getLayerBlendMap(blendlayer);
    SString blendmap = it->second.layerList[blendlayer].textureNames[2];
    LOG(blendmap);
    LOG(STRING(terrain->getLayerBlendMapSize()));
    Ogre::Image img;
    img.load(blendmap, getName());
    Ogre::PixelBox pb = img.getPixelBox(0,0);
    float* pBlend1 = blendMap0->getBlendPointer();
    for (Ogre::uint16 y = 0; y < terrain->getLayerBlendMapSize(); ++y)
    {
        for (Ogre::uint16 x = 0; x < terrain->getLayerBlendMapSize(); ++x)
        {
            SReal val = img.getColourAt(x,y, 0).r;
            *pBlend1++ = Ogre::Math::Clamp(val, (SReal) 0, (SReal)1);
        }
    }
    blendMap0->dirty();
    //blendMap1->dirty();
    blendMap0->update();
    //blendMap1->update();
  }
}
};

