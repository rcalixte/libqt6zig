const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QHttpHeaders = @import("libqt6").QHttpHeaders;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const qnetworkproxy_enums = enums;
const qnetworkrequest_enums = @import("libqnetworkrequest.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)
pub const QNetworkProxyQuery = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkProxyQuery,

    pub const _is_QNetworkProxyQuery = {};

    /// New constructs a new QNetworkProxyQuery object.
    ///
    pub fn New() QNetworkProxyQuery {
        return .{ .ptr = qtc.QNetworkProxyQuery_new() };
    }

    /// New2 constructs a new QNetworkProxyQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` requestUrl: QUrl `
    ///
    pub fn New2(requestUrl: anytype) QNetworkProxyQuery {
        comptime _ = @TypeOf(requestUrl)._is_QUrl;
        return .{ .ptr = qtc.QNetworkProxyQuery_new2(@ptrCast(requestUrl.ptr)) };
    }

    /// New3 constructs a new QNetworkProxyQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` hostname: []const u8 `
    ///
    /// ` port: i32 `
    ///
    pub fn New3(hostname: []const u8, port: i32) QNetworkProxyQuery {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new3(hostname_str, @bitCast(port)) };
    }

    /// New4 constructs a new QNetworkProxyQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bindPort: u16 `
    ///
    pub fn New4(bindPort: u16) QNetworkProxyQuery {
        return .{ .ptr = qtc.QNetworkProxyQuery_new4(@bitCast(bindPort)) };
    }

    /// New5 constructs a new QNetworkProxyQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn New5(other: anytype) QNetworkProxyQuery {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        return .{ .ptr = qtc.QNetworkProxyQuery_new5(@ptrCast(other.ptr)) };
    }

    /// New6 constructs a new QNetworkProxyQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` requestUrl: QUrl `
    ///
    /// ` queryType: qnetworkproxy_enums.QueryType `
    ///
    pub fn New6(requestUrl: anytype, queryType: i32) QNetworkProxyQuery {
        comptime _ = @TypeOf(requestUrl)._is_QUrl;
        return .{ .ptr = qtc.QNetworkProxyQuery_new6(@ptrCast(requestUrl.ptr), @bitCast(queryType)) };
    }

    /// New7 constructs a new QNetworkProxyQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` hostname: []const u8 `
    ///
    /// ` port: i32 `
    ///
    /// ` protocolTag: []const u8 `
    ///
    pub fn New7(hostname: []const u8, port: i32, protocolTag: []const u8) QNetworkProxyQuery {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        const protocolTag_str = qtc.libqt_string{
            .len = protocolTag.len,
            .data = protocolTag.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new7(hostname_str, @bitCast(port), protocolTag_str) };
    }

    /// New8 constructs a new QNetworkProxyQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` hostname: []const u8 `
    ///
    /// ` port: i32 `
    ///
    /// ` protocolTag: []const u8 `
    ///
    /// ` queryType: qnetworkproxy_enums.QueryType `
    ///
    pub fn New8(hostname: []const u8, port: i32, protocolTag: []const u8, queryType: i32) QNetworkProxyQuery {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        const protocolTag_str = qtc.libqt_string{
            .len = protocolTag.len,
            .data = protocolTag.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new8(hostname_str, @bitCast(port), protocolTag_str, @bitCast(queryType)) };
    }

    /// New9 constructs a new QNetworkProxyQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bindPort: u16 `
    ///
    /// ` protocolTag: []const u8 `
    ///
    pub fn New9(bindPort: u16, protocolTag: []const u8) QNetworkProxyQuery {
        const protocolTag_str = qtc.libqt_string{
            .len = protocolTag.len,
            .data = protocolTag.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new9(@bitCast(bindPort), protocolTag_str) };
    }

    /// New10 constructs a new QNetworkProxyQuery object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bindPort: u16 `
    ///
    /// ` protocolTag: []const u8 `
    ///
    /// ` queryType: qnetworkproxy_enums.QueryType `
    ///
    pub fn New10(bindPort: u16, protocolTag: []const u8, queryType: i32) QNetworkProxyQuery {
        const protocolTag_str = qtc.libqt_string{
            .len = protocolTag.len,
            .data = protocolTag.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new10(@bitCast(bindPort), protocolTag_str, @bitCast(queryType)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn OperatorAssign(self: QNetworkProxyQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        qtc.QNetworkProxyQuery_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn Swap(self: QNetworkProxyQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        qtc.QNetworkProxyQuery_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn OperatorEqual(self: QNetworkProxyQuery, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        return qtc.QNetworkProxyQuery_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn OperatorNotEqual(self: QNetworkProxyQuery, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        return qtc.QNetworkProxyQuery_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#queryType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkproxy_enums.QueryType `
    ///
    pub fn QueryType(self: QNetworkProxyQuery) i32 {
        return qtc.QNetworkProxyQuery_QueryType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setQueryType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` typeVal: qnetworkproxy_enums.QueryType `
    ///
    pub fn SetQueryType(self: QNetworkProxyQuery, typeVal: i32) void {
        qtc.QNetworkProxyQuery_SetQueryType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    pub fn PeerPort(self: QNetworkProxyQuery) i32 {
        return qtc.QNetworkProxyQuery_PeerPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` port: i32 `
    ///
    pub fn SetPeerPort(self: QNetworkProxyQuery, port: i32) void {
        qtc.QNetworkProxyQuery_SetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerHostName(self: QNetworkProxyQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxyQuery_PeerHostName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxyquery.PeerHostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` hostname: []const u8 `
    ///
    pub fn SetPeerHostName(self: QNetworkProxyQuery, hostname: []const u8) void {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        qtc.QNetworkProxyQuery_SetPeerHostName(@ptrCast(self.ptr), hostname_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    pub fn LocalPort(self: QNetworkProxyQuery) i32 {
        return qtc.QNetworkProxyQuery_LocalPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setLocalPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` port: i32 `
    ///
    pub fn SetLocalPort(self: QNetworkProxyQuery, port: i32) void {
        qtc.QNetworkProxyQuery_SetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#protocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolTag(self: QNetworkProxyQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxyQuery_ProtocolTag(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxyquery.ProtocolTag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setProtocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` protocolTag: []const u8 `
    ///
    pub fn SetProtocolTag(self: QNetworkProxyQuery, protocolTag: []const u8) void {
        const protocolTag_str = qtc.libqt_string{
            .len = protocolTag.len,
            .data = protocolTag.ptr,
        };
        qtc.QNetworkProxyQuery_SetProtocolTag(@ptrCast(self.ptr), protocolTag_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    pub fn Url(self: QNetworkProxyQuery) QUrl {
        return .{ .ptr = qtc.QNetworkProxyQuery_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: QNetworkProxyQuery, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QNetworkProxyQuery_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#dtor.QNetworkProxyQuery)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    pub fn Delete(self: QNetworkProxyQuery) void {
        qtc.QNetworkProxyQuery_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html)
pub const QNetworkProxy = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkProxy,

    pub const _is_QNetworkProxy = {};

    /// New constructs a new QNetworkProxy object.
    ///
    pub fn New() QNetworkProxy {
        return .{ .ptr = qtc.QNetworkProxy_new() };
    }

    /// New2 constructs a new QNetworkProxy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    pub fn New2(typeVal: i32) QNetworkProxy {
        return .{ .ptr = qtc.QNetworkProxy_new2(@bitCast(typeVal)) };
    }

    /// New3 constructs a new QNetworkProxy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn New3(other: anytype) QNetworkProxy {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        return .{ .ptr = qtc.QNetworkProxy_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QNetworkProxy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn New4(typeVal: i32, hostName: []const u8) QNetworkProxy {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxy_new4(@bitCast(typeVal), hostName_str) };
    }

    /// New5 constructs a new QNetworkProxy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    pub fn New5(typeVal: i32, hostName: []const u8, port: u16) QNetworkProxy {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxy_new5(@bitCast(typeVal), hostName_str, @bitCast(port)) };
    }

    /// New6 constructs a new QNetworkProxy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` user: []const u8 `
    ///
    pub fn New6(typeVal: i32, hostName: []const u8, port: u16, user: []const u8) QNetworkProxy {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxy_new6(@bitCast(typeVal), hostName_str, @bitCast(port), user_str) };
    }

    /// New7 constructs a new QNetworkProxy object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` user: []const u8 `
    ///
    /// ` password: []const u8 `
    ///
    pub fn New7(typeVal: i32, hostName: []const u8, port: u16, user: []const u8, password: []const u8) QNetworkProxy {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = user.len,
            .data = user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxy_new7(@bitCast(typeVal), hostName_str, @bitCast(port), user_str, password_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn OperatorAssign(self: QNetworkProxy, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        qtc.QNetworkProxy_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn Swap(self: QNetworkProxy, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        qtc.QNetworkProxy_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn OperatorEqual(self: QNetworkProxy, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        return qtc.QNetworkProxy_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn OperatorNotEqual(self: QNetworkProxy, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        return qtc.QNetworkProxy_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    pub fn SetType(self: QNetworkProxy, typeVal: i32) void {
        qtc.QNetworkProxy_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ## Returns:
    ///
    /// ` qnetworkproxy_enums.ProxyType `
    ///
    pub fn Type(self: QNetworkProxy) i32 {
        return qtc.QNetworkProxy_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setCapabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` capab: flag of qnetworkproxy_enums.Capability `
    ///
    pub fn SetCapabilities(self: QNetworkProxy, capab: i32) void {
        qtc.QNetworkProxy_SetCapabilities(@ptrCast(self.ptr), @bitCast(capab));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#capabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnetworkproxy_enums.Capability `
    ///
    pub fn Capabilities(self: QNetworkProxy) i32 {
        return qtc.QNetworkProxy_Capabilities(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#isCachingProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn IsCachingProxy(self: QNetworkProxy) bool {
        return qtc.QNetworkProxy_IsCachingProxy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#isTransparentProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn IsTransparentProxy(self: QNetworkProxy) bool {
        return qtc.QNetworkProxy_IsTransparentProxy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` userName: []const u8 `
    ///
    pub fn SetUser(self: QNetworkProxy, userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.QNetworkProxy_SetUser(@ptrCast(self.ptr), userName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn User(self: QNetworkProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxy_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxy.User: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` password: []const u8 `
    ///
    pub fn SetPassword(self: QNetworkProxy, password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = password.len,
            .data = password.ptr,
        };
        qtc.QNetworkProxy_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Password(self: QNetworkProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxy_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxy.Password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn SetHostName(self: QNetworkProxy, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QNetworkProxy_SetHostName(@ptrCast(self.ptr), hostName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#hostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HostName(self: QNetworkProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxy_HostName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkproxy.HostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` port: u16 `
    ///
    pub fn SetPort(self: QNetworkProxy, port: u16) void {
        qtc.QNetworkProxy_SetPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#port)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn Port(self: QNetworkProxy) u16 {
        return qtc.QNetworkProxy_Port(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setApplicationProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` proxy: QNetworkProxy `
    ///
    pub fn SetApplicationProxy(proxy: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QNetworkProxy;
        qtc.QNetworkProxy_SetApplicationProxy(@ptrCast(proxy.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#applicationProxy)
    ///
    pub fn ApplicationProxy() QNetworkProxy {
        return .{ .ptr = qtc.QNetworkProxy_ApplicationProxy() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn Headers(self: QNetworkProxy) QHttpHeaders {
        return .{ .ptr = qtc.QNetworkProxy_Headers(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` newHeaders: QHttpHeaders `
    ///
    pub fn SetHeaders(self: QNetworkProxy, newHeaders: anytype) void {
        comptime _ = @TypeOf(newHeaders)._is_QHttpHeaders;
        qtc.QNetworkProxy_SetHeaders(@ptrCast(self.ptr), @ptrCast(newHeaders.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#header)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` header: qnetworkrequest_enums.KnownHeaders `
    ///
    pub fn Header(self: QNetworkProxy, header: i32) QVariant {
        return .{ .ptr = qtc.QNetworkProxy_Header(@ptrCast(self.ptr), @bitCast(header)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` header: qnetworkrequest_enums.KnownHeaders `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetHeader(self: QNetworkProxy, header: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QNetworkProxy_SetHeader(@ptrCast(self.ptr), @bitCast(header), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#hasRawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn HasRawHeader(self: QNetworkProxy, headerName: []u8) bool {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        return qtc.QNetworkProxy_HasRawHeader(@ptrCast(self.ptr), headerName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeaderList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RawHeaderList(self: QNetworkProxy, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkProxy_RawHeaderList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qnetworkproxy.RawHeaderList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qnetworkproxy.RawHeaderList: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn RawHeader(self: QNetworkProxy, allocator: std.mem.Allocator, headerName: []u8) []u8 {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QNetworkProxy_RawHeader(@ptrCast(self.ptr), headerName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkproxy.RawHeader: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setRawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` headerName: []u8 `
    ///
    /// ` value: []u8 `
    ///
    pub fn SetRawHeader(self: QNetworkProxy, headerName: []u8, value: []u8) void {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.QNetworkProxy_SetRawHeader(@ptrCast(self.ptr), headerName_str, value_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#dtor.QNetworkProxy)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn Delete(self: QNetworkProxy) void {
        qtc.QNetworkProxy_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html)
pub const QNetworkProxyFactory = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkProxyFactory,

    pub const _is_QNetworkProxyFactory = {};

    /// New constructs a new QNetworkProxyFactory object.
    ///
    pub fn New() QNetworkProxyFactory {
        return .{ .ptr = qtc.QNetworkProxyFactory_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` query: QNetworkProxyQuery `
    ///
    pub fn QueryProxy(self: QNetworkProxyFactory, allocator: std.mem.Allocator, query: anytype) []QNetworkProxy {
        comptime _ = @TypeOf(query)._is_QNetworkProxyQuery;
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_QueryProxy(@ptrCast(self.ptr), @ptrCast(query.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.QueryProxy: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QNetworkProxyFactory `
    ///
    /// ` callback: *const fn (self: QNetworkProxyFactory, query: QNetworkProxyQuery) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QNetworkProxy `
    ///
    pub fn OnQueryProxy(self: QNetworkProxyFactory, callback: *const fn (QNetworkProxyFactory, QNetworkProxyQuery) callconv(.c) qtc.libqt_list) void {
        qtc.QNetworkProxyFactory_OnQueryProxy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperQueryProxy` instead
    ///
    pub const QBaseQueryProxy = SuperQueryProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyFactory `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` query: QNetworkProxyQuery `
    ///
    pub fn SuperQueryProxy(self: QNetworkProxyFactory, allocator: std.mem.Allocator, query: anytype) []QNetworkProxy {
        comptime _ = @TypeOf(query)._is_QNetworkProxyQuery;
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_SuperQueryProxy(@ptrCast(self.ptr), @ptrCast(query.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.QueryProxy: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#usesSystemConfiguration)
    ///
    pub fn UsesSystemConfiguration() bool {
        return qtc.QNetworkProxyFactory_UsesSystemConfiguration();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setUseSystemConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` enable: bool `
    ///
    pub fn SetUseSystemConfiguration(enable: bool) void {
        qtc.QNetworkProxyFactory_SetUseSystemConfiguration(enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setApplicationProxyFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` factory: QNetworkProxyFactory `
    ///
    pub fn SetApplicationProxyFactory(factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_QNetworkProxyFactory;
        qtc.QNetworkProxyFactory_SetApplicationProxyFactory(@ptrCast(factory.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#proxyForQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` query: QNetworkProxyQuery `
    ///
    pub fn ProxyForQuery(allocator: std.mem.Allocator, query: anytype) []QNetworkProxy {
        comptime _ = @TypeOf(query)._is_QNetworkProxyQuery;
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_ProxyForQuery(@ptrCast(query.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.ProxyForQuery: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SystemProxyForQuery(allocator: std.mem.Allocator) []QNetworkProxy {
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_SystemProxyForQuery();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.SystemProxyForQuery: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyFactory `
    ///
    /// ` param1: QNetworkProxyFactory `
    ///
    pub fn OperatorAssign(self: QNetworkProxyFactory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QNetworkProxyFactory;
        qtc.QNetworkProxyFactory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` query: QNetworkProxyQuery `
    ///
    pub fn SystemProxyForQuery1(allocator: std.mem.Allocator, query: anytype) []QNetworkProxy {
        comptime _ = @TypeOf(query)._is_QNetworkProxyQuery;
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_SystemProxyForQuery1(@ptrCast(query.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("qnetworkproxyfactory.SystemProxyForQuery1: Memory allocation failed");
        const _data: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#dtor.QNetworkProxyFactory)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkProxyFactory `
    ///
    pub fn Delete(self: QNetworkProxyFactory) void {
        qtc.QNetworkProxyFactory_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#public-types)
pub const enums = struct {
    pub const QueryType = enum(i32) {
        pub const TcpSocket: i32 = 0;
        pub const UdpSocket: i32 = 1;
        pub const SctpSocket: i32 = 2;
        pub const TcpServer: i32 = 100;
        pub const UrlRequest: i32 = 101;
        pub const SctpServer: i32 = 102;
    };

    pub const ProxyType = enum(i32) {
        pub const DefaultProxy: i32 = 0;
        pub const Socks5Proxy: i32 = 1;
        pub const NoProxy: i32 = 2;
        pub const HttpProxy: i32 = 3;
        pub const HttpCachingProxy: i32 = 4;
        pub const FtpCachingProxy: i32 = 5;
    };

    pub const Capability = enum(i32) {
        pub const TunnelingCapability: i32 = 1;
        pub const ListeningCapability: i32 = 2;
        pub const UdpTunnelingCapability: i32 = 4;
        pub const CachingCapability: i32 = 8;
        pub const HostNameLookupCapability: i32 = 16;
        pub const SctpTunnelingCapability: i32 = 32;
        pub const SctpListeningCapability: i32 = 64;
    };
};
