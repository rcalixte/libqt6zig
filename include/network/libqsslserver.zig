const C = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("libqssl.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsslserver.html
pub const qsslserver = struct {
    /// New constructs a new QSslServer object.
    ///
    ///
    pub fn New() ?*C.QSslServer {
        return C.QSslServer_new();
    }

    /// New2 constructs a new QSslServer object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QSslServer {
        return C.QSslServer_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QSslServer_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QSslServer, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QSslServer_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QSslServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSslServer_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QSslServer_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSslServer_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QSslServer_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setSslConfiguration)
    ///
    /// ``` self: ?*C.QSslServer, sslConfiguration: ?*C.QSslConfiguration ```
    pub fn SetSslConfiguration(self: ?*anyopaque, sslConfiguration: ?*anyopaque) void {
        C.QSslServer_SetSslConfiguration(@ptrCast(self), @ptrCast(sslConfiguration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslConfiguration)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn SslConfiguration(self: ?*anyopaque) ?*C.QSslConfiguration {
        return C.QSslServer_SslConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setHandshakeTimeout)
    ///
    /// ``` self: ?*C.QSslServer, timeout: i32 ```
    pub fn SetHandshakeTimeout(self: ?*anyopaque, timeout: i32) void {
        C.QSslServer_SetHandshakeTimeout(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeTimeout)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn HandshakeTimeout(self: ?*anyopaque) i32 {
        return C.QSslServer_HandshakeTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QSslSocket, errors: []?*C.QSslError ```
    pub fn SslErrors(self: ?*anyopaque, socket: ?*anyopaque, errors: []?*C.QSslError) void {
        const errors_list = C.struct_libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        C.QSslServer_SslErrors(@ptrCast(self), @ptrCast(socket), errors_list);
    }

    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QSslSocket, []?*C.QSslError) callconv(.c) void ```
    pub fn OnSslErrors(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []?*C.QSslError) callconv(.c) void) void {
        C.QSslServer_Connect_SslErrors(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QSslSocket, errorVal: ?*C.QSslError ```
    pub fn PeerVerifyError(self: ?*anyopaque, socket: ?*anyopaque, errorVal: ?*anyopaque) void {
        C.QSslServer_PeerVerifyError(@ptrCast(self), @ptrCast(socket), @ptrCast(errorVal));
    }

    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QSslSocket, ?*C.QSslError) callconv(.c) void ```
    pub fn OnPeerVerifyError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_Connect_PeerVerifyError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QSslSocket, errorVal: qabstractsocket_enums.SocketError ```
    pub fn ErrorOccurred(self: ?*anyopaque, socket: ?*anyopaque, errorVal: i64) void {
        C.QSslServer_ErrorOccurred(@ptrCast(self), @ptrCast(socket), @intCast(errorVal));
    }

    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QSslSocket, qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        C.QSslServer_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QSslSocket, authenticator: ?*C.QSslPreSharedKeyAuthenticator ```
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, socket: ?*anyopaque, authenticator: ?*anyopaque) void {
        C.QSslServer_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(socket), @ptrCast(authenticator));
    }

    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QSslSocket, ?*C.QSslPreSharedKeyAuthenticator) callconv(.c) void ```
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8 ```
    pub fn AlertSent(self: ?*anyopaque, socket: ?*anyopaque, level: i64, typeVal: i64, description: []const u8) void {
        const description_str = C.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        C.QSslServer_AlertSent(@ptrCast(self), @ptrCast(socket), @intCast(level), @intCast(typeVal), description_str);
    }

    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QSslSocket, qssl_enums.AlertLevel, qssl_enums.AlertType, []const u8) callconv(.c) void ```
    pub fn OnAlertSent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, i64, []const u8) callconv(.c) void) void {
        C.QSslServer_Connect_AlertSent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8 ```
    pub fn AlertReceived(self: ?*anyopaque, socket: ?*anyopaque, level: i64, typeVal: i64, description: []const u8) void {
        const description_str = C.struct_libqt_string{
            .len = description.len,
            .data = @constCast(description.ptr),
        };
        C.QSslServer_AlertReceived(@ptrCast(self), @ptrCast(socket), @intCast(level), @intCast(typeVal), description_str);
    }

    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QSslSocket, qssl_enums.AlertLevel, qssl_enums.AlertType, []const u8) callconv(.c) void ```
    pub fn OnAlertReceived(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, i64, []const u8) callconv(.c) void) void {
        C.QSslServer_Connect_AlertReceived(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QSslSocket, errorVal: ?*C.QSslError ```
    pub fn HandshakeInterruptedOnError(self: ?*anyopaque, socket: ?*anyopaque, errorVal: ?*anyopaque) void {
        C.QSslServer_HandshakeInterruptedOnError(@ptrCast(self), @ptrCast(socket), @ptrCast(errorVal));
    }

    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QSslSocket, ?*C.QSslError) callconv(.c) void ```
    pub fn OnHandshakeInterruptedOnError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_Connect_HandshakeInterruptedOnError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QSslSocket ```
    pub fn StartedEncryptionHandshake(self: ?*anyopaque, socket: ?*anyopaque) void {
        C.QSslServer_StartedEncryptionHandshake(@ptrCast(self), @ptrCast(socket));
    }

    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QSslSocket) callconv(.c) void ```
    pub fn OnStartedEncryptionHandshake(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_Connect_StartedEncryptionHandshake(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
    ///
    /// ``` self: ?*C.QSslServer, socket: isize ```
    pub fn IncomingConnection(self: ?*anyopaque, socket: isize) void {
        C.QSslServer_IncomingConnection(@ptrCast(self), @intCast(socket));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, isize) callconv(.c) void ```
    pub fn OnIncomingConnection(self: ?*anyopaque, slot: fn (?*anyopaque, isize) callconv(.c) void) void {
        C.QSslServer_OnIncomingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSslServer, socket: isize ```
    pub fn QBaseIncomingConnection(self: ?*anyopaque, socket: isize) void {
        C.QSslServer_QBaseIncomingConnection(@ptrCast(self), @intCast(socket));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSslServer_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QSslServer_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn Listen(self: ?*anyopaque) bool {
        return C.QTcpServer_Listen(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn Close(self: ?*anyopaque) void {
        C.QTcpServer_Close(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn IsListening(self: ?*anyopaque) bool {
        return C.QTcpServer_IsListening(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
    ///
    /// ``` self: ?*C.QSslServer, numConnections: i32 ```
    pub fn SetMaxPendingConnections(self: ?*anyopaque, numConnections: i32) void {
        C.QTcpServer_SetMaxPendingConnections(@ptrCast(self), @intCast(numConnections));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn MaxPendingConnections(self: ?*anyopaque) i32 {
        return C.QTcpServer_MaxPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
    ///
    /// ``` self: ?*C.QSslServer, size: i32 ```
    pub fn SetListenBacklogSize(self: ?*anyopaque, size: i32) void {
        C.QTcpServer_SetListenBacklogSize(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn ListenBacklogSize(self: ?*anyopaque) i32 {
        return C.QTcpServer_ListenBacklogSize(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn ServerPort(self: ?*anyopaque) u16 {
        return C.QTcpServer_ServerPort(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn ServerAddress(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QTcpServer_ServerAddress(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return C.QTcpServer_SocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
    ///
    /// ``` self: ?*C.QSslServer, socketDescriptor: isize ```
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize) bool {
        return C.QTcpServer_SetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn WaitForNewConnection(self: ?*anyopaque) bool {
        return C.QTcpServer_WaitForNewConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn ServerError(self: ?*anyopaque) i64 {
        return C.QTcpServer_ServerError(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
    ///
    /// ``` self: ?*C.QSslServer, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTcpServer_ErrorString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn PauseAccepting(self: ?*anyopaque) void {
        C.QTcpServer_PauseAccepting(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn ResumeAccepting(self: ?*anyopaque) void {
        C.QTcpServer_ResumeAccepting(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
    ///
    /// ``` self: ?*C.QSslServer, networkProxy: ?*C.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        C.QTcpServer_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn Proxy(self: ?*anyopaque) ?*C.QNetworkProxy {
        return C.QTcpServer_Proxy(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn NewConnection(self: ?*anyopaque) void {
        C.QTcpServer_NewConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// ``` self: ?*C.QTcpServer, slot: fn (?*C.QTcpServer) callconv(.c) void ```
    pub fn OnNewConnection(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QTcpServer_Connect_NewConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ``` self: ?*C.QSslServer, socketError: qabstractsocket_enums.SocketError ```
    pub fn AcceptError(self: ?*anyopaque, socketError: i64) void {
        C.QTcpServer_AcceptError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QTcpServer
    ///
    /// ``` self: ?*C.QTcpServer, slot: fn (?*C.QTcpServer, qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnAcceptError(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QTcpServer_Connect_AcceptError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: ?*C.QSslServer, address: ?*C.QHostAddress ```
    pub fn Listen1(self: ?*anyopaque, address: ?*anyopaque) bool {
        return C.QTcpServer_Listen1(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: ?*C.QSslServer, address: ?*C.QHostAddress, port: u16 ```
    pub fn Listen2(self: ?*anyopaque, address: ?*anyopaque, port: u16) bool {
        return C.QTcpServer_Listen2(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: ?*C.QSslServer, msec: i32 ```
    pub fn WaitForNewConnection1(self: ?*anyopaque, msec: i32) bool {
        return C.QTcpServer_WaitForNewConnection1(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: ?*C.QSslServer, msec: i32, timedOut: ?*bool ```
    pub fn WaitForNewConnection2(self: ?*anyopaque, msec: i32, timedOut: ?*anyopaque) bool {
        return C.QTcpServer_WaitForNewConnection2(@ptrCast(self), @intCast(msec), @ptrCast(timedOut));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QSslServer, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslServer, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QSslServer, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QSslServer, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSslServer, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QSslServer, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QSslServer, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslServer, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QSslServer, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QSslServer, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QSslServer, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QSslServer ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QSslServer, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QSslServer, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QSslServer, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QSslServer ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSslServer ```
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
    /// ``` self: ?*C.QSslServer ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QSslServer, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSslServer, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QSslServer, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSslServer, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn HasPendingConnections(self: ?*anyopaque) bool {
        return C.QSslServer_HasPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn QBaseHasPendingConnections(self: ?*anyopaque) bool {
        return C.QSslServer_QBaseHasPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn () callconv(.c) bool ```
    pub fn OnHasPendingConnections(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QSslServer_OnHasPendingConnections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn NextPendingConnection(self: ?*anyopaque) ?*C.QTcpSocket {
        return C.QSslServer_NextPendingConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn QBaseNextPendingConnection(self: ?*anyopaque) ?*C.QTcpSocket {
        return C.QSslServer_QBaseNextPendingConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn () callconv(.c) ?*C.QTcpSocket ```
    pub fn OnNextPendingConnection(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QTcpSocket) void {
        C.QSslServer_OnNextPendingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSslServer_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSslServer_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSslServer_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSslServer_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSslServer_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSslServer_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslServer_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslServer_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslServer_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslServer_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslServer_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSslServer_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSslServer_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSslServer_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSslServer_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSslServer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QTcpSocket ```
    pub fn AddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        C.QSslServer_AddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, socket: ?*C.QTcpSocket ```
    pub fn QBaseAddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        C.QSslServer_QBaseAddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QTcpSocket) callconv(.c) void ```
    pub fn OnAddPendingConnection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSslServer_OnAddPendingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QSslServer_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QSslServer_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QSslServer_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSslServer_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSslServer_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QSslServer_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSslServer_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSslServer_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QSslServer_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSslServer_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSslServer_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSslServer, slot: fn (?*C.QSslServer, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSslServer_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QSslServer ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QSslServer_Delete(@ptrCast(self));
    }
};
