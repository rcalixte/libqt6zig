const C = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = @import("libqhostaddress.zig").enums;
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
    pub fn New() ?*C.QSslSocket {
        return C.QSslSocket_new();
    }

    /// New2 constructs a new QSslSocket object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QSslSocket {
        return C.QSslSocket_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QSslSocket_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QSslSocket, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QSslSocket_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QSslSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSslSocket_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QSslSocket_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSslSocket_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QSslSocket_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Resume(self: ?*anyopaque) void {
        C.QSslSocket_Resume(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) void ```
    pub fn OnResume(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSslSocket_OnResume(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseResume(self: ?*anyopaque) void {
        C.QSslSocket_QBaseResume(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QSslSocket, hostName: []const u8, port: u16 ```
    pub fn ConnectToHostEncrypted(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QSslSocket_ConnectToHostEncrypted(@ptrCast(self), hostName_str, @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8 ```
    pub fn ConnectToHostEncrypted2(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        const sslPeerName_str = C.struct_libqt_string{
            .len = sslPeerName.len,
            .data = @constCast(sslPeerName.ptr),
        };
        C.QSslSocket_ConnectToHostEncrypted2(@ptrCast(self), hostName_str, @intCast(port), sslPeerName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// ``` self: ?*C.QSslSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: i32 ```
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i64, openMode: i64) bool {
        return C.QSslSocket_SetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor), @intCast(state), @intCast(openMode));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, isize, qabstractsocket_enums.SocketState, i32) callconv(.c) bool ```
    pub fn OnSetSocketDescriptor(self: ?*anyopaque, slot: fn (?*anyopaque, isize, i64, i64) callconv(.c) bool) void {
        C.QSslSocket_OnSetSocketDescriptor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: i32 ```
    pub fn QBaseSetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i64, openMode: i64) bool {
        return C.QSslSocket_QBaseSetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor), @intCast(state), @intCast(openMode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
    ///
    /// ``` self: ?*C.QSslSocket, hostName: []const u8, port: u16, openMode: i32, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, openMode: i64, protocol: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QSslSocket_ConnectToHost(@ptrCast(self), hostName_str, @intCast(port), @intCast(openMode), @intCast(protocol));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, []const u8, u16, i32, qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void ```
    pub fn OnConnectToHost(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, u16, i64, i64) callconv(.c) void) void {
        C.QSslSocket_OnConnectToHost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, hostName: []const u8, port: u16, openMode: i32, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn QBaseConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, openMode: i64, protocol: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QSslSocket_QBaseConnectToHost(@ptrCast(self), hostName_str, @intCast(port), @intCast(openMode), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn DisconnectFromHost(self: ?*anyopaque) void {
        C.QSslSocket_DisconnectFromHost(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) void ```
    pub fn OnDisconnectFromHost(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSslSocket_OnDisconnectFromHost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseDisconnectFromHost(self: ?*anyopaque) void {
        C.QSslSocket_QBaseDisconnectFromHost(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
    ///
    /// ``` self: ?*C.QSslSocket, option: qabstractsocket_enums.SocketOption, value: ?*C.QVariant ```
    pub fn SetSocketOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        C.QSslSocket_SetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, qabstractsocket_enums.SocketOption, ?*C.QVariant) callconv(.c) void ```
    pub fn OnSetSocketOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_OnSetSocketOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, option: qabstractsocket_enums.SocketOption, value: ?*C.QVariant ```
    pub fn QBaseSetSocketOption(self: ?*anyopaque, option: i64, value: ?*anyopaque) void {
        C.QSslSocket_QBaseSetSocketOption(@ptrCast(self), @intCast(option), @ptrCast(value));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// ``` self: ?*C.QSslSocket, option: qabstractsocket_enums.SocketOption ```
    pub fn SocketOption(self: ?*anyopaque, option: i64) ?*C.QVariant {
        return C.QSslSocket_SocketOption(@ptrCast(self), @intCast(option));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, qabstractsocket_enums.SocketOption) callconv(.c) ?*C.QVariant ```
    pub fn OnSocketOption(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) ?*C.QVariant) void {
        C.QSslSocket_OnSocketOption(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, option: qabstractsocket_enums.SocketOption ```
    pub fn QBaseSocketOption(self: ?*anyopaque, option: i64) ?*C.QVariant {
        return C.QSslSocket_QBaseSocketOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#mode)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Mode(self: ?*anyopaque) i64 {
        return C.QSslSocket_Mode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isEncrypted)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsEncrypted(self: ?*anyopaque) bool {
        return C.QSslSocket_IsEncrypted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#protocol)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Protocol(self: ?*anyopaque) i64 {
        return C.QSslSocket_Protocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setProtocol)
    ///
    /// ``` self: ?*C.QSslSocket, protocol: qssl_enums.SslProtocol ```
    pub fn SetProtocol(self: ?*anyopaque, protocol: i64) void {
        C.QSslSocket_SetProtocol(@ptrCast(self), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyMode)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn PeerVerifyMode(self: ?*anyopaque) i64 {
        return C.QSslSocket_PeerVerifyMode(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyMode)
    ///
    /// ``` self: ?*C.QSslSocket, mode: qsslsocket_enums.PeerVerifyMode ```
    pub fn SetPeerVerifyMode(self: ?*anyopaque, mode: i64) void {
        C.QSslSocket_SetPeerVerifyMode(@ptrCast(self), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyDepth)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn PeerVerifyDepth(self: ?*anyopaque) i32 {
        return C.QSslSocket_PeerVerifyDepth(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyDepth)
    ///
    /// ``` self: ?*C.QSslSocket, depth: i32 ```
    pub fn SetPeerVerifyDepth(self: ?*anyopaque, depth: i32) void {
        C.QSslSocket_SetPeerVerifyDepth(@ptrCast(self), @intCast(depth));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyName)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
    pub fn PeerVerifyName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QSslSocket_PeerVerifyName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyName)
    ///
    /// ``` self: ?*C.QSslSocket, hostName: []const u8 ```
    pub fn SetPeerVerifyName(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QSslSocket_SetPeerVerifyName(@ptrCast(self), hostName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return C.QSslSocket_BytesAvailable(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesAvailable(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QSslSocket_OnBytesAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseBytesAvailable(self: ?*anyopaque) i64 {
        return C.QSslSocket_QBaseBytesAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return C.QSslSocket_BytesToWrite(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnBytesToWrite(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QSslSocket_OnBytesToWrite(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseBytesToWrite(self: ?*anyopaque) i64 {
        return C.QSslSocket_QBaseBytesToWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return C.QSslSocket_CanReadLine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) bool ```
    pub fn OnCanReadLine(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QSslSocket_OnCanReadLine(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseCanReadLine(self: ?*anyopaque) bool {
        return C.QSslSocket_QBaseCanReadLine(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Close(self: ?*anyopaque) void {
        C.QSslSocket_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) void ```
    pub fn OnClose(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        C.QSslSocket_OnClose(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseClose(self: ?*anyopaque) void {
        C.QSslSocket_QBaseClose(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn AtEnd(self: ?*anyopaque) bool {
        return C.QSslSocket_AtEnd(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) bool ```
    pub fn OnAtEnd(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QSslSocket_OnAtEnd(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseAtEnd(self: ?*anyopaque) bool {
        return C.QSslSocket_QBaseAtEnd(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// ``` self: ?*C.QSslSocket, size: i64 ```
    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        C.QSslSocket_SetReadBufferSize(@ptrCast(self), @intCast(size));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i64) callconv(.c) void ```
    pub fn OnSetReadBufferSize(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QSslSocket_OnSetReadBufferSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, size: i64 ```
    pub fn QBaseSetReadBufferSize(self: ?*anyopaque, size: i64) void {
        C.QSslSocket_QBaseSetReadBufferSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesAvailable)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn EncryptedBytesAvailable(self: ?*anyopaque) i64 {
        return C.QSslSocket_EncryptedBytesAvailable(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesToWrite)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn EncryptedBytesToWrite(self: ?*anyopaque) i64 {
        return C.QSslSocket_EncryptedBytesToWrite(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslConfiguration)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn SslConfiguration(self: ?*anyopaque) ?*C.QSslConfiguration {
        return C.QSslSocket_SslConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setSslConfiguration)
    ///
    /// ``` self: ?*C.QSslSocket, config: ?*C.QSslConfiguration ```
    pub fn SetSslConfiguration(self: ?*anyopaque, config: ?*anyopaque) void {
        C.QSslSocket_SetSslConfiguration(@ptrCast(self), @ptrCast(config));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificateChain)
    ///
    /// ``` self: ?*C.QSslSocket, localChain: []?*C.QSslCertificate ```
    pub fn SetLocalCertificateChain(self: ?*anyopaque, localChain: []?*C.QSslCertificate) void {
        const localChain_list = C.struct_libqt_list{
            .len = localChain.len,
            .data = @ptrCast(localChain.ptr),
        };
        C.QSslSocket_SetLocalCertificateChain(@ptrCast(self), localChain_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificateChain)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
    pub fn LocalCertificateChain(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QSslCertificate {
        const _arr: C.struct_libqt_list = C.QSslSocket_LocalCertificateChain(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QSslCertificate, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ``` self: ?*C.QSslSocket, certificate: ?*C.QSslCertificate ```
    pub fn SetLocalCertificate(self: ?*anyopaque, certificate: ?*anyopaque) void {
        C.QSslSocket_SetLocalCertificate(@ptrCast(self), @ptrCast(certificate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ``` self: ?*C.QSslSocket, fileName: []const u8 ```
    pub fn SetLocalCertificateWithFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QSslSocket_SetLocalCertificateWithFileName(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#localCertificate)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn LocalCertificate(self: ?*anyopaque) ?*C.QSslCertificate {
        return C.QSslSocket_LocalCertificate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificate)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn PeerCertificate(self: ?*anyopaque) ?*C.QSslCertificate {
        return C.QSslSocket_PeerCertificate(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificateChain)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
    pub fn PeerCertificateChain(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QSslCertificate {
        const _arr: C.struct_libqt_list = C.QSslSocket_PeerCertificateChain(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QSslCertificate, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionCipher)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn SessionCipher(self: ?*anyopaque) ?*C.QSslCipher {
        return C.QSslSocket_SessionCipher(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sessionProtocol)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn SessionProtocol(self: ?*anyopaque) i64 {
        return C.QSslSocket_SessionProtocol(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ocspResponses)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
    pub fn OcspResponses(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QOcspResponse {
        const _arr: C.struct_libqt_list = C.QSslSocket_OcspResponses(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QOcspResponse, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QOcspResponse = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: ?*C.QSslSocket, key: ?*C.QSslKey ```
    pub fn SetPrivateKey(self: ?*anyopaque, key: ?*anyopaque) void {
        C.QSslSocket_SetPrivateKey(@ptrCast(self), @ptrCast(key));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: ?*C.QSslSocket, fileName: []const u8 ```
    pub fn SetPrivateKeyWithFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QSslSocket_SetPrivateKeyWithFileName(@ptrCast(self), fileName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#privateKey)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn PrivateKey(self: ?*anyopaque) ?*C.QSslKey {
        return C.QSslSocket_PrivateKey(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// ``` self: ?*C.QSslSocket, msecs: i32 ```
    pub fn WaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QSslSocket_WaitForConnected(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForConnected(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QSslSocket_OnWaitForConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, msecs: i32 ```
    pub fn QBaseWaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QSslSocket_QBaseWaitForConnected(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn WaitForEncrypted(self: ?*anyopaque) bool {
        return C.QSslSocket_WaitForEncrypted(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// ``` self: ?*C.QSslSocket, msecs: i32 ```
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return C.QSslSocket_WaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForReadyRead(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QSslSocket_OnWaitForReadyRead(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, msecs: i32 ```
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return C.QSslSocket_QBaseWaitForReadyRead(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// ``` self: ?*C.QSslSocket, msecs: i32 ```
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return C.QSslSocket_WaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QSslSocket_OnWaitForBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, msecs: i32 ```
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return C.QSslSocket_QBaseWaitForBytesWritten(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// ``` self: ?*C.QSslSocket, msecs: i32 ```
    pub fn WaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QSslSocket_WaitForDisconnected(@ptrCast(self), @intCast(msecs));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i32) callconv(.c) bool ```
    pub fn OnWaitForDisconnected(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) bool) void {
        C.QSslSocket_OnWaitForDisconnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, msecs: i32 ```
    pub fn QBaseWaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return C.QSslSocket_QBaseWaitForDisconnected(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslHandshakeErrors)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
    pub fn SslHandshakeErrors(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QSslError {
        const _arr: C.struct_libqt_list = C.QSslSocket_SslHandshakeErrors(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QSslError, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QSslError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportsSsl)
    ///
    ///
    pub fn SupportsSsl() bool {
        return C.QSslSocket_SupportsSsl();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionNumber)
    ///
    ///
    pub fn SslLibraryVersionNumber() i64 {
        return C.QSslSocket_SslLibraryVersionNumber();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionString)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SslLibraryVersionString(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QSslSocket_SslLibraryVersionString();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionNumber)
    ///
    ///
    pub fn SslLibraryBuildVersionNumber() i64 {
        return C.QSslSocket_SslLibraryBuildVersionNumber();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionString)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SslLibraryBuildVersionString(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QSslSocket_SslLibraryBuildVersionString();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#availableBackends)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn AvailableBackends(allocator: std.mem.Allocator) [][]const u8 {
        const _arr: C.struct_libqt_list = C.QSslSocket_AvailableBackends();
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#activeBackend)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ActiveBackend(allocator: std.mem.Allocator) []const u8 {
        const _str = C.QSslSocket_ActiveBackend();
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setActiveBackend)
    ///
    /// ``` backendName: []const u8 ```
    pub fn SetActiveBackend(backendName: []const u8) bool {
        const backendName_str = C.struct_libqt_string{
            .len = backendName.len,
            .data = @constCast(backendName.ptr),
        };
        return C.QSslSocket_SetActiveBackend(backendName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SupportedProtocols(allocator: std.mem.Allocator) []i64 {
        const _arr: C.struct_libqt_list = C.QSslSocket_SupportedProtocols();
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(qssl_enums.SslProtocol, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]qssl_enums.SslProtocol = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
    ///
    /// ``` protocol: qssl_enums.SslProtocol ```
    pub fn IsProtocolSupported(protocol: i64) bool {
        return C.QSslSocket_IsProtocolSupported(@intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ImplementedClasses(allocator: std.mem.Allocator) []i64 {
        const _arr: C.struct_libqt_list = C.QSslSocket_ImplementedClasses();
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(qssl_enums.ImplementedClass, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]qssl_enums.ImplementedClass = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
    ///
    /// ``` cl: qssl_enums.ImplementedClass ```
    pub fn IsClassImplemented(cl: i64) bool {
        return C.QSslSocket_IsClassImplemented(@intCast(cl));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn SupportedFeatures(allocator: std.mem.Allocator) []i64 {
        const _arr: C.struct_libqt_list = C.QSslSocket_SupportedFeatures();
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(qssl_enums.SupportedFeature, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]qssl_enums.SupportedFeature = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
    ///
    /// ``` feat: qssl_enums.SupportedFeature ```
    pub fn IsFeatureSupported(feat: i64) bool {
        return C.QSslSocket_IsFeatureSupported(@intCast(feat));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
    ///
    /// ``` self: ?*C.QSslSocket, errors: []?*C.QSslError ```
    pub fn IgnoreSslErrors(self: ?*anyopaque, errors: []?*C.QSslError) void {
        const errors_list = C.struct_libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        C.QSslSocket_IgnoreSslErrors(@ptrCast(self), errors_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#continueInterruptedHandshake)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn ContinueInterruptedHandshake(self: ?*anyopaque) void {
        C.QSslSocket_ContinueInterruptedHandshake(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startClientEncryption)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn StartClientEncryption(self: ?*anyopaque) void {
        C.QSslSocket_StartClientEncryption(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#startServerEncryption)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn StartServerEncryption(self: ?*anyopaque) void {
        C.QSslSocket_StartServerEncryption(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IgnoreSslErrors2(self: ?*anyopaque) void {
        C.QSslSocket_IgnoreSslErrors2(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Encrypted(self: ?*anyopaque) void {
        C.QSslSocket_Encrypted(@ptrCast(self));
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket) callconv(.c) void ```
    pub fn OnEncrypted(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_Connect_Encrypted(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
    ///
    /// ``` self: ?*C.QSslSocket, errorVal: ?*C.QSslError ```
    pub fn PeerVerifyError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        C.QSslSocket_PeerVerifyError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QSslError) callconv(.c) void ```
    pub fn OnPeerVerifyError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_Connect_PeerVerifyError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
    ///
    /// ``` self: ?*C.QSslSocket, errors: []?*C.QSslError ```
    pub fn SslErrors(self: ?*anyopaque, errors: []?*C.QSslError) void {
        const errors_list = C.struct_libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        C.QSslSocket_SslErrors(@ptrCast(self), errors_list);
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, []?*C.QSslError) callconv(.c) void ```
    pub fn OnSslErrors(self: ?*anyopaque, slot: fn (?*anyopaque, []?*C.QSslError) callconv(.c) void) void {
        C.QSslSocket_Connect_SslErrors(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
    ///
    /// ``` self: ?*C.QSslSocket, newMode: qsslsocket_enums.SslMode ```
    pub fn ModeChanged(self: ?*anyopaque, newMode: i64) void {
        C.QSslSocket_ModeChanged(@ptrCast(self), @intCast(newMode));
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, qsslsocket_enums.SslMode) callconv(.c) void ```
    pub fn OnModeChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QSslSocket_Connect_ModeChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
    ///
    /// ``` self: ?*C.QSslSocket, totalBytes: i64 ```
    pub fn EncryptedBytesWritten(self: ?*anyopaque, totalBytes: i64) void {
        C.QSslSocket_EncryptedBytesWritten(@ptrCast(self), @intCast(totalBytes));
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i64) callconv(.c) void ```
    pub fn OnEncryptedBytesWritten(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QSslSocket_Connect_EncryptedBytesWritten(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ``` self: ?*C.QSslSocket, authenticator: ?*C.QSslPreSharedKeyAuthenticator ```
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        C.QSslSocket_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(authenticator));
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QSslPreSharedKeyAuthenticator) callconv(.c) void ```
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn NewSessionTicketReceived(self: ?*anyopaque) void {
        C.QSslSocket_NewSessionTicketReceived(@ptrCast(self));
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket) callconv(.c) void ```
    pub fn OnNewSessionTicketReceived(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_Connect_NewSessionTicketReceived(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
    ///
    /// ``` self: ?*C.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8 ```
    pub fn AlertSent(self: ?*anyopaque, level: i64, typeVal: i64, description: []const u8) void {
        const description_str = C.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        C.QSslSocket_AlertSent(@ptrCast(self), @intCast(level), @intCast(typeVal), description_str);
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, qssl_enums.AlertLevel, qssl_enums.AlertType, []const u8) callconv(.c) void ```
    pub fn OnAlertSent(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64, []const u8) callconv(.c) void) void {
        C.QSslSocket_Connect_AlertSent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
    ///
    /// ``` self: ?*C.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8 ```
    pub fn AlertReceived(self: ?*anyopaque, level: i64, typeVal: i64, description: []const u8) void {
        const description_str = C.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        C.QSslSocket_AlertReceived(@ptrCast(self), @intCast(level), @intCast(typeVal), description_str);
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, qssl_enums.AlertLevel, qssl_enums.AlertType, []const u8) callconv(.c) void ```
    pub fn OnAlertReceived(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64, []const u8) callconv(.c) void) void {
        C.QSslSocket_Connect_AlertReceived(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
    ///
    /// ``` self: ?*C.QSslSocket, errorVal: ?*C.QSslError ```
    pub fn HandshakeInterruptedOnError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        C.QSslSocket_HandshakeInterruptedOnError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QSslError) callconv(.c) void ```
    pub fn OnHandshakeInterruptedOnError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_Connect_HandshakeInterruptedOnError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#readData)
    ///
    /// ``` self: ?*C.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QSslSocket_ReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, []const u8, i64) callconv(.c) i64 ```
    pub fn OnReadData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QSslSocket_OnReadData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QSslSocket_QBaseReadData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// ``` self: ?*C.QSslSocket, maxSize: i64 ```
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QSslSocket_SkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i64) callconv(.c) i64 ```
    pub fn OnSkipData(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) i64) void {
        C.QSslSocket_OnSkipData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, maxSize: i64 ```
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QSslSocket_QBaseSkipData(@ptrCast(self), @intCast(maxSize));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// ``` self: ?*C.QSslSocket, data: []const u8, lenVal: i64 ```
    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QSslSocket_WriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, []const u8, i64) callconv(.c) i64 ```
    pub fn OnWriteData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QSslSocket_OnWriteData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslSocket, data: []const u8, lenVal: i64 ```
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QSslSocket_QBaseWriteData(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSslSocket_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QSslSocket_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QSslSocket, hostName: []const u8, port: u16, mode: i32 ```
    pub fn ConnectToHostEncrypted3(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QSslSocket_ConnectToHostEncrypted3(@ptrCast(self), hostName_str, @intCast(port), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QSslSocket, hostName: []const u8, port: u16, mode: i32, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn ConnectToHostEncrypted4(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i64, protocol: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        C.QSslSocket_ConnectToHostEncrypted4(@ptrCast(self), hostName_str, @intCast(port), @intCast(mode), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i32 ```
    pub fn ConnectToHostEncrypted42(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        const sslPeerName_str = C.struct_libqt_string{
            .len = sslPeerName.len,
            .data = @constCast(sslPeerName.ptr),
        };
        C.QSslSocket_ConnectToHostEncrypted42(@ptrCast(self), hostName_str, @intCast(port), sslPeerName_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ``` self: ?*C.QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i32, protocol: qabstractsocket_enums.NetworkLayerProtocol ```
    pub fn ConnectToHostEncrypted5(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i64, protocol: i64) void {
        const hostName_str = C.struct_libqt_string{
            .len = hostName.len,
            .data = @constCast(hostName.ptr),
        };
        const sslPeerName_str = C.struct_libqt_string{
            .len = sslPeerName.len,
            .data = @constCast(sslPeerName.ptr),
        };
        C.QSslSocket_ConnectToHostEncrypted5(@ptrCast(self), hostName_str, @intCast(port), sslPeerName_str, @intCast(mode), @intCast(protocol));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ``` self: ?*C.QSslSocket, fileName: []const u8, format: qssl_enums.EncodingFormat ```
    pub fn SetLocalCertificate2(self: ?*anyopaque, fileName: []const u8, format: i64) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QSslSocket_SetLocalCertificate2(@ptrCast(self), fileName_str, @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: ?*C.QSslSocket, fileName: []const u8, algorithm: qssl_enums.KeyAlgorithm ```
    pub fn SetPrivateKey2(self: ?*anyopaque, fileName: []const u8, algorithm: i64) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QSslSocket_SetPrivateKey2(@ptrCast(self), fileName_str, @intCast(algorithm));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: ?*C.QSslSocket, fileName: []const u8, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat ```
    pub fn SetPrivateKey3(self: ?*anyopaque, fileName: []const u8, algorithm: i64, format: i64) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        C.QSslSocket_SetPrivateKey3(@ptrCast(self), fileName_str, @intCast(algorithm), @intCast(format));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ``` self: ?*C.QSslSocket, fileName: []const u8, algorithm: qssl_enums.KeyAlgorithm, format: qssl_enums.EncodingFormat, passPhrase: []u8 ```
    pub fn SetPrivateKey4(self: ?*anyopaque, fileName: []const u8, algorithm: i64, format: i64, passPhrase: []u8) void {
        const fileName_str = C.struct_libqt_string{
            .len = fileName.len,
            .data = @constCast(fileName.ptr),
        };
        const passPhrase_str = C.struct_libqt_string{
            .len = passPhrase.len,
            .data = @constCast(passPhrase.ptr),
        };
        C.QSslSocket_SetPrivateKey4(@ptrCast(self), fileName_str, @intCast(algorithm), @intCast(format), passPhrase_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ``` self: ?*C.QSslSocket, msecs: i32 ```
    pub fn WaitForEncrypted1(self: ?*anyopaque, msecs: i32) bool {
        return C.QSslSocket_WaitForEncrypted1(@ptrCast(self), @intCast(msecs));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
    ///
    /// ``` backendName: []const u8, allocator: std.mem.Allocator ```
    pub fn SupportedProtocols1(backendName: []const u8, allocator: std.mem.Allocator) []i64 {
        const backendName_str = C.struct_libqt_string{
            .len = backendName.len,
            .data = @constCast(backendName.ptr),
        };
        const _arr: C.struct_libqt_list = C.QSslSocket_SupportedProtocols1(backendName_str);
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(qssl_enums.SslProtocol, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]qssl_enums.SslProtocol = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
    ///
    /// ``` protocol: qssl_enums.SslProtocol, backendName: []const u8 ```
    pub fn IsProtocolSupported2(protocol: i64, backendName: []const u8) bool {
        const backendName_str = C.struct_libqt_string{
            .len = backendName.len,
            .data = @constCast(backendName.ptr),
        };
        return C.QSslSocket_IsProtocolSupported2(@intCast(protocol), backendName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
    ///
    /// ``` backendName: []const u8, allocator: std.mem.Allocator ```
    pub fn ImplementedClasses1(backendName: []const u8, allocator: std.mem.Allocator) []i64 {
        const backendName_str = C.struct_libqt_string{
            .len = backendName.len,
            .data = @constCast(backendName.ptr),
        };
        const _arr: C.struct_libqt_list = C.QSslSocket_ImplementedClasses1(backendName_str);
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(qssl_enums.ImplementedClass, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]qssl_enums.ImplementedClass = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
    ///
    /// ``` cl: qssl_enums.ImplementedClass, backendName: []const u8 ```
    pub fn IsClassImplemented2(cl: i64, backendName: []const u8) bool {
        const backendName_str = C.struct_libqt_string{
            .len = backendName.len,
            .data = @constCast(backendName.ptr),
        };
        return C.QSslSocket_IsClassImplemented2(@intCast(cl), backendName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
    ///
    /// ``` backendName: []const u8, allocator: std.mem.Allocator ```
    pub fn SupportedFeatures1(backendName: []const u8, allocator: std.mem.Allocator) []i64 {
        const backendName_str = C.struct_libqt_string{
            .len = backendName.len,
            .data = @constCast(backendName.ptr),
        };
        const _arr: C.struct_libqt_list = C.QSslSocket_SupportedFeatures1(backendName_str);
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(qssl_enums.SupportedFeature, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]qssl_enums.SupportedFeature = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
    ///
    /// ``` feat: qssl_enums.SupportedFeature, backendName: []const u8 ```
    pub fn IsFeatureSupported2(feat: i64, backendName: []const u8) bool {
        const backendName_str = C.struct_libqt_string{
            .len = backendName.len,
            .data = @constCast(backendName.ptr),
        };
        return C.QSslSocket_IsFeatureSupported2(@intCast(feat), backendName_str);
    }

    /// Inherited from QTcpSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ``` self: ?*C.QSslSocket, addr: qhostaddress_enums.SpecialAddress, port: u16 ```
    pub fn Bind2(self: ?*anyopaque, addr: i64, port: u16) bool {
        return C.QTcpSocket_Bind2(@ptrCast(self), @intCast(addr), @intCast(port));
    }

    /// Inherited from QTcpSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ``` self: ?*C.QSslSocket, addr: qhostaddress_enums.SpecialAddress, port: u16, mode: i32 ```
    pub fn Bind3(self: ?*anyopaque, addr: i64, port: u16, mode: i64) bool {
        return C.QTcpSocket_Bind3(@ptrCast(self), @intCast(addr), @intCast(port), @intCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn PauseMode(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_PauseMode(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ``` self: ?*C.QSslSocket, pauseMode: i32 ```
    pub fn SetPauseMode(self: ?*anyopaque, pauseMode: i64) void {
        C.QAbstractSocket_SetPauseMode(@ptrCast(self), @intCast(pauseMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ``` self: ?*C.QSslSocket, address: ?*C.QHostAddress, port: u16 ```
    pub fn ConnectToHost2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        C.QAbstractSocket_ConnectToHost2(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return C.QAbstractSocket_IsValid(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn LocalPort(self: ?*anyopaque) u16 {
        return C.QAbstractSocket_LocalPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn LocalAddress(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QAbstractSocket_LocalAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn PeerPort(self: ?*anyopaque) u16 {
        return C.QAbstractSocket_PeerPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn PeerAddress(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QAbstractSocket_PeerAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket ```
    pub fn ReadBufferSize(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_ReadBufferSize(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Abort(self: ?*anyopaque) void {
        C.QAbstractSocket_Abort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn SocketType(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_SocketType(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_State(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Error(self: ?*anyopaque) i64 {
        return C.QAbstractSocket_Error(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Flush(self: ?*anyopaque) bool {
        return C.QAbstractSocket_Flush(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ``` self: ?*C.QSslSocket, networkProxy: ?*C.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        C.QAbstractSocket_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Proxy(self: ?*anyopaque) ?*C.QNetworkProxy {
        return C.QAbstractSocket_Proxy(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket, tag: []const u8 ```
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
    /// ``` self: ?*C.QSslSocket ```
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
    /// ``` self: ?*C.QSslSocket ```
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
    /// ``` self: ?*C.QSslSocket ```
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
    /// ``` self: ?*C.QSslSocket, param1: qabstractsocket_enums.SocketState ```
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
    /// ``` self: ?*C.QSslSocket, param1: qabstractsocket_enums.SocketError ```
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
    /// ``` self: ?*C.QSslSocket, proxy: ?*C.QNetworkProxy, authenticator: ?*C.QAuthenticator ```
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
    /// ``` self: ?*C.QSslSocket, port: u16 ```
    pub fn Bind1(self: ?*anyopaque, port: u16) bool {
        return C.QAbstractSocket_Bind1(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ``` self: ?*C.QSslSocket, port: u16, mode: i32 ```
    pub fn Bind22(self: ?*anyopaque, port: u16, mode: i64) bool {
        return C.QAbstractSocket_Bind22(@ptrCast(self), @intCast(port), @intCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ``` self: ?*C.QSslSocket, address: ?*C.QHostAddress, port: u16, mode: i32 ```
    pub fn ConnectToHost3(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) void {
        C.QAbstractSocket_ConnectToHost3(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn OpenMode(self: ?*anyopaque) i64 {
        return C.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ``` self: ?*C.QSslSocket, enabled: bool ```
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        C.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return C.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsOpen(self: ?*anyopaque) bool {
        return C.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsReadable(self: ?*anyopaque) bool {
        return C.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsWritable(self: ?*anyopaque) bool {
        return C.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return C.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return C.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return C.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ``` self: ?*C.QSslSocket, channel: i32 ```
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_SetCurrentReadChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return C.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ``` self: ?*C.QSslSocket, channel: i32 ```
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        C.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @intCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: ?*C.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Read(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ``` self: ?*C.QSslSocket, maxlen: i64, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket ```
    pub fn StartTransaction(self: ?*anyopaque) void {
        C.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn CommitTransaction(self: ?*anyopaque) void {
        C.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        C.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return C.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QSslSocket, data: []const u8, lenVal: i64 ```
    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Write(@ptrCast(self), data_Cstring, @intCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QSslSocket, data: []const u8 ```
    pub fn WriteWithData(self: ?*anyopaque, data: []const u8) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_WriteWithData(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ``` self: ?*C.QSslSocket, data: []u8 ```
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
    /// ``` self: ?*C.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QIODevice_Peek(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ``` self: ?*C.QSslSocket, maxlen: i64, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket, maxSize: i64 ```
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return C.QIODevice_Skip(@ptrCast(self), @intCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ``` self: ?*C.QSslSocket, c: i8 ```
    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        C.QIODevice_UngetChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ``` self: ?*C.QSslSocket, c: i8 ```
    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return C.QIODevice_PutChar(@ptrCast(self), @intCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ``` self: ?*C.QSslSocket, c: []const u8 ```
    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        const c_Cstring = @constCast(c.ptr);
        return C.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket ```
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
    /// ``` self: ?*C.QSslSocket, channel: i32 ```
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
    /// ``` self: ?*C.QSslSocket, bytes: i64 ```
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
    /// ``` self: ?*C.QSslSocket, channel: i32, bytes: i64 ```
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
    /// ``` self: ?*C.QSslSocket ```
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
    /// ``` self: ?*C.QSslSocket ```
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
    /// ``` self: ?*C.QSslSocket, maxlen: i64, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QSslSocket, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QSslSocket, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSslSocket, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QSslSocket, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QSslSocket, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QSslSocket, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QSslSocket, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QSslSocket ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QSslSocket, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QSslSocket, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QSslSocket, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslSocket ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSslSocket ```
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
    /// ``` self: ?*C.QSslSocket ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QSslSocket, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSslSocket, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QSslSocket, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSslSocket, param1: ?*C.QObject ```
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, address: ?*C.QHostAddress, port: u16, mode: i32 ```
    pub fn Bind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) bool {
        return C.QSslSocket_Bind(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, address: ?*C.QHostAddress, port: u16, mode: i32 ```
    pub fn QBaseBind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i64) bool {
        return C.QSslSocket_QBaseBind(@ptrCast(self), @ptrCast(address), @intCast(port), @intCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QHostAddress, u16, i32) callconv(.c) bool ```
    pub fn OnBind(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, u16, i64) callconv(.c) bool) void {
        C.QSslSocket_OnBind(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return C.QSslSocket_SocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseSocketDescriptor(self: ?*anyopaque) isize {
        return C.QSslSocket_QBaseSocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) isize ```
    pub fn OnSocketDescriptor(self: ?*anyopaque, slot: fn () callconv(.c) isize) void {
        C.QSslSocket_OnSocketDescriptor(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn IsSequential(self: ?*anyopaque) bool {
        return C.QSslSocket_IsSequential(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseIsSequential(self: ?*anyopaque) bool {
        return C.QSslSocket_QBaseIsSequential(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) bool ```
    pub fn OnIsSequential(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QSslSocket_OnIsSequential(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QSslSocket_ReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, data: []const u8, maxlen: i64 ```
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        const data_Cstring = @constCast(data.ptr);
        return C.QSslSocket_QBaseReadLineData(@ptrCast(self), data_Cstring, @intCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, []const u8, i64) callconv(.c) i64 ```
    pub fn OnReadLineData(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8, i64) callconv(.c) i64) void {
        C.QSslSocket_OnReadLineData(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, mode: i32 ```
    pub fn Open(self: ?*anyopaque, mode: i64) bool {
        return C.QSslSocket_Open(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, mode: i32 ```
    pub fn QBaseOpen(self: ?*anyopaque, mode: i64) bool {
        return C.QSslSocket_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i32) callconv(.c) bool ```
    pub fn OnOpen(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QSslSocket_OnOpen(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Pos(self: ?*anyopaque) i64 {
        return C.QSslSocket_Pos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBasePos(self: ?*anyopaque) i64 {
        return C.QSslSocket_QBasePos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnPos(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QSslSocket_OnPos(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Size(self: ?*anyopaque) i64 {
        return C.QSslSocket_Size(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseSize(self: ?*anyopaque) i64 {
        return C.QSslSocket_QBaseSize(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) i64 ```
    pub fn OnSize(self: ?*anyopaque, slot: fn () callconv(.c) i64) void {
        C.QSslSocket_OnSize(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, pos: i64 ```
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return C.QSslSocket_Seek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, pos: i64 ```
    pub fn QBaseSeek(self: ?*anyopaque, pos: i64) bool {
        return C.QSslSocket_QBaseSeek(@ptrCast(self), @intCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i64) callconv(.c) bool ```
    pub fn OnSeek(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) bool) void {
        C.QSslSocket_OnSeek(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Reset(self: ?*anyopaque) bool {
        return C.QSslSocket_Reset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseReset(self: ?*anyopaque) bool {
        return C.QSslSocket_QBaseReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) bool ```
    pub fn OnReset(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QSslSocket_OnReset(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSslSocket_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSslSocket_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSslSocket_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSslSocket_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSslSocket_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSslSocket_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslSocket_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslSocket_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslSocket_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslSocket_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslSocket_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslSocket_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSslSocket_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSslSocket_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSslSocket_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSslSocket_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, state: qabstractsocket_enums.SocketState ```
    pub fn SetSocketState(self: ?*anyopaque, state: i64) void {
        C.QSslSocket_SetSocketState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, state: qabstractsocket_enums.SocketState ```
    pub fn QBaseSetSocketState(self: ?*anyopaque, state: i64) void {
        C.QSslSocket_QBaseSetSocketState(@ptrCast(self), @intCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, qabstractsocket_enums.SocketState) callconv(.c) void ```
    pub fn OnSetSocketState(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QSslSocket_OnSetSocketState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, socketError: qabstractsocket_enums.SocketError ```
    pub fn SetSocketError(self: ?*anyopaque, socketError: i64) void {
        C.QSslSocket_SetSocketError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, socketError: qabstractsocket_enums.SocketError ```
    pub fn QBaseSetSocketError(self: ?*anyopaque, socketError: i64) void {
        C.QSslSocket_QBaseSetSocketError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnSetSocketError(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QSslSocket_OnSetSocketError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, port: u16 ```
    pub fn SetLocalPort(self: ?*anyopaque, port: u16) void {
        C.QSslSocket_SetLocalPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, port: u16 ```
    pub fn QBaseSetLocalPort(self: ?*anyopaque, port: u16) void {
        C.QSslSocket_QBaseSetLocalPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, u16) callconv(.c) void ```
    pub fn OnSetLocalPort(self: ?*anyopaque, slot: fn (?*anyopaque, u16) callconv(.c) void) void {
        C.QSslSocket_OnSetLocalPort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, address: ?*C.QHostAddress ```
    pub fn SetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QSslSocket_SetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, address: ?*C.QHostAddress ```
    pub fn QBaseSetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QSslSocket_QBaseSetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QHostAddress) callconv(.c) void ```
    pub fn OnSetLocalAddress(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_OnSetLocalAddress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, port: u16 ```
    pub fn SetPeerPort(self: ?*anyopaque, port: u16) void {
        C.QSslSocket_SetPeerPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, port: u16 ```
    pub fn QBaseSetPeerPort(self: ?*anyopaque, port: u16) void {
        C.QSslSocket_QBaseSetPeerPort(@ptrCast(self), @intCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, u16) callconv(.c) void ```
    pub fn OnSetPeerPort(self: ?*anyopaque, slot: fn (?*anyopaque, u16) callconv(.c) void) void {
        C.QSslSocket_OnSetPeerPort(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, address: ?*C.QHostAddress ```
    pub fn SetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QSslSocket_SetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, address: ?*C.QHostAddress ```
    pub fn QBaseSetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        C.QSslSocket_QBaseSetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QHostAddress) callconv(.c) void ```
    pub fn OnSetPeerAddress(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslSocket_OnSetPeerAddress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractSocket
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, name: []const u8 ```
    pub fn SetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QSslSocket_SetPeerName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, name: []const u8 ```
    pub fn QBaseSetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = C.struct_libqt_string{
            .len = name.len,
            .data = @constCast(name.ptr),
        };
        C.QSslSocket_QBaseSetPeerName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, []const u8) callconv(.c) void ```
    pub fn OnSetPeerName(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QSslSocket_OnSetPeerName(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, openMode: i32 ```
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i64) void {
        C.QSslSocket_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, openMode: i32 ```
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i64) void {
        C.QSslSocket_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, i32) callconv(.c) void ```
    pub fn OnSetOpenMode(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QSslSocket_OnSetOpenMode(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QIODevice
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, errorString: []const u8 ```
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QSslSocket_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, errorString: []const u8 ```
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = C.struct_libqt_string{
            .len = errorString.len,
            .data = @constCast(errorString.ptr),
        };
        C.QSslSocket_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, []const u8) callconv(.c) void ```
    pub fn OnSetErrorString(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        C.QSslSocket_OnSetErrorString(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QSslSocket_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QSslSocket_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QSslSocket_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSslSocket_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSslSocket_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QSslSocket_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSslSocket_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSslSocket_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QSslSocket_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSslSocket_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSslSocket_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslSocket, slot: fn (?*C.QSslSocket, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSslSocket_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QSslSocket ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QSslSocket_Delete(@ptrCast(self));
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
