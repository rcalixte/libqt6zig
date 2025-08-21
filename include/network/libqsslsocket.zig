const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = @import("libqhostaddress.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("libqssl.zig").enums;
const qsslsocket_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsslsocket.html
pub const qsslsocket = struct {
    /// New constructs a new QSslSocket object.
    ///
    ///
    pub fn New() QtC.QSslSocket {
        return qtc.QSslSocket_new();
    }

    /// New2 constructs a new QSslSocket object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QSslSocket {
        return qtc.QSslSocket_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSslSocket_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSslSocket, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslSocket_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSslSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSslSocket_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSslSocket_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSslSocket_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSslSocket_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Resume(self: ?*anyopaque) void {
        qtc.QSslSocket_Resume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) void ```
    pub fn OnResume(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QSslSocket_OnResume(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseResume(self: ?*anyopaque) void {
        qtc.QSslSocket_QBaseResume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QSslSocket, hostName: []const u8, port: u16 ```
    pub fn ConnectToHostEncrypted(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted(@ptrCast(self), hostName_str, @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8 ```
    pub fn ConnectToHostEncrypted2(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted2(@ptrCast(self), hostName_str, @intCast(port), sslPeerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// ``` self: QtC.QSslSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i64) bool {
        return qtc.QSslSocket_SetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor), @intCast(state), @intCast(openMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool ```
    pub fn OnSetSocketDescriptor(self: ?*anyopaque, slot: fn (?*anyopaque, isize, i32, i64) callconv(.c) bool) void {
        qtc.QSslSocket_OnSetSocketDescriptor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn QBaseSetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i64) bool {
        return qtc.QSslSocket_QBaseSetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor), @intCast(state), @intCast(openMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
    ///
    /// ``` self: QtC.QSslSocket, hostName: []const u8, port: u16, openMode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, openMode: i64, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHost(@ptrCast(self), hostName_str, @intCast(port), @intCast(openMode), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, hostName: [*:0]const u8, port: u16, openMode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void ```
    pub fn OnConnectToHost(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, u16, i64, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnConnectToHost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, hostName: []const u8, port: u16, openMode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn QBaseConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, openMode: i64, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_QBaseConnectToHost(@ptrCast(self), hostName_str, @intCast(port), @intCast(openMode), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn DisconnectFromHost(self: ?*anyopaque) void {
        qtc.QSslSocket_DisconnectFromHost(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) void ```
    pub fn OnDisconnectFromHost(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QSslSocket_OnDisconnectFromHost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseDisconnectFromHost(self: ?*anyopaque) void {
        qtc.QSslSocket_QBaseDisconnectFromHost(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
    ///
    /// ``` self: QtC.QSslSocket, option: qabstractsocket_enums.SocketOption, value: QtC.QVariant ```
    pub fn SetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QSslSocket_SetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, option: qabstractsocket_enums.SocketOption, value: QtC.QVariant) callconv(.c) void ```
    pub fn OnSetSocketOption(self: ?*anyopaque, slot: fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, option: qabstractsocket_enums.SocketOption, value: QtC.QVariant ```
    pub fn QBaseSetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QSslSocket_QBaseSetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// ``` self: QtC.QSslSocket, option: qabstractsocket_enums.SocketOption ```
    pub fn SocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QSslSocket_SocketOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, option: qabstractsocket_enums.SocketOption) callconv(.c) QtC.QVariant ```
    pub fn OnSocketOption(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSslSocket_OnSocketOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, option: qabstractsocket_enums.SocketOption ```
    pub fn QBaseSocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QSslSocket_QBaseSocketOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#mode)
    ///
    /// ``` self: QtC.QSslSocket ```
    ///
    /// Returns: ``` qsslsocket_enums.SslMode ```
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_Mode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isEncrypted)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsEncrypted(self: ?*anyopaque) bool {
        return qtc.QSslSocket_IsEncrypted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#protocol)
    ///
    /// ``` self: QtC.QSslSocket ```
    ///
    /// Returns: ``` qssl_enums.SslProtocol ```
    pub fn Protocol(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_Protocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setProtocol)
    ///
    /// ``` self: QtC.QSslSocket, protocol: qssl_enums.SslProtocol ```
    pub fn SetProtocol(self: ?*anyopaque, protocol: i32) void {
        qtc.QSslSocket_SetProtocol(@ptrCast(self), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyMode)
    ///
    /// ``` self: QtC.QSslSocket ```
    ///
    /// Returns: ``` qsslsocket_enums.PeerVerifyMode ```
    pub fn PeerVerifyMode(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_PeerVerifyMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyMode)
    ///
    /// ``` self: QtC.QSslSocket, mode: qsslsocket_enums.PeerVerifyMode ```
    pub fn SetPeerVerifyMode(self: ?*anyopaque, mode: i32) void {
        qtc.QSslSocket_SetPeerVerifyMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyDepth)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn PeerVerifyDepth(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_PeerVerifyDepth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyDepth)
    ///
    /// ``` self: QtC.QSslSocket, depth: i32 ```
    pub fn SetPeerVerifyDepth(self: ?*anyopaque, depth: i32) void {
        qtc.QSslSocket_SetPeerVerifyDepth(@ptrCast(self), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyName)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn PeerVerifyName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_PeerVerifyName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.PeerVerifyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyName)
    ///
    /// ``` self: QtC.QSslSocket, hostName: []const u8 ```
    pub fn SetPeerVerifyName(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_SetPeerVerifyName(@ptrCast(self), hostName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_BytesAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesAvailable(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_QBaseBytesAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_BytesToWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesToWrite(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesToWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_QBaseBytesToWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return qtc.QSslSocket_CanReadLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) bool ```
    pub fn OnCanReadLine(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnCanReadLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return qtc.QSslSocket_QBaseCanReadLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.QSslSocket_Close(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) void ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.QSslSocket_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseClose(self: ?*anyopaque) void {
        qtc.QSslSocket_QBaseClose(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QSslSocket_AtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) bool ```
    pub fn OnAtEnd(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnAtEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return qtc.QSslSocket_QBaseAtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// ``` self: QtC.QSslSocket, size: i64 ```
    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QSslSocket_SetReadBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, size: i64) callconv(.c) void ```
    pub fn OnSetReadBufferSize(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSslSocket_OnSetReadBufferSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, size: i64 ```
    pub fn QBaseSetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QSslSocket_QBaseSetReadBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesAvailable)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn EncryptedBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_EncryptedBytesAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesToWrite)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn EncryptedBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_EncryptedBytesToWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslConfiguration)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn SslConfiguration(self: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QSslSocket_SslConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSslConfiguration)
    ///
    /// ``` self: QtC.QSslSocket, config: QtC.QSslConfiguration ```
    pub fn SetSslConfiguration(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.QSslSocket_SetSslConfiguration(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificateChain)
    ///
    /// ``` self: QtC.QSslSocket, localChain: []QtC.QSslCertificate ```
    pub fn SetLocalCertificateChain(self: ?*anyopaque, localChain: []QtC.QSslCertificate) void {
        const localChain_list = qtc.libqt_list{
            .len = localChain.len,
            .data = @ptrCast(localChain.ptr),
        };
        qtc.QSslSocket_SetLocalCertificateChain(@ptrCast(self), localChain_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificateChain)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn LocalCertificateChain(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslSocket_LocalCertificateChain(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslsocket.LocalCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ``` self: QtC.QSslSocket, certificate: QtC.QSslCertificate ```
    pub fn SetLocalCertificate(self: ?*anyopaque, certificate: ?*anyopaque) void {
        qtc.QSslSocket_SetLocalCertificate(@ptrCast(self), @ptrCast(certificate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ``` self: QtC.QSslSocket, fileName: []const u8 ```
    pub fn SetLocalCertificate2(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetLocalCertificate2(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificate)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn LocalCertificate(self: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslSocket_LocalCertificate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificate)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn PeerCertificate(self: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslSocket_PeerCertificate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificateChain)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn PeerCertificateChain(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslSocket_PeerCertificateChain(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslsocket.PeerCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionCipher)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn SessionCipher(self: ?*anyopaque) QtC.QSslCipher {
        return qtc.QSslSocket_SessionCipher(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionProtocol)
    ///
    /// ``` self: QtC.QSslSocket ```
    ///
    /// Returns: ``` qssl_enums.SslProtocol ```
    pub fn SessionProtocol(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_SessionProtocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ocspResponses)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn OcspResponses(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QOcspResponse {
        const _arr: qtc.libqt_list = qtc.QSslSocket_OcspResponses(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QOcspResponse, _arr.len) catch @panic("qsslsocket.OcspResponses: Memory allocation failed");
        const _data: [*]QtC.QOcspResponse = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: QtC.QSslSocket, key: QtC.QSslKey ```
    pub fn SetPrivateKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSslSocket_SetPrivateKey(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: QtC.QSslSocket, fileName: []const u8 ```
    pub fn SetPrivateKey2(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey2(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#privateKey)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn PrivateKey(self: ?*anyopaque) QtC.QSslKey {
        return qtc.QSslSocket_PrivateKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// ``` self: QtC.QSslSocket, msecs: i32 ```
    pub fn WaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForConnected(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForConnected(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, msecs: i32 ```
    pub fn QBaseWaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_QBaseWaitForConnected(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn WaitForEncrypted(self: ?*anyopaque) bool {
        return qtc.QSslSocket_WaitForEncrypted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// ``` self: QtC.QSslSocket, msecs: i32 ```
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, msecs: i32 ```
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// ``` self: QtC.QSslSocket, msecs: i32 ```
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, msecs: i32 ```
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// ``` self: QtC.QSslSocket, msecs: i32 ```
    pub fn WaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForDisconnected(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, msecs: i32) callconv(.c) bool ```
    pub fn OnWaitForDisconnected(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForDisconnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, msecs: i32 ```
    pub fn QBaseWaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_QBaseWaitForDisconnected(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslHandshakeErrors)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn SslHandshakeErrors(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslError {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SslHandshakeErrors(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslError, _arr.len) catch @panic("qsslsocket.SslHandshakeErrors: Memory allocation failed");
        const _data: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportsSsl)
    ///
    ///
    pub fn SupportsSsl() bool {
        return qtc.QSslSocket_SupportsSsl();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionNumber)
    ///
    ///
    pub fn SslLibraryVersionNumber() i64 {
        return qtc.QSslSocket_SslLibraryVersionNumber();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionString)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SslLibraryVersionString(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_SslLibraryVersionString();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.SslLibraryVersionString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionNumber)
    ///
    ///
    pub fn SslLibraryBuildVersionNumber() i64 {
        return qtc.QSslSocket_SslLibraryBuildVersionNumber();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionString)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SslLibraryBuildVersionString(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_SslLibraryBuildVersionString();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.SslLibraryBuildVersionString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#availableBackends)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AvailableBackends(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_AvailableBackends();
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsslsocket.AvailableBackends: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslsocket.AvailableBackends: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#activeBackend)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ActiveBackend(allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSslSocket_ActiveBackend();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.ActiveBackend: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setActiveBackend)
    ///
    /// ``` backendName: []const u8 ```
    pub fn SetActiveBackend(backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_SetActiveBackend(backendName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
    ///
    /// ``` allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qssl_enums.SslProtocol ```
    pub fn SupportedProtocols(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedProtocols();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.SupportedProtocols: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
    ///
    /// ``` protocol: qssl_enums.SslProtocol ```
    pub fn IsProtocolSupported(protocol: i32) bool {
        return qtc.QSslSocket_IsProtocolSupported(@intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
    ///
    /// ``` allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qssl_enums.ImplementedClass ```
    pub fn ImplementedClasses(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_ImplementedClasses();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.ImplementedClasses: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
    ///
    /// ``` cl: qssl_enums.ImplementedClass ```
    pub fn IsClassImplemented(cl: i32) bool {
        return qtc.QSslSocket_IsClassImplemented(@intCast(cl));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
    ///
    /// ``` allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qssl_enums.SupportedFeature ```
    pub fn SupportedFeatures(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedFeatures();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.SupportedFeatures: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
    ///
    /// ``` feat: qssl_enums.SupportedFeature ```
    pub fn IsFeatureSupported(feat: i32) bool {
        return qtc.QSslSocket_IsFeatureSupported(@intCast(feat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
    ///
    /// ``` self: QtC.QSslSocket, errors: []QtC.QSslError ```
    pub fn IgnoreSslErrors(self: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslSocket_IgnoreSslErrors(@ptrCast(self), errors_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#continueInterruptedHandshake)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn ContinueInterruptedHandshake(self: ?*anyopaque) void {
        qtc.QSslSocket_ContinueInterruptedHandshake(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startClientEncryption)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn StartClientEncryption(self: ?*anyopaque) void {
        qtc.QSslSocket_StartClientEncryption(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startServerEncryption)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn StartServerEncryption(self: ?*anyopaque) void {
        qtc.QSslSocket_StartServerEncryption(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IgnoreSslErrors2(self: ?*anyopaque) void {
        qtc.QSslSocket_IgnoreSslErrors2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Encrypted(self: ?*anyopaque) void {
        qtc.QSslSocket_Encrypted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnEncrypted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_Encrypted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
    ///
    /// ``` self: QtC.QSslSocket, errorVal: QtC.QSslError ```
    pub fn PeerVerifyError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslSocket_PeerVerifyError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, errorVal: QtC.QSslError) callconv(.c) void ```
    pub fn OnPeerVerifyError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PeerVerifyError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
    ///
    /// ``` self: QtC.QSslSocket, errors: []QtC.QSslError ```
    pub fn SslErrors(self: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslSocket_SslErrors(@ptrCast(self), errors_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, errors: []QtC.QSslError) callconv(.c) void ```
    pub fn OnSslErrors(self: ?*anyopaque, slot: fn (?*anyopaque, []QtC.QSslError) callconv(.c) void) void {
        qtc.QSslSocket_Connect_SslErrors(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
    ///
    /// ``` self: QtC.QSslSocket, newMode: qsslsocket_enums.SslMode ```
    pub fn ModeChanged(self: ?*anyopaque, newMode: i32) void {
        qtc.QSslSocket_ModeChanged(@ptrCast(self), @intCast(newMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, newMode: qsslsocket_enums.SslMode) callconv(.c) void ```
    pub fn OnModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSslSocket_Connect_ModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
    ///
    /// ``` self: QtC.QSslSocket, totalBytes: i64 ```
    pub fn EncryptedBytesWritten(self: ?*anyopaque, totalBytes: i64) void {
        qtc.QSslSocket_EncryptedBytesWritten(@ptrCast(self), @intCast(totalBytes));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, totalBytes: i64) callconv(.c) void ```
    pub fn OnEncryptedBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSslSocket_Connect_EncryptedBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ``` self: QtC.QSslSocket, authenticator: QtC.QSslPreSharedKeyAuthenticator ```
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QSslSocket_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(authenticator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, authenticator: QtC.QSslPreSharedKeyAuthenticator) callconv(.c) void ```
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn NewSessionTicketReceived(self: ?*anyopaque) void {
        qtc.QSslSocket_NewSessionTicketReceived(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnNewSessionTicketReceived(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_NewSessionTicketReceived(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
    ///
    /// ``` self: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8 ```
    pub fn AlertSent(self: ?*anyopaque, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslSocket_AlertSent(@ptrCast(self), @intCast(level), @intCast(typeVal), description_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void ```
    pub fn OnAlertSent(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertSent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
    ///
    /// ``` self: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8 ```
    pub fn AlertReceived(self: ?*anyopaque, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslSocket_AlertReceived(@ptrCast(self), @intCast(level), @intCast(typeVal), description_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void ```
    pub fn OnAlertReceived(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertReceived(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
    ///
    /// ``` self: QtC.QSslSocket, errorVal: QtC.QSslError ```
    pub fn HandshakeInterruptedOnError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslSocket_HandshakeInterruptedOnError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, errorVal: QtC.QSslError) callconv(.c) void ```
    pub fn OnHandshakeInterruptedOnError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_HandshakeInterruptedOnError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#readData)
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, data: [*:0]const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadData(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnReadData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#readData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// ``` self: QtC.QSslSocket, maxSize: i64 ```
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSslSocket_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, maxSize: i64) callconv(.c) i64 ```
    pub fn OnSkipData(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnSkipData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, maxSize: i64 ```
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSslSocket_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, lenVal: i64 ```
    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 ```
    pub fn OnWriteData(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnWriteData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, lenVal: i64 ```
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSslSocket_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSslSocket_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QSslSocket, hostName: []const u8, port: u16, mode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn ConnectToHostEncrypted3(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i64) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted3(@ptrCast(self), hostName_str, @intCast(port), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QSslSocket, hostName: []const u8, port: u16, mode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn ConnectToHostEncrypted4(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i64, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted4(@ptrCast(self), hostName_str, @intCast(port), @intCast(mode), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn ConnectToHostEncrypted42(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i64) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted42(@ptrCast(self), hostName_str, @intCast(port), sslPeerName_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: QtC.QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn ConnectToHostEncrypted5(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i64, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted5(@ptrCast(self), hostName_str, @intCast(port), sslPeerName_str, @intCast(mode), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ``` self: QtC.QSslSocket, fileName: []const u8, format: qssl_enums.EncodingFormat ```
    pub fn SetLocalCertificate22(self: ?*anyopaque, fileName: []const u8, format: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetLocalCertificate22(@ptrCast(self), fileName_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: QtC.QSslSocket, fileName: []const u8, algorithm: qssl_enums.KeyAlgorithm ```
    pub fn SetPrivateKey22(self: ?*anyopaque, fileName: []const u8, algorithm: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey22(@ptrCast(self), fileName_str, @intCast(algorithm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: QtC.QSslSocket, fileName: []const u8, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat ```
    pub fn SetPrivateKey3(self: ?*anyopaque, fileName: []const u8, algorithm: i32, format: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey3(@ptrCast(self), fileName_str, @intCast(algorithm), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: QtC.QSslSocket, fileName: []const u8, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat, passPhrase: []u8 ```
    pub fn SetPrivateKey4(self: ?*anyopaque, fileName: []const u8, algorithm: i32, format: i32, passPhrase: []u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        qtc.QSslSocket_SetPrivateKey4(@ptrCast(self), fileName_str, @intCast(algorithm), @intCast(format), passPhrase_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ``` self: QtC.QSslSocket, msecs: i32 ```
    pub fn WaitForEncrypted1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForEncrypted1(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
    ///
    /// ``` backendName: []const u8, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qssl_enums.SslProtocol ```
    pub fn SupportedProtocols1(backendName: []const u8, allocator: std.mem.Allocator) []i32 {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedProtocols1(backendName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.SupportedProtocols1: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
    ///
    /// ``` protocol: qssl_enums.SslProtocol, backendName: []const u8 ```
    pub fn IsProtocolSupported2(protocol: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_IsProtocolSupported2(@intCast(protocol), backendName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
    ///
    /// ``` backendName: []const u8, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qssl_enums.ImplementedClass ```
    pub fn ImplementedClasses1(backendName: []const u8, allocator: std.mem.Allocator) []i32 {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslSocket_ImplementedClasses1(backendName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.ImplementedClasses1: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
    ///
    /// ``` cl: qssl_enums.ImplementedClass, backendName: []const u8 ```
    pub fn IsClassImplemented2(cl: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_IsClassImplemented2(@intCast(cl), backendName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
    ///
    /// ``` backendName: []const u8, allocator: std.mem.Allocator ```
    ///
    /// Returns: ``` []qssl_enums.SupportedFeature ```
    pub fn SupportedFeatures1(backendName: []const u8, allocator: std.mem.Allocator) []i32 {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedFeatures1(backendName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.SupportedFeatures1: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
    ///
    /// ``` feat: qssl_enums.SupportedFeature, backendName: []const u8 ```
    pub fn IsFeatureSupported2(feat: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_IsFeatureSupported2(@intCast(feat), backendName_str);
    }

    /// Inherited from QTcpSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ``` self: QtC.QSslSocket, addr: qhostaddress_enums.SpecialAddress, port: u16 ```
    pub fn Bind2(self: ?*anyopaque, addr: i32, port: u16) bool {
        return qtc.QTcpSocket_Bind2(@ptrCast(self), @intCast(addr), @intCast(port));
    }

    /// Inherited from QTcpSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ``` self: QtC.QSslSocket, addr: qhostaddress_enums.SpecialAddress, port: u16, mode: flag of qabstractsocket_enums.BindFlag ```
    pub fn Bind3(self: ?*anyopaque, addr: i32, port: u16, mode: i64) bool {
        return qtc.QTcpSocket_Bind3(@ptrCast(self), @intCast(addr), @intCast(port), @intCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ``` self: QtC.QSslSocket ```
    ///
    /// Returns: ``` flag of qabstractsocket_enums.PauseMode ```
    pub fn PauseMode(self: ?*anyopaque) i64 {
        return qtc.QAbstractSocket_PauseMode(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ``` self: QtC.QSslSocket, pauseMode: flag of qabstractsocket_enums.PauseMode ```
    pub fn SetPauseMode(self: ?*anyopaque, pauseMode: i64) void {
        qtc.QAbstractSocket_SetPauseMode(@ptrCast(self), @intCast(pauseMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ``` self: QtC.QSslSocket, address: QtC.QHostAddress, port: u16 ```
    pub fn ConnectToHost2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QAbstractSocket_ConnectToHost2(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAbstractSocket_IsValid(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn LocalPort(self: ?*anyopaque) u16 {
        return qtc.QAbstractSocket_LocalPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn LocalAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QAbstractSocket_LocalAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn PeerPort(self: ?*anyopaque) u16 {
        return qtc.QAbstractSocket_PeerPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn PeerAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QAbstractSocket_PeerAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn PeerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSocket_PeerName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.PeerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn ReadBufferSize(self: ?*anyopaque) i64 {
        return qtc.QAbstractSocket_ReadBufferSize(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Abort(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Abort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ``` self: QtC.QSslSocket ```
    ///
    /// Returns: ``` qabstractsocket_enums.SocketType ```
    pub fn SocketType(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_SocketType(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ``` self: QtC.QSslSocket ```
    ///
    /// Returns: ``` qabstractsocket_enums.SocketState ```
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_State(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ``` self: QtC.QSslSocket ```
    ///
    /// Returns: ``` qabstractsocket_enums.SocketError ```
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_Error(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Flush(self: ?*anyopaque) bool {
        return qtc.QAbstractSocket_Flush(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ``` self: QtC.QSslSocket, networkProxy: QtC.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        qtc.QAbstractSocket_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Proxy(self: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QAbstractSocket_Proxy(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn ProtocolTag(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAbstractSocket_ProtocolTag(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.ProtocolTag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
    ///
    /// ``` self: QtC.QSslSocket, tag: []const u8 ```
    pub fn SetProtocolTag(self: ?*anyopaque, tag: []const u8) void {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        qtc.QAbstractSocket_SetProtocolTag(@ptrCast(self), tag_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn HostFound(self: ?*anyopaque) void {
        qtc.QAbstractSocket_HostFound(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnHostFound(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_HostFound(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Connected(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Connected(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnConnected(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Connected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Disconnected(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Disconnected(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnDisconnected(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Disconnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ``` self: QtC.QSslSocket, param1: qabstractsocket_enums.SocketState ```
    pub fn StateChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QAbstractSocket_StateChanged(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, param1: qabstractsocket_enums.SocketState) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ``` self: QtC.QSslSocket, param1: qabstractsocket_enums.SocketError ```
    pub fn ErrorOccurred(self: ?*anyopaque, param1: i32) void {
        qtc.QAbstractSocket_ErrorOccurred(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, param1: qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ``` self: QtC.QSslSocket, proxy: QtC.QNetworkProxy, authenticator: QtC.QAuthenticator ```
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, proxy: QtC.QNetworkProxy, authenticator: QtC.QAuthenticator) callconv(.c) void ```
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ``` self: QtC.QSslSocket, port: u16 ```
    pub fn Bind1(self: ?*anyopaque, port: u16) bool {
        return qtc.QAbstractSocket_Bind1(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ``` self: QtC.QSslSocket, port: u16, mode: flag of qabstractsocket_enums.BindFlag ```
    pub fn Bind22(self: ?*anyopaque, port: u16, mode: i64) bool {
        return qtc.QAbstractSocket_Bind22(@ptrCast(self), @intCast(port), @intCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ``` self: QtC.QSslSocket, address: QtC.QHostAddress, port: u16, mode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn ConnectToHost3(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) void {
        qtc.QAbstractSocket_ConnectToHost3(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ``` self: QtC.QSslSocket ```
    ///
    /// Returns: ``` flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn OpenMode(self: ?*anyopaque) i64 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ``` self: QtC.QSslSocket, enabled: bool ```
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ``` self: QtC.QSslSocket, channel: i32 ```
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ``` self: QtC.QSslSocket, channel: i32 ```
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: QtC.QSslSocket, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn Read2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn CommitTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, lenVal: i64 ```
    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8 ```
    pub fn Write2(self: ?*anyopaque, data: []const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: QtC.QSslSocket, data: []u8 ```
    pub fn Write3(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: QtC.QSslSocket, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn Peek2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ``` self: QtC.QSslSocket, maxSize: i64 ```
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ``` self: QtC.QSslSocket, c: i8 ```
    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ``` self: QtC.QSslSocket, c: i8 ```
    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ``` self: QtC.QSslSocket, c: []const u8 ```
    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIODevice_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn ReadyRead(self: ?*anyopaque) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.QSslSocket, channel: i32 ```
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, channel: i32) callconv(.c) void ```
    pub fn OnChannelReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.QSslSocket, bytes: i64 ```
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, bytes: i64) callconv(.c) void ```
    pub fn OnBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.QSslSocket, channel: i32, bytes: i64 ```
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), @intCast(channel), @intCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, channel: i32, bytes: i64) callconv(.c) void ```
    pub fn OnChannelBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnAboutToClose(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnReadChannelFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: QtC.QSslSocket, maxlen: i64, allocator: std.mem.Allocator ```
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), @intCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSslSocket, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSslSocket, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSslSocket, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSslSocket, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSslSocket, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSslSocket, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsslsocket.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSslSocket, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSslSocket, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSslSocket, obj: QtC.QObject ```
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
    /// ``` self: QtC.QSslSocket, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSslSocket, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSslSocket, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSslSocket, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsslsocket.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslsocket.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSslSocket, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSslSocket, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSslSocket, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSslSocket, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSslSocket, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, address: QtC.QHostAddress, port: u16, mode: flag of qabstractsocket_enums.BindFlag ```
    pub fn Bind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) bool {
        return qtc.QSslSocket_Bind(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, address: QtC.QHostAddress, port: u16, mode: flag of qabstractsocket_enums.BindFlag ```
    pub fn QBaseBind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) bool {
        return qtc.QSslSocket_QBaseBind(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, address: QtC.QHostAddress, port: u16, mode: flag of qabstractsocket_enums.BindFlag) callconv(.c) bool ```
    pub fn OnBind(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u16, i64) callconv(.c) bool) void {
        qtc.QSslSocket_OnBind(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return qtc.QSslSocket_SocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseSocketDescriptor(self: ?*anyopaque) isize {
        return qtc.QSslSocket_QBaseSocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) isize ```
    pub fn OnSocketDescriptor(self: ?*anyopaque, slot: fn () callconv(.c) isize) void {
        qtc.QSslSocket_OnSocketDescriptor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn IsSequential(self: ?*anyopaque) bool {
        return qtc.QSslSocket_IsSequential(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return qtc.QSslSocket_QBaseIsSequential(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) bool ```
    pub fn OnIsSequential(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnIsSequential(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, data: [*:0]const u8, maxlen: i64) callconv(.c) i64 ```
    pub fn OnReadLineData(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnReadLineData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, mode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn Open(self: ?*anyopaque, mode: i64) bool {
        return qtc.QSslSocket_Open(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, mode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn QBaseOpen(self: ?*anyopaque, mode: i64) bool {
        return qtc.QSslSocket_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QSslSocket_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_Pos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_QBasePos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnPos(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnPos(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_Size(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, pos: i64 ```
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QSslSocket_Seek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, pos: i64 ```
    pub fn QBaseSeek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QSslSocket_QBaseSeek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, pos: i64) callconv(.c) bool ```
    pub fn OnSeek(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QSslSocket_OnSeek(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Reset(self: ?*anyopaque) bool {
        return qtc.QSslSocket_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return qtc.QSslSocket_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) bool ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslSocket_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslSocket_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSslSocket_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslSocket_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslSocket_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSslSocket_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslSocket_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslSocket_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslSocket_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslSocket_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, state: qabstractsocket_enums.SocketState ```
    pub fn SetSocketState(self: ?*anyopaque, state: i32) void {
        qtc.QSslSocket_SetSocketState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, state: qabstractsocket_enums.SocketState ```
    pub fn QBaseSetSocketState(self: ?*anyopaque, state: i32) void {
        qtc.QSslSocket_QBaseSetSocketState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void ```
    pub fn OnSetSocketState(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, socketError: qabstractsocket_enums.SocketError ```
    pub fn SetSocketError(self: ?*anyopaque, socketError: i32) void {
        qtc.QSslSocket_SetSocketError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, socketError: qabstractsocket_enums.SocketError ```
    pub fn QBaseSetSocketError(self: ?*anyopaque, socketError: i32) void {
        qtc.QSslSocket_QBaseSetSocketError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, socketError: qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnSetSocketError(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, port: u16 ```
    pub fn SetLocalPort(self: ?*anyopaque, port: u16) void {
        qtc.QSslSocket_SetLocalPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, port: u16 ```
    pub fn QBaseSetLocalPort(self: ?*anyopaque, port: u16) void {
        qtc.QSslSocket_QBaseSetLocalPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, port: u16) callconv(.c) void ```
    pub fn OnSetLocalPort(self: ?*anyopaque, slot: fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QSslSocket_OnSetLocalPort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, address: QtC.QHostAddress ```
    pub fn SetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSslSocket_SetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, address: QtC.QHostAddress ```
    pub fn QBaseSetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSslSocket_QBaseSetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, address: QtC.QHostAddress) callconv(.c) void ```
    pub fn OnSetLocalAddress(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnSetLocalAddress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, port: u16 ```
    pub fn SetPeerPort(self: ?*anyopaque, port: u16) void {
        qtc.QSslSocket_SetPeerPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, port: u16 ```
    pub fn QBaseSetPeerPort(self: ?*anyopaque, port: u16) void {
        qtc.QSslSocket_QBaseSetPeerPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, port: u16) callconv(.c) void ```
    pub fn OnSetPeerPort(self: ?*anyopaque, slot: fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerPort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, address: QtC.QHostAddress ```
    pub fn SetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSslSocket_SetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, address: QtC.QHostAddress ```
    pub fn QBaseSetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSslSocket_QBaseSetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, address: QtC.QHostAddress) callconv(.c) void ```
    pub fn OnSetPeerAddress(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerAddress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, name: []const u8 ```
    pub fn SetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSslSocket_SetPeerName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, name: []const u8 ```
    pub fn QBaseSetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSslSocket_QBaseSetPeerName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, name: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetPeerName(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i64) void {
        qtc.QSslSocket_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag ```
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i64) void {
        qtc.QSslSocket_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void ```
    pub fn OnSetOpenMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSslSocket_OnSetOpenMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, errorString: []const u8 ```
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSslSocket_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, errorString: []const u8 ```
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSslSocket_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, errorString: [*:0]const u8) callconv(.c) void ```
    pub fn OnSetErrorString(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_OnSetErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSslSocket_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSslSocket_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QSslSocket_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QSslSocket_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslSocket_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslSocket_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSslSocket_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSslSocket_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSslSocket_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSslSocket_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSslSocket, slot: fn (self: QtC.QSslSocket, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#dtor.QSslSocket)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslSocket ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslSocket_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsslsocket.html#types
pub const enums = struct {
    pub const SslMode = enum {
        pub const UnencryptedMode: i32 = 0;
        pub const SslClientMode: i32 = 1;
        pub const SslServerMode: i32 = 2;
    };

    pub const PeerVerifyMode = enum {
        pub const VerifyNone: i32 = 0;
        pub const QueryPeer: i32 = 1;
        pub const VerifyPeer: i32 = 2;
        pub const AutoVerifyPeer: i32 = 3;
    };
};
