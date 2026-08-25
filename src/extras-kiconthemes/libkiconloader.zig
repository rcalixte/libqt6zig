const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KIconColors = @import("libqt6").KIconColors;
const KIconEffect = @import("libqt6").KIconEffect;
const KIconTheme = @import("libqt6").KIconTheme;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIcon = @import("libqt6").QIcon;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMovie = @import("libqt6").QMovie;
const QObject = @import("libqt6").QObject;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const kiconloader_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kiconloader.html)
pub const KIconLoader = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kiconloader.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KIconLoader,

    pub const _is_KIconLoader = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KIconLoader object in C++ memory
    ///
    pub fn new() KIconLoader {
        return .{ .ptr = qtc.KIconLoader_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KIconLoader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` appname: []const u8 `
    ///
    pub fn new2(appname: []const u8) KIconLoader {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_new2(appname_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KIconLoader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` appname: []const u8 `
    ///
    /// ` extraSearchPaths: []const []const u8 `
    ///
    pub fn new3(allocator: std.mem.Allocator, appname: []const u8, extraSearchPaths: []const []const u8) KIconLoader {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        const extraSearchPaths_arr = allocator.alloc(qtc.libqt_string, extraSearchPaths.len) catch @panic("KIconLoader.new3: Memory allocation failed");
        defer allocator.free(extraSearchPaths_arr);
        for (extraSearchPaths, 0..extraSearchPaths.len) |str_item, i|
            extraSearchPaths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const extraSearchPaths_list = qtc.libqt_list{
            .len = extraSearchPaths.len,
            .data = extraSearchPaths_arr.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_new3(appname_str, extraSearchPaths_list) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KIconLoader object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` appname: []const u8 `
    ///
    /// ` extraSearchPaths: []const []const u8 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(allocator: std.mem.Allocator, appname: []const u8, extraSearchPaths: []const []const u8, _parent: anytype) KIconLoader {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        const extraSearchPaths_arr = allocator.alloc(qtc.libqt_string, extraSearchPaths.len) catch @panic("KIconLoader.new4: Memory allocation failed");
        defer allocator.free(extraSearchPaths_arr);
        for (extraSearchPaths, 0..extraSearchPaths.len) |str_item, i|
            extraSearchPaths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const extraSearchPaths_list = qtc.libqt_list{
            .len = extraSearchPaths.len,
            .data = extraSearchPaths_arr.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KIconLoader_new4(appname_str, extraSearchPaths_list, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn metaObject(self: KIconLoader) QMetaObject {
        return .{ .ptr = qtc.KIconLoader_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KIconLoader, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KIconLoader_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn superMetaObject(self: KIconLoader) QMetaObject {
        return .{ .ptr = qtc.KIconLoader_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KIconLoader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIconLoader_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KIconLoader, callback: *const fn (KIconLoader, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIconLoader_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KIconLoader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIconLoader_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KIconLoader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIconLoader_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KIconLoader, callback: *const fn (KIconLoader, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIconLoader_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KIconLoader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIconLoader_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconLoader.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `global` instead
    ///
    pub const Global = global;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#global)
    ///
    pub fn global() KIconLoader {
        return .{ .ptr = qtc.KIconLoader_Global() };
    }

    /// ### DEPRECATED: Use `addAppDir` instead
    ///
    pub const AddAppDir = addAppDir;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#addAppDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` appname: []const u8 `
    ///
    pub fn addAppDir(self: KIconLoader, appname: []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        qtc.KIconLoader_AddAppDir(@ptrCast(self.ptr), appname_str);
    }

    /// ### DEPRECATED: Use `loadIcon` instead
    ///
    pub const LoadIcon = loadIcon;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn loadIcon(self: KIconLoader, name: []const u8, group: i32) QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadIcon(@ptrCast(self.ptr), name_str, @bitCast(group)) };
    }

    /// ### DEPRECATED: Use `loadMimeTypeIcon` instead
    ///
    pub const LoadMimeTypeIcon = loadMimeTypeIcon;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadMimeTypeIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn loadMimeTypeIcon(self: KIconLoader, iconName: []const u8, group: i32) QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMimeTypeIcon(@ptrCast(self.ptr), iconName_str, @bitCast(group)) };
    }

    /// ### DEPRECATED: Use `iconPath` instead
    ///
    pub const IconPath = iconPath;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group_or_size: i32 `
    ///
    pub fn iconPath(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group_or_size: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_IconPath(@ptrCast(self.ptr), name_str, @bitCast(group_or_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconLoader.iconPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconPath2` instead
    ///
    pub const IconPath2 = iconPath2;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group_or_size: i32 `
    ///
    /// ` canReturnNull: bool `
    ///
    /// ` scale: f64 `
    ///
    pub fn iconPath2(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group_or_size: i32, canReturnNull: bool, scale: f64) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_IconPath2(@ptrCast(self.ptr), name_str, @bitCast(group_or_size), canReturnNull, @bitCast(scale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconLoader.iconPath2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `loadMovie` instead
    ///
    pub const LoadMovie = loadMovie;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadMovie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn loadMovie(self: KIconLoader, name: []const u8, group: i32) QMovie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMovie(@ptrCast(self.ptr), name_str, @bitCast(group)) };
    }

    /// ### DEPRECATED: Use `moviePath` instead
    ///
    pub const MoviePath = moviePath;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#moviePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn moviePath(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_MoviePath(@ptrCast(self.ptr), name_str, @bitCast(group));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconLoader.moviePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `loadAnimated` instead
    ///
    pub const LoadAnimated = loadAnimated;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn loadAnimated(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32) []const []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KIconLoader_LoadAnimated(@ptrCast(self.ptr), name_str, @bitCast(group));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconLoader.loadAnimated: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.loadAnimated: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryIcons` instead
    ///
    pub const QueryIcons = queryIcons;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#queryIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn queryIcons(self: KIconLoader, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIcons(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconLoader.queryIcons: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.queryIcons: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryIcons2` instead
    ///
    pub const QueryIcons2 = queryIcons2;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#queryIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` group_or_size: i32 `
    ///
    pub fn queryIcons2(self: KIconLoader, allocator: std.mem.Allocator, group_or_size: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIcons2(@ptrCast(self.ptr), @bitCast(group_or_size));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconLoader.queryIcons2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.queryIcons2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryIconsByContext` instead
    ///
    pub const QueryIconsByContext = queryIconsByContext;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#queryIconsByContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` group_or_size: i32 `
    ///
    pub fn queryIconsByContext(self: KIconLoader, allocator: std.mem.Allocator, group_or_size: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIconsByContext(@ptrCast(self.ptr), @bitCast(group_or_size));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconLoader.queryIconsByContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.queryIconsByContext: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `hasContext` instead
    ///
    pub const HasContext = hasContext;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#hasContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` context: kiconloader_enums.Context `
    ///
    pub fn hasContext(self: KIconLoader, context: i32) bool {
        return qtc.KIconLoader_HasContext(@ptrCast(self.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `queryIconsByDir` instead
    ///
    pub const QueryIconsByDir = queryIconsByDir;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#queryIconsByDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` iconsDir: []const u8 `
    ///
    pub fn queryIconsByDir(self: KIconLoader, allocator: std.mem.Allocator, iconsDir: []const u8) []const []const u8 {
        const iconsDir_str = qtc.libqt_string{
            .len = iconsDir.len,
            .data = iconsDir.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIconsByDir(@ptrCast(self.ptr), iconsDir_str);
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconLoader.queryIconsByDir: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.queryIconsByDir: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `searchPaths` instead
    ///
    pub const SearchPaths = searchPaths;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#searchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchPaths(self: KIconLoader, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_SearchPaths(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconLoader.searchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.searchPaths: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `currentSize` instead
    ///
    pub const CurrentSize = currentSize;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#currentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn currentSize(self: KIconLoader, group: i32) i32 {
        return qtc.KIconLoader_CurrentSize(@ptrCast(self.ptr), @bitCast(group));
    }

    /// ### DEPRECATED: Use `theme` instead
    ///
    pub const Theme = theme;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn theme(self: KIconLoader) KIconTheme {
        return .{ .ptr = qtc.KIconLoader_Theme(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `iconEffect` instead
    ///
    pub const IconEffect = iconEffect;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn iconEffect(self: KIconLoader) KIconEffect {
        return .{ .ptr = qtc.KIconLoader_IconEffect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reconfigure` instead
    ///
    pub const Reconfigure = reconfigure;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#reconfigure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` appname: []const u8 `
    ///
    pub fn reconfigure(self: KIconLoader, appname: []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        qtc.KIconLoader_Reconfigure(@ptrCast(self.ptr), appname_str);
    }

    /// ### DEPRECATED: Use `unknown` instead
    ///
    pub const Unknown = unknown;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#unknown)
    ///
    pub fn unknown() QPixmap {
        return .{ .ptr = qtc.KIconLoader_Unknown() };
    }

    /// ### DEPRECATED: Use `drawOverlays` instead
    ///
    pub const DrawOverlays = drawOverlays;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#drawOverlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` overlays: []const []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn drawOverlays(self: KIconLoader, allocator: std.mem.Allocator, overlays: []const []const u8, pixmap: anytype, group: i32) void {
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("KIconLoader.drawOverlays: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |str_item, i|
            overlays_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KIconLoader_DrawOverlays(@ptrCast(self.ptr), overlays_list, @ptrCast(pixmap.ptr), @bitCast(group));
    }

    /// ### DEPRECATED: Use `hasIcon` instead
    ///
    pub const HasIcon = hasIcon;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#hasIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn hasIcon(self: KIconLoader, iconName: []const u8) bool {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KIconLoader_HasIcon(@ptrCast(self.ptr), iconName_str);
    }

    /// ### DEPRECATED: Use `setCustomPalette` instead
    ///
    pub const SetCustomPalette = setCustomPalette;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#setCustomPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` palette: QPalette `
    ///
    pub fn setCustomPalette(self: KIconLoader, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.KIconLoader_SetCustomPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// ### DEPRECATED: Use `customPalette` instead
    ///
    pub const CustomPalette = customPalette;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#customPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn customPalette(self: KIconLoader) QPalette {
        return .{ .ptr = qtc.KIconLoader_CustomPalette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `resetPalette` instead
    ///
    pub const ResetPalette = resetPalette;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#resetPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn resetPalette(self: KIconLoader) void {
        qtc.KIconLoader_ResetPalette(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasCustomPalette` instead
    ///
    pub const HasCustomPalette = hasCustomPalette;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#hasCustomPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn hasCustomPalette(self: KIconLoader) bool {
        return qtc.KIconLoader_HasCustomPalette(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `newIconLoader` instead
    ///
    pub const NewIconLoader = newIconLoader;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#newIconLoader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn newIconLoader(self: KIconLoader) void {
        qtc.KIconLoader_NewIconLoader(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `emitChange` instead
    ///
    pub const EmitChange = emitChange;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#emitChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn emitChange(group: i32) void {
        qtc.KIconLoader_EmitChange(@bitCast(group));
    }

    /// ### DEPRECATED: Use `iconLoaderSettingsChanged` instead
    ///
    pub const IconLoaderSettingsChanged = iconLoaderSettingsChanged;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconLoaderSettingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn iconLoaderSettingsChanged(self: KIconLoader) void {
        qtc.KIconLoader_IconLoaderSettingsChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIconLoaderSettingsChanged` instead
    ///
    pub const OnIconLoaderSettingsChanged = onIconLoaderSettingsChanged;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconLoaderSettingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader) callconv(.c) void `
    ///
    pub fn onIconLoaderSettingsChanged(self: KIconLoader, callback: *const fn (KIconLoader) callconv(.c) void) void {
        qtc.KIconLoader_Connect_IconLoaderSettingsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `iconChanged` instead
    ///
    pub const IconChanged = iconChanged;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` group: i32 `
    ///
    pub fn iconChanged(self: KIconLoader, group: i32) void {
        qtc.KIconLoader_IconChanged(@ptrCast(self.ptr), @bitCast(group));
    }

    /// ### DEPRECATED: Use `onIconChanged` instead
    ///
    pub const OnIconChanged = onIconChanged;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader, group: i32) callconv(.c) void `
    ///
    pub fn onIconChanged(self: KIconLoader, callback: *const fn (KIconLoader, i32) callconv(.c) void) void {
        qtc.KIconLoader_Connect_IconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconLoader.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconLoader.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addAppDir2` instead
    ///
    pub const AddAppDir2 = addAppDir2;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#addAppDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` appname: []const u8 `
    ///
    /// ` themeBaseDir: []const u8 `
    ///
    pub fn addAppDir2(self: KIconLoader, appname: []const u8, themeBaseDir: []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        const themeBaseDir_str = qtc.libqt_string{
            .len = themeBaseDir.len,
            .data = themeBaseDir.ptr,
        };
        qtc.KIconLoader_AddAppDir2(@ptrCast(self.ptr), appname_str, themeBaseDir_str);
    }

    /// ### DEPRECATED: Use `loadIcon3` instead
    ///
    pub const LoadIcon3 = loadIcon3;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    pub fn loadIcon3(self: KIconLoader, name: []const u8, group: i32, size: i32) QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadIcon3(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `loadIcon4` instead
    ///
    pub const LoadIcon4 = loadIcon4;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    /// ` state: i32 `
    ///
    pub fn loadIcon4(self: KIconLoader, name: []const u8, group: i32, size: i32, state: i32) QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadIcon4(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `loadIcon5` instead
    ///
    pub const LoadIcon5 = loadIcon5;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    /// ` state: i32 `
    ///
    /// ` overlays: []const []const u8 `
    ///
    pub fn loadIcon5(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32, size: i32, state: i32, overlays: []const []const u8) QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("KIconLoader.loadIcon5: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |str_item, i|
            overlays_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadIcon5(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size), @bitCast(state), overlays_list) };
    }

    /// ### DEPRECATED: Use `loadMimeTypeIcon3` instead
    ///
    pub const LoadMimeTypeIcon3 = loadMimeTypeIcon3;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadMimeTypeIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    pub fn loadMimeTypeIcon3(self: KIconLoader, iconName: []const u8, group: i32, size: i32) QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMimeTypeIcon3(@ptrCast(self.ptr), iconName_str, @bitCast(group), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `loadMimeTypeIcon4` instead
    ///
    pub const LoadMimeTypeIcon4 = loadMimeTypeIcon4;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadMimeTypeIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    /// ` state: i32 `
    ///
    pub fn loadMimeTypeIcon4(self: KIconLoader, iconName: []const u8, group: i32, size: i32, state: i32) QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMimeTypeIcon4(@ptrCast(self.ptr), iconName_str, @bitCast(group), @bitCast(size), @bitCast(state)) };
    }

    /// ### DEPRECATED: Use `loadMimeTypeIcon5` instead
    ///
    pub const LoadMimeTypeIcon5 = loadMimeTypeIcon5;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadMimeTypeIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    /// ` state: i32 `
    ///
    /// ` overlays: []const []const u8 `
    ///
    pub fn loadMimeTypeIcon5(self: KIconLoader, allocator: std.mem.Allocator, iconName: []const u8, group: i32, size: i32, state: i32, overlays: []const []const u8) QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("KIconLoader.loadMimeTypeIcon5: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |str_item, i|
            overlays_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMimeTypeIcon5(@ptrCast(self.ptr), iconName_str, @bitCast(group), @bitCast(size), @bitCast(state), overlays_list) };
    }

    /// ### DEPRECATED: Use `iconPath3` instead
    ///
    pub const IconPath3 = iconPath3;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconPath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group_or_size: i32 `
    ///
    /// ` canReturnNull: bool `
    ///
    pub fn iconPath3(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group_or_size: i32, canReturnNull: bool) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_IconPath3(@ptrCast(self.ptr), name_str, @bitCast(group_or_size), canReturnNull);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconLoader.iconPath3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `loadMovie3` instead
    ///
    pub const LoadMovie3 = loadMovie3;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadMovie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    pub fn loadMovie3(self: KIconLoader, name: []const u8, group: i32, size: i32) QMovie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMovie3(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size)) };
    }

    /// ### DEPRECATED: Use `loadMovie4` instead
    ///
    pub const LoadMovie4 = loadMovie4;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadMovie)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn loadMovie4(self: KIconLoader, name: []const u8, group: i32, size: i32, _parent: anytype) QMovie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KIconLoader_LoadMovie4(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `moviePath3` instead
    ///
    pub const MoviePath3 = moviePath3;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#moviePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    pub fn moviePath3(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32, size: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_MoviePath3(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconLoader.moviePath3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `loadAnimated3` instead
    ///
    pub const LoadAnimated3 = loadAnimated3;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#loadAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` name: []const u8 `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` size: i32 `
    ///
    pub fn loadAnimated3(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32, size: i32) []const []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const _arr: qtc.libqt_list = qtc.KIconLoader_LoadAnimated3(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconLoader.loadAnimated3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.loadAnimated3: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryIcons22` instead
    ///
    pub const QueryIcons22 = queryIcons22;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#queryIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` group_or_size: i32 `
    ///
    /// ` context: kiconloader_enums.Context `
    ///
    pub fn queryIcons22(self: KIconLoader, allocator: std.mem.Allocator, group_or_size: i32, context: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIcons22(@ptrCast(self.ptr), @bitCast(group_or_size), @bitCast(context));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconLoader.queryIcons22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.queryIcons22: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `queryIconsByContext2` instead
    ///
    pub const QueryIconsByContext2 = queryIconsByContext2;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#queryIconsByContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` group_or_size: i32 `
    ///
    /// ` context: kiconloader_enums.Context `
    ///
    pub fn queryIconsByContext2(self: KIconLoader, allocator: std.mem.Allocator, group_or_size: i32, context: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIconsByContext2(@ptrCast(self.ptr), @bitCast(group_or_size), @bitCast(context));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KIconLoader.queryIconsByContext2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.queryIconsByContext2: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `reconfigure2` instead
    ///
    pub const Reconfigure2 = reconfigure2;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#reconfigure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` appname: []const u8 `
    ///
    /// ` extraSearchPaths: []const []const u8 `
    ///
    pub fn reconfigure2(self: KIconLoader, allocator: std.mem.Allocator, appname: []const u8, extraSearchPaths: []const []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        const extraSearchPaths_arr = allocator.alloc(qtc.libqt_string, extraSearchPaths.len) catch @panic("KIconLoader.reconfigure2: Memory allocation failed");
        defer allocator.free(extraSearchPaths_arr);
        for (extraSearchPaths, 0..extraSearchPaths.len) |str_item, i|
            extraSearchPaths_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const extraSearchPaths_list = qtc.libqt_list{
            .len = extraSearchPaths.len,
            .data = extraSearchPaths_arr.ptr,
        };
        qtc.KIconLoader_Reconfigure2(@ptrCast(self.ptr), appname_str, extraSearchPaths_list);
    }

    /// ### DEPRECATED: Use `drawOverlays4` instead
    ///
    pub const DrawOverlays4 = drawOverlays4;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#drawOverlays)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` overlays: []const []const u8 `
    ///
    /// ` pixmap: QPixmap `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    /// ` state: i32 `
    ///
    pub fn drawOverlays4(self: KIconLoader, allocator: std.mem.Allocator, overlays: []const []const u8, pixmap: anytype, group: i32, state: i32) void {
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("KIconLoader.drawOverlays4: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |str_item, i|
            overlays_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KIconLoader_DrawOverlays4(@ptrCast(self.ptr), overlays_list, @ptrCast(pixmap.ptr), @bitCast(group), @bitCast(state));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KIconLoader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KIconLoader.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KIconLoader, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn isWidgetType(self: KIconLoader) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn isWindowType(self: KIconLoader) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn isQuickItemType(self: KIconLoader) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn signalsBlocked(self: KIconLoader) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KIconLoader, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn thread(self: KIconLoader) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KIconLoader, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KIconLoader, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KIconLoader, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KIconLoader, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KIconLoader, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KIconLoader, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KIconLoader.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KIconLoader, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KIconLoader, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KIconLoader, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KIconLoader, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn disconnect3(self: KIconLoader) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KIconLoader, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn dumpObjectTree(self: KIconLoader) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn dumpObjectInfo(self: KIconLoader) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KIconLoader, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KIconLoader, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KIconLoader, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KIconLoader.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KIconLoader.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn bindingStorage(self: KIconLoader) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn bindingStorage2(self: KIconLoader) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn destroyed(self: KIconLoader) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KIconLoader, callback: *const fn (KIconLoader) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn parent(self: KIconLoader) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KIconLoader, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn deleteLater(self: KIconLoader) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KIconLoader, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KIconLoader, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KIconLoader, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KIconLoader, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KIconLoader, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KIconLoader, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KIconLoader, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KIconLoader, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KIconLoader, callback: *const fn (KIconLoader, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KIconLoader, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIconLoader_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KIconLoader, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIconLoader_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn (self: KIconLoader, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KIconLoader, callback: *const fn (KIconLoader, QEvent) callconv(.c) bool) void {
        qtc.KIconLoader_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KIconLoader, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIconLoader_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KIconLoader, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KIconLoader_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn (self: KIconLoader, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KIconLoader, callback: *const fn (KIconLoader, QObject, QEvent) callconv(.c) bool) void {
        qtc.KIconLoader_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KIconLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KIconLoader_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KIconLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KIconLoader_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn (self: KIconLoader, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KIconLoader, callback: *const fn (KIconLoader, QTimerEvent) callconv(.c) void) void {
        qtc.KIconLoader_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KIconLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KIconLoader_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KIconLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KIconLoader_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn (self: KIconLoader, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KIconLoader, callback: *const fn (KIconLoader, QChildEvent) callconv(.c) void) void {
        qtc.KIconLoader_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KIconLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KIconLoader_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KIconLoader, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KIconLoader_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn (self: KIconLoader, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KIconLoader, callback: *const fn (KIconLoader, QEvent) callconv(.c) void) void {
        qtc.KIconLoader_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KIconLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIconLoader_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KIconLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIconLoader_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn (self: KIconLoader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KIconLoader, callback: *const fn (KIconLoader, QMetaMethod) callconv(.c) void) void {
        qtc.KIconLoader_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KIconLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIconLoader_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KIconLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIconLoader_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn (self: KIconLoader, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KIconLoader, callback: *const fn (KIconLoader, QMetaMethod) callconv(.c) void) void {
        qtc.KIconLoader_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn sender(self: KIconLoader) QObject {
        return .{ .ptr = qtc.KIconLoader_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn superSender(self: KIconLoader) QObject {
        return .{ .ptr = qtc.KIconLoader_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KIconLoader, callback: *const fn () callconv(.c) QObject) void {
        qtc.KIconLoader_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn senderSignalIndex(self: KIconLoader) i32 {
        return qtc.KIconLoader_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn superSenderSignalIndex(self: KIconLoader) i32 {
        return qtc.KIconLoader_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KIconLoader, callback: *const fn () callconv(.c) i32) void {
        qtc.KIconLoader_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KIconLoader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIconLoader_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KIconLoader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIconLoader_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn (self: KIconLoader, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KIconLoader, callback: *const fn (KIconLoader, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIconLoader_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KIconLoader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIconLoader_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KIconLoader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIconLoader_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader`
    ///
    /// ` callback: *const fn (self: KIconLoader, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KIconLoader, callback: *const fn (KIconLoader, QMetaMethod) callconv(.c) bool) void {
        qtc.KIconLoader_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KIconLoader, callback: *const fn (KIconLoader, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#dtor.KIconLoader)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KIconLoader `
    ///
    pub fn delete(self: KIconLoader) void {
        qtc.KIconLoader_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kde.html)
pub const KDE = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kde.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KDE,

    pub const _is_KDE = {};

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kde.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    pub fn icon(iconName: []const u8, iconLoader: anytype) QIcon {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        return .{ .ptr = qtc.KDE_Icon(iconName_str, @ptrCast(iconLoader.ptr)) };
    }

    /// ### DEPRECATED: Use `icon2` instead
    ///
    pub const Icon2 = icon2;

    /// ### [Upstream resources](https://api.kde.org/kde.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` colors: KIconColors `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    pub fn icon2(iconName: []const u8, colors: anytype, iconLoader: anytype) QIcon {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        comptime _ = @TypeOf(colors)._is_KIconColors;
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        return .{ .ptr = qtc.KDE_Icon2(iconName_str, @ptrCast(colors.ptr), @ptrCast(iconLoader.ptr)) };
    }

    /// ### DEPRECATED: Use `icon3` instead
    ///
    pub const Icon3 = icon3;

    /// ### [Upstream resources](https://api.kde.org/kde.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` overlays: []const []const u8 `
    ///
    /// ` iconLoader: KIconLoader `
    ///
    pub fn icon3(allocator: std.mem.Allocator, iconName: []const u8, overlays: []const []const u8, iconLoader: anytype) QIcon {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("KDE.icon3: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |str_item, i|
            overlays_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        comptime _ = @TypeOf(iconLoader)._is_KIconLoader;
        return .{ .ptr = qtc.KDE_Icon3(iconName_str, overlays_list, @ptrCast(iconLoader.ptr)) };
    }
};

/// ### [Upstream resources](https://api.kde.org/kiconloader.html#public-types)
pub const enums = struct {
    pub const Context = enum {
        pub const Any: i32 = 0;
        pub const Action: i32 = 1;
        pub const Application: i32 = 2;
        pub const Device: i32 = 3;
        pub const MimeType: i32 = 4;
        pub const Animation: i32 = 5;
        pub const Category: i32 = 6;
        pub const Emblem: i32 = 7;
        pub const Emote: i32 = 8;
        pub const International: i32 = 9;
        pub const Place: i32 = 10;
        pub const StatusIcon: i32 = 11;
    };

    pub const Type = enum {
        pub const Fixed: i32 = 0;
        pub const Scalable: i32 = 1;
        pub const Threshold: i32 = 2;
    };

    pub const MatchType = enum {
        pub const MatchExact: i32 = 0;
        pub const MatchBest: i32 = 1;
        pub const MatchBestOrGreaterSize: i32 = 2;
    };

    pub const Group = enum {
        pub const NoGroup: i32 = -1;
        pub const Desktop: i32 = 0;
        pub const FirstGroup: i32 = 0;
        pub const Toolbar: i32 = 1;
        pub const MainToolbar: i32 = 2;
        pub const Small: i32 = 3;
        pub const Panel: i32 = 4;
        pub const Dialog: i32 = 5;
        pub const LastGroup: i32 = 6;
        pub const User: i32 = 7;
    };

    pub const StdSizes = enum {
        pub const SizeSmall: i32 = 16;
        pub const SizeSmallMedium: i32 = 22;
        pub const SizeMedium: i32 = 32;
        pub const SizeLarge: i32 = 48;
        pub const SizeHuge: i32 = 64;
        pub const SizeEnormous: i32 = 128;
    };

    pub const States = enum {
        pub const DefaultState: i32 = 0;
        pub const ActiveState: i32 = 1;
        pub const DisabledState: i32 = 2;
        pub const SelectedState: i32 = 3;
        pub const LastState: i32 = 4;
    };
};
