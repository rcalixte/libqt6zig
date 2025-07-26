const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
    pub fn New() QtC.QSslServer {
        return qtc.QSslServer_new();
    }

    /// New2 constructs a new QSslServer object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QSslServer {
        return qtc.QSslServer_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSslServer_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSslServer, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslServer_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSslServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSslServer_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSslServer_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSslServer_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSslServer_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setSslConfiguration)
    ///
    /// ``` self: QtC.QSslServer, sslConfiguration: QtC.QSslConfiguration ```
    pub fn SetSslConfiguration(self: ?*anyopaque, sslConfiguration: ?*anyopaque) void {
        qtc.QSslServer_SetSslConfiguration(@ptrCast(self), @ptrCast(sslConfiguration));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslConfiguration)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn SslConfiguration(self: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QSslServer_SslConfiguration(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setHandshakeTimeout)
    ///
    /// ``` self: QtC.QSslServer, timeout: i32 ```
    pub fn SetHandshakeTimeout(self: ?*anyopaque, timeout: i32) void {
        qtc.QSslServer_SetHandshakeTimeout(@ptrCast(self), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeTimeout)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn HandshakeTimeout(self: ?*anyopaque) i32 {
        return qtc.QSslServer_HandshakeTimeout(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QSslSocket, errors: []QtC.QSslError ```
    pub fn SslErrors(self: ?*anyopaque, socket: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.struct_libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslServer_SslErrors(@ptrCast(self), @ptrCast(socket), errors_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: QtC.QSslSocket, errors: []QtC.QSslError) callconv(.c) void ```
    pub fn OnSslErrors(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, []QtC.QSslError) callconv(.c) void) void {
        qtc.QSslServer_Connect_SslErrors(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QSslSocket, errorVal: QtC.QSslError ```
    pub fn PeerVerifyError(self: ?*anyopaque, socket: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslServer_PeerVerifyError(@ptrCast(self), @ptrCast(socket), @ptrCast(errorVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: QtC.QSslSocket, errorVal: QtC.QSslError) callconv(.c) void ```
    pub fn OnPeerVerifyError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_Connect_PeerVerifyError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QSslSocket, errorVal: qabstractsocket_enums.SocketError ```
    pub fn ErrorOccurred(self: ?*anyopaque, socket: ?*anyopaque, errorVal: i64) void {
        qtc.QSslServer_ErrorOccurred(@ptrCast(self), @ptrCast(socket), @intCast(errorVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: QtC.QSslSocket, errorVal: qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnErrorOccurred(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSslServer_Connect_ErrorOccurred(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QSslSocket, authenticator: QtC.QSslPreSharedKeyAuthenticator ```
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, socket: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QSslServer_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(socket), @ptrCast(authenticator));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: QtC.QSslSocket, authenticator: QtC.QSslPreSharedKeyAuthenticator) callconv(.c) void ```
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8 ```
    pub fn AlertSent(self: ?*anyopaque, socket: ?*anyopaque, level: i64, typeVal: i64, description: []const u8) void {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslServer_AlertSent(@ptrCast(self), @ptrCast(socket), @intCast(level), @intCast(typeVal), description_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8) callconv(.c) void ```
    pub fn OnAlertSent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, i64, []const u8) callconv(.c) void) void {
        qtc.QSslServer_Connect_AlertSent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8 ```
    pub fn AlertReceived(self: ?*anyopaque, socket: ?*anyopaque, level: i64, typeVal: i64, description: []const u8) void {
        const description_str = qtc.struct_libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslServer_AlertReceived(@ptrCast(self), @ptrCast(socket), @intCast(level), @intCast(typeVal), description_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: []const u8) callconv(.c) void ```
    pub fn OnAlertReceived(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, i64, i64, []const u8) callconv(.c) void) void {
        qtc.QSslServer_Connect_AlertReceived(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QSslSocket, errorVal: QtC.QSslError ```
    pub fn HandshakeInterruptedOnError(self: ?*anyopaque, socket: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslServer_HandshakeInterruptedOnError(@ptrCast(self), @ptrCast(socket), @ptrCast(errorVal));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: QtC.QSslSocket, errorVal: QtC.QSslError) callconv(.c) void ```
    pub fn OnHandshakeInterruptedOnError(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_Connect_HandshakeInterruptedOnError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QSslSocket ```
    pub fn StartedEncryptionHandshake(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QSslServer_StartedEncryptionHandshake(@ptrCast(self), @ptrCast(socket));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: QtC.QSslSocket) callconv(.c) void ```
    pub fn OnStartedEncryptionHandshake(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_Connect_StartedEncryptionHandshake(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
    ///
    /// ``` self: QtC.QSslServer, socket: isize ```
    pub fn IncomingConnection(self: ?*anyopaque, socket: isize) void {
        qtc.QSslServer_IncomingConnection(@ptrCast(self), @intCast(socket));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: isize) callconv(.c) void ```
    pub fn OnIncomingConnection(self: ?*anyopaque, slot: fn (?*anyopaque, isize) callconv(.c) void) void {
        qtc.QSslServer_OnIncomingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSslServer, socket: isize ```
    pub fn QBaseIncomingConnection(self: ?*anyopaque, socket: isize) void {
        qtc.QSslServer_QBaseIncomingConnection(@ptrCast(self), @intCast(socket));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSslServer_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSslServer_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn Listen(self: ?*anyopaque) bool {
        return qtc.QTcpServer_Listen(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.QTcpServer_Close(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn IsListening(self: ?*anyopaque) bool {
        return qtc.QTcpServer_IsListening(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
    ///
    /// ``` self: QtC.QSslServer, numConnections: i32 ```
    pub fn SetMaxPendingConnections(self: ?*anyopaque, numConnections: i32) void {
        qtc.QTcpServer_SetMaxPendingConnections(@ptrCast(self), @intCast(numConnections));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn MaxPendingConnections(self: ?*anyopaque) i32 {
        return qtc.QTcpServer_MaxPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
    ///
    /// ``` self: QtC.QSslServer, size: i32 ```
    pub fn SetListenBacklogSize(self: ?*anyopaque, size: i32) void {
        qtc.QTcpServer_SetListenBacklogSize(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn ListenBacklogSize(self: ?*anyopaque) i32 {
        return qtc.QTcpServer_ListenBacklogSize(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn ServerPort(self: ?*anyopaque) u16 {
        return qtc.QTcpServer_ServerPort(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn ServerAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QTcpServer_ServerAddress(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return qtc.QTcpServer_SocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
    ///
    /// ``` self: QtC.QSslServer, socketDescriptor: isize ```
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize) bool {
        return qtc.QTcpServer_SetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn WaitForNewConnection(self: ?*anyopaque) bool {
        return qtc.QTcpServer_WaitForNewConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn ServerError(self: ?*anyopaque) i64 {
        return qtc.QTcpServer_ServerError(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
    ///
    /// ``` self: QtC.QSslServer, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTcpServer_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn PauseAccepting(self: ?*anyopaque) void {
        qtc.QTcpServer_PauseAccepting(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn ResumeAccepting(self: ?*anyopaque) void {
        qtc.QTcpServer_ResumeAccepting(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
    ///
    /// ``` self: QtC.QSslServer, networkProxy: QtC.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        qtc.QTcpServer_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn Proxy(self: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QTcpServer_Proxy(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn NewConnection(self: ?*anyopaque) void {
        qtc.QTcpServer_NewConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer) callconv(.c) void ```
    pub fn OnNewConnection(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTcpServer_Connect_NewConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ``` self: QtC.QSslServer, socketError: qabstractsocket_enums.SocketError ```
    pub fn AcceptError(self: ?*anyopaque, socketError: i64) void {
        qtc.QTcpServer_AcceptError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socketError: qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnAcceptError(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QTcpServer_Connect_AcceptError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: QtC.QSslServer, address: QtC.QHostAddress ```
    pub fn Listen1(self: ?*anyopaque, address: ?*anyopaque) bool {
        return qtc.QTcpServer_Listen1(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: QtC.QSslServer, address: QtC.QHostAddress, port: u16 ```
    pub fn Listen2(self: ?*anyopaque, address: ?*anyopaque, port: u16) bool {
        return qtc.QTcpServer_Listen2(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: QtC.QSslServer, msec: i32 ```
    pub fn WaitForNewConnection1(self: ?*anyopaque, msec: i32) bool {
        return qtc.QTcpServer_WaitForNewConnection1(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: QtC.QSslServer, msec: i32, timedOut: bool ```
    pub fn WaitForNewConnection2(self: ?*anyopaque, msec: i32, timedOut: *bool) bool {
        return qtc.QTcpServer_WaitForNewConnection2(@ptrCast(self), @intCast(msec), @ptrCast(timedOut));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSslServer, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSslServer, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSslServer, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSslServer, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSslServer, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSslServer, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSslServer, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSslServer, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsslserver.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSslServer, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSslServer, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSslServer, obj: QtC.QObject ```
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
    /// ``` self: QtC.QSslServer, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QSslServer ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSslServer, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSslServer, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSslServer, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsslserver.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslserver.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSslServer, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSslServer, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSslServer, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSslServer, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSslServer, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn HasPendingConnections(self: ?*anyopaque) bool {
        return qtc.QSslServer_HasPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn QBaseHasPendingConnections(self: ?*anyopaque) bool {
        return qtc.QSslServer_QBaseHasPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn () callconv(.c) bool ```
    pub fn OnHasPendingConnections(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSslServer_OnHasPendingConnections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn NextPendingConnection(self: ?*anyopaque) QtC.QTcpSocket {
        return qtc.QSslServer_NextPendingConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn QBaseNextPendingConnection(self: ?*anyopaque) QtC.QTcpSocket {
        return qtc.QSslServer_QBaseNextPendingConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn () callconv(.c) QtC.QTcpSocket ```
    pub fn OnNextPendingConnection(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTcpSocket) void {
        qtc.QSslServer_OnNextPendingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslServer_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslServer_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSslServer_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslServer_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslServer_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSslServer_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslServer_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslServer_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslServer_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslServer_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslServer_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslServer_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslServer_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslServer_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslServer_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslServer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QTcpSocket ```
    pub fn AddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QSslServer_AddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, socket: QtC.QTcpSocket ```
    pub fn QBaseAddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QSslServer_QBaseAddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, socket: QtC.QTcpSocket) callconv(.c) void ```
    pub fn OnAddPendingConnection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslServer_OnAddPendingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSslServer_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSslServer_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QSslServer_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSslServer_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSslServer_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QSslServer_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslServer_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslServer_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QSslServer_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSslServer_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSslServer_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSslServer_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer) callconv(.c) void ```
    pub fn OnPendingConnectionAvailable(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTcpServer_Connect_PendingConnectionAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSslServer, slot: fn (self: QtC.QSslServer, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#dtor.QSslServer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSslServer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSslServer_Delete(@ptrCast(self));
    }
};
