const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHttpMultiPart = @import("libqt6").QHttpMultiPart;
const QIODevice = @import("libqt6").QIODevice;
const QJsonDocument = @import("libqt6").QJsonDocument;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkAccessManager = @import("libqt6").QNetworkAccessManager;
const QNetworkReply = @import("libqt6").QNetworkReply;
const QNetworkRequest = @import("libqt6").QNetworkRequest;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");
const ArrayMap_constu8_QVariant = std.array_hash_map.String(QVariant);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html)
pub const QRestAccessManager = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QRestAccessManager,

    pub const _is_QRestAccessManager = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QRestAccessManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` manager: QNetworkAccessManager `
    ///
    pub fn new(manager: anytype) QRestAccessManager {
        comptime _ = @TypeOf(manager)._is_QNetworkAccessManager;
        return .{ .ptr = qtc.QRestAccessManager_new(@ptrCast(manager.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QRestAccessManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` manager: QNetworkAccessManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(manager: anytype, _parent: anytype) QRestAccessManager {
        comptime _ = @TypeOf(manager)._is_QNetworkAccessManager;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QRestAccessManager_new2(@ptrCast(manager.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    pub fn metaObject(self: QRestAccessManager) QMetaObject {
        return .{ .ptr = qtc.QRestAccessManager_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QRestAccessManager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QRestAccessManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QRestAccessManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    pub fn superMetaObject(self: QRestAccessManager) QMetaObject {
        return .{ .ptr = qtc.QRestAccessManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QRestAccessManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QRestAccessManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` callback: *const fn (self: QRestAccessManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QRestAccessManager, callback: *const fn (QRestAccessManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QRestAccessManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QRestAccessManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QRestAccessManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QRestAccessManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QRestAccessManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` callback: *const fn (self: QRestAccessManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QRestAccessManager, callback: *const fn (QRestAccessManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QRestAccessManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QRestAccessManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QRestAccessManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRestAccessManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `networkAccessManager` instead
    ///
    pub const NetworkAccessManager = networkAccessManager;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#networkAccessManager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    pub fn networkAccessManager(self: QRestAccessManager) QNetworkAccessManager {
        return .{ .ptr = qtc.QRestAccessManager_NetworkAccessManager(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `deleteResource` instead
    ///
    pub const DeleteResource = deleteResource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#deleteResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn deleteResource(self: QRestAccessManager, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.QRestAccessManager_DeleteResource(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `head` instead
    ///
    pub const Head = head;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#head)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn head(self: QRestAccessManager, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.QRestAccessManager_Head(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `get` instead
    ///
    pub const Get = get;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn get(self: QRestAccessManager, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.QRestAccessManager_Get(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `get2` instead
    ///
    pub const Get2 = get2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn get2(self: QRestAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QRestAccessManager_Get2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `get3` instead
    ///
    pub const Get3 = get3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QJsonDocument `
    ///
    pub fn get3(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QJsonDocument;
        return .{ .ptr = qtc.QRestAccessManager_Get3(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `get4` instead
    ///
    pub const Get4 = get4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn get4(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QRestAccessManager_Get4(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `post` instead
    ///
    pub const Post = post;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QJsonDocument `
    ///
    pub fn post(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QJsonDocument;
        return .{ .ptr = qtc.QRestAccessManager_Post(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `post2` instead
    ///
    pub const Post2 = post2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: ArrayMap_constu8_QVariant `
    ///
    pub fn post2(self: QRestAccessManager, allocator: std.mem.Allocator, request: anytype, data: ArrayMap_constu8_QVariant) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_count = data.count();
        const data_keys = allocator.alloc(qtc.libqt_string, data_count) catch @panic("QRestAccessManager.post2: Memory allocation failed");
        defer allocator.free(data_keys);
        const data_values = allocator.alloc(QtC.QVariant, data_count) catch @panic("QRestAccessManager.post2: Memory allocation failed");
        defer allocator.free(data_values);
        var i: usize = 0;
        var data_it = data.iterator();
        while (data_it.next()) |it_entry| : (i += 1) {
            const data_key = it_entry.key_ptr.*;
            data_keys[i] = qtc.libqt_string{
                .len = data_key.len,
                .data = data_key.ptr,
            };
            data_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const data_map = qtc.libqt_map{
            .len = data_count,
            .keys = @ptrCast(data_keys.ptr),
            .values = @ptrCast(data_values.ptr),
        };
        return .{ .ptr = qtc.QRestAccessManager_Post2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_map) };
    }

    /// ### DEPRECATED: Use `post3` instead
    ///
    pub const Post3 = post3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn post3(self: QRestAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QRestAccessManager_Post3(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `post4` instead
    ///
    pub const Post4 = post4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QHttpMultiPart `
    ///
    pub fn post4(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QHttpMultiPart;
        return .{ .ptr = qtc.QRestAccessManager_Post4(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `post5` instead
    ///
    pub const Post5 = post5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn post5(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QRestAccessManager_Post5(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `put` instead
    ///
    pub const Put = put;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QJsonDocument `
    ///
    pub fn put(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QJsonDocument;
        return .{ .ptr = qtc.QRestAccessManager_Put(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `put2` instead
    ///
    pub const Put2 = put2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: ArrayMap_constu8_QVariant `
    ///
    pub fn put2(self: QRestAccessManager, allocator: std.mem.Allocator, request: anytype, data: ArrayMap_constu8_QVariant) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_count = data.count();
        const data_keys = allocator.alloc(qtc.libqt_string, data_count) catch @panic("QRestAccessManager.put2: Memory allocation failed");
        defer allocator.free(data_keys);
        const data_values = allocator.alloc(QtC.QVariant, data_count) catch @panic("QRestAccessManager.put2: Memory allocation failed");
        defer allocator.free(data_values);
        var i: usize = 0;
        var data_it = data.iterator();
        while (data_it.next()) |it_entry| : (i += 1) {
            const data_key = it_entry.key_ptr.*;
            data_keys[i] = qtc.libqt_string{
                .len = data_key.len,
                .data = data_key.ptr,
            };
            data_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const data_map = qtc.libqt_map{
            .len = data_count,
            .keys = @ptrCast(data_keys.ptr),
            .values = @ptrCast(data_values.ptr),
        };
        return .{ .ptr = qtc.QRestAccessManager_Put2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_map) };
    }

    /// ### DEPRECATED: Use `put3` instead
    ///
    pub const Put3 = put3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn put3(self: QRestAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QRestAccessManager_Put3(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `put4` instead
    ///
    pub const Put4 = put4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QHttpMultiPart `
    ///
    pub fn put4(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QHttpMultiPart;
        return .{ .ptr = qtc.QRestAccessManager_Put4(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `put5` instead
    ///
    pub const Put5 = put5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn put5(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QRestAccessManager_Put5(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `patch` instead
    ///
    pub const Patch = patch;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QJsonDocument `
    ///
    pub fn patch(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QJsonDocument;
        return .{ .ptr = qtc.QRestAccessManager_Patch(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `patch2` instead
    ///
    pub const Patch2 = patch2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: ArrayMap_constu8_QVariant `
    ///
    pub fn patch2(self: QRestAccessManager, allocator: std.mem.Allocator, request: anytype, data: ArrayMap_constu8_QVariant) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_count = data.count();
        const data_keys = allocator.alloc(qtc.libqt_string, data_count) catch @panic("QRestAccessManager.patch2: Memory allocation failed");
        defer allocator.free(data_keys);
        const data_values = allocator.alloc(QtC.QVariant, data_count) catch @panic("QRestAccessManager.patch2: Memory allocation failed");
        defer allocator.free(data_values);
        var i: usize = 0;
        var data_it = data.iterator();
        while (data_it.next()) |it_entry| : (i += 1) {
            const data_key = it_entry.key_ptr.*;
            data_keys[i] = qtc.libqt_string{
                .len = data_key.len,
                .data = data_key.ptr,
            };
            data_values[i] = @ptrCast(it_entry.value_ptr.*.ptr);
        }
        const data_map = qtc.libqt_map{
            .len = data_count,
            .keys = @ptrCast(data_keys.ptr),
            .values = @ptrCast(data_values.ptr),
        };
        return .{ .ptr = qtc.QRestAccessManager_Patch2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_map) };
    }

    /// ### DEPRECATED: Use `patch3` instead
    ///
    pub const Patch3 = patch3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn patch3(self: QRestAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QRestAccessManager_Patch3(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `patch4` instead
    ///
    pub const Patch4 = patch4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn patch4(self: QRestAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QRestAccessManager_Patch4(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `sendCustomRequest` instead
    ///
    pub const SendCustomRequest = sendCustomRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` method: []u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn sendCustomRequest(self: QRestAccessManager, request: anytype, method: []u8, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QRestAccessManager_SendCustomRequest(@ptrCast(self.ptr), @ptrCast(request.ptr), method_str, data_str) };
    }

    /// ### DEPRECATED: Use `sendCustomRequest2` instead
    ///
    pub const SendCustomRequest2 = sendCustomRequest2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` method: []u8 `
    ///
    /// ` data: QIODevice `
    ///
    pub fn sendCustomRequest2(self: QRestAccessManager, request: anytype, method: []u8, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QRestAccessManager_SendCustomRequest2(@ptrCast(self.ptr), @ptrCast(request.ptr), method_str, @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `sendCustomRequest3` instead
    ///
    pub const SendCustomRequest3 = sendCustomRequest3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QRestAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` method: []u8 `
    ///
    /// ` data: QHttpMultiPart `
    ///
    pub fn sendCustomRequest3(self: QRestAccessManager, request: anytype, method: []u8, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        comptime _ = @TypeOf(data)._is_QHttpMultiPart;
        return .{ .ptr = qtc.QRestAccessManager_SendCustomRequest3(@ptrCast(self.ptr), @ptrCast(request.ptr), method_str, @ptrCast(data.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRestAccessManager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRestAccessManager.tr3: Memory allocation failed");
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
    /// ` self: QRestAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QRestAccessManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QRestAccessManager.objectName: Memory allocation failed");
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
    /// ` self: QRestAccessManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QRestAccessManager, name: []const u8) void {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn isWidgetType(self: QRestAccessManager) bool {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn isWindowType(self: QRestAccessManager) bool {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn isQuickItemType(self: QRestAccessManager) bool {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn signalsBlocked(self: QRestAccessManager) bool {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QRestAccessManager, b: bool) bool {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn thread(self: QRestAccessManager) QThread {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QRestAccessManager, _thread: anytype) bool {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QRestAccessManager, interval: i32) i32 {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QRestAccessManager, time: i64) i32 {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QRestAccessManager, id: i32) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QRestAccessManager, id: i32) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QRestAccessManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QRestAccessManager.children: Memory allocation failed");
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QRestAccessManager, _parent: anytype) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QRestAccessManager, filterObj: anytype) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QRestAccessManager, obj: anytype) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QRestAccessManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn disconnect3(self: QRestAccessManager) bool {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QRestAccessManager, receiver: anytype) bool {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn dumpObjectTree(self: QRestAccessManager) void {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn dumpObjectInfo(self: QRestAccessManager) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QRestAccessManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QRestAccessManager, name: [:0]const u8) QVariant {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QRestAccessManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QRestAccessManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QRestAccessManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QRestAccessManager `
    ///
    pub fn bindingStorage(self: QRestAccessManager) QBindingStorage {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn bindingStorage2(self: QRestAccessManager) QBindingStorage {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn destroyed(self: QRestAccessManager) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` callback: *const fn (self: QRestAccessManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QRestAccessManager, callback: *const fn (QRestAccessManager) callconv(.c) void) void {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn parent(self: QRestAccessManager) QObject {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QRestAccessManager, classname: [:0]const u8) bool {
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
    /// ` self: QRestAccessManager `
    ///
    pub fn deleteLater(self: QRestAccessManager) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QRestAccessManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QRestAccessManager, time: i64, timerType: i32) i32 {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QRestAccessManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QRestAccessManager, signal: [:0]const u8) bool {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QRestAccessManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QRestAccessManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QRestAccessManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QRestAccessManager, param1: anytype) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` callback: *const fn (self: QRestAccessManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QRestAccessManager, callback: *const fn (QRestAccessManager, QObject) callconv(.c) void) void {
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QRestAccessManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QRestAccessManager_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QRestAccessManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QRestAccessManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn (self: QRestAccessManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QRestAccessManager, callback: *const fn (QRestAccessManager, QEvent) callconv(.c) bool) void {
        qtc.QRestAccessManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QRestAccessManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QRestAccessManager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QRestAccessManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QRestAccessManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn (self: QRestAccessManager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QRestAccessManager, callback: *const fn (QRestAccessManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.QRestAccessManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QRestAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QRestAccessManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QRestAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QRestAccessManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn (self: QRestAccessManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QRestAccessManager, callback: *const fn (QRestAccessManager, QTimerEvent) callconv(.c) void) void {
        qtc.QRestAccessManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QRestAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QRestAccessManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QRestAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QRestAccessManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn (self: QRestAccessManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QRestAccessManager, callback: *const fn (QRestAccessManager, QChildEvent) callconv(.c) void) void {
        qtc.QRestAccessManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QRestAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QRestAccessManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QRestAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QRestAccessManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn (self: QRestAccessManager, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QRestAccessManager, callback: *const fn (QRestAccessManager, QEvent) callconv(.c) void) void {
        qtc.QRestAccessManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QRestAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QRestAccessManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QRestAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QRestAccessManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn (self: QRestAccessManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QRestAccessManager, callback: *const fn (QRestAccessManager, QMetaMethod) callconv(.c) void) void {
        qtc.QRestAccessManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QRestAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QRestAccessManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QRestAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QRestAccessManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn (self: QRestAccessManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QRestAccessManager, callback: *const fn (QRestAccessManager, QMetaMethod) callconv(.c) void) void {
        qtc.QRestAccessManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    pub fn sender(self: QRestAccessManager) QObject {
        return .{ .ptr = qtc.QRestAccessManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QRestAccessManager `
    ///
    pub fn superSender(self: QRestAccessManager) QObject {
        return .{ .ptr = qtc.QRestAccessManager_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QRestAccessManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.QRestAccessManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    pub fn senderSignalIndex(self: QRestAccessManager) i32 {
        return qtc.QRestAccessManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QRestAccessManager `
    ///
    pub fn superSenderSignalIndex(self: QRestAccessManager) i32 {
        return qtc.QRestAccessManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QRestAccessManager, callback: *const fn () callconv(.c) i32) void {
        qtc.QRestAccessManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QRestAccessManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QRestAccessManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QRestAccessManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QRestAccessManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn (self: QRestAccessManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QRestAccessManager, callback: *const fn (QRestAccessManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.QRestAccessManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QRestAccessManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QRestAccessManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QRestAccessManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QRestAccessManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QRestAccessManager`
    ///
    /// ` callback: *const fn (self: QRestAccessManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QRestAccessManager, callback: *const fn (QRestAccessManager, QMetaMethod) callconv(.c) bool) void {
        qtc.QRestAccessManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QRestAccessManager `
    ///
    /// ` callback: *const fn (self: QRestAccessManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QRestAccessManager, callback: *const fn (QRestAccessManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qrestaccessmanager.html#dtor.QRestAccessManager)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QRestAccessManager `
    ///
    pub fn delete(self: QRestAccessManager) void {
        qtc.QRestAccessManager_Delete(@ptrCast(self.ptr));
    }
};
