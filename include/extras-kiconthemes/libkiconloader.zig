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

    /// New constructs a new KIconLoader object.
    ///
    pub fn New() KIconLoader {
        return .{ .ptr = qtc.KIconLoader_new() };
    }

    /// New2 constructs a new KIconLoader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` appname: []const u8 `
    ///
    pub fn New2(appname: []const u8) KIconLoader {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_new2(appname_str) };
    }

    /// New3 constructs a new KIconLoader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` appname: []const u8 `
    ///
    /// ` extraSearchPaths: []const []const u8 `
    ///
    pub fn New3(allocator: std.mem.Allocator, appname: []const u8, extraSearchPaths: []const []const u8) KIconLoader {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        const extraSearchPaths_arr = allocator.alloc(qtc.libqt_string, extraSearchPaths.len) catch @panic("kiconloader.New3: Memory allocation failed");
        defer allocator.free(extraSearchPaths_arr);
        for (extraSearchPaths, 0..extraSearchPaths.len) |item, i|
            extraSearchPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const extraSearchPaths_list = qtc.libqt_list{
            .len = extraSearchPaths.len,
            .data = extraSearchPaths_arr.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_new3(appname_str, extraSearchPaths_list) };
    }

    /// New4 constructs a new KIconLoader object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` appname: []const u8 `
    ///
    /// ` extraSearchPaths: []const []const u8 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(allocator: std.mem.Allocator, appname: []const u8, extraSearchPaths: []const []const u8, parent: anytype) KIconLoader {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        const extraSearchPaths_arr = allocator.alloc(qtc.libqt_string, extraSearchPaths.len) catch @panic("kiconloader.New4: Memory allocation failed");
        defer allocator.free(extraSearchPaths_arr);
        for (extraSearchPaths, 0..extraSearchPaths.len) |item, i|
            extraSearchPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const extraSearchPaths_list = qtc.libqt_list{
            .len = extraSearchPaths.len,
            .data = extraSearchPaths_arr.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KIconLoader_new4(appname_str, extraSearchPaths_list, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn MetaObject(self: KIconLoader) QMetaObject {
        return .{ .ptr = qtc.KIconLoader_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KIconLoader, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KIconLoader_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn SuperMetaObject(self: KIconLoader) QMetaObject {
        return .{ .ptr = qtc.KIconLoader_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KIconLoader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIconLoader_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KIconLoader, callback: *const fn (KIconLoader, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KIconLoader_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KIconLoader, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KIconLoader_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KIconLoader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIconLoader_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KIconLoader, callback: *const fn (KIconLoader, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KIconLoader_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KIconLoader, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KIconLoader_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#global)
    ///
    pub fn Global() KIconLoader {
        return .{ .ptr = qtc.KIconLoader_Global() };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#addAppDir)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` appname: []const u8 `
    ///
    pub fn AddAppDir(self: KIconLoader, appname: []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        qtc.KIconLoader_AddAppDir(@ptrCast(self.ptr), appname_str);
    }

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
    pub fn LoadIcon(self: KIconLoader, name: []const u8, group: i32) QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadIcon(@ptrCast(self.ptr), name_str, @bitCast(group)) };
    }

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
    pub fn LoadMimeTypeIcon(self: KIconLoader, iconName: []const u8, group: i32) QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMimeTypeIcon(@ptrCast(self.ptr), iconName_str, @bitCast(group)) };
    }

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
    pub fn IconPath(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group_or_size: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_IconPath(@ptrCast(self.ptr), name_str, @bitCast(group_or_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.IconPath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn IconPath2(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group_or_size: i32, canReturnNull: bool, scale: f64) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_IconPath2(@ptrCast(self.ptr), name_str, @bitCast(group_or_size), canReturnNull, @bitCast(scale));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.IconPath2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn LoadMovie(self: KIconLoader, name: []const u8, group: i32) QMovie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMovie(@ptrCast(self.ptr), name_str, @bitCast(group)) };
    }

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
    pub fn MoviePath(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_MoviePath(@ptrCast(self.ptr), name_str, @bitCast(group));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.MoviePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn LoadAnimated(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.LoadAnimated: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.LoadAnimated: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#queryIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QueryIcons(self: KIconLoader, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIcons(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIcons: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIcons: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn QueryIcons2(self: KIconLoader, allocator: std.mem.Allocator, group_or_size: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIcons2(@ptrCast(self.ptr), @bitCast(group_or_size));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIcons2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIcons2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn QueryIconsByContext(self: KIconLoader, allocator: std.mem.Allocator, group_or_size: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIconsByContext(@ptrCast(self.ptr), @bitCast(group_or_size));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIconsByContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIconsByContext: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#hasContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` context: kiconloader_enums.Context `
    ///
    pub fn HasContext(self: KIconLoader, context: i32) bool {
        return qtc.KIconLoader_HasContext(@ptrCast(self.ptr), @bitCast(context));
    }

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
    pub fn QueryIconsByDir(self: KIconLoader, allocator: std.mem.Allocator, iconsDir: []const u8) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIconsByDir: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIconsByDir: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#searchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchPaths(self: KIconLoader, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_SearchPaths(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.SearchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.SearchPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#currentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn CurrentSize(self: KIconLoader, group: i32) i32 {
        return qtc.KIconLoader_CurrentSize(@ptrCast(self.ptr), @bitCast(group));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#theme)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn Theme(self: KIconLoader) KIconTheme {
        return .{ .ptr = qtc.KIconLoader_Theme(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn IconEffect(self: KIconLoader) KIconEffect {
        return .{ .ptr = qtc.KIconLoader_IconEffect(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#reconfigure)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` appname: []const u8 `
    ///
    pub fn Reconfigure(self: KIconLoader, appname: []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        qtc.KIconLoader_Reconfigure(@ptrCast(self.ptr), appname_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#unknown)
    ///
    pub fn Unknown() QPixmap {
        return .{ .ptr = qtc.KIconLoader_Unknown() };
    }

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
    pub fn DrawOverlays(self: KIconLoader, allocator: std.mem.Allocator, overlays: []const []const u8, pixmap: anytype, group: i32) void {
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconloader.DrawOverlays: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i|
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KIconLoader_DrawOverlays(@ptrCast(self.ptr), overlays_list, @ptrCast(pixmap.ptr), @bitCast(group));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#hasIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn HasIcon(self: KIconLoader, iconName: []const u8) bool {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return qtc.KIconLoader_HasIcon(@ptrCast(self.ptr), iconName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#setCustomPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetCustomPalette(self: KIconLoader, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.KIconLoader_SetCustomPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#customPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn CustomPalette(self: KIconLoader) QPalette {
        return .{ .ptr = qtc.KIconLoader_CustomPalette(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#resetPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn ResetPalette(self: KIconLoader) void {
        qtc.KIconLoader_ResetPalette(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#hasCustomPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn HasCustomPalette(self: KIconLoader) bool {
        return qtc.KIconLoader_HasCustomPalette(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#newIconLoader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn NewIconLoader(self: KIconLoader) void {
        qtc.KIconLoader_NewIconLoader(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#emitChange)
    ///
    /// ## Parameter(s):
    ///
    /// ` group: kiconloader_enums.Group `
    ///
    pub fn EmitChange(group: i32) void {
        qtc.KIconLoader_EmitChange(@bitCast(group));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconLoaderSettingsChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn IconLoaderSettingsChanged(self: KIconLoader) void {
        qtc.KIconLoader_IconLoaderSettingsChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconLoaderSettingsChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader) callconv(.c) void `
    ///
    pub fn OnIconLoaderSettingsChanged(self: KIconLoader, callback: *const fn (KIconLoader) callconv(.c) void) void {
        qtc.KIconLoader_Connect_IconLoaderSettingsChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` group: i32 `
    ///
    pub fn IconChanged(self: KIconLoader, group: i32) void {
        qtc.KIconLoader_IconChanged(@ptrCast(self.ptr), @bitCast(group));
    }

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#iconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KIconLoader `
    ///
    /// ` callback: *const fn (self: KIconLoader, group: i32) callconv(.c) void `
    ///
    pub fn OnIconChanged(self: KIconLoader, callback: *const fn (KIconLoader, i32) callconv(.c) void) void {
        qtc.KIconLoader_Connect_IconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn AddAppDir2(self: KIconLoader, appname: []const u8, themeBaseDir: []const u8) void {
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
    pub fn LoadIcon3(self: KIconLoader, name: []const u8, group: i32, size: i32) QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadIcon3(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size)) };
    }

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
    pub fn LoadIcon4(self: KIconLoader, name: []const u8, group: i32, size: i32, state: i32) QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadIcon4(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size), @bitCast(state)) };
    }

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
    pub fn LoadIcon5(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32, size: i32, state: i32, overlays: []const []const u8) QPixmap {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconloader.LoadIcon5: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i|
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadIcon5(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size), @bitCast(state), overlays_list) };
    }

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
    pub fn LoadMimeTypeIcon3(self: KIconLoader, iconName: []const u8, group: i32, size: i32) QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMimeTypeIcon3(@ptrCast(self.ptr), iconName_str, @bitCast(group), @bitCast(size)) };
    }

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
    pub fn LoadMimeTypeIcon4(self: KIconLoader, iconName: []const u8, group: i32, size: i32, state: i32) QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMimeTypeIcon4(@ptrCast(self.ptr), iconName_str, @bitCast(group), @bitCast(size), @bitCast(state)) };
    }

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
    pub fn LoadMimeTypeIcon5(self: KIconLoader, allocator: std.mem.Allocator, iconName: []const u8, group: i32, size: i32, state: i32, overlays: []const []const u8) QPixmap {
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconloader.LoadMimeTypeIcon5: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i|
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMimeTypeIcon5(@ptrCast(self.ptr), iconName_str, @bitCast(group), @bitCast(size), @bitCast(state), overlays_list) };
    }

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
    pub fn IconPath3(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group_or_size: i32, canReturnNull: bool) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_IconPath3(@ptrCast(self.ptr), name_str, @bitCast(group_or_size), canReturnNull);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.IconPath3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn LoadMovie3(self: KIconLoader, name: []const u8, group: i32, size: i32) QMovie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.KIconLoader_LoadMovie3(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size)) };
    }

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
    /// ` parent: QObject `
    ///
    pub fn LoadMovie4(self: KIconLoader, name: []const u8, group: i32, size: i32, parent: anytype) QMovie {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KIconLoader_LoadMovie4(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size), @ptrCast(parent.ptr)) };
    }

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
    pub fn MoviePath3(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32, size: i32) []const u8 {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        var _str = qtc.KIconLoader_MoviePath3(@ptrCast(self.ptr), name_str, @bitCast(group), @bitCast(size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.MoviePath3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn LoadAnimated3(self: KIconLoader, allocator: std.mem.Allocator, name: []const u8, group: i32, size: i32) []const []const u8 {
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
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.LoadAnimated3: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.LoadAnimated3: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn QueryIcons22(self: KIconLoader, allocator: std.mem.Allocator, group_or_size: i32, context: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIcons22(@ptrCast(self.ptr), @bitCast(group_or_size), @bitCast(context));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIcons22: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIcons22: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn QueryIconsByContext2(self: KIconLoader, allocator: std.mem.Allocator, group_or_size: i32, context: i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KIconLoader_QueryIconsByContext2(@ptrCast(self.ptr), @bitCast(group_or_size), @bitCast(context));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kiconloader.QueryIconsByContext2: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.QueryIconsByContext2: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn Reconfigure2(self: KIconLoader, allocator: std.mem.Allocator, appname: []const u8, extraSearchPaths: []const []const u8) void {
        const appname_str = qtc.libqt_string{
            .len = appname.len,
            .data = appname.ptr,
        };
        const extraSearchPaths_arr = allocator.alloc(qtc.libqt_string, extraSearchPaths.len) catch @panic("kiconloader.Reconfigure2: Memory allocation failed");
        defer allocator.free(extraSearchPaths_arr);
        for (extraSearchPaths, 0..extraSearchPaths.len) |item, i|
            extraSearchPaths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const extraSearchPaths_list = qtc.libqt_list{
            .len = extraSearchPaths.len,
            .data = extraSearchPaths_arr.ptr,
        };
        qtc.KIconLoader_Reconfigure2(@ptrCast(self.ptr), appname_str, extraSearchPaths_list);
    }

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
    pub fn DrawOverlays4(self: KIconLoader, allocator: std.mem.Allocator, overlays: []const []const u8, pixmap: anytype, group: i32, state: i32) void {
        const overlays_arr = allocator.alloc(qtc.libqt_string, overlays.len) catch @panic("kiconloader.DrawOverlays4: Memory allocation failed");
        defer allocator.free(overlays_arr);
        for (overlays, 0..overlays.len) |item, i|
            overlays_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const overlays_list = qtc.libqt_list{
            .len = overlays.len,
            .data = overlays_arr.ptr,
        };
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.KIconLoader_DrawOverlays4(@ptrCast(self.ptr), overlays_list, @ptrCast(pixmap.ptr), @bitCast(group), @bitCast(state));
    }

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
    pub fn ObjectName(self: KIconLoader, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kiconloader.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KIconLoader, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn IsWidgetType(self: KIconLoader) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn IsWindowType(self: KIconLoader) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn IsQuickItemType(self: KIconLoader) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn SignalsBlocked(self: KIconLoader) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KIconLoader, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn Thread(self: KIconLoader) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KIconLoader, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KIconLoader, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KIconLoader, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KIconLoader, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KIconLoader, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KIconLoader, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kiconloader.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KIconLoader, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KIconLoader, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KIconLoader, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KIconLoader, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn Disconnect3(self: KIconLoader) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KIconLoader, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn DumpObjectTree(self: KIconLoader) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn DumpObjectInfo(self: KIconLoader) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KIconLoader, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

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
    pub fn Property(self: KIconLoader, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KIconLoader, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kiconloader.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kiconloader.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn BindingStorage(self: KIconLoader) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn BindingStorage2(self: KIconLoader) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn Destroyed(self: KIconLoader) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KIconLoader, callback: *const fn (KIconLoader) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn Parent(self: KIconLoader) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KIconLoader, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    pub fn DeleteLater(self: KIconLoader) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KIconLoader, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KIconLoader, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KIconLoader `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KIconLoader, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

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
    pub fn Disconnect1(self: KIconLoader, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KIconLoader, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

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
    pub fn Disconnect32(self: KIconLoader, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

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
    pub fn Disconnect23(self: KIconLoader, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

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
    pub fn Destroyed1(self: KIconLoader, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KIconLoader, callback: *const fn (KIconLoader, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: KIconLoader, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIconLoader_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KIconLoader, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIconLoader_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KIconLoader, callback: *const fn (KIconLoader, QEvent) callconv(.c) bool) void {
        qtc.KIconLoader_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KIconLoader, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIconLoader_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KIconLoader, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KIconLoader_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KIconLoader, callback: *const fn (KIconLoader, QObject, QEvent) callconv(.c) bool) void {
        qtc.KIconLoader_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KIconLoader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIconLoader_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

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
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KIconLoader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KIconLoader_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KIconLoader, callback: *const fn (KIconLoader, QTimerEvent) callconv(.c) void) void {
        qtc.KIconLoader_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KIconLoader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIconLoader_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

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
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KIconLoader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KIconLoader_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KIconLoader, callback: *const fn (KIconLoader, QChildEvent) callconv(.c) void) void {
        qtc.KIconLoader_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KIconLoader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIconLoader_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KIconLoader, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KIconLoader_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KIconLoader, callback: *const fn (KIconLoader, QEvent) callconv(.c) void) void {
        qtc.KIconLoader_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KIconLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIconLoader_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

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
    pub fn SuperConnectNotify(self: KIconLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIconLoader_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KIconLoader, callback: *const fn (KIconLoader, QMetaMethod) callconv(.c) void) void {
        qtc.KIconLoader_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KIconLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIconLoader_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

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
    pub fn SuperDisconnectNotify(self: KIconLoader, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KIconLoader_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KIconLoader, callback: *const fn (KIconLoader, QMetaMethod) callconv(.c) void) void {
        qtc.KIconLoader_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KIconLoader) QObject {
        return .{ .ptr = qtc.KIconLoader_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

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
    pub fn SuperSender(self: KIconLoader) QObject {
        return .{ .ptr = qtc.KIconLoader_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KIconLoader, callback: *const fn () callconv(.c) QObject) void {
        qtc.KIconLoader_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KIconLoader) i32 {
        return qtc.KIconLoader_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

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
    pub fn SuperSenderSignalIndex(self: KIconLoader) i32 {
        return qtc.KIconLoader_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KIconLoader, callback: *const fn () callconv(.c) i32) void {
        qtc.KIconLoader_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KIconLoader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIconLoader_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

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
    pub fn SuperReceivers(self: KIconLoader, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KIconLoader_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KIconLoader, callback: *const fn (KIconLoader, [*:0]const u8) callconv(.c) i32) void {
        qtc.KIconLoader_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KIconLoader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIconLoader_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

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
    pub fn SuperIsSignalConnected(self: KIconLoader, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KIconLoader_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KIconLoader, callback: *const fn (KIconLoader, QMetaMethod) callconv(.c) bool) void {
        qtc.KIconLoader_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KIconLoader, callback: *const fn (KIconLoader, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kiconloader.html#dtor.KIconLoader)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KIconLoader `
    ///
    pub fn Delete(self: KIconLoader) void {
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

    /// ### [Upstream resources](https://api.kde.org/kde.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: KIconLoader `
    ///
    pub fn Icon(param1: []const u8, param2: anytype) QIcon {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(param2)._is_KIconLoader;
        return .{ .ptr = qtc.KDE_Icon(param1_str, @ptrCast(param2.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kde.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: KIconColors `
    ///
    /// ` param3: KIconLoader `
    ///
    pub fn Icon2(param1: []const u8, param2: anytype, param3: anytype) QIcon {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        comptime _ = @TypeOf(param2)._is_KIconColors;
        comptime _ = @TypeOf(param3)._is_KIconLoader;
        return .{ .ptr = qtc.KDE_Icon2(param1_str, @ptrCast(param2.ptr), @ptrCast(param3.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kde.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const []const u8 `
    ///
    /// ` param3: KIconLoader `
    ///
    pub fn Icon3(allocator: std.mem.Allocator, param1: []const u8, param2: []const []const u8, param3: anytype) QIcon {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_arr = allocator.alloc(qtc.libqt_string, param2.len) catch @panic("kde.Icon3: Memory allocation failed");
        defer allocator.free(param2_arr);
        for (param2, 0..param2.len) |item, i|
            param2_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const param2_list = qtc.libqt_list{
            .len = param2.len,
            .data = param2_arr.ptr,
        };
        comptime _ = @TypeOf(param3)._is_KIconLoader;
        return .{ .ptr = qtc.KDE_Icon3(param1_str, param2_list, @ptrCast(param3.ptr)) };
    }
};

/// ### [Upstream resources](https://api.kde.org/kiconloader.html#public-types)
pub const enums = struct {
    pub const Context = enum(i32) {
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

    pub const Type = enum(i32) {
        pub const Fixed: i32 = 0;
        pub const Scalable: i32 = 1;
        pub const Threshold: i32 = 2;
    };

    pub const MatchType = enum(i32) {
        pub const MatchExact: i32 = 0;
        pub const MatchBest: i32 = 1;
        pub const MatchBestOrGreaterSize: i32 = 2;
    };

    pub const Group = enum(i32) {
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

    pub const StdSizes = enum(i32) {
        pub const SizeSmall: i32 = 16;
        pub const SizeSmallMedium: i32 = 22;
        pub const SizeMedium: i32 = 32;
        pub const SizeLarge: i32 = 48;
        pub const SizeHuge: i32 = 64;
        pub const SizeEnormous: i32 = 128;
    };

    pub const States = enum(i32) {
        pub const DefaultState: i32 = 0;
        pub const ActiveState: i32 = 1;
        pub const DisabledState: i32 = 2;
        pub const SelectedState: i32 = 3;
        pub const LastState: i32 = 4;
    };
};
