const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnetworkproxy_enums = enums;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qnetworkproxyquery.html
pub const qnetworkproxyquery = struct {
    /// New constructs a new QNetworkProxyQuery object.
    ///
    ///
    pub fn New() QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new();
    }

    /// New2 constructs a new QNetworkProxyQuery object.
    ///
    /// ``` requestUrl: QtC.QUrl ```
    pub fn New2(requestUrl: ?*anyopaque) QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new2(@ptrCast(requestUrl));
    }

    /// New3 constructs a new QNetworkProxyQuery object.
    ///
    /// ``` hostname: []const u8, port: i32 ```
    pub fn New3(hostname: []const u8, port: i32) QtC.QNetworkProxyQuery {
        const hostname_str = qtc.struct_libqt_string{
            .len = hostname.len,
            .data = @constCast(hostname.ptr),
        };

        return qtc.QNetworkProxyQuery_new3(hostname_str, @intCast(port));
    }

    /// New4 constructs a new QNetworkProxyQuery object.
    ///
    /// ``` bindPort: u16 ```
    pub fn New4(bindPort: u16) QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new4(@intCast(bindPort));
    }

    /// New5 constructs a new QNetworkProxyQuery object.
    ///
    /// ``` other: QtC.QNetworkProxyQuery ```
    pub fn New5(other: ?*anyopaque) QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new5(@ptrCast(other));
    }

    /// New6 constructs a new QNetworkProxyQuery object.
    ///
    /// ``` requestUrl: QtC.QUrl, queryType: qnetworkproxy_enums.QueryType ```
    pub fn New6(requestUrl: ?*anyopaque, queryType: i64) QtC.QNetworkProxyQuery {
        return qtc.QNetworkProxyQuery_new6(@ptrCast(requestUrl), @intCast(queryType));
    }

    /// New7 constructs a new QNetworkProxyQuery object.
    ///
    /// ``` hostname: []const u8, port: i32, protocolTag: []const u8 ```
    pub fn New7(hostname: []const u8, port: i32, protocolTag: []const u8) QtC.QNetworkProxyQuery {
        const hostname_str = qtc.struct_libqt_string{
            .len = hostname.len,
            .data = @constCast(hostname.ptr),
        };
        const protocolTag_str = qtc.struct_libqt_string{
            .len = protocolTag.len,
            .data = @constCast(protocolTag.ptr),
        };

        return qtc.QNetworkProxyQuery_new7(hostname_str, @intCast(port), protocolTag_str);
    }

    /// New8 constructs a new QNetworkProxyQuery object.
    ///
    /// ``` hostname: []const u8, port: i32, protocolTag: []const u8, queryType: qnetworkproxy_enums.QueryType ```
    pub fn New8(hostname: []const u8, port: i32, protocolTag: []const u8, queryType: i64) QtC.QNetworkProxyQuery {
        const hostname_str = qtc.struct_libqt_string{
            .len = hostname.len,
            .data = @constCast(hostname.ptr),
        };
        const protocolTag_str = qtc.struct_libqt_string{
            .len = protocolTag.len,
            .data = @constCast(protocolTag.ptr),
        };

        return qtc.QNetworkProxyQuery_new8(hostname_str, @intCast(port), protocolTag_str, @intCast(queryType));
    }

    /// New9 constructs a new QNetworkProxyQuery object.
    ///
    /// ``` bindPort: u16, protocolTag: []const u8 ```
    pub fn New9(bindPort: u16, protocolTag: []const u8) QtC.QNetworkProxyQuery {
        const protocolTag_str = qtc.struct_libqt_string{
            .len = protocolTag.len,
            .data = @constCast(protocolTag.ptr),
        };

        return qtc.QNetworkProxyQuery_new9(@intCast(bindPort), protocolTag_str);
    }

    /// New10 constructs a new QNetworkProxyQuery object.
    ///
    /// ``` bindPort: u16, protocolTag: []const u8, queryType: qnetworkproxy_enums.QueryType ```
    pub fn New10(bindPort: u16, protocolTag: []const u8, queryType: i64) QtC.QNetworkProxyQuery {
        const protocolTag_str = qtc.struct_libqt_string{
            .len = protocolTag.len,
            .data = @constCast(protocolTag.ptr),
        };

        return qtc.QNetworkProxyQuery_new10(@intCast(bindPort), protocolTag_str, @intCast(queryType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator=)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, other: QtC.QNetworkProxyQuery ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkProxyQuery_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#swap)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, other: QtC.QNetworkProxyQuery ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkProxyQuery_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator==)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, other: QtC.QNetworkProxyQuery ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkProxyQuery_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator!=)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, other: QtC.QNetworkProxyQuery ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkProxyQuery_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#queryType)
    ///
    /// ``` self: QtC.QNetworkProxyQuery ```
    pub fn QueryType(self: ?*anyopaque) i64 {
        return qtc.QNetworkProxyQuery_QueryType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setQueryType)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, typeVal: qnetworkproxy_enums.QueryType ```
    pub fn SetQueryType(self: ?*anyopaque, typeVal: i64) void {
        qtc.QNetworkProxyQuery_SetQueryType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerPort)
    ///
    /// ``` self: QtC.QNetworkProxyQuery ```
    pub fn PeerPort(self: ?*anyopaque) i32 {
        return qtc.QNetworkProxyQuery_PeerPort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerPort)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, port: i32 ```
    pub fn SetPeerPort(self: ?*anyopaque, port: i32) void {
        qtc.QNetworkProxyQuery_SetPeerPort(@ptrCast(self), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerHostName)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, allocator: std.mem.Allocator ```
    pub fn PeerHostName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxyQuery_PeerHostName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxyquery.PeerHostName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerHostName)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, hostname: []const u8 ```
    pub fn SetPeerHostName(self: ?*anyopaque, hostname: []const u8) void {
        const hostname_str = qtc.struct_libqt_string{
            .len = hostname.len,
            .data = @constCast(hostname.ptr),
        };
        qtc.QNetworkProxyQuery_SetPeerHostName(@ptrCast(self), hostname_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#localPort)
    ///
    /// ``` self: QtC.QNetworkProxyQuery ```
    pub fn LocalPort(self: ?*anyopaque) i32 {
        return qtc.QNetworkProxyQuery_LocalPort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setLocalPort)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, port: i32 ```
    pub fn SetLocalPort(self: ?*anyopaque, port: i32) void {
        qtc.QNetworkProxyQuery_SetLocalPort(@ptrCast(self), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#protocolTag)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, allocator: std.mem.Allocator ```
    pub fn ProtocolTag(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxyQuery_ProtocolTag(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxyquery.ProtocolTag: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setProtocolTag)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, protocolTag: []const u8 ```
    pub fn SetProtocolTag(self: ?*anyopaque, protocolTag: []const u8) void {
        const protocolTag_str = qtc.struct_libqt_string{
            .len = protocolTag.len,
            .data = @constCast(protocolTag.ptr),
        };
        qtc.QNetworkProxyQuery_SetProtocolTag(@ptrCast(self), protocolTag_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#url)
    ///
    /// ``` self: QtC.QNetworkProxyQuery ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.QNetworkProxyQuery_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setUrl)
    ///
    /// ``` self: QtC.QNetworkProxyQuery, url: QtC.QUrl ```
    pub fn SetUrl(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QNetworkProxyQuery_SetUrl(@ptrCast(self), @ptrCast(url));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#dtor.QNetworkProxyQuery)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkProxyQuery ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkProxyQuery_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkproxy.html
pub const qnetworkproxy = struct {
    /// New constructs a new QNetworkProxy object.
    ///
    ///
    pub fn New() QtC.QNetworkProxy {
        return qtc.QNetworkProxy_new();
    }

    /// New2 constructs a new QNetworkProxy object.
    ///
    /// ``` typeVal: qnetworkproxy_enums.ProxyType ```
    pub fn New2(typeVal: i64) QtC.QNetworkProxy {
        return qtc.QNetworkProxy_new2(@intCast(typeVal));
    }

    /// New3 constructs a new QNetworkProxy object.
    ///
    /// ``` other: QtC.QNetworkProxy ```
    pub fn New3(other: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QNetworkProxy_new3(@ptrCast(other));
    }

    /// New4 constructs a new QNetworkProxy object.
    ///
    /// ``` typeVal: qnetworkproxy_enums.ProxyType, hostName: []const u8 ```
    pub fn New4(typeVal: i64, hostName: []const u8) QtC.QNetworkProxy {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };

        return qtc.QNetworkProxy_new4(@intCast(typeVal), hostName_str);
    }

    /// New5 constructs a new QNetworkProxy object.
    ///
    /// ``` typeVal: qnetworkproxy_enums.ProxyType, hostName: []const u8, port: u16 ```
    pub fn New5(typeVal: i64, hostName: []const u8, port: u16) QtC.QNetworkProxy {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };

        return qtc.QNetworkProxy_new5(@intCast(typeVal), hostName_str, @intCast(port));
    }

    /// New6 constructs a new QNetworkProxy object.
    ///
    /// ``` typeVal: qnetworkproxy_enums.ProxyType, hostName: []const u8, port: u16, user: []const u8 ```
    pub fn New6(typeVal: i64, hostName: []const u8, port: u16, user: []const u8) QtC.QNetworkProxy {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        const user_str = qtc.struct_libqt_string{
            .len = user.len,
            .data = @constCast(user.ptr),
        };

        return qtc.QNetworkProxy_new6(@intCast(typeVal), hostName_str, @intCast(port), user_str);
    }

    /// New7 constructs a new QNetworkProxy object.
    ///
    /// ``` typeVal: qnetworkproxy_enums.ProxyType, hostName: []const u8, port: u16, user: []const u8, password: []const u8 ```
    pub fn New7(typeVal: i64, hostName: []const u8, port: u16, user: []const u8, password: []const u8) QtC.QNetworkProxy {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        const user_str = qtc.struct_libqt_string{
            .len = user.len,
            .data = @constCast(user.ptr),
        };
        const password_str = qtc.struct_libqt_string{
            .len = password.len,
            .data = @constCast(password.ptr),
        };

        return qtc.QNetworkProxy_new7(@intCast(typeVal), hostName_str, @intCast(port), user_str, password_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#operator=)
    ///
    /// ``` self: QtC.QNetworkProxy, other: QtC.QNetworkProxy ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkProxy_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#swap)
    ///
    /// ``` self: QtC.QNetworkProxy, other: QtC.QNetworkProxy ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkProxy_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#operator==)
    ///
    /// ``` self: QtC.QNetworkProxy, other: QtC.QNetworkProxy ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkProxy_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#operator!=)
    ///
    /// ``` self: QtC.QNetworkProxy, other: QtC.QNetworkProxy ```
    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QNetworkProxy_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setType)
    ///
    /// ``` self: QtC.QNetworkProxy, typeVal: qnetworkproxy_enums.ProxyType ```
    pub fn SetType(self: ?*anyopaque, typeVal: i64) void {
        qtc.QNetworkProxy_SetType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#type)
    ///
    /// ``` self: QtC.QNetworkProxy ```
    pub fn Type(self: ?*anyopaque) i64 {
        return qtc.QNetworkProxy_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setCapabilities)
    ///
    /// ``` self: QtC.QNetworkProxy, capab: i32 ```
    pub fn SetCapabilities(self: ?*anyopaque, capab: i64) void {
        qtc.QNetworkProxy_SetCapabilities(@ptrCast(self), @intCast(capab));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#capabilities)
    ///
    /// ``` self: QtC.QNetworkProxy ```
    pub fn Capabilities(self: ?*anyopaque) i64 {
        return qtc.QNetworkProxy_Capabilities(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#isCachingProxy)
    ///
    /// ``` self: QtC.QNetworkProxy ```
    pub fn IsCachingProxy(self: ?*anyopaque) bool {
        return qtc.QNetworkProxy_IsCachingProxy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#isTransparentProxy)
    ///
    /// ``` self: QtC.QNetworkProxy ```
    pub fn IsTransparentProxy(self: ?*anyopaque) bool {
        return qtc.QNetworkProxy_IsTransparentProxy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setUser)
    ///
    /// ``` self: QtC.QNetworkProxy, userName: []const u8 ```
    pub fn SetUser(self: ?*anyopaque, userName: []const u8) void {
        const userName_str = qtc.struct_libqt_string{
            .len = userName.len,
            .data = @constCast(userName.ptr),
        };
        qtc.QNetworkProxy_SetUser(@ptrCast(self), userName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#user)
    ///
    /// ``` self: QtC.QNetworkProxy, allocator: std.mem.Allocator ```
    pub fn User(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxy_User(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxy.User: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setPassword)
    ///
    /// ``` self: QtC.QNetworkProxy, password: []const u8 ```
    pub fn SetPassword(self: ?*anyopaque, password: []const u8) void {
        const password_str = qtc.struct_libqt_string{
            .len = password.len,
            .data = @constCast(password.ptr),
        };
        qtc.QNetworkProxy_SetPassword(@ptrCast(self), password_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#password)
    ///
    /// ``` self: QtC.QNetworkProxy, allocator: std.mem.Allocator ```
    pub fn Password(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxy_Password(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxy.Password: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setHostName)
    ///
    /// ``` self: QtC.QNetworkProxy, hostName: []const u8 ```
    pub fn SetHostName(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        qtc.QNetworkProxy_SetHostName(@ptrCast(self), hostName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#hostName)
    ///
    /// ``` self: QtC.QNetworkProxy, allocator: std.mem.Allocator ```
    pub fn HostName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkProxy_HostName(@ptrCast(self));
        defer qtc.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxy.HostName: Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setPort)
    ///
    /// ``` self: QtC.QNetworkProxy, port: u16 ```
    pub fn SetPort(self: ?*anyopaque, port: u16) void {
        qtc.QNetworkProxy_SetPort(@ptrCast(self), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#port)
    ///
    /// ``` self: QtC.QNetworkProxy ```
    pub fn Port(self: ?*anyopaque) u16 {
        return qtc.QNetworkProxy_Port(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setApplicationProxy)
    ///
    /// ``` proxy: QtC.QNetworkProxy ```
    pub fn SetApplicationProxy(proxy: ?*anyopaque) void {
        qtc.QNetworkProxy_SetApplicationProxy(@ptrCast(proxy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#applicationProxy)
    ///
    ///
    pub fn ApplicationProxy() QtC.QNetworkProxy {
        return qtc.QNetworkProxy_ApplicationProxy();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#header)
    ///
    /// ``` self: QtC.QNetworkProxy, header: qnetworkrequest_enums.KnownHeaders ```
    pub fn Header(self: ?*anyopaque, header: i64) QtC.QVariant {
        return qtc.QNetworkProxy_Header(@ptrCast(self), @intCast(header));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeader)
    ///
    /// ``` self: QtC.QNetworkProxy, header: qnetworkrequest_enums.KnownHeaders, value: QtC.QVariant ```
    pub fn SetHeader(self: ?*anyopaque, header: i64, value: ?*anyopaque) void {
        qtc.QNetworkProxy_SetHeader(@ptrCast(self), @intCast(header), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#hasRawHeader)
    ///
    /// ``` self: QtC.QNetworkProxy, headerName: []u8 ```
    pub fn HasRawHeader(self: ?*anyopaque, headerName: []u8) bool {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = @constCast(headerName.ptr),
        };
        return qtc.QNetworkProxy_HasRawHeader(@ptrCast(self), headerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeaderList)
    ///
    /// ``` self: QtC.QNetworkProxy, allocator: std.mem.Allocator ```
    pub fn RawHeaderList(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkProxy_RawHeaderList(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                qtc.libqt_string_free(@ptrCast(&_str[_i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnetworkproxy.RawHeaderList: Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkproxy.RawHeaderList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeader)
    ///
    /// ``` self: QtC.QNetworkProxy, headerName: []u8, allocator: std.mem.Allocator ```
    pub fn RawHeader(self: ?*anyopaque, headerName: []u8, allocator: std.mem.Allocator) []u8 {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = @constCast(headerName.ptr),
        };
        const _bytearray: qtc.struct_libqt_string = qtc.QNetworkProxy_RawHeader(@ptrCast(self), headerName_str);
        defer qtc.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkproxy.RawHeader: Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setRawHeader)
    ///
    /// ``` self: QtC.QNetworkProxy, headerName: []u8, value: []u8 ```
    pub fn SetRawHeader(self: ?*anyopaque, headerName: []u8, value: []u8) void {
        const headerName_str = qtc.struct_libqt_string{
            .len = headerName.len,
            .data = @constCast(headerName.ptr),
        };
        const value_str = qtc.struct_libqt_string{
            .len = value.len,
            .data = @constCast(value.ptr),
        };
        qtc.QNetworkProxy_SetRawHeader(@ptrCast(self), headerName_str, value_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#dtor.QNetworkProxy)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkProxy ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkProxy_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkproxyfactory.html
pub const qnetworkproxyfactory = struct {
    /// New constructs a new QNetworkProxyFactory object.
    ///
    ///
    pub fn New() QtC.QNetworkProxyFactory {
        return qtc.QNetworkProxyFactory_new();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
    ///
    /// ``` self: QtC.QNetworkProxyFactory, query: QtC.QNetworkProxyQuery, allocator: std.mem.Allocator ```
    pub fn QueryProxy(self: ?*anyopaque, query: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QNetworkProxy {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkProxyFactory_QueryProxy(@ptrCast(self), @ptrCast(query));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.QueryProxy: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QNetworkProxyFactory, slot: fn (self: QtC.QNetworkProxyFactory, query: QtC.QNetworkProxyQuery) callconv(.c) []QtC.QNetworkProxy ```
    pub fn OnQueryProxy(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) []QtC.QNetworkProxy) void {
        qtc.QNetworkProxyFactory_OnQueryProxy(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QNetworkProxyFactory, query: QtC.QNetworkProxyQuery, allocator: std.mem.Allocator ```
    pub fn QBaseQueryProxy(self: ?*anyopaque, query: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QNetworkProxy {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkProxyFactory_QBaseQueryProxy(@ptrCast(self), @ptrCast(query));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.QueryProxy: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#usesSystemConfiguration)
    ///
    ///
    pub fn UsesSystemConfiguration() bool {
        return qtc.QNetworkProxyFactory_UsesSystemConfiguration();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setUseSystemConfiguration)
    ///
    /// ``` enable: bool ```
    pub fn SetUseSystemConfiguration(enable: bool) void {
        qtc.QNetworkProxyFactory_SetUseSystemConfiguration(enable);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setApplicationProxyFactory)
    ///
    /// ``` factory: QtC.QNetworkProxyFactory ```
    pub fn SetApplicationProxyFactory(factory: ?*anyopaque) void {
        qtc.QNetworkProxyFactory_SetApplicationProxyFactory(@ptrCast(factory));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#proxyForQuery)
    ///
    /// ``` query: QtC.QNetworkProxyQuery, allocator: std.mem.Allocator ```
    pub fn ProxyForQuery(query: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QNetworkProxy {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkProxyFactory_ProxyForQuery(@ptrCast(query));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.ProxyForQuery: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SystemProxyForQuery(allocator: std.mem.Allocator) []QtC.QNetworkProxy {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkProxyFactory_SystemProxyForQuery();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.SystemProxyForQuery: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#operator=)
    ///
    /// ``` self: QtC.QNetworkProxyFactory, param1: QtC.QNetworkProxyFactory ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QNetworkProxyFactory_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
    ///
    /// ``` query: QtC.QNetworkProxyQuery, allocator: std.mem.Allocator ```
    pub fn SystemProxyForQuery1(query: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QNetworkProxy {
        const _arr: qtc.struct_libqt_list = qtc.QNetworkProxyFactory_SystemProxyForQuery1(@ptrCast(query));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.SystemProxyForQuery1: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#dtor.QNetworkProxyFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkProxyFactory ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkProxyFactory_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qnetworkproxy.html#types
pub const enums = struct {
    pub const QueryType = enum {
        pub const TcpSocket: i32 = 0;
        pub const UdpSocket: i32 = 1;
        pub const SctpSocket: i32 = 2;
        pub const TcpServer: i32 = 100;
        pub const UrlRequest: i32 = 101;
        pub const SctpServer: i32 = 102;
    };

    pub const ProxyType = enum {
        pub const DefaultProxy: i32 = 0;
        pub const Socks5Proxy: i32 = 1;
        pub const NoProxy: i32 = 2;
        pub const HttpProxy: i32 = 3;
        pub const HttpCachingProxy: i32 = 4;
        pub const FtpCachingProxy: i32 = 5;
    };

    pub const Capability = enum {
        pub const TunnelingCapability: i32 = 1;
        pub const ListeningCapability: i32 = 2;
        pub const UdpTunnelingCapability: i32 = 4;
        pub const CachingCapability: i32 = 8;
        pub const HostNameLookupCapability: i32 = 16;
        pub const SctpTunnelingCapability: i32 = 32;
        pub const SctpListeningCapability: i32 = 64;
    };
};
