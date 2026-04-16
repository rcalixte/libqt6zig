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

    /// New constructs a new QNetworkDiskCache object.
    ///
    pub fn New() QNetworkDiskCache {
        return .{ .ptr = qtc.QNetworkDiskCache_new() };
    }

    /// New2 constructs a new QNetworkDiskCache object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QNetworkDiskCache {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QNetworkDiskCache_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn MetaObject(self: QNetworkDiskCache) QMetaObject {
        return .{ .ptr = qtc.QNetworkDiskCache_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QNetworkDiskCache, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNetworkDiskCache_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn SuperMetaObject(self: QNetworkDiskCache) QMetaObject {
        return .{ .ptr = qtc.QNetworkDiskCache_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QNetworkDiskCache, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkDiskCache_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNetworkDiskCache_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QNetworkDiskCache, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkDiskCache_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QNetworkDiskCache, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkDiskCache_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` callback: *const fn (self: QNetworkDiskCache, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNetworkDiskCache_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QNetworkDiskCache, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkDiskCache_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkdiskcache.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CacheDirectory(self: QNetworkDiskCache, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkDiskCache_CacheDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkdiskcache.CacheDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setCacheDirectory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` cacheDir: []const u8 `
    ///
    pub fn SetCacheDirectory(self: QNetworkDiskCache, cacheDir: []const u8) void {
        const cacheDir_str = qtc.libqt_string{
            .len = cacheDir.len,
            .data = cacheDir.ptr,
        };
        qtc.QNetworkDiskCache_SetCacheDirectory(@ptrCast(self.ptr), cacheDir_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#maximumCacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn MaximumCacheSize(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_MaximumCacheSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#setMaximumCacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` size: i64 `
    ///
    pub fn SetMaximumCacheSize(self: QNetworkDiskCache, size: i64) void {
        qtc.QNetworkDiskCache_SetMaximumCacheSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn CacheSize(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_CacheSize(@ptrCast(self.ptr));
    }

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
    pub fn OnCacheSize(self: QNetworkDiskCache, callback: *const fn () callconv(.c) i64) void {
        qtc.QNetworkDiskCache_OnCacheSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCacheSize` instead
    ///
    pub const QBaseCacheSize = SuperCacheSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#cacheSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn SuperCacheSize(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_SuperCacheSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn MetaData(self: QNetworkDiskCache, url: anytype) QNetworkCacheMetaData {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QNetworkDiskCache_MetaData(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

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
    pub fn OnMetaData(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QUrl) callconv(.c) QNetworkCacheMetaData) void {
        qtc.QNetworkDiskCache_OnMetaData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaData` instead
    ///
    pub const QBaseMetaData = SuperMetaData;

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
    pub fn SuperMetaData(self: QNetworkDiskCache, url: anytype) QNetworkCacheMetaData {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QNetworkDiskCache_SuperMetaData(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` metaData: QNetworkCacheMetaData `
    ///
    pub fn UpdateMetaData(self: QNetworkDiskCache, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_QNetworkCacheMetaData;
        qtc.QNetworkDiskCache_UpdateMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

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
    pub fn OnUpdateMetaData(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QNetworkCacheMetaData) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnUpdateMetaData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateMetaData` instead
    ///
    pub const QBaseUpdateMetaData = SuperUpdateMetaData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#updateMetaData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` metaData: QNetworkCacheMetaData `
    ///
    pub fn SuperUpdateMetaData(self: QNetworkDiskCache, metaData: anytype) void {
        comptime _ = @TypeOf(metaData)._is_QNetworkCacheMetaData;
        qtc.QNetworkDiskCache_SuperUpdateMetaData(@ptrCast(self.ptr), @ptrCast(metaData.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn Data(self: QNetworkDiskCache, url: anytype) QIODevice {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QNetworkDiskCache_Data(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

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
    pub fn OnData(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QUrl) callconv(.c) QIODevice) void {
        qtc.QNetworkDiskCache_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

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
    pub fn SuperData(self: QNetworkDiskCache, url: anytype) QIODevice {
        comptime _ = @TypeOf(url)._is_QUrl;
        return .{ .ptr = qtc.QNetworkDiskCache_SuperData(@ptrCast(self.ptr), @ptrCast(url.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` url: QUrl `
    ///
    pub fn Remove(self: QNetworkDiskCache, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkDiskCache_Remove(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

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
    pub fn OnRemove(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QUrl) callconv(.c) bool) void {
        qtc.QNetworkDiskCache_OnRemove(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemove` instead
    ///
    pub const QBaseRemove = SuperRemove;

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
    pub fn SuperRemove(self: QNetworkDiskCache, url: anytype) bool {
        comptime _ = @TypeOf(url)._is_QUrl;
        return qtc.QNetworkDiskCache_SuperRemove(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` metaData: QNetworkCacheMetaData `
    ///
    pub fn Prepare(self: QNetworkDiskCache, metaData: anytype) QIODevice {
        comptime _ = @TypeOf(metaData)._is_QNetworkCacheMetaData;
        return .{ .ptr = qtc.QNetworkDiskCache_Prepare(@ptrCast(self.ptr), @ptrCast(metaData.ptr)) };
    }

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
    pub fn OnPrepare(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QNetworkCacheMetaData) callconv(.c) QIODevice) void {
        qtc.QNetworkDiskCache_OnPrepare(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPrepare` instead
    ///
    pub const QBasePrepare = SuperPrepare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#prepare)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` metaData: QNetworkCacheMetaData `
    ///
    pub fn SuperPrepare(self: QNetworkDiskCache, metaData: anytype) QIODevice {
        comptime _ = @TypeOf(metaData)._is_QNetworkCacheMetaData;
        return .{ .ptr = qtc.QNetworkDiskCache_SuperPrepare(@ptrCast(self.ptr), @ptrCast(metaData.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` device: QIODevice `
    ///
    pub fn Insert(self: QNetworkDiskCache, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QNetworkDiskCache_Insert(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

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
    pub fn OnInsert(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QIODevice) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnInsert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsert` instead
    ///
    pub const QBaseInsert = SuperInsert;

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
    pub fn SuperInsert(self: QNetworkDiskCache, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QNetworkDiskCache_SuperInsert(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#fileMetaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn FileMetaData(self: QNetworkDiskCache, fileName: []const u8) QNetworkCacheMetaData {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        return .{ .ptr = qtc.QNetworkDiskCache_FileMetaData(@ptrCast(self.ptr), fileName_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn Clear(self: QNetworkDiskCache) void {
        qtc.QNetworkDiskCache_Clear(@ptrCast(self.ptr));
    }

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
    pub fn OnClear(self: QNetworkDiskCache, callback: *const fn () callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn SuperClear(self: QNetworkDiskCache) void {
        qtc.QNetworkDiskCache_SuperClear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn Expire(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_Expire(@ptrCast(self.ptr));
    }

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
    pub fn OnExpire(self: QNetworkDiskCache, callback: *const fn () callconv(.c) i64) void {
        qtc.QNetworkDiskCache_OnExpire(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperExpire` instead
    ///
    pub const QBaseExpire = SuperExpire;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#expire)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn SuperExpire(self: QNetworkDiskCache) i64 {
        return qtc.QNetworkDiskCache_SuperExpire(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkdiskcache.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkdiskcache.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ObjectName(self: QNetworkDiskCache, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkdiskcache.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QNetworkDiskCache, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn IsWidgetType(self: QNetworkDiskCache) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn IsWindowType(self: QNetworkDiskCache) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn IsQuickItemType(self: QNetworkDiskCache) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn SignalsBlocked(self: QNetworkDiskCache) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QNetworkDiskCache, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn Thread(self: QNetworkDiskCache) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QNetworkDiskCache, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QNetworkDiskCache, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QNetworkDiskCache, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QNetworkDiskCache, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QNetworkDiskCache, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QNetworkDiskCache, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qnetworkdiskcache.Children: Memory allocation failed");
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QNetworkDiskCache, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QNetworkDiskCache, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QNetworkDiskCache, obj: anytype) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QNetworkDiskCache, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn Disconnect3(self: QNetworkDiskCache) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QNetworkDiskCache, receiver: anytype) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn DumpObjectTree(self: QNetworkDiskCache) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn DumpObjectInfo(self: QNetworkDiskCache) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QNetworkDiskCache, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QNetworkDiskCache, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QNetworkDiskCache, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnetworkdiskcache.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkdiskcache.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn BindingStorage(self: QNetworkDiskCache) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn BindingStorage2(self: QNetworkDiskCache) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn Destroyed(self: QNetworkDiskCache) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn Parent(self: QNetworkDiskCache) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QNetworkDiskCache, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn DeleteLater(self: QNetworkDiskCache) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QNetworkDiskCache, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QNetworkDiskCache, time: i64, timerType: i32) i32 {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QNetworkDiskCache, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QNetworkDiskCache, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QNetworkDiskCache, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QNetworkDiskCache, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QNetworkDiskCache, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QNetworkDiskCache, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QObject) callconv(.c) void) void {
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QNetworkDiskCache, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkDiskCache_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QNetworkDiskCache, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkDiskCache_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QEvent) callconv(.c) bool) void {
        qtc.QNetworkDiskCache_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QNetworkDiskCache, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkDiskCache_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QNetworkDiskCache, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkDiskCache_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNetworkDiskCache_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QNetworkDiskCache, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNetworkDiskCache_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QNetworkDiskCache, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNetworkDiskCache_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QTimerEvent) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QNetworkDiskCache, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNetworkDiskCache_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QNetworkDiskCache, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNetworkDiskCache_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QChildEvent) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QNetworkDiskCache, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNetworkDiskCache_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QNetworkDiskCache, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNetworkDiskCache_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QEvent) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QNetworkDiskCache, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkDiskCache_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QNetworkDiskCache, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkDiskCache_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QNetworkDiskCache, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkDiskCache_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QNetworkDiskCache, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkDiskCache_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkDiskCache_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QNetworkDiskCache) QObject {
        return .{ .ptr = qtc.QNetworkDiskCache_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn SuperSender(self: QNetworkDiskCache) QObject {
        return .{ .ptr = qtc.QNetworkDiskCache_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QNetworkDiskCache, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNetworkDiskCache_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QNetworkDiskCache) i32 {
        return qtc.QNetworkDiskCache_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    pub fn SuperSenderSignalIndex(self: QNetworkDiskCache) i32 {
        return qtc.QNetworkDiskCache_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QNetworkDiskCache, callback: *const fn () callconv(.c) i32) void {
        qtc.QNetworkDiskCache_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QNetworkDiskCache, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkDiskCache_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QNetworkDiskCache, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkDiskCache_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNetworkDiskCache_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QNetworkDiskCache, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkDiskCache_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkDiskCache `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QNetworkDiskCache, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkDiskCache_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, QMetaMethod) callconv(.c) bool) void {
        qtc.QNetworkDiskCache_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QNetworkDiskCache, callback: *const fn (QNetworkDiskCache, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdiskcache.html#dtor.QNetworkDiskCache)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkDiskCache `
    ///
    pub fn Delete(self: QNetworkDiskCache) void {
        qtc.QNetworkDiskCache_Delete(@ptrCast(self.ptr));
    }
};
