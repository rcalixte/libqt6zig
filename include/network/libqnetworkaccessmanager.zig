const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractNetworkCache = @import("libqt6").QAbstractNetworkCache;
const QAuthenticator = @import("libqt6").QAuthenticator;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHstsPolicy = @import("libqt6").QHstsPolicy;
const QHttpMultiPart = @import("libqt6").QHttpMultiPart;
const QIODevice = @import("libqt6").QIODevice;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkCookieJar = @import("libqt6").QNetworkCookieJar;
const QNetworkProxy = @import("libqt6").QNetworkProxy;
const QNetworkProxyFactory = @import("libqt6").QNetworkProxyFactory;
const QNetworkReply = @import("libqt6").QNetworkReply;
const QNetworkRequest = @import("libqt6").QNetworkRequest;
const QObject = @import("libqt6").QObject;
const QSslConfiguration = @import("libqt6").QSslConfiguration;
const QSslError = @import("libqt6").QSslError;
const QSslPreSharedKeyAuthenticator = @import("libqt6").QSslPreSharedKeyAuthenticator;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnetworkaccessmanager_enums = enums;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html)
pub const QNetworkAccessManager = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkAccessManager,

    pub const _is_QNetworkAccessManager = {};
    pub const _is_QObject = {};

    /// New constructs a new QNetworkAccessManager object.
    ///
    pub fn New() QNetworkAccessManager {
        return .{ .ptr = qtc.QNetworkAccessManager_new() };
    }

    /// New2 constructs a new QNetworkAccessManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QNetworkAccessManager {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QNetworkAccessManager_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn MetaObject(self: QNetworkAccessManager) QMetaObject {
        return .{ .ptr = qtc.QNetworkAccessManager_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QNetworkAccessManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNetworkAccessManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn SuperMetaObject(self: QNetworkAccessManager) QMetaObject {
        return .{ .ptr = qtc.QNetworkAccessManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QNetworkAccessManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkAccessManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNetworkAccessManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QNetworkAccessManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkAccessManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QNetworkAccessManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QNetworkAccessManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSchemes(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SupportedSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qnetworkaccessmanager.SupportedSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkaccessmanager.SupportedSchemes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnSupportedSchemes(self: QNetworkAccessManager, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedSchemes` instead
    ///
    pub const QBaseSupportedSchemes = SuperSupportedSchemes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSupportedSchemes(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SuperSupportedSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qnetworkaccessmanager.SupportedSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkaccessmanager.SupportedSchemes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearAccessCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn ClearAccessCache(self: QNetworkAccessManager) void {
        qtc.QNetworkAccessManager_ClearAccessCache(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearConnectionCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn ClearConnectionCache(self: QNetworkAccessManager) void {
        qtc.QNetworkAccessManager_ClearConnectionCache(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn Proxy(self: QNetworkAccessManager) QNetworkProxy {
        return .{ .ptr = qtc.QNetworkAccessManager_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` proxy: QNetworkProxy `
    ///
    pub fn SetProxy(self: QNetworkAccessManager, proxy: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QNetworkProxy;
        qtc.QNetworkAccessManager_SetProxy(@ptrCast(self.ptr), @ptrCast(proxy.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn ProxyFactory(self: QNetworkAccessManager) QNetworkProxyFactory {
        return .{ .ptr = qtc.QNetworkAccessManager_ProxyFactory(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxyFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` factory: QNetworkProxyFactory `
    ///
    pub fn SetProxyFactory(self: QNetworkAccessManager, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_QNetworkProxyFactory;
        qtc.QNetworkAccessManager_SetProxyFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn Cache(self: QNetworkAccessManager) QAbstractNetworkCache {
        return .{ .ptr = qtc.QNetworkAccessManager_Cache(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` cache: QAbstractNetworkCache `
    ///
    pub fn SetCache(self: QNetworkAccessManager, cache: anytype) void {
        comptime _ = @TypeOf(cache)._is_QAbstractNetworkCache;
        qtc.QNetworkAccessManager_SetCache(@ptrCast(self.ptr), @ptrCast(cache.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cookieJar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn CookieJar(self: QNetworkAccessManager) QNetworkCookieJar {
        return .{ .ptr = qtc.QNetworkAccessManager_CookieJar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCookieJar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` cookieJar: QNetworkCookieJar `
    ///
    pub fn SetCookieJar(self: QNetworkAccessManager, cookieJar: anytype) void {
        comptime _ = @TypeOf(cookieJar)._is_QNetworkCookieJar;
        qtc.QNetworkAccessManager_SetCookieJar(@ptrCast(self.ptr), @ptrCast(cookieJar.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setStrictTransportSecurityEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetStrictTransportSecurityEnabled(self: QNetworkAccessManager, enabled: bool) void {
        qtc.QNetworkAccessManager_SetStrictTransportSecurityEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn IsStrictTransportSecurityEnabled(self: QNetworkAccessManager) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnableStrictTransportSecurityStore(self: QNetworkAccessManager, enabled: bool) void {
        qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityStoreEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn IsStrictTransportSecurityStoreEnabled(self: QNetworkAccessManager) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#addStrictTransportSecurityHosts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` knownHosts: []QHstsPolicy `
    ///
    pub fn AddStrictTransportSecurityHosts(self: QNetworkAccessManager, knownHosts: []QHstsPolicy) void {
        const knownHosts_list = qtc.libqt_list{
            .len = knownHosts.len,
            .data = @ptrCast(knownHosts.ptr),
        };
        qtc.QNetworkAccessManager_AddStrictTransportSecurityHosts(@ptrCast(self.ptr), knownHosts_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#strictTransportSecurityHosts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StrictTransportSecurityHosts(self: QNetworkAccessManager, allocator: std.mem.Allocator) []QHstsPolicy {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_StrictTransportSecurityHosts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QHstsPolicy, _arr.len) catch @panic("qnetworkaccessmanager.StrictTransportSecurityHosts: Memory allocation failed");
        const _data: [*]QtC.QHstsPolicy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#head)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn Head(self: QNetworkAccessManager, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.QNetworkAccessManager_Head(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn Get(self: QNetworkAccessManager, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.QNetworkAccessManager_Get(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn Get2(self: QNetworkAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_Get2(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Get3(self: QNetworkAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QNetworkAccessManager_Get3(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn Post(self: QNetworkAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_Post(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Post2(self: QNetworkAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QNetworkAccessManager_Post2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: QIODevice `
    ///
    pub fn Put(self: QNetworkAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_Put(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Put2(self: QNetworkAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QNetworkAccessManager_Put2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#deleteResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn DeleteResource(self: QNetworkAccessManager, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.QNetworkAccessManager_DeleteResource(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` verb: []u8 `
    ///
    pub fn SendCustomRequest(self: QNetworkAccessManager, request: anytype, verb: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        return .{ .ptr = qtc.QNetworkAccessManager_SendCustomRequest(@ptrCast(self.ptr), @ptrCast(request.ptr), verb_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` verb: []u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn SendCustomRequest2(self: QNetworkAccessManager, request: anytype, verb: []u8, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QNetworkAccessManager_SendCustomRequest2(@ptrCast(self.ptr), @ptrCast(request.ptr), verb_str, data_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` multiPart: QHttpMultiPart `
    ///
    pub fn Post4(self: QNetworkAccessManager, request: anytype, multiPart: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(multiPart)._is_QHttpMultiPart;
        return .{ .ptr = qtc.QNetworkAccessManager_Post4(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(multiPart.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` multiPart: QHttpMultiPart `
    ///
    pub fn Put4(self: QNetworkAccessManager, request: anytype, multiPart: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(multiPart)._is_QHttpMultiPart;
        return .{ .ptr = qtc.QNetworkAccessManager_Put4(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(multiPart.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` verb: []u8 `
    ///
    /// ` multiPart: QHttpMultiPart `
    ///
    pub fn SendCustomRequest3(self: QNetworkAccessManager, request: anytype, verb: []u8, multiPart: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        comptime _ = @TypeOf(multiPart)._is_QHttpMultiPart;
        return .{ .ptr = qtc.QNetworkAccessManager_SendCustomRequest3(@ptrCast(self.ptr), @ptrCast(request.ptr), verb_str, @ptrCast(multiPart.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn ConnectToHostEncrypted(self: QNetworkAccessManager, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted(@ptrCast(self.ptr), hostName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` sslConfiguration: QSslConfiguration `
    ///
    /// ` peerName: []const u8 `
    ///
    pub fn ConnectToHostEncrypted2(self: QNetworkAccessManager, hostName: []const u8, port: u16, sslConfiguration: anytype, peerName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        comptime _ = @TypeOf(sslConfiguration)._is_QSslConfiguration;
        const peerName_str = qtc.libqt_string{
            .len = peerName.len,
            .data = peerName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted2(@ptrCast(self.ptr), hostName_str, @bitCast(port), @ptrCast(sslConfiguration.ptr), peerName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn ConnectToHost(self: QNetworkAccessManager, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHost(@ptrCast(self.ptr), hostName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setRedirectPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` policy: qnetworkrequest_enums.RedirectPolicy `
    ///
    pub fn SetRedirectPolicy(self: QNetworkAccessManager, policy: i32) void {
        qtc.QNetworkAccessManager_SetRedirectPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#redirectPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkrequest_enums.RedirectPolicy `
    ///
    pub fn RedirectPolicy(self: QNetworkAccessManager) i32 {
        return qtc.QNetworkAccessManager_RedirectPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#autoDeleteReplies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn AutoDeleteReplies(self: QNetworkAccessManager) bool {
        return qtc.QNetworkAccessManager_AutoDeleteReplies(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setAutoDeleteReplies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDeleteReplies(self: QNetworkAccessManager, autoDelete: bool) void {
        qtc.QNetworkAccessManager_SetAutoDeleteReplies(@ptrCast(self.ptr), autoDelete);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn TransferTimeout(self: QNetworkAccessManager) i32 {
        return qtc.QNetworkAccessManager_TransferTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SetTransferTimeout(self: QNetworkAccessManager, timeout: i32) void {
        qtc.QNetworkAccessManager_SetTransferTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeoutAsDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ## Returns:
    ///
    /// ` i64 of milliseconds `
    ///
    pub fn TransferTimeoutAsDuration(self: QNetworkAccessManager) i64 {
        return qtc.QNetworkAccessManager_TransferTimeoutAsDuration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn SetTransferTimeout2(self: QNetworkAccessManager) void {
        qtc.QNetworkAccessManager_SetTransferTimeout2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` proxy: QNetworkProxy `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: QNetworkAccessManager, proxy: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QNetworkProxy;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QNetworkAccessManager_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(proxy.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, proxy: QNetworkProxy, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkProxy, QAuthenticator) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` reply: QNetworkReply `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn AuthenticationRequired(self: QNetworkAccessManager, reply: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QNetworkAccessManager_AuthenticationRequired(@ptrCast(self.ptr), @ptrCast(reply.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn OnAuthenticationRequired(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply, QAuthenticator) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_AuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` reply: QNetworkReply `
    ///
    pub fn Finished(self: QNetworkAccessManager, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        qtc.QNetworkAccessManager_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` reply: QNetworkReply `
    ///
    pub fn Encrypted(self: QNetworkAccessManager, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        qtc.QNetworkAccessManager_Encrypted(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply) callconv(.c) void `
    ///
    pub fn OnEncrypted(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Encrypted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` reply: QNetworkReply `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn SslErrors(self: QNetworkAccessManager, reply: anytype, errors: []QSslError) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QNetworkAccessManager_SslErrors(@ptrCast(self.ptr), @ptrCast(reply.ptr), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply, qtc.libqt_list) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` reply: QNetworkReply `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: QNetworkAccessManager, reply: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QNetworkAccessManager_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(reply.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` op: qnetworkaccessmanager_enums.Operation `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` outgoingData: QIODevice `
    ///
    pub fn CreateRequest(self: QNetworkAccessManager, op: i32, request: anytype, outgoingData: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(outgoingData)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_CreateRequest(@ptrCast(self.ptr), @bitCast(op), @ptrCast(request.ptr), @ptrCast(outgoingData.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, op: qnetworkaccessmanager_enums.Operation, request: QNetworkRequest, outgoingData: QIODevice) callconv(.c) QNetworkReply `
    ///
    pub fn OnCreateRequest(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, i32, QNetworkRequest, QIODevice) callconv(.c) QNetworkReply) void {
        qtc.QNetworkAccessManager_OnCreateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateRequest` instead
    ///
    pub const QBaseCreateRequest = SuperCreateRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` op: qnetworkaccessmanager_enums.Operation `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` outgoingData: QIODevice `
    ///
    pub fn SuperCreateRequest(self: QNetworkAccessManager, op: i32, request: anytype, outgoingData: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(outgoingData)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_SuperCreateRequest(@ptrCast(self.ptr), @bitCast(op), @ptrCast(request.ptr), @ptrCast(outgoingData.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSchemesImplementation(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SupportedSchemesImplementation(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qnetworkaccessmanager.SupportedSchemesImplementation: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkaccessmanager.SupportedSchemesImplementation: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnSupportedSchemesImplementation(self: QNetworkAccessManager, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemesImplementation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedSchemesImplementation` instead
    ///
    pub const QBaseSupportedSchemesImplementation = SuperSupportedSchemesImplementation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSupportedSchemesImplementation(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SuperSupportedSchemesImplementation(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qnetworkaccessmanager.SupportedSchemesImplementation: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkaccessmanager.SupportedSchemesImplementation: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
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
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` enabled: bool `
    ///
    /// ` storeDir: []const u8 `
    ///
    pub fn EnableStrictTransportSecurityStore2(self: QNetworkAccessManager, enabled: bool, storeDir: []const u8) void {
        const storeDir_str = qtc.libqt_string{
            .len = storeDir.len,
            .data = storeDir.ptr,
        };
        qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore2(@ptrCast(self.ptr), enabled, storeDir_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` verb: []u8 `
    ///
    /// ` data: QIODevice `
    ///
    pub fn SendCustomRequest32(self: QNetworkAccessManager, request: anytype, verb: []u8, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_SendCustomRequest32(@ptrCast(self.ptr), @ptrCast(request.ptr), verb_str, @ptrCast(data.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHostEncrypted22(self: QNetworkAccessManager, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted22(@ptrCast(self.ptr), hostName_str, @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` sslConfiguration: QSslConfiguration `
    ///
    pub fn ConnectToHostEncrypted3(self: QNetworkAccessManager, hostName: []const u8, port: u16, sslConfiguration: anytype) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        comptime _ = @TypeOf(sslConfiguration)._is_QSslConfiguration;
        qtc.QNetworkAccessManager_ConnectToHostEncrypted3(@ptrCast(self.ptr), hostName_str, @bitCast(port), @ptrCast(sslConfiguration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHost2(self: QNetworkAccessManager, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHost2(@ptrCast(self.ptr), hostName_str, @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    pub fn SetTransferTimeout1(self: QNetworkAccessManager, duration: i64) void {
        qtc.QNetworkAccessManager_SetTransferTimeout1(@ptrCast(self.ptr), @bitCast(duration));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QNetworkAccessManager, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn IsWidgetType(self: QNetworkAccessManager) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn IsWindowType(self: QNetworkAccessManager) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn IsQuickItemType(self: QNetworkAccessManager) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn SignalsBlocked(self: QNetworkAccessManager) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QNetworkAccessManager, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn Thread(self: QNetworkAccessManager) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QNetworkAccessManager, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QNetworkAccessManager, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QNetworkAccessManager, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QNetworkAccessManager, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QNetworkAccessManager, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QNetworkAccessManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qnetworkaccessmanager.Children: Memory allocation failed");
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QNetworkAccessManager, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QNetworkAccessManager, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QNetworkAccessManager, obj: anytype) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QNetworkAccessManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn Disconnect3(self: QNetworkAccessManager) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QNetworkAccessManager, receiver: anytype) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn DumpObjectTree(self: QNetworkAccessManager) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn DumpObjectInfo(self: QNetworkAccessManager) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QNetworkAccessManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QNetworkAccessManager, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QNetworkAccessManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnetworkaccessmanager.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkaccessmanager.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn BindingStorage(self: QNetworkAccessManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn BindingStorage2(self: QNetworkAccessManager) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn Destroyed(self: QNetworkAccessManager) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn Parent(self: QNetworkAccessManager) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QNetworkAccessManager, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn DeleteLater(self: QNetworkAccessManager) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QNetworkAccessManager, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QNetworkAccessManager, time: i64, timerType: i32) i32 {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QNetworkAccessManager, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QNetworkAccessManager, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QNetworkAccessManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QNetworkAccessManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QNetworkAccessManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QNetworkAccessManager, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QObject) callconv(.c) void) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QNetworkAccessManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkAccessManager_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QNetworkAccessManager, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkAccessManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QEvent) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QNetworkAccessManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkAccessManager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QNetworkAccessManager, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QNetworkAccessManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QNetworkAccessManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNetworkAccessManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QNetworkAccessManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QNetworkAccessManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QTimerEvent) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QNetworkAccessManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNetworkAccessManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QNetworkAccessManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QNetworkAccessManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QChildEvent) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QNetworkAccessManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNetworkAccessManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QNetworkAccessManager, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QNetworkAccessManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QEvent) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QNetworkAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkAccessManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QNetworkAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkAccessManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QNetworkAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkAccessManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QNetworkAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkAccessManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn Sender(self: QNetworkAccessManager) QObject {
        return .{ .ptr = qtc.QNetworkAccessManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn SuperSender(self: QNetworkAccessManager) QObject {
        return .{ .ptr = qtc.QNetworkAccessManager_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QNetworkAccessManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNetworkAccessManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn SenderSignalIndex(self: QNetworkAccessManager) i32 {
        return qtc.QNetworkAccessManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn SuperSenderSignalIndex(self: QNetworkAccessManager) i32 {
        return qtc.QNetworkAccessManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QNetworkAccessManager, callback: *const fn () callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QNetworkAccessManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkAccessManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QNetworkAccessManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkAccessManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QNetworkAccessManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkAccessManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QNetworkAccessManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkAccessManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QMetaMethod) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#dtor.QNetworkAccessManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn Delete(self: QNetworkAccessManager) void {
        qtc.QNetworkAccessManager_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#public-types)
pub const enums = struct {
    pub const Operation = enum(i32) {
        pub const HeadOperation: i32 = 1;
        pub const GetOperation: i32 = 2;
        pub const PutOperation: i32 = 3;
        pub const PostOperation: i32 = 4;
        pub const DeleteOperation: i32 = 5;
        pub const CustomOperation: i32 = 6;
        pub const UnknownOperation: i32 = 0;
    };
};
