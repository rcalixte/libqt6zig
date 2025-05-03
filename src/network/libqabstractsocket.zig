const C = @import("qt6c");
const qabstractsocket_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstractsocket.html
pub const qabstractsocket = struct {
    /// New constructs a new QAbstractSocket object.
    ///
    /// ``` socketType: qabstractsocket_enums.SocketType, parent: ?*C.QObject ```
    pub fn New(socketType: i64, parent: ?*anyopaque) ?*C.QAbstractSocket {
        return C.QAbstractSocket_new(@intCast(socketType), @ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QAbstractSocket_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractSocket, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QAbstractSocket_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QAbstractSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QAbstractSocket_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QAbstractSocket_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QAbstractSocket_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QAbstractSocket_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Resume(self: ?*anyopaque) void {
        C.QAbstractSocket_Resume(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) void ```
    pub fn OnResume(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QAbstractSocket_OnResume(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseResume(self: ?*anyopaque) void {
        C.QAbstractSocket_QBaseResume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn PauseMode(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_PauseMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ``` self: ?*C.QAbstractSocket, pauseMode: i32 ```
    pub fn SetPauseMode(self: ?*anyopaque, pauseMode: i64) void {
        C.QAbstractSocket_SetPauseMode(@ptrCast(self), @intCast(pauseMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ``` self: ?*C.QAbstractSocket, address: ?*C.QHostAddress, port: u16, mode: i32 ```
    pub fn Bind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) bool {
        return C.QAbstractSocket_Bind(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QHostAddress, u16, i32) callconv(.c) bool ```
    pub fn OnBind(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u16, i64) callconv(.c) bool) void {
        C.QAbstractSocket_OnBind(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, address: ?*C.QHostAddress, port: u16, mode: i32 ```
    pub fn QBaseBind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) bool {
        return C.QAbstractSocket_QBaseBind(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Bind2(self: ?*anyopaque) bool {
        return C.QAbstractSocket_Bind2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ``` self: ?*C.QAbstractSocket, hostName: []const u8, port: u16, mode: i32, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i64, protocol: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QAbstractSocket_ConnectToHost(@ptrCast(self), hostName_str, @intCast(port), @intCast(mode), @intCast(protocol));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, []const u8, u16, i32, qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void ```
    pub fn OnConnectToHost(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, u16, i64, i64) callconv(.c) void) void {
        C.QAbstractSocket_OnConnectToHost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, hostName: []const u8, port: u16, mode: i32, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn QBaseConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i64, protocol: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QAbstractSocket_QBaseConnectToHost(@ptrCast(self), hostName_str, @intCast(port), @intCast(mode), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ``` self: ?*C.QAbstractSocket, address: ?*C.QHostAddress, port: u16 ```
    pub fn ConnectToHost2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        C.QAbstractSocket_ConnectToHost2(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn DisconnectFromHost(self: ?*anyopaque) void {
        C.QAbstractSocket_DisconnectFromHost(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) void ```
    pub fn OnDisconnectFromHost(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QAbstractSocket_OnDisconnectFromHost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseDisconnectFromHost(self: ?*anyopaque) void {
        C.QAbstractSocket_QBaseDisconnectFromHost(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QAbstractSocket_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_BytesAvailable(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesAvailable(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QAbstractSocket_OnBytesAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_QBaseBytesAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_BytesToWrite(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesToWrite(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QAbstractSocket_OnBytesToWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_QBaseBytesToWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn LocalPort(self: ?*anyopaque) u16 {
        return C.QAbstractSocket_LocalPort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn LocalAddress(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QAbstractSocket_LocalAddress(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn PeerPort(self: ?*anyopaque) u16 {
        return C.QAbstractSocket_PeerPort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn PeerAddress(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QAbstractSocket_PeerAddress(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ``` self: ?*C.QAbstractSocket, allocator: std.mem.Allocator ```
    pub fn PeerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractSocket_PeerName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn ReadBufferSize(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_ReadBufferSize(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// ``` self: ?*C.QAbstractSocket, size: i64 ```
    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        C.QAbstractSocket_SetReadBufferSize(@ptrCast(self), @intCast(size));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, i64) callconv(.c) void ```
    pub fn OnSetReadBufferSize(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractSocket_OnSetReadBufferSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, size: i64 ```
    pub fn QBaseSetReadBufferSize(self: ?*anyopaque, size: i64) void {
        C.QAbstractSocket_QBaseSetReadBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Abort(self: ?*anyopaque) void {
        C.QAbstractSocket_Abort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return C.QAbstractSocket_SocketDescriptor(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) isize ```
    pub fn OnSocketDescriptor(self: ?*anyopaque, slot: fn () callconv(.c) isize) void {
        C.QAbstractSocket_OnSocketDescriptor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseSocketDescriptor(self: ?*anyopaque) isize {
        return C.QAbstractSocket_QBaseSocketDescriptor(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// ``` self: ?*C.QAbstractSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: i32 ```
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i64, openMode: i64) bool {
        return C.QAbstractSocket_SetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor), @intCast(state), @intCast(openMode));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, isize, qabstractsocket_enums.SocketState, i32) callconv(.c) bool ```
    pub fn OnSetSocketDescriptor(self: ?*anyopaque, slot: fn (?*anyopaque, isize, i64, i64) callconv(.c) bool) void {
        C.QAbstractSocket_OnSetSocketDescriptor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: i32 ```
    pub fn QBaseSetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i64, openMode: i64) bool {
        return C.QAbstractSocket_QBaseSetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor), @intCast(state), @intCast(openMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// ``` self: ?*C.QAbstractSocket, option: qabstractsocket_enums.SocketOption, value: ?*C.QVariant ```
    pub fn SetSocketOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        C.QAbstractSocket_SetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, qabstractsocket_enums.SocketOption, ?*C.QVariant) callconv(.c) void ```
    pub fn OnSetSocketOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_OnSetSocketOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, option: qabstractsocket_enums.SocketOption, value: ?*C.QVariant ```
    pub fn QBaseSetSocketOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        C.QAbstractSocket_QBaseSetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// ``` self: ?*C.QAbstractSocket, option: qabstractsocket_enums.SocketOption ```
    pub fn SocketOption(self: ?*anyopaque, option: i64) ?*C.QVariant {
        return C.QAbstractSocket_SocketOption(@ptrCast(self), @intCast(option));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, qabstractsocket_enums.SocketOption) callconv(.c) ?*C.QVariant ```
    pub fn OnSocketOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QAbstractSocket_OnSocketOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, option: qabstractsocket_enums.SocketOption ```
    pub fn QBaseSocketOption(self: ?*anyopaque, option: i64) ?*C.QVariant {
        return C.QAbstractSocket_QBaseSocketOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn SocketType(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_SocketType(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Error(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_Error(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Close(self: ?*anyopaque) void {
        C.QAbstractSocket_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) void ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QAbstractSocket_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseClose(self: ?*anyopaque) void {
        C.QAbstractSocket_QBaseClose(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsSequential(self: ?*anyopaque) bool {
        return C.QAbstractSocket_IsSequential(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) bool ```
    pub fn OnIsSequential(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QAbstractSocket_OnIsSequential(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return C.QAbstractSocket_QBaseIsSequential(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Flush(self: ?*anyopaque) bool {
        return C.QAbstractSocket_Flush(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// ``` self: ?*C.QAbstractSocket, msecs: i32 ```
    pub fn WaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QAbstractSocket_WaitForConnected(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForConnected(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QAbstractSocket_OnWaitForConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, msecs: i32 ```
    pub fn QBaseWaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QAbstractSocket_QBaseWaitForConnected(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// ``` self: ?*C.QAbstractSocket, msecs: i32 ```
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return C.QAbstractSocket_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QAbstractSocket_OnWaitForReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, msecs: i32 ```
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return C.QAbstractSocket_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// ``` self: ?*C.QAbstractSocket, msecs: i32 ```
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return C.QAbstractSocket_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QAbstractSocket_OnWaitForBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, msecs: i32 ```
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return C.QAbstractSocket_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// ``` self: ?*C.QAbstractSocket, msecs: i32 ```
    pub fn WaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QAbstractSocket_WaitForDisconnected(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForDisconnected(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QAbstractSocket_OnWaitForDisconnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, msecs: i32 ```
    pub fn QBaseWaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QAbstractSocket_QBaseWaitForDisconnected(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ``` self: ?*C.QAbstractSocket, networkProxy: ?*C.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        C.QAbstractSocket_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Proxy(self: ?*anyopaque) ?*C.QNetworkProxy {
        return C.QAbstractSocket_Proxy(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ``` self: ?*C.QAbstractSocket, allocator: std.mem.Allocator ```
    pub fn ProtocolTag(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QAbstractSocket_ProtocolTag(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
    ///
    /// ``` self: ?*C.QAbstractSocket, tag: []const u8 ```
    pub fn SetProtocolTag(self: ?*anyopaque, tag: []const u8) void {
        const tag_str = C.struct_libqt_string{
            .len = tag.len,
            .data = @constCast(tag.ptr),
        };
        C.QAbstractSocket_SetProtocolTag(@ptrCast(self), tag_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn HostFound(self: ?*anyopaque) void {
        C.QAbstractSocket_HostFound(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket) callconv(.c) void ```
    pub fn OnHostFound(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_Connect_HostFound(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Connected(self: ?*anyopaque) void {
        C.QAbstractSocket_Connected(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket) callconv(.c) void ```
    pub fn OnConnected(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_Connect_Connected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Disconnected(self: ?*anyopaque) void {
        C.QAbstractSocket_Disconnected(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket) callconv(.c) void ```
    pub fn OnDisconnected(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_Connect_Disconnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ``` self: ?*C.QAbstractSocket, param1: qabstractsocket_enums.SocketState ```
    pub fn StateChanged(self: ?*anyopaque, param1: i64) void {
        C.QAbstractSocket_StateChanged(@ptrCast(self), @intCast(param1));
    }

    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, qabstractsocket_enums.SocketState) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractSocket_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ``` self: ?*C.QAbstractSocket, param1: qabstractsocket_enums.SocketError ```
    pub fn ErrorOccurred(self: ?*anyopaque, param1: i64) void {
        C.QAbstractSocket_ErrorOccurred(@ptrCast(self), @intCast(param1));
    }

    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ``` self: ?*C.QAbstractSocket, proxy: ?*C.QNetworkProxy, authenticator: ?*C.QAuthenticator ```
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        C.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QNetworkProxy, ?*C.QAuthenticator) callconv(.c) void ```
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QAbstractSocket_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, []const u8, i64) callconv(.c) i64 ```
    pub fn OnReadData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QAbstractSocket_OnReadData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QAbstractSocket_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QAbstractSocket_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, []const u8, i64) callconv(.c) i64 ```
    pub fn OnReadLineData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QAbstractSocket_OnReadLineData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QAbstractSocket_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// ``` self: ?*C.QAbstractSocket, maxSize: i64 ```
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QAbstractSocket_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, i64) callconv(.c) i64 ```
    pub fn OnSkipData(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i64) void {
        C.QAbstractSocket_OnSkipData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, maxSize: i64 ```
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QAbstractSocket_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, lenVal: i64 ```
    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QAbstractSocket_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, []const u8, i64) callconv(.c) i64 ```
    pub fn OnWriteData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QAbstractSocket_OnWriteData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, lenVal: i64 ```
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QAbstractSocket_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// ``` self: ?*C.QAbstractSocket, state: qabstractsocket_enums.SocketState ```
    pub fn SetSocketState(self: ?*anyopaque, state: i64) void {
        C.QAbstractSocket_SetSocketState(@ptrCast(self), @intCast(state));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, qabstractsocket_enums.SocketState) callconv(.c) void ```
    pub fn OnSetSocketState(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractSocket_OnSetSocketState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, state: qabstractsocket_enums.SocketState ```
    pub fn QBaseSetSocketState(self: ?*anyopaque, state: i64) void {
        C.QAbstractSocket_QBaseSetSocketState(@ptrCast(self), @intCast(state));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// ``` self: ?*C.QAbstractSocket, socketError: qabstractsocket_enums.SocketError ```
    pub fn SetSocketError(self: ?*anyopaque, socketError: i64) void {
        C.QAbstractSocket_SetSocketError(@ptrCast(self), @intCast(socketError));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnSetSocketError(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractSocket_OnSetSocketError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, socketError: qabstractsocket_enums.SocketError ```
    pub fn QBaseSetSocketError(self: ?*anyopaque, socketError: i64) void {
        C.QAbstractSocket_QBaseSetSocketError(@ptrCast(self), @intCast(socketError));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// ``` self: ?*C.QAbstractSocket, port: u16 ```
    pub fn SetLocalPort(self: ?*anyopaque, port: u16) void {
        C.QAbstractSocket_SetLocalPort(@ptrCast(self), @intCast(port));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, u16) callconv(.c) void ```
    pub fn OnSetLocalPort(self: ?*anyopaque, slot: fn (?*anyopaque, u16) callconv(.c) void) void {
        C.QAbstractSocket_OnSetLocalPort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, port: u16 ```
    pub fn QBaseSetLocalPort(self: ?*anyopaque, port: u16) void {
        C.QAbstractSocket_QBaseSetLocalPort(@ptrCast(self), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// ``` self: ?*C.QAbstractSocket, address: ?*C.QHostAddress ```
    pub fn SetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QAbstractSocket_SetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QHostAddress) callconv(.c) void ```
    pub fn OnSetLocalAddress(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_OnSetLocalAddress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, address: ?*C.QHostAddress ```
    pub fn QBaseSetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QAbstractSocket_QBaseSetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// ``` self: ?*C.QAbstractSocket, port: u16 ```
    pub fn SetPeerPort(self: ?*anyopaque, port: u16) void {
        C.QAbstractSocket_SetPeerPort(@ptrCast(self), @intCast(port));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, u16) callconv(.c) void ```
    pub fn OnSetPeerPort(self: ?*anyopaque, slot: fn (?*anyopaque, u16) callconv(.c) void) void {
        C.QAbstractSocket_OnSetPeerPort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, port: u16 ```
    pub fn QBaseSetPeerPort(self: ?*anyopaque, port: u16) void {
        C.QAbstractSocket_QBaseSetPeerPort(@ptrCast(self), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// ``` self: ?*C.QAbstractSocket, address: ?*C.QHostAddress ```
    pub fn SetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QAbstractSocket_SetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QHostAddress) callconv(.c) void ```
    pub fn OnSetPeerAddress(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_OnSetPeerAddress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, address: ?*C.QHostAddress ```
    pub fn QBaseSetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QAbstractSocket_QBaseSetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// ``` self: ?*C.QAbstractSocket, name: []const u8 ```
    pub fn SetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QAbstractSocket_SetPeerName(@ptrCast(self), name_str);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, []const u8) callconv(.c) void ```
    pub fn OnSetPeerName(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QAbstractSocket_OnSetPeerName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAbstractSocket, name: []const u8 ```
    pub fn QBaseSetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QAbstractSocket_QBaseSetPeerName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QAbstractSocket_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QAbstractSocket_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ``` self: ?*C.QAbstractSocket, port: u16 ```
    pub fn Bind1(self: ?*anyopaque, port: u16) bool {
        return C.QAbstractSocket_Bind1(@ptrCast(self), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ``` self: ?*C.QAbstractSocket, port: u16, mode: i32 ```
    pub fn Bind22(self: ?*anyopaque, port: u16, mode: i64) bool {
        return C.QAbstractSocket_Bind22(@ptrCast(self), @intCast(port), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ``` self: ?*C.QAbstractSocket, address: ?*C.QHostAddress, port: u16, mode: i32 ```
    pub fn ConnectToHost3(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) void {
        C.QAbstractSocket_ConnectToHost3(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn OpenMode(self: ?*anyopaque) i64 {
        return C.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ``` self: ?*C.QAbstractSocket, enabled: bool ```
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return C.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return C.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return C.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return C.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return C.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return C.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return C.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ``` self: ?*C.QAbstractSocket, channel: i32 ```
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return C.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ``` self: ?*C.QAbstractSocket, channel: i32 ```
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, maxlen: i64 ```
    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: ?*C.QAbstractSocket, maxlen: i64, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: ?*C.QAbstractSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        C.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn CommitTransaction(self: ?*anyopaque) void {
        C.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        C.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return C.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, lenVal: i64 ```
    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []const u8 ```
    pub fn WriteWithData(self: ?*anyopaque, data: []const u8) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_WriteWithData(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QAbstractSocket, data: []u8 ```
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
    /// ``` self: ?*C.QAbstractSocket, data: []const u8, maxlen: i64 ```
    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: ?*C.QAbstractSocket, maxlen: i64, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractSocket, maxSize: i64 ```
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ``` self: ?*C.QAbstractSocket, c: i8 ```
    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        C.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ``` self: ?*C.QAbstractSocket, c: i8 ```
    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return C.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ``` self: ?*C.QAbstractSocket, c: []const u8 ```
    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        const c_Cstring = @constCast(c.ptr);
        return C.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ``` self: ?*C.QAbstractSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractSocket ```
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
    /// ``` self: ?*C.QAbstractSocket, channel: i32 ```
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
    /// ``` self: ?*C.QAbstractSocket, bytes: i64 ```
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
    /// ``` self: ?*C.QAbstractSocket, channel: i32, bytes: i64 ```
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
    /// ``` self: ?*C.QAbstractSocket ```
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
    /// ``` self: ?*C.QAbstractSocket ```
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
    /// ``` self: ?*C.QAbstractSocket, maxlen: i64, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractSocket, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QAbstractSocket, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QAbstractSocket, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAbstractSocket, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QAbstractSocket, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QAbstractSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractSocket, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QAbstractSocket, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QAbstractSocket, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QAbstractSocket, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QAbstractSocket, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QAbstractSocket, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QAbstractSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
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
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QAbstractSocket, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAbstractSocket, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QAbstractSocket, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAbstractSocket, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, mode: i32 ```
    pub fn Open(self: ?*anyopaque, mode: i64) bool {
        return C.QAbstractSocket_Open(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, mode: i32 ```
    pub fn QBaseOpen(self: ?*anyopaque, mode: i64) bool {
        return C.QAbstractSocket_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, i32) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QAbstractSocket_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_Pos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_QBasePos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnPos(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QAbstractSocket_OnPos(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Size(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_Size(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QAbstractSocket_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, pos: i64 ```
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return C.QAbstractSocket_Seek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, pos: i64 ```
    pub fn QBaseSeek(self: ?*anyopaque, pos: i64) bool {
        return C.QAbstractSocket_QBaseSeek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, i64) callconv(.c) bool ```
    pub fn OnSeek(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QAbstractSocket_OnSeek(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return C.QAbstractSocket_AtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return C.QAbstractSocket_QBaseAtEnd(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) bool ```
    pub fn OnAtEnd(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QAbstractSocket_OnAtEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Reset(self: ?*anyopaque) bool {
        return C.QAbstractSocket_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return C.QAbstractSocket_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) bool ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QAbstractSocket_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return C.QAbstractSocket_CanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return C.QAbstractSocket_QBaseCanReadLine(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) bool ```
    pub fn OnCanReadLine(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QAbstractSocket_OnCanReadLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAbstractSocket_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAbstractSocket_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QAbstractSocket_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAbstractSocket_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAbstractSocket_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QAbstractSocket_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractSocket_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractSocket_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractSocket_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractSocket_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractSocket_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAbstractSocket_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAbstractSocket_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAbstractSocket_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAbstractSocket_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAbstractSocket_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAbstractSocket_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, openMode: i32 ```
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i64) void {
        C.QAbstractSocket_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, openMode: i32 ```
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i64) void {
        C.QAbstractSocket_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, i32) callconv(.c) void ```
    pub fn OnSetOpenMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractSocket_OnSetOpenMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, errorString: []const u8 ```
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QAbstractSocket_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, errorString: []const u8 ```
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QAbstractSocket_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, []const u8) callconv(.c) void ```
    pub fn OnSetErrorString(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QAbstractSocket_OnSetErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QAbstractSocket_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QAbstractSocket_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QAbstractSocket_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QAbstractSocket_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QAbstractSocket_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QAbstractSocket_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QAbstractSocket_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QAbstractSocket_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QAbstractSocket_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QAbstractSocket_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QAbstractSocket_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAbstractSocket, slot: fn (?*C.QAbstractSocket, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QAbstractSocket_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAbstractSocket ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAbstractSocket_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstractsocket.html#types
pub const enums = struct {
    pub const SocketType = enum {
        pub const TcpSocket: i32 = 0;
        pub const UdpSocket: i32 = 1;
        pub const SctpSocket: i32 = 2;
        pub const UnknownSocketType: i32 = -1;
    };

    pub const NetworkLayerProtocol = enum {
        pub const IPv4Protocol: i32 = 0;
        pub const IPv6Protocol: i32 = 1;
        pub const AnyIPProtocol: i32 = 2;
        pub const UnknownNetworkLayerProtocol: i32 = -1;
    };

    pub const SocketError = enum {
        pub const ConnectionRefusedError: i32 = 0;
        pub const RemoteHostClosedError: i32 = 1;
        pub const HostNotFoundError: i32 = 2;
        pub const SocketAccessError: i32 = 3;
        pub const SocketResourceError: i32 = 4;
        pub const SocketTimeoutError: i32 = 5;
        pub const DatagramTooLargeError: i32 = 6;
        pub const NetworkError: i32 = 7;
        pub const AddressInUseError: i32 = 8;
        pub const SocketAddressNotAvailableError: i32 = 9;
        pub const UnsupportedSocketOperationError: i32 = 10;
        pub const UnfinishedSocketOperationError: i32 = 11;
        pub const ProxyAuthenticationRequiredError: i32 = 12;
        pub const SslHandshakeFailedError: i32 = 13;
        pub const ProxyConnectionRefusedError: i32 = 14;
        pub const ProxyConnectionClosedError: i32 = 15;
        pub const ProxyConnectionTimeoutError: i32 = 16;
        pub const ProxyNotFoundError: i32 = 17;
        pub const ProxyProtocolError: i32 = 18;
        pub const OperationError: i32 = 19;
        pub const SslInternalError: i32 = 20;
        pub const SslInvalidUserDataError: i32 = 21;
        pub const TemporaryError: i32 = 22;
        pub const UnknownSocketError: i32 = -1;
    };

    pub const SocketState = enum {
        pub const UnconnectedState: i32 = 0;
        pub const HostLookupState: i32 = 1;
        pub const ConnectingState: i32 = 2;
        pub const ConnectedState: i32 = 3;
        pub const BoundState: i32 = 4;
        pub const ListeningState: i32 = 5;
        pub const ClosingState: i32 = 6;
    };

    pub const SocketOption = enum {
        pub const LowDelayOption: i32 = 0;
        pub const KeepAliveOption: i32 = 1;
        pub const MulticastTtlOption: i32 = 2;
        pub const MulticastLoopbackOption: i32 = 3;
        pub const TypeOfServiceOption: i32 = 4;
        pub const SendBufferSizeSocketOption: i32 = 5;
        pub const ReceiveBufferSizeSocketOption: i32 = 6;
        pub const PathMtuSocketOption: i32 = 7;
    };

    pub const BindFlag = enum {
        pub const DefaultForPlatform: i32 = 0;
        pub const ShareAddress: i32 = 1;
        pub const DontShareAddress: i32 = 2;
        pub const ReuseAddressHint: i32 = 4;
    };

    pub const PauseMode = enum {
        pub const PauseNever: i32 = 0;
        pub const PauseOnSslErrors: i32 = 1;
    };
};
