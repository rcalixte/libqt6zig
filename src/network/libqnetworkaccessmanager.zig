const C = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qnetworkaccessmanager_enums = enums;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qnetworkaccessmanager.html
pub const qnetworkaccessmanager = struct {
    /// New constructs a new QNetworkAccessManager object.
    ///
    ///
    pub fn New() ?*C.QNetworkAccessManager {
        return C.QNetworkAccessManager_new();
    }

    /// New2 constructs a new QNetworkAccessManager object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QNetworkAccessManager {
        return C.QNetworkAccessManager_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QNetworkAccessManager_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QNetworkAccessManager, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QNetworkAccessManager_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QNetworkAccessManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QNetworkAccessManager_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QNetworkAccessManager_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QNetworkAccessManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QNetworkAccessManager_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QNetworkAccessManager_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn SupportedSchemes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QNetworkAccessManager_SupportedSchemes(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn () callconv(.c) [][]const u8 ```
    pub fn OnSupportedSchemes(self: ?*anyopaque, slot: fn () callconv(.c) [][]const u8) void {
        C.QNetworkAccessManager_OnSupportedSchemes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn QBaseSupportedSchemes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QNetworkAccessManager_QBaseSupportedSchemes(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearAccessCache)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn ClearAccessCache(self: ?*anyopaque) void {
        C.QNetworkAccessManager_ClearAccessCache(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearConnectionCache)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn ClearConnectionCache(self: ?*anyopaque) void {
        C.QNetworkAccessManager_ClearConnectionCache(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxy)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn Proxy(self: ?*anyopaque) ?*C.QNetworkProxy {
        return C.QNetworkAccessManager_Proxy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxy)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, proxy: ?*C.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, proxy: ?*anyopaque) void {
        C.QNetworkAccessManager_SetProxy(@ptrCast(self), @ptrCast(proxy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyFactory)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn ProxyFactory(self: ?*anyopaque) ?*C.QNetworkProxyFactory {
        return C.QNetworkAccessManager_ProxyFactory(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxyFactory)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, factory: ?*C.QNetworkProxyFactory ```
    pub fn SetProxyFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        C.QNetworkAccessManager_SetProxyFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cache)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn Cache(self: ?*anyopaque) ?*C.QAbstractNetworkCache {
        return C.QNetworkAccessManager_Cache(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCache)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, cache: ?*C.QAbstractNetworkCache ```
    pub fn SetCache(self: ?*anyopaque, cache: ?*anyopaque) void {
        C.QNetworkAccessManager_SetCache(@ptrCast(self), @ptrCast(cache));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cookieJar)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn CookieJar(self: ?*anyopaque) ?*C.QNetworkCookieJar {
        return C.QNetworkAccessManager_CookieJar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCookieJar)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, cookieJar: ?*C.QNetworkCookieJar ```
    pub fn SetCookieJar(self: ?*anyopaque, cookieJar: ?*anyopaque) void {
        C.QNetworkAccessManager_SetCookieJar(@ptrCast(self), @ptrCast(cookieJar));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setStrictTransportSecurityEnabled)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, enabled: bool ```
    pub fn SetStrictTransportSecurityEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QNetworkAccessManager_SetStrictTransportSecurityEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityEnabled)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn IsStrictTransportSecurityEnabled(self: ?*anyopaque) bool {
        return C.QNetworkAccessManager_IsStrictTransportSecurityEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, enabled: bool ```
    pub fn EnableStrictTransportSecurityStore(self: ?*anyopaque, enabled: bool) void {
        C.QNetworkAccessManager_EnableStrictTransportSecurityStore(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityStoreEnabled)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn IsStrictTransportSecurityStoreEnabled(self: ?*anyopaque) bool {
        return C.QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#addStrictTransportSecurityHosts)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, knownHosts: []?*C.QHstsPolicy ```
    pub fn AddStrictTransportSecurityHosts(self: ?*anyopaque, knownHosts: []?*C.QHstsPolicy) void {
        const knownHosts_list = C.struct_libqt_list{
            .len = knownHosts.len,
            .data = @ptrCast(knownHosts.ptr),
        };
        C.QNetworkAccessManager_AddStrictTransportSecurityHosts(@ptrCast(self), knownHosts_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#strictTransportSecurityHosts)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn StrictTransportSecurityHosts(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QHstsPolicy {
        const _arr: C.struct_libqt_list = C.QNetworkAccessManager_StrictTransportSecurityHosts(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QHstsPolicy, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QHstsPolicy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#head)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest ```
    pub fn Head(self: ?*anyopaque, request: ?*anyopaque) ?*C.QNetworkReply {
        return C.QNetworkAccessManager_Head(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest ```
    pub fn Get(self: ?*anyopaque, request: ?*anyopaque) ?*C.QNetworkReply {
        return C.QNetworkAccessManager_Get(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, data: ?*C.QIODevice ```
    pub fn Post(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) ?*C.QNetworkReply {
        return C.QNetworkAccessManager_Post(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, data: []u8 ```
    pub fn Post2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) ?*C.QNetworkReply {
        const data_str = C.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };
        return C.QNetworkAccessManager_Post2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, data: ?*C.QIODevice ```
    pub fn Put(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) ?*C.QNetworkReply {
        return C.QNetworkAccessManager_Put(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, data: []u8 ```
    pub fn Put2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) ?*C.QNetworkReply {
        const data_str = C.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };
        return C.QNetworkAccessManager_Put2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#deleteResource)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest ```
    pub fn DeleteResource(self: ?*anyopaque, request: ?*anyopaque) ?*C.QNetworkReply {
        return C.QNetworkAccessManager_DeleteResource(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, verb: []u8 ```
    pub fn SendCustomRequest(self: ?*anyopaque, request: ?*anyopaque, verb: []u8) ?*C.QNetworkReply {
        const verb_str = C.struct_libqt_string{
            .len = verb.len,
            .data = @constCast(verb.ptr),
        };
        return C.QNetworkAccessManager_SendCustomRequest(@ptrCast(self), @ptrCast(request), verb_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, verb: []u8, data: []u8 ```
    pub fn SendCustomRequest2(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, data: []u8) ?*C.QNetworkReply {
        const verb_str = C.struct_libqt_string{
            .len = verb.len,
            .data = @constCast(verb.ptr),
        };
        const data_str = C.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };
        return C.QNetworkAccessManager_SendCustomRequest2(@ptrCast(self), @ptrCast(request), verb_str, data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, multiPart: ?*C.QHttpMultiPart ```
    pub fn Post3(self: ?*anyopaque, request: ?*anyopaque, multiPart: ?*anyopaque) ?*C.QNetworkReply {
        return C.QNetworkAccessManager_Post3(@ptrCast(self), @ptrCast(request), @ptrCast(multiPart));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, multiPart: ?*C.QHttpMultiPart ```
    pub fn Put3(self: ?*anyopaque, request: ?*anyopaque, multiPart: ?*anyopaque) ?*C.QNetworkReply {
        return C.QNetworkAccessManager_Put3(@ptrCast(self), @ptrCast(request), @ptrCast(multiPart));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, verb: []u8, multiPart: ?*C.QHttpMultiPart ```
    pub fn SendCustomRequest3(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, multiPart: ?*anyopaque) ?*C.QNetworkReply {
        const verb_str = C.struct_libqt_string{
            .len = verb.len,
            .data = @constCast(verb.ptr),
        };
        return C.QNetworkAccessManager_SendCustomRequest3(@ptrCast(self), @ptrCast(request), verb_str, @ptrCast(multiPart));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, hostName: []const u8 ```
    pub fn ConnectToHostEncrypted(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QNetworkAccessManager_ConnectToHostEncrypted(@ptrCast(self), hostName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, hostName: []const u8, port: u16, sslConfiguration: ?*C.QSslConfiguration, peerName: []const u8 ```
    pub fn ConnectToHostEncrypted2(self: ?*anyopaque, hostName: []const u8, port: u16, sslConfiguration: ?*anyopaque, peerName: []const u8) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        const peerName_str = C.struct_libqt_string{
            .len = peerName.len,
            .data = @constCast(peerName.ptr),
        };
        C.QNetworkAccessManager_ConnectToHostEncrypted2(@ptrCast(self), hostName_str, @intCast(port), @ptrCast(sslConfiguration), peerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, hostName: []const u8 ```
    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QNetworkAccessManager_ConnectToHost(@ptrCast(self), hostName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setRedirectPolicy)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, policy: qnetworkrequest_enums.RedirectPolicy ```
    pub fn SetRedirectPolicy(self: ?*anyopaque, policy: i64) void {
        C.QNetworkAccessManager_SetRedirectPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#redirectPolicy)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn RedirectPolicy(self: ?*anyopaque) i64 {
        return C.QNetworkAccessManager_RedirectPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#autoDeleteReplies)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn AutoDeleteReplies(self: ?*anyopaque) bool {
        return C.QNetworkAccessManager_AutoDeleteReplies(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setAutoDeleteReplies)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, autoDelete: bool ```
    pub fn SetAutoDeleteReplies(self: ?*anyopaque, autoDelete: bool) void {
        C.QNetworkAccessManager_SetAutoDeleteReplies(@ptrCast(self), autoDelete);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeout)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn TransferTimeout(self: ?*anyopaque) i32 {
        return C.QNetworkAccessManager_TransferTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn SetTransferTimeout(self: ?*anyopaque) void {
        C.QNetworkAccessManager_SetTransferTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, proxy: ?*C.QNetworkProxy, authenticator: ?*C.QAuthenticator ```
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        C.QNetworkAccessManager_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QNetworkProxy, ?*C.QAuthenticator) callconv(.c) void ```
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_Connect_ProxyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, reply: ?*C.QNetworkReply, authenticator: ?*C.QAuthenticator ```
    pub fn AuthenticationRequired(self: ?*anyopaque, reply: ?*anyopaque, authenticator: ?*anyopaque) void {
        C.QNetworkAccessManager_AuthenticationRequired(@ptrCast(self), @ptrCast(reply), @ptrCast(authenticator));
    }

    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QNetworkReply, ?*C.QAuthenticator) callconv(.c) void ```
    pub fn OnAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_Connect_AuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, reply: ?*C.QNetworkReply ```
    pub fn Finished(self: ?*anyopaque, reply: ?*anyopaque) void {
        C.QNetworkAccessManager_Finished(@ptrCast(self), @ptrCast(reply));
    }

    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QNetworkReply) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, reply: ?*C.QNetworkReply ```
    pub fn Encrypted(self: ?*anyopaque, reply: ?*anyopaque) void {
        C.QNetworkAccessManager_Encrypted(@ptrCast(self), @ptrCast(reply));
    }

    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QNetworkReply) callconv(.c) void ```
    pub fn OnEncrypted(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_Connect_Encrypted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, reply: ?*C.QNetworkReply, errors: []?*C.QSslError ```
    pub fn SslErrors(self: ?*anyopaque, reply: ?*anyopaque, errors: []?*C.QSslError) void {
        const errors_list = C.struct_libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        C.QNetworkAccessManager_SslErrors(@ptrCast(self), @ptrCast(reply), errors_list);
    }

    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QNetworkReply, []?*C.QSslError) callconv(.c) void ```
    pub fn OnSslErrors(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []?*C.QSslError) callconv(.c) void) void {
        C.QNetworkAccessManager_Connect_SslErrors(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, reply: ?*C.QNetworkReply, authenticator: ?*C.QSslPreSharedKeyAuthenticator ```
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, reply: ?*anyopaque, authenticator: ?*anyopaque) void {
        C.QNetworkAccessManager_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(reply), @ptrCast(authenticator));
    }

    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QNetworkReply, ?*C.QSslPreSharedKeyAuthenticator) callconv(.c) void ```
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, op: qnetworkaccessmanager_enums.Operation, request: ?*C.QNetworkRequest, outgoingData: ?*C.QIODevice ```
    pub fn CreateRequest(self: ?*anyopaque, op: i64, request: ?*anyopaque, outgoingData: ?*anyopaque) ?*C.QNetworkReply {
        return C.QNetworkAccessManager_CreateRequest(@ptrCast(self), @intCast(op), @ptrCast(request), @ptrCast(outgoingData));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, qnetworkaccessmanager_enums.Operation, ?*C.QNetworkRequest, ?*C.QIODevice) callconv(.c) ?*C.QNetworkReply ```
    pub fn OnCreateRequest(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) ?*C.QNetworkReply) void {
        C.QNetworkAccessManager_OnCreateRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QNetworkAccessManager, op: qnetworkaccessmanager_enums.Operation, request: ?*C.QNetworkRequest, outgoingData: ?*C.QIODevice ```
    pub fn QBaseCreateRequest(self: ?*anyopaque, op: i64, request: ?*anyopaque, outgoingData: ?*anyopaque) ?*C.QNetworkReply {
        return C.QNetworkAccessManager_QBaseCreateRequest(@ptrCast(self), @intCast(op), @ptrCast(request), @ptrCast(outgoingData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn SupportedSchemesImplementation(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QNetworkAccessManager_SupportedSchemesImplementation(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn () callconv(.c) [][]const u8 ```
    pub fn OnSupportedSchemesImplementation(self: ?*anyopaque, slot: fn () callconv(.c) [][]const u8) void {
        C.QNetworkAccessManager_OnSupportedSchemesImplementation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn QBaseSupportedSchemesImplementation(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QNetworkAccessManager_QBaseSupportedSchemesImplementation(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QNetworkAccessManager_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QNetworkAccessManager_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, enabled: bool, storeDir: []const u8 ```
    pub fn EnableStrictTransportSecurityStore2(self: ?*anyopaque, enabled: bool, storeDir: []const u8) void {
        const storeDir_str = C.struct_libqt_string{
            .len = storeDir.len,
            .data = @constCast(storeDir.ptr),
        };
        C.QNetworkAccessManager_EnableStrictTransportSecurityStore2(@ptrCast(self), enabled, storeDir_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, request: ?*C.QNetworkRequest, verb: []u8, data: ?*C.QIODevice ```
    pub fn SendCustomRequest32(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, data: ?*anyopaque) ?*C.QNetworkReply {
        const verb_str = C.struct_libqt_string{
            .len = verb.len,
            .data = @constCast(verb.ptr),
        };
        return C.QNetworkAccessManager_SendCustomRequest32(@ptrCast(self), @ptrCast(request), verb_str, @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, hostName: []const u8, port: u16 ```
    pub fn ConnectToHostEncrypted22(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QNetworkAccessManager_ConnectToHostEncrypted22(@ptrCast(self), hostName_str, @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, hostName: []const u8, port: u16, sslConfiguration: ?*C.QSslConfiguration ```
    pub fn ConnectToHostEncrypted3(self: ?*anyopaque, hostName: []const u8, port: u16, sslConfiguration: ?*anyopaque) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QNetworkAccessManager_ConnectToHostEncrypted3(@ptrCast(self), hostName_str, @intCast(port), @ptrCast(sslConfiguration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, hostName: []const u8, port: u16 ```
    pub fn ConnectToHost2(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QNetworkAccessManager_ConnectToHost2(@ptrCast(self), hostName_str, @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, timeout: i32 ```
    pub fn SetTransferTimeout1(self: ?*anyopaque, timeout: i32) void {
        C.QNetworkAccessManager_SetTransferTimeout1(@ptrCast(self), @intCast(timeout));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QNetworkAccessManager, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QNetworkAccessManager_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QNetworkAccessManager_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QNetworkAccessManager_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QNetworkAccessManager_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QNetworkAccessManager_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QNetworkAccessManager_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QNetworkAccessManager_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QNetworkAccessManager_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QNetworkAccessManager_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QNetworkAccessManager_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QNetworkAccessManager_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QNetworkAccessManager_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QNetworkAccessManager_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QNetworkAccessManager_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QNetworkAccessManager_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QNetworkAccessManager_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QNetworkAccessManager_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QNetworkAccessManager_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QNetworkAccessManager_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QNetworkAccessManager_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QNetworkAccessManager_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QNetworkAccessManager_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QNetworkAccessManager_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QNetworkAccessManager_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QNetworkAccessManager_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QNetworkAccessManager_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QNetworkAccessManager_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QNetworkAccessManager_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QNetworkAccessManager, slot: fn (?*C.QNetworkAccessManager, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QNetworkAccessManager_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QNetworkAccessManager ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QNetworkAccessManager_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkaccessmanager.html#types
pub const enums = struct {
    pub const Operation = enum {
        pub const HeadOperation: i32 = 1;
        pub const GetOperation: i32 = 2;
        pub const PutOperation: i32 = 3;
        pub const PostOperation: i32 = 4;
        pub const DeleteOperation: i32 = 5;
        pub const CustomOperation: i32 = 6;
        pub const UnknownOperation: i32 = 0;
    };
};
