const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractsocket_enums = @import("../network/libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("../network/libqssl.zig").enums;
const qwebsocketprotocol_enums = @import("libqwebsocketprotocol.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html)
pub const qwebsocket = struct {
    /// New constructs a new QWebSocket object.
    ///
    pub fn New() QtC.QWebSocket {
        return qtc.QWebSocket_new();
    }

    /// New2 constructs a new QWebSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: []const u8 `
    ///
    pub fn New2(origin: []const u8) QtC.QWebSocket {
        const origin_str = qtc.libqt_string{
            .len = origin.len,
            .data = origin.ptr,
        };

        return qtc.QWebSocket_new2(origin_str);
    }

    /// New3 constructs a new QWebSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: []const u8 `
    ///
    /// ` version: qwebsocketprotocol_enums.Version `
    ///
    pub fn New3(origin: []const u8, version: i32) QtC.QWebSocket {
        const origin_str = qtc.libqt_string{
            .len = origin.len,
            .data = origin.ptr,
        };

        return qtc.QWebSocket_new3(origin_str, @intCast(version));
    }

    /// New4 constructs a new QWebSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` origin: []const u8 `
    ///
    /// ` version: qwebsocketprotocol_enums.Version `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New4(origin: []const u8, version: i32, parent: ?*anyopaque) QtC.QWebSocket {
        const origin_str = qtc.libqt_string{
            .len = origin.len,
            .data = origin.ptr,
        };

        return qtc.QWebSocket_new4(origin_str, @intCast(version), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWebSocket_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QWebSocket_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QWebSocket_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocket_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebSocket_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocket_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocket_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebSocket_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocket_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Abort(self: ?*anyopaque) void {
        qtc.QWebSocket_Abort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QWebSocket_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Flush(self: ?*anyopaque) bool {
        return qtc.QWebSocket_Flush(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QWebSocket_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn LocalAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QWebSocket_LocalAddress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn LocalPort(self: ?*anyopaque) u16 {
        return qtc.QWebSocket_LocalPort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn PauseMode(self: ?*anyopaque) i32 {
        return qtc.QWebSocket_PauseMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn PeerAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QWebSocket_PeerAddress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_PeerName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.PeerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn PeerPort(self: ?*anyopaque) u16 {
        return qtc.QWebSocket_PeerPort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Proxy(self: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QWebSocket_Proxy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` networkProxy: QtC.QNetworkProxy `
    ///
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        qtc.QWebSocket_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaskGenerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` maskGenerator: QtC.QMaskGenerator `
    ///
    pub fn SetMaskGenerator(self: ?*anyopaque, maskGenerator: ?*anyopaque) void {
        qtc.QWebSocket_SetMaskGenerator(@ptrCast(self), @ptrCast(maskGenerator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maskGenerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn MaskGenerator(self: ?*anyopaque) QtC.QMaskGenerator {
        return qtc.QWebSocket_MaskGenerator(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn ReadBufferSize(self: ?*anyopaque) i64 {
        return qtc.QWebSocket_ReadBufferSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QWebSocket_SetReadBufferSize(@ptrCast(self), @intCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Resume(self: ?*anyopaque) void {
        qtc.QWebSocket_Resume(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn SetPauseMode(self: ?*anyopaque, pauseMode: i32) void {
        qtc.QWebSocket_SetPauseMode(@ptrCast(self), @intCast(pauseMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketState `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QWebSocket_State(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` qwebsocketprotocol_enums.Version `
    ///
    pub fn Version(self: ?*anyopaque) i32 {
        return qtc.QWebSocket_Version(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#resourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ResourceName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_ResourceName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.ResourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#requestUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn RequestUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.QWebSocket_RequestUrl(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Request(self: ?*anyopaque) QtC.QNetworkRequest {
        return qtc.QWebSocket_Request(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn HandshakeOptions(self: ?*anyopaque) QtC.QWebSocketHandshakeOptions {
        return qtc.QWebSocket_HandshakeOptions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Origin(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_Origin(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Origin: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#subprotocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Subprotocol(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_Subprotocol(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Subprotocol: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#closeCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ## Returns:
    ///
    /// ` qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn CloseCode(self: ?*anyopaque) i32 {
        return qtc.QWebSocket_CloseCode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#closeReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CloseReason(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_CloseReason(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.CloseReason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sendTextMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SendTextMessage(self: ?*anyopaque, message: []const u8) i64 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return qtc.QWebSocket_SendTextMessage(@ptrCast(self), message_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sendBinaryMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn SendBinaryMessage(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QWebSocket_SendBinaryMessage(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` errors: []QtC.QSslError `
    ///
    pub fn IgnoreSslErrors(self: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QWebSocket_IgnoreSslErrors(@ptrCast(self), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#continueInterruptedHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn ContinueInterruptedHandshake(self: ?*anyopaque) void {
        qtc.QWebSocket_ContinueInterruptedHandshake(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` sslConfiguration: QtC.QSslConfiguration `
    ///
    pub fn SetSslConfiguration(self: ?*anyopaque, sslConfiguration: ?*anyopaque) void {
        qtc.QWebSocket_SetSslConfiguration(@ptrCast(self), @ptrCast(sslConfiguration));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn SslConfiguration(self: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QWebSocket_SslConfiguration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QWebSocket_BytesToWrite(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaxAllowedIncomingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` maxAllowedIncomingFrameSize: u64 `
    ///
    pub fn SetMaxAllowedIncomingFrameSize(self: ?*anyopaque, maxAllowedIncomingFrameSize: u64) void {
        qtc.QWebSocket_SetMaxAllowedIncomingFrameSize(@ptrCast(self), @intCast(maxAllowedIncomingFrameSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxAllowedIncomingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn MaxAllowedIncomingFrameSize(self: ?*anyopaque) u64 {
        return qtc.QWebSocket_MaxAllowedIncomingFrameSize(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaxAllowedIncomingMessageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` maxAllowedIncomingMessageSize: u64 `
    ///
    pub fn SetMaxAllowedIncomingMessageSize(self: ?*anyopaque, maxAllowedIncomingMessageSize: u64) void {
        qtc.QWebSocket_SetMaxAllowedIncomingMessageSize(@ptrCast(self), @intCast(maxAllowedIncomingMessageSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxAllowedIncomingMessageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn MaxAllowedIncomingMessageSize(self: ?*anyopaque) u64 {
        return qtc.QWebSocket_MaxAllowedIncomingMessageSize(@ptrCast(self));
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
    /// ` self: QtC.QWebSocket `
    ///
    /// ` outgoingFrameSize: u64 `
    ///
    pub fn SetOutgoingFrameSize(self: ?*anyopaque, outgoingFrameSize: u64) void {
        qtc.QWebSocket_SetOutgoingFrameSize(@ptrCast(self), @intCast(outgoingFrameSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#outgoingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn OutgoingFrameSize(self: ?*anyopaque) u64 {
        return qtc.QWebSocket_OutgoingFrameSize(@ptrCast(self));
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
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Close(self: ?*anyopaque) void {
        qtc.QWebSocket_Close(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn Open(self: ?*anyopaque, url: ?*anyopaque) void {
        qtc.QWebSocket_Open(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    pub fn Open2(self: ?*anyopaque, request: ?*anyopaque) void {
        qtc.QWebSocket_Open2(@ptrCast(self), @ptrCast(request));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` options: QtC.QWebSocketHandshakeOptions `
    ///
    pub fn Open3(self: ?*anyopaque, url: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QWebSocket_Open3(@ptrCast(self), @ptrCast(url), @ptrCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` request: QtC.QNetworkRequest `
    ///
    /// ` options: QtC.QWebSocketHandshakeOptions `
    ///
    pub fn Open4(self: ?*anyopaque, request: ?*anyopaque, options: ?*anyopaque) void {
        qtc.QWebSocket_Open4(@ptrCast(self), @ptrCast(request), @ptrCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Ping(self: ?*anyopaque) void {
        qtc.QWebSocket_Ping(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn IgnoreSslErrors2(self: ?*anyopaque) void {
        qtc.QWebSocket_IgnoreSslErrors2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QWebSocket_AboutToClose(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AboutToClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Connected(self: ?*anyopaque) void {
        qtc.QWebSocket_Connected(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket) callconv(.c) void `
    ///
    pub fn OnConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_Connect_Connected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Disconnected(self: ?*anyopaque) void {
        qtc.QWebSocket_Disconnected(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_Connect_Disconnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn StateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QWebSocket_StateChanged(@ptrCast(self), @intCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWebSocket_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` proxy: QtC.QNetworkProxy `
    ///
    /// ` pAuthenticator: QtC.QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, pAuthenticator: ?*anyopaque) void {
        qtc.QWebSocket_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(pAuthenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, proxy: QtC.QNetworkProxy, pAuthenticator: QtC.QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#authenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` authenticator: QtC.QAuthenticator `
    ///
    pub fn AuthenticationRequired(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QWebSocket_AuthenticationRequired(@ptrCast(self), @ptrCast(authenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#authenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, authenticator: QtC.QAuthenticator) callconv(.c) void `
    ///
    pub fn OnAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QWebSocket_ReadChannelFinished(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_Connect_ReadChannelFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textFrameReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` frame: []const u8 `
    ///
    /// ` isLastFrame: bool `
    ///
    pub fn TextFrameReceived(self: ?*anyopaque, frame: []const u8, isLastFrame: bool) void {
        const frame_str = qtc.libqt_string{
            .len = frame.len,
            .data = frame.ptr,
        };
        qtc.QWebSocket_TextFrameReceived(@ptrCast(self), frame_str, isLastFrame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textFrameReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, frame: [*:0]const u8, isLastFrame: bool) callconv(.c) void `
    ///
    pub fn OnTextFrameReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.QWebSocket_Connect_TextFrameReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryFrameReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` frame: []u8 `
    ///
    /// ` isLastFrame: bool `
    ///
    pub fn BinaryFrameReceived(self: ?*anyopaque, frame: []u8, isLastFrame: bool) void {
        const frame_str = qtc.libqt_string{
            .len = frame.len,
            .data = frame.ptr,
        };
        qtc.QWebSocket_BinaryFrameReceived(@ptrCast(self), frame_str, isLastFrame);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryFrameReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, frame: [*:0]u8, isLastFrame: bool) callconv(.c) void `
    ///
    pub fn OnBinaryFrameReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8, bool) callconv(.c) void) void {
        qtc.QWebSocket_Connect_BinaryFrameReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textMessageReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` message: []const u8 `
    ///
    pub fn TextMessageReceived(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QWebSocket_TextMessageReceived(@ptrCast(self), message_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textMessageReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextMessageReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_TextMessageReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryMessageReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` message: []u8 `
    ///
    pub fn BinaryMessageReceived(self: ?*anyopaque, message: []u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QWebSocket_BinaryMessageReceived(@ptrCast(self), message_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryMessageReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, message: [*:0]u8) callconv(.c) void `
    ///
    pub fn OnBinaryMessageReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_BinaryMessageReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` errorVal: qabstractsocket_enums.SocketError `
    ///
    pub fn Error2(self: ?*anyopaque, errorVal: i32) void {
        qtc.QWebSocket_Error2(@ptrCast(self), @intCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` errorVal: qabstractsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32) void {
        qtc.QWebSocket_ErrorOccurred(@ptrCast(self), @intCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, errorVal: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QWebSocket_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pong)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` elapsedTime: u64 `
    ///
    /// ` payload: []u8 `
    ///
    pub fn Pong(self: ?*anyopaque, elapsedTime: u64, payload: []u8) void {
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        qtc.QWebSocket_Pong(@ptrCast(self), @intCast(elapsedTime), payload_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pong)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, elapsedTime: u64, payload: [*:0]u8) callconv(.c) void `
    ///
    pub fn OnPong(self: ?*anyopaque, callback: *const fn (?*anyopaque, u64, [*:0]u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_Pong(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QWebSocket_BytesWritten(@ptrCast(self), @intCast(bytes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QWebSocket_Connect_BytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` errorVal: QtC.QSslError `
    ///
    pub fn PeerVerifyError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QWebSocket_PeerVerifyError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, errorVal: QtC.QSslError) callconv(.c) void `
    ///
    pub fn OnPeerVerifyError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_Connect_PeerVerifyError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` errors: []QtC.QSslError `
    ///
    pub fn SslErrors(self: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QWebSocket_SslErrors(@ptrCast(self), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, errors: [*]QtC.QSslError) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*]QtC.QSslError) callconv(.c) void) void {
        qtc.QWebSocket_Connect_SslErrors(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` authenticator: QtC.QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QWebSocket_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(authenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, authenticator: QtC.QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
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
        qtc.QWebSocket_AlertSent(@ptrCast(self), @intCast(level), @intCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertSent(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AlertSent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
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
        qtc.QWebSocket_AlertReceived(@ptrCast(self), @intCast(level), @intCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AlertReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` errorVal: QtC.QSslError `
    ///
    pub fn HandshakeInterruptedOnError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QWebSocket_HandshakeInterruptedOnError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, errorVal: QtC.QSslError) callconv(.c) void `
    ///
    pub fn OnHandshakeInterruptedOnError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_Connect_HandshakeInterruptedOnError(@ptrCast(self), @intCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Tr2: Memory allocation failed");
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
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` closeCode: qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn Close1(self: ?*anyopaque, closeCode: i32) void {
        qtc.QWebSocket_Close1(@ptrCast(self), @intCast(closeCode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` closeCode: qwebsocketprotocol_enums.CloseCode `
    ///
    /// ` reason: []const u8 `
    ///
    pub fn Close2(self: ?*anyopaque, closeCode: i32, reason: []const u8) void {
        const reason_str = qtc.libqt_string{
            .len = reason.len,
            .data = reason.ptr,
        };
        qtc.QWebSocket_Close2(@ptrCast(self), @intCast(closeCode), reason_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` payload: []u8 `
    ///
    pub fn Ping1(self: ?*anyopaque, payload: []u8) void {
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        qtc.QWebSocket_Ping1(@ptrCast(self), payload_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QWebSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qwebsocket.Children: Memory allocation failed");
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
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
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @intCast(param5));
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
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
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
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
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
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebSocket_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebSocket_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebSocket_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebSocket_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QWebSocket_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebSocket_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocket_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocket_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocket_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocket_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocket_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QWebSocket_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebSocket_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebSocket_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebSocket_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QWebSocket_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebSocket_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWebSocket_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QWebSocket_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QWebSocket_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWebSocket_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QWebSocket_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebSocket_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocket_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocket_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebSocket_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWebSocket_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QWebSocket_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket`
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWebSocket_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    /// ` callback: *const fn (self: QtC.QWebSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#dtor.QWebSocket)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QWebSocket `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebSocket_Delete(@ptrCast(self));
    }
};
