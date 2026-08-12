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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    pub fn new() QNetworkProxyQuery {
        return .{ .ptr = qtc.QNetworkProxyQuery_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` requestUrl: QUrl `
    ///
    pub fn new2(requestUrl: anytype) QNetworkProxyQuery {
        comptime _ = @TypeOf(requestUrl)._is_QUrl;
        return .{ .ptr = qtc.QNetworkProxyQuery_new2(@ptrCast(requestUrl.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` hostname: []const u8 `
    ///
    /// ` port: i32 `
    ///
    pub fn new3(hostname: []const u8, port: i32) QNetworkProxyQuery {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new3(hostname_str, @bitCast(port)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` bindPort: u16 `
    ///
    pub fn new4(bindPort: u16) QNetworkProxyQuery {
        return .{ .ptr = qtc.QNetworkProxyQuery_new4(@bitCast(bindPort)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn new5(other: anytype) QNetworkProxyQuery {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        return .{ .ptr = qtc.QNetworkProxyQuery_new5(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` requestUrl: QUrl `
    ///
    /// ` _queryType: qnetworkproxy_enums.QueryType `
    ///
    pub fn new6(requestUrl: anytype, _queryType: i32) QNetworkProxyQuery {
        comptime _ = @TypeOf(requestUrl)._is_QUrl;
        return .{ .ptr = qtc.QNetworkProxyQuery_new6(@ptrCast(requestUrl.ptr), @bitCast(_queryType)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` hostname: []const u8 `
    ///
    /// ` port: i32 `
    ///
    /// ` _protocolTag: []const u8 `
    ///
    pub fn new7(hostname: []const u8, port: i32, _protocolTag: []const u8) QNetworkProxyQuery {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        const protocolTag_str = qtc.libqt_string{
            .len = _protocolTag.len,
            .data = _protocolTag.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new7(hostname_str, @bitCast(port), protocolTag_str) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` hostname: []const u8 `
    ///
    /// ` port: i32 `
    ///
    /// ` _protocolTag: []const u8 `
    ///
    /// ` _queryType: qnetworkproxy_enums.QueryType `
    ///
    pub fn new8(hostname: []const u8, port: i32, _protocolTag: []const u8, _queryType: i32) QNetworkProxyQuery {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        const protocolTag_str = qtc.libqt_string{
            .len = _protocolTag.len,
            .data = _protocolTag.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new8(hostname_str, @bitCast(port), protocolTag_str, @bitCast(_queryType)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` bindPort: u16 `
    ///
    /// ` _protocolTag: []const u8 `
    ///
    pub fn new9(bindPort: u16, _protocolTag: []const u8) QNetworkProxyQuery {
        const protocolTag_str = qtc.libqt_string{
            .len = _protocolTag.len,
            .data = _protocolTag.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new9(@bitCast(bindPort), protocolTag_str) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QNetworkProxyQuery object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` bindPort: u16 `
    ///
    /// ` _protocolTag: []const u8 `
    ///
    /// ` _queryType: qnetworkproxy_enums.QueryType `
    ///
    pub fn new10(bindPort: u16, _protocolTag: []const u8, _queryType: i32) QNetworkProxyQuery {
        const protocolTag_str = qtc.libqt_string{
            .len = _protocolTag.len,
            .data = _protocolTag.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxyQuery_new10(@bitCast(bindPort), protocolTag_str, @bitCast(_queryType)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn operatorAssign(self: QNetworkProxyQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        qtc.QNetworkProxyQuery_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn swap(self: QNetworkProxyQuery, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        qtc.QNetworkProxyQuery_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn operatorEqual(self: QNetworkProxyQuery, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        return qtc.QNetworkProxyQuery_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` other: QNetworkProxyQuery `
    ///
    pub fn operatorNotEqual(self: QNetworkProxyQuery, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkProxyQuery;
        return qtc.QNetworkProxyQuery_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `queryType` instead
    ///
    pub const QueryType = queryType;

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
    pub fn queryType(self: QNetworkProxyQuery) i32 {
        return qtc.QNetworkProxyQuery_QueryType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setQueryType` instead
    ///
    pub const SetQueryType = setQueryType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setQueryType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` typeVal: qnetworkproxy_enums.QueryType `
    ///
    pub fn setQueryType(self: QNetworkProxyQuery, typeVal: i32) void {
        qtc.QNetworkProxyQuery_SetQueryType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `peerPort` instead
    ///
    pub const PeerPort = peerPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    pub fn peerPort(self: QNetworkProxyQuery) i32 {
        return qtc.QNetworkProxyQuery_PeerPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPeerPort` instead
    ///
    pub const SetPeerPort = setPeerPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` port: i32 `
    ///
    pub fn setPeerPort(self: QNetworkProxyQuery, port: i32) void {
        qtc.QNetworkProxyQuery_SetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `peerHostName` instead
    ///
    pub const PeerHostName = peerHostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn peerHostName(self: QNetworkProxyQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxyQuery_PeerHostName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkProxyQuery.peerHostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPeerHostName` instead
    ///
    pub const SetPeerHostName = setPeerHostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` hostname: []const u8 `
    ///
    pub fn setPeerHostName(self: QNetworkProxyQuery, hostname: []const u8) void {
        const hostname_str = qtc.libqt_string{
            .len = hostname.len,
            .data = hostname.ptr,
        };
        qtc.QNetworkProxyQuery_SetPeerHostName(@ptrCast(self.ptr), hostname_str);
    }

    /// ### DEPRECATED: Use `localPort` instead
    ///
    pub const LocalPort = localPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    pub fn localPort(self: QNetworkProxyQuery) i32 {
        return qtc.QNetworkProxyQuery_LocalPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocalPort` instead
    ///
    pub const SetLocalPort = setLocalPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setLocalPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` port: i32 `
    ///
    pub fn setLocalPort(self: QNetworkProxyQuery, port: i32) void {
        qtc.QNetworkProxyQuery_SetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `protocolTag` instead
    ///
    pub const ProtocolTag = protocolTag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#protocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn protocolTag(self: QNetworkProxyQuery, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxyQuery_ProtocolTag(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkProxyQuery.protocolTag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProtocolTag` instead
    ///
    pub const SetProtocolTag = setProtocolTag;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setProtocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` _protocolTag: []const u8 `
    ///
    pub fn setProtocolTag(self: QNetworkProxyQuery, _protocolTag: []const u8) void {
        const protocolTag_str = qtc.libqt_string{
            .len = _protocolTag.len,
            .data = _protocolTag.ptr,
        };
        qtc.QNetworkProxyQuery_SetProtocolTag(@ptrCast(self.ptr), protocolTag_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    pub fn url(self: QNetworkProxyQuery) QUrl {
        return .{ .ptr = qtc.QNetworkProxyQuery_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: QNetworkProxyQuery, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.QNetworkProxyQuery_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#dtor.QNetworkProxyQuery)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkProxyQuery `
    ///
    pub fn delete(self: QNetworkProxyQuery) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkProxy object in C++ memory
    ///
    pub fn new() QNetworkProxy {
        return .{ .ptr = qtc.QNetworkProxy_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    pub fn new2(typeVal: i32) QNetworkProxy {
        return .{ .ptr = qtc.QNetworkProxy_new2(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QNetworkProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn new3(other: anytype) QNetworkProxy {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        return .{ .ptr = qtc.QNetworkProxy_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QNetworkProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    /// ` _hostName: []const u8 `
    ///
    pub fn new4(typeVal: i32, _hostName: []const u8) QNetworkProxy {
        const hostName_str = qtc.libqt_string{
            .len = _hostName.len,
            .data = _hostName.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxy_new4(@bitCast(typeVal), hostName_str) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QNetworkProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    /// ` _hostName: []const u8 `
    ///
    /// ` _port: u16 `
    ///
    pub fn new5(typeVal: i32, _hostName: []const u8, _port: u16) QNetworkProxy {
        const hostName_str = qtc.libqt_string{
            .len = _hostName.len,
            .data = _hostName.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxy_new5(@bitCast(typeVal), hostName_str, @bitCast(_port)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QNetworkProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    /// ` _hostName: []const u8 `
    ///
    /// ` _port: u16 `
    ///
    /// ` _user: []const u8 `
    ///
    pub fn new6(typeVal: i32, _hostName: []const u8, _port: u16, _user: []const u8) QNetworkProxy {
        const hostName_str = qtc.libqt_string{
            .len = _hostName.len,
            .data = _hostName.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxy_new6(@bitCast(typeVal), hostName_str, @bitCast(_port), user_str) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QNetworkProxy object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    /// ` _hostName: []const u8 `
    ///
    /// ` _port: u16 `
    ///
    /// ` _user: []const u8 `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn new7(typeVal: i32, _hostName: []const u8, _port: u16, _user: []const u8, _password: []const u8) QNetworkProxy {
        const hostName_str = qtc.libqt_string{
            .len = _hostName.len,
            .data = _hostName.ptr,
        };
        const user_str = qtc.libqt_string{
            .len = _user.len,
            .data = _user.ptr,
        };
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        return .{ .ptr = qtc.QNetworkProxy_new7(@bitCast(typeVal), hostName_str, @bitCast(_port), user_str, password_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn operatorAssign(self: QNetworkProxy, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        qtc.QNetworkProxy_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn swap(self: QNetworkProxy, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        qtc.QNetworkProxy_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn operatorEqual(self: QNetworkProxy, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        return qtc.QNetworkProxy_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorNotEqual` instead
    ///
    pub const OperatorNotEqual = operatorNotEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-not-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` other: QNetworkProxy `
    ///
    pub fn operatorNotEqual(self: QNetworkProxy, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QNetworkProxy;
        return qtc.QNetworkProxy_OperatorNotEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setType` instead
    ///
    pub const SetType = setType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` typeVal: qnetworkproxy_enums.ProxyType `
    ///
    pub fn setType(self: QNetworkProxy, typeVal: i32) void {
        qtc.QNetworkProxy_SetType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QNetworkProxy) i32 {
        return qtc.QNetworkProxy_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCapabilities` instead
    ///
    pub const SetCapabilities = setCapabilities;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setCapabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` capab: flag of qnetworkproxy_enums.Capability `
    ///
    pub fn setCapabilities(self: QNetworkProxy, capab: i32) void {
        qtc.QNetworkProxy_SetCapabilities(@ptrCast(self.ptr), @bitCast(capab));
    }

    /// ### DEPRECATED: Use `capabilities` instead
    ///
    pub const Capabilities = capabilities;

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
    pub fn capabilities(self: QNetworkProxy) i32 {
        return qtc.QNetworkProxy_Capabilities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCachingProxy` instead
    ///
    pub const IsCachingProxy = isCachingProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#isCachingProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn isCachingProxy(self: QNetworkProxy) bool {
        return qtc.QNetworkProxy_IsCachingProxy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTransparentProxy` instead
    ///
    pub const IsTransparentProxy = isTransparentProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#isTransparentProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn isTransparentProxy(self: QNetworkProxy) bool {
        return qtc.QNetworkProxy_IsTransparentProxy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUser` instead
    ///
    pub const SetUser = setUser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setUser)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` userName: []const u8 `
    ///
    pub fn setUser(self: QNetworkProxy, userName: []const u8) void {
        const userName_str = qtc.libqt_string{
            .len = userName.len,
            .data = userName.ptr,
        };
        qtc.QNetworkProxy_SetUser(@ptrCast(self.ptr), userName_str);
    }

    /// ### DEPRECATED: Use `user` instead
    ///
    pub const User = user;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#user)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn user(self: QNetworkProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxy_User(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkProxy.user: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPassword` instead
    ///
    pub const SetPassword = setPassword;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setPassword)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` _password: []const u8 `
    ///
    pub fn setPassword(self: QNetworkProxy, _password: []const u8) void {
        const password_str = qtc.libqt_string{
            .len = _password.len,
            .data = _password.ptr,
        };
        qtc.QNetworkProxy_SetPassword(@ptrCast(self.ptr), password_str);
    }

    /// ### DEPRECATED: Use `password` instead
    ///
    pub const Password = password;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#password)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn password(self: QNetworkProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxy_Password(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkProxy.password: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHostName` instead
    ///
    pub const SetHostName = setHostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setHostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` _hostName: []const u8 `
    ///
    pub fn setHostName(self: QNetworkProxy, _hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = _hostName.len,
            .data = _hostName.ptr,
        };
        qtc.QNetworkProxy_SetHostName(@ptrCast(self.ptr), hostName_str);
    }

    /// ### DEPRECATED: Use `hostName` instead
    ///
    pub const HostName = hostName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#hostName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn hostName(self: QNetworkProxy, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QNetworkProxy_HostName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QNetworkProxy.hostName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPort` instead
    ///
    pub const SetPort = setPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` _port: u16 `
    ///
    pub fn setPort(self: QNetworkProxy, _port: u16) void {
        qtc.QNetworkProxy_SetPort(@ptrCast(self.ptr), @bitCast(_port));
    }

    /// ### DEPRECATED: Use `port` instead
    ///
    pub const Port = port;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#port)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn port(self: QNetworkProxy) u16 {
        return qtc.QNetworkProxy_Port(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setApplicationProxy` instead
    ///
    pub const SetApplicationProxy = setApplicationProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setApplicationProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` proxy: QNetworkProxy `
    ///
    pub fn setApplicationProxy(proxy: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QNetworkProxy;
        qtc.QNetworkProxy_SetApplicationProxy(@ptrCast(proxy.ptr));
    }

    /// ### DEPRECATED: Use `applicationProxy` instead
    ///
    pub const ApplicationProxy = applicationProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#applicationProxy)
    ///
    pub fn applicationProxy() QNetworkProxy {
        return .{ .ptr = qtc.QNetworkProxy_ApplicationProxy() };
    }

    /// ### DEPRECATED: Use `headers` instead
    ///
    pub const Headers = headers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#headers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn headers(self: QNetworkProxy) QHttpHeaders {
        return .{ .ptr = qtc.QNetworkProxy_Headers(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHeaders` instead
    ///
    pub const SetHeaders = setHeaders;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeaders)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` newHeaders: QHttpHeaders `
    ///
    pub fn setHeaders(self: QNetworkProxy, newHeaders: anytype) void {
        comptime _ = @TypeOf(newHeaders)._is_QHttpHeaders;
        qtc.QNetworkProxy_SetHeaders(@ptrCast(self.ptr), @ptrCast(newHeaders.ptr));
    }

    /// ### DEPRECATED: Use `header` instead
    ///
    pub const Header = header;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#header)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` _header: qnetworkrequest_enums.KnownHeaders `
    ///
    pub fn header(self: QNetworkProxy, _header: i32) QVariant {
        return .{ .ptr = qtc.QNetworkProxy_Header(@ptrCast(self.ptr), @bitCast(_header)) };
    }

    /// ### DEPRECATED: Use `setHeader` instead
    ///
    pub const SetHeader = setHeader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` _header: qnetworkrequest_enums.KnownHeaders `
    ///
    /// ` value: QVariant `
    ///
    pub fn setHeader(self: QNetworkProxy, _header: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QNetworkProxy_SetHeader(@ptrCast(self.ptr), @bitCast(_header), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `hasRawHeader` instead
    ///
    pub const HasRawHeader = hasRawHeader;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#hasRawHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` headerName: []u8 `
    ///
    pub fn hasRawHeader(self: QNetworkProxy, headerName: []u8) bool {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        return qtc.QNetworkProxy_HasRawHeader(@ptrCast(self.ptr), headerName_str);
    }

    /// ### DEPRECATED: Use `rawHeaderList` instead
    ///
    pub const RawHeaderList = rawHeaderList;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeaderList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxy `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn rawHeaderList(self: QNetworkProxy, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QNetworkProxy_RawHeaderList(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QNetworkProxy.rawHeaderList: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QNetworkProxy.rawHeaderList: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `rawHeader` instead
    ///
    pub const RawHeader = rawHeader;

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
    pub fn rawHeader(self: QNetworkProxy, allocator: std.mem.Allocator, headerName: []u8) []u8 {
        const headerName_str = qtc.libqt_string{
            .len = headerName.len,
            .data = headerName.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QNetworkProxy_RawHeader(@ptrCast(self.ptr), headerName_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkProxy.rawHeader: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRawHeader` instead
    ///
    pub const SetRawHeader = setRawHeader;

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
    pub fn setRawHeader(self: QNetworkProxy, headerName: []u8, value: []u8) void {
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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#dtor.QNetworkProxy)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkProxy `
    ///
    pub fn delete(self: QNetworkProxy) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkProxyFactory object in C++ memory
    ///
    pub fn new() QNetworkProxyFactory {
        return .{ .ptr = qtc.QNetworkProxyFactory_new() };
    }

    /// ### DEPRECATED: Use `queryProxy` instead
    ///
    pub const QueryProxy = queryProxy;

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
    pub fn queryProxy(self: QNetworkProxyFactory, allocator: std.mem.Allocator, query: anytype) []QNetworkProxy {
        comptime _ = @TypeOf(query)._is_QNetworkProxyQuery;
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_QueryProxy(@ptrCast(self.ptr), @ptrCast(query.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("QNetworkProxyFactory.queryProxy: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onQueryProxy` instead
    ///
    pub const OnQueryProxy = onQueryProxy;

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
    pub fn onQueryProxy(self: QNetworkProxyFactory, callback: *const fn (QNetworkProxyFactory, QNetworkProxyQuery) callconv(.c) qtc.libqt_list) void {
        qtc.QNetworkProxyFactory_OnQueryProxy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superQueryProxy` instead
    ///
    pub const SuperQueryProxy = superQueryProxy;

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
    pub fn superQueryProxy(self: QNetworkProxyFactory, allocator: std.mem.Allocator, query: anytype) []QNetworkProxy {
        comptime _ = @TypeOf(query)._is_QNetworkProxyQuery;
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_SuperQueryProxy(@ptrCast(self.ptr), @ptrCast(query.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("QNetworkProxyFactory.queryProxy: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `usesSystemConfiguration` instead
    ///
    pub const UsesSystemConfiguration = usesSystemConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#usesSystemConfiguration)
    ///
    pub fn usesSystemConfiguration() bool {
        return qtc.QNetworkProxyFactory_UsesSystemConfiguration();
    }

    /// ### DEPRECATED: Use `setUseSystemConfiguration` instead
    ///
    pub const SetUseSystemConfiguration = setUseSystemConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setUseSystemConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` enable: bool `
    ///
    pub fn setUseSystemConfiguration(enable: bool) void {
        qtc.QNetworkProxyFactory_SetUseSystemConfiguration(enable);
    }

    /// ### DEPRECATED: Use `setApplicationProxyFactory` instead
    ///
    pub const SetApplicationProxyFactory = setApplicationProxyFactory;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setApplicationProxyFactory)
    ///
    /// ## Parameter(s):
    ///
    /// ` factory: QNetworkProxyFactory `
    ///
    pub fn setApplicationProxyFactory(factory: anytype) void {
        comptime _ = @TypeOf(factory)._is_QNetworkProxyFactory;
        qtc.QNetworkProxyFactory_SetApplicationProxyFactory(@ptrCast(factory.ptr));
    }

    /// ### DEPRECATED: Use `proxyForQuery` instead
    ///
    pub const ProxyForQuery = proxyForQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#proxyForQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` query: QNetworkProxyQuery `
    ///
    pub fn proxyForQuery(allocator: std.mem.Allocator, query: anytype) []QNetworkProxy {
        comptime _ = @TypeOf(query)._is_QNetworkProxyQuery;
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_ProxyForQuery(@ptrCast(query.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("QNetworkProxyFactory.proxyForQuery: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `systemProxyForQuery` instead
    ///
    pub const SystemProxyForQuery = systemProxyForQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn systemProxyForQuery(allocator: std.mem.Allocator) []QNetworkProxy {
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_SystemProxyForQuery();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("QNetworkProxyFactory.systemProxyForQuery: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkProxyFactory `
    ///
    /// ` param1: QNetworkProxyFactory `
    ///
    pub fn operatorAssign(self: QNetworkProxyFactory, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QNetworkProxyFactory;
        qtc.QNetworkProxyFactory_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `systemProxyForQuery1` instead
    ///
    pub const SystemProxyForQuery1 = systemProxyForQuery1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` query: QNetworkProxyQuery `
    ///
    pub fn systemProxyForQuery1(allocator: std.mem.Allocator, query: anytype) []QNetworkProxy {
        comptime _ = @TypeOf(query)._is_QNetworkProxyQuery;
        const _arr: qtc.libqt_list = qtc.QNetworkProxyFactory_SystemProxyForQuery1(@ptrCast(query.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QNetworkProxy, _arr.len) catch @panic("QNetworkProxyFactory.systemProxyForQuery1: Memory allocation failed");
        const _data_val: [*]QtC.QNetworkProxy = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#dtor.QNetworkProxyFactory)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkProxyFactory `
    ///
    pub fn delete(self: QNetworkProxyFactory) void {
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
