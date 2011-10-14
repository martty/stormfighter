-- free camera controller (fcc)
local fcc = {};

fcc.meta = {};
fcc.meta.type = "middlepad";
fcc.meta.group = "User"; -- default

function fcc:onInit()

end

function fcc:updateCollider()
  print('choo choo');
end

return fcc;
