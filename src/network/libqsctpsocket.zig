const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = @import("libqhostaddress.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html)
pub const qsctpsocket = struct {
    /// New constructs a new QSctpSocket object.
    ///
    pub fn New() QtC.QSctpSocket {
        return qtc.QSctpSocket_new();
    }

    /// New2 constructs a new QSctpSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QSctpSocket {
        return qtc.QSctpSocket_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSctpSocket_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QSctpSocket_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSctpSocket_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSctpSocket_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSctpSocket_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSctpSocket_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSctpSocket_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSctpSocket_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSctpSocket_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Close(self: ?*anyopaque) void {
        qtc.QSctpSocket_Close(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSctpSocket_OnClose(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperClose(self: ?*anyopaque) void {
        qtc.QSctpSocket_SuperClose(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#disconnectFromHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn DisconnectFromHost(self: ?*anyopaque) void {
        qtc.QSctpSocket_DisconnectFromHost(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#disconnectFromHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDisconnectFromHost(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSctpSocket_OnDisconnectFromHost(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDisconnectFromHost` instead
    ///
    pub const QBaseDisconnectFromHost = SuperDisconnectFromHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#disconnectFromHost)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperDisconnectFromHost(self: ?*anyopaque) void {
        qtc.QSctpSocket_SuperDisconnectFromHost(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#setMaximumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` count: i32 `
    ///
    pub fn SetMaximumChannelCount(self: ?*anyopaque, count: i32) void {
        qtc.QSctpSocket_SetMaximumChannelCount(@ptrCast(self), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#maximumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn MaximumChannelCount(self: ?*anyopaque) i32 {
        return qtc.QSctpSocket_MaximumChannelCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#isInDatagramMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn IsInDatagramMode(self: ?*anyopaque) bool {
        return qtc.QSctpSocket_IsInDatagramMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#readDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn ReadDatagram(self: ?*anyopaque) QtC.QNetworkDatagram {
        return qtc.QSctpSocket_ReadDatagram(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#writeDatagram)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` datagram: QtC.QNetworkDatagram `
    ///
    pub fn WriteDatagram(self: ?*anyopaque, datagram: ?*anyopaque) bool {
        return qtc.QSctpSocket_WriteDatagram(@ptrCast(self), @ptrCast(datagram));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSctpSocket_ReadData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QSctpSocket_OnReadData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadData` instead
    ///
    pub const QBaseReadData = SuperReadData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#readData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSctpSocket_SuperReadData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#readLineData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSctpSocket_ReadLineData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#readLineData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QSctpSocket_OnReadLineData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadLineData` instead
    ///
    pub const QBaseReadLineData = SuperReadLineData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#readLineData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSctpSocket_SuperReadLineData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpsocket.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTcpSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind2(self: ?*anyopaque, addr: i32, port: u16) bool {
        return qtc.QTcpSocket_Bind2(@ptrCast(self), @bitCast(addr), @bitCast(port));
    }

    /// Inherited from QTcpSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind3(self: ?*anyopaque, addr: i32, port: u16, mode: i32) bool {
        return qtc.QTcpSocket_Bind3(@ptrCast(self), @bitCast(addr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn PauseMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_PauseMode(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn SetPauseMode(self: ?*anyopaque, pauseMode: i32) void {
        qtc.QAbstractSocket_SetPauseMode(@ptrCast(self), @bitCast(pauseMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHost2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QAbstractSocket_ConnectToHost2(@ptrCast(self), @ptrCast(address), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAbstractSocket_IsValid(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn LocalPort(self: ?*anyopaque) u16 {
        return qtc.QAbstractSocket_LocalPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn LocalAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QAbstractSocket_LocalAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn PeerPort(self: ?*anyopaque) u16 {
        return qtc.QAbstractSocket_PeerPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn PeerAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QAbstractSocket_PeerAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_PeerName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpsocket.PeerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn ReadBufferSize(self: ?*anyopaque) i64 {
        return qtc.QAbstractSocket_ReadBufferSize(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Abort(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Abort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketType `
    ///
    pub fn SocketType(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_SocketType(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketState `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_State(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_Error(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Flush(self: ?*anyopaque) bool {
        return qtc.QAbstractSocket_Flush(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` networkProxy: QtC.QNetworkProxy `
    ///
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        qtc.QAbstractSocket_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Proxy(self: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QAbstractSocket_Proxy(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolTag(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_ProtocolTag(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpsocket.ProtocolTag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn SetProtocolTag(self: ?*anyopaque, tag: []const u8) void {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        qtc.QAbstractSocket_SetProtocolTag(@ptrCast(self), tag_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn HostFound(self: ?*anyopaque) void {
        qtc.QAbstractSocket_HostFound(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket) callconv(.c) void `
    ///
    pub fn OnHostFound(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_HostFound(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Connected(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Connected(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket) callconv(.c) void `
    ///
    pub fn OnConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Connected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Disconnected(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Disconnected(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Disconnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketState `
    ///
    pub fn StateChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QAbstractSocket_StateChanged(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, param1: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_StateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, param1: i32) void {
        qtc.QAbstractSocket_ErrorOccurred(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, param1: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` proxy: QtC.QNetworkProxy `
    ///
    /// ` authenticator: QtC.QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, proxy: QtC.QNetworkProxy, authenticator: QtC.QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind1(self: ?*anyopaque, port: u16) bool {
        return qtc.QAbstractSocket_Bind1(@ptrCast(self), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind22(self: ?*anyopaque, port: u16, mode: i32) bool {
        return qtc.QAbstractSocket_Bind22(@ptrCast(self), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHost3(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i32) void {
        qtc.QAbstractSocket_ConnectToHost3(@ptrCast(self), @ptrCast(address), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: ?*anyopaque) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Read2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsctpsocket.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsctpsocket.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsctpsocket.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn CommitTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: ?*anyopaque, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Peek2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsctpsocket.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: ?*anyopaque, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: ?*anyopaque, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: ?*anyopaque, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpsocket.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn ReadyRead(self: ?*anyopaque) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsctpsocket.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpsocket.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsctpsocket.Children: Memory allocation failed");
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsctpsocket.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsctpsocket.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket) callconv(.c) void `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Resume(self: ?*anyopaque) void {
        qtc.QSctpSocket_Resume(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperResume(self: ?*anyopaque) void {
        qtc.QSctpSocket_SuperResume(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResume(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSctpSocket_OnResume(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i32) bool {
        return qtc.QSctpSocket_Bind(@ptrCast(self), @ptrCast(address), @bitCast(port), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperBind` instead
    ///
    pub const QBaseBind = SuperBind;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn SuperBind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i32) bool {
        return qtc.QSctpSocket_SuperBind(@ptrCast(self), @ptrCast(address), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, address: QtC.QHostAddress, port: u16, mode: flag of qabstractsocket_enums.BindFlag) callconv(.c) bool `
    ///
    pub fn OnBind(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u16, i32) callconv(.c) bool) void {
        qtc.QSctpSocket_OnBind(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSctpSocket_ConnectToHost(@ptrCast(self), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn SuperConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSctpSocket_SuperConnectToHost(@ptrCast(self), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, hostName: [*:0]const u8, port: u16, mode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void `
    ///
    pub fn OnConnectToHost(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, u16, i32, i32) callconv(.c) void) void {
        qtc.QSctpSocket_OnConnectToHost(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSctpSocket_BytesAvailable(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSctpSocket_SuperBytesAvailable(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QSctpSocket_OnBytesAvailable(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSctpSocket_BytesToWrite(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSctpSocket_SuperBytesToWrite(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QSctpSocket_OnBytesToWrite(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QSctpSocket_SetReadBufferSize(@ptrCast(self), @bitCast(size));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperSetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QSctpSocket_SuperSetReadBufferSize(@ptrCast(self), @bitCast(size));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, size: i64) callconv(.c) void `
    ///
    pub fn OnSetReadBufferSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetReadBufferSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return qtc.QSctpSocket_SocketDescriptor(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperSocketDescriptor(self: ?*anyopaque) isize {
        return qtc.QSctpSocket_SuperSocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) isize `
    ///
    pub fn OnSocketDescriptor(self: ?*anyopaque, callback: *const fn () callconv(.c) isize) void {
        qtc.QSctpSocket_OnSocketDescriptor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QSctpSocket_SetSocketDescriptor(@ptrCast(self), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QSctpSocket_SuperSetSocketDescriptor(@ptrCast(self), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnSetSocketDescriptor(self: ?*anyopaque, callback: *const fn (?*anyopaque, isize, i32, i32) callconv(.c) bool) void {
        qtc.QSctpSocket_OnSetSocketDescriptor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QSctpSocket_SetSocketOption(@ptrCast(self), @bitCast(option), @ptrCast(value));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperSetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QSctpSocket_SuperSetSocketOption(@ptrCast(self), @bitCast(option), @ptrCast(value));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, option: qabstractsocket_enums.SocketOption, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetSocketOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetSocketOption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QSctpSocket_SocketOption(@ptrCast(self), @bitCast(option));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SuperSocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QSctpSocket_SuperSocketOption(@ptrCast(self), @bitCast(option));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, option: qabstractsocket_enums.SocketOption) callconv(.c) QtC.QVariant `
    ///
    pub fn OnSocketOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSctpSocket_OnSocketOption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn IsSequential(self: ?*anyopaque) bool {
        return qtc.QSctpSocket_IsSequential(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperIsSequential(self: ?*anyopaque) bool {
        return qtc.QSctpSocket_SuperIsSequential(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSctpSocket_OnIsSequential(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSctpSocket_WaitForConnected(@ptrCast(self), @bitCast(msecs));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSctpSocket_SuperWaitForConnected(@ptrCast(self), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSctpSocket_OnWaitForConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSctpSocket_WaitForReadyRead(@ptrCast(self), @bitCast(msecs));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSctpSocket_SuperWaitForReadyRead(@ptrCast(self), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSctpSocket_OnWaitForReadyRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSctpSocket_WaitForBytesWritten(@ptrCast(self), @bitCast(msecs));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSctpSocket_SuperWaitForBytesWritten(@ptrCast(self), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSctpSocket_OnWaitForBytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSctpSocket_WaitForDisconnected(@ptrCast(self), @bitCast(msecs));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSctpSocket_SuperWaitForDisconnected(@ptrCast(self), @bitCast(msecs));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSctpSocket_OnWaitForDisconnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSctpSocket_SkipData(@ptrCast(self), @bitCast(maxSize));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSctpSocket_SuperSkipData(@ptrCast(self), @bitCast(maxSize));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QSctpSocket_OnSkipData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSctpSocket_WriteData(@ptrCast(self), data_Cstring, @bitCast(lenVal));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSctpSocket_SuperWriteData(@ptrCast(self), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSctpSocket_OnWriteData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: ?*anyopaque, mode: i32) bool {
        return qtc.QSctpSocket_Open(@ptrCast(self), @bitCast(mode));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: ?*anyopaque, mode: i32) bool {
        return qtc.QSctpSocket_SuperOpen(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSctpSocket_OnOpen(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.QSctpSocket_Pos(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperPos(self: ?*anyopaque) i64 {
        return qtc.QSctpSocket_SuperPos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QSctpSocket_OnPos(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QSctpSocket_Size(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperSize(self: ?*anyopaque) i64 {
        return qtc.QSctpSocket_SuperSize(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QSctpSocket_OnSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QSctpSocket_Seek(@ptrCast(self), @bitCast(pos));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn SuperSeek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QSctpSocket_SuperSeek(@ptrCast(self), @bitCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, pos: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QSctpSocket_OnSeek(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QSctpSocket_AtEnd(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperAtEnd(self: ?*anyopaque) bool {
        return qtc.QSctpSocket_SuperAtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSctpSocket_OnAtEnd(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Reset(self: ?*anyopaque) bool {
        return qtc.QSctpSocket_Reset(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperReset(self: ?*anyopaque) bool {
        return qtc.QSctpSocket_SuperReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSctpSocket_OnReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return qtc.QSctpSocket_CanReadLine(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperCanReadLine(self: ?*anyopaque) bool {
        return qtc.QSctpSocket_SuperCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSctpSocket_OnCanReadLine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSctpSocket_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSctpSocket_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSctpSocket_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSctpSocket_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSctpSocket_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSctpSocket_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpSocket_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpSocket_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpSocket_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpSocket_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpSocket_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpSocket_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpSocket_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpSocket_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpSocket_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSctpSocket_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSctpSocket_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpSocket_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSctpSocket_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSctpSocket_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpSocket_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SetSocketState(self: ?*anyopaque, state: i32) void {
        qtc.QSctpSocket_SetSocketState(@ptrCast(self), @bitCast(state));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SuperSetSocketState(self: ?*anyopaque, state: i32) void {
        qtc.QSctpSocket_SuperSetSocketState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnSetSocketState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetSocketState(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SetSocketError(self: ?*anyopaque, socketError: i32) void {
        qtc.QSctpSocket_SetSocketError(@ptrCast(self), @bitCast(socketError));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SuperSetSocketError(self: ?*anyopaque, socketError: i32) void {
        qtc.QSctpSocket_SuperSetSocketError(@ptrCast(self), @bitCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnSetSocketError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetSocketError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetLocalPort(self: ?*anyopaque, port: u16) void {
        qtc.QSctpSocket_SetLocalPort(@ptrCast(self), @bitCast(port));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetLocalPort(self: ?*anyopaque, port: u16) void {
        qtc.QSctpSocket_SuperSetLocalPort(@ptrCast(self), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetLocalPort(self: ?*anyopaque, callback: *const fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetLocalPort(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn SetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSctpSocket_SetLocalAddress(@ptrCast(self), @ptrCast(address));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn SuperSetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSctpSocket_SuperSetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, address: QtC.QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetLocalAddress(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetLocalAddress(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetPeerPort(self: ?*anyopaque, port: u16) void {
        qtc.QSctpSocket_SetPeerPort(@ptrCast(self), @bitCast(port));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetPeerPort(self: ?*anyopaque, port: u16) void {
        qtc.QSctpSocket_SuperSetPeerPort(@ptrCast(self), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetPeerPort(self: ?*anyopaque, callback: *const fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetPeerPort(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn SetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSctpSocket_SetPeerAddress(@ptrCast(self), @ptrCast(address));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn SuperSetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSctpSocket_SuperSetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, address: QtC.QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetPeerAddress(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetPeerAddress(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSctpSocket_SetPeerName(@ptrCast(self), name_str);
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSctpSocket_SuperSetPeerName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetPeerName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetPeerName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QSctpSocket_SetOpenMode(@ptrCast(self), @bitCast(openMode));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QSctpSocket_SuperSetOpenMode(@ptrCast(self), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetOpenMode(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSctpSocket_SetErrorString(@ptrCast(self), errorString_str);
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSctpSocket_SuperSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSctpSocket_OnSetErrorString(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSctpSocket_Sender(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSctpSocket_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QSctpSocket_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSctpSocket_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSctpSocket_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSctpSocket_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSctpSocket_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSctpSocket_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSctpSocket_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSctpSocket_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSctpSocket_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSctpSocket_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSctpSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpsocket.html#dtor.QSctpSocket)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QSctpSocket `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QSctpSocket_Delete(@ptrCast(self));
    }
};
