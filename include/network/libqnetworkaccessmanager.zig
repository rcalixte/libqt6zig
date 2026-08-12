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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkAccessManager object in C++ memory
    ///
    pub fn new() QNetworkAccessManager {
        return .{ .ptr = qtc.QNetworkAccessManager_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkAccessManager object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QNetworkAccessManager {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QNetworkAccessManager_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn metaObject(self: QNetworkAccessManager) QMetaObject {
        return .{ .ptr = qtc.QNetworkAccessManager_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QNetworkAccessManager, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QNetworkAccessManager_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn superMetaObject(self: QNetworkAccessManager) QMetaObject {
        return .{ .ptr = qtc.QNetworkAccessManager_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QNetworkAccessManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkAccessManager_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNetworkAccessManager_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QNetworkAccessManager, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkAccessManager_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QNetworkAccessManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QNetworkAccessManager, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkAccessManager.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportedSchemes` instead
    ///
    pub const SupportedSchemes = supportedSchemes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedSchemes(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SupportedSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QNetworkAccessManager.supportedSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkAccessManager.supportedSchemes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onSupportedSchemes` instead
    ///
    pub const OnSupportedSchemes = onSupportedSchemes;

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
    pub fn onSupportedSchemes(self: QNetworkAccessManager, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedSchemes` instead
    ///
    pub const SuperSupportedSchemes = superSupportedSchemes;

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
    pub fn superSupportedSchemes(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SuperSupportedSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QNetworkAccessManager.supportedSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkAccessManager.supportedSchemes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `clearAccessCache` instead
    ///
    pub const ClearAccessCache = clearAccessCache;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearAccessCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn clearAccessCache(self: QNetworkAccessManager) void {
        qtc.QNetworkAccessManager_ClearAccessCache(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearConnectionCache` instead
    ///
    pub const ClearConnectionCache = clearConnectionCache;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearConnectionCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn clearConnectionCache(self: QNetworkAccessManager) void {
        qtc.QNetworkAccessManager_ClearConnectionCache(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `proxy` instead
    ///
    pub const Proxy = proxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn proxy(self: QNetworkAccessManager) QNetworkProxy {
        return .{ .ptr = qtc.QNetworkAccessManager_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setProxy` instead
    ///
    pub const SetProxy = setProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _proxy: QNetworkProxy `
    ///
    pub fn setProxy(self: QNetworkAccessManager, _proxy: anytype) void {
        comptime _ = @TypeOf(_proxy)._is_QNetworkProxy;
        qtc.QNetworkAccessManager_SetProxy(@ptrCast(self.ptr), @ptrCast(_proxy.ptr));
    }

    /// ### DEPRECATED: Use `proxyFactory` instead
    ///
    pub const ProxyFactory = proxyFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn proxyFactory(self: QNetworkAccessManager) QNetworkProxyFactory {
        return .{ .ptr = qtc.QNetworkAccessManager_ProxyFactory(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setProxyFactory` instead
    ///
    pub const SetProxyFactory = setProxyFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxyFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` factory: QNetworkProxyFactory `
    ///
    pub fn setProxyFactory(self: QNetworkAccessManager, factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_QNetworkProxyFactory;
        qtc.QNetworkAccessManager_SetProxyFactory(@ptrCast(self.ptr), @ptrCast(factory.ptr));
    }

    /// ### DEPRECATED: Use `cache` instead
    ///
    pub const Cache = cache;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn cache(self: QNetworkAccessManager) QAbstractNetworkCache {
        return .{ .ptr = qtc.QNetworkAccessManager_Cache(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCache` instead
    ///
    pub const SetCache = setCache;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _cache: QAbstractNetworkCache `
    ///
    pub fn setCache(self: QNetworkAccessManager, _cache: anytype) void {
        comptime _ = @TypeOf(_cache)._is_QAbstractNetworkCache;
        qtc.QNetworkAccessManager_SetCache(@ptrCast(self.ptr), @ptrCast(_cache.ptr));
    }

    /// ### DEPRECATED: Use `cookieJar` instead
    ///
    pub const CookieJar = cookieJar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cookieJar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn cookieJar(self: QNetworkAccessManager) QNetworkCookieJar {
        return .{ .ptr = qtc.QNetworkAccessManager_CookieJar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCookieJar` instead
    ///
    pub const SetCookieJar = setCookieJar;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCookieJar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _cookieJar: QNetworkCookieJar `
    ///
    pub fn setCookieJar(self: QNetworkAccessManager, _cookieJar: anytype) void {
        comptime _ = @TypeOf(_cookieJar)._is_QNetworkCookieJar;
        qtc.QNetworkAccessManager_SetCookieJar(@ptrCast(self.ptr), @ptrCast(_cookieJar.ptr));
    }

    /// ### DEPRECATED: Use `setStrictTransportSecurityEnabled` instead
    ///
    pub const SetStrictTransportSecurityEnabled = setStrictTransportSecurityEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setStrictTransportSecurityEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` enabled: bool `
    ///
    pub fn setStrictTransportSecurityEnabled(self: QNetworkAccessManager, enabled: bool) void {
        qtc.QNetworkAccessManager_SetStrictTransportSecurityEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isStrictTransportSecurityEnabled` instead
    ///
    pub const IsStrictTransportSecurityEnabled = isStrictTransportSecurityEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn isStrictTransportSecurityEnabled(self: QNetworkAccessManager) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `enableStrictTransportSecurityStore` instead
    ///
    pub const EnableStrictTransportSecurityStore = enableStrictTransportSecurityStore;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` enabled: bool `
    ///
    pub fn enableStrictTransportSecurityStore(self: QNetworkAccessManager, enabled: bool) void {
        qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isStrictTransportSecurityStoreEnabled` instead
    ///
    pub const IsStrictTransportSecurityStoreEnabled = isStrictTransportSecurityStoreEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityStoreEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn isStrictTransportSecurityStoreEnabled(self: QNetworkAccessManager) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addStrictTransportSecurityHosts` instead
    ///
    pub const AddStrictTransportSecurityHosts = addStrictTransportSecurityHosts;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#addStrictTransportSecurityHosts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` knownHosts: []QHstsPolicy `
    ///
    pub fn addStrictTransportSecurityHosts(self: QNetworkAccessManager, knownHosts: []QHstsPolicy) void {
        const knownHosts_list = qtc.libqt_list{
            .len = knownHosts.len,
            .data = @ptrCast(knownHosts.ptr),
        };
        qtc.QNetworkAccessManager_AddStrictTransportSecurityHosts(@ptrCast(self.ptr), knownHosts_list);
    }

    /// ### DEPRECATED: Use `strictTransportSecurityHosts` instead
    ///
    pub const StrictTransportSecurityHosts = strictTransportSecurityHosts;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#strictTransportSecurityHosts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn strictTransportSecurityHosts(self: QNetworkAccessManager, allocator: std.mem.Allocator) []QHstsPolicy {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_StrictTransportSecurityHosts(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QHstsPolicy, _arr.len) catch @panic("QNetworkAccessManager.strictTransportSecurityHosts: Memory allocation failed");
        const _data_val: [*]QtC.QHstsPolicy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `head` instead
    ///
    pub const Head = head;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#head)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn head(self: QNetworkAccessManager, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.QNetworkAccessManager_Head(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `get` instead
    ///
    pub const Get = get;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn get(self: QNetworkAccessManager, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.QNetworkAccessManager_Get(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `get2` instead
    ///
    pub const Get2 = get2;

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
    pub fn get2(self: QNetworkAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_Get2(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `get3` instead
    ///
    pub const Get3 = get3;

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
    pub fn get3(self: QNetworkAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QNetworkAccessManager_Get3(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `post` instead
    ///
    pub const Post = post;

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
    pub fn post(self: QNetworkAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_Post(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `post2` instead
    ///
    pub const Post2 = post2;

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
    pub fn post2(self: QNetworkAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QNetworkAccessManager_Post2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `put` instead
    ///
    pub const Put = put;

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
    pub fn put(self: QNetworkAccessManager, request: anytype, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_Put(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `put2` instead
    ///
    pub const Put2 = put2;

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
    pub fn put2(self: QNetworkAccessManager, request: anytype, data: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QNetworkAccessManager_Put2(@ptrCast(self.ptr), @ptrCast(request.ptr), data_str) };
    }

    /// ### DEPRECATED: Use `deleteResource` instead
    ///
    pub const DeleteResource = deleteResource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#deleteResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn deleteResource(self: QNetworkAccessManager, request: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        return .{ .ptr = qtc.QNetworkAccessManager_DeleteResource(@ptrCast(self.ptr), @ptrCast(request.ptr)) };
    }

    /// ### DEPRECATED: Use `sendCustomRequest` instead
    ///
    pub const SendCustomRequest = sendCustomRequest;

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
    pub fn sendCustomRequest(self: QNetworkAccessManager, request: anytype, verb: []u8) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        return .{ .ptr = qtc.QNetworkAccessManager_SendCustomRequest(@ptrCast(self.ptr), @ptrCast(request.ptr), verb_str) };
    }

    /// ### DEPRECATED: Use `sendCustomRequest2` instead
    ///
    pub const SendCustomRequest2 = sendCustomRequest2;

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
    pub fn sendCustomRequest2(self: QNetworkAccessManager, request: anytype, verb: []u8, data: []u8) QNetworkReply {
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

    /// ### DEPRECATED: Use `post4` instead
    ///
    pub const Post4 = post4;

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
    pub fn post4(self: QNetworkAccessManager, request: anytype, multiPart: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(multiPart)._is_QHttpMultiPart;
        return .{ .ptr = qtc.QNetworkAccessManager_Post4(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(multiPart.ptr)) };
    }

    /// ### DEPRECATED: Use `put4` instead
    ///
    pub const Put4 = put4;

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
    pub fn put4(self: QNetworkAccessManager, request: anytype, multiPart: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(multiPart)._is_QHttpMultiPart;
        return .{ .ptr = qtc.QNetworkAccessManager_Put4(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(multiPart.ptr)) };
    }

    /// ### DEPRECATED: Use `sendCustomRequest3` instead
    ///
    pub const SendCustomRequest3 = sendCustomRequest3;

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
    pub fn sendCustomRequest3(self: QNetworkAccessManager, request: anytype, verb: []u8, multiPart: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        comptime _ = @TypeOf(multiPart)._is_QHttpMultiPart;
        return .{ .ptr = qtc.QNetworkAccessManager_SendCustomRequest3(@ptrCast(self.ptr), @ptrCast(request.ptr), verb_str, @ptrCast(multiPart.ptr)) };
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted` instead
    ///
    pub const ConnectToHostEncrypted = connectToHostEncrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn connectToHostEncrypted(self: QNetworkAccessManager, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted(@ptrCast(self.ptr), hostName_str);
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted2` instead
    ///
    pub const ConnectToHostEncrypted2 = connectToHostEncrypted2;

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
    pub fn connectToHostEncrypted2(self: QNetworkAccessManager, hostName: []const u8, port: u16, sslConfiguration: anytype, peerName: []const u8) void {
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

    /// ### DEPRECATED: Use `connectToHost` instead
    ///
    pub const ConnectToHost = connectToHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn connectToHost(self: QNetworkAccessManager, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHost(@ptrCast(self.ptr), hostName_str);
    }

    /// ### DEPRECATED: Use `setRedirectPolicy` instead
    ///
    pub const SetRedirectPolicy = setRedirectPolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setRedirectPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` policy: qnetworkrequest_enums.RedirectPolicy `
    ///
    pub fn setRedirectPolicy(self: QNetworkAccessManager, policy: i32) void {
        qtc.QNetworkAccessManager_SetRedirectPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `redirectPolicy` instead
    ///
    pub const RedirectPolicy = redirectPolicy;

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
    pub fn redirectPolicy(self: QNetworkAccessManager) i32 {
        return qtc.QNetworkAccessManager_RedirectPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoDeleteReplies` instead
    ///
    pub const AutoDeleteReplies = autoDeleteReplies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#autoDeleteReplies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn autoDeleteReplies(self: QNetworkAccessManager) bool {
        return qtc.QNetworkAccessManager_AutoDeleteReplies(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoDeleteReplies` instead
    ///
    pub const SetAutoDeleteReplies = setAutoDeleteReplies;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setAutoDeleteReplies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn setAutoDeleteReplies(self: QNetworkAccessManager, autoDelete: bool) void {
        qtc.QNetworkAccessManager_SetAutoDeleteReplies(@ptrCast(self.ptr), autoDelete);
    }

    /// ### DEPRECATED: Use `transferTimeout` instead
    ///
    pub const TransferTimeout = transferTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn transferTimeout(self: QNetworkAccessManager) i32 {
        return qtc.QNetworkAccessManager_TransferTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransferTimeout` instead
    ///
    pub const SetTransferTimeout = setTransferTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` timeout: i32 `
    ///
    pub fn setTransferTimeout(self: QNetworkAccessManager, timeout: i32) void {
        qtc.QNetworkAccessManager_SetTransferTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `transferTimeoutAsDuration` instead
    ///
    pub const TransferTimeoutAsDuration = transferTimeoutAsDuration;

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
    pub fn transferTimeoutAsDuration(self: QNetworkAccessManager) i64 {
        return qtc.QNetworkAccessManager_TransferTimeoutAsDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTransferTimeout2` instead
    ///
    pub const SetTransferTimeout2 = setTransferTimeout2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn setTransferTimeout2(self: QNetworkAccessManager) void {
        qtc.QNetworkAccessManager_SetTransferTimeout2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `proxyAuthenticationRequired` instead
    ///
    pub const ProxyAuthenticationRequired = proxyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _proxy: QNetworkProxy `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn proxyAuthenticationRequired(self: QNetworkAccessManager, _proxy: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(_proxy)._is_QNetworkProxy;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QNetworkAccessManager_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(_proxy.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onProxyAuthenticationRequired` instead
    ///
    pub const OnProxyAuthenticationRequired = onProxyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, proxy: QNetworkProxy, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn onProxyAuthenticationRequired(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkProxy, QAuthenticator) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `authenticationRequired` instead
    ///
    pub const AuthenticationRequired = authenticationRequired;

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
    pub fn authenticationRequired(self: QNetworkAccessManager, reply: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QNetworkAccessManager_AuthenticationRequired(@ptrCast(self.ptr), @ptrCast(reply.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onAuthenticationRequired` instead
    ///
    pub const OnAuthenticationRequired = onAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn onAuthenticationRequired(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply, QAuthenticator) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_AuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` reply: QNetworkReply `
    ///
    pub fn finished(self: QNetworkAccessManager, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        qtc.QNetworkAccessManager_Finished(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply) callconv(.c) void `
    ///
    pub fn onFinished(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `encrypted` instead
    ///
    pub const Encrypted = encrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` reply: QNetworkReply `
    ///
    pub fn encrypted(self: QNetworkAccessManager, reply: anytype) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        qtc.QNetworkAccessManager_Encrypted(@ptrCast(self.ptr), @ptrCast(reply.ptr));
    }

    /// ### DEPRECATED: Use `onEncrypted` instead
    ///
    pub const OnEncrypted = onEncrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply) callconv(.c) void `
    ///
    pub fn onEncrypted(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Encrypted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sslErrors` instead
    ///
    pub const SslErrors = sslErrors;

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
    pub fn sslErrors(self: QNetworkAccessManager, reply: anytype, errors: []QSslError) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QNetworkAccessManager_SslErrors(@ptrCast(self.ptr), @ptrCast(reply.ptr), errors_list);
    }

    /// ### DEPRECATED: Use `onSslErrors` instead
    ///
    pub const OnSslErrors = onSslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn onSslErrors(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply, qtc.libqt_list) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preSharedKeyAuthenticationRequired` instead
    ///
    pub const PreSharedKeyAuthenticationRequired = preSharedKeyAuthenticationRequired;

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
    pub fn preSharedKeyAuthenticationRequired(self: QNetworkAccessManager, reply: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(reply)._is_QNetworkReply;
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QNetworkAccessManager_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(reply.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onPreSharedKeyAuthenticationRequired` instead
    ///
    pub const OnPreSharedKeyAuthenticationRequired = onPreSharedKeyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, reply: QNetworkReply, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn onPreSharedKeyAuthenticationRequired(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QNetworkReply, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createRequest` instead
    ///
    pub const CreateRequest = createRequest;

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
    pub fn createRequest(self: QNetworkAccessManager, op: i32, request: anytype, outgoingData: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(outgoingData)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_CreateRequest(@ptrCast(self.ptr), @bitCast(op), @ptrCast(request.ptr), @ptrCast(outgoingData.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateRequest` instead
    ///
    pub const OnCreateRequest = onCreateRequest;

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
    pub fn onCreateRequest(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, i32, QNetworkRequest, QIODevice) callconv(.c) QNetworkReply) void {
        qtc.QNetworkAccessManager_OnCreateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateRequest` instead
    ///
    pub const SuperCreateRequest = superCreateRequest;

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
    pub fn superCreateRequest(self: QNetworkAccessManager, op: i32, request: anytype, outgoingData: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(outgoingData)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_SuperCreateRequest(@ptrCast(self.ptr), @bitCast(op), @ptrCast(request.ptr), @ptrCast(outgoingData.ptr)) };
    }

    /// ### DEPRECATED: Use `supportedSchemesImplementation` instead
    ///
    pub const SupportedSchemesImplementation = supportedSchemesImplementation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedSchemesImplementation(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SupportedSchemesImplementation(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QNetworkAccessManager.supportedSchemesImplementation: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkAccessManager.supportedSchemesImplementation: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onSupportedSchemesImplementation` instead
    ///
    pub const OnSupportedSchemesImplementation = onSupportedSchemesImplementation;

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
    pub fn onSupportedSchemesImplementation(self: QNetworkAccessManager, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemesImplementation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedSchemesImplementation` instead
    ///
    pub const SuperSupportedSchemesImplementation = superSupportedSchemesImplementation;

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
    pub fn superSupportedSchemesImplementation(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SuperSupportedSchemesImplementation(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QNetworkAccessManager.supportedSchemesImplementation: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkAccessManager.supportedSchemesImplementation: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkAccessManager.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkAccessManager.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `enableStrictTransportSecurityStore2` instead
    ///
    pub const EnableStrictTransportSecurityStore2 = enableStrictTransportSecurityStore2;

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
    pub fn enableStrictTransportSecurityStore2(self: QNetworkAccessManager, enabled: bool, storeDir: []const u8) void {
        const storeDir_str = qtc.libqt_string{
            .len = storeDir.len,
            .data = storeDir.ptr,
        };
        qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore2(@ptrCast(self.ptr), enabled, storeDir_str);
    }

    /// ### DEPRECATED: Use `sendCustomRequest32` instead
    ///
    pub const SendCustomRequest32 = sendCustomRequest32;

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
    pub fn sendCustomRequest32(self: QNetworkAccessManager, request: anytype, verb: []u8, data: anytype) QNetworkReply {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        comptime _ = @TypeOf(data)._is_QIODevice;
        return .{ .ptr = qtc.QNetworkAccessManager_SendCustomRequest32(@ptrCast(self.ptr), @ptrCast(request.ptr), verb_str, @ptrCast(data.ptr)) };
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted22` instead
    ///
    pub const ConnectToHostEncrypted22 = connectToHostEncrypted22;

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
    pub fn connectToHostEncrypted22(self: QNetworkAccessManager, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted22(@ptrCast(self.ptr), hostName_str, @bitCast(port));
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted3` instead
    ///
    pub const ConnectToHostEncrypted3 = connectToHostEncrypted3;

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
    pub fn connectToHostEncrypted3(self: QNetworkAccessManager, hostName: []const u8, port: u16, sslConfiguration: anytype) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        comptime _ = @TypeOf(sslConfiguration)._is_QSslConfiguration;
        qtc.QNetworkAccessManager_ConnectToHostEncrypted3(@ptrCast(self.ptr), hostName_str, @bitCast(port), @ptrCast(sslConfiguration.ptr));
    }

    /// ### DEPRECATED: Use `connectToHost2` instead
    ///
    pub const ConnectToHost2 = connectToHost2;

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
    pub fn connectToHost2(self: QNetworkAccessManager, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHost2(@ptrCast(self.ptr), hostName_str, @bitCast(port));
    }

    /// ### DEPRECATED: Use `setTransferTimeout1` instead
    ///
    pub const SetTransferTimeout1 = setTransferTimeout1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkAccessManager `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    pub fn setTransferTimeout1(self: QNetworkAccessManager, duration: i64) void {
        qtc.QNetworkAccessManager_SetTransferTimeout1(@ptrCast(self.ptr), @bitCast(duration));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QNetworkAccessManager, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkAccessManager.objectName: Memory allocation failed");
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QNetworkAccessManager, name: []const u8) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn isWidgetType(self: QNetworkAccessManager) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn isWindowType(self: QNetworkAccessManager) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn isQuickItemType(self: QNetworkAccessManager) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn signalsBlocked(self: QNetworkAccessManager) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QNetworkAccessManager, b: bool) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn thread(self: QNetworkAccessManager) QThread {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QNetworkAccessManager, _thread: anytype) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QNetworkAccessManager, interval: i32) i32 {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QNetworkAccessManager, time: i64) i32 {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QNetworkAccessManager, id: i32) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QNetworkAccessManager, id: i32) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QNetworkAccessManager, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QNetworkAccessManager.children: Memory allocation failed");
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QNetworkAccessManager, _parent: anytype) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QNetworkAccessManager, filterObj: anytype) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QNetworkAccessManager, obj: anytype) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QNetworkAccessManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn disconnect3(self: QNetworkAccessManager) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QNetworkAccessManager, receiver: anytype) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn dumpObjectTree(self: QNetworkAccessManager) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn dumpObjectInfo(self: QNetworkAccessManager) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QNetworkAccessManager, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QNetworkAccessManager, name: [:0]const u8) QVariant {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QNetworkAccessManager, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QNetworkAccessManager.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkAccessManager.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn bindingStorage(self: QNetworkAccessManager) QBindingStorage {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn bindingStorage2(self: QNetworkAccessManager) QBindingStorage {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn destroyed(self: QNetworkAccessManager) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager) callconv(.c) void) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn parent(self: QNetworkAccessManager) QObject {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QNetworkAccessManager, classname: [:0]const u8) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn deleteLater(self: QNetworkAccessManager) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QNetworkAccessManager, interval: i32, timerType: i32) i32 {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QNetworkAccessManager, time: i64, timerType: i32) i32 {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QNetworkAccessManager, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QNetworkAccessManager, signal: [:0]const u8) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QNetworkAccessManager, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QNetworkAccessManager, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QNetworkAccessManager, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QNetworkAccessManager, param1: anytype) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QObject) callconv(.c) void) void {
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QNetworkAccessManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkAccessManager_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QNetworkAccessManager, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkAccessManager_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QEvent) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QNetworkAccessManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkAccessManager_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QNetworkAccessManager, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QNetworkAccessManager_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QObject, QEvent) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QNetworkAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNetworkAccessManager_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QNetworkAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QNetworkAccessManager_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QTimerEvent) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QNetworkAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNetworkAccessManager_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QNetworkAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QNetworkAccessManager_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QChildEvent) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QNetworkAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNetworkAccessManager_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QNetworkAccessManager, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QNetworkAccessManager_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QEvent) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QNetworkAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkAccessManager_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QNetworkAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkAccessManager_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QNetworkAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkAccessManager_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QNetworkAccessManager, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QNetworkAccessManager_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QMetaMethod) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn sender(self: QNetworkAccessManager) QObject {
        return .{ .ptr = qtc.QNetworkAccessManager_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn superSender(self: QNetworkAccessManager) QObject {
        return .{ .ptr = qtc.QNetworkAccessManager_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QNetworkAccessManager, callback: *const fn () callconv(.c) QObject) void {
        qtc.QNetworkAccessManager_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn senderSignalIndex(self: QNetworkAccessManager) i32 {
        return qtc.QNetworkAccessManager_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    pub fn superSenderSignalIndex(self: QNetworkAccessManager) i32 {
        return qtc.QNetworkAccessManager_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QNetworkAccessManager, callback: *const fn () callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QNetworkAccessManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkAccessManager_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QNetworkAccessManager, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkAccessManager_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QNetworkAccessManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkAccessManager_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QNetworkAccessManager, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QNetworkAccessManager_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, QMetaMethod) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QNetworkAccessManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QNetworkAccessManager, callback: *const fn (QNetworkAccessManager, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#dtor.QNetworkAccessManager)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkAccessManager `
    ///
    pub fn delete(self: QNetworkAccessManager) void {
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
