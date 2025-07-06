const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
    pub fn New() QtC.QNetworkAccessManager {
        return qtc.QNetworkAccessManager_new();
    }

    /// New2 constructs a new QNetworkAccessManager object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QNetworkAccessManager {
        return qtc.QNetworkAccessManager_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QNetworkAccessManager_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QNetworkAccessManager, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QNetworkAccessManager_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QNetworkAccessManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QNetworkAccessManager, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QNetworkAccessManager_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
    ///
    /// ``` self: QtC.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn SupportedSchemes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkAccessManager_SupportedSchemes(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn () callconv(.c) [][]const u8 ```
    pub fn OnSupportedSchemes(self: ?*anyopaque, slot: fn () callconv(.c) [][]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemes(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn QBaseSupportedSchemes(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkAccessManager_QBaseSupportedSchemes(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearAccessCache)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn ClearAccessCache(self: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ClearAccessCache(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearConnectionCache)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn ClearConnectionCache(self: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ClearConnectionCache(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxy)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn Proxy(self: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QNetworkAccessManager_Proxy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxy)
    ///
    /// ``` self: QtC.QNetworkAccessManager, proxy: QtC.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, proxy: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetProxy(@ptrCast(self), @ptrCast(proxy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyFactory)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn ProxyFactory(self: ?*anyopaque) QtC.QNetworkProxyFactory {
        return qtc.QNetworkAccessManager_ProxyFactory(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxyFactory)
    ///
    /// ``` self: QtC.QNetworkAccessManager, factory: QtC.QNetworkProxyFactory ```
    pub fn SetProxyFactory(self: ?*anyopaque, factory: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetProxyFactory(@ptrCast(self), @ptrCast(factory));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cache)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn Cache(self: ?*anyopaque) QtC.QAbstractNetworkCache {
        return qtc.QNetworkAccessManager_Cache(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCache)
    ///
    /// ``` self: QtC.QNetworkAccessManager, cache: QtC.QAbstractNetworkCache ```
    pub fn SetCache(self: ?*anyopaque, cache: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetCache(@ptrCast(self), @ptrCast(cache));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cookieJar)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn CookieJar(self: ?*anyopaque) QtC.QNetworkCookieJar {
        return qtc.QNetworkAccessManager_CookieJar(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCookieJar)
    ///
    /// ``` self: QtC.QNetworkAccessManager, cookieJar: QtC.QNetworkCookieJar ```
    pub fn SetCookieJar(self: ?*anyopaque, cookieJar: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetCookieJar(@ptrCast(self), @ptrCast(cookieJar));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setStrictTransportSecurityEnabled)
    ///
    /// ``` self: QtC.QNetworkAccessManager, enabled: bool ```
    pub fn SetStrictTransportSecurityEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QNetworkAccessManager_SetStrictTransportSecurityEnabled(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityEnabled)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn IsStrictTransportSecurityEnabled(self: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
    ///
    /// ``` self: QtC.QNetworkAccessManager, enabled: bool ```
    pub fn EnableStrictTransportSecurityStore(self: ?*anyopaque, enabled: bool) void {
        qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore(@ptrCast(self), enabled);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityStoreEnabled)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn IsStrictTransportSecurityStoreEnabled(self: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#addStrictTransportSecurityHosts)
    ///
    /// ``` self: QtC.QNetworkAccessManager, knownHosts: []QtC.QHstsPolicy ```
    pub fn AddStrictTransportSecurityHosts(self: ?*anyopaque, knownHosts: []QtC.QHstsPolicy) void {
        const knownHosts_list = qtc.struct_libqt_list{
            .len = knownHosts.len,
            .data = @ptrCast(knownHosts.ptr),
        };
        qtc.QNetworkAccessManager_AddStrictTransportSecurityHosts(@ptrCast(self), knownHosts_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#strictTransportSecurityHosts)
    ///
    /// ``` self: QtC.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn StrictTransportSecurityHosts(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QHstsPolicy {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkAccessManager_StrictTransportSecurityHosts(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QHstsPolicy, _arr.len) catch @panic("qnetworkaccessmanager.StrictTransportSecurityHosts: Memory allocation failed");
        const _data: [*]QtC.QHstsPolicy = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#head)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest ```
    pub fn Head(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Head(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest ```
    pub fn Get(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Get(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, data: QtC.QIODevice ```
    pub fn Get2(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Get2(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, data: []u8 ```
    pub fn Get3(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNetworkAccessManager_Get3(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, data: QtC.QIODevice ```
    pub fn Post(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Post(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, data: []u8 ```
    pub fn Post2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNetworkAccessManager_Post2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, data: QtC.QIODevice ```
    pub fn Put(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Put(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, data: []u8 ```
    pub fn Put2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNetworkAccessManager_Put2(@ptrCast(self), @ptrCast(request), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#deleteResource)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest ```
    pub fn DeleteResource(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_DeleteResource(@ptrCast(self), @ptrCast(request));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, verb: []u8 ```
    pub fn SendCustomRequest(self: ?*anyopaque, request: ?*anyopaque, verb: []u8) QtC.QNetworkReply {
        const verb_str = qtc.struct_libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        return qtc.QNetworkAccessManager_SendCustomRequest(@ptrCast(self), @ptrCast(request), verb_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, verb: []u8, data: []u8 ```
    pub fn SendCustomRequest2(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, data: []u8) QtC.QNetworkReply {
        const verb_str = qtc.struct_libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QNetworkAccessManager_SendCustomRequest2(@ptrCast(self), @ptrCast(request), verb_str, data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, multiPart: QtC.QHttpMultiPart ```
    pub fn Post4(self: ?*anyopaque, request: ?*anyopaque, multiPart: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Post4(@ptrCast(self), @ptrCast(request), @ptrCast(multiPart));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, multiPart: QtC.QHttpMultiPart ```
    pub fn Put4(self: ?*anyopaque, request: ?*anyopaque, multiPart: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_Put4(@ptrCast(self), @ptrCast(request), @ptrCast(multiPart));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, verb: []u8, multiPart: QtC.QHttpMultiPart ```
    pub fn SendCustomRequest3(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, multiPart: ?*anyopaque) QtC.QNetworkReply {
        const verb_str = qtc.struct_libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        return qtc.QNetworkAccessManager_SendCustomRequest3(@ptrCast(self), @ptrCast(request), verb_str, @ptrCast(multiPart));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QNetworkAccessManager, hostName: []const u8 ```
    pub fn ConnectToHostEncrypted(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted(@ptrCast(self), hostName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QNetworkAccessManager, hostName: []const u8, port: u16, sslConfiguration: QtC.QSslConfiguration, peerName: []const u8 ```
    pub fn ConnectToHostEncrypted2(self: ?*anyopaque, hostName: []const u8, port: u16, sslConfiguration: ?*anyopaque, peerName: []const u8) void {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const peerName_str = qtc.struct_libqt_string{
            .len = peerName.len,
            .data = peerName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted2(@ptrCast(self), hostName_str, @intCast(port), @ptrCast(sslConfiguration), peerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
    ///
    /// ``` self: QtC.QNetworkAccessManager, hostName: []const u8 ```
    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHost(@ptrCast(self), hostName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setRedirectPolicy)
    ///
    /// ``` self: QtC.QNetworkAccessManager, policy: qnetworkrequest_enums.RedirectPolicy ```
    pub fn SetRedirectPolicy(self: ?*anyopaque, policy: i64) void {
        qtc.QNetworkAccessManager_SetRedirectPolicy(@ptrCast(self), @intCast(policy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#redirectPolicy)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn RedirectPolicy(self: ?*anyopaque) i64 {
        return qtc.QNetworkAccessManager_RedirectPolicy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#autoDeleteReplies)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn AutoDeleteReplies(self: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_AutoDeleteReplies(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setAutoDeleteReplies)
    ///
    /// ``` self: QtC.QNetworkAccessManager, autoDelete: bool ```
    pub fn SetAutoDeleteReplies(self: ?*anyopaque, autoDelete: bool) void {
        qtc.QNetworkAccessManager_SetAutoDeleteReplies(@ptrCast(self), autoDelete);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeout)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn TransferTimeout(self: ?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_TransferTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ``` self: QtC.QNetworkAccessManager, timeout: i32 ```
    pub fn SetTransferTimeout(self: ?*anyopaque, timeout: i32) void {
        qtc.QNetworkAccessManager_SetTransferTimeout(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn SetTransferTimeout2(self: ?*anyopaque) void {
        qtc.QNetworkAccessManager_SetTransferTimeout2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
    ///
    /// ``` self: QtC.QNetworkAccessManager, proxy: QtC.QNetworkProxy, authenticator: QtC.QAuthenticator ```
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, proxy: QtC.QNetworkProxy, authenticator: QtC.QAuthenticator) callconv(.c) void ```
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_ProxyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
    ///
    /// ``` self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply, authenticator: QtC.QAuthenticator ```
    pub fn AuthenticationRequired(self: ?*anyopaque, reply: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkAccessManager_AuthenticationRequired(@ptrCast(self), @ptrCast(reply), @ptrCast(authenticator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply, authenticator: QtC.QAuthenticator) callconv(.c) void ```
    pub fn OnAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_AuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
    ///
    /// ``` self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply ```
    pub fn Finished(self: ?*anyopaque, reply: ?*anyopaque) void {
        qtc.QNetworkAccessManager_Finished(@ptrCast(self), @ptrCast(reply));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
    ///
    /// ``` self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply ```
    pub fn Encrypted(self: ?*anyopaque, reply: ?*anyopaque) void {
        qtc.QNetworkAccessManager_Encrypted(@ptrCast(self), @ptrCast(reply));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply) callconv(.c) void ```
    pub fn OnEncrypted(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_Encrypted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
    ///
    /// ``` self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply, errors: []QtC.QSslError ```
    pub fn SslErrors(self: ?*anyopaque, reply: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.struct_libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QNetworkAccessManager_SslErrors(@ptrCast(self), @ptrCast(reply), errors_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply, errors: []QtC.QSslError) callconv(.c) void ```
    pub fn OnSslErrors(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []QtC.QSslError) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_SslErrors(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
    ///
    /// ``` self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply, authenticator: QtC.QSslPreSharedKeyAuthenticator ```
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, reply: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QNetworkAccessManager_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(reply), @ptrCast(authenticator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, reply: QtC.QNetworkReply, authenticator: QtC.QSslPreSharedKeyAuthenticator) callconv(.c) void ```
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// ``` self: QtC.QNetworkAccessManager, op: qnetworkaccessmanager_enums.Operation, request: QtC.QNetworkRequest, outgoingData: QtC.QIODevice ```
    pub fn CreateRequest(self: ?*anyopaque, op: i64, request: ?*anyopaque, outgoingData: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_CreateRequest(@ptrCast(self), @intCast(op), @ptrCast(request), @ptrCast(outgoingData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, op: qnetworkaccessmanager_enums.Operation, request: QtC.QNetworkRequest, outgoingData: QtC.QIODevice) callconv(.c) QtC.QNetworkReply ```
    pub fn OnCreateRequest(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque, ?*anyopaque) callconv(.c) QtC.QNetworkReply) void {
        qtc.QNetworkAccessManager_OnCreateRequest(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QNetworkAccessManager, op: qnetworkaccessmanager_enums.Operation, request: QtC.QNetworkRequest, outgoingData: QtC.QIODevice ```
    pub fn QBaseCreateRequest(self: ?*anyopaque, op: i64, request: ?*anyopaque, outgoingData: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QNetworkAccessManager_QBaseCreateRequest(@ptrCast(self), @intCast(op), @ptrCast(request), @ptrCast(outgoingData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// ``` self: QtC.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn SupportedSchemesImplementation(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkAccessManager_SupportedSchemesImplementation(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn () callconv(.c) [][]const u8 ```
    pub fn OnSupportedSchemesImplementation(self: ?*anyopaque, slot: fn () callconv(.c) [][]const u8) void {
        qtc.QNetworkAccessManager_OnSupportedSchemesImplementation(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn QBaseSupportedSchemesImplementation(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkAccessManager_QBaseSupportedSchemesImplementation(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QNetworkAccessManager_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QNetworkAccessManager_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
    ///
    /// ``` self: QtC.QNetworkAccessManager, enabled: bool, storeDir: []const u8 ```
    pub fn EnableStrictTransportSecurityStore2(self: ?*anyopaque, enabled: bool, storeDir: []const u8) void {
        const storeDir_str = qtc.struct_libqt_string{
            .len = storeDir.len,
            .data = storeDir.ptr,
        };
        qtc.QNetworkAccessManager_EnableStrictTransportSecurityStore2(@ptrCast(self), enabled, storeDir_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
    ///
    /// ``` self: QtC.QNetworkAccessManager, request: QtC.QNetworkRequest, verb: []u8, data: QtC.QIODevice ```
    pub fn SendCustomRequest32(self: ?*anyopaque, request: ?*anyopaque, verb: []u8, data: ?*anyopaque) QtC.QNetworkReply {
        const verb_str = qtc.struct_libqt_string{
            .len = verb.len,
            .data = verb.ptr,
        };
        return qtc.QNetworkAccessManager_SendCustomRequest32(@ptrCast(self), @ptrCast(request), verb_str, @ptrCast(data));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QNetworkAccessManager, hostName: []const u8, port: u16 ```
    pub fn ConnectToHostEncrypted22(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted22(@ptrCast(self), hostName_str, @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QNetworkAccessManager, hostName: []const u8, port: u16, sslConfiguration: QtC.QSslConfiguration ```
    pub fn ConnectToHostEncrypted3(self: ?*anyopaque, hostName: []const u8, port: u16, sslConfiguration: ?*anyopaque) void {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHostEncrypted3(@ptrCast(self), hostName_str, @intCast(port), @ptrCast(sslConfiguration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
    ///
    /// ``` self: QtC.QNetworkAccessManager, hostName: []const u8, port: u16 ```
    pub fn ConnectToHost2(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkAccessManager_ConnectToHost2(@ptrCast(self), hostName_str, @intCast(port));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkaccessmanager.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QNetworkAccessManager, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QNetworkAccessManager, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QNetworkAccessManager, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QNetworkAccessManager, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QNetworkAccessManager, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QNetworkAccessManager, id: qnamespace_enums.TimerId ```
    pub fn KillTimerWithId(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimerWithId(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qnetworkaccessmanager.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QNetworkAccessManager, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QNetworkAccessManager, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QNetworkAccessManager, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QNetworkAccessManager, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return qtc.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QNetworkAccessManager, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QNetworkAccessManager, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QNetworkAccessManager, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QNetworkAccessManager, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QNetworkAccessManager, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QNetworkAccessManager, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QNetworkAccessManager, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QNetworkAccessManager, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNetworkAccessManager_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNetworkAccessManager_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QNetworkAccessManager_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QNetworkAccessManager_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QNetworkAccessManager_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QNetworkAccessManager_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QNetworkAccessManager_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QNetworkAccessManager_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkAccessManager_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QNetworkAccessManager_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QNetworkAccessManager_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QNetworkAccessManager_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QNetworkAccessManager, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QNetworkAccessManager_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QNetworkAccessManager, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#dtor.QNetworkAccessManager)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkAccessManager ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkAccessManager_Delete(@ptrCast(self));
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
