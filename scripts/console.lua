--[[
  console.lua

  Part of the editor that interacts with the UI widget Console
--]]

ilua = {}

function Console:init()
  -- set command patterns
  Editor:executeJS('console.setCommandPatterns({"usercommand" : "Editor:console():userCommand($0);"});');
  ilua.set_strict()
end

function Console:show()
  Editor:executeJS('console.show();');
end

function Console:clear()
  Editor:executeJS('console.clear();');
end

-- userCommand interacts with the lua interpreter in a REPL fashion - command is read, eval'd then the output is printed
function Console:userCommand(cmd)
  ilua:eval_lua(cmd)
end

-- ilua.lua
-- A more friendly Lua interactive prompt
-- doesn't need '='
-- will try to print out tables recursively, subject to the pretty_print_limit value.
-- Steve Donovan, 2007
--
ilua.pretty_print_limit = 20
ilua.max_depth = 7
ilua.table_clever = true
ilua.prompt = '> '
ilua.verbose = false
ilua.strict = true
-- suppress strict warnings
_ = true

-- imported global functions
ilua.sub = string.sub
ilua.match = string.match
ilua.find = string.find
ilua.push = table.insert
ilua.pop = table.remove
ilua.append = table.insert
ilua.concat = table.concat
ilua.floor = math.floor

ilua.declared = {}
ilua.line_handler_fn = nil
ilua.global_handler_fn = nil
ilua.print_handlers = {}
--ilua.num_prec
--ilua.num_all

ilua.jstack = {}

function ilua:join(tbl,delim,limit,depth)
    if not limit then limit = self.pretty_print_limit end
    if not depth then depth = self.max_depth end
    local n = #tbl
    local res = ''
    local k = 0
    -- very important to avoid disgracing ourselves with circular referencs...
    if #self.jstack > depth then
        return "..."
    end
    for i,t in ipairs(self.jstack) do
        if tbl == t then
            return "<self>"
        end
    end
    push(self.jstack,tbl)
    -- this is a hack to work out if a table is 'list-like' or 'map-like'
    -- you can switch it off with ilua.table_options {clever = false}
    local is_list
    if self.table_clever then
        local index1 = n > 0 and tbl[1]
        local index2 = n > 1 and tbl[2]
        is_list = index1 and index2
    end
    if is_list then
        for i,v in ipairs(tbl) do
            res = res..delim..ilua.val2str(v)
            k = k + 1
            if k > limit then
                res = res.." ... "
                break
            end
        end
    else
        for key,v in pairs(tbl) do
            if type(key) == 'number' then
                key = '['..tostring(key)..']'
            else
                key = tostring(key)
            end
            res = res..delim..key..'='..ilua.val2str(v)
            k = k + 1
            if k > limit then
                res = res.." ... "
                break
            end
        end
    end
    pop(self.jstack)
    return sub(res,2)
end


function ilua:val2str(val)
    local tp = type(val)
    if tp == 'function' then
        return tostring(val)
    elseif tp == 'table' then
        if val.__tostring  then
            return tostring(val)
        else
            return '{'..self:join(val,',')..'}'
        end
    elseif tp == 'string' then
        return "'"..val.."'"
    elseif tp == 'number' then
        -- we try only to apply floating-point precision for numbers deemed to be floating-point,
        -- unless the 3rd argConsole.REPL. to precision() is true.
        if self.num_prec and (self.num_all or floor(val) ~= val) then
            return self.num_prec:format(val)
        else
            return tostring(val)
        end
    else
        return tostring(val)
    end
end

function ilua:_pretty_print(...)
    for i,val in ipairs(arg) do
        print(ilua:val2str(val), 3)
    end
    _G['_'] = arg[1]
end

function ilua:compile(line)
    if self.verbose then print(line) end
    local f,err = loadstring(line,'local')
    return err,f
end

function ilua:evaluate(chunk)
    local ok,res = pcall(chunk)
    if not ok then
        return res
    end
    return nil -- meaning, fine!
end

function ilua:eval_lua(line)
    -- is the line handler interested?
    if self.line_handler_fn then
        line = self.line_handler_fn(line)
        -- returning nil here means that the handler doesn't want
        -- Lua to see the string
        if not line then return end
    end
    -- is it an expression?
    local err,chunk = self:compile('ilua:_pretty_print('..line..')')
    if err then
        -- otherwise, a statement?
        err,chunk = self:compile(line)
    end
    -- if compiled ok, then evaluate the chunk
    if not err then
        err = self:evaluate(chunk)
    end
    -- if there was any error, print it out
    if err then
        print(err, 1)
    end
end

-- functions available in scripts
function ilua.precision(len,prec,all)
    if not len then num_prec = nil
    else
        num_prec = '%'..len..'.'..prec..'f'
    end
    num_all = all
end

function ilua.table_options(t)
    if t.limit then pretty_print_limit = t.limit end
    if t.depth then max_depth = t.depth end
    if t.clever ~= nil then table_clever = t.clever end
end

--
-- strict.lua
-- checks uses of undeclared global variables
-- All global variables must be 'declared' through a regular assignment
-- (even assigning nil will do) in a main chunk before being used
-- anywhere.
--
function ilua:set_strict()
    local mt = getmetatable(_G)
    if mt == nil then
        mt = {}
        setmetatable(_G, mt)
    end

    local function what ()
        local d = debug.getinfo(3, "S")
        return d and d.what or "C"
    end

    mt.__newindex = function (t, n, v)
        ilua.declared[n] = true
        rawset(t, n, v)
    end

    mt.__index = function (t, n)
        if not ilua.declared[n] and what() ~= "C" then
            local lookup = false
            if not lookup then
                print("variable '"..n.."' is not declared", 2)
            else
                return lookup
            end
        end
        return rawget(t, n)
    end

end
--[[
print('ILUA: Lua 5.1.2  Copyright (C) 1994-2007 Lua.org, PUC-Rio')

-- any import complaints?
ilua.import()

-- enable 'not declared' error
if strict then
    set_strict()
end
--]]
