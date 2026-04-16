const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAuthenticator = @import("libqt6").QAuthenticator;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHostAddress = @import("libqt6").QHostAddress;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkProxy = @import("libqt6").QNetworkProxy;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = @import("libqhostaddress.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html)
pub const QTcpSocket = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTcpSocket,

    pub const _is_QTcpSocket = {};
    pub const _is_QAbstractSocket = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// New constructs a new QTcpSocket object.
    ///
    pub fn New() QTcpSocket {
        return .{ .ptr = qtc.QTcpSocket_new() };
    }

    /// New2 constructs a new QTcpSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QTcpSocket {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QTcpSocket_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn MetaObject(self: QTcpSocket) QMetaObject {
        return .{ .ptr = qtc.QTcpSocket_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QTcpSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTcpSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpSocket `
    ///
    pub fn SuperMetaObject(self: QTcpSocket) QMetaObject {
        return .{ .ptr = qtc.QTcpSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTcpSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTcpSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTcpSocket, callback: *const fn (QTcpSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTcpSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTcpSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTcpSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTcpSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTcpSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTcpSocket, callback: *const fn (QTcpSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTcpSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QTcpSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTcpSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    pub fn Bind(self: QTcpSocket, addr: i32) bool {
        return qtc.QTcpSocket_Bind(@ptrCast(self.ptr), @bitCast(addr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind2(self: QTcpSocket, addr: i32, port: u16) bool {
        return qtc.QTcpSocket_Bind2(@ptrCast(self.ptr), @bitCast(addr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind3(self: QTcpSocket, addr: i32, port: u16, mode: i32) bool {
        return qtc.QTcpSocket_Bind3(@ptrCast(self.ptr), @bitCast(addr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn PauseMode(self: QTcpSocket) i32 {
        return qtc.QAbstractSocket_PauseMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn SetPauseMode(self: QTcpSocket, pauseMode: i32) void {
        qtc.QAbstractSocket_SetPauseMode(@ptrCast(self.ptr), @bitCast(pauseMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHost2(self: QTcpSocket, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsValid(self: QTcpSocket) bool {
        return qtc.QAbstractSocket_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn LocalPort(self: QTcpSocket) u16 {
        return qtc.QAbstractSocket_LocalPort(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn LocalAddress(self: QTcpSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn PeerPort(self: QTcpSocket) u16 {
        return qtc.QAbstractSocket_PeerPort(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn PeerAddress(self: QTcpSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerName(self: QTcpSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_PeerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.PeerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn ReadBufferSize(self: QTcpSocket) i64 {
        return qtc.QAbstractSocket_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Abort(self: QTcpSocket) void {
        qtc.QAbstractSocket_Abort(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketType `
    ///
    pub fn SocketType(self: QTcpSocket) i32 {
        return qtc.QAbstractSocket_SocketType(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketState `
    ///
    pub fn State(self: QTcpSocket) i32 {
        return qtc.QAbstractSocket_State(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn Error(self: QTcpSocket) i32 {
        return qtc.QAbstractSocket_Error(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Flush(self: QTcpSocket) bool {
        return qtc.QAbstractSocket_Flush(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn SetProxy(self: QTcpSocket, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QAbstractSocket_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Proxy(self: QTcpSocket) QNetworkProxy {
        return .{ .ptr = qtc.QAbstractSocket_Proxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolTag(self: QTcpSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_ProtocolTag(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.ProtocolTag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn SetProtocolTag(self: QTcpSocket, tag: []const u8) void {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        qtc.QAbstractSocket_SetProtocolTag(@ptrCast(self.ptr), tag_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn HostFound(self: QTcpSocket) void {
        qtc.QAbstractSocket_HostFound(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket) callconv(.c) void `
    ///
    pub fn OnHostFound(self: QTcpSocket, callback: *const fn (QTcpSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_HostFound(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Connected(self: QTcpSocket) void {
        qtc.QAbstractSocket_Connected(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket) callconv(.c) void `
    ///
    pub fn OnConnected(self: QTcpSocket, callback: *const fn (QTcpSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Disconnected(self: QTcpSocket) void {
        qtc.QAbstractSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: QTcpSocket, callback: *const fn (QTcpSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketState `
    ///
    pub fn StateChanged(self: QTcpSocket, param1: i32) void {
        qtc.QAbstractSocket_StateChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, param1: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: QTcpSocket, param1: i32) void {
        qtc.QAbstractSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, param1: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` proxy: QNetworkProxy `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: QTcpSocket, proxy: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QNetworkProxy;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(proxy.ptr), @ptrCast(authenticator.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, proxy: QNetworkProxy, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: QTcpSocket, callback: *const fn (QTcpSocket, QNetworkProxy, QAuthenticator) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind1(self: QTcpSocket, port: u16) bool {
        return qtc.QAbstractSocket_Bind1(@ptrCast(self.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind22(self: QTcpSocket, port: u16, mode: i32) bool {
        return qtc.QAbstractSocket_Bind22(@ptrCast(self.ptr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHost3(self: QTcpSocket, address: anytype, port: u16, mode: i32) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost3(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: QTcpSocket) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: QTcpSocket, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsTextModeEnabled(self: QTcpSocket) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsOpen(self: QTcpSocket) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsReadable(self: QTcpSocket) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsWritable(self: QTcpSocket) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn ReadChannelCount(self: QTcpSocket) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn WriteChannelCount(self: QTcpSocket) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn CurrentReadChannel(self: QTcpSocket) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: QTcpSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn CurrentWriteChannel(self: QTcpSocket) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: QTcpSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: QTcpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read2(self: QTcpSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtcpsocket.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: QTcpSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtcpsocket.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: QTcpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: QTcpSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtcpsocket.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn StartTransaction(self: QTcpSocket) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn CommitTransaction(self: QTcpSocket) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn RollbackTransaction(self: QTcpSocket) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsTransactionStarted(self: QTcpSocket) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: QTcpSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: QTcpSocket, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: QTcpSocket, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: QTcpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek2(self: QTcpSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtcpsocket.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: QTcpSocket, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: QTcpSocket, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: QTcpSocket, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: QTcpSocket, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QTcpSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn ReadyRead(self: QTcpSocket) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: QTcpSocket, callback: *const fn (QTcpSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: QTcpSocket, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: QTcpSocket, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: QTcpSocket, callback: *const fn (QTcpSocket, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: QTcpSocket, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: QTcpSocket, callback: *const fn (QTcpSocket, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn AboutToClose(self: QTcpSocket) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: QTcpSocket, callback: *const fn (QTcpSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn ReadChannelFinished(self: QTcpSocket) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: QTcpSocket, callback: *const fn (QTcpSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: QTcpSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtcpsocket.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTcpSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtcpsocket.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTcpSocket, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsWidgetType(self: QTcpSocket) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsWindowType(self: QTcpSocket) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsQuickItemType(self: QTcpSocket) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SignalsBlocked(self: QTcpSocket) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTcpSocket, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Thread(self: QTcpSocket) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTcpSocket, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTcpSocket, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTcpSocket, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTcpSocket, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTcpSocket, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTcpSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtcpsocket.Children: Memory allocation failed");
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
    /// ` self: QTcpSocket `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QTcpSocket, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTcpSocket, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTcpSocket, obj: anytype) void {
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
    /// ` self: QTcpSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTcpSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTcpSocket `
    ///
    pub fn Disconnect3(self: QTcpSocket) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTcpSocket, receiver: anytype) bool {
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
    /// ` self: QTcpSocket `
    ///
    pub fn DumpObjectTree(self: QTcpSocket) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn DumpObjectInfo(self: QTcpSocket) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTcpSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTcpSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTcpSocket, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTcpSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtcpsocket.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtcpsocket.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTcpSocket `
    ///
    pub fn BindingStorage(self: QTcpSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn BindingStorage2(self: QTcpSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Destroyed(self: QTcpSocket) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTcpSocket, callback: *const fn (QTcpSocket) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Parent(self: QTcpSocket) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTcpSocket, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn DeleteLater(self: QTcpSocket) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTcpSocket, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTcpSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QTcpSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTcpSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTcpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTcpSocket, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTcpSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTcpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTcpSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTcpSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTcpSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTcpSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTcpSocket, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTcpSocket, callback: *const fn (QTcpSocket, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Resume(self: QTcpSocket) void {
        qtc.QTcpSocket_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperResume` instead
    ///
    pub const QBaseResume = SuperResume;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperResume(self: QTcpSocket) void {
        qtc.QTcpSocket_SuperResume(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResume(self: QTcpSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QTcpSocket_OnResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn ConnectToHost(self: QTcpSocket, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QTcpSocket_ConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
    }

    /// ### DEPRECATED: Use `SuperConnectToHost` instead
    ///
    pub const QBaseConnectToHost = SuperConnectToHost;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn SuperConnectToHost(self: QTcpSocket, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QTcpSocket_SuperConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, hostName: [*:0]const u8, port: u16, mode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void `
    ///
    pub fn OnConnectToHost(self: QTcpSocket, callback: *const fn (QTcpSocket, [*:0]const u8, u16, i32, i32) callconv(.c) void) void {
        qtc.QTcpSocket_OnConnectToHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn DisconnectFromHost(self: QTcpSocket) void {
        qtc.QTcpSocket_DisconnectFromHost(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectFromHost` instead
    ///
    pub const QBaseDisconnectFromHost = SuperDisconnectFromHost;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperDisconnectFromHost(self: QTcpSocket) void {
        qtc.QTcpSocket_SuperDisconnectFromHost(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDisconnectFromHost(self: QTcpSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QTcpSocket_OnDisconnectFromHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn BytesAvailable(self: QTcpSocket) i64 {
        return qtc.QTcpSocket_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperBytesAvailable` instead
    ///
    pub const QBaseBytesAvailable = SuperBytesAvailable;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperBytesAvailable(self: QTcpSocket) i64 {
        return qtc.QTcpSocket_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: QTcpSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QTcpSocket_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn BytesToWrite(self: QTcpSocket) i64 {
        return qtc.QTcpSocket_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperBytesToWrite` instead
    ///
    pub const QBaseBytesToWrite = SuperBytesToWrite;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperBytesToWrite(self: QTcpSocket) i64 {
        return qtc.QTcpSocket_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: QTcpSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QTcpSocket_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SetReadBufferSize(self: QTcpSocket, size: i64) void {
        qtc.QTcpSocket_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `SuperSetReadBufferSize` instead
    ///
    pub const QBaseSetReadBufferSize = SuperSetReadBufferSize;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperSetReadBufferSize(self: QTcpSocket, size: i64) void {
        qtc.QTcpSocket_SuperSetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, size: i64) callconv(.c) void `
    ///
    pub fn OnSetReadBufferSize(self: QTcpSocket, callback: *const fn (QTcpSocket, i64) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetReadBufferSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SocketDescriptor(self: QTcpSocket) isize {
        return qtc.QTcpSocket_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSocketDescriptor` instead
    ///
    pub const QBaseSocketDescriptor = SuperSocketDescriptor;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperSocketDescriptor(self: QTcpSocket) isize {
        return qtc.QTcpSocket_SuperSocketDescriptor(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) isize `
    ///
    pub fn OnSocketDescriptor(self: QTcpSocket, callback: *const fn () callconv(.c) isize) void {
        qtc.QTcpSocket_OnSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetSocketDescriptor(self: QTcpSocket, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QTcpSocket_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// ### DEPRECATED: Use `SuperSetSocketDescriptor` instead
    ///
    pub const QBaseSetSocketDescriptor = SuperSetSocketDescriptor;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetSocketDescriptor(self: QTcpSocket, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QTcpSocket_SuperSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnSetSocketDescriptor(self: QTcpSocket, callback: *const fn (QTcpSocket, isize, i32, i32) callconv(.c) bool) void {
        qtc.QTcpSocket_OnSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetSocketOption(self: QTcpSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTcpSocket_SetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetSocketOption` instead
    ///
    pub const QBaseSetSocketOption = SuperSetSocketOption;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetSocketOption(self: QTcpSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTcpSocket_SuperSetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, option: qabstractsocket_enums.SocketOption, value: QVariant) callconv(.c) void `
    ///
    pub fn OnSetSocketOption(self: QTcpSocket, callback: *const fn (QTcpSocket, i32, QVariant) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SocketOption(self: QTcpSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QTcpSocket_SocketOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// ### DEPRECATED: Use `SuperSocketOption` instead
    ///
    pub const QBaseSocketOption = SuperSocketOption;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SuperSocketOption(self: QTcpSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QTcpSocket_SuperSocketOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, option: qabstractsocket_enums.SocketOption) callconv(.c) QVariant `
    ///
    pub fn OnSocketOption(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) QVariant) void {
        qtc.QTcpSocket_OnSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Close(self: QTcpSocket) void {
        qtc.QTcpSocket_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperClose(self: QTcpSocket) void {
        qtc.QTcpSocket_SuperClose(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: QTcpSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QTcpSocket_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn IsSequential(self: QTcpSocket) bool {
        return qtc.QTcpSocket_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSequential` instead
    ///
    pub const QBaseIsSequential = SuperIsSequential;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperIsSequential(self: QTcpSocket) bool {
        return qtc.QTcpSocket_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: QTcpSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QTcpSocket_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForConnected(self: QTcpSocket, msecs: i32) bool {
        return qtc.QTcpSocket_WaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForConnected` instead
    ///
    pub const QBaseWaitForConnected = SuperWaitForConnected;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForConnected(self: QTcpSocket, msecs: i32) bool {
        return qtc.QTcpSocket_SuperWaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForConnected(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) bool) void {
        qtc.QTcpSocket_OnWaitForConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: QTcpSocket, msecs: i32) bool {
        return qtc.QTcpSocket_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForReadyRead` instead
    ///
    pub const QBaseWaitForReadyRead = SuperWaitForReadyRead;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: QTcpSocket, msecs: i32) bool {
        return qtc.QTcpSocket_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) bool) void {
        qtc.QTcpSocket_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: QTcpSocket, msecs: i32) bool {
        return qtc.QTcpSocket_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForBytesWritten` instead
    ///
    pub const QBaseWaitForBytesWritten = SuperWaitForBytesWritten;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: QTcpSocket, msecs: i32) bool {
        return qtc.QTcpSocket_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) bool) void {
        qtc.QTcpSocket_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForDisconnected(self: QTcpSocket, msecs: i32) bool {
        return qtc.QTcpSocket_WaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForDisconnected` instead
    ///
    pub const QBaseWaitForDisconnected = SuperWaitForDisconnected;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForDisconnected(self: QTcpSocket, msecs: i32) bool {
        return qtc.QTcpSocket_SuperWaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForDisconnected(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) bool) void {
        qtc.QTcpSocket_OnWaitForDisconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: QTcpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTcpSocket_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `SuperReadData` instead
    ///
    pub const QBaseReadData = SuperReadData;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: QTcpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTcpSocket_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: QTcpSocket, callback: *const fn (QTcpSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QTcpSocket_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: QTcpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTcpSocket_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `SuperReadLineData` instead
    ///
    pub const QBaseReadLineData = SuperReadLineData;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: QTcpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTcpSocket_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: QTcpSocket, callback: *const fn (QTcpSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QTcpSocket_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: QTcpSocket, maxSize: i64) i64 {
        return qtc.QTcpSocket_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `SuperSkipData` instead
    ///
    pub const QBaseSkipData = SuperSkipData;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: QTcpSocket, maxSize: i64) i64 {
        return qtc.QTcpSocket_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: QTcpSocket, callback: *const fn (QTcpSocket, i64) callconv(.c) i64) void {
        qtc.QTcpSocket_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: QTcpSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTcpSocket_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// ### DEPRECATED: Use `SuperWriteData` instead
    ///
    pub const QBaseWriteData = SuperWriteData;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: QTcpSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QTcpSocket_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: QTcpSocket, callback: *const fn (QTcpSocket, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QTcpSocket_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: QTcpSocket, mode: i32) bool {
        return qtc.QTcpSocket_Open(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: QTcpSocket, mode: i32) bool {
        return qtc.QTcpSocket_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) bool) void {
        qtc.QTcpSocket_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Pos(self: QTcpSocket) i64 {
        return qtc.QTcpSocket_Pos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperPos` instead
    ///
    pub const QBasePos = SuperPos;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperPos(self: QTcpSocket) i64 {
        return qtc.QTcpSocket_SuperPos(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: QTcpSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QTcpSocket_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Size(self: QTcpSocket) i64 {
        return qtc.QTcpSocket_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSize` instead
    ///
    pub const QBaseSize = SuperSize;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperSize(self: QTcpSocket) i64 {
        return qtc.QTcpSocket_SuperSize(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: QTcpSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QTcpSocket_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: QTcpSocket, pos: i64) bool {
        return qtc.QTcpSocket_Seek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `SuperSeek` instead
    ///
    pub const QBaseSeek = SuperSeek;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn SuperSeek(self: QTcpSocket, pos: i64) bool {
        return qtc.QTcpSocket_SuperSeek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, pos: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: QTcpSocket, callback: *const fn (QTcpSocket, i64) callconv(.c) bool) void {
        qtc.QTcpSocket_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn AtEnd(self: QTcpSocket) bool {
        return qtc.QTcpSocket_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperAtEnd` instead
    ///
    pub const QBaseAtEnd = SuperAtEnd;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperAtEnd(self: QTcpSocket) bool {
        return qtc.QTcpSocket_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: QTcpSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QTcpSocket_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Reset(self: QTcpSocket) bool {
        return qtc.QTcpSocket_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperReset(self: QTcpSocket) bool {
        return qtc.QTcpSocket_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: QTcpSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QTcpSocket_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn CanReadLine(self: QTcpSocket) bool {
        return qtc.QTcpSocket_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanReadLine` instead
    ///
    pub const QBaseCanReadLine = SuperCanReadLine;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SuperCanReadLine(self: QTcpSocket) bool {
        return qtc.QTcpSocket_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: QTcpSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QTcpSocket_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTcpSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTcpSocket_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTcpSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QTcpSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTcpSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QTcpSocket, callback: *const fn (QTcpSocket, QEvent) callconv(.c) bool) void {
        qtc.QTcpSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTcpSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTcpSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTcpSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTcpSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTcpSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QTcpSocket, callback: *const fn (QTcpSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTcpSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTcpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTcpSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTcpSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTcpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTcpSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QTcpSocket, callback: *const fn (QTcpSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QTcpSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTcpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTcpSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTcpSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTcpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTcpSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QTcpSocket, callback: *const fn (QTcpSocket, QChildEvent) callconv(.c) void) void {
        qtc.QTcpSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTcpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTcpSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTcpSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTcpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTcpSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QTcpSocket, callback: *const fn (QTcpSocket, QEvent) callconv(.c) void) void {
        qtc.QTcpSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QTcpSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTcpSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTcpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTcpSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTcpSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QTcpSocket, callback: *const fn (QTcpSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QTcpSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QTcpSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTcpSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTcpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTcpSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTcpSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QTcpSocket, callback: *const fn (QTcpSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QTcpSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SetSocketState(self: QTcpSocket, state: i32) void {
        qtc.QTcpSocket_SetSocketState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `SuperSetSocketState` instead
    ///
    pub const QBaseSetSocketState = SuperSetSocketState;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SuperSetSocketState(self: QTcpSocket, state: i32) void {
        qtc.QTcpSocket_SuperSetSocketState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnSetSocketState(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetSocketState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SetSocketError(self: QTcpSocket, socketError: i32) void {
        qtc.QTcpSocket_SetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### DEPRECATED: Use `SuperSetSocketError` instead
    ///
    pub const QBaseSetSocketError = SuperSetSocketError;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SuperSetSocketError(self: QTcpSocket, socketError: i32) void {
        qtc.QTcpSocket_SuperSetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnSetSocketError(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetSocketError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetLocalPort(self: QTcpSocket, port: u16) void {
        qtc.QTcpSocket_SetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `SuperSetLocalPort` instead
    ///
    pub const QBaseSetLocalPort = SuperSetLocalPort;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetLocalPort(self: QTcpSocket, port: u16) void {
        qtc.QTcpSocket_SuperSetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetLocalPort(self: QTcpSocket, callback: *const fn (QTcpSocket, u16) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetLocalPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SetLocalAddress(self: QTcpSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QTcpSocket_SetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetLocalAddress` instead
    ///
    pub const QBaseSetLocalAddress = SuperSetLocalAddress;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SuperSetLocalAddress(self: QTcpSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QTcpSocket_SuperSetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, address: QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetLocalAddress(self: QTcpSocket, callback: *const fn (QTcpSocket, QHostAddress) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetLocalAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetPeerPort(self: QTcpSocket, port: u16) void {
        qtc.QTcpSocket_SetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `SuperSetPeerPort` instead
    ///
    pub const QBaseSetPeerPort = SuperSetPeerPort;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetPeerPort(self: QTcpSocket, port: u16) void {
        qtc.QTcpSocket_SuperSetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetPeerPort(self: QTcpSocket, callback: *const fn (QTcpSocket, u16) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetPeerPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SetPeerAddress(self: QTcpSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QTcpSocket_SetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetPeerAddress` instead
    ///
    pub const QBaseSetPeerAddress = SuperSetPeerAddress;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SuperSetPeerAddress(self: QTcpSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QTcpSocket_SuperSetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, address: QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetPeerAddress(self: QTcpSocket, callback: *const fn (QTcpSocket, QHostAddress) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetPeerAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetPeerName(self: QTcpSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTcpSocket_SetPeerName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `SuperSetPeerName` instead
    ///
    pub const QBaseSetPeerName = SuperSetPeerName;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetPeerName(self: QTcpSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTcpSocket_SuperSetPeerName(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetPeerName(self: QTcpSocket, callback: *const fn (QTcpSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetPeerName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: QTcpSocket, openMode: i32) void {
        qtc.QTcpSocket_SetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// ### DEPRECATED: Use `SuperSetOpenMode` instead
    ///
    pub const QBaseSetOpenMode = SuperSetOpenMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: QTcpSocket, openMode: i32) void {
        qtc.QTcpSocket_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: QTcpSocket, callback: *const fn (QTcpSocket, i32) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: QTcpSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QTcpSocket_SetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `SuperSetErrorString` instead
    ///
    pub const QBaseSetErrorString = SuperSetErrorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: QTcpSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QTcpSocket_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: QTcpSocket, callback: *const fn (QTcpSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QTcpSocket_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Sender(self: QTcpSocket) QObject {
        return .{ .ptr = qtc.QTcpSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTcpSocket `
    ///
    pub fn SuperSender(self: QTcpSocket) QObject {
        return .{ .ptr = qtc.QTcpSocket_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QTcpSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTcpSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn SenderSignalIndex(self: QTcpSocket) i32 {
        return qtc.QTcpSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTcpSocket `
    ///
    pub fn SuperSenderSignalIndex(self: QTcpSocket) i32 {
        return qtc.QTcpSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QTcpSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QTcpSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QTcpSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTcpSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTcpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTcpSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTcpSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QTcpSocket, callback: *const fn (QTcpSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTcpSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QTcpSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTcpSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTcpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTcpSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTcpSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket`
    ///
    /// ` callback: *const fn (self: QTcpSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QTcpSocket, callback: *const fn (QTcpSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QTcpSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpSocket `
    ///
    /// ` callback: *const fn (self: QTcpSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTcpSocket, callback: *const fn (QTcpSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#dtor.QTcpSocket)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTcpSocket `
    ///
    pub fn Delete(self: QTcpSocket) void {
        qtc.QTcpSocket_Delete(@ptrCast(self.ptr));
    }
};
