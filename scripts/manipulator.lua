dc = {};

dc.meta = {};
dc.meta.type = "Manipulator";
dc.meta.group = "Editor";

dc.meta.editor = {}; -- editor setup
dc.meta.editor.hide = true;

function dc:onInit()
  bbox = self:object():getBoundingBox();

  dc.obj:transform():setScale(SVector3(1.5, 1.5, 1.5));
end

function dc:onUpdate()
end

return dc;
