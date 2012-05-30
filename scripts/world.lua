World = {};

World.sections = {}; -- assoc. array


-- FIXME: bogus values, also should be setable
World.defaultLoadRadius = 300;
World.defaultHoldRadius = 900;

function World:initialise(worldname, worldpathprefix, sectionpathprefix)
  self.pagedTerrain = Graphics:pagedTerrain();
  self.pagedTerrain:createWorld(worldname);
  self.worldName = worldname;
  if not worldpathprefix then self.worldpathprefix = "/worlds/"; end
  if not sectionpathprefix then self.sectionpathprefix = "/sections/"; end
  if not terrainpathprefix then self.terrainpathprefix = "/terrain/"; end
  self.currentSection = nil;
end

function World:createSection(sectionName, resolution, size, origin, loadRadius, holdRadius)
  if not loadRadius then loadRadius = self.defaultLoadRadius; end
  if not holdRadius then holdRadius = self.defaultHoldRadius; end
  -- check power of two + 1 on resolution!
  local tg = self.pagedTerrain:createTerrainGroup(Ogre.Terrain.ALIGN_X_Z, resolution, size);
  tg:setOrigin(origin);
  tg:setFilenameConvention("terrain/"..sectionName.."_data", "dat");
  self.sections[sectionName] = {};
  self.sections[sectionName] = self.pagedTerrain:createWorldSection(sectionName, self.worldName, tg, loadRadius, holdRadius);
  self.sections[sectionName].minX = 0;
  self.sections[sectionName].minY = 0;
  self.sections[sectionName].maxX = 0;
  self.sections[sectionName].maxY = 0;
  self.sections[sectionName].terrainGroup = tg;
  self.sections[sectionName].sectionName = sectionName;
  -- create a new resource group for this section
  Resources:createResourceGroup(sectionName);
  tg:setResourceGroup(sectionName);
  -- add locations, from most specific to more general
  Resources:addResourceLocation("media/common", "FileSystem", sectionName, true);
  Resources:addResourceLocation("media"..self.worldpathprefix..self.worldName.."/common", "FileSystem", sectionName, true);
  Resources:addResourceLocation("media"..self.worldpathprefix..self.worldName..self.sectionpathprefix..sectionName, "FileSystem", sectionName, true);
  --Resources:addResourceLocation("media"..self.worldpathprefix..self.worldName..self.sectionpathprefix..sectionName..self.terrainpathprefix, "FileSystem", sectionName, true);
  self.currentSection = self.sections[sectionName];
  return self.sections[sectionName];
end


-- retrieve height at give world position
-- always operates on _current_ section
-- outputs float
function World:getHeightAt(position)
  local tg = self.currentSection.terrainGroup;
  local height = tg:getHeightAtWorldPosition(position);
  return height;
end

-- retrieve normal at give world position
-- always operates on _current_ section
-- TODO: caching
-- outputs the normal SVector3
function World:getNormalAt(position)
  return self.currentSection:getNormalAt(position);
end

function World:rayQuery(ray, limit)
  local tg = self.currentSection.terrainGroup;
  local result = tg:rayIntersects(ray, limit);
  return result.hit, result.position;
end
-- utility function for creating composite images
-- takes in 4 filenames
-- output 2 filenames
-- converts input images if necessarry
function SF.TerrainPagedWorldSection:loadOrCreateTerrainMaps(diffuse, specular, normal, height)
  -- check for source image existing
  -- print_as_table(tolua.getpeer(self));
  if not (Resources:resourceExists(diffuse, self.sectionName) and Resources:resourceExists(specular, self.sectionName)
    and Resources:resourceExists(normal, self.sectionName) and Resources:resourceExists(height, self.sectionName)) then
    print("Cannot load/create terrain maps: not all maps exist in my resourcegroup!");
    return;
  end
  -- first get directory of source images
  local dir = Resources:getResourceDirectory(diffuse, self.sectionName).."/";--.."/terrain/";
  --check if the composited images already exist
  local diffspec = diffuse:gsub("[.]", "_")..specular:gsub("[./]","_")..".png";
  local normalheight = normal:gsub("[.]", "_")..height:gsub("[./]","_")..".png";
  local diffspecdds = diffuse:gsub("[.]", "_")..specular:gsub("[./]","_")..".dds";
  local normalheightdds = normal:gsub("[.]", "_")..height:gsub("[./]","_")..".dds";
  -- exists
  local dsex = false;
  local nhex = false;
  -- should be regenerated
  local dsreg = false;
  local dsreg = false;
  -- check if they exist
  if (Resources:resourceExists(diffspec, self.sectionName)) then
    dsex = true;
  else
    print("Generating composite map ("..diffspec..")");
  end
  if (Resources:resourceExists(normalheight, self.sectionName)) then
    nhex = true;
  else
    print("Generating composite map ("..normalheight..")");
  end
  -- if they exist, check for time
  if dsex then
    d = Resources:getResourceModified(diffuse, self.sectionName);
    s = Resources:getResourceModified(specular, self.sectionName);
    ds = Resources:getResourceModified(diffspec, self.sectionName);
    if (ds < math.max(d,s)) then
      dsreg = true;
      print("Diffuse/Specularmap changed, regenerating composite ("..diffspec..")");
    end
  end
  if nhex then
    n = Resources:getResourceModified(normal, self.sectionName);
    h = Resources:getResourceModified(height, self.sectionName);
    nh = Resources:getResourceModified(normalheight, self.sectionName);
    if (nh < math.max(n,h)) then
      nhreg = true;
      print("Normal/Heightmap changed, regenerating composite ("..normalheight..")");
    end
  end
  if (not dsex) or dsreg then
    local compimgds = Ogre.Image:new_local();
    compimgds:loadTwoImagesAsRGBA(diffuse, specular, self.sectionName ,Ogre.PF_BYTE_RGBA);
    compimgds:save(dir..diffspec);
  end
  if (not nhex) or nhreg then
    local compimgds = Ogre.Image:new_local();
    compimgds:loadTwoImagesAsRGBA(normal, height, self.sectionName ,Ogre.PF_BYTE_RGBA);
    compimgds:save(dir..normalheight);
    --print("saving to:" ..dir..normalheight);
  end
  return diffspec, normalheight;
end

-- TODO: do splitting of maps here
--function SF.TerrainPagedWorldSection:defineArea(minX, minY, maxX, maxY

function System.max_resource_modified(resourceGroup, ...)
  local max = 0;
  for i,v in ipairs(arg) do
    if(Resources:resourceExists(v, resourceGroup)) then
      max = math.max(max, Resources:getResourceModified(v, resourceGroup));
    end
  end
  return max;
end

function SF.TerrainPagedWorldSection:defineTileDSNH(x, y, diffuse, specular, normal, height)
  local fullfile = "media"..World.worldpathprefix..World.worldName..World.sectionpathprefix..self.sectionName.."/"..self.terrainGroup:generateFilename(x,y);
  local file = self.terrainGroup:generateFilename(x,y);
  print(file);
  if (Resources:resourceExists(file, self.sectionName)) then
    if (not (System.max_resource_modified(self.sectionName, diffuse, specular, normal, height) > Resources:getResourceModified(file, self.sectionName))) then
      -- up-to-date
      self.terrainGroup:defineTerrainAuto(x,y);
      return;
    end
    print("tile out-of-date");
    return;
  end
  print("building terrain tile: "..x..y);
  diffspec, normalheight = self:loadOrCreateTerrainMaps(diffuse, specular, normal, height);
  local imp = self:importData();
  local img = Ogre.Image();
  img:load(height, self.sectionName);
  imp.inputImage = img;
  imp.worldSize = 8000;
  imp.inputScale = imp.inputScale;
  self:defineLayer(0, 8000, diffspec, normalheight);
  self.terrainGroup:defineTerrainImportData(x,y,imp);
  self.terrainGroup:loadTerrain(x,y, true);
  print("loaded terrain");
  self.terrainGroup:getTerrain(x,y):save(fullfile);
  print("saved terrain");
  self.terrainGroup:removeTerrain(x,y);
  self.terrainGroup:defineTerrainAuto(x,y);
end
