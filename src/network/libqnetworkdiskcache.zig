const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QIODevice = @import("libqt6").QIODevice;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkCacheMetaData = @import("libqt6").QNetworkCacheMetaData;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html)
pub const QNetworkDiskCache = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkDiskCache,

    pub const _is_QNetworkDiskCache = {};
    pub const _is_QAbstractNetworkCache = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkDiskCache object in C++ memory
    ///
    pub fn new() QNetworkDiskCache {
        return .{ .ptr = qtc.QNetworkDiskCache_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkDiskCache object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QNetworkDiskCache {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QNetworkDiskCache_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn metaObject(self: QNetworkDiskCache) QMetaObject {
        return .{ .ptr = qtc.QNetworkDiskCache_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QNetworkDiskCache, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNetworkDiskCache_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn superMetaObject(self: QNetworkDiskCache) QMetaObject {
        return .{ .ptr = qtc.QNetworkDiskCache_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QNetworkDiskCache, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkDiskCache_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNetworkDiskCache_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QNetworkDiskCache, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkDiskCache_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QNetworkDiskCache, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkDiskCache_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNetworkDiskCache_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QNetworkDiskCache, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkDiskCache_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkDiskCache.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `cacheDirectory` instead
    ///
    pub const CacheDirectory = cacheDirectory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn cacheDirectory(self: QNetworkDiskCache, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkDiskCache_CacheDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkDiskCache.cacheDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCacheDirectory` instead
    ///
    pub const SetCacheDirectory = setCacheDirectory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setCacheDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` cacheDir: []const u8 `
    ///
    pub fn setCacheDirectory(self: QNetworkDiskCache, cacheDir: []const u8) void {
        const cacheDir_str = qtc.libqt_string{
            .len = cacheDir.len,
            .data = cacheDir.ptr,
        };
        qtc.QNetworkDiskCache_SetCacheDirectory(@ptrCast(self.ptr), cacheDir_str);
    }

    /// ### DEPRECATED: Use `maximumCacheSize` instead
    ///
    pub const MaximumCacheSize = maximumCacheSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#maximumCacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn maximumCacheSize(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_MaximumCacheSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumCacheSize` instead
    ///
    pub const SetMaximumCacheSize = setMaximumCacheSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setMaximumCacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` size: i64 `
    ///
    pub fn setMaximumCacheSize(self: QNetworkDiskCache, size: i64) void {
        qtc.QNetworkDiskCache_SetMaximumCacheSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `cacheSize` instead
    ///
    pub const CacheSize = cacheSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn cacheSize(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_CacheSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCacheSize` instead
    ///
    pub const OnCacheSize = onCacheSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onCacheSize(self: QNetworkDiskCache, callback: *const fn () callconv(.c) i64) void {
        qtc.QNetworkDiskCache_OnCacheSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCacheSize` instead
    ///
    pub const SuperCacheSize = superCacheSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn superCacheSize(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_SuperCacheSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn metaData(self: QNetworkDiskCache, url: anytype) QNetworkCacheMetaData {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QNetworkDiskCache_MetaData(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaData` instead
    ///
    pub const OnMetaData = onMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, url: QUrl) callconv(.c) QNetworkCacheMetaData `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMetaData(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QUrl) callconv(.c) QNetworkCacheMetaData) void {
        qtc.QNetworkDiskCache_OnMetaData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaData` instead
    ///
    pub const SuperMetaData = superMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn superMetaData(self: QNetworkDiskCache, url: anytype) QNetworkCacheMetaData {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QNetworkDiskCache_SuperMetaData(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `updateMetaData` instead
    ///
    pub const UpdateMetaData = updateMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _metaData: QNetworkCacheMetaData `
    ///
    pub fn updateMetaData(self: QNetworkDiskCache, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_QNetworkCacheMetaData;
        qtc.QNetworkDiskCache_UpdateMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateMetaData` instead
    ///
    pub const OnUpdateMetaData = onUpdateMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, metaData: QNetworkCacheMetaData) callconv(.c) void `
    ///
    pub fn onUpdateMetaData(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QNetworkCacheMetaData) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnUpdateMetaData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateMetaData` instead
    ///
    pub const SuperUpdateMetaData = superUpdateMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _metaData: QNetworkCacheMetaData `
    ///
    pub fn superUpdateMetaData(self: QNetworkDiskCache, _metaData: anytype) void {
        comptime _ = @TypeOf(_metaData)._is_QNetworkCacheMetaData;
        qtc.QNetworkDiskCache_SuperUpdateMetaData(@ptrCast(self.ptr), @ptrCast(_metaData.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn data(self: QNetworkDiskCache, url: anytype) QIODevice {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QNetworkDiskCache_Data(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, url: QUrl) callconv(.c) QIODevice `
    ///
    pub fn onData(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QUrl) callconv(.c) QIODevice) void {
        qtc.QNetworkDiskCache_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn superData(self: QNetworkDiskCache, url: anytype) QIODevice {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QNetworkDiskCache_SuperData(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn remove(self: QNetworkDiskCache, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkDiskCache_Remove(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `onRemove` instead
    ///
    pub const OnRemove = onRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, url: QUrl) callconv(.c) bool `
    ///
    pub fn onRemove(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QUrl) callconv(.c) bool) void {
        qtc.QNetworkDiskCache_OnRemove(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemove` instead
    ///
    pub const SuperRemove = superRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn superRemove(self: QNetworkDiskCache, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkDiskCache_SuperRemove(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `prepare` instead
    ///
    pub const Prepare = prepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _metaData: QNetworkCacheMetaData `
    ///
    pub fn prepare(self: QNetworkDiskCache, _metaData: anytype) QIODevice {
        comptime _ = @TypeOf(_metaData)._is_QNetworkCacheMetaData;
        return .{ .ptr = qtc.QNetworkDiskCache_Prepare(@ptrCast(self.ptr), @ptrCast(_metaData.ptr)) };
    }

    /// ### DEPRECATED: Use `onPrepare` instead
    ///
    pub const OnPrepare = onPrepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, metaData: QNetworkCacheMetaData) callconv(.c) QIODevice `
    ///
    pub fn onPrepare(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QNetworkCacheMetaData) callconv(.c) QIODevice) void {
        qtc.QNetworkDiskCache_OnPrepare(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPrepare` instead
    ///
    pub const SuperPrepare = superPrepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _metaData: QNetworkCacheMetaData `
    ///
    pub fn superPrepare(self: QNetworkDiskCache, _metaData: anytype) QIODevice {
        comptime _ = @TypeOf(_metaData)._is_QNetworkCacheMetaData;
        return .{ .ptr = qtc.QNetworkDiskCache_SuperPrepare(@ptrCast(self.ptr), @ptrCast(_metaData.ptr)) };
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` device: QIODevice `
    ///
    pub fn insert(self: QNetworkDiskCache, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QNetworkDiskCache_Insert(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `onInsert` instead
    ///
    pub const OnInsert = onInsert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, device: QIODevice) callconv(.c) void `
    ///
    pub fn onInsert(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QIODevice) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnInsert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsert` instead
    ///
    pub const SuperInsert = superInsert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` device: QIODevice `
    ///
    pub fn superInsert(self: QNetworkDiskCache, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QNetworkDiskCache_SuperInsert(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `fileMetaData` instead
    ///
    pub const FileMetaData = fileMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#fileMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn fileMetaData(self: QNetworkDiskCache, fileName: []const u8) QNetworkCacheMetaData {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QNetworkDiskCache_FileMetaData(@ptrCast(self.ptr), fileName_str) };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn clear(self: QNetworkDiskCache) void {
        qtc.QNetworkDiskCache_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClear` instead
    ///
    pub const OnClear = onClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClear(self: QNetworkDiskCache, callback: *const fn () callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClear` instead
    ///
    pub const SuperClear = superClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn superClear(self: QNetworkDiskCache) void {
        qtc.QNetworkDiskCache_SuperClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `expire` instead
    ///
    pub const Expire = expire;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn expire(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_Expire(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExpire` instead
    ///
    pub const OnExpire = onExpire;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onExpire(self: QNetworkDiskCache, callback: *const fn () callconv(.c) i64) void {
        qtc.QNetworkDiskCache_OnExpire(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superExpire` instead
    ///
    pub const SuperExpire = superExpire;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn superExpire(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_SuperExpire(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkDiskCache.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkDiskCache.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QNetworkDiskCache, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkDiskCache.objectName: Memory allocation failed");
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QNetworkDiskCache, name: []const u8) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn isWidgetType(self: QNetworkDiskCache) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn isWindowType(self: QNetworkDiskCache) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn isQuickItemType(self: QNetworkDiskCache) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn signalsBlocked(self: QNetworkDiskCache) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QNetworkDiskCache, b: bool) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn thread(self: QNetworkDiskCache) QThread {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QNetworkDiskCache, _thread: anytype) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QNetworkDiskCache, interval: i32) i32 {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QNetworkDiskCache, time: i64) i32 {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QNetworkDiskCache, id: i32) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QNetworkDiskCache, id: i32) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QNetworkDiskCache, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QNetworkDiskCache.children: Memory allocation failed");
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QNetworkDiskCache, _parent: anytype) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QNetworkDiskCache, filterObj: anytype) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QNetworkDiskCache, obj: anytype) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QNetworkDiskCache, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn disconnect3(self: QNetworkDiskCache) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QNetworkDiskCache, receiver: anytype) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn dumpObjectTree(self: QNetworkDiskCache) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn dumpObjectInfo(self: QNetworkDiskCache) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QNetworkDiskCache, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QNetworkDiskCache, name: [:0]const u8) QVariant {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QNetworkDiskCache, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QNetworkDiskCache.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkDiskCache.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn bindingStorage(self: QNetworkDiskCache) QBindingStorage {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn bindingStorage2(self: QNetworkDiskCache) QBindingStorage {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn destroyed(self: QNetworkDiskCache) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache) callconv(.c) void) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn parent(self: QNetworkDiskCache) QObject {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QNetworkDiskCache, classname: [:0]const u8) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn deleteLater(self: QNetworkDiskCache) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QNetworkDiskCache, interval: i32, timerType: i32) i32 {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QNetworkDiskCache, time: i64, timerType: i32) i32 {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QNetworkDiskCache, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QNetworkDiskCache, signal: [:0]const u8) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QNetworkDiskCache, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QNetworkDiskCache, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QNetworkDiskCache, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QNetworkDiskCache, param1: anytype) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QObject) callconv(.c) void) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QNetworkDiskCache, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkDiskCache_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QNetworkDiskCache, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkDiskCache_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QEvent) callconv(.c) bool) void {
        qtc.QNetworkDiskCache_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QNetworkDiskCache, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkDiskCache_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QNetworkDiskCache, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkDiskCache_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNetworkDiskCache_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QNetworkDiskCache, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNetworkDiskCache_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QNetworkDiskCache, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNetworkDiskCache_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QTimerEvent) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QNetworkDiskCache, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNetworkDiskCache_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QNetworkDiskCache, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNetworkDiskCache_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QChildEvent) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QNetworkDiskCache, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNetworkDiskCache_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QNetworkDiskCache, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNetworkDiskCache_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QEvent) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QNetworkDiskCache, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkDiskCache_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QNetworkDiskCache, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkDiskCache_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QNetworkDiskCache, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkDiskCache_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QNetworkDiskCache, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkDiskCache_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn sender(self: QNetworkDiskCache) QObject {
        return .{ .ptr = qtc.QNetworkDiskCache_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn superSender(self: QNetworkDiskCache) QObject {
        return .{ .ptr = qtc.QNetworkDiskCache_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QNetworkDiskCache, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNetworkDiskCache_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn senderSignalIndex(self: QNetworkDiskCache) i32 {
        return qtc.QNetworkDiskCache_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn superSenderSignalIndex(self: QNetworkDiskCache) i32 {
        return qtc.QNetworkDiskCache_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QNetworkDiskCache, callback: *const fn () callconv(.c) i32) void {
        qtc.QNetworkDiskCache_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QNetworkDiskCache, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkDiskCache_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QNetworkDiskCache, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkDiskCache_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNetworkDiskCache_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QNetworkDiskCache, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkDiskCache_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QNetworkDiskCache, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkDiskCache_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkDiskCache`
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QMetaMethod) callconv(.c) bool) void {
        qtc.QNetworkDiskCache_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#dtor.QNetworkDiskCache)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn delete(self: QNetworkDiskCache) void {
        qtc.QNetworkDiskCache_Delete(@ptrCast(self.ptr));
    }
};
