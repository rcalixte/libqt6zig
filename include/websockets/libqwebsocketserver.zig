const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractsocket_enums = @import("../network/libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("../network/libqssl.zig").enums;
const qwebsocketprotocol_enums = @import("libqwebsocketprotocol.zig").enums;
const qwebsocketserver_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html)
pub const qwebsocketserver = struct {
    /// New constructs a new QWebSocketServer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` serverName: []const u8 `
    ///
    /// ` secureMode: qwebsocketserver_enums.SslMode `
    ///
    pub fn New(serverName: []const u8, secureMode: i32) QtC.QWebSocketServer {
        const serverName_str = qtc.libqt_string{
            .len = serverName.len,
            .data = serverName.ptr,
        };

        return qtc.QWebSocketServer_new(serverName_str, @bitCast(secureMode));
    }

    /// New2 constructs a new QWebSocketServer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` serverName: []const u8 `
    ///
    /// ` secureMode: qwebsocketserver_enums.SslMode `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(serverName: []const u8, secureMode: i32, parent: ?*anyopaque) QtC.QWebSocketServer {
        const serverName_str = qtc.libqt_string{
            .len = serverName.len,
            .data = serverName.ptr,
        };

        return qtc.QWebSocketServer_new2(serverName_str, @bitCast(secureMode), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWebSocketServer_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QWebSocketServer_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWebSocketServer_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocketServer_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebSocketServer_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocketServer_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocketServer_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebSocketServer_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocketServer_QBaseMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn Listen(self: ?*anyopaque) bool {
        return qtc.QWebSocketServer_Listen(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn Close(self: ?*anyopaque) void {
        qtc.QWebSocketServer_Close(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#isListening)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn IsListening(self: ?*anyopaque) bool {
        return qtc.QWebSocketServer_IsListening(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setMaxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` numConnections: i32 `
    ///
    pub fn SetMaxPendingConnections(self: ?*anyopaque, numConnections: i32) void {
        qtc.QWebSocketServer_SetMaxPendingConnections(@ptrCast(self), @bitCast(numConnections));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#maxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn MaxPendingConnections(self: ?*anyopaque) i32 {
        return qtc.QWebSocketServer_MaxPendingConnections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` msec: i64 of milliseconds `
    ///
    pub fn SetHandshakeTimeout(self: ?*anyopaque, msec: i64) void {
        qtc.QWebSocketServer_SetHandshakeTimeout(@ptrCast(self), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ## Returns:
    ///
    /// ` i64 of milliseconds `
    ///
    pub fn HandshakeTimeout(self: ?*anyopaque) i64 {
        return qtc.QWebSocketServer_HandshakeTimeout(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setHandshakeTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetHandshakeTimeout2(self: ?*anyopaque, msec: i32) void {
        qtc.QWebSocketServer_SetHandshakeTimeout2(@ptrCast(self), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeTimeoutMS)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn HandshakeTimeoutMS(self: ?*anyopaque) i32 {
        return qtc.QWebSocketServer_HandshakeTimeoutMS(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn ServerPort(self: ?*anyopaque) u16 {
        return qtc.QWebSocketServer_ServerPort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn ServerAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QWebSocketServer_ServerAddress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn ServerUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebSocketServer_ServerUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#secureMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ## Returns:
    ///
    /// ` qwebsocketserver_enums.SslMode `
    ///
    pub fn SecureMode(self: ?*anyopaque) i32 {
        return qtc.QWebSocketServer_SecureMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` socketDescriptor: isize `
    ///
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize) bool {
        return qtc.QWebSocketServer_SetSocketDescriptor(@ptrCast(self), @bitCast(socketDescriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return qtc.QWebSocketServer_SocketDescriptor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setNativeDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` descriptor: isize `
    ///
    pub fn SetNativeDescriptor(self: ?*anyopaque, descriptor: isize) bool {
        return qtc.QWebSocketServer_SetNativeDescriptor(@ptrCast(self), @bitCast(descriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nativeDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn NativeDescriptor(self: ?*anyopaque) isize {
        return qtc.QWebSocketServer_NativeDescriptor(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#hasPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn HasPendingConnections(self: ?*anyopaque) bool {
        return qtc.QWebSocketServer_HasPendingConnections(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn NextPendingConnection(self: ?*anyopaque) QtC.QWebSocket {
        return qtc.QWebSocketServer_NextPendingConnection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QWebSocket `
    ///
    pub fn OnNextPendingConnection(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QWebSocket) void {
        qtc.QWebSocketServer_OnNextPendingConnection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#nextPendingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn QBaseNextPendingConnection(self: ?*anyopaque) QtC.QWebSocket {
        return qtc.QWebSocketServer_QBaseNextPendingConnection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ## Returns:
    ///
    /// ` qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QWebSocketServer_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocketServer_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#pauseAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn PauseAccepting(self: ?*anyopaque) void {
        qtc.QWebSocketServer_PauseAccepting(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#resumeAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn ResumeAccepting(self: ?*anyopaque) void {
        qtc.QWebSocketServer_ResumeAccepting(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setServerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` serverName: []const u8 `
    ///
    pub fn SetServerName(self: ?*anyopaque, serverName: []const u8) void {
        const serverName_str = qtc.libqt_string{
            .len = serverName.len,
            .data = serverName.ptr,
        };
        qtc.QWebSocketServer_SetServerName(@ptrCast(self), serverName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocketServer_ServerName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.ServerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSupportedSubprotocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` protocols: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetSupportedSubprotocols(self: ?*anyopaque, protocols: []const []const u8, allocator: std.mem.Allocator) void {
        const protocols_arr = allocator.alloc(qtc.libqt_string, protocols.len) catch @panic("qwebsocketserver.SetSupportedSubprotocols: Memory allocation failed");
        defer allocator.free(protocols_arr);
        for (protocols, 0..protocols.len) |item, i| {
            protocols_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const protocols_list = qtc.libqt_list{
            .len = protocols.len,
            .data = protocols_arr.ptr,
        };
        qtc.QWebSocketServer_SetSupportedSubprotocols(@ptrCast(self), protocols_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#supportedSubprotocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSubprotocols(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QWebSocketServer_SupportedSubprotocols(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` networkProxy: QtC.QNetworkProxy `
    ///
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        qtc.QWebSocketServer_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn Proxy(self: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QWebSocketServer_Proxy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` sslConfiguration: QtC.QSslConfiguration `
    ///
    pub fn SetSslConfiguration(self: ?*anyopaque, sslConfiguration: ?*anyopaque) void {
        qtc.QWebSocketServer_SetSslConfiguration(@ptrCast(self), @ptrCast(sslConfiguration));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn SslConfiguration(self: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QWebSocketServer_SslConfiguration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#supportedVersions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qwebsocketprotocol_enums.Version `
    ///
    pub fn SupportedVersions(self: ?*anyopaque, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QWebSocketServer_SupportedVersions(@ptrCast(self));
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
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` socket: QtC.QTcpSocket `
    ///
    pub fn HandleConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QWebSocketServer_HandleConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#acceptError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn AcceptError(self: ?*anyopaque, socketError: i32) void {
        qtc.QWebSocketServer_AcceptError(@ptrCast(self), @bitCast(socketError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#acceptError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnAcceptError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_AcceptError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` closeCode: qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn ServerError(self: ?*anyopaque, closeCode: i32) void {
        qtc.QWebSocketServer_ServerError(@ptrCast(self), @bitCast(closeCode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#serverError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, closeCode: qwebsocketprotocol_enums.CloseCode) callconv(.c) void `
    ///
    pub fn OnServerError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_ServerError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#originAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` pAuthenticator: QtC.QWebSocketCorsAuthenticator `
    ///
    pub fn OriginAuthenticationRequired(self: ?*anyopaque, pAuthenticator: ?*anyopaque) void {
        qtc.QWebSocketServer_OriginAuthenticationRequired(@ptrCast(self), @ptrCast(pAuthenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#originAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, pAuthenticator: QtC.QWebSocketCorsAuthenticator) callconv(.c) void `
    ///
    pub fn OnOriginAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_OriginAuthenticationRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#newConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn NewConnection(self: ?*anyopaque) void {
        qtc.QWebSocketServer_NewConnection(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#newConnection)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer) callconv(.c) void `
    ///
    pub fn OnNewConnection(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_NewConnection(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` errorVal: QtC.QSslError `
    ///
    pub fn PeerVerifyError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QWebSocketServer_PeerVerifyError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, errorVal: QtC.QSslError) callconv(.c) void `
    ///
    pub fn OnPeerVerifyError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_PeerVerifyError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` errors: []QtC.QSslError `
    ///
    pub fn SslErrors(self: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QWebSocketServer_SslErrors(@ptrCast(self), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, errors: qtc.libqt_list ([]QtC.QSslError)) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_SslErrors(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` authenticator: QtC.QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QWebSocketServer_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(authenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, authenticator: QtC.QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AlertSent(self: ?*anyopaque, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocketServer_AlertSent(@ptrCast(self), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertSent(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_AlertSent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AlertReceived(self: ?*anyopaque, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocketServer_AlertReceived(@ptrCast(self), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_AlertReceived(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` errorVal: QtC.QSslError `
    ///
    pub fn HandshakeInterruptedOnError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QWebSocketServer_HandshakeInterruptedOnError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, errorVal: QtC.QSslError) callconv(.c) void `
    ///
    pub fn OnHandshakeInterruptedOnError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_HandshakeInterruptedOnError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#closed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn Closed(self: ?*anyopaque) void {
        qtc.QWebSocketServer_Closed(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#closed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer) callconv(.c) void `
    ///
    pub fn OnClosed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_Connect_Closed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocketserver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn Listen1(self: ?*anyopaque, address: ?*anyopaque) bool {
        return qtc.QWebSocketServer_Listen1(@ptrCast(self), @ptrCast(address));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn Listen2(self: ?*anyopaque, address: ?*anyopaque, port: u16) bool {
        return qtc.QWebSocketServer_Listen2(@ptrCast(self), @ptrCast(address), @bitCast(port));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qwebsocketserver.Children: Memory allocation failed");
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer) callconv(.c) void `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
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
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebSocketServer_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebSocketServer_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebSocketServer_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebSocketServer_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebSocketServer_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebSocketServer_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocketServer_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocketServer_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocketServer_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocketServer_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocketServer_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocketServer_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebSocketServer_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebSocketServer_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebSocketServer_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebSocketServer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocketServer_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWebSocketServer_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWebSocketServer_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QWebSocketServer_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWebSocketServer_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWebSocketServer_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebSocketServer_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocketServer_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocketServer_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebSocketServer_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWebSocketServer_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWebSocketServer_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebSocketServer_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocketServer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#dtor.QWebSocketServer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebSocketServer `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebSocketServer_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocketserver.html#public-types)
pub const enums = struct {
    pub const SslMode = enum(i32) {
        pub const SecureMode: i32 = 0;
        pub const NonSecureMode: i32 = 1;
    };
};
