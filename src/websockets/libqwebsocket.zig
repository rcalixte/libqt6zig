const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAuthenticator = @import("libqt6").QAuthenticator;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHostAddress = @import("libqt6").QHostAddress;
const QMaskGenerator = @import("libqt6").QMaskGenerator;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkProxy = @import("libqt6").QNetworkProxy;
const QNetworkRequest = @import("libqt6").QNetworkRequest;
const QObject = @import("libqt6").QObject;
const QSslConfiguration = @import("libqt6").QSslConfiguration;
const QSslError = @import("libqt6").QSslError;
const QSslPreSharedKeyAuthenticator = @import("libqt6").QSslPreSharedKeyAuthenticator;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWebSocketHandshakeOptions = @import("libqt6").QWebSocketHandshakeOptions;
const qabstractsocket_enums = @import("../network/libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("../network/libqssl.zig").enums;
const qwebsocketprotocol_enums = @import("libqwebsocketprotocol.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html)
pub const QWebSocket = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QWebSocket,

    pub const _is_QWebSocket = {};
    pub const _is_QObject = {};

    /// New constructs a new QWebSocket object.
    ///
    pub fn New() QWebSocket {
        return .{ .ptr = qtc.QWebSocket_new() };
    }

    /// New2 constructs a new QWebSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: []const u8 `
    ///
    pub fn New2(origin: []const u8) QWebSocket {
        const origin_str = qtc.libqt_string{
            .len = origin.len,
            .data = origin.ptr,
        };
        return .{ .ptr = qtc.QWebSocket_new2(origin_str) };
    }

    /// New3 constructs a new QWebSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: []const u8 `
    ///
    /// ` version: qwebsocketprotocol_enums.Version `
    ///
    pub fn New3(origin: []const u8, version: i32) QWebSocket {
        const origin_str = qtc.libqt_string{
            .len = origin.len,
            .data = origin.ptr,
        };
        return .{ .ptr = qtc.QWebSocket_new3(origin_str, @bitCast(version)) };
    }

    /// New4 constructs a new QWebSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: []const u8 `
    ///
    /// ` version: qwebsocketprotocol_enums.Version `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(origin: []const u8, version: i32, parent: anytype) QWebSocket {
        const origin_str = qtc.libqt_string{
            .len = origin.len,
            .data = origin.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QWebSocket_new4(origin_str, @bitCast(version), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn MetaObject(self: QWebSocket) QMetaObject {
        return .{ .ptr = qtc.QWebSocket_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QWebSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QWebSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    pub fn SuperMetaObject(self: QWebSocket) QMetaObject {
        return .{ .ptr = qtc.QWebSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QWebSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QWebSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QWebSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QWebSocket, callback: *const fn (QWebSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QWebSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Abort(self: QWebSocket) void {
        qtc.QWebSocket_Abort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn Error(self: QWebSocket) i32 {
        return qtc.QWebSocket_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Flush(self: QWebSocket) bool {
        return qtc.QWebSocket_Flush(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn IsValid(self: QWebSocket) bool {
        return qtc.QWebSocket_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn LocalAddress(self: QWebSocket) QHostAddress {
        return .{ .ptr = qtc.QWebSocket_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn LocalPort(self: QWebSocket) u16 {
        return qtc.QWebSocket_LocalPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn PauseMode(self: QWebSocket) i32 {
        return qtc.QWebSocket_PauseMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn PeerAddress(self: QWebSocket) QHostAddress {
        return .{ .ptr = qtc.QWebSocket_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerName(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_PeerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.PeerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn PeerPort(self: QWebSocket) u16 {
        return qtc.QWebSocket_PeerPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Proxy(self: QWebSocket) QNetworkProxy {
        return .{ .ptr = qtc.QWebSocket_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn SetProxy(self: QWebSocket, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QWebSocket_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaskGenerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` maskGenerator: QMaskGenerator `
    ///
    pub fn SetMaskGenerator(self: QWebSocket, maskGenerator: anytype) void {
        comptime _ = @TypeOf(maskGenerator)._is_QMaskGenerator;
        qtc.QWebSocket_SetMaskGenerator(@ptrCast(self.ptr), @ptrCast(maskGenerator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maskGenerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn MaskGenerator(self: QWebSocket) QMaskGenerator {
        return .{ .ptr = qtc.QWebSocket_MaskGenerator(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn ReadBufferSize(self: QWebSocket) i64 {
        return qtc.QWebSocket_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SetReadBufferSize(self: QWebSocket, size: i64) void {
        qtc.QWebSocket_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Resume(self: QWebSocket) void {
        qtc.QWebSocket_Resume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn SetPauseMode(self: QWebSocket, pauseMode: i32) void {
        qtc.QWebSocket_SetPauseMode(@ptrCast(self.ptr), @bitCast(pauseMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketState `
    ///
    pub fn State(self: QWebSocket) i32 {
        return qtc.QWebSocket_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` qwebsocketprotocol_enums.Version `
    ///
    pub fn Version(self: QWebSocket) i32 {
        return qtc.QWebSocket_Version(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#resourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResourceName(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_ResourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.ResourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#requestUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn RequestUrl(self: QWebSocket) QUrl {
        return .{ .ptr = qtc.QWebSocket_RequestUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Request(self: QWebSocket) QNetworkRequest {
        return .{ .ptr = qtc.QWebSocket_Request(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn HandshakeOptions(self: QWebSocket) QWebSocketHandshakeOptions {
        return .{ .ptr = qtc.QWebSocket_HandshakeOptions(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Origin(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_Origin(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Origin: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#subprotocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subprotocol(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_Subprotocol(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Subprotocol: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#closeCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn CloseCode(self: QWebSocket) i32 {
        return qtc.QWebSocket_CloseCode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#closeReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CloseReason(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_CloseReason(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.CloseReason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sendTextMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SendTextMessage(self: QWebSocket, message: []const u8) i64 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return qtc.QWebSocket_SendTextMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sendBinaryMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn SendBinaryMessage(self: QWebSocket, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QWebSocket_SendBinaryMessage(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn IgnoreSslErrors(self: QWebSocket, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QWebSocket_IgnoreSslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#continueInterruptedHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn ContinueInterruptedHandshake(self: QWebSocket) void {
        qtc.QWebSocket_ContinueInterruptedHandshake(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` sslConfiguration: QSslConfiguration `
    ///
    pub fn SetSslConfiguration(self: QWebSocket, sslConfiguration: anytype) void {
        comptime _ = @TypeOf(sslConfiguration)._is_QSslConfiguration;
        qtc.QWebSocket_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(sslConfiguration.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn SslConfiguration(self: QWebSocket) QSslConfiguration {
        return .{ .ptr = qtc.QWebSocket_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn BytesToWrite(self: QWebSocket) i64 {
        return qtc.QWebSocket_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaxAllowedIncomingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` maxAllowedIncomingFrameSize: u64 `
    ///
    pub fn SetMaxAllowedIncomingFrameSize(self: QWebSocket, maxAllowedIncomingFrameSize: u64) void {
        qtc.QWebSocket_SetMaxAllowedIncomingFrameSize(@ptrCast(self.ptr), @bitCast(maxAllowedIncomingFrameSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxAllowedIncomingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn MaxAllowedIncomingFrameSize(self: QWebSocket) u64 {
        return qtc.QWebSocket_MaxAllowedIncomingFrameSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaxAllowedIncomingMessageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` maxAllowedIncomingMessageSize: u64 `
    ///
    pub fn SetMaxAllowedIncomingMessageSize(self: QWebSocket, maxAllowedIncomingMessageSize: u64) void {
        qtc.QWebSocket_SetMaxAllowedIncomingMessageSize(@ptrCast(self.ptr), @bitCast(maxAllowedIncomingMessageSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxAllowedIncomingMessageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn MaxAllowedIncomingMessageSize(self: QWebSocket) u64 {
        return qtc.QWebSocket_MaxAllowedIncomingMessageSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxIncomingMessageSize)
    ///
    pub fn MaxIncomingMessageSize() u64 {
        return qtc.QWebSocket_MaxIncomingMessageSize();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxIncomingFrameSize)
    ///
    pub fn MaxIncomingFrameSize() u64 {
        return qtc.QWebSocket_MaxIncomingFrameSize();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setOutgoingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` outgoingFrameSize: u64 `
    ///
    pub fn SetOutgoingFrameSize(self: QWebSocket, outgoingFrameSize: u64) void {
        qtc.QWebSocket_SetOutgoingFrameSize(@ptrCast(self.ptr), @bitCast(outgoingFrameSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#outgoingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn OutgoingFrameSize(self: QWebSocket) u64 {
        return qtc.QWebSocket_OutgoingFrameSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxOutgoingFrameSize)
    ///
    pub fn MaxOutgoingFrameSize() u64 {
        return qtc.QWebSocket_MaxOutgoingFrameSize();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Close(self: QWebSocket) void {
        qtc.QWebSocket_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` url: QUrl `
    ///
    pub fn Open(self: QWebSocket, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebSocket_Open(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` request: QNetworkRequest `
    ///
    pub fn Open2(self: QWebSocket, request: anytype) void {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        qtc.QWebSocket_Open2(@ptrCast(self.ptr), @ptrCast(request.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` url: QUrl `
    ///
    /// ` options: QWebSocketHandshakeOptions `
    ///
    pub fn Open3(self: QWebSocket, url: anytype, options: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(options)._is_QWebSocketHandshakeOptions;
        qtc.QWebSocket_Open3(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(options.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` request: QNetworkRequest `
    ///
    /// ` options: QWebSocketHandshakeOptions `
    ///
    pub fn Open4(self: QWebSocket, request: anytype, options: anytype) void {
        comptime _ = @TypeOf(request)._is_QNetworkRequest;
        comptime _ = @TypeOf(options)._is_QWebSocketHandshakeOptions;
        qtc.QWebSocket_Open4(@ptrCast(self.ptr), @ptrCast(request.ptr), @ptrCast(options.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Ping(self: QWebSocket) void {
        qtc.QWebSocket_Ping(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn IgnoreSslErrors2(self: QWebSocket) void {
        qtc.QWebSocket_IgnoreSslErrors2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn AboutToClose(self: QWebSocket) void {
        qtc.QWebSocket_AboutToClose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Connected(self: QWebSocket) void {
        qtc.QWebSocket_Connected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn OnConnected(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
        qtc.QWebSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Disconnected(self: QWebSocket) void {
        qtc.QWebSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
        qtc.QWebSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn StateChanged(self: QWebSocket, state: i32) void {
        qtc.QWebSocket_StateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QWebSocket, callback: *const fn (QWebSocket, i32) callconv(.c) void) void {
        qtc.QWebSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` proxy: QNetworkProxy `
    ///
    /// ` pAuthenticator: QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: QWebSocket, proxy: anytype, pAuthenticator: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QNetworkProxy;
        comptime _ = @TypeOf(pAuthenticator)._is_QAuthenticator;
        qtc.QWebSocket_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(proxy.ptr), @ptrCast(pAuthenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, proxy: QNetworkProxy, pAuthenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: QWebSocket, callback: *const fn (QWebSocket, QNetworkProxy, QAuthenticator) callconv(.c) void) void {
        qtc.QWebSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#authenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn AuthenticationRequired(self: QWebSocket, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QWebSocket_AuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#authenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn OnAuthenticationRequired(self: QWebSocket, callback: *const fn (QWebSocket, QAuthenticator) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn ReadChannelFinished(self: QWebSocket) void {
        qtc.QWebSocket_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
        qtc.QWebSocket_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textFrameReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` frame: []const u8 `
    ///
    /// ` isLastFrame: bool `
    ///
    pub fn TextFrameReceived(self: QWebSocket, frame: []const u8, isLastFrame: bool) void {
        const frame_str = qtc.libqt_string{
            .len = frame.len,
            .data = frame.ptr,
        };
        qtc.QWebSocket_TextFrameReceived(@ptrCast(self.ptr), frame_str, isLastFrame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textFrameReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, frame: [*:0]const u8, isLastFrame: bool) callconv(.c) void `
    ///
    pub fn OnTextFrameReceived(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.QWebSocket_Connect_TextFrameReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryFrameReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` frame: []u8 `
    ///
    /// ` isLastFrame: bool `
    ///
    pub fn BinaryFrameReceived(self: QWebSocket, frame: []u8, isLastFrame: bool) void {
        const frame_str = qtc.libqt_string{
            .len = frame.len,
            .data = frame.ptr,
        };
        qtc.QWebSocket_BinaryFrameReceived(@ptrCast(self.ptr), frame_str, isLastFrame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryFrameReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, frame: qtc.libqt_string, isLastFrame: bool) callconv(.c) void `
    ///
    pub fn OnBinaryFrameReceived(self: QWebSocket, callback: *const fn (QWebSocket, qtc.libqt_string, bool) callconv(.c) void) void {
        qtc.QWebSocket_Connect_BinaryFrameReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textMessageReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` message: []const u8 `
    ///
    pub fn TextMessageReceived(self: QWebSocket, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QWebSocket_TextMessageReceived(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textMessageReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextMessageReceived(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_TextMessageReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryMessageReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` message: []u8 `
    ///
    pub fn BinaryMessageReceived(self: QWebSocket, message: []u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QWebSocket_BinaryMessageReceived(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryMessageReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, message: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnBinaryMessageReceived(self: QWebSocket, callback: *const fn (QWebSocket, qtc.libqt_string) callconv(.c) void) void {
        qtc.QWebSocket_Connect_BinaryMessageReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errorVal: qabstractsocket_enums.SocketError `
    ///
    pub fn Error2(self: QWebSocket, errorVal: i32) void {
        qtc.QWebSocket_Error2(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errorVal: qabstractsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: QWebSocket, errorVal: i32) void {
        qtc.QWebSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, errorVal: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QWebSocket, callback: *const fn (QWebSocket, i32) callconv(.c) void) void {
        qtc.QWebSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` elapsedTime: u64 `
    ///
    /// ` payload: []u8 `
    ///
    pub fn Pong(self: QWebSocket, elapsedTime: u64, payload: []u8) void {
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        qtc.QWebSocket_Pong(@ptrCast(self.ptr), @bitCast(elapsedTime), payload_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pong)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, elapsedTime: u64, payload: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn OnPong(self: QWebSocket, callback: *const fn (QWebSocket, u64, qtc.libqt_string) callconv(.c) void) void {
        qtc.QWebSocket_Connect_Pong(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: QWebSocket, bytes: i64) void {
        qtc.QWebSocket_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: QWebSocket, callback: *const fn (QWebSocket, i64) callconv(.c) void) void {
        qtc.QWebSocket_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn PeerVerifyError(self: QWebSocket, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QWebSocket_PeerVerifyError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn OnPeerVerifyError(self: QWebSocket, callback: *const fn (QWebSocket, QSslError) callconv(.c) void) void {
        qtc.QWebSocket_Connect_PeerVerifyError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn SslErrors(self: QWebSocket, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QWebSocket_SslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: QWebSocket, callback: *const fn (QWebSocket, qtc.libqt_list) callconv(.c) void) void {
        qtc.QWebSocket_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: QWebSocket, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QWebSocket_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: QWebSocket, callback: *const fn (QWebSocket, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QWebSocket_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AlertSent(self: QWebSocket, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocket_AlertSent(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertSent(self: QWebSocket, callback: *const fn (QWebSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AlertSent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AlertReceived(self: QWebSocket, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocket_AlertReceived(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertReceived(self: QWebSocket, callback: *const fn (QWebSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AlertReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn HandshakeInterruptedOnError(self: QWebSocket, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QWebSocket_HandshakeInterruptedOnError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn OnHandshakeInterruptedOnError(self: QWebSocket, callback: *const fn (QWebSocket, QSslError) callconv(.c) void) void {
        qtc.QWebSocket_Connect_HandshakeInterruptedOnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` closeCode: qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn Close1(self: QWebSocket, closeCode: i32) void {
        qtc.QWebSocket_Close1(@ptrCast(self.ptr), @bitCast(closeCode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` closeCode: qwebsocketprotocol_enums.CloseCode `
    ///
    /// ` reason: []const u8 `
    ///
    pub fn Close2(self: QWebSocket, closeCode: i32, reason: []const u8) void {
        const reason_str = qtc.libqt_string{
            .len = reason.len,
            .data = reason.ptr,
        };
        qtc.QWebSocket_Close2(@ptrCast(self.ptr), @bitCast(closeCode), reason_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` payload: []u8 `
    ///
    pub fn Ping1(self: QWebSocket, payload: []u8) void {
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        qtc.QWebSocket_Ping1(@ptrCast(self.ptr), payload_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QWebSocket, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn IsWidgetType(self: QWebSocket) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn IsWindowType(self: QWebSocket) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn IsQuickItemType(self: QWebSocket) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn SignalsBlocked(self: QWebSocket) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QWebSocket, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Thread(self: QWebSocket) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QWebSocket, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QWebSocket, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QWebSocket, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QWebSocket, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QWebSocket, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QWebSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qwebsocket.Children: Memory allocation failed");
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
    /// ` self: QWebSocket `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QWebSocket, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QWebSocket, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QWebSocket, obj: anytype) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QWebSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebSocket `
    ///
    pub fn Disconnect3(self: QWebSocket) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QWebSocket, receiver: anytype) bool {
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
    /// ` self: QWebSocket `
    ///
    pub fn DumpObjectTree(self: QWebSocket) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn DumpObjectInfo(self: QWebSocket) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QWebSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QWebSocket, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QWebSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qwebsocket.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qwebsocket.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebSocket `
    ///
    pub fn BindingStorage(self: QWebSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn BindingStorage2(self: QWebSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Destroyed(self: QWebSocket) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Parent(self: QWebSocket) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QWebSocket, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn DeleteLater(self: QWebSocket) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QWebSocket, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QWebSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QWebSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QWebSocket, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QWebSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QWebSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QWebSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QWebSocket, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QWebSocket, callback: *const fn (QWebSocket, QObject) callconv(.c) void) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QWebSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebSocket_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QWebSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QWebSocket, callback: *const fn (QWebSocket, QEvent) callconv(.c) bool) void {
        qtc.QWebSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QWebSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QWebSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QWebSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QWebSocket, callback: *const fn (QWebSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QWebSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QWebSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QWebSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QWebSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QWebSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QWebSocket, callback: *const fn (QWebSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QWebSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QWebSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QWebSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QWebSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QWebSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QWebSocket, callback: *const fn (QWebSocket, QChildEvent) callconv(.c) void) void {
        qtc.QWebSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QWebSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QWebSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QWebSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QWebSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QWebSocket, callback: *const fn (QWebSocket, QEvent) callconv(.c) void) void {
        qtc.QWebSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QWebSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QWebSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QWebSocket, callback: *const fn (QWebSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QWebSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QWebSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QWebSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QWebSocket, callback: *const fn (QWebSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QWebSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Sender(self: QWebSocket) QObject {
        return .{ .ptr = qtc.QWebSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebSocket `
    ///
    pub fn SuperSender(self: QWebSocket) QObject {
        return .{ .ptr = qtc.QWebSocket_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QWebSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QWebSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn SenderSignalIndex(self: QWebSocket) i32 {
        return qtc.QWebSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebSocket `
    ///
    pub fn SuperSenderSignalIndex(self: QWebSocket) i32 {
        return qtc.QWebSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QWebSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QWebSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QWebSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QWebSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QWebSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QWebSocket, callback: *const fn (QWebSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QWebSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#dtor.QWebSocket)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebSocket `
    ///
    pub fn Delete(self: QWebSocket) void {
        qtc.QWebSocket_Delete(@ptrCast(self.ptr));
    }
};
