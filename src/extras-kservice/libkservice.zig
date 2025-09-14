const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const ksycocatype_enums = @import("libksycocatype.zig").enums;
const std = @import("std");

/// https://api.kde.org/kservice.html
pub const kservice = struct {
    /// New constructs a new KService object.
    ///
    /// ``` name: []const u8, exec: []const u8, icon: []const u8 ```
    pub fn New(name: []const u8, exec: []const u8, icon: []const u8) QtC.KService {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const exec_str = qtc.libqt_string{
            .len = exec.len,
            .data = exec.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };

        return qtc.KService_new(name_str, exec_str, icon_str);
    }

    /// New2 constructs a new KService object.
    ///
    /// ``` fullpath: []const u8 ```
    pub fn New2(fullpath: []const u8) QtC.KService {
        const fullpath_str = qtc.libqt_string{
            .len = fullpath.len,
            .data = fullpath.ptr,
        };

        return qtc.KService_new2(fullpath_str);
    }

    /// New3 constructs a new KService object.
    ///
    /// ``` config: QtC.KDesktopFile ```
    pub fn New3(config: ?*anyopaque) QtC.KService {
        return qtc.KService_new3(@ptrCast(config));
    }

    /// New4 constructs a new KService object.
    ///
    /// ``` other: QtC.KService ```
    pub fn New4(other: ?*anyopaque) QtC.KService {
        return qtc.KService_new4(@ptrCast(other));
    }

    /// New5 constructs a new KService object.
    ///
    /// ``` config: QtC.KDesktopFile, entryPath: []const u8 ```
    pub fn New5(config: ?*anyopaque, entryPath: []const u8) QtC.KService {
        const entryPath_str = qtc.libqt_string{
            .len = entryPath.len,
            .data = entryPath.ptr,
        };

        return qtc.KService_new5(@ptrCast(config), entryPath_str);
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#isApplication)
    ///
    /// ``` self: QtC.KService ```
    pub fn IsApplication(self: ?*anyopaque) bool {
        return qtc.KService_IsApplication(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#exec)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn Exec(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_Exec(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#icon)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#terminal)
    ///
    /// ``` self: QtC.KService ```
    pub fn Terminal(self: ?*anyopaque) bool {
        return qtc.KService_Terminal(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#terminalOptions)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn TerminalOptions(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_TerminalOptions(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.TerminalOptions: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#runOnDiscreteGpu)
    ///
    /// ``` self: QtC.KService ```
    pub fn RunOnDiscreteGpu(self: ?*anyopaque) bool {
        return qtc.KService_RunOnDiscreteGpu(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#substituteUid)
    ///
    /// ``` self: QtC.KService ```
    pub fn SubstituteUid(self: ?*anyopaque) bool {
        return qtc.KService_SubstituteUid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#username)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn Username(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_Username(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Username: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#desktopEntryName)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn DesktopEntryName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_DesktopEntryName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.DesktopEntryName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#menuId)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn MenuId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_MenuId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.MenuId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#storageId)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn StorageId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_StorageId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.StorageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#workingDirectory)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn WorkingDirectory(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_WorkingDirectory(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#comment)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn Comment(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_Comment(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#genericName)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn GenericName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_GenericName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.GenericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#untranslatedGenericName)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn UntranslatedGenericName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_UntranslatedGenericName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.UntranslatedGenericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#untranslatedName)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn UntranslatedName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_UntranslatedName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.UntranslatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#keywords)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn Keywords(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KService_Keywords(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kservice.Keywords: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kservice.Keywords: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#categories)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn Categories(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KService_Categories(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kservice.Categories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kservice.Categories: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#mimeTypes)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KService_MimeTypes(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kservice.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kservice.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#schemeHandlers)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn SchemeHandlers(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KService_SchemeHandlers(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kservice.SchemeHandlers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kservice.SchemeHandlers: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#supportedProtocols)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn SupportedProtocols(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KService_SupportedProtocols(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kservice.SupportedProtocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kservice.SupportedProtocols: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#hasMimeType)
    ///
    /// ``` self: QtC.KService, mimeType: []const u8 ```
    pub fn HasMimeType(self: ?*anyopaque, mimeType: []const u8) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KService_HasMimeType(@ptrCast(self), mimeType_str);
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#actions)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn Actions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KServiceAction {
        const _arr: qtc.libqt_list = qtc.KService_Actions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KServiceAction, _arr.len) catch @panic("kservice.Actions: Memory allocation failed");
        const _data: [*]QtC.KServiceAction = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#allowMultipleFiles)
    ///
    /// ``` self: QtC.KService ```
    pub fn AllowMultipleFiles(self: ?*anyopaque) bool {
        return qtc.KService_AllowMultipleFiles(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#noDisplay)
    ///
    /// ``` self: QtC.KService ```
    pub fn NoDisplay(self: ?*anyopaque) bool {
        return qtc.KService_NoDisplay(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#showInCurrentDesktop)
    ///
    /// ``` self: QtC.KService ```
    pub fn ShowInCurrentDesktop(self: ?*anyopaque) bool {
        return qtc.KService_ShowInCurrentDesktop(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#showOnCurrentPlatform)
    ///
    /// ``` self: QtC.KService ```
    pub fn ShowOnCurrentPlatform(self: ?*anyopaque) bool {
        return qtc.KService_ShowOnCurrentPlatform(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#docPath)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn DocPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_DocPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.DocPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#locateLocal)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn LocateLocal(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_LocateLocal(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.LocateLocal: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#setMenuId)
    ///
    /// ``` self: QtC.KService, menuId: []const u8 ```
    pub fn SetMenuId(self: ?*anyopaque, menuId: []const u8) void {
        const menuId_str = qtc.libqt_string{
            .len = menuId.len,
            .data = menuId.ptr,
        };
        qtc.KService_SetMenuId(@ptrCast(self), menuId_str);
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#setTerminal)
    ///
    /// ``` self: QtC.KService, b: bool ```
    pub fn SetTerminal(self: ?*anyopaque, b: bool) void {
        qtc.KService_SetTerminal(@ptrCast(self), b);
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#setTerminalOptions)
    ///
    /// ``` self: QtC.KService, options: []const u8 ```
    pub fn SetTerminalOptions(self: ?*anyopaque, options: []const u8) void {
        const options_str = qtc.libqt_string{
            .len = options.len,
            .data = options.ptr,
        };
        qtc.KService_SetTerminalOptions(@ptrCast(self), options_str);
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#setExec)
    ///
    /// ``` self: QtC.KService, exec: []const u8 ```
    pub fn SetExec(self: ?*anyopaque, exec: []const u8) void {
        const exec_str = qtc.libqt_string{
            .len = exec.len,
            .data = exec.ptr,
        };
        qtc.KService_SetExec(@ptrCast(self), exec_str);
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#setWorkingDirectory)
    ///
    /// ``` self: QtC.KService, workingDir: []const u8 ```
    pub fn SetWorkingDirectory(self: ?*anyopaque, workingDir: []const u8) void {
        const workingDir_str = qtc.libqt_string{
            .len = workingDir.len,
            .data = workingDir.ptr,
        };
        qtc.KService_SetWorkingDirectory(@ptrCast(self), workingDir_str);
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#newServicePath)
    ///
    /// ``` showInMenu: bool, suggestedName: []const u8, allocator: std.mem.Allocator ```
    pub fn NewServicePath(showInMenu: bool, suggestedName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const suggestedName_str = qtc.libqt_string{
            .len = suggestedName.len,
            .data = suggestedName.ptr,
        };
        const _str = qtc.KService_NewServicePath(showInMenu, suggestedName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.NewServicePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#aliasFor)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn AliasFor(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KService_AliasFor(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.AliasFor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isType)
    ///
    /// ``` self: QtC.KService, t: ksycocatype_enums.KSycocaType ```
    pub fn IsType(self: ?*anyopaque, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self), @intCast(t));
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#sycocaType)
    ///
    /// ``` self: QtC.KService ```
    ///
    /// Returns: ``` ksycocatype_enums.KSycocaType ```
    pub fn SycocaType(self: ?*anyopaque) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self));
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#name)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSycocaEntry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#entryPath)
    ///
    /// ``` self: QtC.KService, allocator: std.mem.Allocator ```
    pub fn EntryPath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.EntryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isValid)
    ///
    /// ``` self: QtC.KService ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self));
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ``` self: QtC.KService ```
    pub fn IsDeleted(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self));
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#setDeleted)
    ///
    /// ``` self: QtC.KService, deleted: bool ```
    pub fn SetDeleted(self: ?*anyopaque, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self), deleted);
    }

    /// Inherited from KSycocaEntry
    ///
    /// [Qt documentation](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ``` self: QtC.KService ```
    pub fn IsSeparator(self: ?*anyopaque) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kservice.html#dtor.KService)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KService ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KService_Delete(@ptrCast(self));
    }
};
