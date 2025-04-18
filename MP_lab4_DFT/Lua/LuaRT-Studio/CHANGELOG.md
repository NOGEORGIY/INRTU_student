# LuaRT Studio Changelog

## LuaRT Studio v1.9.0 (Jan 27 2025)
- Updated: LuaRT Studio is now using the LuaRT 1.9.0 toolchain
- Fixed: Task function can now be debugged (Fixes #237)

## LuaRT Studio v1.8.0 (May 30 2024)
- New: Theme selection is now available in the new `Edit\Preferences\Theme` menu
- New: `DarkDefault` and `LightDefault` themes
- New: New canvas examples `balls_demo.lua`
- New: New `Open RTBuilder` command and toolbar icon 
- Updated: LuaRT Studio is now using the LuaRT 1.8.0 toolchain
- Fixed: Themes now applies to the left pane too (Projects/Symbols)
- Fixed: Better dark mode autodetection for Windows 10/11
- Fixed: Output pane now uses UNICODE or no encoding at all as needed (using standard Lua `io` functions won't show wrong characters anymore) (Fixes #21)
- Fixed: Using breakpoints will now pause debugging when using LuaRT `ui` module and a Task to update the GUI
- Fixed: tables with metatables are now pretty printed correctly
- Fixed : Setting project arguments won't add a blank space to the first argument anymore (Fixes #22)

## LuaRT Studio v1.6.0 (Nov 26 2023)
- Updated: LuaRT Studio is now using the LuaRT 1.6.0 toolchain
- New: New `Check for LuaRT update` command in `File` menu
- New: New toolbar icon for the "Analyze" command
- Updated: `Help` menu now contains links related to LuaRT webiste
- Fixed: Debugging a script that contains a call to the `Task:wait()` method won't crash the program anymore (Fixes #20)
- Fixed: Clicking on the "stop" button will now really stop the running program (Fixes #19)

## LuaRT Studio v1.4.0 (Apr 21 2023)
- Updated LuaRT toolchain to v1.4.0
- Updated `examples\` folder, now sorted by modules
- New `modules\` folder, with LuaRT binary modules

## LuaRT Studio v1.3.2 Bugfix (Feb 19 2023)
- Updated LuaRT toolchain to v1.3.2
- Fixed `print()` function prints only first argument in Lua interpreter panel 

## LuaRT Studio v1.3.1 Bugfix (Feb 04 2023)
- Updated LuaRT toolchain to v1.3.1
- Fixed running script fails due to spaces in path (Fixes #13) 
- Fixed running with arguments fails (Fixes #14)

## LuaRT Studio v1.3.0 (Jan 28 2023)

### Highlights & Improvements
  - LuaRT toolchain updated to v1.3.0 
  - Updated examples to LuaRT v1.3.0
  - New integrated Lua code formatter/beautifier <kbd>Alt</kbd> + <kbd>F</kbd> (uses Stylua)
  - New Variables pane shown during debugging that list all current scope variables
  - New debugging view that shows Symbols and Variables pane during debugging
  - New UTF8/UNICODE complete support in Output pane
  - New LuaRT ``modules\`` folder autodetection
  - New keyboard shortcut to copy line(s) down <kbd>Alt</kbd> + <kbd>Shift</kbd> + <kbd>&#8595;</kbd> and up <kbd>Alt</kbd> + <kbd>Shift</kbd> + <kbd>&#8593;</kbd>
  - New keyboard shortcut to move line(s) down <kbd>Alt</kbd> + <kbd>&#8595;</kbd> and up <kbd>Alt</kbd> + <kbd>&#8593;</kbd>
  - Changed comment keyboard shortcut to <kbd>Ctrl</kbd> + <kbd>:</kbd>
  - Changed replace keyboard shortcut to <kbd>Ctrl</kbd> + <kbd>H</kbd>
  - Changed replace in files keyboard shortcut to <kbd>Ctrl</kbd> + <kbd>Shift</kbd> + <kbd>H</kbd>
  - Updated "Local console" pane to "Lua interpreter" pane
  - Updated "Remote console" pane to "Debugging console" pane
  - Updated breakpoint color to a more consensual one (red !)
  - Updated wrtc to show message in Output panel after compilation succeeded instead of showing a message box
  - Symbols pane now shows only symbols for the current opened file
  - Project view now shows EXE and DLL files
  - Removed Watch pane (replaced by the new Variables Pane)


### Bugfixes
  - Fixed Lua scripts cannot be executed in the IDE 
  - Fixed "Show console when running option" has no effect
  - Fixed document tab may contain more than one '*' after file change
  - Fixed Symbols pane showing global variables multiple times
  - Fixed Symbols pane showing a non transparent icon for anonymous functions
  - Fixed Output pane don't support reading from console input 
  - Fixed LuaRT Console output module breaking Output pane redirection 
  - Fixed binary modules in LuaRT "modules\\" folder not found during debugging session

## LuaRT Studio v1.2.1 (Dec 10 2022)

### Highlights & Improvements
  - LuaRT toolchain updated to v1.2.0 
  - Updated examples to LuaRT v1.2.0
 
### Bugfixes
  - Fixed debugging crash in LuaRT Studio x64

## LuaRT Studio v1.2.0 (Nov 3 2022)
 
### Highlights & Improvements
  - New x64 LuaRT-Studio to develop and debug 64bits Lua applications, using the LuaRT x64 toolchain
  - LuaRT interpreter updated to LuaRT 1.1.0 
  - New examples: img_viewer.wlua, server.wlua and binary.wlua
  - New welcome message in Output and Local panes
 
### Bugfixes
- Fixed runtime error when compiling to executable without a project set

## v1.1 (Sept 25 2022)

### Highlights & Improvements
  - LuaRT interpreter updated to LuaRT 1.0.0 x86
  - New "Compile to executable..." in Project menu to compile the current Lua script to executable
  - Uses wrtc.exe, the GUI frontend for rtc

------------------------------------------------------------------------------------
## v1.0 (Jun 26 2022)

### Highlights & Improvements
  - First release of LuaRT Studio, a Windows Lua 5.4 and LuaRT IDE based on ZeroBrane Studio
  - Bundled with a specific LuaRT interpreter, compatible with standard Lua 5.4.4
  - Automatic switch between Lua console or desktop application based on file extension (.lua and .wlua respectively)
  - Updated UI, using current Windows UI theme, icons for files, tabs, and panels.
  - Rework of the "Outline" tab, now called "Symbols" (displays local and global variables, new icons, table expansion...)
  - Icons for variables in Watch panel and Stack panel, based on their type
  - Support for using ttf font files in studio/res/fonts
  - LuaCheck updated to 0.26
  - Updated mobdebug to support LuaRT objects.
  - New project option to Show/Hide console window.
  - Local console now uses Lua 5.4.4
  - Project panel updated to use file icons
  
------------------------------------------------------------------------------------
# ZeroBrane Studio Changelog

## v1.90 (Feb 09 2020)

### Special thanks
  - To [Paul Reilly](https://github.com/paul-reilly) for improving luacheck configuration.
  - To [Alexey Melnichuk](https://github.com/moteus) for adding support for `linecomment` to lpeg lexer.
  - To [Alexey Melnichuk](https://github.com/moteus) for fixing locking of the last expanded directory.
  - To numzero for fixing re-applying of editor styles.
  - To [Alexander Misel](https://github.com/AlexanderMisel) for improvements to Simplified Chinese translation.
  - To [olueiro](https://github.com/olueiro) for updates pt-br language translation.
  - To [yu-tang](https://github.com/yu-tang) for Japanese translation.
  - To [Shmuel Zeigerman](https://github.com/shmuz) for fixing memory allocation for the directory path.

### Highlights
  - Added support for macOS Catalina (switched to 64-bit binaries).
  - Added support for dark mode.
  - Added support for font ligatures (`editor.showligatures`).
  - Added support for hoisted directories in the project tree.
  - Added activating opened file before overwriting when renaming.
  - Added indicator and incremental search for search-in-selection.
  - Added search option to search mapped directories when present (off by default).
  - Added search option to follow symlinks (off by default).
  - Added Japanese translation.
  - Added support for loading private fonts.
  - Included libtiff, XML, and XRC wxlua components.
  - Improved file renaming from the project tree.
  - Upgraded luasec (0.9) and bundled OpenSSL libraries (1.1.1d).
  - Updated Linux versions to use GTK3.
  - Updated Love2d API for 11.3.

### Improvements
  - Added handling of dark mode switching in the OS (#999).
  - Added setting dark mode when configured by the OS (#999).
  - Added `GetBestIconSize` method to identify the most appropriate toolbar icon size.
  - Added rescaling to fix blury text in commandbar on hidpi screens in macOS (#999).
  - Added `editor.showligatures` setting (#960).
  - Added workaround for large font in auto-complete popup when DirectWrite is used (#999, #960).
  - Added support for font ligatures (#999, #960).
  - Added workaround for Linux crash on middle mouse click in the editor (pkulchenko/wxlua#5).
  - Added workaround for macOS crash when editor is closed with opened autocomplete popup (#999).
  - Added workaround for white background in focused tree items (#999).
  - Allowed warnings about globals from luacheck by default (#1013).
  - Added `IsExiting` method (#166).
  - Added check to improve compatibility with 'system' versions of wxlua 2.8.
  - Added search option to search mapped directories when present (off by default).
  - Added search option to follow symlinks to the searchbar (off by default).
  - Added option for skipping symlinks during search.
  - Added activating the editor tab after right click.
  - Added `CreateNotebook` method to provide `GetCurrentPage` if not available (#166).
  - Added `GetShortFilePath` method (#166).
  - Added `project` scope to `CloseAll` and switched to using it in project switching.
  - Added `dryrun` option for `CloseAll` method to retrieve documents to be closed.
  - Added seven lexers from Scintila 3.10.1.
  - Added `GetTabCtrl` method for the notebook.
  - Added `onFiletreeFileMarkSelected` event (#166).
  - Added `MarginFromPoint` editor method (#166).
  - Added `IsDirHoisted` method for project tree.
  - Added showing file icons on editor tabs.
  - Added `CreateFileIcon` method (#166).
  - Added switching to window being saved during `Save As` and `Save All` operations.
  - Added `SetFileName` document method (#166).
  - Added `IsActive` document method (#166).
  - Added `CreateDocument` method (#166).
  - Added `OutputDebugStringW` method for `fs` module.
  - Added `GetDocumentList` method (#166).
  - Added `RemoveDocument` method (#166).
  - Added end scope name for `else` statement (#946).
  - Added writing using `fs` library on Windows, as this preserves file attributes.
  - Added editor tooltip showing full path (when available).
  - Added support for hoisted directories.
  - Enabled icon scaling on macOS for better file icons (#999).
  - Explicitly disable lines in tree controls on macOS and Linux (#999).
  - Improved support for running the IDE using Lua 5.2+ without `module` compatibility.
  - Improved wxwidget API/autocomplete (closes #979).
  - Minor update to zh-cn translation (closes #990).
  - Moved updating file history to happen on document activation.
  - Renamed the Simplified Chinese locale and improve translation
  - Refactored file renaming from the file tree to avoid creating editor tabs.
  - Removed `CloseAllExcept` method as it's not longer needed.
  - Removed `SetTabIndex` and direct tab index usage.
  - Removed `hidpi` option, as it's no longer needed with hidpi always supported (#999).
  - Removed message on mixed end-of-line characters for binary files (#1012).
  - Removed message on failing to load binary files, as the error is reported anyway (#1012).
  - Removed wxlua build workarounds that are not needed with the current wxlua version (#999).
  - Removed freezing of the file tree, as moving active filename into view fails (#999).
  - Updated application icons to add 128- and 256-pixel ones.
  - Updated editor marker size to work better on hidpi screens (#999).
  - Update tab art processing to ensure that tabs are of the same height on macOS (#999).
  - Upgraded luasec to 0.9 and openssl to 1.1.1d (closes #958).
  - Updated copyright year in the About screen.
  - Updated Windows build script to set `static-libgcc` to avoid dll dependencies (#999).
  - Updated style processing for more robust handling of color values.
  - Updated markup color for better visibility on dark background.
  - Updated wxlua binaries to use wxlua 3.0.0.8 (#999).
  - Updated macOS build script to require 10.14+ SDK for dark mode support (#999).
  - Updated build scripts to add copying headers.lua when luasocket is built.
  - Updated file icon font processing to make it independent from editor font (#999).
  - Updated `tonumber` conversion to improve running the IDE using Lua 5.2 or Lua 5.3.
  - Updated to disable Window menu on macOS (#999).
  - Updated drawing of scaled file icons to improve font readability (#999).
  - Updated sash/border size to be smaller and only scale on Windows (#999).
  - Updated search toolbar size to match the main toolbar (#999).
  - Updated toolbar icon auto-sizing to better work on smaller, but scaled screens (#999).
  - Updated rescaling check, as it's only supported in wxwidgets 3.1.2+ (#999).
  - Updated icon processing to work with scaled resolution (#999).
  - Updated architecture setting to 64bit on macOS (#999).
  - Updated macOS build script to use rpath in library references (#1018, #999).
  - Updated clipboard handling of invalid UTF-8 content on Windows (#1012).
  - Updated editor to set block cursor for binary files (#1012).
  - Updated handling of binary files to load the entire file (closes #1012).
  - Updated to add workaround for occasional crash on macOS and Linux (#999).
  - Updated build scripts to add `xml` and `xrc` wxwidgets components (#999).
  - Updated tab close button on Linux to match those on Windows and macOS (#999).
  - Updated END_PROCESS callback to Detach launched process (#999).
  - Updated launcher on Windows to use more reliable method to find executable path.
  - Updated build scripts to enable `AddPrivateFont` in wxFont (#999).
  - Updated build scripts to add libtiff to wxlua binary (#999, closes #963).
  - Updated Linux dependencies to install GTK3 (#999).
  - Updated to use `wxLuaProcess` when available, as it fixes macOS crash (#999).
  - Updated to use API call to get label text without shortcut.
  - Updated to use screen size when setting default frame size.
  - Updated idle processing to skip items from the same group.
  - Updated commandbar processing to use space as any character in prefiltering.
  - Updated filtering logic in commandbar to better handle non-alphanum characters.
  - Updated Love2d API for 11.3 (#247).
  - Updated autocomplete to allow classes without any (sub-)elements.
  - Updated to suppress repeated errors about files that can't be indexed.
  - Updated love2d interpreter to cache love2d executable name per project.
  - Updated love2d interpreter to reduce duplication.
  - Updated markup restyling to not happen during cursor movement.
  - Updated tooltip position to better work with wrapped lines.
  - Updated `IsSameDirectoryPath` method to handle `nil` parameters (closes #1021).
  - Updated handling of search-in-selection toggle to better work on macOS 10.14+.
  - Updated to allow incremental search with search-in-selection.
  - Updated editor font loading to better handle invalid/missing font names.
  - Updated to explicitly set art provider in pop out panels (#999).
  - Updated handling of static analyzer/luacheck options to allow dynamic switching (closes #1013).
  - Updated Linux arch check to handle 32bit userspace with 64bit kernel (closes #947).
  - Updated shebang processing to also accept extensions.
  - Updated the About screen to include Scintilla version when available (#994).
  - Updated to allow `StartStyling` to work with deprecated parameters (closes #994).
  - Updated Brazilian Portuguese translation.
  - Updated Love2d API for 11.2 (#247).
  - Updated `RequestAttention` method to check documents in floating panels.
  - Updated commandbar to activate (floating) editor in symbol selection.
  - Updated commandbar processing to work with multiple notebooks.
  - Updated `GetEditor` to check for all notebooks that may have documents.
  - Updated placeholder expansion to show labels for editor in any notebook.
  - Updated `CloseAll` to report closing results.
  - Updated to not close the document when the editor is moved to a different notebook.
  - Updated root path generation to make it work from Windows paths with unicode names.
  - Updated document activation to reduce dependence on tab being in a specific notebook.
  - Updated `CloseAll` method to only retrieve tab control when needed.
  - Updated commandbar to find better position over split notebook.
  - Updated to improve file activation in project tree.
  - Updated file icon generation to keep header on files with no extension.
  - Updated dynamic icons to show the custom color in the header instead of the text (#470).
  - Updated page closing to simplify selection of the page to activate.
  - Updated commandbar to cancel selection on switching focus from the editor for consistency.
  - Updated to use `wxGetUserId` to get user login for singleinstance checks (fixes #951).
  - Updated to allow hoisting for mapped directories.
  - Updated closing multiple tabs to stop closing on canceling save.
  - Updated to preserve compatibility with older versions of wxlua/wxwidgets.
  - Updated indicator handling to work when tabs are quickly closed.
  - Updated find/replace result message to get proper translation.
  - Updated `Show Location` label to more informative `Open Containing Folder`.
  - Updated `Show Location` to use the default explorer as configured (Windows).
  - Upgraded Mobdebug (0.706) to improve debugging of wxlua apps under `strict` (closes #962).
  - Upgraded LexLPeg lexers to support new lexer syntax.

### Fixes
  - Fixed reset of the output/console window color scheme when copied from the editor styles.
  - Fixed default reference for `editor.showligatures` config setting (#960).
  - Fixed setting default calltip colors when setting custom color schemes (#1024).
  - Fixed the project tree not scrolled to the left in some cases after activation (#999).
  - Fixed caching of loaded bitmaps.
  - Fixed showing icons in the Stack view panel (#999).
  - Fixed setting focus on text fiels in command bar (#999).
  - Fixed memory allocation for the directory path (thanks to Shmuel Zeigerman).
  - Fixed assertion in `notebook:GetPage` when requested page is not in range (#999).
  - Fixed menu item name shown in a long tooltip.
  - Fixed closing directory handles to avoid locking last expanded directory (fixes #1029).
  - Fixed showing invalid UTF-8 in debugger tooltips (fixes #1025).
  - Fixed luasocket issues reported under `strict` (closes #950).
  - Fixed updating editor tab icon when un/setting start file.
  - Fixed restarting incremental search when initiated with search panel open.
  - Fixed keeping the editor tab open when file is renamed from the file tree.
  - Fixed `SetupKeywords` to re-apply styles when requested (closes #1014).
  - Fixed reported error message for some file writing errors.
  - Fixed closing the current editor tab from menu with some other panel being active.
  - Fixed checking output from external commands before interpreter is set (#973).
  - Fixed handling of output callbacks not returning expected strings (closes #973).
  - Fixed error when no APIs loaded (in eg experimental interpreter) (closes #976).
  - Fixed Luacheck not receiving API globals by default or with custom globals (#976).
  - Fixed recognition of `linecomment` option in lexlpeg lexers (close #1007).
  - Fixed error reported on shebang with executable not matching any lexer (fixes #969).
  - Fixed loading of api files relative to package directory (fixes #965).
  - Fixed `arg` to have the 'original' (instead of shortened) name during debugging.
  - Fixed storing name of unsaved tabs in recovery records.
  - Fixed error shown when focus is set on the editor while it's removed from the notebook.
  - Fixed expanding mapped directories when adding new items under it.
  - Fixed allowing to add new file/directory only under directories.
  - Fixed project tree refresh and sync after un/mapping directory or setting start file.
  - Fixed black background shown for generated file icons on Linux.
  - Fixed showing current file in the project tree.
  - Fixed adding files/directories under mapped and hoisted directories.
  - Fixed adding mapped directory after drop on project tree over no item.
  - Fixed transparent background for dynamic icons in the project tree (#470).
  - Fixed activation of editor tab from the filetree on Windows.
  - Fixed output truncation after launched process terminates (fixes #949).
  - Fix margin click selection to select folded block.
  - Fixed typo in the usage instructions.
  - Fixed message on how to configure short path conversion on Windows (fixes #948).
  - Fix symbol indicators when no editor windows are open.
  - Fixed incorrect outline with `repeat until` before `else` (fixes #946).

### Incompatibilities
  - Removed `CloseAllExcept` method as it's no longer needed.
  - Removed `SetTabIndex` and direct tab index usage.

## v1.80 (Oct 07 2018)

### Highlights
  - Added drag-n-drop into project tree to set project or map directories.
  - Added lexer detection based on the shebang content for unknown extensions.
  - Tested debugger and luasocket support with Lua 5.4-work1 version.
  - Updated Gideros API for v2018.2.1 and fixed showing methods for Gideros types.
  - Updated Love2d API for 0.11.1.
  - Upgraded LuaCheck to v0.23.0.

### Special thanks
  - To [Deyan Dobromirov](https://github.com/dvdvideo1234) for adding bulgarian language translation.
  - To [Alexey Melnichuk](https://github.com/moteus) for adding support for `fold.compact` flag to lpeg lexer.
  - To [olueiro](https://github.com/olueiro) for updates pt-br language translation.
  - To [Paul Reilly](https://github.com/paul-reilly) for adding config option for transparency of window.
  - To [fnaith](https://github.com/fnaith) for updating translation to Traditional Chinese.

### Improvements
  - Added document `SetTabIndex` method (#166).
  - Added restoring editor content when loading a file fails.
  - Added lexer detection based on the shebang content for unknown extensions.
  - Added drag-n-drop into project tree to map directories.
  - Add editor `IndicateSymbols` method (#166, #929).
  - Added per-editor configuration for collecting dynamic words (closes #922).
  - Added message in search toolbar after replacement in files (#910).
  - Added shortcuts to popup menus for edit operations.
  - Added keeping the clipboard content after exiting.
  - Added reporting failures on file open.
  - Added support for function to remap results in output line activation (#881).
  - Added configuration setting for output line activation patterns (closes #881).
  - Added showing tab name in the search status bar when no text is found (#887).
  - Added Bulgarian translation (closes #876, #70).
  - Added config option for transparency of window.
  - Added support for configuring virtual space in the editor (closes #861).
  - Added `ShowFullScreen` method (#166).
  - Added recognition of `linecomment` option in lexlpeg lexers.
  - Added support for `fold.compact` flag by lpeg lexer (closes #853, #847).
  - Added switching to the editor tab being saved during confirmation.
  - Added project tree methods to map and unmap directories (#166).
  - Added `editor.endatlastline` to set the editor maximum scroll position (closes #842).
  - Added `editor.wrapflagslocation` setting for specifying wrap flag location.
  - Added `ExpandPlaceholders` method (#166).
  - Added `GetModifiedTime` editor method (#166).
  - Added `ReportError` method (#166).
  - Disabled opening non-existing directories from commandbar.
  - Enabled global shortcuts for clearing output and console (closes #844).
  - Renamed `ID.CLEAROUTPUT` to `ID.CLEAROUTPUTENABLE` to avoid conflict between actions (#844).
  - Renamed document method `Get/SetModTime` to `Get/SetFileModifiedTime` (#166).
  - Refactored document 'modified' status to match the editor modification status.
  - Reorganized setting accelerators to allow all of them to be set from `onRegister` events.
  - Updated C/cpp spec to cover larger variety of functions.
  - Upgraded Mobdebug (0.704) to fix serialization issue (fixes #900).
  - Updated error navigation in output window to handle lines with `line:position` information.
  - Upgraded luacheck to v0.23.0.
  - Updated drag-n-drop mapping to limit to existing directories.
  - update traditional chinese translation
  - Updated Window build script to support building of 64bit luasec (using mingw64).
  - Updated Windows launcher manifest description.
  - Updated dates in the Windows launcher manifest.
  - Upgraded Mobdebug (0.705) to fix explicit garbage collection during stepping (closes #919).
  - Update comment markup styling to avoid hiding line comments.
  - Updated Love2d API for 0.11.1 (#247).
  - Updated Love2d script to include class inheritance where available.
  - Updated `GetHotKey` to return error message instead of printing it.
  - Updated markers menu to show images when available and configured.
  - Updated IDs to reference the ID table instead of global variables.
  - Updated order of items in Edit menu for consistency with other menus and apps.
  - Updated README to add Lua 5.4 support.
  - Updated build scripts to add Lua 5.4.0-work1.
  - Upgraded Mobdebug (0.703) to include Serpent updates.
  - Updated to use editor method `SetupKeywords` instead of global function.
  - Updated path caching in intepreters to allow changing path configuration without restarting.
  - Updated Gideros API to include `valuetype` values where needed (closes #889).
  - Updated Gideros API script to add `valuetype` attribute to `new` methods (#889).
  - Updated Gideros API for v2018.2.1.
  - Updated build scripts to refresh submodules after checkout (follow-up to ebe9f572).
  - Updated Copy/Cut commands to make line copying configurable (closes #878).
  - Updated `SetHotKey` to allow removing hotkeys by setting to `nil` value.
  - Updated build scripts to optimize when building wxwidgets and lexlpeg.
  - Updated Corona interpreter to suggest project path when `main.lua` is not found in the current project.
  - Updated to show relative path for mapped directories when it is a project subdirectory.
  - Updated project tree to remove trailing separator from mapped directories.
  - Updated symbol for modified tabs to a better looking unicode asterisk.
  - Updated `xml` lexlpeg lexer to improve its performance on large files (closes #835).
  - Updated loading files when starting second instance to speed up the process.

### Fixes
  - Fixed disabling scratchpad updates after syntax errors (#944).
  - Fixed shebang detection with enabled dynamic words (follow-up to 663be9a7).
  - Fixed creating files from commandbar.
  - Fixed 'deleting' mapped directory.
  - Fixed mapping and unmapping directories with/out trailing separator.
  - Fixed parsing invalid Lua code (#937, #492).
  - Fixed parsing table fields in the left side of multiple assignment (fixes #937).
  - Fixed proper delete of hidden markup (follow up to ce5879a7).
  - Fixed using vararg in live coding code (closes #927).
  - Fixed showing stack content when `codepage` is set (closes #923).
  - Fixed running/debugging on Windows with unicode characters in username (closes #921).
  - Fixed activating file from the command line after project path is set (#829, #830).
  - Fixed indentation on functions with `_function` in the name (fixes #905, #324).
  - Fixed associating hotkey with editor menu items.
  - Fixed `include` to work relative to included locations (#555).
  - Fixed checking system location for `include` command when `HOME` is not set (#555).
  - Fixed sorting text with invalid unicode characters (fixes #893).
  - Fixed opening files pointing to broken symlinks or with denied access.
  - Fixed custom lexer highlighting caused by a conflict with ansi styles (closes #891, #684).
  - Fixed autocomplete to avoid looping on recursive references.
  - Fixed `self` reference (#873).
  - Fixed showing large strings in the Stack window that was slowing the IDE (fixes #863).
  - Fixed issue with setting an accelerator for an empty shortcut (#844).
  - Fixed keeping acccelerators after switching to full screen on Linux (fixes #857).
  - Fixed search in selection to use correct editor when activated from Output/Console.
  - Fixed fuzzy matching with lower case match following upper case or vise versa.
  - Fixed autocomplete on a string longer than 32 chars with a match (fixes #837).
  - Fixed loading files using relative names (closes #829, #830).
  - Fixed lexlpeg Lua lexer to style numbers next to concatenation operator (closes #831).

## v1.70 (Nov 11 2017)

### Highlights
  - Added support for using LuaCheck.
  - Added progress bar indicator for commandbar processing.
  - Added cache for files in the commandbar.
  - Added handling of exclusion lists encoded as hashes to simplify modifications.
  - Added encoding output based on `codepage` setting.
  - Added support for ansi escapes to color text in Output window.
  - Improved UI responsiveness during find-in-files search.
  - Updated commandbar to improve prefiltering performance on search through large file sets.
  - Updated moai API to community version 1.8 RC.
  - Fixed multiple instance launch on macOS High Sierra.
  - Fixed lexlpeg styling on Linux; 110+ languages and formats are now styled on all platforms.
  - Fixed debugging for Lua 5.2/5.3 when `LUA_PATH_5_2`/`5_3` env variable is set.

### Special thanks
  - To [feserr](https://github.com/feserr) for update moai API to community version 1.8 RC.
  - To [Elias Hogstvedt](https://github.com/CapsAdmin) for adding support for LuaCheck.
  - To [Thijs Schreijer](https://github.com/Tieske) for adding and correcting color descriptions.
  - To [olueiro](https://github.com/olueiro) for update pt-br language translation.

### Improvements
  - Added `AnalyzeFile` method (#166).
  - Added `AnalyzeString` method (#166).
  - Added `fontname` and `fontsize` to the default config.
  - Added auto-rescaling of toolbar icons if smaller sizes are available.
  - Added more locations to the default installation path to check for Corona.
  - Added warning on using removed `outputshell` settings in the config.
  - Added reapplying ansi color styles after color scheme switching (#684).
  - Added support for ansi escapes to color text in Output window (closes #684).
  - Added status messages for find-in-files to better report search progress (#822).
  - Added option to limit number of files returned by `GetFileList`.
  - Added `GetHotKey` method to return shortcut/id (#166).
  - Added `onFiletreeFileDelete` and `onFiletreeFilePreDelete` events (closes #815, #166).
  - Added `onFiletreeFileRename` and `onFiletreeFilePreRename` events (#815, #166).
  - Added re-encoding of the path when codepage is set to activate in debugger (closes #817, #804).
  - Added console `reset` command and `Reset` method to reset the current environment.
  - Added config setting to specify if `inselection` search needs to be on by default.
  - Added `GetFileList` method (#166).
  - Added `GetFocusedItem` and `SetFocusedItem` methods for wxlua <3.x (if not present).
  - Added encoding output based on codepage setting (closes #804, closes #710).
  - Added `GetCodePage` method (#166, #804, #710).
  - Added support for discontinuous match strategry in variable auto-complete (closes #805).
  - Added handling of `error in __gc` messages in error navigation (#808).
  - Added handling of `AppKey` for local menu in the editor (closes #809).
  - Added `MergePath` method to use instead of a global function (#166).
  - Added `GetLineWrapped` editor method (#166).
  - Added `GetAllMarginWidth` editor method (#166).
  - Added `commandbar.filecache` setting to control commandbar file cache.
  - Added cache for the files in the commandbar.
  - Added comment about usage of known files in the project tree imagelist.
  - Added `onFileTreeFileAdd`, `onFileTreeFileRemove`, and `onFileTreeFileRefresh` events (#166).
  - Added un/setting Start file to the tab menu (closes #790).
  - Added checks when project is not set and start file is unset or directory unmap.
  - Added `GetStartFile` and `SetStartFile` methods for the project tree (#790, #166).
  - Added `varself` indicator for hidden `self` variable (#777).
  - Added `RequestAttention` method (#166).
  - Added restoring app window if minimized during activation on Linux.
  - Added default value for `staticanalyzer.luacheck` (#768).
  - Added support for using luacheck (closes #768).
  - Added handling of leading slash in exclusion lists to anchor at project directory.
  - Added progress bar indicator for commandbar processing.
  - Added ability to interrupt long processing in commandbar with more input.
  - Added `ShowCommandBar` method (#166).
  - Added more robust checks for format of the colors in the config.
  - Added support for whitespace size in the editor.
  - Added and corrected color descriptions (closes #770).
  - Added support for whitespace type setting.
  - Added using extension from the current tab for new documents.
  - Added `GetDefaultFileName` method (#166).
  - Added toolbar initialization if not provided.
  - Added handling of `editor.keymap` encoded as hash to simplify modifications.
  - Added `SETLEXERLANGUAGE` constant to avoid hardcoded values.
  - Added handling of exclusion lists encoded as hashes.
  - Added stripping for binary Lua modules (for non-debug builds).
  - Added skipping stripping for debug builds.
  - Assigned style defaults to allow simple setting of back/foreground colors.
  - Converted `excludelist` and `binarylist` to hashes to simplify modifications.
  - Disabled moving through history in console when selection is on.
  - Disabled closing commandbar while the text is still processed as it caused unexpected effects.
  - Disabled interrupts for long commandbar processing on Linux.
  - Improved support for handling some of the shortcuts with `Ctrl` and `Alt` on Linux.
  - Moved terminating timer loop to happen after all the timers are stopped.
  - Moved default configuration into a separate file.
  - Reorganized font handling to prepare for splitting configuration for Output and Console (#684).
  - Removed switching control back to the search panel after find-in-files, as it's not needed.
  - Removed deprecated `GetEditorWithFocus` global function (#166).
  - Removed workaround for crash on Linux after filetree editing (#425, #464).
  - Removed obsolete `GetEditorFileAndCurInfo` global function (#166).
  - Removed obsolete `GetEditor` global function (#166).
  - Removed `run` option from the interpreter as it's no longer needed.
  - Removed functions that are no longer used.
  - Removed `bin` folder from the module search path as it's no longer used for modules.
  - Removed `encoding` in the desktop file as it's deprecated.
  - Refactored handling of lost focus event in commandbar.
  - Refactored methods to score and show commandbar items.
  - Replaced obsolete global function `FileSysGetRecursive` with `GetFileList` method (#166).
  - Split `outputshell` into `output` and `console` settings (#684).
  - Updated settings processing to use methods.
  - Updated to reset toolbar size after configuration changes.
  - Updated app launch script to make single instance detection work with High Sierra (closes #813).
  - Updated search status refresh to avoid too frequent updates that delay the search (#822).
  - Updated find-in-files to allow aborting for better UI responsiveness (closes #822).
  - Updated `SetHotKey` to return assigned values (#166).
  - Updated to use `GetEditorWithFocus` method instead of global function (#166).
  - Updated filetree to allow selection of multiple files (#815).
  - Updated build scripts to use tags to build the specific version of binaries (#260).
  - Update pt-br.lua
  - Updated tests to check for `acandtip.symbols=2` setting (#805).
  - Updated project tree to work with multiple selection enabled (#815).
  - Upgraded Mobdebug (0.702) to fix line numbering in files starting with empty lines.
  - Updated variable auto-complete to do case-sensitive match on upper case (#805).
  - Updated global/config usage to avoid warnings running under 'strict' (closes #799).
  - Updated console to show table content similar to Stack/Watch (#457).
  - Upgraded Mobdebug (0.70) to show tables with `__tostring` metamethod (closes #457, #569).
  - Updated console to disallow left cursor moving from the current input line (follow-up to 9d5af184).
  - Updated console to keep cursor at the beginning of commands when moving up history.
  - Updated console to allow cursor up/down navigation in multi-line commands.
  - Updated debugger and style processing to remove some of obsolete global functions.
  - Updated analyzer to remove usage of obsolete global functions.
  - Updated README with a reference to uninstallation instructions (#784).
  - Updated index exclusion to only match paths under the current project.
  - Update moai API to community version 1.8 RC (closes #762).
  - Updated commandbar to improve prefiltering performance on search through large file sets.
  - Updated editor edge settings to use `editor.edge` and `editor.edgemode` instead of style.
  - Updated single instance logic to activate the running copy when no files are loaded.
  - Updated auto-complete to skip showing after separators with no match.
  - Updated port number for singleinstance check to minimize the number of ports used.
  - Updated MacOS launch script to avoid adding the current folder to `DYLD_LIBRARY_PATH` when not set.
  - Updated debugger message to remove the default file name from it.
  - Updated `IsValidProperty` check to work for controls without `Id` field.
  - Updated .gz and .rar extensions in `binarylist` for consistency.
  - Updated build scripts to allow loading of os/debug modules from lexlpeg lexers (#760).
  - Updated MacOS build files to add install name to the build commands.

### Fixes
  - Fixed debugging for Lua 5.2/5.3 when `LUA_PATH_5_2`/`5_3` env var is set (closes #806).
  - Fixed markdown markup to skip empty `[]` or `()` parts in link formatting (closes #827).
  - Fixed directory traversal in search after failure to open a directory (#822).
  - Fixed search status showing directories with special characters (#822).
  - Fixed `SetHotKey` to remove the accelerator in case of a conflict (#166).
  - Fixed closing the app while search is in progress.
  - Fixed aborting find-in-files with `Escape` when results are in non-editor panel (#822).
  - Fixed closing editor tab using document method (fixes #818).
  - Fixed formatting of `repeat ... until` on one line (#324).
  - Fixed showing tooltip after using `Inserting Library Function` from commandbar.
  - Fixed simple name substitution in `Insert Library Function`.
  - Fixed setting start file in a project with special characters in the name (#790).
  - Fixed usage of `arg` on Windows where it may be undefined (#799).
  - Fixed crash when adding a watch to a docked watch panel on Windows.
  - Fixed opening Open/Save dialog before the first editor tab is rendered.
  - Fixed tooltip showing after `(`/`,` and failing type assignment (fixes #796).
  - Fixed indentation of `do`/`then` that follow strings and table indexes (closes #797, #324).
  - Fixed loading files into read-only editors.
  - Fixed lexlpeg styling on Linux (fixes #763).
  - Fixed closing files after reading to avoid access conflicts when used in commandbar preview.
  - Fixed restoring maximized window on a secondary monitor.
  - Fixed commandbar preview when the file fails to read.
  - Fixed resetting whitespace style to default when not specified.
  - Fixed setting markers on lines with invalid UTF8 characters.
  - Fixed highlighting function under cursor in the Outline.
  - Fixed project tree icon for mapped directory.
  - Fixed skipping binary files (based on `binarylist`) in file search.
  - Fixed loading lexlpeg on MacOS when conflicting lpeg is present (fixes #760).
  - Fixed loading lexlpeg with conflicting lpeg binary present in default path on MacOS (fixes #760).

### Incompatibilities
  - Deprecated `FileSysGetRecursive` global function; use `ide:GetFileList()` instead.
  - Removed deprecated `GetEditorFileAndCurInfo` global function; use `ide:GetEditor()` instead.
  - Removed deprecated `GetEditor` global function; use `ide:GetEditor()` instead.
  - Removed deprecated `GetEditorWithFocus` global function; use `ide:GetEditorWithFocus()` instead.
  - Reorganized `ide.font` table.
  - Split `outputshell` into `output` and `console` settings (#684).

## v1.60 (Apr 19 2017)

### Highlights
  - Added syntax highlighting and folding for 110+ languages and file formats.
  - Added dynamic table expansion to Stack and Watch windows.
  - Added clearing breakpoints and bookmarks in a file.
  - Improved handling of valid and invalid UTF8 strings in copy/paste operations (#729, #556).
  - Updated Corona API for v2017.3068.
  - Fixed showing and copying invalid UTF-8 values in the Watch window (fixes #734).
  - Fixed style conflict in HTML with embedded lexers, which caused disappearance of text fragments.

### Special thanks
  - To [Christoph Kubisch](https://github.com/pixeljetstream) for luxinia cleanup and [GraphicsCodePack](https://github.com/pixeljetstream/zbstudio-graphicscodepack) integration.
  - To [deining](https://github.com/deining) for German translation updates and fixes.
  - To [senisioi](https://github.com/senisioi) for adding configuration file with Eclipse shortcuts.

### Improvements
  - Added checks to Outline to make handling of cached data more robust.
  - Added check for `LoadLexerLibrary` as it's not present in older wxwidgets versions (#260).
  - Added clearing breakpoints and bookmarks in a file to the main menu.
  - Added clearing breakpoints and bookmarks in a file to the Markers menu.
  - Added `moonscript` and other lexers to the extension mapping.
  - Added `FindSpec` method (#166).
  - Added syntax highlighting and folding for 100+ languages (based on Scintillua).
  - Added mapping to set extension color in Project icons (#470).
  - Added color indicators for extentions in Project icons (#470).
  - Added showing extension in Project window icons (closes #470).
  - Added support for aarch64 architecture (#745).
  - Added signed versions of MacOS executables (#743).
  - Added closing directory iterator (where available) after use (#633).
  - Added hiding Stack/Watch expansion indicator when `maxdatalevel` is not set.
  - Added shared indicator for expandable tables in Stack and Watch processing.
  - Adding eclipse shortcut key config
  - Added dynamic table expansion to Watch expressions.
  - Added `numformat` debugger option to set numeric format (#739).
  - Added `GetDataOptions` debugger method (#166).
  - Added indicator for expandable items in the Stack view.
  - Added limiting tooltip values in debugger for the configured depth.
  - Added refresh of the Stack values in the tree after expansion.
  - Added API reloading after registering a new spec.
  - Added `LoadAPI` package method to load API files (#166).
  - Added deprecation notices to `load.*` functions when used in config.
  - Added `LoadInterpreter` package method (#166).
  - Added `LoadTool` package method (#166).
  - Added `LoadSpec` package method (#166).
  - Added `toolbar.iconsize` default setting.
  - Disabled running/debugging for interpreters that don't support it.
  - Improved expansion of values that can't be evaluated.
  - Improved handling of valid and invalid UTF8 strings in copy/paste (#729, #556).
  - Minor corrections in de.lua (closes #723).
  - Removed duplicate code toggling breakpoint marker in the debugger.
  - Refactored marker processing to avoid hardcoding marker types.
  - Removed specs that are no longer needed (covered by integrated lexers).
  - Refactored stack processing for expansion to make it more consistent with Watch processing.
  - Removed top level comments from the Stack view results.
  - Removed graphics-related APIs to move to plugins.
  - Removed load filters, tools, and graphics-related specs to move to plugins.
  - Updated Corona API for v2017.3068.
  - Updated toolbar icon size check to allow for large (48x48+) custom icons.
  - Upgraded Mobdebug (0.648) to add traceback handling improvements.
  - Updated MacOS build scripts to strip binaries and update install_name.
  - Updated build scripts for more consistent usage of lua/lib folders.
  - Updated tests to use `ID` table instead of individual values.
  - Updated extension font size in Project tree icons on MacOS for better visibility (#470).
  - Updated generation of 'original' case for local file names (#744).
  - Updated file loading to show files on Windows with 'original' case when available (closes #744).
  - Updated formatting and added comments to MacOS launch script (#743).
  - Updated MacOS launch script to work with quarantined files on Sierra (#743).
  - Upgraded Mobdebug (0.646) to add STACK/EXEC options for expansion support.
  - Updated instructions in configs for alternative shortcuts.
  - Updated serialization of Watch results to take number format into consideration (closes #739).
  - Updated debugger to use dynamic serialization options for Stack expansion.
  - Updated default limits for stack expansion for better performance.
  - Updated expansion check for `userdata` and similar table keys.
  - Updated expansion checks to properly handle empty tables after expansion.
  - Updated Stack processing to expand values in different stack frames.
  - Updated Stack processing to dynamically retrieve expandable values.
  - Updated debugger eval/exec methods to pass optional parameters to the debugger.
  - Updated lexlpeg lexer to handle folding in embedded lexers (scintillua/rev/1e0037b4af2f).
  - Updated Estrela reference in README to point to the GraphicsCodePack repository.
  - Updated tooltip display to also show after comma in parameter list.
  - Updated debugger to request further socket processing when needed.

### Fixes
  - Fixed indentation of functional calls with multi-bracket expressions (fixes #758).
  - Fixed showing Outline on MacOS with `outline.showonefile` enabled (fixes #749).
  - Fixed assertion in Outline when `outline.showonefile` is specified.
  - Fixed enabling `Set as Start File` for all known extensions (fixes #747).
  - Fixed LexLPeg loading on MacOS.
  - Fixed copying text with accented characters on OSX (closes #729).
  - Fixed restoring recovery record with unknown/empty value.
  - Fixed copying invalid UTF-8 values in the Watch window (#734).
  - Fixed showing invalid UTF-8 values in the Watch window (fixes #734).
  - Fixed first expanding of a table value in the Stack window.
  - Fixed `Go To Line` selection when the line number is not provided (closes #730).
  - Fixed style conflict in HTML with embedded lexers, which caused disappearance of some text.
  - Fixed path remapping in the debugger when a local file is present, but not activated.
  - Fixed `runonstart` processing in debugger when starting external sessions.

### Incompatibilities
  - Deprecated load methods in the config as they are no longer needed.

## v1.50 (Dec 11 2016)

### Highlights
  - Added support for LexLPeg-based lexers (closes #701).
  - Added support for dynamic LexLPeg lexers with `AddLexer`/`RemoveLexer` methods (#701, #166).
  - Added selecting blocks by `Ctrl-click` on the fold margin (closes #653).
  - Added multipaste support that wasn't enabled in the previous release (closes #311, #260).
  - Updated Love2d API for 0.10.2 (#247).
  - Updated `Ctrl-Shift-FoldMarginClick` to un/fold the block with all children (closes #706).

### Special thanks
  - To [halfnelson](https://github.com/halfnelson) for auto-complete improvements.
  - To [Mailaender](https://github.com/Mailaender) for appdata.xml on Linux.

### Improvements
  - Added Output method `ProcessStreams` (#166).
  - Added `ignorecase` as an option for the debugger (closes #718).
  - Added `debugger.ignorecase` to configure ignoring case in activating files in debugger (#718).
  - Added `GetProperty` method (#166).
  - Added keeping the last command when the console history is cleared.
  - Added replacement for `wxMenu.GetLabelText` for earlier wxwidgets versions (#260).
  - Added `Restart` method (#166).
  - Added `Exit` method (#166).
  - Added parameter generation to `GetLaunchPath` method (#166).
  - Added `GetLaunchPath` method (#166).
  - Added `outline.activateonclick` setting to set outline activation (#337).
  - Added `Compile` icon to use in the toolbar (hidden by default).
  - Added support for dynamic LexLPeg lexers with `AddLexer`/`RemoveLexer` methods (#701, #166).
  - Added LexLPeg license (#701).
  - Added support for LexLPeg-based lexers (closes #701).
  - Added `package.searchpath` when running under Lua 5.1 (#701).
  - Added moving the cursor to the fold header after folding (closes #704).
  - Added LexLPeg binaries and lexers based on scintillua 3.6.5-1 (#701).
  - Added `IsValidHotKey` check for hotkey to be valid before setting (#166).
  - Added `SetHotKey` method that checks for and resolves hotkey conflict (#166).
  - Added `AddStyle`, `GetStyle`, `GetStyles`, and `RemoveStyle` methods (#166).
  - Added `SetProject` method to set/update project directory (#166).
  - Added an appdata.xml file.
  - Added selecting blocks by `Ctrl-click` on the fold margin (closes #653).
  - Added changing the current line to a triggered breakpoint (closes #694).
  - Added multipaste support that wasn't enabled after wxwidgets merge (closes #311, #260).
  - Added fillup character handling to autocomplete (`acandtip.fillups`).
  - Added `commandbar.maxlines` configuration setting.
  - Allowed single tabs to be dragged out of split notebooks (closes #700).
  - Optimized toolbar icons to remove text and other chunks.
  - Refactored key processing in the Output panel to simplify.
  - Removed stoppage on phantom breakpoints when document fails to activate.
  - Removed unnecessary scrolling after fold margin click (fixes #708).
  - Removed `text` spec that is not needed and not complete to be useful.
  - Removed error popup on failure to launch a command (as it's reported with the return value).
  - Removed filters that are no longer used/needed.
  - Replaced `wxFileName.GetTempDir` with alternative available in earlier wxwidgets versions (#260).
  - Replaced `ActivateOutput` with `Activate` method for all editor-based objects (#166).
  - Removed auto-complete for `new/create` methods as it's too Lua-specific.
  - Updated to return `nil` on non-existing IDE properties.
  - Upgraded Mobdebug (0.641) to improve stack view in Nginx/Openresty debugging.
  - Updated style processing to remove hardcoded style mask (follow-up to 308412).
  - Updated Console/Output usage to allow for Console to be hidden.
  - Updated dynamic LexLPeg lexers to use a separate temporary folder (#701).
  - Updated Love2d API for 0.10.2 (#247).
  - Updated love2d interpreter to switch project directory when `main.lua` file is not present.
  - Updated API processing to force reload after a new API is added.
  - Updated Lua spec to move `package.path` and `package.cpath` to constants (#84, #79).
  - Updated LexLPeg lexer to allow fold on case insensitive keywords (#701).
  - Updated event handling to allow added editor tab to be closed from `onEditorNew`.
  - Updated search results fold to match the editor fold behavior.
  - Updated `Ctrl-Shift-FoldMarginClick` to un/fold the block with all children (closes #706).
  - Updated configuration option description.
  - Updated ID references in find-replace to avoid using global variables.
  - Updated LexLPeg lexer to improve float parsing (#701).
  - Updated spec-related processing to avoid Lua-specific checks (#701).
  - Updated build scripts to build LexLPeg (#701).
  - Updated `Stop Debugging` label to show `Stop Process` by default.
  - Updated toolbar generation to only add separators when needed.
  - Updated script post processing to provide pid and error code to the handler.
  - Updated project tree usage to allow for it to be hidden.
  - Updated outline processing to allow for `functions` without parameters.
  - Updated double click processing in the Output panel to allow handlers to be added.
  - Updated console window to show the typed symbol after moving to the input line.
  - Updated main frame initialization to move it before the config processing.
  - Updated start/stop debugging menu labels to allow dynamic updates to them.
  - Update style handling for compatibility with wxwidgets 2.9.5+ (follow-up to 30841216).
  - Updated package sample to use current API calls.
  - Updated unindent on backspace to use included Scintilla functionality.
  - Updated markup processing to use `AddStyle` instead of `AddIndicator`.
  - Updated `AddIndicator` to use more robust logic for new indicators.
  - Updated application name in OSX package.
  - Updated file watch error handling to only report once per session (#693).
  - Updated initial watches to only set when not active (#693).
  - Updated bookmarks to use a different bookmark icon when available.
  - Updated to use MAX_MARGIN value from wxSTC when available.
  - Updated Outline to hide the tab when disabled.
  - Updated Markers to hide the tab when disabled.
  - Updated static analyzer to report unknown field on all values (instead of only the first one).
  - Updated command line arguments popup to remove separator from empty menu.
  - Updated `Shift-Enter` processing in auto-complete to only trigger on that combination.
  - Updated editor idle processing to handle items in the same order as they are submitted.
  - Updated commandbar to take font size configuration and OS differences into account.
  - Updated Gideros interpeter to skip compilation (to allow for bitops and macros).
  - Updated to make autocomplete recursion prevention less aggressive (closes #692).
  - Updated to walk inheritance list when resolving assign (#692).

### Fixes
  - Fixed styling editor content after `Save As` operation with a different extension.
  - Fixed indexing to start after inactivity when `showonefile` is set (#337).
  - Fixed switching outline sorting when `showonefile` is set (#337).
  - Fixed removing outline when closing the last editor with `showonefile` set (#337).
  - Fixed outline flicker during autocomplete when `outline.showonefile` is set (#442).
  - Fixed indentation of fragments with partial long string/comments (#639, #324).
  - Fixed indentation of words that match keywords surrounded by underscores (#324).
  - Fixed clearing Console window when the cursor is not in an editable area (closes #702).
  - Fixed menu item removal to delete separators at the top of the menu.
  - Fix type calculation in auto-complete for values returned by `require` (#692).
  - Fixed compatibility with wxlua/wxwidgets without `wxFSW_EVENT*` constants (closes #693).
  - Fixed autocomplete for variables when multiple selection is active.
  - Fixed commandbar issue when arrow key is pressed while large file is loaded in preview.

## v1.40 (Aug 26 2016)

### Highlights
  - Added ability to load/save files with invalid UTF-8 encoded characters.
  - Added support for IME composition to input Chinese characters.
  - Added support for dead key combinations (used on international keyboads).
  - Added support for handling Unicode paths and parameters on Windows (#663).
  - Added luasec 0.6 with openssl 1.0.2h binaries.
  - Added lpeg 1.0 binaries.
  - Added lfs 1.6.3 binaries (#566).
  - Added tracking file system changes in the project tree to auto-refresh it.
  - Added opening files on drag-n-drop on dock icon on OSX (closes #248).
  - Added opening files on drag-n-drop on Linux (closes #177).
  - Added refresh of search results from the right-click-on-tab menu.
  - Added reverse search on `Shift-Enter` (closes #604).
  - Updated Gideros API for version 2016.06.
  - Updated Corona API for v2016.2906.
  - Updated Love2d API for 0.10.1 (closes #537, #247).
  - Updated luajit binaries to v2.0.4.
  - Updated French, German, Italian, Spanish, Portuguese, Traditional Chinese, and Russian translations.
  - Upgraded wxwidgets to v3.1 and Scintilla to v3.6.6.

### Special thanks
  - To [fnaith](https://github.com/fnaith) for adding translation to Traditional Chinese.
  - To [Roland Yonaba](https://github.com/Yonaba/) for French translation update.
  - To [Inigo Sola](https://github.com/inigosola) for Spanish translation update.
  - To [riidom](https://github.com/riidom) for German translation update.
  - To [Leo Bartoloni](https://github.com/bartoleo) for Italian translation update.
  - To [olueiro](https://github.com/olueiro) for updating translation to Portuguese (Brazil).
  - To [Christoph Kubisch](https://github.com/pixeljetstream) for luxinia cleanup.

### Improvements
  - Added luasec 0.6 with openssl 1.0.2h binaries (#260).
  - Added lpeg 1.0 build files and binaries (#260).
  - Added lfs 1.6.3 build files and binaries (#260, #566).
  - Added `onFiletreeExpand` and `onFiletreeCollapse` events and their `Pre*` counterparts (#166).
  - Added tracking file system changes in the project tree to auto-refresh it (#260).
  - Added opening files on drag-n-drop on Linux (closes #177).
  - Added collapsing expanded nodes on `LEFT` key in tree controls on Linux (#686).
  - Added opening files on drag-n-drop on dock icon on OSX (closes #248, #260).
  - Added slight improvement for Ctrl-Tab workaround on OSX.
  - Added default setting for `debugger.allowediting` config option.
  - Adding new Spanish translations (#70, closes #677).
  - Added workaround for hanging during editing on ArchLinux when tab name is modified (#673).
  - Added checks to ensure that only valid tree items are passed to `onFiletree*Down` callbacks.
  - Added disallowing mapping of the project directory.
  - Added workaround for `GetFirst` method missing on `wxMenuItemList` in some Linux packages (#671).
  - Added `Error` method for the Output object (#166).
  - Added history of command line parameters to the menu in the status bar (closes #665).
  - Added `SetCommandLineParameters` method (#665, #166).
  - Added showing menu when clicked on command line parameters in the status bar (#665).
  - Added command line parameters to the status bar after the interpreter (#665).
  - Added `UpdateStatus` interpreter method (#166).
  - Added unfolding of the target line after navigation from the Stack window.
  - Added debugger `SetOptions` method and deprecated `DebuggerAttachDefault` (#166).
  - Added refresh of search results from the right-click-on-tab menu.
  - Added saving of command line options per project.
  - Added explicit `onProjectClose` event before closing the application (#166).
  - Added `Error` method for console (#166).
  - Added checks in stack panel to avoid throwing errors on improperly formatted stack message.
  - Added translation of menus and messages to traditional chinese (closes #659).
  - Added `ActivateFile` method instead of a global function (#166).
  - Added global menu items for clearing breakpoints and bookmarks.
  - Added markers menu to clear bookmarks in a project.
  - Added markers menu to clear breakpoints in a project.
  - Added workaround for `Ctrl-(Shift-)Tab` processing on Linux.
  - Added enforcing scrolling in the output panel to make sure added text is visible.
  - Added `IsProjectSubDirectory` method (#166).
  - Added storing start time to measure uptime for error reporting.
  - Added `ShowRange` editor method to move desiged range into view.
  - Added `onMenuOutputTab` event and closing search results in the Output notebook.
  - Added tab menu to close all search result pages in the editor notebook.
  - Added wxwidgets ticket number for a Ubuntu issue with stock menu items.
  - Added `GetCommandLineArg` interpreter method (#166).
  - Added requesting attention before showing an error message in case the app is in the background.
  - Added shortcuts for navigation to prev/next tab (closes #648, #298).
  - Added Scintilla license.
  - Added checks to windows to be present and indexes to be valid after tab movements.
  - Added search in Output and Console panels when no editor tab is opened.
  - Added enabling full screen view when supported, for example on OSX (#260).
  - Added `ScrollRange` to improve showing of search results on long wrapped lines (#260).
  - Added setting focus on tab content after selection in Output and Project notebooks.
  - Added setting focus on tab content after drag-and-drop in Output and Project notebooks.
  - Added initialization for `startat` config option in auto-complete.
  - Added skipping auto-complete suggestions after markup in comments.
  - Added `onDebuggerPreActivate` debugger method (#166).
  - Added `UpdateStatus` debugger method (#166).
  - Added `Break` debugger method (#166).
  - Added `SetRemote` and `GetRemote` Console methods. Removed `ShellSupportRemote`.
  - Added `Erase` method for the Output object (#166).
  - Added `GetAccelerator` and `GetAccelerators` methods (#166).
  - Added `SetAccelerator` method (#166).
  - Added metalua license.
  - Added luainspect license.
  - Added copas license.
  - Added `SetInterpreter` method (#166).
  - Added ignoring `tooltips_class32` window on Windows (closes #631).
  - Added `SetModTime` method for the document (#166).
  - Added `SetFilePath` method for the document (#166).
  - Added `Print` and `Write` method to the Output object (#166).
  - Added menu item to un/fold the current line with `Shift-F12` default shortcut (closes #616).
  - Added `Shift+click-on-fold-margin` to un/fold the line the click was on (#616).
  - Added `Find Next` toolbar/menu icon to distinguish from `Find` (#603).
  - Added keeping command line parameters after canceling the dialog (closes #610).
  - Added `GetTextFromUser` method to better report canceled dialog (#166).
  - Added saving command line parameters between restarts (closes #583).
  - Added `GetPackage` method (#166).
  - Added workaround to fix `Ctrl-(Shift-)Tab` navigation on OSX (#298).
  - Added `AddTimer` method (#166).
  - Added `io.write` support to the local console (#606).
  - Added `Print` and `Write` method to the console object (#166).
  - Added checks for indicator value types to not fail on invalid configuration (closes #607).
  - Added `Breakpoint` and `Stop` commands to debugger tests.
  - Added debugger tests.
  - Added showing names of test files in the test results.
  - Added explicit conversion to a number for line numbers in document activation.
  - Added return value to the `package` command in config files.
  - Added support for icons in the menu controlled by `menuicon` (closes #603); thanks to @tdev.
  - Added reverse search on `Shift-Enter` (closes #604).
  - Added marker tinting controlled by `markertint`.
  - Added `GetTintedColor` method (#166).
  - Added setting initial `imagetint` value.
  - Added `IsListening` debugger method (#166).
  - Added debugger `GetConsole` method (#166).
  - Added `SetDebugger` method and updated debugger initialization to set fields (#166).
  - Added address/port information to debugger verbose output.
  - Added `SetLaunchedProcess` method (#166).
  - Added `BreakpointToggle` method to the debugger (#166).
  - Added `RefreshPanels` debugger method (#166).
  - Added `AddPanelFlex` method to pick how to better add panel (#166).
  - Added debugger method to refresh debugger panels.
  - Added `debugger.refuseonconflict` to control when debugger connections can be refused.
  - Added `ActivateDocument` debugger method (#166).
  - Added `onDebuggerCommand` method (#166).
  - Added `onDebuggerStatusUpdate` method (#166).
  - Added `onDebuggerActivate` method (#166).
  - Added `onDebuggerPerClose` and `onDebuggerClose` methods (#166).
  - Added `onDebuggerPerLoad` and `onDebuggerLoad` methods (#166).
  - Added `editor.linenumber` to configure showing of line numbers in the editor.
  - Added workaround to enable closing all tabs on OSX.
  - Added workaround to fix rendering artifacts on OSX (fixes #590).
  - Added check for editor being valid in delayed outline redrawing.
  - Added reporting of error messages after process completion for Gideros interpreter.
  - Added expanding folded line after marker navigation (closes #595).
  - Added resetting app position when the saved position is outside of the screen (closes #593).
  - Added `editor.commentlinetoggle` to configure toggling comments by line (closes #591).
  - Allow copying of selection in Local console when floating (fixes #596).
  - Allowed packages registered from config files (using `package {}`) to load/save settings.
  - Allowed space(s) in function calls before opening parenthesis when showing tooltip (closes #635).
  - Allowed shortcuts for editor menu items (closes #597, closes #405).
  - Allowed optional `version` parameter to execution path in Lua interpreter.
  - Allowed `MarkerToggle` method to accept marker name in addition to marker number.
  - Disabled error popup on failure to stop process (as it's reported in the Output window).
  - Improved activation in debugger when the starting file is specified.
  - Improved the fix to avoid duplicate lines in the editor on OSX (follow-up to 9344280d).
  - Improved path merge for the main editor path (#663).
  - Improved handling of constant values in Gideros API processing.
  - Improved whitespace handling in commandbar pattern matching (#31).
  - Ignore statements on the line with function definition that ends with an `end` (closes #611).
  - Increased default `bordersize` value to improve dragging with a track pad (closes #637).
  - Moved wxlua binaries to `clibs/` folder (#260).
  - Moved DROP_FILES handler to associate with editor tabs on Windows.
  - Modified adding icons to menu items to avoid duplice items on Win10 (#603).
  - Minor update to use editor `BreakpointToggle` method.
  - Moved folder toggling inside activation logic to allow skipping (#602).
  - Opens the item in the file tree on double clicking the item
  - Removed `ID_TOGGLEBREAKPOINT` identifier as it was deprecated in the previous version (1.30).
  - Renamed debugger method `quickeval` to `EvalAsync` for consistency.
  - Reorganized tests to provide package reference to the test functions to set callbacks.
  - Replaced use of debugger fields with debugger methods.
  - Reorganized process killing to avoid multiple attempts at terminating debugger sessions.
  - Removed Estrela shell interpreter no longer used.
  - Refactored focus processing after switching to the IDE (#577).
  - Renamed `onAppDone` event to `onAppShutdown` for consistency (#166).
  - Removed limit on `stdout` content sent from the application being debugged.
  - removing old luxinia related files, now found at https://github.com/pixeljetstream/luxinia1/zbstudio-integration
  - Removed adding BOM when opening non-existing files in the editor.
  - Removed deprecated `DebuggerAttachDefault` call from interpreters.
  - Removed setting background on whitespaces as it causes gaps in selection (closes #657).
  - Refactored `fattachdebug` from the interpreter code.
  - Relaxed markup formatting to allow markup symbols to be marked as well.
  - Refactored `BreakpointToggle` method to make it work consistently with other marker handling.
  - Refactored preview check when closing tabs.
  - Refactored empty line check to use Editor method.
  - Reorganized component load order to allow `ide` methods to be used from config files.
  - Removed interpreters filter as it's not longer needed or used.
  - Removed forced styling from folding requests as it left markup in comments non-styled.
  - Removed debugger definitions as they are obsolete.
  - Removed hardcoded values for any-marker mask.
  - Renamed `RefreshPanels` debugger method for consistency (#166).
  - Reorganized console printing to work with partial output.
  - Simplified logic for launching ext-associated apps from Project popup menu.
  - Switched recovery record to use plain/fast serialization.
  - Updated luajit binaries and build scripts to use v2.0.4 (#260).
  - Updated Windows launcher to add description and fix loading of Unicode parameters (#663, #260).
  - Updated lua52 and lua53 executable to add hidpi support manifest (#260).
  - Updated lua executable to a generic one to simplify lua dll changes (#260).
  - Updated OSX manifest to include `NSHighResolutionCapable` (#260).
  - Updated initial path handling to allow loading wxlua from `clibs/` (#260).
  - Updated package event messages to be marked as errors.
  - Updated output messages to add markers to the first instead of the last line.
  - Updated error reporting on failure to stop process to check for process id.
  - Update pt-br.lua
  - Update de.lua
  - Updated Italian Translation
  - Updated zh-tw translation (#70, closes #679).
  - Updated french translation (#70)
  - Updated Russian translation (#70).
  - Updated translation files with new messages (#70).
  - Updated translation call to not appear on the warnings list (#70).
  - Updated debugger tests to handle activation executed before command is completed.
  - Updated debugger error messages to use error markers in the Output window.
  - Updated Gideros API for version 2016.06.
  - Updated Corona API for v2016.2906.
  - Updated Corona API processing script to work from `api/lua` folder.
  - Updated tooltip shortcuts to match modifiers in the main menu (`Cmd` instead of `Ctrl`).
  - Updated warning message to only update `Ctrl` shortcut (and not `RawCtrl`).
  - Updated project tree to clear settings from projects with all mappings removed.
  - Updated Gideros script to simplify processing of its API descriptions.
  - Updated config settings to support 'overrides' when settings are modified between snapshots.
  - Updated `onProject*` directory parameter to use the same format as `GetProject`.
  - Update metalua to properly report `identifier expected` error in table fields.
  - Updated metalua to remove usage of missing `table.tostring` method.
  - Updated global function to make it local in the file.
  - Updated Love2d interpreter default to start debugging without stopping.
  - Updated to use console `Print` and `Error` methods instead of global functions.
  - Updated Love2d API for 0.10.1 (closes #537, #247).
  - Updated file activation test as filename case may be different on OSX.
  - Updated marker handling to use `MarkerToggle` method as it's more generic.
  - Updated `ActivateFile` method to also accept directories.
  - Updated debugger `BreakpointToggle`/`RunTo` methods to take 1-base line nums for consistency.
  - Updated editor menu processing to allow Run-to-Cursor when clicked anywhere on the line.
  - Updated search to use `ShowRange` instead of `ScrollRange`.
  - Updated interpreters to use `GetCommandLineArg` method.
  - Updated comment check in toggling breakpoint to use comment indicator from the editor spec.
  - Updated keymap documentation to add `RawCtrl` example.
  - Updated `GetInterpreter` method to accept interpreter name and return its value (#166).
  - Updated to use `GetColour` ArtProvider method instead of an obsolete one (#260).
  - Updated full screen view processing to reduce flicker with auxiliary panels.
  - Updated last line calculation for markup styling to cover all shown lines (affected by 513a3f67).
  - Updated interpreter definition to add missing fields.
  - Updated `ActivateDocument` to add an option to clear line markers.
  - Updated remote mapping in the debugger to avoid mapping matching paths.
  - Updated valid property check to work with `nil` properties after wxlua upgrade (#260).
  - Updated `SetDebugger` to re-assign remote console to the new debugger.
  - Updated `package` processing to also check main `packages` directory (closes #640, #555).
  - Updated `package` processing to use better path splitting method.
  - Updated `Rename All Instances` menu item to remove unnecessary whitespace.
  - Updated icon handling in the menu to work with `SetBitmap` taking two parameters (#603, #260).
  - Updated menu item icon processing to avoid assert on Linux.
  - Updated handling of clicks on errors to jump to a proper error line (closes #620).
  - Updated copyright year in the About screen.
  - Updated menu generation to use a three-parameter `wxMenu` constructor to avoid crash on Win7.
  - Updated core components to use `Print` method instead of removed `print` function.
  - Updated path normalization to keep leading up-directory references in relative paths.
  - Updated Lua base interpreter to use `GetRootPath`.
  - Updated debugger to better handle incoming session while the current one is being set up.
  - Updated Remote Console to pick a better error message for failed commands.
  - Updated editor calltip to use line number instead of position in getting text height.
  - Updated Windows build script to copy luasec Lua modules (#260).
  - Updated timers to use `AddTimer` method.
  - Updated tests to use temporary folder for debugger tests.
  - Updated test module to better report skipped tests.
  - Updated debugger to use `verbose` option instead of the global `print`.
  - Updated `Wait` and `Update` debugger methods to uppercase.
  - Updated `Run` and `RunTo` debugger methods to uppercase.
  - Updated `Step`, `Over`, and `Out` debugger methods to uppercase.
  - Updated `Listen` debugger method to uppercase (as it's public).
  - Updated debugger to avoid double reporting of stopping when scratchpad is turned off.
  - Updated debugger to use proper debugger objects.
  - Updated debugger termination to stop suspended process without socket leftovers.
  - Updated debugger kill logic to report success to better handle process termination.
  - Updated `ActivateDocument` method to use immediate rather than delayed activation (#166).
  - Updated debug interface to replace global functions with debugger methods (#166).
  - Updated package example to use current API.
  - Updated message to better describe the situation when interpreter not loaded.
  - Updated Chinese translation; thanks to Allan Cylakes (#70).
  - Updated idle processing to handle items in the same order as they are submitted.
  - Updated copyright message in the OSX manifest file.
  - Updated `AddMarker` method to fail when no valid colors provided (#587).
  - Upgraded binaries to wxwidgets 3.1.1 (#260).
  - Upgraded Mobdebug (0.64) to improve error checking after OUTPUT command.
  - Upgraded MobDebug (0.6371) to add path normalization to file names that don't start with `@`.
  - Upgraded MobDebug (0.636) to populate vararg values in the main chunk during debugging.
  - Upgraded to Mobdebug 0.635 to add path normalization in debugger.

### Fixes
  - Fixed setting 'enabled' status for items in popup menus on Linux.
  - Fixed run-time error when auto-complete configured with `strategy=1` or `=0` (fixes #660).
  - Fixed debugger error on Linux when live coding is activated.
  - Fixed check for custom Lua interpreters to avoid conflict with system libs (ref 4ba15eb6).
  - Fixed remote file mapping in the debugger for dynamic chunks when no name is provided.
  - Fixed default value shown in the file search `scope` panel when no editor tab is opened.
  - Fixed indentation of fragments with partial long strings/comments (fixes #639, ref #324).
  - Fixed selection of other tabs after tab move in Output and Project noteboooks.
  - Fixed selecting proper tabs after dragging tabs in the split part of the editor notebook.
  - Fixed line calculations for markup styling to properly style comments after folded fragments.
  - Fixed keeping current line marker when commands are executed in the debugger.
  - Fixed restoring split tab configuration that was broken by 97c7bb96.
  - Fixed using proper debugger object from Stack and Watch functions (fixes #608).
  - Fixed line number reported in `onEditorMarkerUpdate` event callback.
  - Fixed reporting debugger stopping when using `Done` command while running.
  - Fixed selection of the test file to avoid skipping some.
  - Fixed incorrect `ranlib` path in luasec build script on Windows.
  - Fixed remote console not working after using `Break` when running scratchpad.
  - Fixed termination of the debugging when stopped while suspended.
  - Fixed merging some debugger options with `false` values.
  - Fixed stripping path in build scripts on OSX and Linux.
  - Fixed mouse selection in commandbar on OSX (#31).
  - Fixed restoring editor focus on OSX when switching to the IDE (#577).
  - Fixed toolbar disappearing after using FullScreen mode and stopping debugging (fixes #594).
  - Fixed setting editor focus when switching from commandbar on OSX (fixes #577).

## v1.30 (Jan 21 2016)

### Highlights
  - Added `markers` panel to show and navigate bookmarks and breakpoints.
  - Added saving/restoring bookmarks and breakpoints.
  - Added breakpoint prev/next navigation (`Project | Breakpoint` menu).
  - Added find/replace in selection to search operations.
  - Added printing of editor tabs and Console/Output windows (available on Windows and OSX).
  - Added recursive processing of configuration files (using `include` command).
  - Added `outline.showcompact` setting to keep outline more compact for large files.
  - Added opening multiple files from the `Open` dialog.
  - Updated Corona API for v2015.2731 and added handling of type inheritance.
  - Updated love2d API for v0.10.0.

### Special thanks
  - To [tmiv](https://github.com/tmiv) for allowing shortcuts to be added to tools menu items.
  - To [Yonaba](https://github.com/Yonaba/) for French translation update.
  - To [Leo Bartoloni](https://github.com/bartoleo) for Italian translation update.
  - To [Inigo Sola](https://github.com/inigosola) for Spanish translation update.

### Improvements
  - Added `CloneMenu` package method (#166).
  - Added Torch and Redis debugging links.
  - Added `IsNew` method for documents (#166).
  - Added `Print` method and updated core components to use it during launch.
  - Added skipping `UPDATE_CONTENT` events on cursor blinks in `UPDATEUI` (#419).
  - Added preserving markers after sorting/reindentation operations.
  - Added editor `MarkerGetAll` method (#166).
  - Added example on how to set breakpoint shortcuts used in v1.20 or earlier (#419).
  - Added processing of `include` command without extension in config (#555).
  - Added reporting of missing packages when using `package` command in config (#555).
  - Added processing of `package` command without extension in config (#555).
  - Added hint on using updated breakpoint shortcut (#419).
  - Added breakpoint prev/next navigation (#419).
  - Added `AttachMenu` package method (#166).
  - Added `MarkerToggle` editor method (#166).
  - Added `MarkerGotoNext` and `MarkerGotoPrev` editor methods (#166).
  - Added local menu to the `Markers` panel to toggle markers (#419).
  - Added saving/restoring bookmarks and breakpoints (#419).
  - Added `BookmarkToggle` method to the editor (#166).
  - Added `BreakpointToggle` method to the editor (#166).
  - Added `markers` panel to show bookmarks and breakpoints (#419).
  - Added `onEditorMarkerUpdate` event (#166).
  - Added unfolding fragments that include activated line during debugging (closes #575).
  - Added skipping comment when none is provided in the Stack (instead of showing `nil`).
  - Added skipping comments in the lexer to avoid splitting statements (fixes #568).
  - Added `GetExePath` method for the interpreter (#166).
  - Added package `GetFilePath` method (#166).
  - Added `showhiddenfiles` option to show hidden files in the filetree (closes #561).
  - Added package `RemovePanel` method (#166).
  - Added loading of custom package from the config file (closes #555).
  - Added `Alt-Enter` to "replace all" when replace field is selected in the search panel.
  - Added setting project directory to the selected directory to the project tree menu.
  - Added ignoring `Ctrl-CapsLock` in the editor that was shrinking the font.
  - Added recursive processing of configuration files with relative names (#555).
  - Added moving cursor to the end of the pasted fragment (#556).
  - Added workaround for copying UTF-8 invalid data to/from clipboard (#260, #556).
  - Added `CloseAll` and `CloseAllExcept` document methods (#166).
  - Added warning in the interpreter when a short name not generated on Windows (closes #559).
  - Added check for recover record to be fully present.
  - Added using `*Raw` methods when available for handling of invalid UTF-8 chars (#260, #556).
  - Added `FileRemove` method (#166).
  - Added package `onAppDone` method (#166).
  - Added sorting the list of known extensions.
  - Added `outline.showcompact` setting to keep outline more compact for large files (closes #549).
  - Added updating selection boundaries after replace-in-selection (#547).
  - Added resizing toolbar background after resizing the application window.
  - Added timing to the tests.
  - Added context menu item to clear text in the Console window.
  - Added context menu to select a (clicked on) command in the Console window.
  - Added `onMenuConsole` event (#166).
  - Added reporting printing progress (#540).
  - Added package `IsValidProperty` method (#166).
  - Added separator to the print-related menu items on OSX (#540).
  - Added header/footer printing (#540).
  - Added printing of the current editor tab (closes #540).
  - Add package `GetIndicators` method (#166).
  - Added `editor.wrapmode` to configure wrapping mode in the editor.
  - Added reporting of another instance running under a different user (closes #542).
  - Added opening multiple files from the `Open` dialog (closes #541).
  - Allowed reading input in the Output window without printing something first (closes #538).
  - Allow shortcuts to be added to tools menu items
  - Extended PATH on OSX with `/usr/local/bin` to provide access to tools in that folder (#356).
  - Improved compatibility when running the IDE using Lua 5.2.
  - Improved handling of names with Unicode chars during debugging on Windows (#559).
  - Limited requesting attention on debugging starts to happen when debugging is suspended.
  - Moved wxlua version number to a better location in the About screen.
  - Optimized path generation in directory traversal (#260).
  - Removed a workaround for wxlua build issue as it's no longer needed.
  - Replaced `ConsoleClear` with `Erase` methods for the Console object.
  - Removed search panel from the list of floated panels as it shouldn't be there.
  - Removed `allowinteractivescript` setting as it doesn't need to be configurable (#538).
  - Replaced `EditorIsModified` with document method calls.
  - Spanish translation updated
  - Switched to using client size instead of system metric to get screen width (#260).
  - Switched to using `KEY` event in search panel to make it work with wxwidgets 3.1+ (#260).
  - Switched to per-editor tracking in `UPDATEUI` event.
  - Updated `interpreter` menu to use a clone to avoid Linux assertion.
  - Updated Italian Translation (closes #586).
  - Updated french translation as of df381b5 (see #70)
  - Updated Russian translation (#70).
  - Updated translation files with new messages (#70).
  - Updated LuaForWindows interpreter to accept command line parameters (#582).
  - Updated LuaForWindows interpreter to properly pass `arg` to the script (closes #582).
  - Updated `GetDocument` to not fail when no editor is passed.
  - Updated live coding to group number updates together for `Undo`/`Redo` purposes.
  - Updated `Toggle Breakpoint` and `Break` shortcuts for consistency (#419).
  - Updated love2d API for v0.10.0 (#247).
  - Updated script to process new love2d API format (with `variants`).
  - Updated showing filename of the missing interpreter in the project list (#570).
  - Updated build scripts to use own wxwidgets repository to better sync build versions (#260).
  - Updated build scripts to remove an error from the check for missing methods in wxlua.
  - Updated README to remove outdated .ini reference from Estrela section.
  - Updated instructions in the `estrela` configuration file to reference `include` command.
  - Updated luasec build script to use the latest openSSL version (1.0.2d).
  - Updated UTF-8 validation to use wxwidgets libraries for better performance (#556).
  - Updated clipboard copy to make non-UTF-8 data to work on OSX (#260, #556).
  - Updated Console history to work with UTF-8 invalid strings (#260, #556).
  - Updated `Ctrl/Shift-Ins` and `Shift-Del` to work in all editors (#260, #556).
  - Updated `Output` and `Console` to display invalid characters as is (#260, #556).
  - Updated config sample to remove no longer needed `G` references.
  - Updated config processing to simplify access to global functions.
  - Updated config processing to allow use of `package` field.
  - Updated windows launcher code to use manifest for hidpi awareness.
  - Updated `AddConfig` method to accept single filename in addition to a list (#166).
  - Updated event handling to better handle events that are executed once (#260).
  - Updated `sample` package events for more accurate output.
  - Updated default size/position for the first launch without saved settings.
  - Updated tests to use a separate .ini file to minimize conflicts.
  - Updated Corona API for v2015.2731.
  - Updated Corona API processing script to follow Lua guidelines.
  - Updated Corona API processing script to handle type inheritance.
  - Updated `Save As`/`Open` command to use editor specific extensions instead of all.
  - Updated capturing editor information during search to work with selections (#547, #416).
  - Updated `Replace` and `Replace All` to take selection into account (#547, #416).
  - Updated toolbar icons to fix black color in some images.
  - Updated `SetDllDirectory` handling to avoid breaking dlopen with wxwidgets 3.1+ (#260).
  - Updated Corona interpreter to avoid caching specified path.
  - Updated tests to handle platform-specific tests.
  - Updated directory traversing tests to work with smaller directories.
  - Updated default file mask to match files without extension (#260).
  - Updated tests to use a package instead of the obsolete app method.
  - Updated wxwidget path in the build script to use git repository after wxwidgets migration.
  - Updated menu shortcuts to avoid conflicts in the `File` menu (#540).
  - Updated README with features in 1.20.

### Fixes
  - Fixed showing cursor in search panel fields after file search.
  - Fixed reapplying markers after reloading modified file (#419).
  - Fixed setting interpreter after launching with non-existing project.
  - Fixed showing package errors during project switches (#555).
  - Fixed `include` command not checking needed `packages` folders to load from (#555).
  - Fixed resetting the default interpreter after selecting a non-existent one.
  - Fixed restoring project-specific interpreter when switching projects (#570).
  - Fixed restoring project-specific interpreter after relaunch (fixes #570).
  - Fixed expanding sub-trees in project directory when set to the disk root on Windows.
  - Fixed search navigation after selecting one variable instance (fixes #565).
  - Fixed editing fragments in folded text (follow-up to d2ddc96a; #564).
  - Fixed editing multiple selections when selection is in folded fragments (fixes #564).
  - Fixed copy/paste on Windows when UTF-8 invalid strings end in new line (#260, #556).
  - Fixed debugging of Busted scripts (closes #552).
  - Fixed skipping editor tabs when clicked in some cases on OSX (closes #546).
  - Fixed toolbar size not being adjusted on the very first launch.

### Incompatibilities
  - Changed `Toggle Breakpoint` shortcut from `F9` to `Ctrl/Cmd-F9`.
  - Removed `Project | Break` shortcut to avoid conflict with breakpoint navigation.
  - Removed `allowinteractivescript` setting as no longer needs to be configurable (#538).

## v1.20 (Oct 08 2015)

### Highlights
  - Added symbol indexing of project files for project-wide search.
  - Added support for `file@symbol` fuzzy search (#385).
  - Added processing of `ini` setting relative to the IDE location (#483).
  - Improved memory handling for large files.
  - Improved application performance and memory usage.
  - Improved auto-complete order of results and suggestions for case-sensitive matches.
  - Updated Windows launcher to add dpi awareness for high dpi monitors.
  - Upgraded Lua 5.3 interpreter to 5.3.1.
  - Fixed a memory leak after a search panel is opened.
  - Fixed an occasional crash from the filetree on Linux (#425, #464).
  - Fixed recursive file traversal to skip directories when mask is specified.

### Special thanks
  - To [riidom](https://github.com/riidom) for German translation update.
  - To [Yonaba](https://github.com/Yonaba/) for French translation update.
  - To [Leo Bartoloni](https://github.com/bartoleo) for Italian translation update.
  - To [Christoph Kubisch](https://github.com/pixeljetstream) for glslc updates.
  - To Brigham Toskin for auto-complete improvements.
  - To Joergen von Bargen for optimized UTF8 validation.
  - To Nick Smith for Marmalade interpreter updates.

### Improvements
  - Added handling of translation messages that require pluralization (#70).
  - Added check for non-zero file size before reporting load progress (#530).
  - Added switching interpreters by clicking on the interpreter label in the status bar.
  - Added handling of editor commands (Copy/Paste/SelectAll/Undo/Redo) in search panel controls.
  - Added position to the end-of-file lexer token (closes #529).
  - Added reporting when a file can't be removed from a project tree.
  - Added explicit initialization for `editor.autoactivate` default setting.
  - Added allowing `editor.saveallonrun` with `infervalue` static analyzer (closes #524).
  - Added support for `include` command in config files.
  - Added document `Close` method (#166).
  - Added descriptions for new Lua 5.3 `math.*` and `coroutine.*` functions.
  - Added functions new to Lua 5.3 to the list of keywords.
  - Added reporting of deserialization failures for saved package data.
  - Added collapsing white spaces from names shown in the Outline.
  - Added workaround for a memory leak in wxlua after a search panel is opened.
  - Added jumping to the current function in the outline (#515).
  - Added highlighting current functions for better visibility (#515).
  - Added skipping unneded fields from the symbol index to reduce memory usage (#515).
  - Added showing position of the current function in the Outline (closes #515).
  - Added explicit editor destroy during find and replace to conserve memory.
  - Added explicit editor destroy during symbol indexing to conserve memory.
  - Added turning jitting on when running under LuaJIT.
  - Added `Run to Cursor` to the popup menu in the editor (#413).
  - Added showing memory usage stats in the status bar configured by `showmemoryusage`.
  - Added skipping opening a file from symbol search when nothing is matched.
  - Added skipping directories during directory traversal (#499).
  - Added `SetStatusFor` package method to set temporary status (#166).
  - Added forcing immediate refresh of symbol index when requested from the menu (#499).
  - Added `onMenuOutput` event (#166).
  - Added `onMenuWatch` event (#166).
  - Added disabling symbol indexing for directories/projects (#499).
  - Added refreshing of symbol index to the project menu (#499).
  - Added reporting of the number of files queued for indexing (#499).
  - Added reporting when indexing is completed (#499).
  - Added `GetOutline` package method (#166, #499).
  - Added exclusion to not report `arg` as global in static analysis (closes #503).
  - Added `commandbar.width` to set the width of command bar.
  - Added skipping symbol index queue when symbol inactivity is not set (#499).
  - Added setting different types of indentation guides.
  - Added optimization with prefiltering for short patterns (#31, #499).
  - Added status message during index update (#499).
  - Added purging of outdated cache for symbol indexing (#499).
  - Added symbol processing of tabs that are not saved yet (#499).
  - Added indexing of project files (#499).
  - Added `commandbar.maxitems` configuration setting (#499).
  - Added caching of symbols for open files (#499).
  - Added support for `file.lua@symbol` fuzzy search (#385).
  - Added symbol search in all open files (#385).
  - Added check to avoid loops in type assignment during auto-complete (#498).
  - Added primitive handling of `require` in type assignments for known APIs (fixes #498).
  - Added support for aborting file reading callback (#491).
  - Added progress display when loading large files (#491).
  - Added status methods: `GetStatus`, `PushStatus`, and `PopStatus` (#166).
  - Added `onMenuOutline` callback (#166, #337).
  - Added ability to toggle outline sorting from the local menu (#337, #494).
  - Added activating Output panel after compilation errors.
  - Added package `SetStatus` method (#166).
  - Added `Ctrl/Cmd-Enter`/`Ctrl/Cmd-Shift-Enter` to add line after/before the current one (#334).
  - Added ignoring current selection in auto-complete with `Shift-Enter` (closes #494).
  - Added hiding auto-complete after typing one of the offered options (#494).
  - Added activating Output notebook to show search results if it's hidden (#416).
  - Added reporting of errors when unable to open file for static analysis.
  - Added collapsing whitespaces in function parameters in the outline (#337).
  - Added emphasis for the preference type in the config file template.
  - Added `FileSize` method as the default one returns non-zero result for non-existing files.
  - Added reporting of `FileWrite` failing to write the entire content.
  - Added package methods `AddIndicator`, `GetIndicator`, and `RemoveIndicator` (#166).
  - Added missing `Detach Process` id to keymap (pkulchenko/MobDebug#19).
  - Added a check for `ini` setting pointing to a path with a writeable directory (#483).
  - Added a check for `ini` setting pointing to a directory (#483).
  - Added processing of `ini` setting relative to the IDE location (closes #483).
  - Added Watch view refresh after switching focus when needed.
  - Added Stack view refresh after switching focus when needed.
  - Added forced `Refresh`/`Update` to improve redrawing of commandbar on Windows 8.
  - Added a check for a window to be shown to avoid callback recursion on OSX (fixes #473).
  - Added package `IsWindowShown` method (#166).
  - Added package `onEditorPreClose` event (#166, closes #461).
  - Added deleting the rest of the word on auto-complete (`acandtip.droprest`).
  - Added closing editor tab when renaming to an open file from the project tree.
  - Added refresh of the target file after renaming from the project tree.
  - Added a check for object with a focus (occasionally triggered on Linux).
  - Added workaround to fix crash on Linux from the project tree (#425, #464).
  - Added `DoWhenIdle` package method (#166).
  - Disabled unhiding one of wxwidgets windows that is only used for message passing (Windows).
  - Disabled initial highlight when showing current function disabled in the outline (#515).
  - Disabled dragging out search results tab to avoid unexpected results (#416).
  - Enabled compilation during running/debugging (closes #479).
  - Enabled static analysis during running/debugging (#479).
  - Integrate ZeroBrane with Marmalade's Hub GUI
  - Improved auto-complete suggestions for case-sensitive matches.
  - Improved compactness of saved package settings (#166, #499).
  - Improved performance of saving symbol index data (#499).
  - Improved memory usage when closing large files (#491).
  - Improved handling of large files (#491).
  - Improved the order of results in auto-complete (closes #469).
  - glslc tool: add menu option for pre-process mode
  - Optimized saving package settings (#166, #499).
  - Optimized UTF8 validation (thanks to Joergen von Bargen).
  - Optimized handling of multi-line changes in the editor (closes #477).
  - Removed forced garbage collection as it led to crashes on Linux (#425, closes #464).
  - Revised: auto-complete results (amends #469, w/@pkulchenko patch)
  - Switched to the bottom location for the search results by default (#416).
  - Updated italian translations (thanks to Leo Bartoloni)
  - Updated Russian translation (#70).
  - Update de.lua (thanks to riidom)
  - Updated french translation as of commit (thanks to Yonaba)
  - Updated translation files for new messages (#70).
  - Updated translation logic to accept empty tables for pluralization values (#70).
  - Updated build scripts to use the most recent releases of LuaJIT and Lua 5.2.
  - Updated OSX launcher to keep `DYLD_LIBRARY_PATH` if already set.
  - Updated build scripts to use the most recent releases of LuaJIT and Lua 5.2.
  - Update marmalade API definition to 7.9
  - Updated static analyzer (luainspect) to take globals in 'required' files into account (#520).
  - Updated static analyzer to refresh cache of 'required' modules (#520).
  - Updated C/cpp spec to skip `if(...)` from the list of functions.
  - Updated C/cpp spec to properly handle functions at the beginning of a file.
  - Updated package data serialization to use simpler dumper for faster processing.
  - Updated saving symbol index to be called less frequently (#499).
  - Updated list of fields to skip from saved symbol index (#499).
  - Updated Run/Debug to not force saving new tabs when `Start` file is set.
  - Updated interpreter handling to allow setting of default value in the config (closes #518).
  - Updated highlighting of the current function in the Outline to select one item (#515).
  - Updated auto-complete to close when one of the options matches the current input.
  - Updated applying limit to the commandbar results to allow them to be resorted.
  - Updated status messages for better visibility on OSX during index refresh (#499).
  - Updated tracking of editor updates to skip unneeded notifications on OSX (#499).
  - Updated symbol refresh to do processing as soon as the path is known (#499).
  - Updated symbol index to skip unused elements in serialization (#499).
  - Updated prefiltering to limit prefix to avoid penalty for long `s.*s.*s...` (#31).
  - Updated package `SetSettings` method to allow passing of additional parameters (#166).
  - Updated status of files indexing for symbol search (#499).
  - Updated `DoWhenIdle` handling to gracefully handle a long queue.
  - Updated `Go To Symbol` to refresh files loaded in the preview (#499, #385).
  - Updated symbol search to only refresh outline when it's not populated (#385).
  - Updated search logic to avoid showing search results in recent files (#416).
  - Updated line number handling to adjust for large files (#491).
  - Updated `busted` interpreter to check for proper extension on Windows (closes #495).
  - Updated handling of binary and utf8 validness checks for large files (#491).
  - Updated build scripts for Lua 5.3 to use 5.3.1.
  - Updated toolbar to show large icons by default on large screens.
  - Updated outline to only retrieve entry text when there are tokens to process (#337).
  - Updated getting text length without requesting editor content.
  - Updated showing function indicator handling to allow for easier enabling.
  - Updated indicator processing to use new API.
  - Updated ID references in toolbar to use the new access method.
  - Updated ID references in keymap to use the new access method.
  - Updated `Detach Process` to allow access to it while the process is running.
  - Updated metalua/static analyzer to accept long integer and imaginary numbers (closes #482).
  - Updated internal parser to accept long integer, imaginary, and floating point hex numbers (#482).
  - Updated internal parser to accept numbers that start with a period (#482).
  - Updated compilation and static analysis to keep output when running/debugging (#479).
  - Updated indentation after strings with brackets and escaped quotes (#324).
  - Updated `AnalyzeString` to add filename parameter (closes #463).
  - Updated Windows launcher to add dpi awareness for high dpi monitors.
  - Upgraded Lua 5.3 interpreter to 5.3.1 on Linux (x86 and x64).
  - Upgraded Lua 5.3 interpreter to 5.3.1 on OSX.
  - Upgraded Lua 5.3 interpreter to 5.3.1 on Windows (closes #453, closes #460).
  - Upgraded Mobdebug (0.628) to include `keyignore` serializer option.
  - Upgraded Mobdebug (0.627) to improve debugging of code with overloaded `string` methods.
  - Upgraded Mobdebug (0.624) to make `DONE` async and to add `__tostring` protection (closes #446).

### Fixes
  - Fixed text search and fuzzy symbol search in symlinks (#458, #530).
  - Fixed opening only one tab for external debugging of dynamic code on Linux (closes #526).
  - Fix live picking up debug vs release binaries (Marmalade)
  - Fixed highlighting for those specs that don't have information on where functions end (#515).
  - Fixed highlighting the current function when anonymous functions are hidden (#515).
  - Fixed styling of comments that include markup inside markup (fixes #514).
  - Fixed updating symbols in new files that haven't been indexed yet (#499).
  - Fixed opening empty files (fixes #510).
  - Fixed autocomplete for words that may include underscores in suggestions.
  - Fixed crash on OSX during symbol indexing when filetree menu is open (#499).
  - Fixed crash on Linux during symbol indexing when filetree menu is open (fixes #507).
  - Fixed duplicates between variables and dynamic words in auto-complete.
  - Fixed uncommenting of the last line in the selection to keep un/comment reversible (fixes #509).
  - Fixed assignment parsing when the type value is re-assigned (#498).
  - Fixed mouse selection in auto-complete on OSX (fixes #496).
  - Fixed fuzzy file search to not double open already opened files (#31).
  - Fixed indentation of lines that end with partial long strings with opening brackets (#324).
  - Fixed indentation of lines with long strings that include opening brackets (#324).
  - Fixed indicators on table fields after variables that look like multiple assignments (#492).
  - Fixed indicators on table fields after variables (fixes #492).
  - Fixed variable usage based on static analysis.
  - Fixed initial select-and-find search.
  - Fixed returning focus to the editor after find-in-files followed by page search (#416).
  - Fixed performance of initial fuzzy search for line numbers (closes #476).
  - Fixed Output tab name when debugging aborted after run-time error.
  - Fixed recursive file traversal to skip directories when mask is specified.
  - Fixed crash in `collectgarbage` from the filetree on Linux (#425, #464).

## v1.10 (May 13 2015)

### Highlights
  - Redesigned search functionality; added incremental search and replace-in-files preview.
  - Updated love2d API for v0.9.2.
  - Upgraded Mobdebug (0.62) to add vararg processing.
  - Added `excludelist`/`binarylist` to exclude files and folders.
  - Added skipping binary files during find-in-files and fuzzy search.

### Special thanks
  - To [David Feng](https://github.com/DavidFeng) for fixing a broken symbolic link.
  - To [Robert Machmer](https://github.com/rm-code) for updated German translation and fixes for love2d engine name/description.
  - To [Derek Bailey](https://github.com/dbaileychess) for adding context menu item to update the contents of the tree.

### Improvements
  - Added closing search results with `Close Page` for consistency (#416).
  - Added option to show search results in multipe tabs (#416).
  - Added package `IsValidCtrl` method (#166).
  - Added skipping binary files in commandbar (#31, #455).
  - Added handling of `**` in exclusion masks (#455).
  - Added `excludelist`/`binarylist` to exclude files and folders (closes #455).
  - Added `search.autohide` option to hide search panel after search (#416).
  - Added `debugger.requestattention` to configure focus switch (closes #449).
  - Added closing search panel on `Escape` in the editor (closes #450, #416).
  - Added `search.zoom` setting to zoom search results (#416).
  - Added warning when interpreter can't be loaded and the default one is used.
  - Added support for `wxImage` used in `imagemap` (#436).
  - Added icon tint processing (`imagetint` option).
  - Added `search.contextlinesbefore`/`search.contextlinesafter` settings (#416).
  - Added `search.autocomplete` setting do configure search autocomplete (#416).
  - Added auto-complete for find and replace fields (#416).
  - Added saving search settings between restarts (#416).
  - Added deleting of protected text in Cut/Paste operations (closes #412).
  - Added refresh context menu item to update the contents of the tree (thanks to Derek Bailey).
  - Added ignoring assignment in comments for auto-complete.
  - Added preview screen to check changes in replace-in-files (#416).
  - Added search toolbar button to set/unset context in search results (#416).
  - Allowed for larger default size of docked panels (#424).
  - Allowed closing `Search Results` tab while search is in progress (#416).
  - Disabled refresh when `outlineinactivity=nil` and `showonefile=true` (#337).
  - Improved incremental processing to avoid marking table fields as variables.
  - Improved logic to skip binary files during search (#416).
  - Moved cancelling auto-complete popup to idle event (fixed #447).
  - Moved winapi dll to `clibs` folder to avoid conflict with other winapi versions.
  - Optimized `Go To File` file traversal in commandbar (#31).
  - Redesigned the search panel (closes #416; closes #398).
  - Removed option to request attention from breakpoint activation (#449, closes #454).
  - Removed warnings from loose parser to stop polluting stderr on Linux (#425).
  - Removed hardcoded references to menu positions to simplify adding new items.
  - Removed saving .bak files as it's replaced by replace-in-files preview (#416).
  - Reorganized folding to allow more editor-like components to be foldable.
  - Switched to using `wxFileSize` instead of `Length` (fixes #458).
  - Updated event documentation.
  - Upgraded Mobdebug (0.62) to add vararg processing.
  - Updated build files to use release version of Lua 5.3 (#453).
  - Updated Corona interpreter to allow debugging on Linux using Wine.
  - Updated folder traversing logic to limit number of open folders (fixes #441).
  - Update Readme.md to use correct name for the LOVE framework (thanks to Robert Machmer).
  - Updated Linux build scripts to add `debug` option.
  - Updated love2d interpreter to use proper engine name/description (closes #433) (thanks to Robert Machmer).
  - Updated german translation (#432, #70).
  - Updated love2d APU for v0.9.2 (#247).
  - Update german translation (thanks to Robert Machmer).
  - Updated `Select and Find` to capture selection for subsequent use (#416).
  - Updated `Find Next/Prev` to continue search using the current find text (#416).
  - Updated unfolding of folded lines before delete or overwrite.
  - Updated folding to collapse only when clicked on the header.
  - Updated config samples to use `ID.code` instead of obsolete `G.ID_code`.

### Fixes
  - Fixed crash on Windows by disabling events in Outline refresh (fixes #442).
  - Fixed file traversing not to match `foo.bar!` for `*.bar' mask (#416).
  - Fixed showing of not translated messages that require pluralization.
  - fix broken symbolic link (thanks to David Feng).
  - Fixed an empty popup (that could lead to a crash) when dynamic words is on.
  - Fixed commandbar positioning on Linux affected by 5b665477 (#31).
  - Fixed loose parser to handle multiple assignments (fixes #430).
  - Fixed editor activation after dragging of inactive tab (fixes #427).
  - Fixed indentation after comment with markdown markup (closes #428, #324).
  - Fixed auto-complete issue causing looping warning (#143).
  - Fix commandbar position with split editor tabs (#31).
  - Fixed re-indenting of selection with comments at the top of the file (#324).
  - Fixed restoring pane size after hide/show operations (fixes #424).

### Incompatibilities
  - Removed saving .bak files as it's replaced by replace-in-files preview.

## v1.00 (Mar 13 2015)

### Highlights
  - Added directory mapping to the project tree (closes #223).
  - Added `Run to Cursor` (closes #413).
  - Added support to set/unset start file for a project (closes #411).
  - Added opening/creating file from the command bar (#31).
  - Added `staticanalyzer.infervalue` to enable deeper/slower analysis (#414).
  - Updated Corona API for v2015.2576.

### Improvements
  - Added `staticanalyzer.infervalue` to enable deeper/slower analysis (#414).
  - Added project path in the error reporting for love2d/corona interpreters.
  - Added an example with enabling Emacs bindings in the editor.
  - Added Russian translations for new messages (#70).
  - Added a warning on class resolution taking too much time in auto-complete.
  - Added check for empty/comment lines when breakpoints are set.
  - Added directory mapping to the project tree (closes #223).
  - Added `Run to Cursor` (closes #413).
  - Added document method `GetTabText` (#166).
  - Added showing love2d console when requested.
  - Added support to set/unset start file for a project (closes #411).
  - Added requesting attention for debugger even when the file is not activated.
  - Added reporting of location in more cases when debugging is suspended.
  - Added starting debugging even when the file is not opened in the IDE.
  - Added switching project directory from the command bar (#31).
  - Added trimming of trailing spaces in the directory name when switching projects.
  - Added closing preview if the file failed to load in commandbar (#31).
  - Added handling of `Ctrl/Cmd-Enter` in commandbar to force open file (#31).
  - Added skipping loading files with empty and directory names.
  - Added trimming of trailing spaces in the file name when loading a file.
  - Added file selection in the project tree after saving a new file.
  - Added opening/creating file from the command bar (#31).
  - Disabled menu item for renaming/editing for mapped directories (#223).
  - Disabled field checks for local parameters in staic analyzer (closes #421).
  - Improved static analyzer to handle more cases with `infervalue` set (#414).
  - Refactored use of image constants in the project tree.
  - Refactored document modification tracking to remove `SetDocumentModified`.
  - Refactored path normalization for project directory.
  - Updated Corona API for v2015.2576.
  - Updated static analyzer output formatting.
  - Updated analyzer to also check value of `pairs` parameter (#414).
  - Updated `debugging suspended` message to not trigger with `runonstart`.
  - Updated messages in interpreters to fix line endings.
  - Updated lettercase in menu items for consistency.
  - Updated UpdateUI handling to fix multi-view refresh, as in DocumentMap (#352).
  - Updated Outline to use editor tab text (instead of a file name).
  - Updated message on failure to start debugging to add the file name.
  - Updated `debugging suspended` message to put location in quotes.
  - Updated line check in command bar to not trigger on Windows file names.
  - updated glewgl api (glew 1.12.0)

### Fixes
  - Fixed analyzer to check value of `ipairs` parameter (fixes #414).
  - Fixed OS detection on Linux that sets `DYLD_LIBRARY_PATH` (fixes #417).
  - Fixed saving auto-recovery record with no editor tabs opened (fixes #418).
  - Fixed looping in auto-complete when processing recursive assignments.
  - Fixed filename used in the recovery message.
  - Fixed Output/Console window to stay shown after failure to start debugging.
  - Fixed an issue with search initiated from Output/Console panels (fixes #406).
  - Fixed auto-complete for non-default `acandtip.strategy` values (fixed #409).
  - Fixed loading file with absolute name and line number (fixes #408).

## v0.95 (Jan 30 2015)

### Highlights
  - Added fuzzy search with `Go To File`, `Go To Symbol`, `Go To Line`, and `Insert Library Function`.
  - Added auto-complete support for LDoc '@tparam' and '@param[type=...]'.
  - Added armhf architecture support (thanks to Ard van Breemen).
  - Updated static analyzer to support `goto`/labels and bitops for Lua 5.2/5.3.
  - Updated internal parser to support Lua 5.2/5.3 syntax.
  - Updated Mobdebug to improve Lua 5.3 compatibility (thanks to Andrew Starks).
  - Update API descriptions with functions new in Lua 5.3.

### Special thanks
  - To [Ard van Breemen](https://github.com/ardje) for armhf architecture support.
  - To [Evandro Costa](https://github.com/evandro-costa) for Brazilian Portuguese (pt-br) translation.
  - To [Andrew Starks](https://github.com/andrewstarks) for Lua 5.3 compatibility improvements.
  - To [Alexis Jarreau](https://github.com/Fringale) for French translation update.
  - To [Leo Bartoloni](https://github.com/bartoleo) for Italian translation update.
  - To [riidom](https://github.com/riidom) for German translation update.

### Improvements
  - Added showing/hiding Output/Console panel during debugging.
  - Added `bordersize` to configure sash size.
  - Added package `LoadFile` method (#166).
  - Added Russian translation for new messages (#70).
  - Added syntax highlighting for functions new in Lua 5.3.
  - Added `commandbar.prefilter` to commandbar to improve performance (#31).
  - Added custom formatting for APIs.
  - Added `Insert Library Function` to `Navigate` menu.
  - Added hiding tooltip/auto-complete popup after undo/redo/delete operations.
  - Added `api` handling to the config to support custom APIs.
  - Added Lapis and Moonscript debugging links to README.
  - Added `Contributing` section to README.
  - Added LICENSE link to README.
  - Added Lua 5.3 links to README; updated links to remove '.html'.
  - Added `PgUp` and `PgDn` navigation for commandbar (#31).
  - Added auto-complete support for LDoc '@tparam' and '@param[type=...]'.
  - Added Brazilian Portuguese (pt-br) translation.
  - Added showing the symbol under cursor in `Go To Symbol` (#385).
  - Added `editor:ValueFromPosition` method (#166).
  - Added `Go To Symbol` support to the commandbar (#31, closes #385).
  - Allowed renaming of files with different case in the project tree.
  - Added update of file name in the Outline when editor tab is updated (#337).
  - Added check for `styles` being reset in the config file (closes #383).
  - Added loading file from project directory with "proj file" on command line.
  - Added skipping of binary files in commandbar preview (#31).
  - Added CONTRIBUTING file.
  - Added clearing Output window before showing Find-in-Files results.
  - Added default values for Outline config settings (#337).
  - Added package `GetProjectNotebook` method (#166).
  - Added saving Outline tab configuration in the Project notebook (#337).
  - Added `outline.sort` option to sort items in the outline (#337).
  - Added `outline.showflat` option to show flat outline (#337).
  - Added package `GetOutlineTree` method (#166).
  - Add support for armhf architecture
  - Added document `Save` method (#166).
  - Added `init.lua` to the search path (fixes `require 'dist'`).
  - Added forced garbage collection when switching from the app.
  - Added penalty for missing characters in fuzzy search (#31).
  - Added line navigation to `Navigate` menu (#31).
  - Added handling of line numbers in command bar (#31).
  - Added caching to improve commandbar performance on large folders (#31).
  - Added setting explicit focus on preview tab in commandbar (#31).
  - Added preview on first selection in commandbar (#31).
  - Added file preview to commandbar (#31).
  - Added fuzzy search for files in commandbar (closes #31).
  - Added displaying the list of current tabs for commandbar (#31).
  - Added commandbar prototype for file navigation (#31).
  - Added reset of tokens when editor content is reloaded (#337).
  - Enabled html and C/cpp specs by default (#395).
  - Improved handling of complex types in LDoc expressions in auto-complete.
  - Improved failed search 'shake' visualization by forcing window redraw.
  - Improved command line file check for relative files on Windows.
  - Split console output into shorter lines to improve memory usage and handling.
  - Renamed `debugger.stackmax*` settings to `debugger.maxdata*`.
  - Removed double check for invalid UTF-8 output in console.
  - Refactored ID handling to allow using `ID.COMMENT` in config files.
  - Removed `wxwidgets` from the list of default APIs for Lua interpreters.
  - Refactored handling of special symbols in commandbar (#31).
  - Removed border from tree controls (#305).
  - Updated language files with new messages (#70).
  - Update API descriptions with functions new in Lua 5.3.
  - Updated loose parser to support Lua 5.2+ labels.
  - Updated loose parser to support `goto` and Lua 5.3 bitops.
  - Updated Metalua to support Lua 5.3 bitops.
  - Updated Metalua to support `goto`/labels in static analysis for Lua 5.2/5.3.
  - Upgraded Mobdebug (v0.611) to fix tooltips during Corona debugging (closes #387).
  - Updated `CommandBarShow` to accept text fragment to select (#31).
  - Updated `GetKnownExtensions` to accept an optional extension to match against.
  - Updated `FileRead` to accept optional length.
  - Updated layout settings to use constants and new package API.
  - Updated parser to avoid splitting `foo.bar` in incremental processing.
  - Upgraded MobDebug (0.61) to add `basedir` support.
  - Updated status refresh to only happen for the active editor.
  - Updated toolbar UI checks to happen when running/debugging (#352).
  - Updated Corona integration to hide console on OSX (2014.2393+).
  - Upgraded Mobdebug to 0.613 to improve Lua 5.3 compatibility (#401); thanks to @andrewstarks.
  - Updated usage instructions in README.
  - Update de.lua

### Incompatibilities
  - Renamed `debugger.stackmax*` settings to `debugger.maxdata*`.
  - Removed `wxwidgets` from the list of default APIs for Lua interpreters; use `api` config setting to include it.

### Fixes
  - Fixed search navigation to shift horizontally when `usewrap` is off.
  - Fixed indentation for lines with mixed string separators (#324, #388).
  - Fixed indentation for lines with escaped slashes (#324, closes #388).
  - Fixed find-and-replace to replace in already selected fragment if matched.
  - Fixed refresh of files in command bar preview when selected (#31).
  - Fixed recovery of empty (`untitled`) tabs.
  - Fixed an auto-complete issue after `repeat until <var>`.
  - Fixed setting focus to the editor in commandbar with one tab (#31).
  - Fixed auto-complete after text not separated by a whitespace or bracket.
  - Fixed an error when disabling outline by setting `outlineinactivity=nil`.

## v0.90 (Nov 08 2014)

### Highlights
  - Added function outline.
  - Added Lua 5.3 (beta) binaries and debugging support.
  - Added scope-aware auto-complete for local/global variables.
  - Added hiding/showing files by type in the project/filetree.
  - Added Esperanto (eo) translation.
  - Improved compatibility with Lua 5.2 interpreter.
  - Improved compatibility with system/custom Lua interpreter.

### Special thanks
  - To [cosmotect](https://github.com/cosmotect) for added Esperanto translation.
  - To [riidom](https://github.com/riidom) for updated German translation.
  - To [Christoph Kubisch](https://github.com/pixeljetstream) for glsl improvements.
  - To [Wojciech Milkowski](https://github.com/milkowski) for making indentation guide configurable.
  - To [sclark39](https://github.com/sclark39) for adding project dir to find dialog paths.

### Improvements
  - Added Lua 5.3 (beta) support and binaries.
  - Added Russian translation for new messages (#70).
  - Added `AddPackage` and `RemovePackage` methods (#166).
  - Added `CreateBareEditor` package method (#166).
  - Added `GetAPI` method for interpreter (#166).
  - Added `GetOutputNotebook` package method (#166).
  - Added `IsPanelDocked` package method (#166).
  - Added `Run` and `Run as Scratchpad` buttons to the toolbar.
  - Added `acandtip.maxlength` option for setting the length of a tooltip.
  - Added `function` handling to the token processing.
  - Added `imagemap` setting to support custom images.
  - Added `onEditorCallTip` method (#166).
  - Added `showonefile` option for the outline to always show one file (#337).
  - Added an Esperanto (eo) translation.
  - Added build support for Lua 5.3-alpha and luasocket for Lua 5.3.
  - Added check for existing process id before stopping the process.
  - Added check for pending data to improve re-starting debugging session.
  - Added collapsing outlines for files in inactive tabs (#337).
  - Added creating italic font if only the main one is provided.
  - Added document `SetActive` method (#166).
  - Added drag-and-drop support for the Outline tab (#337).
  - Added example of enabling `Opt+Shift+Left/Right` shortcut on OSX.
  - Added function outline (closes #337, closes #222).
  - Added handling of `~` in launch command path.
  - Added hiding/showing files by type in the project/filetree (closes #375).
  - Added local/global indicators to function outline (#337).
  - Added marking file after showing files in the tree (#375).
  - Added navigation based on 'filename:line:pos' in the Output window.
  - Added option for not/showing anonymous functions in the outline (#337).
  - Added package `AddTool` and `RemoveTool` methods (#166).
  - Added package `CreateImageList` method (#166).
  - Added package `ExecuteCommand` method (#166).
  - Added package `FindTopMenu` method (#166).
  - Added package `GetAppName` method and removed hardcoded name references (#166).
  - Added package `GetConsole` method (#166).
  - Added package `GetKnownExtensions` method (#166).
  - Added project dir to find dialog paths; thanks to @sclark39 (closes #358).
  - Added rule to enable `Set From Current File` only when available.
  - Added scope-aware auto-complete for local/global variables (closes #291).
  - Added scrolling to the top of the outline when `showonefile` is set (#337).
  - Added sending Corona SDK simulator output to the Output window on Windows.
  - Added translation label for `Toggle Bookmark` toolbar icon (#70, #373).
  - Added unindent on backspace (controlled by `editor.backspaceunindent`).
  - Added view menu for the Outline window (#337).
  - bugfix in output callback for commandline tools
  - bugfix on extension change save-as, related to new indication handling
  - cg/hlsl/glsl refine isfndef capture, mostly to react on GLSL's layout mechanism
  - Disabled moving of Output/Console/Project tabs between panels.
  - Disabled closing tabs in floating panels.
  - Improved `ffitoapi` tool logic when no replacement is made.
  - Improved compatibility with Lua 5.2 interpreter (closes #357).
  - Improved scroll positioning in the outline after tab changes (#337).
  - Improved support for non-lua specs in the outline (#337).
  - Minor update to indentation guides handling (#371).
  - Moved 'default' search path to be searched first (#357).
  - Reduced rate of toolbar UI checks to improve performance (fixes #352).
  - Reduced the number of focus changes in the outline (#337).
  - Reduced unnecessary editor processing to improve performance (#352).
  - Refactored `GetBitmap` package method (#166).
  - Refactored `tools` interface to make it easy to add/remove tools.
  - Refactored adding editor tab to ensure callbacks have document data.
  - Refactored default `fprojdir` and `fworkdir` from the interpreter code.
  - Refactored drag-and-drop processing for Project/Output window tabs (#377).
  - Refactored panel docking; added `AddPanelDocked` package method (#166).
  - Refactored timer usage for consistency.
  - Remove function dropdown from the toolbar (#337).
  - Removed menu separator from the Tools menu.
  - Removed prepending libraries for debugging to LUA_CPATH when custom interpreter is specified.
  - Removed reference to `funclist`, which is no longer needed.
  - Removed unused image files.
  - Renamed `markvars` method used in spec files to `marksymbols`.
  - Renamed image files to have names correspond to the content.
  - Reorganized default config settings.
  - Reorganized token list processing to keep it within the editor.
  - Restored removed function in Lua spec (partial revert of 713d0935).
  - Switched to using `Is{Input|Error}Available` instead of `stream:CanRead`.
  - updated luxinia2 related files
  - Update de.lua
  - Updated C-based specs to handle function calls without parameters.
  - Updated C-based specs to use `marksymbols` to provide outline for C functions.
  - Updated Lua 5.3 build scripts.
  - Updated `AddPackage` to assign package file name (#166).
  - Updated `RemoveMenuItem` to disconnect handlers attached to the main frame (#166).
  - Updated `package.config` description to remove reference to Lua 5.2.
  - Updated `showanonymous` to a label for anon functions in the outline (#337).
  - Updated code based on static analysis suggestions.
  - Updated command launch handling to allow output suppression.
  - Updated function call indicator to support `isfncall` and `marksymbols`.
  - Updated function indicator processing to use ranges.
  - Updated handling of extensions to allow more symbols in extensions.
  - Updated images in the outline; added `showmethodindicator` option (#337).
  - Updated indicator processing to improve performance on large files.
  - Updated interpreter processing to run after packages are loaded.
  - Updated label for anonymous functions in the outline (#337).
  - Updated language files with new messages (#70).
  - Updated markup processing to allow for 3+ markup sequences.
  - Updated markup processing to support links in non-editor documents.
  - Updated messages for to match translations (#70).
  - Updated method of collapsing outline to fix crash on OSX (#337, fixes #368).
  - Updated outline logic to show on the very first launch (#337).
  - Updated outline to always expand functions in the current file (#337).
  - Updated outline to show files without functions (#337).
  - Updated outline to track filename changes after `Save As` (#337).
  - Updated outline to use `AddPackage` method (#337).
  - Updated output callback processing not to run when nothing to process.
  - Updated package `GetRootPath` to accept file/directory name (#166).
  - Updated parser to avoid 'breaking' statements during incremental processing.
  - Updated parser to handle `...` in function parameters.
  - Updated parser to report function token before parameters (#337).
  - Updated parser to store position for not-quite-valid function names.
  - Updated processing of function indicators when auto-analyzer is off.
  - Updated search/replace to always use the current editor/output/console tab.
  - Updated static analizer to accept typedlua parser in addition to metalua.
  - Updated tooltip processing to make it more consistent and better use space.
  - Updated translation building script to handle non-string parameters (#70).
  - Updated un/comment to keep the current selection and caret position (#360).
  - Upgraded MobDebug (0.606) for `Detach Process` to correctly close debugging.
  - Upgraded Mobdebug (0.607) to fix debugging after `Detach Process` command.

### Incompatibilities
  - Renamed `markvars` method used in spec files to `marksymbols`.

### Fixes
  - Fixed 'slow' mode of static analysis to work with Metalua 0.7.2.
  - Fixed `Output` tab name after stopping/completing remote debugging.
  - Fixed `Project` label shown untranslated in other languages (#70, #373).
  - Fixed `Run` toolbar label not being translated (#70, #373).
  - Fixed activation in `tree:FindItem` when new editor tab is opened (#166).
  - Fixed an error when dragging Stack/Watch/other tabs between notebooks.
  - Fixed an issue with removing first menu item in RemoveMenuItem (#166).
  - Fixed an issue with searching in Output and Console windows.
  - Fixed column indicator on lines with tabs (fixes #379).
  - Fixed disabling Stack/Watch icons in the toolbar.
  - Fixed error after using Enter multiple times in `Find in Files` on OSX.
  - Fixed file renaming in the filetree after using `SaveAs`.
  - Fixed flicker in the outline when auto-complete is shown (#337).
  - Fixed focus switch after selecting a function in the outline and editing (#337).
  - Fixed handling of remapped image files; improved error reporting.
  - Fixed incorrect `binary not` calculation with wxlua and LuaJIT 2.1.
  - Fixed index check during tab name update.
  - Fixed keeping toolbar status after hiding it.
  - Fixed localization in function outline (#337).
  - Fixed localization to avoid error in `SaveAs` processing.
  - Fixed navigation in function outline when `showonefile` is set (#337).
  - Fixed not hiding directories when files without extension are hidden (#375).
  - Fixed off-by-one error in function outline position tracking (#337).
  - Fixed outline refresh after quick tab switches (#337).
  - Fixed refresh of 'background' markers during debugging.
  - Fixed replacement when selection doesn't match the text being searched for.
  - Fixed search in files/directories with `%` in the name (fixes #369).
  - Fixed storing position in `function` handling.
  - Fixed stream reading for the Output to only include actually read chars.
  - Fixed unused variables and constants based on static analysis.

## v0.80 (Aug 31 2014)

### Highlights
  - Added support for expanding table elements in Watch window.
  - Added editing of values in Watch window.
  - Added highlighting all instances of selected text.
  - Added replacing all selected instances using a dialog.
  - Added saving (one-line) layout for editor tabs.
  - Added support for `filename:<line>` and `filename:p<pos>` on the command line.
  - Added search in Console and Output windows.
  - Improved compatibility with Lua 5.2 to run the IDE.

### Special thanks
  - To [Li Jia](https://github.com/tiwb) for fixing remote path map when 'runonstart' option is set.

### Improvements
  - Added default values for `hotexit` and `saveallonrun` settings.
  - Added debugger `GetHostName` and `GetPortNumber` methods (#166).
  - Added a check for a local shortcut (F2/Del) being enabled before triggering.
  - Added refresh of expanded Watch values.
  - Added support for expanding table elements in Watch window.
  - Added package `AddWatch` method (#166).
  - Added `toolbar.iconsize` to configure toolbar icon size.
  - Added `run-as-scratchpad` toolbar icon (hidden by default).
  - Added `run` toolbar icon (hidden by default).
  - Added `find-in-files` toolbar icon (hidden by default).
  - Added support for disabling individual icons in the toolbar.
  - Added replacing all selected instances using a dialog (closes #342).
  - Added highlighting all instances of selected text (closes #344).
  - Added `filetree.mousemove` option to disable drag-n-drop (closes #351).
  - Added `suspended` to Output panel title when debugger is stopped (closes #350).
  - Added a warning when remote console can't evaluate an expression (#350).
  - Added handling of `osname` to package dependencies (#166).
  - Added `onIdle` event (#166).
  - Added `tree:FindItem` method (#166).
  - Added package `Yield` method (#166).
  - Added ability to set location of `ini` file from config.
  - Added ability to load bitmap as toolbar icon.
  - Added package `RemoveMenuItem` method (#166).
  - Added ability to customize toolbar.
  - Added saving (one-line) layout for editor tabs.
  - Added centering of the screen after re-indenting and sorting (#337).
  - Added local to variable 'activated' in function mapRemotePath
  - Added centering of the screen after 'go to definition' and back (#337).
  - Added centering of the screen after selection from the function list (#337).
  - Added package `onEditorUpdateUI` event (#166).
  - Added package `AddPanel` method (#166).
  - Added package `GetUIManager` method (#166).
  - Added editor `SetupKeywords` method (#166).
  - Added document `GetFileExit` method (#166).
  - Added `onEditorPainted` event (#166).
  - Added support for `name:<line>` and `name:p<pos>` on the command line.
  - Added error reporting on failure to load file from the command line.
  - Added metalua components to MANIFEST (missing in packaging on OSX).
  - Added saving auto-recovery record on switching from the application.
  - Added `hotexit` option to exit without forcing to save files.
  - Added setting of margin properties to support their reordering.
  - Added error reporting on failure to delete directory from project tree.
  - Added check for shortcut in conflict being enabled before activating (#233).
  - Added workaround for missing `GetChildren` call in some wxlua configurations.
  - Added unfolding modified lines to avoid leaving hidden lines in the editor.
  - Added search in Console and Output windows (closes #313).
  - Allowed double-click selection in the Output window (#313).
  - Avoided system lib conflict when debugging by using bundled libs (fixes #355).
  - Disabled editing on non-root watch elements.
  - Disabled smart indentation for multi-line comments and strings (#324).
  - Disabled re-indentation of multi-line comments/strings (#324).
  - Disabled `Opt+Shift+Left/Right` shortcut as it conflicts with block selection.
  - Enabled editing of values in Watch window.
  - Enabled `editor.autoreload` by default.
  - Improved config handling when `editor` configuration is removed/empty.
  - Improved `autotabs` logic when the file starts with indentation.
  - Improved auto-complete logic that tracks variable assignments (fixes #343).
  - Improved cursor positioning after re-indenting or sorting.
  - Improved compatibility with Lua5.2 to run the IDE.
  - Increased default project history length to 20.
  - Removed check for multiple references in stack values.
  - Refactored stack processing to use methods to handle expandable table values.
  - Refactored file name generation for compilation and static analysis.
  - Removed erroneous message about failure to open '-psn...' file on OSX.
  - Renamed all image files to remove cruft from their names.
  - Simplified logic for watch processing.
  - Switched from using TreeItemData to Lua tables for watch expressions.
  - Switched to using tree control for watches.
  - Updated copas library to support non-blocking requests using socket.http.
  - Updated Stack and Watch views to better stringify keys.
  - Updated watch menu to handle item under mouse cursor.
  - Updated constants for image lists.
  - Updated `FindMenuItem` method to search in the main and specified menus (#166).
  - Updated `ide.config` to access wx, wxstc, and os through metatable.
  - Updated recent projects/files handling to allow menus to be removed.
  - Updated package `FindMenuItem` method (#166).
  - Updated `autotabs` to respect `usetabs` when no indentation is present.
  - Updated copy/cut to capture one instance when all are the same (closes #345).
  - Updated default marker colors for lighter border (#305).
  - Updated auto-recovery logic to skip missing files (fixes #323).

### Fixes
  - Fixed disabling auto-recovery on app switching.
  - Fixed find-in-files error when used with editor not in focus (fixes #354).
  - Fixed package `GetStack` method to return proper control (#166).
  - Fixed Watch window background color on some Mint Linux systems.
  - Fixed debugging error when `debugger.runonstart` is specified (fixes #348, #341).
  - Fixed keybinding for `Ctrl-<punctuation>` working on Linux (fixes #346).
  - Fixed localization based on static analysis.
  - Fixed remote path map when 'runonstart' option is set.
  - Fixed error reporting during Analyze (fixes #340).
  - Fixed using image lists for stack/filetree to keep them in memory.
  - Fixed indentation when Enter is hit at the middle of a line.
  - Fixed formatting of `until` statements (fixes #335).
  - Fixed formatting of strings including comments '--' (#335).
  - Fixed restoring proper file names for unsaved tabs during auto-recovery.
  - Fixed deleting 'dynamic words' when multiple lines are removed.
  - Fixed `love.update` description (#247).
  - Fixed indentation of strings starting from `endSomething` (#324).
  - Fixed use of '%' in replacement for Lua5.2 compatibility (#153, #156, #143).
  - Fixed warnings from static analysis.

## v0.70 (Jun 18 2014)

### Highlights
  - Added support for OpenResty/Nginx, moonscript, and Lapis debugging.
  - Added re-indentation of selected fragment or entire file.
  - Added line mapping support for debugging Lua-based languages (e.g. moonscript).
  - Added `editor.wrapindentmode` and `editor.wrapstartindent` settings.
  - Fixed debugger compatibility with Lua 5.2.
  - Fixed `F2` shortcut not working in file tree and watch panel.
  - Fixed replace-in-files when saving backup copy is turned off.

### Special thanks
  - To [sclark39](https://github.com/sclark39) for `format.apptitle` option to format IDE title.
  - To [Christoph Kubisch](https://github.com/pixeljetstream) for glslc improvements.
  - To [Yonaba](https://github.com/Yonaba/) for updated French translation.

### Improvements
  - Added support for nginx debugging (Mobdebug 0.564).
  - Added support for custom debugger initializer (global or interpreter-based).
  - Added line mapping support for debugging Lua-based languages (e.g. moonscript).
  - Added support to force local execution in console by prepending `!` (#326).
  - Added setting proper `arg[0]` value during debugging (fixes #329).
  - Added double click navigation in the Output window for unnamed files.
  - Added centering of line after double click in the Output window.
  - Added `editor.wrapindentmode` and `editor.wrapstartindent` settings.
  - Added a workaround for focus switching between controls on OSX (#89, #327).
  - Added assertion to ensure inserted editor is not in the notebook already.
  - Added `format.apptitle` option to format IDE title (thanks to @sclark39).
  - Added restoring cursor position after sorting/re-indenting.
  - Added `onEditorUserlistSelection` event for userlist selection (#166).
  - Added `onEditorAction` event for cut/copy/paste actions (#166).
  - Added package `GetEditorWithFocus` method (#166).
  - Added `editor.extradescent` option for line spacing (#305).
  - Added centering of line on page after re-loading file with a known position.
  - Added re-indentation of selected fragment or entire file (closes #324).
  - Added sorting of the entire file if nothing is selected.
  - Added `Edit | Source` sub-menu.
  - Added centering line on page after bookmark navigation.
  - Added `GetProjectTree`, `GetWatch`, and `GetStack` package calls (#166).
  - Added bookmark-toggle toolbar icon (#233).
  - Disabled message on failure to read symlinked folder content on Windows.
  - Disabled breakpoint toggling when editor is not in focus.
  - Disabled changing toolbar color with `auxwindow` as it only works for the dropdown.
  - Increase font size for code fragments in markup (#305).
  - glslc: change domain detection to be compatible with file.comp.glsl and file.tese
  - Removed checks for specific errors in Local/Remote console.
  - Removed focus handling workaround for editor tab changes (#89, #327).
  - Renamed `menuformatrecentprojects` to `format.menurecentprojects` (#305).
  - Removed handling of project dropdown in menu as it's no longer needed (#305).
  - Reorganized menu shortcut conflict handling (#233).
  - simplified glslc usage (compile and link based on file extensions)
  - treat unreal shaders as hlsl
  - Updated auto-complete logic to use configured spec separators.
  - Updated logic for populating placeholders in dropdown menus.
  - Updated french translation (thanks to @Yonaba)
  - Updated menu items to stay enabled only when appropriate object has focus.
  - Updated indentation logic for if/elseif/while/for split into 2+ lines (#324).
  - Updated indentation logic to ignore comments (#324).
  - Updated README with supported engines and installation instructions.
  - Updated breakpoint-toggle toolbar icon to better match other icons (#305).
  - Updated bookmark navigation to wrap around (#233).
  - Updating sorting to keep original line endings.
  - Upgraded metalua to v0.7.2.

### Fixes
  - Fixed setting control focus when the main frame is hidden.
  - Fixed loading packages with dashes in filenames (fixes #330).
  - Fixed toolbar to stay shown after failure to start debugging.
  - Fixed focus on the editor after closing a dialog on OSX (fixes #328).
  - Fixed crash on OSX when changing focus while the app is being closed (#327).
  - Fixed some toolbar buttons being enabled with no editor tab open.
  - Fixed toolbar stealing focus after closing floating panels and dropdowns (#327).
  - Fixed restoring control focus when the app gets focus on OSX (fixes #327).
  - Fixed activating editor when starting the app on OSX (#327).
  - Fixed auto-complete to not offer the word the cursor is on.
  - Fixed hiding auto-complete when the only option matches what's typed.
  - Fixed an error when all editor tabs are closed.
  - Fixed replace-in-files when saving backup copy is turned off.
  - Fixed re-indenting of anonymous functions in tables (#324).
  - Fixed `F2` shortcut not working in file tree and watch panel (#233).
  - Fixed debugger compatibility with Lua 5.2 (Mobdebug 0.561).

## v0.60 (May 11 2014)

### Highlights
  - Added support for switching breakpoints at run-time.
  - Added bookmark handling.
  - Added `Detach process` command to stop debugging and continue process.
  - Added detaching debugger server.
  - Added showing/hiding toolbar and status bar.
  - Simplified user interface and updated application icons.
  - Updated love2d API for v0.9.1.
  - Updated Moai API for v1.5.
  - Added `outputshell.usewrap` to set Output wrapping; on by default.
  - Added `editor.wrapflags` to configure line wrapping indicators.
  - Added `editor.foldflags`; set default to draw one line when folded.
  - Added `editor.foldtype` with box, cirle, arrow, and plus types.
  - Added `editor.extraascent` option to add line spacing.

### Special thanks
  - To [bartoleo](https://github.com/bartoleo) for italian translation update.
  - To [riidom](https://github.com/riidom) for german translation update.
  - To [sclark39](https://github.com/sclark39) for Copy Full Path implementation.
  - To [DanielSWolf](https://github.com/DanielSWolf) for Moai API update for v1.5.
  - To [madmaxoft](https://github.com/madmaxoft) for AnalyzeString patch.
  - To [crumblingstatue](https://github.com/crumblingstatue) for Zoom update.
  - To [SiENcE](https://github.com/SiENcE) for notepad++ colorscheme update.

### Improvements
  - Added new italian translations (thanks to @bartoleo)
  - Added Russian translation for new messages (#70).
  - Adding Copy Full Path to editor tabs, and a Clear Output Window option to the Output tab (thanks to @sclark39)
  - Added support for packages in config files (#166).
  - Added formatting for Recent Projects menu (#305).
  - Added `Detach process` command to stop debugging and continue process.
  - Added re/docking of Watch/Stack notebooks on tab background doubleclick (#305).
  - Added bookmark handling (closes #233).
  - Added `Clear items` to the Recent Files menu (ref #305).
  - Added recent files dropdown to the toolbar (ref #305).
  - Added applying new UI settings after upgrade (ref #305).
  - Added toolbar button dropdown with recent projects (ref #305).
  - Added `Choose Project Directory` to the toolbar (ref #305).
  - Added floating/docking of notebooks on tab background doubleclick (ref #305).
  - Added Recent Project menu refresh after switching projects (ref #305).
  - Added setting project directory by renaming the filetree root element (#305).
  - Added filetree popup menu with the list of projects (ref #305).
  - Added 'Recent Projects' menu (ref #305).
  - Added package `GetLaunchedProcess` call (ref #166).
  - Added `IsRunning` and `IsConnected` API calls for the debugger (ref #166).
  - Added `editor.wrapflags` to configure line wrapping indicators (ref #305).
  - Added explicit sorting of files in the filetree.
  - Added showing/hiding of the status bar (ref #305).
  - Added auto-showing toolbar when debugging starts (ref #305).
  - Added showing/hiding of the toolbar (ref #305).
  - Added `outputshell.usewrap` to set Output wrapping; on by default (ref #305).
  - Added `editor.foldflags`; set default to draw one line when folded (ref #305).
  - Added `editor.extraascent` option to add line spacing (ref #305).
  - Added explicit conversion to number for numeric settings.
  - Added `editor.foldtype` with box, cirle, arrow, and plus types (ref #305).
  - Added opening a new tab on double click on tab background (ref #305).
  - Added ActivateItem method to the filetree API (ref #166).
  - Added onFiletree* package events (ref #166).
  - Added setting margin mask to allow for different margin order.
  - Added support for switching breakpoints at run-time (closes #288).
  - Added stopping debugging when debugger server is detached/stopped.
  - Added opening file on one-click in icon/padding area in the filetree.
  - Added AnalyzeString function (thanks to @madmaxoft).
  - Added zooming for Output/Console windows (ref #290).
  - Added IDs for Zoom menu items (ref #290).
  - Add zoom actions with appropriate keyboard shortcuts to View menu (thanks to @crumblingstatue)
  - Added detaching debugger server.
  - Added skipping reporting for known globals in static analysis (closes #286).
  - Added support for running zbstudio script from any folder on OSX.
  - Adjusted `code` color in the comment markup for better visibility (#305).
  - Changed order of stopping debugger and saving settings (ref #305).
  - Cleaned unused variables and functions based on static analysis.
  - Disallowed closing Output/Console/Project tabs (fixes #310).
  - Disabled current project on the recent projects list (ref #305).
  - Disable function call indicator by default to reduce clutter (ref #305).
  - Disabled startng multiple find-in-files searches.
  - Disabled editing/dragging of the project directory in the filetree.
  - Enabled editor width auto-adjustment when wrapping is off.
  - Enable retina support (`hidpi=true`) by default on OSX (#305).
  - Increased default font size in the editor (ref #305).
  - Increased wait time for Gideros player to start for more reliable launching.
  - Made fold and marker margins wider (ref #305).
  - Made jump-to-line in the Output window to work faster and more reliably.
  - Moved `Project Directory` menu item lower to not activate on OSX (ref #305).
  - Moved code to populate `wx` and `wxstc` descriptions to API files.
  - Rearranged global functions in lua spec for simpler grouping (ref #79).
  - Reduced sash (border between subsections) in all notebooks (ref #305).
  - Reduced the line number margin width and default font size (ref #305).
  - Refactored editor config references.
  - Removed `Clear Dynamic Words` menu as it's rarely used.
  - Removed the gripper on the toolbar (ref #305).
  - Removed project selection dropdown from the filetree (ref #305).
  - Removed paragraph conversion from love2d API conversion script (ref #247).
  - Removed border around Output/Console panels (ref #305).
  - Removed deprecated `startfile` interpreter option.
  - Removed explicit margin numbers to make configuraton simpler.
  - Removed border around editor components.
  - Reordered markers to keep the curent line marker on top (#305).
  - Reorganized and updated configuration examples.
  - Set def linenumber font size as one smaller than editor font size (ref #305).
  - Switched to plain background for the toolbar (ref #305).
  - Switched to AuiToolBar as it provides buttons with dropdowns (ref #305).
  - Upgraded Mobdebug (0.56).
  - Upgraded debugger (mobdebug 0.553) to fix an issue with STEP command.
  - Upgraded copas to the current version (v1.2.1).
  - Updated default fonts for Windows and Linux for better looking ones (#305).
  - Update de.lua (thanks to @riidom)
  - Updated language files with new messages (#70).
  - Updated copyright messages.
  - Updated `Go To Line` menu item and its translations.
  - Updated build scripts with a fix for a wxlua compilation issue (#260).
  - Updated build prerequisites Linux install script.
  - Updated default indicator color to more neutral one (#305).
  - Updated OSX build script to use 10.7 SDK with 10.6 min-version (#260).
  - Updated Mobdebug (0.555) to add support for `pause` debugger call.
  - Updated lua interpreter to remove caching of executable path.
  - Updated resetting pid only after completing non-debbugged process.
  - Updated shortcut for Recent File navigation (ref #305).
  - Updated application icons (ref #305).
  - Updated stack/watch panel captions to be invisible (ref #305).
  - Updated interpreters to check `ProgramFiles` env variable on Windows.
  - Updated panel captions to be invisible (rev #305).
  - Updated 'window unhide' logic (Windows only) to be called less frequently.
  - Updated love2d interpreter to not hide the application window.
  - Updated file sorting to be case-insensitive on all platforms.
  - Updated filetree menu to use 'Edit Project Directory' on root element (#305).
  - Updated love2d API to fix typos in descriptions (ref #247).
  - Updated love2d API for v0.9.1 (ref #247).
  - Updated love2d API conversion script to handle top-level functions (ref #247).
  - Updated `PackageUnRegister` call to return the package on success (ref #166).
  - Updated fold/wrap flag handling to work with wxwidgets 2.8 (ref #305).
  - Updated breakpoint/currentline markers for less contrast colors (ref #305).
  - Updated default folding to use lighter colors (ref #305).
  - Updated default colors to have less contrast (ref #305).
  - Updated Open file dialog to use current file or project location (closes #303).
  - Updated Moai API for v1.5 (thanks to @DanielSWolf).
  - Updated `autoanalyzer` option to more common spelling (analizer -> analyzer).
  - Updated auto-complete to show in IDLE event for smoother processing.
  - -minor color changes to notepad++ colorscheme (thanks to @SiENcE).

### Incompatibilities
  - Added opening a new tab on double click on tab background.
  - Added re/docking of Watch/Stack notebooks on tab background doubleclick.
  - Enabled retina support (`hidpi=true`) by default on OSX.
  - Removed deprecated `startfile` interpreter option; use `startwith` option instead.
  - Updated file sorting to be case-insensitive on all platforms.
  - Updated `autoanalyzer` option to more common spelling (analizer -> analyzer).
  - wxwidgets 2.8 is no longer supported (wxwidgets 2.9.5+ required).

### Fixes
  - Fixed Corona interpreter to clean debugger in `plugin` folder (Win).
  - Fixed file tree activation of a deleted file.
  - Fixed switching to full screen and restoring status bar on OSX (ref #305).
  - Fixed right-click handling in filetree on OSX broken by 3709f61f (ref #166).
  - Fixed usage of `self` in one of package API calls (ref #166).
  - Fixed find dialog to stay on top after search directory selection on OSX.
  - Fixed search result navigation after clicking beyond the end of line.
  - Fixed an issue with running processes not terminated when closing IDE.
  - Fixed an error after manual canceling Find-in-files dialog.
  - Fixed an issue with deleting column-based selection (fixes #300).
  - Fixed an error in variable indicator processing.
  - Fixed looping when `valuetype` creates self-reference in APIs (ref #297).
  - Fixed `elseif` auto-indentation (fixes #294).
  - Fixed focus for Find field in the find dialog on some instances of OSX.

## v0.50 (Mar 10 2014)

### Highlights
  - Fixed opening files and launching on OSX 10.6.x and 10.9.1+.
  - Improved CPU utilization when idle on OSX.
  - Added handling of command-line parameters.
  - Implemented various auto-complete and tooltip improvements.
  - Updated Love2d API for 0.9.0.
  - Updated Corona API auto-complete/description to match v2014.2189 (G2.0).
  - Updated Marmalade Quick API for v7.2.
  - Updated French, German, Italian, and Russian translations.

### Special thanks
  - To [Asmageddon](https://github.com/Asmageddon) for fixed launching zbstudio from folders with spaces.
  - To [Christoph Kubisch](https://github.com/pixeljetstream) for various luxinia2 fixes.
  - To [Yonaba](https://github.com/Yonaba/) for updated French translation.
  - To [riidom](https://github.com/riidom/) for updated German translation.
  - To [bartoleo](https://github.com/bartoleo/) for updated Italian translations.

### Improvements
  - Added explicit focus for Find field in the find dialog on OSX.
  - Added version dependency check for loaded plugins.
  - Added `auxwindow` attribute to style auxiliary windows.
  - Added sha2 library to provide sha256 hashing.
  - Added package GetRootPath/GetPackagePath calls (ref #166).
  - Added package FindMenuItem API call (ref #166).
  - Added API call to analyze one file.
  - Added restoring markers after external modification and file reload.
  - Added displaying number of selected characters and instances (closes #274).
  - Added using safe load for external data instead of loadstring.
  - Added check for editor state during Edit menu display (ref #70).
  - added italian translations; thanks to [bartoleo](https://github.com/bartoleo/).
  - Added Russian translation for new items in the main menu (ref #70).
  - Added package GetApp method (ref #166).
  - Added package GetDebugger API call (ref #166).
  - Added setting project directory passed as a parameter (second instance).
  - Added Shift+Zoom to zoom all editors (closes #269).
  - Added `alpha` setting for sel/seladd/caretlinebg styles.
  - Added package GetToolBar API call (ref #166).
  - Added `seladd` setting for styling additional selections.
  - Added `Select and Find Next/Prev` (closes #268).
  - Added showing search dialog for Quick Find on first search (closes #265).
  - Added `nomousezoom` option for Console/Output windows (closes #266).
  - Added error reporting when debugger server fails to start (closes #263).
  - Added support for command line parameters for GSL-shell (ref #251).
  - Added support for editor shortcuts and included standard OSX ones (closes #252).
  - Added auto-complete for metamethods (closes #256).
  - Added Minimize shortcut on OSX (closes #254).
  - Added handling of command line parameters for love2d (ref #251).
  - Added handling of command line parameters (closes #251).
  - Added calling of end callback for detached processes.
  - Added skipping compile check for non-lua files in scratchpad.
  - Added handling of (optional) BOM in UTF-8 encoded files (closes #246).
  - Added hint about removing backslash for invalid escape sequences.
  - Adjusted tooltip position and content to always fit on the screen.
  - allow tool exe paths to be set in config prior load
  - Changed the order of applying styles to apply the main style last.
  - Disabled singleinstance check by default on OSX (ref #204).
  - Disable debugging termination when stack trace received from remote process.
  - glsl: added imageSize to spec and api
  - luxinia2 define some global vars if debugger is present
  - luxinia2 support 32 and 64 bit runtime
  - luxinia2: new setup, added support for debugging with main.lua and rudimentary scratchpad functionality
  - Reduced the number of inactivity checks and timer calls (ref #204).
  - Removed `calltipbg` attribute as it's replaced by `calltip.bg`.
  - Removed unused files from metalua.
  - Removed paragraph-to-newline conversion for API tooltips.
  - Resolved conflict for Opt+Left (ref #252 and #203).
  - Removed jumping to the current line after compilation errors.
  - Switched to using temp files instead of -e option for debugging (ref #251).
  - shader tools: allow relative directories for binaries
  - shader specs: add isfncall definition to allow indication style
  - Updated AddConfig/RemoveConfig to refresh styles after changes (ref #166).
  - Updated Marmalade Quick API for v7.2.
  - Updated Corona API for v2014.2189.
  - Updated scheme picker to apply styles to all windows.
  - Updated LfW interpreter to use project directory as current one (fixes #276).
  - Updated README.
  - Updated comment markup separators to apply markup in fewer cases.
  - Updated French translation; thanks to [Yonaba](https://github.com/Yonaba/).
  - Update de.lua; thanks to [riidom](https://github.com/riidom/).
  - Updated Linux scripts to remove custom libpng/zlib as it's fixed in wxwidgets.
  - Updated check for editor state during Edit menu display (ref #70).
  - Updated Corona API auto-complete/description to match v2013.2100 (ref #73).
  - Updated all language files with new messages (ref #70).
  - Updated messages for better translation (ref #70).
  - Updated love2d api with LineJoin and few other calls (ref #247).
  - Updated OSX build script for wxwidgets 3.x (ref #260).
  - Updated build script to compile wxwidgets 3.x on Windows (ref #260).
  - Updated love2d api with some missing calls (ref #247).
  - updated luxinia2 interpreter to reflect new luxinia2 structure
  - Updated Love2d API for 0.9.0. (closes #247).
  - Upgraded Mobdebug (0.551) to fix serialization of table/array indexes.
  - updates to shader apis (bugfix in GLSL atomic description)

### Incompatibilities
  - Updated LfW interpreter to use project directory as current one (fixes #276).
  - Removed `styles.calltipbg` as it is replaced by `styles.calltip.bg`.

### Fixes
  - Fixed shortcut menu generator to display default shortcuts.
  - Fixed removing focus from editor when IDE loses focus on OSX (ref #204).
  - Fixed hiding calltip and auto-complete when switching between tabs on OSX.
  - Fixed handling of getenv returning general message (Mobdebug v0.5511).
  - Fixed launching zbstudio from folders with spaces; thanks to @Asmageddon.
  - Fixed `calltip` attribute to use/enable proper style.
  - Fixed visibility of wrapped lines in console when going through history.
  - Fixed syntax issues in definitions of IDE tables.
  - Fixed an issue in metalua files when syntax error is reported.
  - Fixed arrow key handling in Local console (fixes #279).
  - Fixed removing temporary files in GSL-shell interpreter.
  - Fixed tooltip positioning for long messages.
  - Fixed current line in debugging after activation of files with wrapped lines.
  - Fixed spurious ESC after activation on Windows when modifiers are pressed.
  - Fixed skipping empty lines in tooltip formatting.
  - Fixed comment markup at the end of a file.
  - Fixed formatting calculations for tooltip to better fill the window.
  - Fixed stopping debugging when switching projects with the same interpreter.
  - Fixed auto-complete for classes with more than two levels.
  - Fixed removal of paragraph breaks in tooltips after interpreter switch.
  - Fixed API reloading that caused removal of paragraph breaks in tooltips.
  - Fixed translations for stock menu items on Ubuntu 13.10 (ref #70).
  - Fixed an issue with spec/tools/interpreters filters not working from config.
  - Fixed messages script to work with LuaJIT.
  - Fixed console output with multiple new lines at the end.
  - Fixed issues on OSX 10.6.x and 10.9.1+ caused by flat namespace (fix #270, fix #264).
  - Fixed an issue with `isfncall` spec property not being checked.
  - Fixed function localization in menu handlers.
  - Fixed default selection for search in case of multiple selections.
  - Fixed dependency of lfs/git dlls on lualib.dll.
  - Fixed an issue with activating proper tab after dragging.
  - Fixed displaying local console output with invalid unicode characters.
  - Fixed displaying script output with invalid unicode characters.
  - Fixed drawing artifacts on Windows when line wrapping disabled (fixes #250).
  - Fixed setting bom value for a new editor (fixes #258).
  - Fixed auto-complete for values returned by 'core' functions (ref #256).

## v0.40 (Dec 14 2013)

### Highlights
  - Added LuaDist integration.
  - Added live coding support for GSL-shell.
  - Added support for project settings.
  - Added filetree operations.
  - Added Busted interpreter.

### Special thanks
  - To Jayanth Acharya for SciTeLuaIDE color scheme.
  - To Mike Richards for adding edge handling and styles.
  - To [adamdmoss](https://github.com/adamdmoss) for Mobdebug API update.

### Improvements
  - Added live coding support for GSL-shell (closes #239).
  - Added support for product-specific links in the Help menu.
  - Added 'edge' style to the color schemes (ref #237).
  - Added ability to set 'edge' style properties individually (ref #237).
  - Add edge to styles
  - Add fold margin checker color to styles
  - Add edge line and fold margin checker color
  - Added changing directory when launching on Linux (closes #157).
  - Added setting PATH for LfW to allow loading of DLL dependencies.
  - Added logic to set architecture dynamically for luadist (ref #225).
  - Added luadist bootstrap dependencies for Linux (ref #225).
  - Added option to load luadist as a module (ref #225).
  - Added luadist bootstrap dependencies for OSX (ref #225).
  - Added proxy dll for Lua 5.2 (ref #225).
  - Added luadist bootstrap dependencies for Windows (ref #225).
  - Added package GetInterpreters method (ref #166, #225).
  - Added package AddConsoleAlias/RemoveConsoleAlias methods (ref #166, #225).
  - Added version property to the Lua interpreters.
  - Added new location for Marmalade Quick v7+ and s3e path logic (fixes #226).
  - Added directory creation (if needed) to file saving.
  - Added support for symlinks in the filetree (with recursion protection).
  - Added package AddConfig/RemoveConfig methods (ref #166).
  - Added package GetProject method (ref #166).
  - Added package onProjectPreLoad method (ref #166).
  - Added workaround for conflict with Scintilla shortcuts on Linux.
  - Added 'Open with Default Program' to file tree operations (ref #123).
  - Added toggling directory on Enter (ref #123).
  - Added 'Copy Full Path' to file tree operations (ref #123).
  - Added deleting file/directory to file tree operations (ref #123).
  - Added processing of packages from `$HOME/.zbstudio/packages` folder (#166).
  - Added 'New File' and 'New Directory' to file operations (ref #123).
  - Added error reporting for failed rename operations (ref #123).
  - Added re-opening editor tabs affected by directory move/rename (ref #123).
  - Added package FindDocumentsByPartialPath method (ref #166).
  - Added existing file overwrite confirmation when renaming (ref #123).
  - Added existing file overwrite confirmation when saving.
  - Added creating intermediate directories during file rename (ref #123).
  - Added in-place editing of file and folder names (ref #123).
  - Added refreshing editor tab after drag-n-drop operation (ref #123).
  - Added drag-n-drop operation to move files in the project tree (ref #123).
  - Added package AddMarker/RemoveMarker methods (ref #166).
  - Added package GetStatusBar method (ref #166).
  - Added package GetDocuments and document methods (ref #166).
  - Added `EscapeMagic` function to escape magic characters.
  - Added SciTeLuaIDE color scheme (thanks to Jayanth Acharya).
  - Changed glslc option to reflect new version
  - Disabled compilation check for scratchpad when `skipcompile` is set (ref #239).
  - Disabled output activation for messages redirected to Console (ref #225).
  - Disabled commenting for file types that don't specify line comments.
  - Moved restoring project before loading files (ref #107).
  - Reorganized loading configuration files (ref #107).
  - Removed 'file no longer exists' message after moving opened files (ref #123).
  - Removed some of the snippets as they are available as plugins.
  - Store os specific clibs path to make it available to plugins.
  - Tidy up estrela tools a bit (remove key strokes from cgc, remove luxinia res viewer, rename perforce files to get loaded again)
  - Updated README.
  - Updated samples with missing indicator constants (closes #243).
  - Updated OSX executables and added 'fake' proxy for lua-dist support (ref #225).
  - Updated handling of case-insensitive names during debugging on OSX (Mobdebug v0.545).
  - Updated package onEditorPreSave to be called on SaveAs events (ref #166).
  - Updated icon bundle to eliminate large icons.
  - Updated application icon to a bit brighter one on OSX (closes #196).
  - Updated build script on OSX to not require 10.6 SDK (closes #231).
  - Updated menu definitions for consistency.
  - Updated use of `unpack` for consistency and Lua 5.2 compatibility.
  - Updated 'Open with Default Program' on Windows to work with spaces in names (#123).
  - Updated cmake installation script to install to '/Applications' on OSX.
  - Updated OSX build script to revert wxwidgets commit to fix auto-complete crash.
  - Updated `Start debugging` hint to clarify.
  - Updated single-click toggle to allow rename/move directories (ref #123).
  - Updated normalization flags as some path parts were changed to dots.
  - Updated editor tab processing using FindDocument method.
  - Updated shortcut for Replace All to avoid conflict on OSX (fixes #220).
  - Updated `SetDocumentModified` to use current tab text.

### Fixes
  - Fixed values 'captured' by redirected 'print' and not collected (fixes #240).
  - Fixed typo in fold style definition (ref #237).
  - Fixed console output being limited in addition to stack result limit.
  - Fixed hang in auto-complete on expressions involving '...' (fixes #235).
  - Fixed auto-complete for string values (broken by 933aacc2).
  - Fixed crash when LUA_DEV environmental variable is not set (fixes #228).
  - Fixed cmake cache filename (ref #225).
  - Fixed incorrect UTF-8 sequence in UTF-8 validity check.
  - Fixed Un/Comment menu for Output/Console windows.
  - Fixed format of the file name reported after compilation errors.
  - Fixed jumping to compilation error (if any) after Run/Debug.
  - Fixed disabling 'Open with Default Program' on OSX (ref #123).
  - Fixed file tree update after changes on OSX (ref #123).
  - Fixed copying full path on OSX (ref #123).
  - Fixed 'Open with Default Program' for paths with spaces on Windows (ref #123).
  - Fixed folding issue (caused by `math.mod` not available in LuaJIT).
  - Fixed debugger marker calculations to avoid marker conflicts.
  - Fixed color references in marker config examples.
  - Fixed Step Over/Out to stay in the same coroutine; Mobdebug 0.543 (closes #217).
  - Fixed case sensitivity in matching of file name in error messages (fixes #216).
  - Fixed tab text after SaveAs and loading files into the same tab.

## v0.39 (Oct 06 2013)

### Highlights
  - Added Lua 5.2 support out of the box.
  - Added suggesting dynamic words as fields in auto-complete.
  - Added 'go to definition' (Ctrl/Cmd+Alt+Click) and 'jump to previous location' (Alt+Left).
  - Added abbreviation of project directories to keep unique parts visible.
  - Fixed breakpoints with Marmalade Quick.
  - Switched to using LuaJIT interpreter by default.
  - Upgraded Luasocket (3.0-rc1), copas, and coxpcall libraries.

### Special thanks
  - To Chow CheeWen for Chinese translation.
  - To [Enrique García](https://github.com/kikito) for fixing `fixutf8` function.
  - To [Riidom](https://github.com/Riidom) for German translation.
  - To [ardente](https://github.com/ardente) for user home patch for Windows and separating Lua 5.1 and 5.2 paths in user config.
  - To [Mika Attila](https://github.com/crumblingstatue) for code folding patch.
  - To [Tim Mensch](https://github.com/TimMensch) for auto-save, auto-reload, and debugger improvements.
  - To [Florian](https://github.com/SiENcE) for Notepad++ color scheme.
  - To [Michal Kottman](https://github.com/mkottman) for 'go to definition' and Alt+Left navigation patch.
  - To [Christoph Kubisch](https://github.com/CrazyButcher) for dx11 and glslc updates.
  - To [jpoag](https://github.com/jpoag) for improved activation during debugging on Windows.

### Improvements
  - Added setting project directory when passed as a parameter.
  - Added activation of windows with SDL_app class name (Moai support).
  - Added support for joining/splitting Watch/Stack with Output/Console tabs.
  - Added package GetSetting method (ref #166).
  - Added selected index to package onMenuEditorTab event (ref #166).
  - Added activation of windows with FREEGLUT class name (Moai support).
  - Added hiding console window for Corona (2013.8.28+) applications (Windows).
  - Added suggesting dynamic words as fields in auto-complete.
  - Added socket.connect for compatibility with socket.core <3.0 (fixes #208).
  - Added recalculating line number margin width after zooming (fixes #207).
  - Added margin constants and removed unused variables.
  - Added reporting of socket error for initial debugger calls (Mobdebug 0.5403).
  - Added error handling/reporting for `debugger.outputfilter`.
  - Added 'debug' option to OSX build script.
  - Added ability to modify exe path in base interpreter (ref #197).
  - Added package GetEditorNotebook method (ref #166).
  - Added 'molokai' color scheme (ref #200).
  - added hlsl spec and basic api (note: currently autocomplete doesn't work on object functions, need fix). also fixed cg syntax lexer settings
  - Added file activation for abbreviated file names in error messages.
  - Added abbreviation of project directories to keep unique parts visible.
  - Added `debugger.redirect` configuration option.
  - Added `editor.saveallonrun` configuration option.
  - Added package GetOutput method (ref #166).
  - Added package onAppLoad/onAppClose events (ref #166).
  - Added package onIdleOnce event (ref #166).
  - Added manifest to the Windows executable and re-signed.
  - Added Notepad++ color scheme (thanks to Florian/SiENcE; closes #193).
  - Added clearing document styles after saving file with a different extension.
  - Added workaround to avoid crash on OSX after `Close All Pages` (closes #190).
  - Added return type for string.* functions to assist in auto-complete (ref #189).
  - Added handling of string literals in type assignments (closes #189).
  - Added support for captures in regexp replacement (\1-\9).
  - Added ability to cancel FindInFiles search by closing search dialog (ref #162).
  - Added activating Output window before showing search results (ref #162).
  - Added support for packages from different platforms to co-exist (ref #166).
  - Added ability to save complex data in package settings (ref #166).
  - Added support for multiple inheritance in auto-complete (ref #101).
  - Added ability to add/remove API descriptions from plugins (ref #166).
  - Added package GetSettings/SetSettings methods (ref #166).
  - Added methods to save/restore package settings (ref #166).
  - Added ability to add/remove specs from plugins (ref #166).
  - Added ability to add/remove interpreters from plugins (ref #166).
  - Added wxlua patch for twoface compatibility.
  - Added `setfenv` for Lua 5.2 compatibility.
  - Added links to project page and documentation (closes #180).
  - Added German translation (thanks to Riidom; ref #70).
  - Added default value to package config (ref #176).
  - Added handling of ?51.dll and required DLLs for LuaForWindows interpreter.
  - Added plugin::GetConfig method (ref #166).
  - Added erasing current line in Console (ref #173).
  - Added search/completion in the local and remote console (closes #173).
  - Added package onAppFocus* events (ref #166; ref #172).
  - Added Chinese translation (thanks to Chow CheeWen; ref #70).
  - Added `editor.autoreload` to enable reload of updated files (ref #172).
  - Added creating (missing) folders when saving a file (fixes #171).
  - Added an example of styling individual keywords.
  - Added fold indication of a current block (ref #168).
  - Added reporting of process id for a conflicting process.
  - allow to define separate lua 5.1 and 5.2 paths in user config
  - Changed 'go to definition' to Ctrl/Cmd+Alt+Click (ref #203).
  - Changed `un/comment` to act from the beginning of the line for multi-line selection.
  - Disabled refreshing Watch/Stack windows when they get focus.
  - Disabled markup styling for specs without comment styles.
  - Disabled showing tooltip when auto-complete suggestions are shown.
  - Disabled error reporting after debugging has been terminated.
  - Disabled 'Fold' menu instead of removing when no folding is allowed (ref #169).
  - dx11 and glslc updates
  - Enabled editing watches with doubleclick or Enter.
  - Enable Ctrl+Click and Alt+Left navigation on local variables
  - Enabled support for xml/html folding.
  - Enabled path remapping for local debugging.
  - Enabled slower and more thorough static analysis (ref #149; ref #168).
  - Improved file/debugger activation on Windows (ref #199).
  - Improved IDE activation during debugging on Windows (closes #199); thanks to jpoag.
  - Improved logic to jump to file/line indicated in error messages.
  - Limited activation of code fragments to the beginning of debugging session.
  - Make code folding optional (thanks to [Mika Attila](https://github.com/crumblingstatue))
  - Moved 'Sort' menu to 'Edit'.
  - OpenGL 4.4 and ARB extensions added as well as NV_gpu_shader5 functions
  - Optimized handling of large tables in stack results.
  - Optimized line count calculation for dynamic words when text is deleted.
  - Optimized dynamic word processing for large files.
  - Reduced CPU usage while idle (ref #204, #206).
  - Renamed package onEditorPostSave event to onEditorSave for consistency (ref #166).
  - Removed comment from default spec as it forces undesired markup styling.
  - Removed auto-complete suggestion when it is already typed (ref #101).
  - Reorganized auto-complete handling; should fix #164.
  - Reorganized path separator handling to minimize use of global variables.
  - Reorganized API processing to allow loading API description from a plugin.
  - Replaced package onEditorActivated event with onEditorFocus* events (ref #166).
  - Set search in subdirectories as default in Find in Files dialog (ref #162).
  - Switched to using POSIX compatible regexp with '()' used for captures.
  - Updated LICENSE information.
  - Updated Windows build file for wxwidgets 3.0.
  - Updated support for MOAI coroutine debugging (Mobdebug 0.541).
  - Updated type assignment logic to remove spurious types.
  - Updated Windows build script to enable gdb debugging.
  - Updated OSX build script to not strip debug builds.
  - Updated Corona interpreter to handle failure to copy debugger to Resources/ folder.
  - Updated build scripts with proper INSTALL_PREFIX option.
  - Updated CFBundleIdentifier in plist files to allow references from OSX programs.
  - Updated un/comment to toggle selection as a group rather than line by line.
  - Updated `NewFile` to accept a file name.
  - Updated 'get hostname' logic to avoid using non-resolvable names (mostly on OSX).
  - Updated tooltip to use the same type inference as auto-complete (ref #101).
  - Updated Estrela reference in README.
  - Updated build script on Windows to enable debugging (ref #164).
  - Updated build script with a (temporary) fix for wxlua issue (mingw32).
  - updated glewgl api for OpenGL4.4 and removed non-core duplicate functions/enums
  - Updated static analyzer to report only first instance of 'unknown field'.
  - Updated filename/source code heuristic in the debugger (Mobdebug 0.5362).
  - Updated `SaveAll` to allow saving (only) files with filenames (ref #172).
  - Upgraded copas and coxpcall libraries (closes #144).
  - windows: adopt native user home (thanks to [ardente](https://github.com/ardente))

### Fixes
  - Fixed Lua 5.2 crash on OSX (added -O1).
  - Fixed onInterpreterLoad to only be called when interpreter changes.
  - fix the fixutf8 function (thanks to Enrique García).
  - Fixed handling of source code fragments in the Stack view.
  - Fixed Watch/Stack windows to refresh when shown.
  - Fixed incorrect editor tab acted upon in split notebook situations.
  - Fixed auto-complete suggestions for indentifiers matching partial function names.
  - Fixed hiding launched windows when running/debugging (Windows).
  - Fixed showing known functions in auto-complete.
  - Fixed showing output with invalid UTF8 characters in Stack and Console windows.
  - Fixed debugging on/off handling in 'main' thread for LuaJIT (MobDebug 0.5402).
  - Fixed having duplicate tabs after SaveAs with existing file name.
  - Fixed showing redirected 'print' messages after debugging is terminated.
  - Fixed using default interpreter when no interpreter is selected.
  - Fixed stepping through blocks with undefined variables when 'strict' is in effect (upgraded Mobdebug to 0.5401).
  - Fixed loading of files with incorrect UTF-8 encoding and control characters (fixes #198).
  - Fixed package sample to take into account new documents.
  - Fixed crash on OSX after opening 'application' in 'Open File' dialog.
  - Fixed windows resource file to properly reference the manifest.
  - Fixed missing default api for files with unknown extensions.
  - Fix spurious replacement after 'search, clear selection, replace' actions.
  - Fixed using auto-complete with multiple selections (fixes #188).
  - Fixed looping in auto-complete with array references (ref #143).
  - Fixed showing auto-complete after comma.
  - Fixed 'cannot get official hostname' message on low privilege accounts (fixes #183).
  - Fixed displaying variable instances when code has invalid blocks (fixes #182).
  - Fixed tooltip to ignore string parameters (ref #101).
  - Fixed tooltip display between empty brackets (ref #101).
  - Fixed indentation after lines with brackets in strings.
  - Fixed indentation after lines with anonymous functions.
  - Fixed indicator showing at the end of not terminated long comment.
  - Fixed an issue with LUA_DEV including files instead of directories.
  - Fixed project switching to close all files when switching to a subdirectory.
  - Fixed saving projects that do not have any open files.
  - Fixed debugger to accept filenames without '@'; thanks to Tim Mensch (closes #174).
  - Fixed sorting when the sorted fragment ends with a newline.

## v0.38 (Jun 21 2013)

### Highlights
  - Added source code debugging (to support LuaJava and other engines).
  - Added scope-aware global/local/masked/masking variable highlighting.
  - Added 'Go To Definition' and 'Rename All Instances'.
  - Added package/plugin API.
  - Added Retina display support (can be enabled with `hidpi` option).
  - Improved auto-complete API with inheritance and table index support.

### Special thanks
  - To George Pimm for line of code navigation in the Stack Window.
  - To Fringale for updated French translation.
  - To Tom Burgel for LuaForWindows interpreter.

### Improvements
  - Added sorting of file lists on Linux (used in the filetree and file search).
  - Added LuaForWindows interpreter (thanks to Tom Burgel).
  - Added package onEditorCharAdded/onEditorKeyDown events (ref #166).
  - Added support for changing the Corona simulator skin (closes #151).
  - Added inheritance support for auto-complete API.
  - Added package onEditor* events (closes #166).
  - Added package onInterpreterLoad/onInterpreterClose events (ref #166).
  - Added package onProjectLoad/onProjectClose events (ref #166).
  - Added package onMenu* events (ref #166).
  - Added package onRegister/onUnRegister events (ref #166).
  - Added 'Show Location' to the Project/Filetree menu.
  - Added `hidpi` option to enable HiDPI/Retina display support (closes #160).
  - Added breakpoint support for unnamed code fragments.
  - Added support for debugging (stepping through) unnamed code fragments.
  - Added LuaSec to win32 build script.
  - Added package/plugin processing.
  - Added support for 'silent' execution of shell commands in markup.
  - Added `Find Next/Previous` over selected variable instances (ref #163).
  - Added `debugger.allowediting` option to allow editing while debugging.
  - Added skiping binary files during file search (ref #162).
  - Added yield to update search results during file search (ref #162).
  - Added showing default extensions in the file search (ref #162).
  - Added support for multiple file extensions in the file search (ref #162).
  - Added saving folder to search files in (ref #162).
  - Added selecting all instances with a double-click on a variable.
  - Added `autoanalizer` option for dynamic static analysis.
  - Added 'Go To Definition' and 'Rename All Instances'.
  - Added initial support for indicating local/global variables.
  - Added showing tooltip in any position over a term and showing 'values' (ref #101).
  - Added disabling tooltip when context menu is shown.
  - Added 'fixing' path returned by wxDirDialog; may be incorrect in 2.9.x.
  - Added constant initialization missing on ArchLinux with wxlua 2.8.12.2 (fixes #155; ref #128).
  - Added support for table valuetypes in auto-complete for `foo[index]:` (ref #101).
  - Added navigation to the line of code in the Stack Window (thanks to George Pimm; closes #134).
  - Added `Show Location` to the editor tab menu.
  - Added support for absolute filenames in Markdown links.
  - Allowed tab width and indentation to be set independently.
  - Allowed closing editor tabs while debugger is running.
  - Disabled following symlinks during directory scanning to avoid infinite loops.
  - Disabled showing tooltip when the app is in the background (fixes #158).
  - Disabled 'value' tooltip over variables that match known function names (ref #101).
  - Improved error reporting in interpreters on failures to copy the debugger.
  - Improved focus on the debugger when a breakpoint hits on OSX (fixes #141).
  - Removed sorting in the Stack view to keep the order of table elements.
  - Set default directory for Find in Files opened from a new file (#ref 162).
  - Updated configuration example for variable indicators.
  - Updated Stack view navigation to use clicked on instead of active item.
  - Updated Gideros API/auto-complete reference.
  - Updated markup to allow opening files from new buffers ('untitled').
  - Updated build scripts to use luasocket 2.0.3.
  - Updated linux build files to use latest zlib/libpng to fix png load on Gentoo.
  - Updated 'Find in Files' to start in the project folder by default.
  - Updated French translation with latest string changes (mostly for find/replace dialogs).
  - Updated Marmalade Quick auto-complete API to use class inheritance.
  - Updated Gideros auto-complete API to use class inheritance.
  - Upgraded Mobdebug to 0.534 for debugging of source code fragments.

### Fixes
  - Fixed looping in auto-complete when indexes are used (fixes #143).
  - Fixed possible duplicate paths in the filetree.
  - Fixed missing numerical keys in serialized tables (upgraded Mobdebug to 0.535).
  - Fixed styling of markup that can be affected by folded lines.
  - Fixed value selection with multiple active selections.
  - Fixed style compatibility with wxwidgets 2.8 (ref #128).
  - Fixed error reporting by (internal) file operations.
  - Fixed styling comments that start with markup symbols.
  - Fixed restoring a session with one of the files deleted on disk (fixes #161).
  - Fixed reporting variable instances for comment/string fragments.
  - Fixed 'Rename Instances' to always reset previous selection.
  - Fixed auto-complete error for '%dddd' strings (fixes #156).
  - Fixed an issue with showing filenames that include '"?*:<>' on OSX/Linux.
  - Fixed current line marker being shown using 'Run as Scratchpad' with 'runonstart' option.
  - Fixed looping in auto-complete (fixes #151).
  - Fixed incorrect localization that led to an error in 'Save' from tab menu.

## v0.37 (May 09 2013)

### Highlights
  - Added Marmalade Quick auto-complete support and API documentation.
  - Added full Marmalade Quick debugging support (requires Quick 1.1+).
  - Improved Find/Replace behavior and functionality.
  - Added Recent File history navigation.
  - Added Preferences menu to simplify access to system/user settings.

### Special thanks
  - To Samuel Dionne-Riel for wxwidgets 2.8 compatibility updates.
  - To Mat Hopwood for assistance with Marmalade Quick integration.

### Improvements
  - Added Preferences menu to simplify access to system/user settings.
  - Added Russian translation for Find/Replace dialog and (ref #70).
  - Added Russian translation for the Preferences menu (ref #70).
  - Added 'shaking' Find/Replace window when text is not found (closes #146).
  - Added 'wlua' to the list of recognized Lua extensions.
  - Added disabling Recent Files menu if the list is empty.
  - Added TomorrowContrast color scheme (thanks to Sergey Lerg).
  - Added detaching a child process to avoid crash when exiting during debugging.
  - Added Recent File history navigation (closes #66).
  - Added Marmalade auto-complete support and API documentation.
  - Added processing of `runonstart` when using remote debugging (closes #138).
  - Added suggesting proper extension after 'Save/Save As' based on current spec.
  - Added translation setup for Find/Replace dialog (closes #133).
  - Added `nomousezoom` option to disable zoom with mouse wheel in the editor.
  - Added selecting text and Cmd-F shortcut in Find dialog on OSX (ref #127).
  - Improved file activation when debugging is started (closes #137).
  - Reduced the minimum size of the Output/Console panel.
  - Refactored Recent Files history to make it faster and simpler.
  - Refactored and optimized directory scanning when loading IDE files.
  - Separated settings for function dropdown and project tree fonts (fixes #148).
  - Updated documentation about default EOL on OSX (ref #102).
  - Updated highlighting in Watch windows to not use editor styles.
  - Updated documentation for user settings (ref #113, #55).
  - Updated Monokai color scheme to fix current line color.

### Incompatibilities
  - (dev) `FileSysGet` has been replaced with `FileSysGetRecursive` with a different signature.

### Fixes
  - Fixed hiding all panels when switching to Full Screen mode.
  - Fixed loading a non-existing file.
  - Fixed activation of non-existing files/folders in the Project tree.
  - Fixed search results for lines without newline.
  - Fixed Find/Replace in folders with Unicode names (fixes #147); improved performance.
  - Fixed Un/Comment commands executed for empty lines.
  - Fixed fold/unfold for files starting with block/comment.
  - Fixed history after activating non-existing file in Recent Files.
  - Fixed scrolling to restored cursor position on OSX (when `usewrap` = false).
  - Fixed Find/Replace dialog to take Enter on OSX (fixes #140).
  - Fixed 'breaking' after executing OUT command that never reaches the target level.
  - Fixed stopping at a breakpoint at the initial line when `startwith` option is specified.
  - Fixed activation of a file loaded into active tab.
  - Fixed incorrect tab activation on OSX after using 'Open File'.
  - Fixed editor activation when file is loaded into an existing tab.
  - Fixed an error after opening non-existing file from 'Recent Files'.
  - Fixed blocking on reading app output without processing other events.
  - Fixed an issue with duplicate lines shown in the editor.
  - Fixed 'Replace All' to take 'Wrap Around' into account (fixes #132).
  - Fixed off-by-one error in searching consecutive matches.
  - Fixed 'Quick Find' not working without current selection (fixes #131).
  - Fixed looping in auto-complete on mistyped class (fixes #130).
  - Fixed compatibility with wx2.8 (thanks to Samuel Dionne-Riel; closes #128).
  - Fixed replacement logic in Find/Replace that could replace selected fragment (ref #127).
  - Fixed an error caused by allowing multiple Search/Replace windows (fixes #127).

## v0.361 (Apr 12 2013)

### Improvements
  - Added handling of Ctrl-Home and Ctrl-End on OSX (ref #89).
  - Added line copy/cut for Ctrl-C/Ctrl-X with no selection.
  - Updated About screen to be more configurable and flexible.
  - Updated Russian translation (thanks to toiffel).

### Fixes
  - Fixed launch command for Corona debugging on Windows.
  - Fixed 'control' check on OSX that changed with wx2.9.2+ (ref #89).
  - Fixed wrong tab activated on OSX after using New file in some cases.
  - Fixed cursor not being visible in some cases after file is loaded (ref #116).

## v0.36 (Apr 08 2013)

### Highlights
  - Added 32bit and 64bit **Linux binaries**.
  - Enabled **full debugging for Corona on OSX**.
  - Improved **debugger performance**.
  - Improved **performance of tab and project switching**.
  - Added **multiple selection and multi-cursor editing**.
  - Made Stack and Watch windows dockable and toggleable.

### Special thanks
  - To toiffel for build improvements and continuous work on wxwidgets 2.9 and Linux support.
  - To Marcel van Herk for testing and feedback on Stack and Watch windows behavior.
  - To Leo Bartoloni for Italian translation update.
  - To Fringale for updated French translation.
  - To neomantra for adding cdata processing in the serializer.

### Improvements
  - Added handling of case-insensitive filenames on OSX.
  - Added cdata processing (thanks to neomantra).
  - Added universal binaries for luasocket on OSX to allow debugging of 64bit applications (for example, LuaJIT) on OSX.
  - Added update of Stack and Watch windows after 'Debugging suspended' message.
  - Added toggling for View menu items.
  - Added auto-show/hide Stack and Watch windows during debugging (closes #110).
  - Added ignoring `-psn...` parameter on OSX when reading file names from command line.
  - Added migration of configuration file on Windows (helps #89).
  - Added check for different spellings of the same folder in the project tree.
  - Added scripts to install build prerequisites on Linux (helps #89).
  - Added linux binaries with support for x86 and x64 (helps #89).
  - Added window list button to the notepad with editor tabs.
  - Added centering of current line during debugging.
  - Added multiple selection and multi-cursor editing (wx2.9.5+).
  - Added dll proxy to make LfW libraries to work with the IDE.
  - Disabled showing 'value' in auto-complete after 'a:' (helps #101).
  - Enabled full debugging for Corona on OSX.
  - Improved debugging performance.
  - Improved performance of tab switching and project tree population.
  - Improved handling of upvalues with __tostring method in the Stack window.
  - Increased default font size for OSX; set 'Monaco' as default font (helps #89).
  - Made stack and watch windows dockable (closes #103).
  - Optimized project switching and added notebook freezing where possible (ref #89).
  - Reduced flicker in the project tree when a file is opened (ref #89).
  - Removed binary libraries not currently used.
  - Set 'Courier New' as the default font on Linux (ref #89).
  - Switched to 'native' menu on OSX and added 24x24 icons required (helps #89).
  - Updated Italian translation (thanks to Leo Bartoloni)
  - Updated 'method' type in auto-complete to only allow a:b syntax (closes #101).
  - Updated language files (es, it, ru) with new messages (ref #70).
  - Updated French translation with latest string changes, fixed a few typos (thanks to Fringale).
  - Updated Stack and Watch window to not refresh when not visible.
  - Upgraded Mobdebug (0.5222) to add serialization with metamethods and notification on incomplete output (closes #109).
  - Updated error messages from loading configuration files.
  - Updated Linux binaries to use libpng 1.6 with wxwidgets (helps #89).
  - Updated Windows/OSX build files to only build components needed (helps #89).
  - Updated windows executable to show properly scaled icons in the Explorer.
  - Updated status bar to use no border around fields.
  - Updated large icons for "native" toolbar on OSX (helps #89).
  - Updated function call indicator to use round box with wxwidgets upgrade (helps #89).
  - Updated handling of markdown styles to make it more robust (fixes #59).
  - Updated README with Marmalade Quick support and Corona tutorial.

### Incompatibilities
  - Configuration file (.ini) location has changed on Windows. The current file will be copied to the new location.
  - The debugger now stops on the next executable line after `.start()` call.

### Fixes
  - Fixed activating files in the project tree on a case insensitive system.
  - Fixed the Stack view being partially hidden when the root item is too wide (ref #110).
  - Fixed left side of the project panel being hidden when a file is activated (fixes #122).
  - Fixed breakpoint not firing on the first executable line in debugging (helps #121).
  - Fixed terminating debugging of an empty script.
  - Fixed reporting of initial line during debugging.
  - Fixed editor tab activation after closing another tab on Linux (ref #89).
  - Fixed 'Show tooltip' shortcut not working on Linux (fixes #118; ref #89).
  - Fixed cursor position being incorrectly restored (fixes #116; ref #89).
  - Fixed a warning about empty project directory in local console.
  - Fixed an issue with Enter used to select an item in project dropdown (ref #89).
  - Fixed an issue with the Project tree when project and app directories are the same.
  - Fixed debugger output not being suppressed on Linux and using wlua.
  - Fixed a static analyzer issue with anonymous functions defined in expressions (fixes #3).

## v0.35 (Feb 10 2013)

### Highlights
  - Added support for **debugging Lua 5.2 scripts**.
  - Added support for **cross-platform remote debugging**.
  - Added support for starting Gideros **on-device debugging**.
  - Added support for live coding, script reloading, and coroutine debugging under LuaJIT.
  - Added **Marmalade Quick** support.
  - Added **live-coding for Corona** interpreter.
  - Added editor tab popup menu with 'Close All', 'Close Other', and other items.

### Special thanks
  - To Roland Yonaba and Fringale for updates to French translation.
  - To Fringale for enhanced line-endings handling.
  - To toiffel for build improvements, continuous work on wxwidgets 2.9 support, and several patches.
  - To Andy Bower for the stream of feedback on live coding and on-device debugging.

### Improvements
  - Added `debugger.runonstart` option to configure if debugging should run immediately after starting.
  - Added `editor.checkeol` option to configure checking for eol encoding in loaded files.
  - Added Marmalade Quick support.
  - Added support for starting Gideros on-device debugging.
  - Added requesting user attention when stopped during debugging.
  - Added example for `defaulteol` configuration option.
  - Added configuration option for compact folding (`editor.`).
  - Added support for cross-platform remote debugging.
  - Added support for script reloading and coroutine debugging under LuaJIT (MobDebug 0.514).
  - Added Russian translation for new messages.
  - Added handling of malformed UTF8 characters in files (fixes #97).
  - Added support for debugging Lua 5.2 scripts.
  - Added workaround for Moai require path issue (fixes #96; fixes #87).
  - Added editor tab popup menu with 'Close All', 'Close Other', and other items.
  - Added C/CPP specification file and a configuration example.
  - Added XCode-like key mapping.
  - Added removing of file: prefix and url decoding of filepaths (helps #89).
  - Added a workaround for returning incorrect project folder (helps #89).
  - Adjusted handling of filepath to work with relative and absolute paths (helps #89).
  - Enabled live-coding for Corona interpreter.
  - Improved line-endings handling (Fringale).
  - Improved reporting of stack and serialization run-time errors.
  - Updated Gideros interpreter to run debugging immediately after starting; Use `debugger.runonstart = false` to disable.
  - Updated Linux startup script to use online versions of wxlua packages (deb files).
  - Updated handling of file: prefix as it's different on Windows and OSX (helps #89).
  - Updated messages in the starter script.
  - Updated function call parsing to recognize "func{}" and "func''" syntax.
  - Updated os.exit() call in local console to exit gracefully.
  - Updated French translation with various fixes and tweaks (Fringale).
  - Updated French translation with newly added strings (Fringale).
  - Updated 'Close page' and its translations.
  - Updated configuration examples and documentation (helps #55).
  - Updated the size of the function list dropdown on Windows (helps #89).
  - Typos fixes, small changes in French translation (Roland Yonaba).

### Incompatibilities
  - Gideros debugging is changed to start immediately; use `debugger.runonstart = false` to disable.
  - Removed mosync support from the debugger into a separate module.
  - Added mixed end-of-line reporting; use `editor.checkeol = false` to disable.
  - Added reporting of malformed UTF-8.

### Fixes
  - Fixed a rare crash on OSX when closing IDE with an application running under debugger.
  - Fixed path handling for metalua to avoid conflicts with other modules that may include lexer.lua file.
  - Fixed executing commands in the Remote console immediately after `mobdebug.start()` (closes #100).
  - Fixed invalid escape sequence that fails under LuaJIT.
  - Fixed an issue with spec files when a separator (sep) is not specified.

## v0.34 (Dec 12 2012)

### Highlights
  - Added **internationalization** support (with Russian, Italian, Spanish, and French translations).
  - Added **key binding** configuration for menu and toolbar items.
  - Added **Corona SDK integration** with debugging and auto-complete.
  - Added **Moai scratchpad support**.
  - Added **color scheme support** with several schemes included.
  - Added **GSL-shell support**.
  - Added ability to pause and resume scratchpad.

### Special thanks
  - To Srdjan Markovic for Corona auto-complete support and Zenburn color scheme.
  - To Roland Yonaba for French translation.
  - To Leo Bartoloni for Italian translation.
  - To Inigo Sola for Spanish translation.
  - To toiffel for Russian translation and several patches.
  - To Fringale for spec and API files cleanup and update for Lua 5.2.
  - To Marcel van Herk for assistance with scratchpad break/resume functionality.

### Improvements
  - Added an option to specify the width of the calltip.
  - Added showing short descriptions in tooltip for functions without lib/package.
  - Added 'Project Directory' menu.
  - Added ability to pause scratchpad when the script is completed (closes #83).
  - Added ability to pause and resume scratchpad.
  - Added GSL-shell support (closes #72).
  - Added more color schemes (Solarized and Monokai).
  - Added customized yield function for debugging (MobDebug v0.508; closes #81).
  - Added proper hiding of current line marker during debugging (except when tracing).
  - Added Corona auto-complete support (thanks to Srdjan Markovic).
  - Added logic to show application windows without explicitly listing their class (closes #80); Windows only.
  - Added Moai scratchpad support.
  - Added missing constants to Moai API.
  - Added setting focus on the window when a file is loaded in the existing instance.
  - Added two more wxwindow window classes to the list of windows to show (Windows).
  - Added scheme picker script to test color schemes from the IDE.
  - Added Zenburn as a color scheme.
  - Added styling for markers and Output/Console windows.
  - Added Italian translation (thanks to Leo Bartoloni).
  - Added Spanish translation (thanks to Inigo Sola).
  - Added reporting of run-time errors from remote processes (helps #73).
  - Added 'tomorrow' color theme.
  - Added redirect of remote 'print' commands for Gideros applications.
  - Added check for 'main.lua' in Corona projects.
  - Added ability to suspend a running application even when there is no editor tab or file to activate.
  - Added serialization of remote 'print' results and an output filter for debugging (helps #73).
  - Added redirect of remote 'print' commands to the Output window in the IDE (helps #73).
  - Added Corona SDK support (closes #73).
  - Added French translation (thanks to Roland Yonaba).
  - Added (more) verbose output to debugger to assist in troubleshooting.
  - Added handling of LUA_DEV to make loading Lua for Windows libraries working out of the box (fixes #71).
  - Added internationalization support (closes #70).
  - Added notes about estrela being gone and compatibility.
  - Added multi-tab support for scratchpad.
  - Added documentation on accelerator/shortcut syntax.
  - Added key map to change key binding for menu and toolbar items from a config file (closes #64).
  - Added hiding IDE while closing and saving configuration.
  - Completed reorganization of front-end processing (closes #67 and #5).
  - Disabled editor autoactivation during debugging when tracing is on.
  - Disabled functions that are not available under Corona on OSX (helps #73).
  - Disabled showing auto-complete when the only option is already typed.
  - Disabled showing a calltip on mouse over when it's already active.
  - Extended list of default folders for interpreters where executables are searched for.
  - Finished Russian translation.
  - Limited auto-showing windows to Lua interpreter only (related to #80).
  - Removed window types from config as they are no longer needed to be listed.
  - Switched to showing short tooltips by default as some of the updated Lua API descriptions are very long.
  - Updated descriptions for io.* functions; moved file:* functions to a pseudo library (f); helps #84.
  - Updated LICENSE to add remdebug license information.
  - Updated tooltip to show shortened descriptions on mouse-over.
  - Updated spec and API files for Lua 5.2 (thanks to Fringale).
  - Updated MobDebug to v0.507 to fix serialization issues (closes #77).
  - Updated style processing to support styling of markup and allow dynamic switching of color schemes.
  - Updated Lua keyword definitions to improve grouping for styling (closes #79).
  - Updated love2d api to an updated version as of 11/1/2012 (fixes #78).

### Incompatibilities
  - The default port in the debugger has been changed from 8171 to 8172 to avoid conflicts with existing RemDebug implementations.

### Fixes
  - Fixed an issue with overlapping auto-complete suggestions.
  - Fixed auto-complete not working after closed brackets.
  - Fixed tooltip being shown when mouse moving outside of the editor area.
  - Fixed a font zooming bug with Ctrl+MouseWheel.
  - Fixed file marking in the project tree after opening a new file.
  - Fixed an issue with breakpoints not available after aborting tracing on Linux/OSX.
  - Fixed an issue with running scratchpad when entry points are configured.
  - Fixed Linux launcher to pass filename parameter to the IDE.
  - Fixed fold style to properly set background color.
  - Fixed an issue with a config file being loaded into the editor when specified in the command line.
  - Fixed an issue with markdown formatting not working after setting styles from a config file (fixes #74).

## v0.33 (Oct 22 2012)

### Highlights
  - Added **Linux support**.
  - Added **Moai auto-complete**.
  - Added **Gideros debugging, auto-complete, and live coding**.
  - Added **syntax aware indentation**.
  - Added **re/storing open files and interpreter** when switching project folders.

### Special thanks
  - To Andy Bower and Atilim Cetin for their assistance with Gideros integration and live coding.
  - To toiffel for Linux/OSX/Windows CMake-based launcher build.
  - To [Christoph Kubisch](https://github.com/CrazyButcher) for help with Estrela merge.

### Improvements
  - Added configuration option to specify hostname when the default one is not reachable (fixes #68).
  - Added search for Moai and Love2d executables in default locations on OSX and Windows.
  - Added handling of command line parameters on OSX and Linux; updated documentation.
  - Added auto-recovery to save/restore editor content (fixes #23).
  - Added syntax aware indentation.
  - Added re/storing open files and interpreter when switching project folders.
  - Added auto-activation of files requested during debugging.
  - Added editor.autoactivate parameter (false by default) to enable activation.
  - Added zbstudio.sh script to run on OSX/Linux; updated permissions (closes #15).
  - Added variable ratio for sliders in scratchpad.
  - Added Linux/OSX/Windows CMake-based launcher build (thanks to toiffel).
  - Added configuration parameter for the number of characters typed before displaying auto-complete suggestions for dynamic words.
  - Added proper closing of the application after Shutdown/Logoff events (fixes #57).
  - Added Moai auto-complete (closes #52).
  - Added hiding auto-complete suggestions on losing focus in the editor.
  - Added proper reporting of errors in the stack window.
  - Added wxlua.deb file and install script that pull and build all required dependencies on Linux (covers most of #15).
  - Added osx executables and build files.
  - Added disabling full screen mode when the last editor tab is closed.
  - Added proper reporting of errors in config files.
  - Added toggling folders in project pane by single click (fixes #41).
  - Added examples for configuring tabs and moai entry points.
  - Added reporting compilation success rate (fixes #39)
  - Added shortcuts for adding and removing watches.
  - Added highlighting rows with updated values in the Watch window.
  - Added 'Add Watch Expression' and 'Evaluate in Console' context menu items in the editor.
  - Added handling of canceling editing in adding a watch.
  - Added Gideros auto-complete and live coding support (closes #62).
  - Added Gideros integration on OSX; added search for gideros in default locations on Windows and OSX.
  - Added Gideros integration and debugging support.
  - Added debugging-related buttons to the toolbar.
  - Improved reporting of compilation and run-time errors when running as scratchpad.
  - Made debugger strict.lua and LuaJIT friendly (upgraded to MobDebug v0.502).
  - Updated configuration example to avoid using ide.spec that is not available (fixes #67).
  - Updated CMake build script to handle wildcards in the MANIFEST.
  - Updated configuring toolbar size to improve Linux compatibility.
  - Updated MobDebug to v0.497 to fix issues and improve performance.
  - Updated a warning message about single instance communication.
  - Updated cpath processing to allow Linux version to run side-by-side with Windows and Mac.
  - Updated licensing information.
  - Enabled scratchpad support in the debugger when interpreter is capable of providing it.
  - Disabled auto-complete in comments and strings.
  - Disabled toggling breakpoints while debugger is running (as they wouldn't be changed anyway).
  - Disabled 'not activated file for debugging' message when auto-activation is disabled.
  - Disabled tooltip when scratchpad is on (fixes #51).
  - Disabled showing calltip when the editor is not in focus.
  - Disabled showing calltip over markup in comments.
  - Disabled 'Run as Scratchpad' in the menu for those intepreters that don't support scratchpad.
  - Updated configuration examples to add editor settings and fix user.lua path.
  - Moved all Estrela features into a separate bundle that can be loaded using cfg/estrela.lua config.
  - Removed multiple file types offered in Save As dialog.

### Incompatibilities
  - Changed searching for user config in '$HOME/.zbstudio' from '$HOME/.zbs'.
  - Temporarily removed the ability to modify spec-related configuration parameters from configuration files.

### Fixes
  - Fixed opening a non-existing file from the Recent Files list.
  - Fixed Find/Replace dialog checkboxes that didn't react to clicks on OSX (fixes #63).
  - Fixed an auto-complete issue with mixed case dynamic words (fixes #60).
  - Fixed 'Trying to solve a NULL hostname' warning message.
  - Fixed a typo that prevented a corner case in autocomplete from working.
  - Fixed inconsistent error messages about various config files.
  - Fixed an issue with auto-complete when dot or colon is used (fixes #56).
  - Fixed an issue with debugging scripts started using absolute file path.
  - Fixed setting working directory for interpreters to the file path when the project directory is not set.
  - Fixed an issue with Backspace not closing auto-complete suggestions.
  - Fixed enabling items in the Edit menu (fixes #56).
  - Fixed function list in the toolbar on Mac (helps #14).
  - Fixed deleting of comment blocks with hidden markup (fixes #40).
  - Fixed an issue with function list when all editor tabs are closed.
  - Fixed multiple calltips shown on Linux (helps #15).
  - Fixed an issue with mouse cursor in scratchpad not properly updated on Linux (fixes #49; helps #15).
  - Fixed an issue with static analyzer that failes on function names like a.b.c (fixes #50).
  - Fixed disabling Paste menu on Linux when needed (fixes #46; helps #15).
  - Fixed an issue with context menu on Linux (fixes #47; helps #15).
  - Fixed debugger failure when debugging is initiated externally and there is an unsaved file in one of editor tabs.
  - Fixed stopping the debugger when an editor tab where debugging happens is closed.
  - Fixed enabling of several menu items with no editor tab (fixes #42).
  - Fixed an issue with loading stock icons on Linux.
  - Fixed Cut/Copy menu items to reflect proper status in the editor.
  - Fixed typo in the static analyzer output.
  - Resolved conflict between lua executable names on Windows and Mac.

## v0.32 (Sep 03 2012)

### Highlights
  - Added **Unicode support** for file encoding and file paths on Windows (fixes #30).
  - Added **Moai integration and debugging** (including debugging of Moai threads and callbacks).
  - Added refresh of Stack and Watch windows after executing a statement in remote shell.
  - Added **display of complex values** on multiple lines in shell with '='.
  - Added calltip on mouseover for functions during editing and for variables/expressions during debugging.
  - Added configuration options to set paths to lua and love2d executables.
  - Added support for **coroutine debugging** with stepping through coroutine.resume/.yield calls.
  - Updated wx.dll to wxlua 2.8.12.2 and wxwidgets 2.8.12.
  - Signed zbstudio app and executable to avoid issues with files not being saved without admin privileges and to remove warning about 'unknown publisher' on windows (fixes #25).
    
### Improvements
  - Added calltip on mouseover for functions during editing and for variables/expressions during debugging.
  - Added an IO filter to fix an issue with 0d0d0a line endings on Windows.
  - Added support for debugging moai callbacks (upgraded to mobdebug v0.489).
  - Added refresh of Stack and Watch windows to show updated values after executing a statement in remote shell.
  - Added display of complex values on multiple lines in shell with '='.
  - Added rockspec to the list of extensions for lua (fixes #37).
  - Added a check to avoid evaluating keywords in tooltip.
  - Added current interpreter to the status bar; adding closing debugger when the interpreter is changed.
  - Added aborting scratchpad processing when an interpreter can't start or report a fatal error.
  - Added support for unicode path files on Windows (fixes #30).
  - Added an option to set path to lua executable.
  - Added error handler to trap and display debugger errors.
  - Added search in PATH for love2d executable.
  - Added a workaround for GetExecutablePath() reporting 'wx.dll' instead of a proper exe name with wxlua 2.8.12.2 on Windows.
  - Added reporting of function name of the form a.b and a:b in static analysis (fixes #27).
  - Added ability for user to keep their settings file in their home directory.
  - Added per user settings file. Users can now move their settings file to ~/.zbs/user.lua.
  - Added ignoring Cmd-key combinations on Mac as this should be handled by wxwidgets, but is not (fixes #19).
  - Added support for coroutine debugging with stepping through coroutine.resume/.yield calls.
  - Changed reporting of program execution time from CPU time to user time.
  - Changed the call to unhide windows to the async version (ShowWindowAsync) to avoid blocking the IDE when the application doesn't respond.
  - Upgraded to wxlua 2.8.12.2 (wxwidgets 2.8.12; unicode version); added lua51.dll proxy (fixes #10 and #7).
  - Updated love2d interpreter to use the project folder to check for main.lua.
  - Updated test module to use stringified values for comparison.
  - Updated status bar style to make it consistent across platforms.
  - Removed .bak files from being replaced in when backup copies are saved.
  - Removed explicit path conversions and comparisons.
  - Refactored LUA_PATH/CPATH processing to set it for all interpreters.
  - Signed zbstudio app and executable to avoid issues with files not being saved without admin privileges and to remove warning about 'unknown publisher' on windows (fixes #25).

### Incompatibilities
  - Reassigned hotkeys in the Project menu to minimize conflicts on Mac (reassigned Shift-F12 and F11).

### Fixes
  - Fixed an issue with double click on analylsis results being out-of-sync when the editor switched to another file (fixes #38)
  - Fixed an issue with debugger not activating files with relative path information.
  - Fixed 'break' command to work after coming from debugger calls (like on()).
  - Fixed an issue with highlighting selected item in the project tree.
  - Fixed evaluation of foo:bar in tooltip (now evaluates as foo.bar).
  - Fixed debugger termination after internal errors.
  - Fixed activating current file in the project tree on Mac (closes #29).
  - Fixed running scripts with single quotes in path names.
  - Fixed an issue with Run/Debug commands when IDE path includes exclamation mark ('!').
  - Fixed an issue with the app not starting on those systems that don't have HOME environment variable; fixes #28.
  - Fixed an issue with showing/hiding GUI windows that was occasionally causing a runtime error when the window disappears before it is manipulated.
  - Fixed returning proper name for unsaved files in reporting compilation and static analysis results; moved default names to ide.config (fixes #26).
  - Fixed pasting text into the Find dialog and project path box on Mac (fixes #22).
  - Fixed handling of dashes in paths (upgraded to mobdebug 0.479).
  - Reorganized handling of automcomplete event (to use AddPendingEvent instead of PostEvent) to avoid runtime application error.

## v0.31 (Jul 14 2012)

### Highlights
  - Added **scratchpad support for love2d**.
  - Added tooltip to display variable/expression values during debugging.
  - Added **MacOS support**.

### Improvements
  - Added handling of balanced brackets in markup links.
  - Added unit test module.
  - Added reporting the number of traced lines during debugging.
  - Added setting of PATH and CPATH to find proper libs on windows and mac os platforms.
  - Added scratchpad support for love2d.
  - Added reset of 'modified' status to keep tab names and their config settings correct upon exit.
  - Added window title update and filetree refresh after SaveAs command.
  - Added tooltip to display variable/expression values during debugging.
  - Made 'View Stack Window' and 'View Watch Window' refresh window content if it's already shown.
  - Removed setting the editor font in the config as the default font is different on different platforms.
  - Removed extension from the template to match folders to make it more portable.
  - Reorganized handling of font configuration and added font config for filetree (with a different size default on MacOS).
  - Updated matching logic for function definitions to allow for a.b.c() definitions (fixes #17).

### Fixes
  - Fixed markup styling and file tree drawing on MacOS.
  - Fixed detecting executable name in commands with spaces.
  - Fixed incorrect folders reported in the file tree when no project directory is set and a file is open.
  - Fixed incorrect filename reported in compile errors when the file is not saved.
  - Fixed refresh of filetree on MacOS to get it displayed correctly when the app is started.
  - Fixed an error thrown when a window with debugging is closed before the application being debugged is terminated.
  - Fixed incorrect storing of settings for editor tabs with the same text (filename). This was causing only one tab displayed for multiple StyledText controls with interesting effects.
  - Fixed an issue with launching a process when its output is not redirected to the IDE (fixes #16). 
  - Fixed console to evaluate 'function a() ... end' without errors.
  - Fixed a compilation error caused by shebang in scripts.
  - Fixed an issue with love2d path with spaces.
  - Corrected resetting of project directory when it's already set and doesn't need to be changed.
  - Added checks around ShowFullScreen() calls to avoid failures on those systems that don't provide it (linux/GTK).
  - Added check for debugger calls to avoid errors when debugger is not loaded.
  - Updated matching of links to make them less greedy (to avoid capturing link terminators).
  - Upgraded deprecated constants and logic for compatibility with wxwidgets 2.9.x.
  - Reset project directory if the current one doesn't exist.
  - Removed styling of function calls and capturing definitions in strings and comments (fixed #18).
  - Removed setting focus to the Output window when output is processed as it interfered with Run as Scratchpad.

## v0.30 (Jun 27 2012)

### Highlights
  - Added **love2d support**.
  - Added auto complete for love2d API.
  - Added support for debugging processes running under LuaJIT.
  - Added display of **hierarchical data in Stack window**.
  - Added **pretty printing in Watch and Console** (local and remote) windows and handling of multiple results in Console.
  - Added **Stack window to display stack information** and local/upvalue values for each stack frame.
  - Added ability to **interact with scripts** by allowing text to be entered in the 'Output' window.

### Improvements
  - Added love2d support.
  - Added auto complete for love2d API.
  - Added support for debugging processes running under LuaJIT.
  - Added display of hierarchical data in Stack window.
  - Added execution time and updated messages in the Output window to be more consistent.
  - Added displaying 'nil' values in local console when no result is returned by an expression.
  - Added a check to refuse starting a new debugging session if there is one in progress already.
  - Added handling of tail calls in the Stack window.
  - Added pretty printing in Watch and Console (local and remote) windows and handling of multiple results in Console.
  - Added Stack window to display stack information and local/upvalue values for each stack frame.
  - Added ability to set font encoding in the config.
  - Added restoring cursor position when a modified file is reloaded in the editor.
  - Added ability to interact with scripts by allowing text to be entered in the 'Output' window.
  - Improved logic in love2d integration to distinguish Debug and Run commands (closes #13).
  - Improved reporting in static analysis for functions and global variables.
  - Updated menus to avoid conflicts with MacOS shortcuts.
  - Updated logic creating menubar to make it work correctly on MacOS with special Help/About items.
  - Updated path handling to better detect how the app is started and to avoid loading dlls on non-windows platforms.
  - Updated logic for detecting hostname (used in the debugger) to make sure it is resolvable.
  - Changed order of lualibs/ and bin/ directories in package.path and package.cpath to load included modules first.
  - Removed extensions from launch commands and updated display logic in the Output window.

### Fixes
  - Fixed aborting running/debugged programs on MacOS by adding MAKE_GROUP_LEADER option to wxExecute.
  - Fixed an issue in the logic for setting breakpoints, which ignored breakpoints in luxinia2 debug sessions.
  - Fixed logic in the local/remote console that returned incorrect error message on executing code like '%s':format(1).
  - Fixed IDs for Project menu items to allow them to be removed from the menu if needed.
  - Fixed an issue with remote application not terminating when IDE is closed while debugging is in progress.
  - Fixed refreshing a modified file when the editor is set to read-only mode.
  - Fixed saving/restoring configuration of 'Output'/'Console' tabs when IDE is closed while debugging is in progress.
  - Fixed removing variable name in Watch window after escaping editing.
  - Fixed #9 as it had incorrect logic in one of UTF filters.
  - Fixed edit menu shortcuts to work in the 'Output' window (when allowed).
  - Fixed reporting of processes that failed to start after 'Run' or 'Debug' commands.
  - Fixed executable path matching to work on systems that don't have file extensions.
  - Fixed #3 'unused parameter...' check not to fail on anonymous functions that are part of an expression.
  - Moved processing of `user.lua` to a later phase after tools and specs are already loaded to allow modification of IDE configuration from `user.lua`. Closes #5.
  - Added checks to prevent text modification in 'Output' and 'Console' windows. Fixes #8.
  - Disabled 'Run as Scratchpad' if there is no debugger registered capable of running it.
  - Disabled Stack and Watch updates when scratchpad is active as they interfere with application execution.

## v0.29 (May 31 2012)

### Highlights
  - Added **scratchpad** (running live) functionality.
  - Added **code analyzer** based on lua-inspect.
  - Updated **comment styling** to follow markdown syntax.

### Improvements
  - Added scratchpad (running live) functionality.
  - Added code analyzer based on lua-inspect.
  - Added Ctrl(-Shift)-TAB navigation between tabs in the editor.
  - Added navigation between editor tabs using Ctrl-PgUp and Ctrl-PgDn.
  - Added reporting of assignment to global variables in the code analyzer.
  - Added ability to turn external processes that connect to debugger into a scratchpad.
  - Added exit from full screen mode using ESC key.
  - Added reporting of compilation errors during debugging sessions.
  - Added handling of more errors in the shell to allow calculations like '(1+2)' to be executed correctly.
  - Added moving focus back to the notebook after unhiding/activating a wx window.
  - Added missing mime/code.dll and reorganized socket module files (socket.*) to load correctly with require.
  - Added stopping the debugger when a debugged program exits.
  - Added to static analysis reporting of unused parameters in functions.
  - Disabled warning in static analysis about unused 'self' in methods.
  - Removed 'error during pre-compilation' message from compile errors.
  - Updated comment styling to follow markdown syntax.

### Fixes
  - Fixed handling of scripts with comments in the remote shell.
  - Fixed an issue with Analyze process when the analyzed script has compilation errors.
  - Fixed an issue with scratchpad being on after Save dialog is canceled.
  - Fixed about screen.

## v0.28 (Mar 21 2012)

### Highlights
  - Added full screen mode.

### Improvements
  - Added option to activate output/console when Run/Debug/Compile commands are executed.
  - Added full screen mode.
  - Added killing a running process on IDE exit.
  - Added killing a running process with Shift-F12.
  - Disabled buffering of the output for scripts run from IDE.

### Fixes
  - Fixed 'Trace' command to continue working when a debugged file is not activated.
  - Fixed an issue with saving a file when no project directory is set.
  - Fixed missing semicolon in lualibs path; added path for debugger to search under lualibs.
  - Fixed an issue with a missing path separator, which prevented debugging from executing step commands in some cases.
  - Fixed missing slash on SaveAs by enforcing trailing slash for the project path.

## v0.27 (Feb 14 2012)

### Highlights
  - Added markup formatting in the comments.

### Improvements
  - Added markup formatting in the comments.
  - Added Debug and Run methods to simulate menu commands.
  - Added setting a project folder on initial start.
  - Added style processing for font name, font size, visibility and hotspot attributes.
  - Added setting the current project directory for the shell to allow 'require' commands to work with local modules.
  - Updated markup processing with run and debug commands, http link processing, and opening local files in a new window.
  - Enforced visibility for shell prompt.

### Fixes
  - Fixed activation of a correct tab when one of the editor tabs is closed.
  - Fixed an issue with file activation from a debugger.
  - Fixed the issue of ClosePage method being called with two different parameters.
  - Fixed the issue of the project dir being returned with two trailing slashes.
  - Fixed an issue with activating the currenly edited file in the file tree.
  - Wrapped DragAcceptFiles into a protected call to make it not fail on MacOS (compiled with wxwidgets 2.8.12).

## v0.26 (Jan 18 2012)
