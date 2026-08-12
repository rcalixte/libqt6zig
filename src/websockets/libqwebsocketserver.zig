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
const QTcpSocket = @import("libqt6").QTcpSocket;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWebSocket = @import("libqt6").QWebSocket;
const QWebSocketCorsAuthenticator = @import("libqt6").QWebSocketCorsAuthenticator;
const qabstractsocket_enums = @import("../network/libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("../network/libqssl.zig").enums;
const qwebsocketprotocol_enums = @import("libqwebsocketprotocol.zig").enums;
const qwebsocketserver_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html)
pub const QWebSocketServer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebSocketServer,

    pub const _is_QWebSocketServer = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebSocketServer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _serverName: []const u8 `
    ///
    /// ` _secureMode: qwebsocketserver_enums.SslMode `
    ///
    pub fn new(_serverName: []const u8, _secureMode: i32) QWebSocketServer {
        const serverName_str = qtc.libqt_string{
            .len = _serverName.len,
            .data = _serverName.ptr,
        };
        return .{ .ptr = qtc.QWebSocketServer_new(serverName_str, @bitCast(_secureMode)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebSocketServer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _serverName: []const u8 `
    ///
    /// ` _secureMode: qwebsocketserver_enums.SslMode `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_serverName: []const u8, _secureMode: i32, _parent: anytype) QWebSocketServer {
        const serverName_str = qtc.libqt_string{
            .len = _serverName.len,
            .data = _serverName.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QWebSocketServer_new2(serverName_str, @bitCast(_secureMode), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn metaObject(self: QWebSocketServer) QMetaObject {
        return .{ .ptr = qtc.QWebSocketServer_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QWebSocketServer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QWebSocketServer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn superMetaObject(self: QWebSocketServer) QMetaObject {
        return .{ .ptr = qtc.QWebSocketServer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QWebSocketServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocketServer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QWebSocketServer, callback: *const fn (QWebSocketServer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebSocketServer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QWebSocketServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocketServer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QWebSocketServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocketServer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebSocketServer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QWebSocketServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocketServer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocketServer.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `listen` instead
    ///
    pub const Listen = listen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn listen(self: QWebSocketServer) bool {
        return qtc.QWebSocketServer_Listen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn close(self: QWebSocketServer) void {
        qtc.QWebSocketServer_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListening` instead
    ///
    pub const IsListening = isListening;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#isListening)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn isListening(self: QWebSocketServer) bool {
        return qtc.QWebSocketServer_IsListening(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxPendingConnections` instead
    ///
    pub const SetMaxPendingConnections = setMaxPendingConnections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setMaxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` numConnections: i32 `
    ///
    pub fn setMaxPendingConnections(self: QWebSocketServer, numConnections: i32) void {
        qtc.QWebSocketServer_SetMaxPendingConnections(@ptrCast(self.ptr), @bitCast(numConnections));
    }

    /// ### DEPRECATED: Use `maxPendingConnections` instead
    ///
    pub const MaxPendingConnections = maxPendingConnections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#maxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn maxPendingConnections(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_MaxPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHandshakeTimeout` instead
    ///
    pub const SetHandshakeTimeout = setHandshakeTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` msec: i64 of milliseconds `
    ///
    pub fn setHandshakeTimeout(self: QWebSocketServer, msec: i64) void {
        qtc.QWebSocketServer_SetHandshakeTimeout(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `handshakeTimeout` instead
    ///
    pub const HandshakeTimeout = handshakeTimeout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ## Returns:
    ///
    /// ` i64 of milliseconds `
    ///
    pub fn handshakeTimeout(self: QWebSocketServer) i64 {
        return qtc.QWebSocketServer_HandshakeTimeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHandshakeTimeout2` instead
    ///
    pub const SetHandshakeTimeout2 = setHandshakeTimeout2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` msec: i32 `
    ///
    pub fn setHandshakeTimeout2(self: QWebSocketServer, msec: i32) void {
        qtc.QWebSocketServer_SetHandshakeTimeout2(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `handshakeTimeoutMS` instead
    ///
    pub const HandshakeTimeoutMS = handshakeTimeoutMS;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeTimeoutMS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn handshakeTimeoutMS(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_HandshakeTimeoutMS(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serverPort` instead
    ///
    pub const ServerPort = serverPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn serverPort(self: QWebSocketServer) u16 {
        return qtc.QWebSocketServer_ServerPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serverAddress` instead
    ///
    pub const ServerAddress = serverAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn serverAddress(self: QWebSocketServer) QHostAddress {
        return .{ .ptr = qtc.QWebSocketServer_ServerAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `serverUrl` instead
    ///
    pub const ServerUrl = serverUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn serverUrl(self: QWebSocketServer) QUrl {
        return .{ .ptr = qtc.QWebSocketServer_ServerUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `secureMode` instead
    ///
    pub const SecureMode = secureMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#secureMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ## Returns:
    ///
    /// ` qwebsocketserver_enums.SslMode `
    ///
    pub fn secureMode(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_SecureMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSocketDescriptor` instead
    ///
    pub const SetSocketDescriptor = setSocketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _socketDescriptor: isize `
    ///
    pub fn setSocketDescriptor(self: QWebSocketServer, _socketDescriptor: isize) bool {
        return qtc.QWebSocketServer_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(_socketDescriptor));
    }

    /// ### DEPRECATED: Use `socketDescriptor` instead
    ///
    pub const SocketDescriptor = socketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn socketDescriptor(self: QWebSocketServer) isize {
        return qtc.QWebSocketServer_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNativeDescriptor` instead
    ///
    pub const SetNativeDescriptor = setNativeDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setNativeDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` descriptor: isize `
    ///
    pub fn setNativeDescriptor(self: QWebSocketServer, descriptor: isize) bool {
        return qtc.QWebSocketServer_SetNativeDescriptor(@ptrCast(self.ptr), @bitCast(descriptor));
    }

    /// ### DEPRECATED: Use `nativeDescriptor` instead
    ///
    pub const NativeDescriptor = nativeDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nativeDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn nativeDescriptor(self: QWebSocketServer) isize {
        return qtc.QWebSocketServer_NativeDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasPendingConnections` instead
    ///
    pub const HasPendingConnections = hasPendingConnections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#hasPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn hasPendingConnections(self: QWebSocketServer) bool {
        return qtc.QWebSocketServer_HasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextPendingConnection` instead
    ///
    pub const NextPendingConnection = nextPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn nextPendingConnection(self: QWebSocketServer) QWebSocket {
        return .{ .ptr = qtc.QWebSocketServer_NextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onNextPendingConnection` instead
    ///
    pub const OnNextPendingConnection = onNextPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn () callconv(.c) QWebSocket `
    ///
    pub fn onNextPendingConnection(self: QWebSocketServer, callback: *const fn () callconv(.c) QWebSocket) void {
        qtc.QWebSocketServer_OnNextPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNextPendingConnection` instead
    ///
    pub const SuperNextPendingConnection = superNextPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn superNextPendingConnection(self: QWebSocketServer) QWebSocket {
        return .{ .ptr = qtc.QWebSocketServer_SuperNextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ## Returns:
    ///
    /// ` qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn error0(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QWebSocketServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocketServer_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocketServer.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pauseAccepting` instead
    ///
    pub const PauseAccepting = pauseAccepting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#pauseAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn pauseAccepting(self: QWebSocketServer) void {
        qtc.QWebSocketServer_PauseAccepting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resumeAccepting` instead
    ///
    pub const ResumeAccepting = resumeAccepting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#resumeAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn resumeAccepting(self: QWebSocketServer) void {
        qtc.QWebSocketServer_ResumeAccepting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setServerName` instead
    ///
    pub const SetServerName = setServerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setServerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _serverName: []const u8 `
    ///
    pub fn setServerName(self: QWebSocketServer, _serverName: []const u8) void {
        const serverName_str = qtc.libqt_string{
            .len = _serverName.len,
            .data = _serverName.ptr,
        };
        qtc.QWebSocketServer_SetServerName(@ptrCast(self.ptr), serverName_str);
    }

    /// ### DEPRECATED: Use `serverName` instead
    ///
    pub const ServerName = serverName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serverName(self: QWebSocketServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocketServer_ServerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocketServer.serverName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSupportedSubprotocols` instead
    ///
    pub const SetSupportedSubprotocols = setSupportedSubprotocols;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSupportedSubprotocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` protocols: []const []const u8 `
    ///
    pub fn setSupportedSubprotocols(self: QWebSocketServer, allocator: std.mem.Allocator, protocols: []const []const u8) void {
        const protocols_arr = allocator.alloc(qtc.libqt_string, protocols.len) catch @panic("QWebSocketServer.setSupportedSubprotocols: Memory allocation failed");
        defer allocator.free(protocols_arr);
        for (protocols, 0..protocols.len) |str_item, i|
            protocols_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const protocols_list = qtc.libqt_list{
            .len = protocols.len,
            .data = protocols_arr.ptr,
        };
        qtc.QWebSocketServer_SetSupportedSubprotocols(@ptrCast(self.ptr), protocols_list);
    }

    /// ### DEPRECATED: Use `supportedSubprotocols` instead
    ///
    pub const SupportedSubprotocols = supportedSubprotocols;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#supportedSubprotocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportedSubprotocols(self: QWebSocketServer, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QWebSocketServer_SupportedSubprotocols(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QWebSocketServer.supportedSubprotocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebSocketServer.supportedSubprotocols: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setProxy` instead
    ///
    pub const SetProxy = setProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn setProxy(self: QWebSocketServer, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QWebSocketServer_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// ### DEPRECATED: Use `proxy` instead
    ///
    pub const Proxy = proxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn proxy(self: QWebSocketServer) QNetworkProxy {
        return .{ .ptr = qtc.QWebSocketServer_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSslConfiguration` instead
    ///
    pub const SetSslConfiguration = setSslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _sslConfiguration: QSslConfiguration `
    ///
    pub fn setSslConfiguration(self: QWebSocketServer, _sslConfiguration: anytype) void {
        comptime _ = @TypeOf(_sslConfiguration)._is_QSslConfiguration;
        qtc.QWebSocketServer_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(_sslConfiguration.ptr));
    }

    /// ### DEPRECATED: Use `sslConfiguration` instead
    ///
    pub const SslConfiguration = sslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn sslConfiguration(self: QWebSocketServer) QSslConfiguration {
        return .{ .ptr = qtc.QWebSocketServer_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `supportedVersions` instead
    ///
    pub const SupportedVersions = supportedVersions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#supportedVersions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qwebsocketprotocol_enums.Version `
    ///
    pub fn supportedVersions(self: QWebSocketServer, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QWebSocketServer_SupportedVersions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QWebSocketServer.supportedVersions: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `handleConnection` instead
    ///
    pub const HandleConnection = handleConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handleConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` socket: QTcpSocket `
    ///
    pub fn handleConnection(self: QWebSocketServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QWebSocketServer_HandleConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `acceptError` instead
    ///
    pub const AcceptError = acceptError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#acceptError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn acceptError(self: QWebSocketServer, socketError: i32) void {
        qtc.QWebSocketServer_AcceptError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### DEPRECATED: Use `onAcceptError` instead
    ///
    pub const OnAcceptError = onAcceptError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#acceptError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn onAcceptError(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_AcceptError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `serverError` instead
    ///
    pub const ServerError = serverError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` closeCode: qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn serverError(self: QWebSocketServer, closeCode: i32) void {
        qtc.QWebSocketServer_ServerError(@ptrCast(self.ptr), @bitCast(closeCode));
    }

    /// ### DEPRECATED: Use `onServerError` instead
    ///
    pub const OnServerError = onServerError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, closeCode: qwebsocketprotocol_enums.CloseCode) callconv(.c) void `
    ///
    pub fn onServerError(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_ServerError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `originAuthenticationRequired` instead
    ///
    pub const OriginAuthenticationRequired = originAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#originAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` pAuthenticator: QWebSocketCorsAuthenticator `
    ///
    pub fn originAuthenticationRequired(self: QWebSocketServer, pAuthenticator: anytype) void {
        comptime _ = @TypeOf(pAuthenticator)._is_QWebSocketCorsAuthenticator;
        qtc.QWebSocketServer_OriginAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(pAuthenticator.ptr));
    }

    /// ### DEPRECATED: Use `onOriginAuthenticationRequired` instead
    ///
    pub const OnOriginAuthenticationRequired = onOriginAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#originAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, pAuthenticator: QWebSocketCorsAuthenticator) callconv(.c) void `
    ///
    pub fn onOriginAuthenticationRequired(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QWebSocketCorsAuthenticator) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_OriginAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `newConnection` instead
    ///
    pub const NewConnection = newConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#newConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn newConnection(self: QWebSocketServer) void {
        qtc.QWebSocketServer_NewConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNewConnection` instead
    ///
    pub const OnNewConnection = onNewConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#newConnection)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer) callconv(.c) void `
    ///
    pub fn onNewConnection(self: QWebSocketServer, callback: *const fn (QWebSocketServer) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_NewConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `peerVerifyError` instead
    ///
    pub const PeerVerifyError = peerVerifyError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn peerVerifyError(self: QWebSocketServer, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QWebSocketServer_PeerVerifyError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### DEPRECATED: Use `onPeerVerifyError` instead
    ///
    pub const OnPeerVerifyError = onPeerVerifyError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn onPeerVerifyError(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QSslError) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_PeerVerifyError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sslErrors` instead
    ///
    pub const SslErrors = sslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn sslErrors(self: QWebSocketServer, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QWebSocketServer_SslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### DEPRECATED: Use `onSslErrors` instead
    ///
    pub const OnSslErrors = onSslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn onSslErrors(self: QWebSocketServer, callback: *const fn (QWebSocketServer, qtc.libqt_list) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preSharedKeyAuthenticationRequired` instead
    ///
    pub const PreSharedKeyAuthenticationRequired = preSharedKeyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn preSharedKeyAuthenticationRequired(self: QWebSocketServer, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QWebSocketServer_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onPreSharedKeyAuthenticationRequired` instead
    ///
    pub const OnPreSharedKeyAuthenticationRequired = onPreSharedKeyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn onPreSharedKeyAuthenticationRequired(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alertSent` instead
    ///
    pub const AlertSent = alertSent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn alertSent(self: QWebSocketServer, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocketServer_AlertSent(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### DEPRECATED: Use `onAlertSent` instead
    ///
    pub const OnAlertSent = onAlertSent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onAlertSent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_AlertSent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alertReceived` instead
    ///
    pub const AlertReceived = alertReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn alertReceived(self: QWebSocketServer, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocketServer_AlertReceived(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### DEPRECATED: Use `onAlertReceived` instead
    ///
    pub const OnAlertReceived = onAlertReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onAlertReceived(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_AlertReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `handshakeInterruptedOnError` instead
    ///
    pub const HandshakeInterruptedOnError = handshakeInterruptedOnError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn handshakeInterruptedOnError(self: QWebSocketServer, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QWebSocketServer_HandshakeInterruptedOnError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### DEPRECATED: Use `onHandshakeInterruptedOnError` instead
    ///
    pub const OnHandshakeInterruptedOnError = onHandshakeInterruptedOnError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn onHandshakeInterruptedOnError(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QSslError) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_HandshakeInterruptedOnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closed` instead
    ///
    pub const Closed = closed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#closed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn closed(self: QWebSocketServer) void {
        qtc.QWebSocketServer_Closed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClosed` instead
    ///
    pub const OnClosed = onClosed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#closed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer) callconv(.c) void `
    ///
    pub fn onClosed(self: QWebSocketServer, callback: *const fn (QWebSocketServer) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_Closed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocketServer.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocketServer.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `listen1` instead
    ///
    pub const Listen1 = listen1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn listen1(self: QWebSocketServer, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QWebSocketServer_Listen1(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `listen2` instead
    ///
    pub const Listen2 = listen2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn listen2(self: QWebSocketServer, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QWebSocketServer_Listen2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QWebSocketServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocketServer.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QWebSocketServer, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn isWidgetType(self: QWebSocketServer) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn isWindowType(self: QWebSocketServer) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn isQuickItemType(self: QWebSocketServer) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn signalsBlocked(self: QWebSocketServer) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QWebSocketServer, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn thread(self: QWebSocketServer) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QWebSocketServer, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QWebSocketServer, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QWebSocketServer, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QWebSocketServer, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QWebSocketServer, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QWebSocketServer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QWebSocketServer.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QWebSocketServer, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QWebSocketServer, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QWebSocketServer, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QWebSocketServer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn disconnect3(self: QWebSocketServer) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QWebSocketServer, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn dumpObjectTree(self: QWebSocketServer) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn dumpObjectInfo(self: QWebSocketServer) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QWebSocketServer, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QWebSocketServer, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QWebSocketServer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QWebSocketServer.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebSocketServer.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn bindingStorage(self: QWebSocketServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn bindingStorage2(self: QWebSocketServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn destroyed(self: QWebSocketServer) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QWebSocketServer, callback: *const fn (QWebSocketServer) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn parent(self: QWebSocketServer) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QWebSocketServer, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn deleteLater(self: QWebSocketServer) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QWebSocketServer, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QWebSocketServer, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QWebSocketServer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QWebSocketServer, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QWebSocketServer, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QWebSocketServer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QWebSocketServer, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QWebSocketServer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QWebSocketServer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebSocketServer_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QWebSocketServer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebSocketServer_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QWebSocketServer, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QEvent) callconv(.c) bool) void {
        qtc.QWebSocketServer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QWebSocketServer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebSocketServer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QWebSocketServer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebSocketServer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QWebSocketServer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QWebSocketServer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QWebSocketServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QWebSocketServer_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QWebSocketServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QWebSocketServer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QWebSocketServer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QTimerEvent) callconv(.c) void) void {
        qtc.QWebSocketServer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QWebSocketServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QWebSocketServer_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QWebSocketServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QWebSocketServer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QWebSocketServer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QChildEvent) callconv(.c) void) void {
        qtc.QWebSocketServer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QWebSocketServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QWebSocketServer_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QWebSocketServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QWebSocketServer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QWebSocketServer, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QEvent) callconv(.c) void) void {
        qtc.QWebSocketServer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QWebSocketServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocketServer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QWebSocketServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocketServer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QWebSocketServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QMetaMethod) callconv(.c) void) void {
        qtc.QWebSocketServer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QWebSocketServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocketServer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QWebSocketServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocketServer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QWebSocketServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QMetaMethod) callconv(.c) void) void {
        qtc.QWebSocketServer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn sender(self: QWebSocketServer) QObject {
        return .{ .ptr = qtc.QWebSocketServer_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn superSender(self: QWebSocketServer) QObject {
        return .{ .ptr = qtc.QWebSocketServer_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QWebSocketServer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QWebSocketServer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn senderSignalIndex(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn superSenderSignalIndex(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QWebSocketServer, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebSocketServer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QWebSocketServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocketServer_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QWebSocketServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocketServer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QWebSocketServer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QWebSocketServer, callback: *const fn (QWebSocketServer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebSocketServer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QWebSocketServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebSocketServer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QWebSocketServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebSocketServer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QWebSocketServer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QMetaMethod) callconv(.c) bool) void {
        qtc.QWebSocketServer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QWebSocketServer, callback: *const fn (QWebSocketServer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#dtor.QWebSocketServer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn delete(self: QWebSocketServer) void {
        qtc.QWebSocketServer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#public-types)
pub const enums = struct {
    pub const SslMode = enum(i32) {
        pub const SecureMode: i32 = 0;
        pub const NonSecureMode: i32 = 1;
    };
};
