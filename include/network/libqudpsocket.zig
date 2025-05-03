const C = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = @import("libqhostaddress.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qudpsocket.html
pub const qudpsocket = struct {
    /// New constructs a new QUdpSocket object.
    ///
    ///
    pub fn New() ?*C.QUdpSocket {
        return C.QUdpSocket_new();
    }

    /// New2 constructs a new QUdpSocket object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QUdpSocket {
        return C.QUdpSocket_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QUdpSocket_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QUdpSocket, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QUdpSocket_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QUdpSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QUdpSocket_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QUdpSocket_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QUdpSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QUdpSocket_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QUdpSocket_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#bind)
    ///
    /// ``` self: ?*C.QUdpSocket, addr: qhostaddress_enums.SpecialAddress ```
    pub fn Bind(self: ?*anyopaque, addr: i64) bool {
        return C.QUdpSocket_Bind(@ptrCast(self), @intCast(addr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
    ///
    /// ``` self: ?*C.QUdpSocket, groupAddress: ?*C.QHostAddress ```
    pub fn JoinMulticastGroup(self: ?*anyopaque, groupAddress: ?*anyopaque) bool {
        return C.QUdpSocket_JoinMulticastGroup(@ptrCast(self), @ptrCast(groupAddress));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
    ///
    /// ``` self: ?*C.QUdpSocket, groupAddress: ?*C.QHostAddress, iface: ?*C.QNetworkInterface ```
    pub fn JoinMulticastGroup2(self: ?*anyopaque, groupAddress: ?*anyopaque, iface: ?*anyopaque) bool {
        return C.QUdpSocket_JoinMulticastGroup2(@ptrCast(self), @ptrCast(groupAddress), @ptrCast(iface));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
    ///
    /// ``` self: ?*C.QUdpSocket, groupAddress: ?*C.QHostAddress ```
    pub fn LeaveMulticastGroup(self: ?*anyopaque, groupAddress: ?*anyopaque) bool {
        return C.QUdpSocket_LeaveMulticastGroup(@ptrCast(self), @ptrCast(groupAddress));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
    ///
    /// ``` self: ?*C.QUdpSocket, groupAddress: ?*C.QHostAddress, iface: ?*C.QNetworkInterface ```
    pub fn LeaveMulticastGroup2(self: ?*anyopaque, groupAddress: ?*anyopaque, iface: ?*anyopaque) bool {
        return C.QUdpSocket_LeaveMulticastGroup2(@ptrCast(self), @ptrCast(groupAddress), @ptrCast(iface));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#multicastInterface)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn MulticastInterface(self: ?*anyopaque) ?*C.QNetworkInterface {
        return C.QUdpSocket_MulticastInterface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#setMulticastInterface)
    ///
    /// ``` self: ?*C.QUdpSocket, iface: ?*C.QNetworkInterface ```
    pub fn SetMulticastInterface(self: ?*anyopaque, iface: ?*anyopaque) void {
        C.QUdpSocket_SetMulticastInterface(@ptrCast(self), @ptrCast(iface));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#hasPendingDatagrams)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn HasPendingDatagrams(self: ?*anyopaque) bool {
        return C.QUdpSocket_HasPendingDatagrams(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#pendingDatagramSize)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn PendingDatagramSize(self: ?*anyopaque) i64 {
        return C.QUdpSocket_PendingDatagramSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn ReceiveDatagram(self: ?*anyopaque) ?*C.QNetworkDatagram {
        return C.QUdpSocket_ReceiveDatagram(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadDatagram(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_ReadDatagram(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
    ///
    /// ``` self: ?*C.QUdpSocket, datagram: ?*C.QNetworkDatagram ```
    pub fn WriteDatagram(self: ?*anyopaque, datagram: ?*anyopaque) i64 {
        return C.QUdpSocket_WriteDatagram(@ptrCast(self), @ptrCast(datagram));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, lenVal: i64, host: ?*C.QHostAddress, port: u16 ```
    pub fn WriteDatagram2(self: ?*anyopaque, data: []const u8, lenVal: i64, host: ?*anyopaque, port: u16) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_WriteDatagram2(@ptrCast(self), data_Cstring, @intCast(lenVal), @ptrCast(host), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
    ///
    /// ``` self: ?*C.QUdpSocket, datagram: []u8, host: ?*C.QHostAddress, port: u16 ```
    pub fn WriteDatagram3(self: ?*anyopaque, datagram: []u8, host: ?*anyopaque, port: u16) i64 {
        const datagram_str = C.struct_libqt_string{
            .len = datagram.len,
            .data = @constCast(datagram.ptr),
        };
        return C.QUdpSocket_WriteDatagram3(@ptrCast(self), datagram_str, @ptrCast(host), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QUdpSocket_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QUdpSocket_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#bind)
    ///
    /// ``` self: ?*C.QUdpSocket, addr: qhostaddress_enums.SpecialAddress, port: u16 ```
    pub fn Bind2(self: ?*anyopaque, addr: i64, port: u16) bool {
        return C.QUdpSocket_Bind2(@ptrCast(self), @intCast(addr), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#bind)
    ///
    /// ``` self: ?*C.QUdpSocket, addr: qhostaddress_enums.SpecialAddress, port: u16, mode: i32 ```
    pub fn Bind3(self: ?*anyopaque, addr: i64, port: u16, mode: i64) bool {
        return C.QUdpSocket_Bind3(@ptrCast(self), @intCast(addr), @intCast(port), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
    ///
    /// ``` self: ?*C.QUdpSocket, maxSize: i64 ```
    pub fn ReceiveDatagram1(self: ?*anyopaque, maxSize: i64) ?*C.QNetworkDatagram {
        return C.QUdpSocket_ReceiveDatagram1(@ptrCast(self), @intCast(maxSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64, host: ?*C.QHostAddress ```
    pub fn ReadDatagram3(self: ?*anyopaque, data: []const u8, maxlen: i64, host: ?*anyopaque) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_ReadDatagram3(@ptrCast(self), data_Cstring, @intCast(maxlen), @ptrCast(host));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64, host: ?*C.QHostAddress, port: ?*u16 ```
    pub fn ReadDatagram4(self: ?*anyopaque, data: []const u8, maxlen: i64, host: ?*anyopaque, port: ?*anyopaque) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_ReadDatagram4(@ptrCast(self), data_Cstring, @intCast(maxlen), @ptrCast(host), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn PauseMode(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_PauseMode(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ``` self: ?*C.QUdpSocket, pauseMode: i32 ```
    pub fn SetPauseMode(self: ?*anyopaque, pauseMode: i64) void {
        C.QAbstractSocket_SetPauseMode(@ptrCast(self), @intCast(pauseMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ``` self: ?*C.QUdpSocket, address: ?*C.QHostAddress, port: u16 ```
    pub fn ConnectToHost2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        C.QAbstractSocket_ConnectToHost2(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QAbstractSocket_IsValid(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn LocalPort(self: ?*anyopaque) u16 {
        return C.QAbstractSocket_LocalPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn LocalAddress(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QAbstractSocket_LocalAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn PeerPort(self: ?*anyopaque) u16 {
        return C.QAbstractSocket_PeerPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn PeerAddress(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QAbstractSocket_PeerAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ``` self: ?*C.QUdpSocket, allocator: std.mem.Allocator ```
    pub fn PeerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractSocket_PeerName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn ReadBufferSize(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_ReadBufferSize(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Abort(self: ?*anyopaque) void {
        C.QAbstractSocket_Abort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn SocketType(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_SocketType(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_State(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Error(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_Error(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Flush(self: ?*anyopaque) bool {
        return C.QAbstractSocket_Flush(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ``` self: ?*C.QUdpSocket, networkProxy: ?*C.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        C.QAbstractSocket_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Proxy(self: ?*anyopaque) ?*C.QNetworkProxy {
        return C.QAbstractSocket_Proxy(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ``` self: ?*C.QUdpSocket, allocator: std.mem.Allocator ```
    pub fn ProtocolTag(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractSocket_ProtocolTag(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
    ///
    /// ``` self: ?*C.QUdpSocket, tag: []const u8 ```
    pub fn SetProtocolTag(self: ?*anyopaque, tag: []const u8) void {
        const tag_str = C.struct_libqt_string{
            .len = tag.len,
            .data = @constCast(tag.ptr),
        };
        C.QAbstractSocket_SetProtocolTag(@ptrCast(self), tag_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn HostFound(self: ?*anyopaque) void {
        C.QAbstractSocket_HostFound(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket) callconv(.c) void ```
    pub fn OnHostFound(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_Connect_HostFound(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Connected(self: ?*anyopaque) void {
        C.QAbstractSocket_Connected(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket) callconv(.c) void ```
    pub fn OnConnected(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_Connect_Connected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Disconnected(self: ?*anyopaque) void {
        C.QAbstractSocket_Disconnected(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket) callconv(.c) void ```
    pub fn OnDisconnected(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_Connect_Disconnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ``` self: ?*C.QUdpSocket, param1: qabstractsocket_enums.SocketState ```
    pub fn StateChanged(self: ?*anyopaque, param1: i64) void {
        C.QAbstractSocket_StateChanged(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, qabstractsocket_enums.SocketState) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractSocket_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ``` self: ?*C.QUdpSocket, param1: qabstractsocket_enums.SocketError ```
    pub fn ErrorOccurred(self: ?*anyopaque, param1: i64) void {
        C.QAbstractSocket_ErrorOccurred(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ``` self: ?*C.QUdpSocket, proxy: ?*C.QNetworkProxy, authenticator: ?*C.QAuthenticator ```
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        C.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QNetworkProxy, ?*C.QAuthenticator) callconv(.c) void ```
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ``` self: ?*C.QUdpSocket, port: u16 ```
    pub fn Bind1(self: ?*anyopaque, port: u16) bool {
        return C.QAbstractSocket_Bind1(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ``` self: ?*C.QUdpSocket, port: u16, mode: i32 ```
    pub fn Bind22(self: ?*anyopaque, port: u16, mode: i64) bool {
        return C.QAbstractSocket_Bind22(@ptrCast(self), @intCast(port), @intCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ``` self: ?*C.QUdpSocket, address: ?*C.QHostAddress, port: u16, mode: i32 ```
    pub fn ConnectToHost3(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) void {
        C.QAbstractSocket_ConnectToHost3(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn OpenMode(self: ?*anyopaque) i64 {
        return C.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ``` self: ?*C.QUdpSocket, enabled: bool ```
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return C.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return C.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return C.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return C.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return C.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return C.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return C.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ``` self: ?*C.QUdpSocket, channel: i32 ```
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return C.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ``` self: ?*C.QUdpSocket, channel: i32 ```
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64 ```
    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: ?*C.QUdpSocket, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadWithMaxlen(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_ReadWithMaxlen(@ptrCast(self), @intCast(maxlen));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ``` self: ?*C.QUdpSocket, allocator: std.mem.Allocator ```
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_ReadAll(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: ?*C.QUdpSocket, allocator: std.mem.Allocator ```
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_ReadLine2(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        C.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn CommitTransaction(self: ?*anyopaque) void {
        C.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        C.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return C.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, lenVal: i64 ```
    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8 ```
    pub fn WriteWithData(self: ?*anyopaque, data: []const u8) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_WriteWithData(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []u8 ```
    pub fn Write2(self: ?*anyopaque, data: []u8) i64 {
        const data_str = C.struct_libqt_string{
            .len = data.len,
            .data = @constCast(data.ptr),
        };
        return C.QIODevice_Write2(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64 ```
    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: ?*C.QUdpSocket, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn PeekWithMaxlen(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_PeekWithMaxlen(@ptrCast(self), @intCast(maxlen));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ``` self: ?*C.QUdpSocket, maxSize: i64 ```
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ``` self: ?*C.QUdpSocket, c: i8 ```
    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        C.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ``` self: ?*C.QUdpSocket, c: i8 ```
    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return C.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ``` self: ?*C.QUdpSocket, c: []const u8 ```
    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        const c_Cstring = @constCast(c.ptr);
        return C.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ``` self: ?*C.QUdpSocket, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QIODevice_ErrorString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn ReadyRead(self: ?*anyopaque) void {
        C.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice) callconv(.c) void ```
    pub fn OnReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QIODevice_Connect_ReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: ?*C.QUdpSocket, channel: i32 ```
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_ChannelReadyRead(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice, i32) callconv(.c) void ```
    pub fn OnChannelReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: ?*C.QUdpSocket, bytes: i64 ```
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        C.QIODevice_BytesWritten(@ptrCast(self), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice, i64) callconv(.c) void ```
    pub fn OnBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QIODevice_Connect_BytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: ?*C.QUdpSocket, channel: i32, bytes: i64 ```
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        C.QIODevice_ChannelBytesWritten(@ptrCast(self), @intCast(channel), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice, i32, i64) callconv(.c) void ```
    pub fn OnChannelBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        C.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn AboutToClose(self: ?*anyopaque) void {
        C.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice) callconv(.c) void ```
    pub fn OnAboutToClose(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QIODevice_Connect_AboutToClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        C.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ``` self: ?*C.QIODevice, slot: fn (?*C.QIODevice) callconv(.c) void ```
    pub fn OnReadChannelFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: ?*C.QUdpSocket, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: C.struct_libqt_string = C.QIODevice_ReadLine1(@ptrCast(self), @intCast(maxlen));
        defer C.libqt_string_free(@constCast(&_bytearray));
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("Memory allocation failed");
        for (0.._bytearray.len) |_i| {
            _ret[_i] = _bytearray.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QUdpSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QUdpSocket, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QUdpSocket, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QUdpSocket, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QUdpSocket, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QUdpSocket, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QUdpSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QUdpSocket, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QUdpSocket, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QUdpSocket, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QUdpSocket, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QUdpSocket ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QUdpSocket, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QUdpSocket, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QUdpSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QUdpSocket ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QUdpSocket ```
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
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QUdpSocket, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QUdpSocket, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QUdpSocket, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QUdpSocket, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Resume(self: ?*anyopaque) void {
        C.QUdpSocket_Resume(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseResume(self: ?*anyopaque) void {
        C.QUdpSocket_QBaseResume(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) void ```
    pub fn OnResume(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QUdpSocket_OnResume(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, hostName: []const u8, port: u16, mode: i32, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i64, protocol: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QUdpSocket_ConnectToHost(@ptrCast(self), hostName_str, @intCast(port), @intCast(mode), @intCast(protocol));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, hostName: []const u8, port: u16, mode: i32, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn QBaseConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i64, protocol: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QUdpSocket_QBaseConnectToHost(@ptrCast(self), hostName_str, @intCast(port), @intCast(mode), @intCast(protocol));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, []const u8, u16, i32, qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void ```
    pub fn OnConnectToHost(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, u16, i64, i64) callconv(.c) void) void {
        C.QUdpSocket_OnConnectToHost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn DisconnectFromHost(self: ?*anyopaque) void {
        C.QUdpSocket_DisconnectFromHost(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseDisconnectFromHost(self: ?*anyopaque) void {
        C.QUdpSocket_QBaseDisconnectFromHost(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) void ```
    pub fn OnDisconnectFromHost(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QUdpSocket_OnDisconnectFromHost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return C.QUdpSocket_BytesAvailable(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return C.QUdpSocket_QBaseBytesAvailable(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesAvailable(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QUdpSocket_OnBytesAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return C.QUdpSocket_BytesToWrite(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return C.QUdpSocket_QBaseBytesToWrite(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesToWrite(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QUdpSocket_OnBytesToWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, size: i64 ```
    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        C.QUdpSocket_SetReadBufferSize(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, size: i64 ```
    pub fn QBaseSetReadBufferSize(self: ?*anyopaque, size: i64) void {
        C.QUdpSocket_QBaseSetReadBufferSize(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, i64) callconv(.c) void ```
    pub fn OnSetReadBufferSize(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QUdpSocket_OnSetReadBufferSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return C.QUdpSocket_SocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseSocketDescriptor(self: ?*anyopaque) isize {
        return C.QUdpSocket_QBaseSocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) isize ```
    pub fn OnSocketDescriptor(self: ?*anyopaque, slot: fn () callconv(.c) isize) void {
        C.QUdpSocket_OnSocketDescriptor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: i32 ```
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i64, openMode: i64) bool {
        return C.QUdpSocket_SetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor), @intCast(state), @intCast(openMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: i32 ```
    pub fn QBaseSetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i64, openMode: i64) bool {
        return C.QUdpSocket_QBaseSetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor), @intCast(state), @intCast(openMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, isize, qabstractsocket_enums.SocketState, i32) callconv(.c) bool ```
    pub fn OnSetSocketDescriptor(self: ?*anyopaque, slot: fn (?*anyopaque, isize, i64, i64) callconv(.c) bool) void {
        C.QUdpSocket_OnSetSocketDescriptor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, option: qabstractsocket_enums.SocketOption, value: ?*C.QVariant ```
    pub fn SetSocketOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        C.QUdpSocket_SetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, option: qabstractsocket_enums.SocketOption, value: ?*C.QVariant ```
    pub fn QBaseSetSocketOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        C.QUdpSocket_QBaseSetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, qabstractsocket_enums.SocketOption, ?*C.QVariant) callconv(.c) void ```
    pub fn OnSetSocketOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        C.QUdpSocket_OnSetSocketOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, option: qabstractsocket_enums.SocketOption ```
    pub fn SocketOption(self: ?*anyopaque, option: i64) ?*C.QVariant {
        return C.QUdpSocket_SocketOption(@ptrCast(self), @intCast(option));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, option: qabstractsocket_enums.SocketOption ```
    pub fn QBaseSocketOption(self: ?*anyopaque, option: i64) ?*C.QVariant {
        return C.QUdpSocket_QBaseSocketOption(@ptrCast(self), @intCast(option));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, qabstractsocket_enums.SocketOption) callconv(.c) ?*C.QVariant ```
    pub fn OnSocketOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QUdpSocket_OnSocketOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Close(self: ?*anyopaque) void {
        C.QUdpSocket_Close(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseClose(self: ?*anyopaque) void {
        C.QUdpSocket_QBaseClose(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) void ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QUdpSocket_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn IsSequential(self: ?*anyopaque) bool {
        return C.QUdpSocket_IsSequential(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return C.QUdpSocket_QBaseIsSequential(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) bool ```
    pub fn OnIsSequential(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QUdpSocket_OnIsSequential(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, msecs: i32 ```
    pub fn WaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QUdpSocket_WaitForConnected(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, msecs: i32 ```
    pub fn QBaseWaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QUdpSocket_QBaseWaitForConnected(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForConnected(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QUdpSocket_OnWaitForConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, msecs: i32 ```
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return C.QUdpSocket_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, msecs: i32 ```
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return C.QUdpSocket_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QUdpSocket_OnWaitForReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, msecs: i32 ```
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return C.QUdpSocket_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, msecs: i32 ```
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return C.QUdpSocket_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QUdpSocket_OnWaitForBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, msecs: i32 ```
    pub fn WaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QUdpSocket_WaitForDisconnected(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, msecs: i32 ```
    pub fn QBaseWaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QUdpSocket_QBaseWaitForDisconnected(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForDisconnected(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QUdpSocket_OnWaitForDisconnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, []const u8, i64) callconv(.c) i64 ```
    pub fn OnReadData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QUdpSocket_OnReadData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, []const u8, i64) callconv(.c) i64 ```
    pub fn OnReadLineData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QUdpSocket_OnReadLineData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, maxSize: i64 ```
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QUdpSocket_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, maxSize: i64 ```
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QUdpSocket_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, i64) callconv(.c) i64 ```
    pub fn OnSkipData(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i64) void {
        C.QUdpSocket_OnSkipData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, lenVal: i64 ```
    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, data: []const u8, lenVal: i64 ```
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QUdpSocket_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, []const u8, i64) callconv(.c) i64 ```
    pub fn OnWriteData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QUdpSocket_OnWriteData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, mode: i32 ```
    pub fn Open(self: ?*anyopaque, mode: i64) bool {
        return C.QUdpSocket_Open(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, mode: i32 ```
    pub fn QBaseOpen(self: ?*anyopaque, mode: i64) bool {
        return C.QUdpSocket_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, i32) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QUdpSocket_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return C.QUdpSocket_Pos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return C.QUdpSocket_QBasePos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnPos(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QUdpSocket_OnPos(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Size(self: ?*anyopaque) i64 {
        return C.QUdpSocket_Size(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return C.QUdpSocket_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QUdpSocket_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, pos: i64 ```
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return C.QUdpSocket_Seek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, pos: i64 ```
    pub fn QBaseSeek(self: ?*anyopaque, pos: i64) bool {
        return C.QUdpSocket_QBaseSeek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, i64) callconv(.c) bool ```
    pub fn OnSeek(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QUdpSocket_OnSeek(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return C.QUdpSocket_AtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return C.QUdpSocket_QBaseAtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) bool ```
    pub fn OnAtEnd(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QUdpSocket_OnAtEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Reset(self: ?*anyopaque) bool {
        return C.QUdpSocket_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return C.QUdpSocket_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) bool ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QUdpSocket_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return C.QUdpSocket_CanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return C.QUdpSocket_QBaseCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) bool ```
    pub fn OnCanReadLine(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QUdpSocket_OnCanReadLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QUdpSocket_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QUdpSocket_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QUdpSocket_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QUdpSocket_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QUdpSocket_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QUdpSocket_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUdpSocket_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUdpSocket_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUdpSocket_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUdpSocket_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUdpSocket_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUdpSocket_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUdpSocket_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QUdpSocket_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUdpSocket_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QUdpSocket_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QUdpSocket_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUdpSocket_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QUdpSocket_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QUdpSocket_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUdpSocket_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, state: qabstractsocket_enums.SocketState ```
    pub fn SetSocketState(self: ?*anyopaque, state: i64) void {
        C.QUdpSocket_SetSocketState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, state: qabstractsocket_enums.SocketState ```
    pub fn QBaseSetSocketState(self: ?*anyopaque, state: i64) void {
        C.QUdpSocket_QBaseSetSocketState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, qabstractsocket_enums.SocketState) callconv(.c) void ```
    pub fn OnSetSocketState(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QUdpSocket_OnSetSocketState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, socketError: qabstractsocket_enums.SocketError ```
    pub fn SetSocketError(self: ?*anyopaque, socketError: i64) void {
        C.QUdpSocket_SetSocketError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, socketError: qabstractsocket_enums.SocketError ```
    pub fn QBaseSetSocketError(self: ?*anyopaque, socketError: i64) void {
        C.QUdpSocket_QBaseSetSocketError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnSetSocketError(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QUdpSocket_OnSetSocketError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, port: u16 ```
    pub fn SetLocalPort(self: ?*anyopaque, port: u16) void {
        C.QUdpSocket_SetLocalPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, port: u16 ```
    pub fn QBaseSetLocalPort(self: ?*anyopaque, port: u16) void {
        C.QUdpSocket_QBaseSetLocalPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, u16) callconv(.c) void ```
    pub fn OnSetLocalPort(self: ?*anyopaque, slot: fn (?*anyopaque, u16) callconv(.c) void) void {
        C.QUdpSocket_OnSetLocalPort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, address: ?*C.QHostAddress ```
    pub fn SetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QUdpSocket_SetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, address: ?*C.QHostAddress ```
    pub fn QBaseSetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QUdpSocket_QBaseSetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QHostAddress) callconv(.c) void ```
    pub fn OnSetLocalAddress(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUdpSocket_OnSetLocalAddress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, port: u16 ```
    pub fn SetPeerPort(self: ?*anyopaque, port: u16) void {
        C.QUdpSocket_SetPeerPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, port: u16 ```
    pub fn QBaseSetPeerPort(self: ?*anyopaque, port: u16) void {
        C.QUdpSocket_QBaseSetPeerPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, u16) callconv(.c) void ```
    pub fn OnSetPeerPort(self: ?*anyopaque, slot: fn (?*anyopaque, u16) callconv(.c) void) void {
        C.QUdpSocket_OnSetPeerPort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, address: ?*C.QHostAddress ```
    pub fn SetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QUdpSocket_SetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, address: ?*C.QHostAddress ```
    pub fn QBaseSetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QUdpSocket_QBaseSetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QHostAddress) callconv(.c) void ```
    pub fn OnSetPeerAddress(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QUdpSocket_OnSetPeerAddress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, name: []const u8 ```
    pub fn SetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QUdpSocket_SetPeerName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, name: []const u8 ```
    pub fn QBaseSetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QUdpSocket_QBaseSetPeerName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, []const u8) callconv(.c) void ```
    pub fn OnSetPeerName(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QUdpSocket_OnSetPeerName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, openMode: i32 ```
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i64) void {
        C.QUdpSocket_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, openMode: i32 ```
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i64) void {
        C.QUdpSocket_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, i32) callconv(.c) void ```
    pub fn OnSetOpenMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QUdpSocket_OnSetOpenMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, errorString: []const u8 ```
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QUdpSocket_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, errorString: []const u8 ```
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QUdpSocket_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, []const u8) callconv(.c) void ```
    pub fn OnSetErrorString(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QUdpSocket_OnSetErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QUdpSocket_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QUdpSocket_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QUdpSocket_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QUdpSocket_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QUdpSocket_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QUdpSocket_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QUdpSocket_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QUdpSocket_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QUdpSocket_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QUdpSocket_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QUdpSocket_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QUdpSocket, slot: fn (?*C.QUdpSocket, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QUdpSocket_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QUdpSocket ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QUdpSocket_Delete(@ptrCast(self));
    }
};
