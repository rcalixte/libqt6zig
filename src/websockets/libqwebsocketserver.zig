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

    /// New constructs a new QWebSocketServer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` serverName: []const u8 `
    ///
    /// ` secureMode: qwebsocketserver_enums.SslMode `
    ///
    pub fn New(serverName: []const u8, secureMode: i32) QWebSocketServer {
        const serverName_str = qtc.libqt_string{
            .len = serverName.len,
            .data = serverName.ptr,
        };
        return .{ .ptr = qtc.QWebSocketServer_new(serverName_str, @bitCast(secureMode)) };
    }

    /// New2 constructs a new QWebSocketServer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` serverName: []const u8 `
    ///
    /// ` secureMode: qwebsocketserver_enums.SslMode `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(serverName: []const u8, secureMode: i32, parent: anytype) QWebSocketServer {
        const serverName_str = qtc.libqt_string{
            .len = serverName.len,
            .data = serverName.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QWebSocketServer_new2(serverName_str, @bitCast(secureMode), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn MetaObject(self: QWebSocketServer) QMetaObject {
        return .{ .ptr = qtc.QWebSocketServer_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QWebSocketServer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QWebSocketServer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocketServer `
    ///
    pub fn SuperMetaObject(self: QWebSocketServer) QMetaObject {
        return .{ .ptr = qtc.QWebSocketServer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QWebSocketServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocketServer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QWebSocketServer, callback: *const fn (QWebSocketServer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebSocketServer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QWebSocketServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocketServer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QWebSocketServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocketServer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebSocketServer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QWebSocketServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocketServer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn Listen(self: QWebSocketServer) bool {
        return qtc.QWebSocketServer_Listen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn Close(self: QWebSocketServer) void {
        qtc.QWebSocketServer_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#isListening)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn IsListening(self: QWebSocketServer) bool {
        return qtc.QWebSocketServer_IsListening(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setMaxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` numConnections: i32 `
    ///
    pub fn SetMaxPendingConnections(self: QWebSocketServer, numConnections: i32) void {
        qtc.QWebSocketServer_SetMaxPendingConnections(@ptrCast(self.ptr), @bitCast(numConnections));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#maxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn MaxPendingConnections(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_MaxPendingConnections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` msec: i64 of milliseconds `
    ///
    pub fn SetHandshakeTimeout(self: QWebSocketServer, msec: i64) void {
        qtc.QWebSocketServer_SetHandshakeTimeout(@ptrCast(self.ptr), @bitCast(msec));
    }

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
    pub fn HandshakeTimeout(self: QWebSocketServer) i64 {
        return qtc.QWebSocketServer_HandshakeTimeout(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetHandshakeTimeout2(self: QWebSocketServer, msec: i32) void {
        qtc.QWebSocketServer_SetHandshakeTimeout2(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeTimeoutMS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn HandshakeTimeoutMS(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_HandshakeTimeoutMS(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn ServerPort(self: QWebSocketServer) u16 {
        return qtc.QWebSocketServer_ServerPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn ServerAddress(self: QWebSocketServer) QHostAddress {
        return .{ .ptr = qtc.QWebSocketServer_ServerAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn ServerUrl(self: QWebSocketServer) QUrl {
        return .{ .ptr = qtc.QWebSocketServer_ServerUrl(@ptrCast(self.ptr)) };
    }

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
    pub fn SecureMode(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_SecureMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` socketDescriptor: isize `
    ///
    pub fn SetSocketDescriptor(self: QWebSocketServer, socketDescriptor: isize) bool {
        return qtc.QWebSocketServer_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn SocketDescriptor(self: QWebSocketServer) isize {
        return qtc.QWebSocketServer_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setNativeDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` descriptor: isize `
    ///
    pub fn SetNativeDescriptor(self: QWebSocketServer, descriptor: isize) bool {
        return qtc.QWebSocketServer_SetNativeDescriptor(@ptrCast(self.ptr), @bitCast(descriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nativeDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn NativeDescriptor(self: QWebSocketServer) isize {
        return qtc.QWebSocketServer_NativeDescriptor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#hasPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn HasPendingConnections(self: QWebSocketServer) bool {
        return qtc.QWebSocketServer_HasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn NextPendingConnection(self: QWebSocketServer) QWebSocket {
        return .{ .ptr = qtc.QWebSocketServer_NextPendingConnection(@ptrCast(self.ptr)) };
    }

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
    pub fn OnNextPendingConnection(self: QWebSocketServer, callback: *const fn () callconv(.c) QWebSocket) void {
        qtc.QWebSocketServer_OnNextPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNextPendingConnection` instead
    ///
    pub const QBaseNextPendingConnection = SuperNextPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn SuperNextPendingConnection(self: QWebSocketServer) QWebSocket {
        return .{ .ptr = qtc.QWebSocketServer_SuperNextPendingConnection(@ptrCast(self.ptr)) };
    }

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
    pub fn Error(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QWebSocketServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocketServer_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#pauseAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn PauseAccepting(self: QWebSocketServer) void {
        qtc.QWebSocketServer_PauseAccepting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#resumeAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn ResumeAccepting(self: QWebSocketServer) void {
        qtc.QWebSocketServer_ResumeAccepting(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setServerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` serverName: []const u8 `
    ///
    pub fn SetServerName(self: QWebSocketServer, serverName: []const u8) void {
        const serverName_str = qtc.libqt_string{
            .len = serverName.len,
            .data = serverName.ptr,
        };
        qtc.QWebSocketServer_SetServerName(@ptrCast(self.ptr), serverName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServerName(self: QWebSocketServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocketServer_ServerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.ServerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetSupportedSubprotocols(self: QWebSocketServer, allocator: std.mem.Allocator, protocols: []const []const u8) void {
        const protocols_arr = allocator.alloc(qtc.libqt_string, protocols.len) catch @panic("qwebsocketserver.SetSupportedSubprotocols: Memory allocation failed");
        defer allocator.free(protocols_arr);
        for (protocols, 0..protocols.len) |item, i|
            protocols_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const protocols_list = qtc.libqt_list{
            .len = protocols.len,
            .data = protocols_arr.ptr,
        };
        qtc.QWebSocketServer_SetSupportedSubprotocols(@ptrCast(self.ptr), protocols_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#supportedSubprotocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSubprotocols(self: QWebSocketServer, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QWebSocketServer_SupportedSubprotocols(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qwebsocketserver.SupportedSubprotocols: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebsocketserver.SupportedSubprotocols: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn SetProxy(self: QWebSocketServer, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QWebSocketServer_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn Proxy(self: QWebSocketServer) QNetworkProxy {
        return .{ .ptr = qtc.QWebSocketServer_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` sslConfiguration: QSslConfiguration `
    ///
    pub fn SetSslConfiguration(self: QWebSocketServer, sslConfiguration: anytype) void {
        comptime _ = @TypeOf(sslConfiguration)._is_QSslConfiguration;
        qtc.QWebSocketServer_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(sslConfiguration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn SslConfiguration(self: QWebSocketServer) QSslConfiguration {
        return .{ .ptr = qtc.QWebSocketServer_SslConfiguration(@ptrCast(self.ptr)) };
    }

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
    pub fn SupportedVersions(self: QWebSocketServer, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QWebSocketServer_SupportedVersions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qwebsocketserver.SupportedVersions: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handleConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` socket: QTcpSocket `
    ///
    pub fn HandleConnection(self: QWebSocketServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QWebSocketServer_HandleConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#acceptError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn AcceptError(self: QWebSocketServer, socketError: i32) void {
        qtc.QWebSocketServer_AcceptError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#acceptError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnAcceptError(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_AcceptError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` closeCode: qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn ServerError(self: QWebSocketServer, closeCode: i32) void {
        qtc.QWebSocketServer_ServerError(@ptrCast(self.ptr), @bitCast(closeCode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, closeCode: qwebsocketprotocol_enums.CloseCode) callconv(.c) void `
    ///
    pub fn OnServerError(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_ServerError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#originAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` pAuthenticator: QWebSocketCorsAuthenticator `
    ///
    pub fn OriginAuthenticationRequired(self: QWebSocketServer, pAuthenticator: anytype) void {
        comptime _ = @TypeOf(pAuthenticator)._is_QWebSocketCorsAuthenticator;
        qtc.QWebSocketServer_OriginAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(pAuthenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#originAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, pAuthenticator: QWebSocketCorsAuthenticator) callconv(.c) void `
    ///
    pub fn OnOriginAuthenticationRequired(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QWebSocketCorsAuthenticator) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_OriginAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#newConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn NewConnection(self: QWebSocketServer) void {
        qtc.QWebSocketServer_NewConnection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#newConnection)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer) callconv(.c) void `
    ///
    pub fn OnNewConnection(self: QWebSocketServer, callback: *const fn (QWebSocketServer) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_NewConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn PeerVerifyError(self: QWebSocketServer, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QWebSocketServer_PeerVerifyError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn OnPeerVerifyError(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QSslError) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_PeerVerifyError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn SslErrors(self: QWebSocketServer, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QWebSocketServer_SslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: QWebSocketServer, callback: *const fn (QWebSocketServer, qtc.libqt_list) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: QWebSocketServer, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QWebSocketServer_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AlertSent(self: QWebSocketServer, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocketServer_AlertSent(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertSent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_AlertSent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn AlertReceived(self: QWebSocketServer, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocketServer_AlertReceived(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertReceived(self: QWebSocketServer, callback: *const fn (QWebSocketServer, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_AlertReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn HandshakeInterruptedOnError(self: QWebSocketServer, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QWebSocketServer_HandshakeInterruptedOnError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn OnHandshakeInterruptedOnError(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QSslError) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_HandshakeInterruptedOnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#closed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn Closed(self: QWebSocketServer) void {
        qtc.QWebSocketServer_Closed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#closed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QWebSocketServer) callconv(.c) void `
    ///
    pub fn OnClosed(self: QWebSocketServer, callback: *const fn (QWebSocketServer) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_Closed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn Listen1(self: QWebSocketServer, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QWebSocketServer_Listen1(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

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
    pub fn Listen2(self: QWebSocketServer, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QWebSocketServer_Listen2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

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
    pub fn ObjectName(self: QWebSocketServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QWebSocketServer, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn IsWidgetType(self: QWebSocketServer) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn IsWindowType(self: QWebSocketServer) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn IsQuickItemType(self: QWebSocketServer) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn SignalsBlocked(self: QWebSocketServer) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QWebSocketServer, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn Thread(self: QWebSocketServer) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QWebSocketServer, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QWebSocketServer, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QWebSocketServer, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QWebSocketServer, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QWebSocketServer, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QWebSocketServer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qwebsocketserver.Children: Memory allocation failed");
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
    /// ` self: QWebSocketServer `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QWebSocketServer, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: QWebSocketServer, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QWebSocketServer, obj: anytype) void {
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
    /// ` self: QWebSocketServer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QWebSocketServer, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebSocketServer `
    ///
    pub fn Disconnect3(self: QWebSocketServer) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QWebSocketServer, receiver: anytype) bool {
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
    /// ` self: QWebSocketServer `
    ///
    pub fn DumpObjectTree(self: QWebSocketServer) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn DumpObjectInfo(self: QWebSocketServer) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QWebSocketServer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebSocketServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QWebSocketServer, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QWebSocketServer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebsocketserver.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebsocketserver.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebSocketServer `
    ///
    pub fn BindingStorage(self: QWebSocketServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn BindingStorage2(self: QWebSocketServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn Destroyed(self: QWebSocketServer) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QWebSocketServer, callback: *const fn (QWebSocketServer) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn Parent(self: QWebSocketServer) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QWebSocketServer, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn DeleteLater(self: QWebSocketServer) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QWebSocketServer, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QWebSocketServer, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebSocketServer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QWebSocketServer, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QWebSocketServer, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QWebSocketServer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QWebSocketServer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebSocketServer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QWebSocketServer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebSocketServer `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QWebSocketServer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QWebSocketServer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebSocketServer_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocketServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QWebSocketServer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebSocketServer_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QEvent) callconv(.c) bool) void {
        qtc.QWebSocketServer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QWebSocketServer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebSocketServer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocketServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QWebSocketServer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebSocketServer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QWebSocketServer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QWebSocketServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QWebSocketServer_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocketServer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QWebSocketServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QWebSocketServer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QTimerEvent) callconv(.c) void) void {
        qtc.QWebSocketServer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QWebSocketServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QWebSocketServer_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocketServer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QWebSocketServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QWebSocketServer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QChildEvent) callconv(.c) void) void {
        qtc.QWebSocketServer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QWebSocketServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QWebSocketServer_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocketServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QWebSocketServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QWebSocketServer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QEvent) callconv(.c) void) void {
        qtc.QWebSocketServer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QWebSocketServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocketServer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QWebSocketServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocketServer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QMetaMethod) callconv(.c) void) void {
        qtc.QWebSocketServer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QWebSocketServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocketServer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QWebSocketServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocketServer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QMetaMethod) callconv(.c) void) void {
        qtc.QWebSocketServer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QWebSocketServer) QObject {
        return .{ .ptr = qtc.QWebSocketServer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebSocketServer `
    ///
    pub fn SuperSender(self: QWebSocketServer) QObject {
        return .{ .ptr = qtc.QWebSocketServer_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QWebSocketServer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QWebSocketServer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebSocketServer `
    ///
    pub fn SuperSenderSignalIndex(self: QWebSocketServer) i32 {
        return qtc.QWebSocketServer_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QWebSocketServer, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebSocketServer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QWebSocketServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocketServer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QWebSocketServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocketServer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QWebSocketServer, callback: *const fn (QWebSocketServer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebSocketServer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QWebSocketServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebSocketServer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocketServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QWebSocketServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebSocketServer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QWebSocketServer, callback: *const fn (QWebSocketServer, QMetaMethod) callconv(.c) bool) void {
        qtc.QWebSocketServer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QWebSocketServer, callback: *const fn (QWebSocketServer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#dtor.QWebSocketServer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebSocketServer `
    ///
    pub fn Delete(self: QWebSocketServer) void {
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
