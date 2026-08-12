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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KService object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    /// ` _exec: []const u8 `
    ///
    /// ` _icon: []const u8 `
    ///
    pub fn new(_name: []const u8, _exec: []const u8, _icon: []const u8) KService {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const exec_str = qtc.libqt_string{
            .len = _exec.len,
            .data = _exec.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = _icon.len,
            .data = _icon.ptr,
        };
        return .{ .ptr = qtc.KService_new(name_str, exec_str, icon_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KService object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` fullpath: []const u8 `
    ///
    pub fn new2(fullpath: []const u8) KService {
        const fullpath_str = qtc.libqt_string{
            .len = fullpath.len,
            .data = fullpath.ptr,
        };
        return .{ .ptr = qtc.KService_new2(fullpath_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KService object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` config: KDesktopFile `
    ///
    pub fn new3(config: anytype) KService {
        comptime _ = @TypeOf(config)._is_KDesktopFile;
        return .{ .ptr = qtc.KService_new3(@ptrCast(config.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KService object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KService `
    ///
    pub fn new4(other: anytype) KService {
        comptime _ = @TypeOf(other)._is_KService;
        return .{ .ptr = qtc.KService_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new KService object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` config: KDesktopFile `
    ///
    /// ` _entryPath: []const u8 `
    ///
    pub fn new5(config: anytype, _entryPath: []const u8) KService {
        comptime _ = @TypeOf(config)._is_KDesktopFile;
        const entryPath_str = qtc.libqt_string{
            .len = _entryPath.len,
            .data = _entryPath.ptr,
        };
        return .{ .ptr = qtc.KService_new5(@ptrCast(config.ptr), entryPath_str) };
    }

    /// ### DEPRECATED: Use `isApplication` instead
    ///
    pub const IsApplication = isApplication;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#isApplication)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn isApplication(self: KService) bool {
        return qtc.KService_IsApplication(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn exec(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_Exec(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.exec: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `terminal` instead
    ///
    pub const Terminal = terminal;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#terminal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn terminal(self: KService) bool {
        return qtc.KService_Terminal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `terminalOptions` instead
    ///
    pub const TerminalOptions = terminalOptions;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#terminalOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn terminalOptions(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_TerminalOptions(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.terminalOptions: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `runOnDiscreteGpu` instead
    ///
    pub const RunOnDiscreteGpu = runOnDiscreteGpu;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#runOnDiscreteGpu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn runOnDiscreteGpu(self: KService) bool {
        return qtc.KService_RunOnDiscreteGpu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `substituteUid` instead
    ///
    pub const SubstituteUid = substituteUid;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#substituteUid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn substituteUid(self: KService) bool {
        return qtc.KService_SubstituteUid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `username` instead
    ///
    pub const Username = username;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#username)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn username(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_Username(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.username: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `desktopEntryName` instead
    ///
    pub const DesktopEntryName = desktopEntryName;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#desktopEntryName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn desktopEntryName(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_DesktopEntryName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.desktopEntryName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `menuId` instead
    ///
    pub const MenuId = menuId;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#menuId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn menuId(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_MenuId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.menuId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `storageId` instead
    ///
    pub const StorageId = storageId;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#storageId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn storageId(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_StorageId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.storageId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `workingDirectory` instead
    ///
    pub const WorkingDirectory = workingDirectory;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#workingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn workingDirectory(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.workingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `comment` instead
    ///
    pub const Comment = comment;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#comment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn comment(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_Comment(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.comment: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `genericName` instead
    ///
    pub const GenericName = genericName;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#genericName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn genericName(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_GenericName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.genericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `untranslatedGenericName` instead
    ///
    pub const UntranslatedGenericName = untranslatedGenericName;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#untranslatedGenericName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn untranslatedGenericName(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_UntranslatedGenericName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.untranslatedGenericName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `untranslatedName` instead
    ///
    pub const UntranslatedName = untranslatedName;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#untranslatedName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn untranslatedName(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_UntranslatedName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.untranslatedName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `keywords` instead
    ///
    pub const Keywords = keywords;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#keywords)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn keywords(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_Keywords(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KService.keywords: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KService.keywords: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `categories` instead
    ///
    pub const Categories = categories;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#categories)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn categories(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_Categories(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KService.categories: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KService.categories: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KService.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KService.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `schemeHandlers` instead
    ///
    pub const SchemeHandlers = schemeHandlers;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#schemeHandlers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn schemeHandlers(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_SchemeHandlers(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KService.schemeHandlers: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KService.schemeHandlers: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedProtocols` instead
    ///
    pub const SupportedProtocols = supportedProtocols;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#supportedProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedProtocols(self: KService, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KService_SupportedProtocols(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KService.supportedProtocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KService.supportedProtocols: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `hasMimeType` instead
    ///
    pub const HasMimeType = hasMimeType;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#hasMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn hasMimeType(self: KService, mimeType: []const u8) bool {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        return qtc.KService_HasMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: KService, allocator: std.mem.Allocator) []KServiceAction {
        const _arr: qtc.libqt_list = qtc.KService_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KServiceAction, _arr.len) catch @panic("KService.actions: Memory allocation failed");
        const _data_val: [*]QtC.KServiceAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `allowMultipleFiles` instead
    ///
    pub const AllowMultipleFiles = allowMultipleFiles;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#allowMultipleFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn allowMultipleFiles(self: KService) bool {
        return qtc.KService_AllowMultipleFiles(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `noDisplay` instead
    ///
    pub const NoDisplay = noDisplay;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#noDisplay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn noDisplay(self: KService) bool {
        return qtc.KService_NoDisplay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showInCurrentDesktop` instead
    ///
    pub const ShowInCurrentDesktop = showInCurrentDesktop;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#showInCurrentDesktop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn showInCurrentDesktop(self: KService) bool {
        return qtc.KService_ShowInCurrentDesktop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showOnCurrentPlatform` instead
    ///
    pub const ShowOnCurrentPlatform = showOnCurrentPlatform;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#showOnCurrentPlatform)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn showOnCurrentPlatform(self: KService) bool {
        return qtc.KService_ShowOnCurrentPlatform(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `docPath` instead
    ///
    pub const DocPath = docPath;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#docPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn docPath(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_DocPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.docPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `locateLocal` instead
    ///
    pub const LocateLocal = locateLocal;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#locateLocal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn locateLocal(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_LocateLocal(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.locateLocal: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMenuId` instead
    ///
    pub const SetMenuId = setMenuId;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setMenuId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` _menuId: []const u8 `
    ///
    pub fn setMenuId(self: KService, _menuId: []const u8) void {
        const menuId_str = qtc.libqt_string{
            .len = _menuId.len,
            .data = _menuId.ptr,
        };
        qtc.KService_SetMenuId(@ptrCast(self.ptr), menuId_str);
    }

    /// ### DEPRECATED: Use `setTerminal` instead
    ///
    pub const SetTerminal = setTerminal;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setTerminal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` b: bool `
    ///
    pub fn setTerminal(self: KService, b: bool) void {
        qtc.KService_SetTerminal(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setTerminalOptions` instead
    ///
    pub const SetTerminalOptions = setTerminalOptions;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setTerminalOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` options: []const u8 `
    ///
    pub fn setTerminalOptions(self: KService, options: []const u8) void {
        const options_str = qtc.libqt_string{
            .len = options.len,
            .data = options.ptr,
        };
        qtc.KService_SetTerminalOptions(@ptrCast(self.ptr), options_str);
    }

    /// ### DEPRECATED: Use `setExec` instead
    ///
    pub const SetExec = setExec;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setExec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` _exec: []const u8 `
    ///
    pub fn setExec(self: KService, _exec: []const u8) void {
        const exec_str = qtc.libqt_string{
            .len = _exec.len,
            .data = _exec.ptr,
        };
        qtc.KService_SetExec(@ptrCast(self.ptr), exec_str);
    }

    /// ### DEPRECATED: Use `setWorkingDirectory` instead
    ///
    pub const SetWorkingDirectory = setWorkingDirectory;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#setWorkingDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` workingDir: []const u8 `
    ///
    pub fn setWorkingDirectory(self: KService, workingDir: []const u8) void {
        const workingDir_str = qtc.libqt_string{
            .len = workingDir.len,
            .data = workingDir.ptr,
        };
        qtc.KService_SetWorkingDirectory(@ptrCast(self.ptr), workingDir_str);
    }

    /// ### DEPRECATED: Use `newServicePath` instead
    ///
    pub const NewServicePath = newServicePath;

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
    pub fn newServicePath(allocator: std.mem.Allocator, showInMenu: bool, suggestedName: []const u8) []const u8 {
        const suggestedName_str = qtc.libqt_string{
            .len = suggestedName.len,
            .data = suggestedName.ptr,
        };
        var _str = qtc.KService_NewServicePath(showInMenu, suggestedName_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.newServicePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `aliasFor` instead
    ///
    pub const AliasFor = aliasFor;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#aliasFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn aliasFor(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KService_AliasFor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.aliasFor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startupNotify` instead
    ///
    pub const StartupNotify = startupNotify;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#startupNotify)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn startupNotify(self: KService) bool {
        return qtc.KService_StartupNotify(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isType` instead
    ///
    pub const IsType = isType;

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
    pub fn isType(self: KService, t: i32) bool {
        return qtc.KSycocaEntry_IsType(@ptrCast(self.ptr), @bitCast(t));
    }

    /// ### DEPRECATED: Use `sycocaType` instead
    ///
    pub const SycocaType = sycocaType;

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
    pub fn sycocaType(self: KService) i32 {
        return qtc.KSycocaEntry_SycocaType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

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
    pub fn name(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `entryPath` instead
    ///
    pub const EntryPath = entryPath;

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
    pub fn entryPath(self: KService, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KSycocaEntry_EntryPath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KService.entryPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn isValid(self: KService) bool {
        return qtc.KSycocaEntry_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDeleted` instead
    ///
    pub const IsDeleted = isDeleted;

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn isDeleted(self: KService) bool {
        return qtc.KSycocaEntry_IsDeleted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDeleted` instead
    ///
    pub const SetDeleted = setDeleted;

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
    pub fn setDeleted(self: KService, deleted: bool) void {
        qtc.KSycocaEntry_SetDeleted(@ptrCast(self.ptr), deleted);
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// Inherited from KSycocaEntry
    ///
    /// ### [Upstream resources](https://api.kde.org/ksycocaentry.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KService `
    ///
    pub fn isSeparator(self: KService) bool {
        return qtc.KSycocaEntry_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kservice.html#dtor.KService)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KService `
    ///
    pub fn delete(self: KService) void {
        qtc.KService_Delete(@ptrCast(self.ptr));
    }
};
