const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnetworkaccessmanager_enums = enums;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html)
pub const qnetworkaccessmanager = struct {
    /// New constructs a new QNetworkAccessManager object.
    ///
    pub fn New() QtC.QNetworkAccessManager {
        return qtc.QNetworkAccessManager_new();
    }

    /// New2 constructs a new QNetworkAccessManager object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QNetworkAccessManager {
        return qtc.QNetworkAccessManager_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QNetworkAccessManager_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QNetworkAccessManager_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QNetworkAccessManager_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkAccessManager_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QNetworkAccessManager_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkAccessManager_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_QBaseMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSchemes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SupportedSchemes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnSupportedSchemes(self: ?*anyopaque, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseSupportedSchemes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_QBaseSupportedSchemes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn ClearAccessCache(self: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ClearAccessCache(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearConnectionCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn ClearConnectionCache(self: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ClearConnectionCache(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn Proxy(self: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QNetworkAccessManager_Proxy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` proxy: QtC.QNetworkProxy `
    ///
    pub fn SetProxy(self: ?*anyopaque, proxy: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetProxy(@ptrCast(self), @ptrCast(proxy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn ProxyFactory(self: ?*anyopaque) QtC.QNetworkProxyFactory {
        return qtc.QNetworkAccessManager_ProxyFactory(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxyFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` factory: QtC.QNetworkProxyFactory `
    ///
    pub fn SetProxyFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetProxyFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn Cache(self: ?*anyopaque) QtC.QAbstractNetworkCache {
        return qtc.QNetworkAccessManager_Cache(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCache)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` cache: QtC.QAbstractNetworkCache `
    ///
    pub fn SetCache(self: ?*anyopaque, cache: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetCache(@ptrCast(self), @ptrCast(cache));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cookieJar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn CookieJar(self: ?*anyopaque) QtC.QNetworkCookieJar {
        return qtc.QNetworkAccessManager_CookieJar(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCookieJar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` cookieJar: QtC.QNetworkCookieJar `
    ///
    pub fn SetCookieJar(self: ?*anyopaque, cookieJar: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetCookieJar(@ptrCast(self), @ptrCast(cookieJar));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setStrictTransportSecurityEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetStrictTransportSecurityEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QNetworkAccessManager_SetStrictTransportSecurityEnabled(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn IsStrictTransportSecurityEnabled(self: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` enabled: bool `
    ///
    pub fn EnableStrictTransportSecurityStore(self: ?*anyopaque, enabled: bool) void {
        qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityStoreEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn IsStrictTransportSecurityStoreEnabled(self: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#addStrictTransportSecurityHosts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` knownHosts: []QtC.QHstsPolicy `
    ///
    pub fn AddStrictTransportSecurityHosts(self: ?*anyopaque, knownHosts: []QtC.QHstsPolicy) void {
        const knownHosts_list = qtc.libqt_list{
            .len = knownHosts.len,
            .data = @ptrCast(knownHosts.ptr),
        };
        qtc.QNetworkAccessManager_AddStrictTransportSecurityHosts(@ptrCast(self), knownHosts_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#strictTransportSecurityHosts)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StrictTransportSecurityHosts(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QHstsPolicy {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_StrictTransportSecurityHosts(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QHstsPolicy, _arr.len) catch @panic("qnetworkaccessmanager.StrictTransportSecurityHosts: Memory allocation failed");
        const _data: [*]QtC.QHstsPolicy = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#head)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    pub fn Head(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Head(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    pub fn Get(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Get(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: QtC.QIODevice `
    ///
    pub fn Get2(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Get2(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Get3(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNetworkAccessManager_Get3(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: QtC.QIODevice `
    ///
    pub fn Post(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Post(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Post2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNetworkAccessManager_Post2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: QtC.QIODevice `
    ///
    pub fn Put(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Put(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` data: []u8 `
    ///
    pub fn Put2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNetworkAccessManager_Put2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#deleteResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    pub fn DeleteResource(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_DeleteResource(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` verb: []u8 `
    ///
    pub fn SendCustomRequest(self: ?*anyopaque, request: ?*anyopaque, verb: []u8) QtC.QNetworkReply {
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        return qtc.QNetworkAccessManager_SendCustomRequest(@ptrCast(self), @ptrCast(request), verb_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` verb: []u8 `
    ///
    /// ` data: []u8 `
    ///
    pub fn SendCustomRequest2(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, data: []u8) QtC.QNetworkReply {
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNetworkAccessManager_SendCustomRequest2(@ptrCast(self), @ptrCast(request), verb_str, data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` multiPart: QtC.QHttpMultiPart `
    ///
    pub fn Post4(self: ?*anyopaque, request: ?*anyopaque, multiPart: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Post4(@ptrCast(self), @ptrCast(request), @ptrCast(multiPart));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` multiPart: QtC.QHttpMultiPart `
    ///
    pub fn Put4(self: ?*anyopaque, request: ?*anyopaque, multiPart: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Put4(@ptrCast(self), @ptrCast(request), @ptrCast(multiPart));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` verb: []u8 `
    ///
    /// ` multiPart: QtC.QHttpMultiPart `
    ///
    pub fn SendCustomRequest3(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, multiPart: ?*anyopaque) QtC.QNetworkReply {
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        return qtc.QNetworkAccessManager_SendCustomRequest3(@ptrCast(self), @ptrCast(request), verb_str, @ptrCast(multiPart));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn ConnectToHostEncrypted(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted(@ptrCast(self), hostName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` sslConfiguration: QtC.QSslConfiguration `
    ///
    /// ` peerName: []const u8 `
    ///
    pub fn ConnectToHostEncrypted2(self: ?*anyopaque, hostName: []const u8, port: u16, sslConfiguration: ?*anyopaque, peerName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const peerName_str = qtc.libqt_string{
            .len = peerName.len,
            .data = peerName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted2(@ptrCast(self), hostName_str, @bitCast(port), @ptrCast(sslConfiguration), peerName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHost(@ptrCast(self), hostName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setRedirectPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` policy: qnetworkrequest_enums.RedirectPolicy `
    ///
    pub fn SetRedirectPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QNetworkAccessManager_SetRedirectPolicy(@ptrCast(self), @bitCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#redirectPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkrequest_enums.RedirectPolicy `
    ///
    pub fn RedirectPolicy(self: ?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_RedirectPolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#autoDeleteReplies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn AutoDeleteReplies(self: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_AutoDeleteReplies(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setAutoDeleteReplies)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` autoDelete: bool `
    ///
    pub fn SetAutoDeleteReplies(self: ?*anyopaque, autoDelete: bool) void {
        qtc.QNetworkAccessManager_SetAutoDeleteReplies(@ptrCast(self), autoDelete);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn TransferTimeout(self: ?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_TransferTimeout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SetTransferTimeout(self: ?*anyopaque, timeout: i32) void {
        qtc.QNetworkAccessManager_SetTransferTimeout(@ptrCast(self), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeoutAsDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ## Returns:
    ///
    /// ` i64 of milliseconds `
    ///
    pub fn TransferTimeoutAsDuration(self: ?*anyopaque) i64 {
        return qtc.QNetworkAccessManager_TransferTimeoutAsDuration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn SetTransferTimeout2(self: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetTransferTimeout2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` proxy: QtC.QNetworkProxy `
    ///
    /// ` authenticator: QtC.QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, proxy: QtC.QNetworkProxy, authenticator: QtC.QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_ProxyAuthenticationRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` reply: QtC.QNetworkReply `
    ///
    /// ` authenticator: QtC.QAuthenticator `
    ///
    pub fn AuthenticationRequired(self: ?*anyopaque, reply: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkAccessManager_AuthenticationRequired(@ptrCast(self), @ptrCast(reply), @ptrCast(authenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply, authenticator: QtC.QAuthenticator) callconv(.c) void `
    ///
    pub fn OnAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_AuthenticationRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` reply: QtC.QNetworkReply `
    ///
    pub fn Finished(self: ?*anyopaque, reply: ?*anyopaque) void {
        qtc.QNetworkAccessManager_Finished(@ptrCast(self), @ptrCast(reply));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply) callconv(.c) void `
    ///
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Finished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` reply: QtC.QNetworkReply `
    ///
    pub fn Encrypted(self: ?*anyopaque, reply: ?*anyopaque) void {
        qtc.QNetworkAccessManager_Encrypted(@ptrCast(self), @ptrCast(reply));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply) callconv(.c) void `
    ///
    pub fn OnEncrypted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Encrypted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` reply: QtC.QNetworkReply `
    ///
    /// ` errors: []QtC.QSslError `
    ///
    pub fn SslErrors(self: ?*anyopaque, reply: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QNetworkAccessManager_SslErrors(@ptrCast(self), @ptrCast(reply), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply, errors: qtc.libqt_list ([]QtC.QSslError)) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_SslErrors(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` reply: QtC.QNetworkReply `
    ///
    /// ` authenticator: QtC.QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, reply: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkAccessManager_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(reply), @ptrCast(authenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply, authenticator: QtC.QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` op: qnetworkaccessmanager_enums.Operation `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` outgoingData: QtC.QIODevice `
    ///
    pub fn CreateRequest(self: ?*anyopaque, op: i32, request: ?*anyopaque, outgoingData: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_CreateRequest(@ptrCast(self), @bitCast(op), @ptrCast(request), @ptrCast(outgoingData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, op: qnetworkaccessmanager_enums.Operation, request: QtC.QNetworkRequest, outgoingData: QtC.QIODevice) callconv(.c) QtC.QNetworkReply `
    ///
    pub fn OnCreateRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QNetworkReply) void {
        qtc.QNetworkAccessManager_OnCreateRequest(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` op: qnetworkaccessmanager_enums.Operation `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` outgoingData: QtC.QIODevice `
    ///
    pub fn QBaseCreateRequest(self: ?*anyopaque, op: i32, request: ?*anyopaque, outgoingData: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_QBaseCreateRequest(@ptrCast(self), @bitCast(op), @ptrCast(request), @ptrCast(outgoingData));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSchemesImplementation(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_SupportedSchemesImplementation(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnSupportedSchemesImplementation(self: ?*anyopaque, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemesImplementation(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn QBaseSupportedSchemesImplementation(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkAccessManager_QBaseSupportedSchemesImplementation(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` enabled: bool `
    ///
    /// ` storeDir: []const u8 `
    ///
    pub fn EnableStrictTransportSecurityStore2(self: ?*anyopaque, enabled: bool, storeDir: []const u8) void {
        const storeDir_str = qtc.libqt_string{
            .len = storeDir.len,
            .data = storeDir.ptr,
        };
        qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore2(@ptrCast(self), enabled, storeDir_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` verb: []u8 `
    ///
    /// ` data: QtC.QIODevice `
    ///
    pub fn SendCustomRequest32(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, data: ?*anyopaque) QtC.QNetworkReply {
        const verb_str = qtc.libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        return qtc.QNetworkAccessManager_SendCustomRequest32(@ptrCast(self), @ptrCast(request), verb_str, @ptrCast(data));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHostEncrypted22(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted22(@ptrCast(self), hostName_str, @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` sslConfiguration: QtC.QSslConfiguration `
    ///
    pub fn ConnectToHostEncrypted3(self: ?*anyopaque, hostName: []const u8, port: u16, sslConfiguration: ?*anyopaque) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted3(@ptrCast(self), hostName_str, @bitCast(port), @ptrCast(sslConfiguration));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHost2(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHost2(@ptrCast(self), hostName_str, @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` duration: i64 of milliseconds `
    ///
    pub fn SetTransferTimeout1(self: ?*anyopaque, duration: i64) void {
        qtc.QNetworkAccessManager_SetTransferTimeout1(@ptrCast(self), @bitCast(duration));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qnetworkaccessmanager.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNetworkAccessManager_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QNetworkAccessManager_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QNetworkAccessManager_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QNetworkAccessManager_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkAccessManager_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkAccessManager_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager`
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    /// ` callback: *const fn (self: QtC.QNetworkAccessManager, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#dtor.QNetworkAccessManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QNetworkAccessManager `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkAccessManager_Delete(@ptrCast(self));
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
