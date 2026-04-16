const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KDesktopFile = @import("libqt6").KDesktopFile;
const KServiceAction = @import("libqt6").KServiceAction;
const ksycocatype_enums = @import("libksycocatype.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kservice.html)
pub const KService = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kservice.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KService,

    pub const _is_KService = {};
    pub const _is_KSycocaEntry = {};
    pub const _is_QSharedData = {};

    /// New constructs a new KService object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    /// ` exec: []const u8 `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn New(name: []const u8, exec: []const u8, icon: []const u8) KService {
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
        return .{ .ptr = qtc.KService_new(name_str, exec_str, icon_str) };
    }

    /// New2 constructs a new KService object.
    ///
    /// ## Parameter(s):
    ///
    /// ` fullpath: []const u8 `
    ///
    pub fn New2(fullpath: []const u8) KService {
        const fullpath_str = qtc.libqt_string{
            .len = fullpath.len,
            .data = fullpath.ptr,
        };
        return .{ .ptr = qtc.KService_new2(fullpath_str) };
    }

    /// New3 constructs a new KService object.
    ///
    /// ## Parameter(s):
    ///
    /// ` config: KDesktopFile `
    ///
    pub fn New3(config: anytype) KService {
        comptime _ = @TypeOf(config)._is_KDesktopFile;
        return .{ .ptr = qtc.KService_new3(@ptrCast(config.ptr)) };
    }

    /// New4 constructs a new KService object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KService `
    ///
    pub fn New4(other: anytype) KService {
        comptime _ = @TypeOf(other)._is_KService;
        return .{ .ptr = qtc.KService_new4(@ptrCast(other.ptr)) };
    }

    /// New5 constructs a new KService object.
    ///
    /// ## Parameter(s):
    ///
    /// ` config: KDesktopFile `
    ///
    /// ` entryPath: []const u8 `
    ///
    pub fn New5(config: anytype, entryPath: []const u8) KService {
        comptime _ = @TypeOf(config)._is_KDesktopFile;
        const entryPath_str = qtc.libqt_string{
            .len = entryPath.len,
            .data = entryPath.ptr,
        };
        return .{ .ptr = qtc.KService_new5(@ptrCast(config.ptr), entryPath_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#isApplication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn IsApplication(self: KService) bool {
        return qtc.KService_IsApplication(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Exec(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_Exec(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#terminal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn Terminal(self: KService) bool {
        return qtc.KService_Terminal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#terminalOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TerminalOptions(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_TerminalOptions(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.TerminalOptions: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#runOnDiscreteGpu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn RunOnDiscreteGpu(self: KService) bool {
        return qtc.KService_RunOnDiscreteGpu(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#substituteUid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn SubstituteUid(self: KService) bool {
        return qtc.KService_SubstituteUid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#username)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Username(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_Username(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Username: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#desktopEntryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DesktopEntryName(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_DesktopEntryName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.DesktopEntryName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#menuId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MenuId(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_MenuId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.MenuId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#storageId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StorageId(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_StorageId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.StorageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WorkingDirectory(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Comment(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#genericName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GenericName(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_GenericName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.GenericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#untranslatedGenericName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UntranslatedGenericName(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_UntranslatedGenericName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.UntranslatedGenericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#untranslatedName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UntranslatedName(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_UntranslatedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.UntranslatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#keywords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Keywords(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_Keywords(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kservice.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Categories(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_Categories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kservice.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kservice.html#schemeHandlers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SchemeHandlers(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_SchemeHandlers(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kservice.html#supportedProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedProtocols(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_SupportedProtocols(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kservice.html#hasMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn HasMimeType(self: KService, mimeType: []const u8) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KService_HasMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KService, allocator: std.mem.Allocator) []KServiceAction {
        const _arr: qtc.libqt_list = qtc.KService_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KServiceAction, _arr.len) catch @panic("kservice.Actions: Memory allocation failed");
        const _data: [*]QtC.KServiceAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#allowMultipleFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn AllowMultipleFiles(self: KService) bool {
        return qtc.KService_AllowMultipleFiles(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn NoDisplay(self: KService) bool {
        return qtc.KService_NoDisplay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#showInCurrentDesktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn ShowInCurrentDesktop(self: KService) bool {
        return qtc.KService_ShowInCurrentDesktop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#showOnCurrentPlatform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn ShowOnCurrentPlatform(self: KService) bool {
        return qtc.KService_ShowOnCurrentPlatform(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#docPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocPath(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_DocPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.DocPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#locateLocal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocateLocal(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_LocateLocal(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.LocateLocal: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setMenuId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` menuId: []const u8 `
    ///
    pub fn SetMenuId(self: KService, menuId: []const u8) void {
        const menuId_str = qtc.libqt_string{
            .len = menuId.len,
            .data = menuId.ptr,
        };
        qtc.KService_SetMenuId(@ptrCast(self.ptr), menuId_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setTerminal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` b: bool `
    ///
    pub fn SetTerminal(self: KService, b: bool) void {
        qtc.KService_SetTerminal(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setTerminalOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` options: []const u8 `
    ///
    pub fn SetTerminalOptions(self: KService, options: []const u8) void {
        const options_str = qtc.libqt_string{
            .len = options.len,
            .data = options.ptr,
        };
        qtc.KService_SetTerminalOptions(@ptrCast(self.ptr), options_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` exec: []const u8 `
    ///
    pub fn SetExec(self: KService, exec: []const u8) void {
        const exec_str = qtc.libqt_string{
            .len = exec.len,
            .data = exec.ptr,
        };
        qtc.KService_SetExec(@ptrCast(self.ptr), exec_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` workingDir: []const u8 `
    ///
    pub fn SetWorkingDirectory(self: KService, workingDir: []const u8) void {
        const workingDir_str = qtc.libqt_string{
            .len = workingDir.len,
            .data = workingDir.ptr,
        };
        qtc.KService_SetWorkingDirectory(@ptrCast(self.ptr), workingDir_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#newServicePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` showInMenu: bool `
    ///
    /// ` suggestedName: []const u8 `
    ///
    pub fn NewServicePath(allocator: std.mem.Allocator, showInMenu: bool, suggestedName: []const u8) []const u8 {
        const suggestedName_str = qtc.libqt_string{
            .len = suggestedName.len,
            .data = suggestedName.ptr,
        };
        var _str = qtc.KService_NewServicePath(showInMenu, suggestedName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.NewServicePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kservice.html#aliasFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AliasFor(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_AliasFor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.AliasFor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` t: ksycocatype_enums.KSycocaType `
    ///
    pub fn IsType(self: KService, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self.ptr), @bitCast(t));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#sycocaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ## Returns:
    ///
    /// ` ksycocatype_enums.KSycocaType `
    ///
    pub fn SycocaType(self: KService) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self.ptr));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#entryPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn EntryPath(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kservice.EntryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn IsValid(self: KService) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn IsDeleted(self: KService) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self.ptr));
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#setDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` deleted: bool `
    ///
    pub fn SetDeleted(self: KService, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self.ptr), deleted);
    }

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn IsSeparator(self: KService) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#dtor.KService)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KService `
    ///
    pub fn Delete(self: KService) void {
        qtc.KService_Delete(@ptrCast(self.ptr));
    }
};
