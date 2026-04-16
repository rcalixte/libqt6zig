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
const QNetworkDatagram = @import("libqt6").QNetworkDatagram;
const QNetworkInterface = @import("libqt6").QNetworkInterface;
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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html)
pub const QUdpSocket = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QUdpSocket,

    pub const _is_QUdpSocket = {};
    pub const _is_QAbstractSocket = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// New constructs a new QUdpSocket object.
    ///
    pub fn New() QUdpSocket {
        return .{ .ptr = qtc.QUdpSocket_new() };
    }

    /// New2 constructs a new QUdpSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QUdpSocket {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QUdpSocket_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn MetaObject(self: QUdpSocket) QMetaObject {
        return .{ .ptr = qtc.QUdpSocket_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QUdpSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QUdpSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperMetaObject(self: QUdpSocket) QMetaObject {
        return .{ .ptr = qtc.QUdpSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QUdpSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUdpSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QUdpSocket, callback: *const fn (QUdpSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QUdpSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QUdpSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QUdpSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QUdpSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUdpSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QUdpSocket, callback: *const fn (QUdpSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QUdpSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QUdpSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QUdpSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    pub fn Bind(self: QUdpSocket, addr: i32) bool {
        return qtc.QUdpSocket_Bind(@ptrCast(self.ptr), @bitCast(addr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` groupAddress: QHostAddress `
    ///
    pub fn JoinMulticastGroup(self: QUdpSocket, groupAddress: anytype) bool {
        comptime _ = @TypeOf(groupAddress)._is_QHostAddress;
        return qtc.QUdpSocket_JoinMulticastGroup(@ptrCast(self.ptr), @ptrCast(groupAddress.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` groupAddress: QHostAddress `
    ///
    /// ` iface: QNetworkInterface `
    ///
    pub fn JoinMulticastGroup2(self: QUdpSocket, groupAddress: anytype, iface: anytype) bool {
        comptime _ = @TypeOf(groupAddress)._is_QHostAddress;
        comptime _ = @TypeOf(iface)._is_QNetworkInterface;
        return qtc.QUdpSocket_JoinMulticastGroup2(@ptrCast(self.ptr), @ptrCast(groupAddress.ptr), @ptrCast(iface.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` groupAddress: QHostAddress `
    ///
    pub fn LeaveMulticastGroup(self: QUdpSocket, groupAddress: anytype) bool {
        comptime _ = @TypeOf(groupAddress)._is_QHostAddress;
        return qtc.QUdpSocket_LeaveMulticastGroup(@ptrCast(self.ptr), @ptrCast(groupAddress.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` groupAddress: QHostAddress `
    ///
    /// ` iface: QNetworkInterface `
    ///
    pub fn LeaveMulticastGroup2(self: QUdpSocket, groupAddress: anytype, iface: anytype) bool {
        comptime _ = @TypeOf(groupAddress)._is_QHostAddress;
        comptime _ = @TypeOf(iface)._is_QNetworkInterface;
        return qtc.QUdpSocket_LeaveMulticastGroup2(@ptrCast(self.ptr), @ptrCast(groupAddress.ptr), @ptrCast(iface.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#multicastInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn MulticastInterface(self: QUdpSocket) QNetworkInterface {
        return .{ .ptr = qtc.QUdpSocket_MulticastInterface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#setMulticastInterface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` iface: QNetworkInterface `
    ///
    pub fn SetMulticastInterface(self: QUdpSocket, iface: anytype) void {
        comptime _ = @TypeOf(iface)._is_QNetworkInterface;
        qtc.QUdpSocket_SetMulticastInterface(@ptrCast(self.ptr), @ptrCast(iface.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#hasPendingDatagrams)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn HasPendingDatagrams(self: QUdpSocket) bool {
        return qtc.QUdpSocket_HasPendingDatagrams(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#pendingDatagramSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn PendingDatagramSize(self: QUdpSocket) i64 {
        return qtc.QUdpSocket_PendingDatagramSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn ReceiveDatagram(self: QUdpSocket) QNetworkDatagram {
        return .{ .ptr = qtc.QUdpSocket_ReceiveDatagram(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadDatagram(self: QUdpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QUdpSocket_ReadDatagram(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` datagram: QNetworkDatagram `
    ///
    pub fn WriteDatagram(self: QUdpSocket, datagram: anytype) i64 {
        comptime _ = @TypeOf(datagram)._is_QNetworkDatagram;
        return qtc.QUdpSocket_WriteDatagram(@ptrCast(self.ptr), @ptrCast(datagram.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    /// ` host: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn WriteDatagram2(self: QUdpSocket, data: [:0]const u8, lenVal: i64, host: anytype, port: u16) i64 {
        const data_Cstring = data.ptr;
        comptime _ = @TypeOf(host)._is_QHostAddress;
        return qtc.QUdpSocket_WriteDatagram2(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal), @ptrCast(host.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` datagram: []u8 `
    ///
    /// ` host: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn WriteDatagram3(self: QUdpSocket, datagram: []u8, host: anytype, port: u16) i64 {
        const datagram_str = qtc.libqt_string{
            .len = datagram.len,
            .data = datagram.ptr,
        };
        comptime _ = @TypeOf(host)._is_QHostAddress;
        return qtc.QUdpSocket_WriteDatagram3(@ptrCast(self.ptr), datagram_str, @ptrCast(host.ptr), @bitCast(port));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind2(self: QUdpSocket, addr: i32, port: u16) bool {
        return qtc.QUdpSocket_Bind2(@ptrCast(self.ptr), @bitCast(addr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind3(self: QUdpSocket, addr: i32, port: u16, mode: i32) bool {
        return qtc.QUdpSocket_Bind3(@ptrCast(self.ptr), @bitCast(addr), @bitCast(port), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn ReceiveDatagram1(self: QUdpSocket, maxSize: i64) QNetworkDatagram {
        return .{ .ptr = qtc.QUdpSocket_ReceiveDatagram1(@ptrCast(self.ptr), @bitCast(maxSize)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` host: QHostAddress `
    ///
    pub fn ReadDatagram3(self: QUdpSocket, data: [:0]u8, maxlen: i64, host: anytype) i64 {
        const data_Cstring = data.ptr;
        comptime _ = @TypeOf(host)._is_QHostAddress;
        return qtc.QUdpSocket_ReadDatagram3(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen), @ptrCast(host.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` host: QHostAddress `
    ///
    /// ` port: *u16 `
    ///
    pub fn ReadDatagram4(self: QUdpSocket, data: [:0]u8, maxlen: i64, host: anytype, port: *u16) i64 {
        const data_Cstring = data.ptr;
        comptime _ = @TypeOf(host)._is_QHostAddress;
        return qtc.QUdpSocket_ReadDatagram4(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen), @ptrCast(host.ptr), @ptrCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn PauseMode(self: QUdpSocket) i32 {
        return qtc.QAbstractSocket_PauseMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn SetPauseMode(self: QUdpSocket, pauseMode: i32) void {
        qtc.QAbstractSocket_SetPauseMode(@ptrCast(self.ptr), @bitCast(pauseMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHost2(self: QUdpSocket, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsValid(self: QUdpSocket) bool {
        return qtc.QAbstractSocket_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn LocalPort(self: QUdpSocket) u16 {
        return qtc.QAbstractSocket_LocalPort(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn LocalAddress(self: QUdpSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn PeerPort(self: QUdpSocket) u16 {
        return qtc.QAbstractSocket_PeerPort(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn PeerAddress(self: QUdpSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerName(self: QUdpSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_PeerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.PeerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn ReadBufferSize(self: QUdpSocket) i64 {
        return qtc.QAbstractSocket_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Abort(self: QUdpSocket) void {
        qtc.QAbstractSocket_Abort(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketType `
    ///
    pub fn SocketType(self: QUdpSocket) i32 {
        return qtc.QAbstractSocket_SocketType(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketState `
    ///
    pub fn State(self: QUdpSocket) i32 {
        return qtc.QAbstractSocket_State(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn Error(self: QUdpSocket) i32 {
        return qtc.QAbstractSocket_Error(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Flush(self: QUdpSocket) bool {
        return qtc.QAbstractSocket_Flush(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn SetProxy(self: QUdpSocket, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QAbstractSocket_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Proxy(self: QUdpSocket) QNetworkProxy {
        return .{ .ptr = qtc.QAbstractSocket_Proxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolTag(self: QUdpSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_ProtocolTag(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.ProtocolTag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn SetProtocolTag(self: QUdpSocket, tag: []const u8) void {
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
    /// ` self: QUdpSocket `
    ///
    pub fn HostFound(self: QUdpSocket) void {
        qtc.QAbstractSocket_HostFound(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket) callconv(.c) void `
    ///
    pub fn OnHostFound(self: QUdpSocket, callback: *const fn (QUdpSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_HostFound(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Connected(self: QUdpSocket) void {
        qtc.QAbstractSocket_Connected(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket) callconv(.c) void `
    ///
    pub fn OnConnected(self: QUdpSocket, callback: *const fn (QUdpSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Disconnected(self: QUdpSocket) void {
        qtc.QAbstractSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: QUdpSocket, callback: *const fn (QUdpSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketState `
    ///
    pub fn StateChanged(self: QUdpSocket, param1: i32) void {
        qtc.QAbstractSocket_StateChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, param1: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: QUdpSocket, param1: i32) void {
        qtc.QAbstractSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, param1: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` proxy: QNetworkProxy `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: QUdpSocket, proxy: anytype, authenticator: anytype) void {
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
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, proxy: QNetworkProxy, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: QUdpSocket, callback: *const fn (QUdpSocket, QNetworkProxy, QAuthenticator) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind1(self: QUdpSocket, port: u16) bool {
        return qtc.QAbstractSocket_Bind1(@ptrCast(self.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind22(self: QUdpSocket, port: u16, mode: i32) bool {
        return qtc.QAbstractSocket_Bind22(@ptrCast(self.ptr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHost3(self: QUdpSocket, address: anytype, port: u16, mode: i32) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost3(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: QUdpSocket) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: QUdpSocket, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsTextModeEnabled(self: QUdpSocket) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsOpen(self: QUdpSocket) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsReadable(self: QUdpSocket) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsWritable(self: QUdpSocket) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn ReadChannelCount(self: QUdpSocket) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn WriteChannelCount(self: QUdpSocket) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn CurrentReadChannel(self: QUdpSocket) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: QUdpSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn CurrentWriteChannel(self: QUdpSocket) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: QUdpSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: QUdpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read2(self: QUdpSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qudpsocket.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: QUdpSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qudpsocket.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: QUdpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: QUdpSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qudpsocket.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn StartTransaction(self: QUdpSocket) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn CommitTransaction(self: QUdpSocket) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn RollbackTransaction(self: QUdpSocket) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsTransactionStarted(self: QUdpSocket) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: QUdpSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: QUdpSocket, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: QUdpSocket, data: []u8) i64 {
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
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: QUdpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek2(self: QUdpSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qudpsocket.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: QUdpSocket, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: QUdpSocket, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: QUdpSocket, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: QUdpSocket, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QUdpSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn ReadyRead(self: QUdpSocket) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: QUdpSocket, callback: *const fn (QUdpSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: QUdpSocket, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: QUdpSocket, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: QUdpSocket, callback: *const fn (QUdpSocket, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: QUdpSocket, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: QUdpSocket, callback: *const fn (QUdpSocket, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn AboutToClose(self: QUdpSocket) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: QUdpSocket, callback: *const fn (QUdpSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn ReadChannelFinished(self: QUdpSocket) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: QUdpSocket, callback: *const fn (QUdpSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: QUdpSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qudpsocket.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QUdpSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qudpsocket.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QUdpSocket, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsWidgetType(self: QUdpSocket) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsWindowType(self: QUdpSocket) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsQuickItemType(self: QUdpSocket) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn SignalsBlocked(self: QUdpSocket) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QUdpSocket, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Thread(self: QUdpSocket) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QUdpSocket, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QUdpSocket, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QUdpSocket, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QUdpSocket, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QUdpSocket, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QUdpSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qudpsocket.Children: Memory allocation failed");
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
    /// ` self: QUdpSocket `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QUdpSocket, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QUdpSocket, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QUdpSocket, obj: anytype) void {
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
    /// ` self: QUdpSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QUdpSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QUdpSocket `
    ///
    pub fn Disconnect3(self: QUdpSocket) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QUdpSocket, receiver: anytype) bool {
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
    /// ` self: QUdpSocket `
    ///
    pub fn DumpObjectTree(self: QUdpSocket) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn DumpObjectInfo(self: QUdpSocket) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QUdpSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QUdpSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QUdpSocket, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QUdpSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qudpsocket.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qudpsocket.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QUdpSocket `
    ///
    pub fn BindingStorage(self: QUdpSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn BindingStorage2(self: QUdpSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Destroyed(self: QUdpSocket) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QUdpSocket, callback: *const fn (QUdpSocket) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Parent(self: QUdpSocket) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QUdpSocket, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn DeleteLater(self: QUdpSocket) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QUdpSocket, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QUdpSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QUdpSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QUdpSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QUdpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QUdpSocket, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QUdpSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QUdpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QUdpSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUdpSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QUdpSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QUdpSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QUdpSocket, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QUdpSocket, callback: *const fn (QUdpSocket, QObject) callconv(.c) void) void {
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
    /// ` self: QUdpSocket `
    ///
    pub fn Resume(self: QUdpSocket) void {
        qtc.QUdpSocket_Resume(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperResume(self: QUdpSocket) void {
        qtc.QUdpSocket_SuperResume(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResume(self: QUdpSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QUdpSocket_OnResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn ConnectToHost(self: QUdpSocket, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QUdpSocket_ConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
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
    /// ` self: QUdpSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn SuperConnectToHost(self: QUdpSocket, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QUdpSocket_SuperConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, hostName: [*:0]const u8, port: u16, mode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void `
    ///
    pub fn OnConnectToHost(self: QUdpSocket, callback: *const fn (QUdpSocket, [*:0]const u8, u16, i32, i32) callconv(.c) void) void {
        qtc.QUdpSocket_OnConnectToHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn DisconnectFromHost(self: QUdpSocket) void {
        qtc.QUdpSocket_DisconnectFromHost(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperDisconnectFromHost(self: QUdpSocket) void {
        qtc.QUdpSocket_SuperDisconnectFromHost(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDisconnectFromHost(self: QUdpSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QUdpSocket_OnDisconnectFromHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn BytesAvailable(self: QUdpSocket) i64 {
        return qtc.QUdpSocket_BytesAvailable(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperBytesAvailable(self: QUdpSocket) i64 {
        return qtc.QUdpSocket_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: QUdpSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QUdpSocket_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn BytesToWrite(self: QUdpSocket) i64 {
        return qtc.QUdpSocket_BytesToWrite(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperBytesToWrite(self: QUdpSocket) i64 {
        return qtc.QUdpSocket_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: QUdpSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QUdpSocket_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SetReadBufferSize(self: QUdpSocket, size: i64) void {
        qtc.QUdpSocket_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
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
    /// ` self: QUdpSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperSetReadBufferSize(self: QUdpSocket, size: i64) void {
        qtc.QUdpSocket_SuperSetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, size: i64) callconv(.c) void `
    ///
    pub fn OnSetReadBufferSize(self: QUdpSocket, callback: *const fn (QUdpSocket, i64) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetReadBufferSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn SocketDescriptor(self: QUdpSocket) isize {
        return qtc.QUdpSocket_SocketDescriptor(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperSocketDescriptor(self: QUdpSocket) isize {
        return qtc.QUdpSocket_SuperSocketDescriptor(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) isize `
    ///
    pub fn OnSocketDescriptor(self: QUdpSocket, callback: *const fn () callconv(.c) isize) void {
        qtc.QUdpSocket_OnSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetSocketDescriptor(self: QUdpSocket, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QUdpSocket_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
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
    /// ` self: QUdpSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetSocketDescriptor(self: QUdpSocket, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QUdpSocket_SuperSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnSetSocketDescriptor(self: QUdpSocket, callback: *const fn (QUdpSocket, isize, i32, i32) callconv(.c) bool) void {
        qtc.QUdpSocket_OnSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetSocketOption(self: QUdpSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QUdpSocket_SetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetSocketOption(self: QUdpSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QUdpSocket_SuperSetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, option: qabstractsocket_enums.SocketOption, value: QVariant) callconv(.c) void `
    ///
    pub fn OnSetSocketOption(self: QUdpSocket, callback: *const fn (QUdpSocket, i32, QVariant) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SocketOption(self: QUdpSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QUdpSocket_SocketOption(@ptrCast(self.ptr), @bitCast(option)) };
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
    /// ` self: QUdpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SuperSocketOption(self: QUdpSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QUdpSocket_SuperSocketOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, option: qabstractsocket_enums.SocketOption) callconv(.c) QVariant `
    ///
    pub fn OnSocketOption(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) QVariant) void {
        qtc.QUdpSocket_OnSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Close(self: QUdpSocket) void {
        qtc.QUdpSocket_Close(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperClose(self: QUdpSocket) void {
        qtc.QUdpSocket_SuperClose(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: QUdpSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QUdpSocket_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn IsSequential(self: QUdpSocket) bool {
        return qtc.QUdpSocket_IsSequential(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperIsSequential(self: QUdpSocket) bool {
        return qtc.QUdpSocket_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: QUdpSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QUdpSocket_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForConnected(self: QUdpSocket, msecs: i32) bool {
        return qtc.QUdpSocket_WaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
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
    /// ` self: QUdpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForConnected(self: QUdpSocket, msecs: i32) bool {
        return qtc.QUdpSocket_SuperWaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForConnected(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) bool) void {
        qtc.QUdpSocket_OnWaitForConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: QUdpSocket, msecs: i32) bool {
        return qtc.QUdpSocket_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
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
    /// ` self: QUdpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: QUdpSocket, msecs: i32) bool {
        return qtc.QUdpSocket_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) bool) void {
        qtc.QUdpSocket_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: QUdpSocket, msecs: i32) bool {
        return qtc.QUdpSocket_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
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
    /// ` self: QUdpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: QUdpSocket, msecs: i32) bool {
        return qtc.QUdpSocket_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) bool) void {
        qtc.QUdpSocket_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForDisconnected(self: QUdpSocket, msecs: i32) bool {
        return qtc.QUdpSocket_WaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
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
    /// ` self: QUdpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForDisconnected(self: QUdpSocket, msecs: i32) bool {
        return qtc.QUdpSocket_SuperWaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForDisconnected(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) bool) void {
        qtc.QUdpSocket_OnWaitForDisconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: QUdpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QUdpSocket_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
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
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: QUdpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QUdpSocket_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: QUdpSocket, callback: *const fn (QUdpSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QUdpSocket_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: QUdpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QUdpSocket_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
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
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: QUdpSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QUdpSocket_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: QUdpSocket, callback: *const fn (QUdpSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QUdpSocket_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: QUdpSocket, maxSize: i64) i64 {
        return qtc.QUdpSocket_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
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
    /// ` self: QUdpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: QUdpSocket, maxSize: i64) i64 {
        return qtc.QUdpSocket_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: QUdpSocket, callback: *const fn (QUdpSocket, i64) callconv(.c) i64) void {
        qtc.QUdpSocket_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: QUdpSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QUdpSocket_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
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
    /// ` self: QUdpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: QUdpSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QUdpSocket_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: QUdpSocket, callback: *const fn (QUdpSocket, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QUdpSocket_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: QUdpSocket, mode: i32) bool {
        return qtc.QUdpSocket_Open(@ptrCast(self.ptr), @bitCast(mode));
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
    /// ` self: QUdpSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: QUdpSocket, mode: i32) bool {
        return qtc.QUdpSocket_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) bool) void {
        qtc.QUdpSocket_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Pos(self: QUdpSocket) i64 {
        return qtc.QUdpSocket_Pos(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperPos(self: QUdpSocket) i64 {
        return qtc.QUdpSocket_SuperPos(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: QUdpSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QUdpSocket_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Size(self: QUdpSocket) i64 {
        return qtc.QUdpSocket_Size(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperSize(self: QUdpSocket) i64 {
        return qtc.QUdpSocket_SuperSize(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: QUdpSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QUdpSocket_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: QUdpSocket, pos: i64) bool {
        return qtc.QUdpSocket_Seek(@ptrCast(self.ptr), @bitCast(pos));
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
    /// ` self: QUdpSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn SuperSeek(self: QUdpSocket, pos: i64) bool {
        return qtc.QUdpSocket_SuperSeek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, pos: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: QUdpSocket, callback: *const fn (QUdpSocket, i64) callconv(.c) bool) void {
        qtc.QUdpSocket_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn AtEnd(self: QUdpSocket) bool {
        return qtc.QUdpSocket_AtEnd(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperAtEnd(self: QUdpSocket) bool {
        return qtc.QUdpSocket_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: QUdpSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QUdpSocket_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Reset(self: QUdpSocket) bool {
        return qtc.QUdpSocket_Reset(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperReset(self: QUdpSocket) bool {
        return qtc.QUdpSocket_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: QUdpSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QUdpSocket_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn CanReadLine(self: QUdpSocket) bool {
        return qtc.QUdpSocket_CanReadLine(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperCanReadLine(self: QUdpSocket) bool {
        return qtc.QUdpSocket_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: QUdpSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QUdpSocket_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QUdpSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUdpSocket_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QUdpSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUdpSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QUdpSocket, callback: *const fn (QUdpSocket, QEvent) callconv(.c) bool) void {
        qtc.QUdpSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QUdpSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUdpSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QUdpSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QUdpSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QUdpSocket, callback: *const fn (QUdpSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QUdpSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QUdpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QUdpSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QUdpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QUdpSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QUdpSocket, callback: *const fn (QUdpSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QUdpSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QUdpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QUdpSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QUdpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QUdpSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QUdpSocket, callback: *const fn (QUdpSocket, QChildEvent) callconv(.c) void) void {
        qtc.QUdpSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QUdpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QUdpSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QUdpSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QUdpSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QUdpSocket, callback: *const fn (QUdpSocket, QEvent) callconv(.c) void) void {
        qtc.QUdpSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QUdpSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUdpSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QUdpSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUdpSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QUdpSocket, callback: *const fn (QUdpSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QUdpSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QUdpSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUdpSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QUdpSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QUdpSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QUdpSocket, callback: *const fn (QUdpSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QUdpSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SetSocketState(self: QUdpSocket, state: i32) void {
        qtc.QUdpSocket_SetSocketState(@ptrCast(self.ptr), @bitCast(state));
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
    /// ` self: QUdpSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SuperSetSocketState(self: QUdpSocket, state: i32) void {
        qtc.QUdpSocket_SuperSetSocketState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnSetSocketState(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetSocketState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SetSocketError(self: QUdpSocket, socketError: i32) void {
        qtc.QUdpSocket_SetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
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
    /// ` self: QUdpSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SuperSetSocketError(self: QUdpSocket, socketError: i32) void {
        qtc.QUdpSocket_SuperSetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnSetSocketError(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetSocketError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetLocalPort(self: QUdpSocket, port: u16) void {
        qtc.QUdpSocket_SetLocalPort(@ptrCast(self.ptr), @bitCast(port));
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
    /// ` self: QUdpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetLocalPort(self: QUdpSocket, port: u16) void {
        qtc.QUdpSocket_SuperSetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetLocalPort(self: QUdpSocket, callback: *const fn (QUdpSocket, u16) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetLocalPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SetLocalAddress(self: QUdpSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QUdpSocket_SetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SuperSetLocalAddress(self: QUdpSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QUdpSocket_SuperSetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, address: QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetLocalAddress(self: QUdpSocket, callback: *const fn (QUdpSocket, QHostAddress) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetLocalAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetPeerPort(self: QUdpSocket, port: u16) void {
        qtc.QUdpSocket_SetPeerPort(@ptrCast(self.ptr), @bitCast(port));
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
    /// ` self: QUdpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetPeerPort(self: QUdpSocket, port: u16) void {
        qtc.QUdpSocket_SuperSetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetPeerPort(self: QUdpSocket, callback: *const fn (QUdpSocket, u16) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetPeerPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SetPeerAddress(self: QUdpSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QUdpSocket_SetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SuperSetPeerAddress(self: QUdpSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QUdpSocket_SuperSetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, address: QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetPeerAddress(self: QUdpSocket, callback: *const fn (QUdpSocket, QHostAddress) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetPeerAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetPeerName(self: QUdpSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QUdpSocket_SetPeerName(@ptrCast(self.ptr), name_str);
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
    /// ` self: QUdpSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetPeerName(self: QUdpSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QUdpSocket_SuperSetPeerName(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetPeerName(self: QUdpSocket, callback: *const fn (QUdpSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetPeerName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: QUdpSocket, openMode: i32) void {
        qtc.QUdpSocket_SetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
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
    /// ` self: QUdpSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: QUdpSocket, openMode: i32) void {
        qtc.QUdpSocket_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: QUdpSocket, callback: *const fn (QUdpSocket, i32) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: QUdpSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QUdpSocket_SetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QUdpSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: QUdpSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QUdpSocket_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: QUdpSocket, callback: *const fn (QUdpSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QUdpSocket_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Sender(self: QUdpSocket) QObject {
        return .{ .ptr = qtc.QUdpSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperSender(self: QUdpSocket) QObject {
        return .{ .ptr = qtc.QUdpSocket_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QUdpSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QUdpSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn SenderSignalIndex(self: QUdpSocket) i32 {
        return qtc.QUdpSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QUdpSocket `
    ///
    pub fn SuperSenderSignalIndex(self: QUdpSocket) i32 {
        return qtc.QUdpSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QUdpSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QUdpSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QUdpSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUdpSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QUdpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QUdpSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QUdpSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QUdpSocket, callback: *const fn (QUdpSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QUdpSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QUdpSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUdpSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QUdpSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QUdpSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QUdpSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket`
    ///
    /// ` callback: *const fn (self: QUdpSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QUdpSocket, callback: *const fn (QUdpSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QUdpSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QUdpSocket `
    ///
    /// ` callback: *const fn (self: QUdpSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QUdpSocket, callback: *const fn (QUdpSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qudpsocket.html#dtor.QUdpSocket)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QUdpSocket `
    ///
    pub fn Delete(self: QUdpSocket) void {
        qtc.QUdpSocket_Delete(@ptrCast(self.ptr));
    }
};
