const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHostAddress = @import("libqt6").QHostAddress;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkProxy = @import("libqt6").QNetworkProxy;
const QObject = @import("libqt6").QObject;
const QSslConfiguration = @import("libqt6").QSslConfiguration;
const QSslError = @import("libqt6").QSslError;
const QSslPreSharedKeyAuthenticator = @import("libqt6").QSslPreSharedKeyAuthenticator;
const QSslSocket = @import("libqt6").QSslSocket;
const QTcpSocket = @import("libqt6").QTcpSocket;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("libqssl.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html)
pub const QSslServer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslServer,

    pub const _is_QSslServer = {};
    pub const _is_QTcpServer = {};
    pub const _is_QObject = {};

    /// New constructs a new QSslServer object.
    ///
    pub fn New() QSslServer {
        return .{ .ptr = qtc.QSslServer_new() };
    }

    /// New2 constructs a new QSslServer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QSslServer {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSslServer_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn MetaObject(self: QSslServer) QMetaObject {
        return .{ .ptr = qtc.QSslServer_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSslServer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSslServer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslServer `
    ///
    pub fn SuperMetaObject(self: QSslServer) QMetaObject {
        return .{ .ptr = qtc.QSslServer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSslServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslServer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSslServer, callback: *const fn (QSslServer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSslServer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSslServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslServer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSslServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSslServer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSslServer, callback: *const fn (QSslServer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSslServer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSslServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSslServer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` sslConfiguration: QSslConfiguration `
    ///
    pub fn SetSslConfiguration(self: QSslServer, sslConfiguration: anytype) void {
        comptime _ = @TypeOf(sslConfiguration)._is_QSslConfiguration;
        qtc.QSslServer_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(sslConfiguration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn SslConfiguration(self: QSslServer) QSslConfiguration {
        return .{ .ptr = qtc.QSslServer_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#setHandshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SetHandshakeTimeout(self: QSslServer, timeout: i32) void {
        qtc.QSslServer_SetHandshakeTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#handshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn HandshakeTimeout(self: QSslServer) i32 {
        return qtc.QSslServer_HandshakeTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QSslSocket `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn SslErrors(self: QSslServer, socket: anytype, errors: []QSslError) void {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslServer_SslErrors(@ptrCast(self.ptr), @ptrCast(socket.ptr), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socket: QSslSocket, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: QSslServer, callback: *const fn (QSslServer, QSslSocket, qtc.libqt_list) callconv(.c) void) void {
        qtc.QSslServer_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QSslSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn PeerVerifyError(self: QSslServer, socket: anytype, errorVal: anytype) void {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QSslServer_PeerVerifyError(@ptrCast(self.ptr), @ptrCast(socket.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socket: QSslSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn OnPeerVerifyError(self: QSslServer, callback: *const fn (QSslServer, QSslSocket, QSslError) callconv(.c) void) void {
        qtc.QSslServer_Connect_PeerVerifyError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QSslSocket `
    ///
    /// ` errorVal: qabstractsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: QSslServer, socket: anytype, errorVal: i32) void {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        qtc.QSslServer_ErrorOccurred(@ptrCast(self.ptr), @ptrCast(socket.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socket: QSslSocket, errorVal: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QSslServer, callback: *const fn (QSslServer, QSslSocket, i32) callconv(.c) void) void {
        qtc.QSslServer_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QSslSocket `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: QSslServer, socket: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QSslServer_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(socket.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socket: QSslSocket, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: QSslServer, callback: *const fn (QSslServer, QSslSocket, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QSslServer_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QSslSocket `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AlertSent(self: QSslServer, socket: anytype, level: i32, typeVal: i32, description: []const u8) void {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslServer_AlertSent(@ptrCast(self.ptr), @ptrCast(socket.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socket: QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertSent(self: QSslServer, callback: *const fn (QSslServer, QSslSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslServer_Connect_AlertSent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QSslSocket `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AlertReceived(self: QSslServer, socket: anytype, level: i32, typeVal: i32, description: []const u8) void {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslServer_AlertReceived(@ptrCast(self.ptr), @ptrCast(socket.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socket: QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertReceived(self: QSslServer, callback: *const fn (QSslServer, QSslSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslServer_Connect_AlertReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QSslSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn HandshakeInterruptedOnError(self: QSslServer, socket: anytype, errorVal: anytype) void {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QSslServer_HandshakeInterruptedOnError(@ptrCast(self.ptr), @ptrCast(socket.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socket: QSslSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn OnHandshakeInterruptedOnError(self: QSslServer, callback: *const fn (QSslServer, QSslSocket, QSslError) callconv(.c) void) void {
        qtc.QSslServer_Connect_HandshakeInterruptedOnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QSslSocket `
    ///
    pub fn StartedEncryptionHandshake(self: QSslServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QSslSocket;
        qtc.QSslServer_StartedEncryptionHandshake(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socket: QSslSocket) callconv(.c) void `
    ///
    pub fn OnStartedEncryptionHandshake(self: QSslServer, callback: *const fn (QSslServer, QSslSocket) callconv(.c) void) void {
        qtc.QSslServer_Connect_StartedEncryptionHandshake(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: isize `
    ///
    pub fn IncomingConnection(self: QSslServer, socket: isize) void {
        qtc.QSslServer_IncomingConnection(@ptrCast(self.ptr), @bitCast(socket));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socket: isize) callconv(.c) void `
    ///
    pub fn OnIncomingConnection(self: QSslServer, callback: *const fn (QSslServer, isize) callconv(.c) void) void {
        qtc.QSslServer_OnIncomingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIncomingConnection` instead
    ///
    pub const QBaseIncomingConnection = SuperIncomingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: isize `
    ///
    pub fn SuperIncomingConnection(self: QSslServer, socket: isize) void {
        qtc.QSslServer_SuperIncomingConnection(@ptrCast(self.ptr), @bitCast(socket));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn Listen(self: QSslServer) bool {
        return qtc.QTcpServer_Listen(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn Close(self: QSslServer) void {
        qtc.QTcpServer_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn IsListening(self: QSslServer) bool {
        return qtc.QTcpServer_IsListening(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` numConnections: i32 `
    ///
    pub fn SetMaxPendingConnections(self: QSslServer, numConnections: i32) void {
        qtc.QTcpServer_SetMaxPendingConnections(@ptrCast(self.ptr), @bitCast(numConnections));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn MaxPendingConnections(self: QSslServer) i32 {
        return qtc.QTcpServer_MaxPendingConnections(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` size: i32 `
    ///
    pub fn SetListenBacklogSize(self: QSslServer, size: i32) void {
        qtc.QTcpServer_SetListenBacklogSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn ListenBacklogSize(self: QSslServer) i32 {
        return qtc.QTcpServer_ListenBacklogSize(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn ServerPort(self: QSslServer) u16 {
        return qtc.QTcpServer_ServerPort(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn ServerAddress(self: QSslServer) QHostAddress {
        return .{ .ptr = qtc.QTcpServer_ServerAddress(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn SocketDescriptor(self: QSslServer) isize {
        return qtc.QTcpServer_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socketDescriptor: isize `
    ///
    pub fn SetSocketDescriptor(self: QSslServer, socketDescriptor: isize) bool {
        return qtc.QTcpServer_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn WaitForNewConnection(self: QSslServer) bool {
        return qtc.QTcpServer_WaitForNewConnection(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn ServerError(self: QSslServer) i32 {
        return qtc.QTcpServer_ServerError(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QSslServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTcpServer_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn PauseAccepting(self: QSslServer) void {
        qtc.QTcpServer_PauseAccepting(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn ResumeAccepting(self: QSslServer) void {
        qtc.QTcpServer_ResumeAccepting(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn SetProxy(self: QSslServer, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QTcpServer_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn Proxy(self: QSslServer) QNetworkProxy {
        return .{ .ptr = qtc.QTcpServer_Proxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn NewConnection(self: QSslServer) void {
        qtc.QTcpServer_NewConnection(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer) callconv(.c) void `
    ///
    pub fn OnNewConnection(self: QSslServer, callback: *const fn (QSslServer) callconv(.c) void) void {
        qtc.QTcpServer_Connect_NewConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn AcceptError(self: QSslServer, socketError: i32) void {
        qtc.QTcpServer_AcceptError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnAcceptError(self: QSslServer, callback: *const fn (QSslServer, i32) callconv(.c) void) void {
        qtc.QTcpServer_Connect_AcceptError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn Listen1(self: QSslServer, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QTcpServer_Listen1(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn Listen2(self: QSslServer, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QTcpServer_Listen2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` msec: i32 `
    ///
    pub fn WaitForNewConnection1(self: QSslServer, msec: i32) bool {
        return qtc.QTcpServer_WaitForNewConnection1(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` msec: i32 `
    ///
    /// ` timedOut: *bool `
    ///
    pub fn WaitForNewConnection2(self: QSslServer, msec: i32, timedOut: *bool) bool {
        return qtc.QTcpServer_WaitForNewConnection2(@ptrCast(self.ptr), @bitCast(msec), @ptrCast(timedOut));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSslServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslserver.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSslServer, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn IsWidgetType(self: QSslServer) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn IsWindowType(self: QSslServer) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn IsQuickItemType(self: QSslServer) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn SignalsBlocked(self: QSslServer) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSslServer, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn Thread(self: QSslServer) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSslServer, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSslServer, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSslServer, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSslServer, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSslServer, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSslServer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsslserver.Children: Memory allocation failed");
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
    /// ` self: QSslServer `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSslServer, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSslServer, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSslServer, obj: anytype) void {
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
    /// ` self: QSslServer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSslServer, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSslServer `
    ///
    pub fn Disconnect3(self: QSslServer) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSslServer, receiver: anytype) bool {
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
    /// ` self: QSslServer `
    ///
    pub fn DumpObjectTree(self: QSslServer) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn DumpObjectInfo(self: QSslServer) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSslServer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSslServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSslServer, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSslServer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn BindingStorage(self: QSslServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn BindingStorage2(self: QSslServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn Destroyed(self: QSslServer) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSslServer, callback: *const fn (QSslServer) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn Parent(self: QSslServer) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSslServer, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn DeleteLater(self: QSslServer) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSslServer, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSslServer, time: i64, timerType: i32) i32 {
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
    /// ` self: QSslServer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSslServer, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSslServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSslServer, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSslServer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSslServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSslServer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSslServer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSslServer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSslServer `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSslServer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSslServer, callback: *const fn (QSslServer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn HasPendingConnections(self: QSslServer) bool {
        return qtc.QSslServer_HasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHasPendingConnections` instead
    ///
    pub const QBaseHasPendingConnections = SuperHasPendingConnections;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn SuperHasPendingConnections(self: QSslServer) bool {
        return qtc.QSslServer_SuperHasPendingConnections(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasPendingConnections(self: QSslServer, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslServer_OnHasPendingConnections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn NextPendingConnection(self: QSslServer) QTcpSocket {
        return .{ .ptr = qtc.QSslServer_NextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperNextPendingConnection` instead
    ///
    pub const QBaseNextPendingConnection = SuperNextPendingConnection;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn SuperNextPendingConnection(self: QSslServer) QTcpSocket {
        return .{ .ptr = qtc.QSslServer_SuperNextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn () callconv(.c) QTcpSocket `
    ///
    pub fn OnNextPendingConnection(self: QSslServer, callback: *const fn () callconv(.c) QTcpSocket) void {
        qtc.QSslServer_OnNextPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSslServer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSslServer_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSslServer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSslServer_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSslServer, callback: *const fn (QSslServer, QEvent) callconv(.c) bool) void {
        qtc.QSslServer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSslServer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSslServer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSslServer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSslServer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSslServer, callback: *const fn (QSslServer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSslServer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSslServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSslServer_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslServer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSslServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSslServer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSslServer, callback: *const fn (QSslServer, QTimerEvent) callconv(.c) void) void {
        qtc.QSslServer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSslServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSslServer_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslServer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSslServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSslServer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSslServer, callback: *const fn (QSslServer, QChildEvent) callconv(.c) void) void {
        qtc.QSslServer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSslServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSslServer_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSslServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSslServer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSslServer, callback: *const fn (QSslServer, QEvent) callconv(.c) void) void {
        qtc.QSslServer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSslServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslServer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSslServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslServer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSslServer, callback: *const fn (QSslServer, QMetaMethod) callconv(.c) void) void {
        qtc.QSslServer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSslServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslServer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSslServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslServer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSslServer, callback: *const fn (QSslServer, QMetaMethod) callconv(.c) void) void {
        qtc.QSslServer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QTcpSocket `
    ///
    pub fn AddPendingConnection(self: QSslServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QSslServer_AddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddPendingConnection` instead
    ///
    pub const QBaseAddPendingConnection = SuperAddPendingConnection;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` socket: QTcpSocket `
    ///
    pub fn SuperAddPendingConnection(self: QSslServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QSslServer_SuperAddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, socket: QTcpSocket) callconv(.c) void `
    ///
    pub fn OnAddPendingConnection(self: QSslServer, callback: *const fn (QSslServer, QTcpSocket) callconv(.c) void) void {
        qtc.QSslServer_OnAddPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn Sender(self: QSslServer) QObject {
        return .{ .ptr = qtc.QSslServer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSslServer `
    ///
    pub fn SuperSender(self: QSslServer) QObject {
        return .{ .ptr = qtc.QSslServer_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSslServer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSslServer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    pub fn SenderSignalIndex(self: QSslServer) i32 {
        return qtc.QSslServer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSslServer `
    ///
    pub fn SuperSenderSignalIndex(self: QSslServer) i32 {
        return qtc.QSslServer_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSslServer, callback: *const fn () callconv(.c) i32) void {
        qtc.QSslServer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSslServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslServer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSslServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSslServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslServer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSslServer, callback: *const fn (QSslServer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSslServer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSslServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSslServer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSslServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSslServer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer`
    ///
    /// ` callback: *const fn (self: QSslServer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSslServer, callback: *const fn (QSslServer, QMetaMethod) callconv(.c) bool) void {
        qtc.QSslServer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer) callconv(.c) void `
    ///
    pub fn OnPendingConnectionAvailable(self: QSslServer, callback: *const fn (QSslServer) callconv(.c) void) void {
        qtc.QTcpServer_Connect_PendingConnectionAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslServer `
    ///
    /// ` callback: *const fn (self: QSslServer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSslServer, callback: *const fn (QSslServer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslserver.html#dtor.QSslServer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslServer `
    ///
    pub fn Delete(self: QSslServer) void {
        qtc.QSslServer_Delete(@ptrCast(self.ptr));
    }
};
