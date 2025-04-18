-- Copyright 2011-16 Paul Kulchenko, ZeroBrane LLC
-- authors: Luxinia Dev (Eike Decker & Christoph Kubisch)
---------------------------------------------------------

local ide = ide
local unpack = table.unpack or unpack

local bottomnotebook = ide.frame.bottomnotebook
local console = bottomnotebook.shellbox
local remotesend

local PROMPT_MARKER = StylesGetMarker("prompt")
local PROMPT_MARKER_VALUE = 2^PROMPT_MARKER
local ERROR_MARKER = StylesGetMarker("error")
local OUTPUT_MARKER = StylesGetMarker("output")
local MESSAGE_MARKER = StylesGetMarker("message")

local config = ide.config.console

console:SetFont(ide:CreateFont(config.fontsize or 10, wx.wxFONTFAMILY_MODERN, wx.wxFONTSTYLE_NORMAL,
  wx.wxFONTWEIGHT_NORMAL, false, config.fontname or "",
  config.fontencoding or wx.wxFONTENCODING_DEFAULT)
)
console:StyleSetFont(wxstc.wxSTC_STYLE_DEFAULT, console:GetFont())
console:StyleClearAll()

console:SetTabWidth(ide.config.editor.tabwidth or 2)
console:SetIndent(ide.config.editor.tabwidth or 2)
console:SetUseTabs(ide.config.editor.usetabs and true or false)
console:SetViewWhiteSpace(ide.config.editor.whitespace and true or false)
console:SetIndentationGuides(true)

console:SetWrapMode(wxstc.wxSTC_WRAP_WORD)
console:SetWrapStartIndent(0)
console:SetWrapVisualFlagsLocation(wxstc.wxSTC_WRAPVISUALFLAGLOC_END_BY_TEXT)
console:SetWrapVisualFlags(wxstc.wxSTC_WRAPVISUALFLAG_END)

console:MarkerDefine(StylesGetMarker("prompt"))
console:MarkerDefine(StylesGetMarker("error"))
console:MarkerDefine(StylesGetMarker("output"))
console:MarkerDefine(StylesGetMarker("message"))
console:SetReadOnly(false)

console:SetupKeywords("lua",nil,ide.config.stylesoutshell)

local function getPromptLine()
  local totalLines = console:GetLineCount()
  return console:MarkerPrevious(totalLines+1, PROMPT_MARKER_VALUE)
end

local function getPromptText()
  local prompt = getPromptLine()
  return console:GetTextRangeDyn(console:PositionFromLine(prompt), console:GetLength())
end

local function setPromptText(text)
  local length = console:GetLength()
  console:SetSelectionStart(length - string.len(getPromptText()))
  console:SetSelectionEnd(length)
  console:ClearAny()
  console:AddTextDyn(text)
  -- refresh the output window to force recalculation of wrapped lines;
  -- otherwise a wrapped part of the last line may not be visible.
  console:Update(); console:Refresh()
  console:GotoPos(console:GetLength())
end

local function positionInLine(line)
  return console:GetCurrentPos() - console:PositionFromLine(line)
end

local function caretOnPromptLine(disallowLeftmost, line)
  local promptLine = getPromptLine()
  local currentLine = line or console:GetCurrentLine()
  local boundary = disallowLeftmost and 0 or -1
  return (currentLine > promptLine
    or currentLine == promptLine and positionInLine(promptLine) > boundary)
end

local function chomp(line) return (line:gsub("%s+$", "")) end

local function getInput(line)
  local nextMarker = line
  local count = console:GetLineCount()

  repeat -- check until we find at least some marker
    nextMarker = nextMarker+1
  until console:MarkerGet(nextMarker) > 0 or nextMarker > count-1
  return chomp(console:GetTextRangeDyn(
    console:PositionFromLine(line), console:PositionFromLine(nextMarker)))
end

function ConsoleSelectCommand(point)
  local cpos = console:ScreenToClient(point or wx.wxGetMousePosition())
  local position = console:PositionFromPoint(cpos)
  if position == wxstc.wxSTC_INVALID_POSITION then return end

  local promptline = console:MarkerPrevious(console:LineFromPosition(position), PROMPT_MARKER_VALUE)
  if promptline == wxstc.wxSTC_INVALID_POSITION then return end
  local nextline = console:MarkerNext(promptline+1, ide.ANYMARKERMASK)
  local epos = nextline ~= wxstc.wxSTC_INVALID_POSITION and console:PositionFromLine(nextline) or console:GetLength()
  console:SetSelection(console:PositionFromLine(promptline), epos)
  return true
end

local currentHistory
local lastCommand = ""
local function getNextHistoryLine(forward, promptText)
  local count = console:GetLineCount()
  if currentHistory == nil then currentHistory = count end

  if forward then
    currentHistory = console:MarkerNext(currentHistory+1, PROMPT_MARKER_VALUE)
    if currentHistory == wx.wxNOT_FOUND then
      currentHistory = count
      return ""
    end
  else
    currentHistory = console:MarkerPrevious(currentHistory-1, PROMPT_MARKER_VALUE)
    if currentHistory == wx.wxNOT_FOUND then
      return lastCommand
    end
  end
  -- need to skip the current prompt line
  -- or skip repeated commands
  if currentHistory == getPromptLine()
  or getInput(currentHistory) == promptText then
    return getNextHistoryLine(forward, promptText)
  end
  return getInput(currentHistory)
end

local function getNextHistoryMatch(promptText)
  local count = console:GetLineCount()
  if currentHistory == nil then currentHistory = count end

  local current = currentHistory
  while true do
    currentHistory = console:MarkerPrevious(currentHistory-1, PROMPT_MARKER_VALUE)
    if currentHistory == wx.wxNOT_FOUND then -- restart search from the last item
      currentHistory = count
    elseif currentHistory ~= getPromptLine() then -- skip current prompt
      local input = getInput(currentHistory)
      if input:find(promptText, 1, true) == 1 then return input end
    end
    -- couldn't find anything and made a loop; get out
    if currentHistory == current then return end
  end

  assert(false, "getNextHistoryMatch coudn't find a proper match")
end

local function concat(sep, ...)
  local text = ""
  for i=1, select('#',...) do
    text = text .. (i > 1 and sep or "") .. tostring(select(i,...))
  end

  -- split the text into smaller chunks as one large line
  -- is difficult to handle for the editor
  local prev, maxlength = 0, ide.config.debugger.maxdatalength
  if #text > maxlength and not text:find("\n.") then
    text = text:gsub("()(%s+)", function(p, s)
        if p-prev >= maxlength then
          prev = p
          return "\n"
        else
          return s
        end
      end)
  end
  return text
end

local partial = false
local function shellPrint(marker, text, newline)
  if not text or text == "" then return end -- return if nothing to print
  if newline then text = text:gsub("\n+$", "").."\n" end
  local isPrompt = marker and (getPromptLine() ~= wx.wxNOT_FOUND)
  local lines = console:GetLineCount()
  local promptLine = isPrompt and getPromptLine() or nil
  local insertLineAt = isPrompt and not partial and getPromptLine() or console:GetLineCount()-1
  local insertAt = isPrompt and not partial and console:PositionFromLine(getPromptLine()) or console:GetLength()
  console:InsertTextDyn(insertAt, console.useraw and text or FixUTF8(text, function (s) return '\\'..string.byte(s) end))
  local linesAdded = console:GetLineCount() - lines

  partial = text:find("\n$") == nil

  if marker then
    if promptLine then console:MarkerDelete(promptLine, PROMPT_MARKER) end
    for line = insertLineAt, insertLineAt + linesAdded - 1 do
      console:MarkerAdd(line, marker)
    end
    if promptLine then console:MarkerAdd(promptLine+linesAdded, PROMPT_MARKER) end
  end

  console:EmptyUndoBuffer() -- don't allow the user to undo shell text
  console:GotoPos(console:GetLength())
  console:EnsureVisibleEnforcePolicy(console:GetLineCount()-1)
end

displayShellDirect = function (...) shellPrint(nil, concat("\t", ...), true) end
DisplayShell = function (...) shellPrint(OUTPUT_MARKER, concat("\t", ...), true) end
DisplayShellErr = function (...) shellPrint(ERROR_MARKER, concat("\t", ...), true) end
DisplayShellMsg = function (...) shellPrint(MESSAGE_MARKER, concat("\t", ...), true) end
  -- don't print anything; just mark the line with a prompt mark
DisplayShellPrompt = function (...) console:MarkerAdd(console:GetLineCount()-1, PROMPT_MARKER) end

function console:Print(...) return DisplayShell(...) end
function console:Write(...) return shellPrint(OUTPUT_MARKER, concat("", ...), false) end
function console:Error(...) return DisplayShellErr(...) end

local function filterTraceError(err, addedret)     
          err = err:gsub('^%[.-%]:%d-:%s', "") --end
          ide:Print(err)
        err = err:match("(.*)\n[^\n]*%(tail call%): %?$") or err
  return err
end

local function createenv()
  local env = {}
  setmetatable(env,{__index = _G})

  local function luafilename(level)
    level = level and level + 1 or 2
    local src
    while (true) do
      src = debug.getinfo(level)
      if (src == nil) then return nil,level end
      if (string.byte(src.source) == string.byte("@")) then
        return string.sub(src.source,2),level
      end
      level = level + 1
    end
  end

  local function luafilepath(level)
    local src,level = luafilename(level)
    if (src == nil) then return src,level end
    src = string.gsub(src,"[\\/][^\\//]*$","")
    return src,level
  end

  local function relativeFilename(file)
    assert(type(file)=='string',"String as filename expected")
    local name = file
    local level = 3
    while (name) do
      if (wx.wxFileName(name):FileExists()) then return name end
      name,level = luafilepath(level)
      if (name == nil) then break end
      name = name .. "/" .. file
    end

    return file
  end

  local function relativeFilepath(file)
    local name = luafilepath(3)
    return (file and name) and name.."/"..file or file or name
  end

  local _loadfile = loadfile
  local function loadfile(file)
    assert(type(file)=='string',"String as filename expected")
    local name = relativeFilename(file)

    return _loadfile(name)
  end

  local function dofile(file, ...)
    assert(type(file) == 'string',"String as filename expected")
    local fn,err = loadfile(file)
    local args = {...}
    if not fn then
      DisplayShellErr(err)
    else
      setfenv(fn,env)
      return fn(unpack(args))
    end
  end

  local os = {
    exit = function()
      ide.frame:AddPendingEvent(wx.wxCommandEvent(wx.wxEVT_COMMAND_MENU_SELECTED, ID.EXIT))
    end,
  }
  env.os = setmetatable(os, {__index = _G.os})
  env.io = setmetatable({write = function(...) console:Write(...) end}, {__index = _G.io})
  env.print = function(...) console:Print(...) end
  env.dofile = dofile
  env.loadfile = loadfile
  env.RELFILE = relativeFilename
  env.RELPATH = relativeFilepath

  return env
end

local env = createenv()

function ShellSetAlias(alias, table)
  local value = env[alias]
  env[alias] = table
  return value
end

local function packResults(status, ...) return status, {...} end

local ffi = require "ffi"
local lua54 = require 'state'
local L = lua54.luaL_newstate();
lua54.luaL_openlibs(L)

local function lua_pop(n)
  lua54.lua_settop(L, -n-1)
end

local function lua_getstring(idx)
  local idx = idx or -1
	local len = ffi.abi("64bit") and ffi.new("uint64_t[1]", 0) or ffi.new("unsigned int[1]", 0)
	local str = ffi.string(lua54.lua_tolstring(L, idx, len), len[0])
  if idx == -1 then
    lua_pop(1)
  end
	return str
end

lua54.lua_pushcclosure(L, function (l)
  local n = tonumber(lua54.lua_gettop(L));
  local result = ""
  for i = 1, n do
    result = result.."\t"..lua_getstring(i)
  end
  shellPrint(OUTPUT_MARKER, result, true)
  return 0
end, 0)
lua54.lua_setglobal(L, "print")

local function loadchunk(str) 
	if lua54.luaL_loadstring(L, str) ~= lua54.LUA_OK then
		return nil, lua_getstring()
	end
	lua54.lua_setglobal(L, "callfunc")
	return true
end

local function lua_dostring(str)
	if lua54.luaL_loadstring(L, str) == lua54.LUA_OK then
    return lua54.lua_pcallk(L, 0, 1, 0, 0, nil) == 0
  end
  return false
end

function console.getvalue(str)
  if lua_dostring("return "..str) then
    return lua_getstring()
  end
end

local f = io.open("lualibs/pretty.lua", "r")
lua_dostring(f:read("*all"))
f:close()


local function execute_original(tx)
  if tx == nil or tx == '' then return end

  local forcelocalprefix = '^!'
  local forcelocal = tx:find(forcelocalprefix)
  tx = tx:gsub(forcelocalprefix, '')

  DisplayShellPrompt('')

  -- try to compile as statement
  local loadstring = loadstring or load
  local _, err = loadstring(tx)
  local isstatement = not err

  if remotesend and not forcelocal then remotesend(tx, isstatement); return end

  local addedret, forceexpression = true, tx:match("^%s*=%s*")
  tx = tx:gsub("^%s*=%s*","")
  local fn
  fn, err = loadstring("return "..tx)
  if not forceexpression and err then
    fn, err = loadstring(tx)
    addedret = false
  end
  
  if fn == nil and err then
    DisplayShellErr(filterTraceError(err, addedret))
  elseif fn then
    setfenv(fn,env)

    -- set the project dir as the current dir to allow "require" calls
    -- to work from shell
    local projectDir, cwd = ide:GetProject(), nil
    if projectDir and #projectDir > 0 then
      cwd = wx.wxFileName.GetCwd()
      wx.wxFileName.SetCwd(projectDir)
    end

    local ok, res = packResults(xpcall(fn,
      function(err)
        DisplayShellErr(filterTraceError(debug.traceback(err), addedret))
      end))

    -- restore the current dir
    if cwd then wx.wxFileName.SetCwd(cwd) end
    
    if ok and (addedret or #res > 0) then
      if addedret then
        local mobdebug = require "mobdebug"
        for i,v in pairs(res) do -- stringify each of the returned values
          res[i] = (forceexpression and i > 1 and '\n' or '') ..
            mobdebug.line(v, {nocode = true, comment = 1,
              -- if '=' is used, then use multi-line serialized output
              indent = forceexpression and '  ' or nil})
        end
        -- add nil only if we are forced (using =) or if this is not a statement
        -- this is needed to print 'nil' when asked for 'foo',
        -- and don't print it when asked for 'print(1)'
        if #res == 0 and (forceexpression or not isstatement) then
          res = {'nil'}
        end
      end
      DisplayShell(unpack(res))
    end
  end
end

local function executeShellCode(tx, ismacro)
  if tx == nil or tx == '' then return end

  if ismacro == true then
    return execute_original(tx)
  end
  
  local forcelocalprefix = '^!'
  local forcelocal = tx:find(forcelocalprefix)
  tx = tx:gsub(forcelocalprefix, '')

  DisplayShellPrompt('')

  -- try to compile as statement
  local _, err = loadchunk(tx)
  local isstatement = not err

  if remotesend and not forcelocal then remotesend(tx, isstatement); return end

  local addedret, forceexpression = true, tx:match("^%s*=%s*")
  tx = tx:gsub("^%s*=%s*","")
  local fn
  fn, err = loadchunk("return "..tx)
  if not forceexpression and err then
    fn, err = loadchunk(tx)
    addedret = false
  end
  if fn == nil and err then
    DisplayShellErr(filterTraceError(err, addedret))
  elseif fn == true then
    -- 308setfenv(fn,env)

    -- set the project dir as the current dir to allow "require" calls
    -- to work from shell
    local projectDir, cwd = ide:GetProject(), nil
    if projectDir and #projectDir > 0 then
      cwd = wx.wxFileName.GetCwd()
      wx.wxFileName.SetCwd(projectDir)
    end
	if lua_dostring("return pretty(callfunc(), {nocode = false, comment = false, indent='\t'})") == false then
		DisplayShellErr(filterTraceError(lua_getstring(), addedret))
	else
    local result = lua_getstring()
    if result == "nil" and (forceexpression or isstatement) then
      result = ""
    end
		DisplayShell(result)
	end

    -- local ok, res = packResults(xpcall(fn,
      -- function(err)
        -- DisplayShellErr(filterTraceError(debug.traceback(err), addedret))
      -- end))

    -- restore the current dir
    if cwd then wx.wxFileName.SetCwd(cwd) end
    
    -- if ok and (addedret or #res > 0) then
      -- if addedret then
        -- local mobdebug = require "mobdebug"
        -- for i,v in pairs(res) do -- stringify each of the returned values
          -- res[i] = (forceexpression and i > 1 and '\n' or '') ..
            -- mobdebug.line(v, {nocode = true, comment = 1,
              -- -- if '=' is used, then use multi-line serialized output
              -- indent = forceexpression and '  ' or nil})
        -- end
        -- -- add nil only if we are forced (using =) or if this is not a statement
        -- -- this is needed to print 'nil' when asked for 'foo',
        -- -- and don't print it when asked for 'print(1)'
        -- if #res == 0 and (forceexpression or not isstatement) then
          -- res = {'nil'}
        -- end
      -- end
      -- displayshell(unpack(res))
    -- end
  end
end

function console:GetRemote() return remotesend end
function console:SetRemote(client)
  remotesend = client

  local index = bottomnotebook:GetPageIndex(console)
  if index then
    bottomnotebook:SetPageText(index,
      client and "Debugging console" or "Lua interpreter")
  end
end

function ShellExecuteFile(wfilename)
  if (not wfilename) then return end
  local cmd = 'dofile([['..wfilename:GetFullPath()..']])'
  ShellExecuteCode(cmd)
end

ShellExecuteInline = executeShellCode
function ShellExecuteCode(code, ismacro)
  local index = bottomnotebook:GetPageIndex(bottomnotebook.shellbox)
  if ide.config.activateoutput and bottomnotebook:GetSelection() ~= index then
    bottomnotebook:SetSelection(index)
  end
  displayShellDirect(code)
  executeShellCode(code, ismacro)
end

local function displayShellIntro()
  DisplayShellMsg(TR("Welcome to the interactive Lua 5.4.7 "..console.getvalue("_ARCH").." interpreter").."\n"
    ..TR("Use 'help' to display the local console help.").."\n")
  DisplayShellPrompt('')
end

console:Connect(wx.wxEVT_KEY_DOWN,
  function (event)
    -- this loop is only needed to allow to get to the end of function easily
    -- "return" aborts the processing and ignores the key
    -- "break" aborts the processing and processes the key normally
    while true do
      local key = event:GetKeyCode()
      local modifiers = event:GetModifiers()
      if key == wx.WXK_UP or key == wx.WXK_NUMPAD_UP then
        -- if we are below the prompt line, then allow to go up
        -- through multiline entry
        if console:GetCurrentLine() > getPromptLine() then break end

        -- if we are not on the caret line, or are on wrapped caret line, move normally
        if not caretOnPromptLine()
        or console:GetLineWrapped(console:GetCurrentPos(), -1) then break end

        -- only change prompt if no modifiers are used (to allow for selection movement)
        if modifiers == wx.wxMOD_NONE then
          local promptText = getPromptText()
          setPromptText(getNextHistoryLine(false, promptText))
          -- move to the beginning of the updated prompt
          console:GotoPos(console:PositionFromLine(getPromptLine()))
        end
        return
      elseif key == wx.WXK_DOWN or key == wx.WXK_NUMPAD_DOWN then
        -- if we are above the last line, then allow to go down
        -- through multiline entry
        local totalLines = console:GetLineCount()-1
        if console:GetCurrentLine() < totalLines then break end

        -- if we are not on the caret line, or are on wrapped caret line, move normally
        if not caretOnPromptLine()
        or console:GetLineWrapped(console:GetCurrentPos(), 1) then break end

        -- only change prompt if no modifiers are used (to allow for selection movement)
        if modifiers == wx.wxMOD_NONE then
          local promptText = getPromptText()
          setPromptText(getNextHistoryLine(true, promptText))
          -- staying at the end of the updated prompt
        end
        return
      elseif key == wx.WXK_TAB then
        -- if we are above the prompt line, then don't move
        local promptline = getPromptLine()
        if console:GetCurrentLine() < promptline then return end

        local promptText = getPromptText()
        -- save the position in the prompt text to restore
        local pos = console:GetCurrentPos()
        local text = promptText:sub(1, positionInLine(promptline))
        if #text == 0 then return end

        -- find the next match and set the prompt text
        local match = getNextHistoryMatch(text)
        if match then
          setPromptText(match)
          -- restore the position to make it easier to find the next match
          console:GotoPos(pos)
        end
        return
      elseif key == wx.WXK_ESCAPE then
        setPromptText("")
        return
      elseif key == wx.WXK_BACK or key == wx.WXK_LEFT or key == wx.WXK_NUMPAD_LEFT then
        if (key == wx.WXK_BACK or console:LineFromPosition(console:GetCurrentPos()) >= getPromptLine())
        and not caretOnPromptLine(true) then return end
      elseif key == wx.WXK_DELETE or key == wx.WXK_NUMPAD_DELETE then
        if not caretOnPromptLine()
        or console:LineFromPosition(console:GetSelectionStart()) < getPromptLine() then
          return
        end
      elseif key == wx.WXK_PAGEUP or key == wx.WXK_NUMPAD_PAGEUP
          or key == wx.WXK_PAGEDOWN or key == wx.WXK_NUMPAD_PAGEDOWN
          or key == wx.WXK_END or key == wx.WXK_NUMPAD_END
          or key == wx.WXK_HOME or key == wx.WXK_NUMPAD_HOME
          -- `key == wx.WXK_LEFT or key == wx.WXK_NUMPAD_LEFT` are handled separately
          or key == wx.WXK_RIGHT or key == wx.WXK_NUMPAD_RIGHT
          or key == wx.WXK_SHIFT or key == wx.WXK_CONTROL
          or key == wx.WXK_ALT then
        break
      elseif key == wx.WXK_RETURN or key == wx.WXK_NUMPAD_ENTER then
        if not caretOnPromptLine()
        or console:LineFromPosition(console:GetSelectionStart()) < getPromptLine() then
          return
        end

        -- allow multiline entry for shift+enter
        if caretOnPromptLine(true) and event:ShiftDown() then break end

        local promptText = getPromptText()
        if #promptText == 0 then return end -- nothing to execute, exit
        if promptText == 'clear' then
          console:Erase()
        elseif promptText == 'reset' then
          console:Reset()
          setPromptText("")
        elseif promptText == 'help' then
          displayShellDirect('\n')
          DisplayShellPrompt('')
          DisplayShell(TR("\tEnter Lua code and press Enter to run it.").."\n"
            ..TR("\tUse Shift-Enter for multiline code.").."\n\n"
            ..TR("\tUse 'clear' to clear the shell output and the history.").."\n"
            ..TR("\tUse 'reset' to clear the environment.").."\n\n"
            ..TR("\tPrepend '=' to show complex values on multiple lines.").."\n"
            ..TR("\tPrepend '!' to force local execution."))  
        else
          displayShellDirect('\n')
          executeShellCode(promptText)
        end
        currentHistory = getPromptLine() -- reset history
        return -- don't need to do anything else with return
      elseif modifiers == wx.wxMOD_NONE or console:GetSelectedText() == "" then
        -- move cursor to end if not already there
        if not caretOnPromptLine() then
          console:GotoPos(console:GetLength())
          console:SetReadOnly(false) -- allow the current character to appear at the new location
        -- check if the selection starts before the prompt line and reset it
        elseif console:LineFromPosition(console:GetSelectionStart()) < getPromptLine() then
          console:GotoPos(console:GetLength())
          console:SetSelection(console:GetSelectionEnd()+1,console:GetSelectionEnd())
        end
      end
      break
    end
    event:Skip()
  end)

local function inputEditable(line)
  return caretOnPromptLine(false, line) and
    not (console:LineFromPosition(console:GetSelectionStart()) < getPromptLine())
end

-- Scintilla 3.2.1+ changed the way markers move when the text is updated
-- ticket: http://sourceforge.net/p/scintilla/bugs/939/
-- discussion: https://groups.google.com/forum/?hl=en&fromgroups#!topic/scintilla-interest/4giFiKG4VXo
if ide.wxver >= "2.9.5" then
  -- this is a workaround that stores a position of the last prompt marker
  -- before insert and restores the same position after as the marker
  -- could have moved if the text is added at the beginning of the line.
  local promptAt
  console:Connect(wxstc.wxEVT_STC_MODIFIED,
    function (event)
      local evtype = event:GetModificationType()
      if bit.band(evtype, wxstc.wxSTC_MOD_BEFOREINSERT) ~= 0 then
        local promptLine = getPromptLine()
        if promptLine and event:GetPosition() == console:PositionFromLine(promptLine)
        then promptAt = promptLine end
      end
      if bit.band(evtype, wxstc.wxSTC_MOD_INSERTTEXT) ~= 0 then
        local promptLine = getPromptLine()
        if promptLine and promptAt then
          console:MarkerDelete(promptLine, PROMPT_MARKER)
          console:MarkerAdd(promptAt, PROMPT_MARKER)
          promptAt = nil
        end
      end
    end)
end

console:Connect(wxstc.wxEVT_STC_UPDATEUI,
  function (event) console:SetReadOnly(not inputEditable()) end)

-- only allow copy/move text by dropping to the input line
console:Connect(wxstc.wxEVT_STC_DO_DROP,
  function (event)
    if not inputEditable(console:LineFromPosition(event:GetPosition())) then
      event:SetDragResult(wx.wxDragNone)
    end
  end)

if config.nomousezoom then
  -- disable zoom using mouse wheel as it triggers zooming when scrolling
  -- on OSX with kinetic scroll and then pressing CMD.
  console:Connect(wx.wxEVT_MOUSEWHEEL,
    function (event)
      if wx.wxGetKeyState(wx.WXK_CONTROL) then return end
      event:Skip()
    end)
end

displayShellIntro()

function console:Erase()
  -- save the last command to keep when the history is cleared
  currentHistory = getPromptLine()
  lastCommand = getNextHistoryLine(false, "")
  -- allow writing as the editor may be read-only depending on current cursor position
  self:SetReadOnly(false)
  self:ClearAll()
  displayShellIntro()
end

function console:Reset()
  env = createenv() -- recreate the environment to "forget" all changes in it
end

function console:Shutdown()
  if lua54 ~= nil then
    lua54.lua_close(L)
    L = nil    
  end
end