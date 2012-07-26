-- Showcase : namespace
--
-- contains functions that create a scene where you can view meshes, materials, etc.

Showcase = {};


-- creates a showcase
-- params: scene bg, etc...
function Showcase:createShowcase()
  self.num_showcases = 0;
  self.spacing = 20;
  local lightGO = Hierarchy:createGameObject("showcase_light1");
  local light = Light:new(Light.LT_POINT);
  lightGO:addComponent(light);
  lightGO:addComponent(Primitive:new(Primitive.SPHERE));
  lightGO:transform().scale = SVector3(0.01, 0.01, 0.01);
  light:setDiffuseColour(SColourValue(1,1,1));
  light:setSpecularColour(SColourValue(1,1,0));
  lightGO:transform().position = SVector3(0,20,0);
end

-- adds a material to the showcase
-- params: the mesh to view on (default: Primitive.SPHERE)
function Showcase:addMaterial(materialname, meshname)
  --meshname = defaultparameter()
  local go = Hierarchy:createGameObject("showcase_"..materialname);
  go:addComponent(Primitive:new(Primitive.SPHERE));
  go:component("Primitive"):setMaterialName(materialname);
  go:transform().scale = SVector3(0.1, 0.1, 0.1);
  go:transform().position = SVector3(self.num_showcases*self.spacing, 0, 0);
  self.num_showcases = self.num_showcases + 1;
  local ccc = System:loadComponent('scripts/showcase_rotator.lua');
  go:addComponent(ccc);
end
