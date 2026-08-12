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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QWebSocket object in C++ memory
    ///
    pub fn new() QWebSocket {
        return .{ .ptr = qtc.QWebSocket_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QWebSocket object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _origin: []const u8 `
    ///
    pub fn new2(_origin: []const u8) QWebSocket {
        const origin_str = qtc.libqt_string{
            .len = _origin.len,
            .data = _origin.ptr,
        };
        return .{ .ptr = qtc.QWebSocket_new2(origin_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QWebSocket object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _origin: []const u8 `
    ///
    /// ` _version: qwebsocketprotocol_enums.Version `
    ///
    pub fn new3(_origin: []const u8, _version: i32) QWebSocket {
        const origin_str = qtc.libqt_string{
            .len = _origin.len,
            .data = _origin.ptr,
        };
        return .{ .ptr = qtc.QWebSocket_new3(origin_str, @bitCast(_version)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QWebSocket object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _origin: []const u8 `
    ///
    /// ` _version: qwebsocketprotocol_enums.Version `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_origin: []const u8, _version: i32, _parent: anytype) QWebSocket {
        const origin_str = qtc.libqt_string{
            .len = _origin.len,
            .data = _origin.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QWebSocket_new4(origin_str, @bitCast(_version), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn metaObject(self: QWebSocket) QMetaObject {
        return .{ .ptr = qtc.QWebSocket_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QWebSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QWebSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    pub fn superMetaObject(self: QWebSocket) QMetaObject {
        return .{ .ptr = qtc.QWebSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QWebSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QWebSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QWebSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QWebSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QWebSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QWebSocket, callback: *const fn (QWebSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QWebSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QWebSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QWebSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn abort(self: QWebSocket) void {
        qtc.QWebSocket_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QWebSocket) i32 {
        return qtc.QWebSocket_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `flush` instead
    ///
    pub const Flush = flush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn flush(self: QWebSocket) bool {
        return qtc.QWebSocket_Flush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn isValid(self: QWebSocket) bool {
        return qtc.QWebSocket_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `localAddress` instead
    ///
    pub const LocalAddress = localAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn localAddress(self: QWebSocket) QHostAddress {
        return .{ .ptr = qtc.QWebSocket_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `localPort` instead
    ///
    pub const LocalPort = localPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn localPort(self: QWebSocket) u16 {
        return qtc.QWebSocket_LocalPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pauseMode` instead
    ///
    pub const PauseMode = pauseMode;

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
    pub fn pauseMode(self: QWebSocket) i32 {
        return qtc.QWebSocket_PauseMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `peerAddress` instead
    ///
    pub const PeerAddress = peerAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn peerAddress(self: QWebSocket) QHostAddress {
        return .{ .ptr = qtc.QWebSocket_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `peerName` instead
    ///
    pub const PeerName = peerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn peerName(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_PeerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.peerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `peerPort` instead
    ///
    pub const PeerPort = peerPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn peerPort(self: QWebSocket) u16 {
        return qtc.QWebSocket_PeerPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `proxy` instead
    ///
    pub const Proxy = proxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn proxy(self: QWebSocket) QNetworkProxy {
        return .{ .ptr = qtc.QWebSocket_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setProxy` instead
    ///
    pub const SetProxy = setProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn setProxy(self: QWebSocket, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QWebSocket_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// ### DEPRECATED: Use `setMaskGenerator` instead
    ///
    pub const SetMaskGenerator = setMaskGenerator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaskGenerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _maskGenerator: QMaskGenerator `
    ///
    pub fn setMaskGenerator(self: QWebSocket, _maskGenerator: anytype) void {
        comptime _ = @TypeOf(_maskGenerator)._is_QMaskGenerator;
        qtc.QWebSocket_SetMaskGenerator(@ptrCast(self.ptr), @ptrCast(_maskGenerator.ptr));
    }

    /// ### DEPRECATED: Use `maskGenerator` instead
    ///
    pub const MaskGenerator = maskGenerator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maskGenerator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn maskGenerator(self: QWebSocket) QMaskGenerator {
        return .{ .ptr = qtc.QWebSocket_MaskGenerator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `readBufferSize` instead
    ///
    pub const ReadBufferSize = readBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn readBufferSize(self: QWebSocket) i64 {
        return qtc.QWebSocket_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadBufferSize` instead
    ///
    pub const SetReadBufferSize = setReadBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn setReadBufferSize(self: QWebSocket, size: i64) void {
        qtc.QWebSocket_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn resume0(self: QWebSocket) void {
        qtc.QWebSocket_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPauseMode` instead
    ///
    pub const SetPauseMode = setPauseMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn setPauseMode(self: QWebSocket, _pauseMode: i32) void {
        qtc.QWebSocket_SetPauseMode(@ptrCast(self.ptr), @bitCast(_pauseMode));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QWebSocket) i32 {
        return qtc.QWebSocket_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

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
    pub fn version(self: QWebSocket) i32 {
        return qtc.QWebSocket_Version(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resourceName` instead
    ///
    pub const ResourceName = resourceName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#resourceName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn resourceName(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_ResourceName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.resourceName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `requestUrl` instead
    ///
    pub const RequestUrl = requestUrl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#requestUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn requestUrl(self: QWebSocket) QUrl {
        return .{ .ptr = qtc.QWebSocket_RequestUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `request` instead
    ///
    pub const Request = request;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#request)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn request(self: QWebSocket) QNetworkRequest {
        return .{ .ptr = qtc.QWebSocket_Request(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `handshakeOptions` instead
    ///
    pub const HandshakeOptions = handshakeOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn handshakeOptions(self: QWebSocket) QWebSocketHandshakeOptions {
        return .{ .ptr = qtc.QWebSocket_HandshakeOptions(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `origin` instead
    ///
    pub const Origin = origin;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#origin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn origin(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_Origin(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.origin: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `subprotocol` instead
    ///
    pub const Subprotocol = subprotocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#subprotocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn subprotocol(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_Subprotocol(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.subprotocol: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `closeCode` instead
    ///
    pub const CloseCode = closeCode;

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
    pub fn closeCode(self: QWebSocket) i32 {
        return qtc.QWebSocket_CloseCode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closeReason` instead
    ///
    pub const CloseReason = closeReason;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#closeReason)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn closeReason(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWebSocket_CloseReason(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.closeReason: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sendTextMessage` instead
    ///
    pub const SendTextMessage = sendTextMessage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sendTextMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` message: []const u8 `
    ///
    pub fn sendTextMessage(self: QWebSocket, message: []const u8) i64 {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return qtc.QWebSocket_SendTextMessage(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `sendBinaryMessage` instead
    ///
    pub const SendBinaryMessage = sendBinaryMessage;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sendBinaryMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn sendBinaryMessage(self: QWebSocket, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QWebSocket_SendBinaryMessage(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `ignoreSslErrors` instead
    ///
    pub const IgnoreSslErrors = ignoreSslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn ignoreSslErrors(self: QWebSocket, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QWebSocket_IgnoreSslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### DEPRECATED: Use `continueInterruptedHandshake` instead
    ///
    pub const ContinueInterruptedHandshake = continueInterruptedHandshake;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#continueInterruptedHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn continueInterruptedHandshake(self: QWebSocket) void {
        qtc.QWebSocket_ContinueInterruptedHandshake(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSslConfiguration` instead
    ///
    pub const SetSslConfiguration = setSslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _sslConfiguration: QSslConfiguration `
    ///
    pub fn setSslConfiguration(self: QWebSocket, _sslConfiguration: anytype) void {
        comptime _ = @TypeOf(_sslConfiguration)._is_QSslConfiguration;
        qtc.QWebSocket_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(_sslConfiguration.ptr));
    }

    /// ### DEPRECATED: Use `sslConfiguration` instead
    ///
    pub const SslConfiguration = sslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn sslConfiguration(self: QWebSocket) QSslConfiguration {
        return .{ .ptr = qtc.QWebSocket_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bytesToWrite` instead
    ///
    pub const BytesToWrite = bytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn bytesToWrite(self: QWebSocket) i64 {
        return qtc.QWebSocket_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxAllowedIncomingFrameSize` instead
    ///
    pub const SetMaxAllowedIncomingFrameSize = setMaxAllowedIncomingFrameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaxAllowedIncomingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _maxAllowedIncomingFrameSize: u64 `
    ///
    pub fn setMaxAllowedIncomingFrameSize(self: QWebSocket, _maxAllowedIncomingFrameSize: u64) void {
        qtc.QWebSocket_SetMaxAllowedIncomingFrameSize(@ptrCast(self.ptr), @bitCast(_maxAllowedIncomingFrameSize));
    }

    /// ### DEPRECATED: Use `maxAllowedIncomingFrameSize` instead
    ///
    pub const MaxAllowedIncomingFrameSize = maxAllowedIncomingFrameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxAllowedIncomingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn maxAllowedIncomingFrameSize(self: QWebSocket) u64 {
        return qtc.QWebSocket_MaxAllowedIncomingFrameSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxAllowedIncomingMessageSize` instead
    ///
    pub const SetMaxAllowedIncomingMessageSize = setMaxAllowedIncomingMessageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setMaxAllowedIncomingMessageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _maxAllowedIncomingMessageSize: u64 `
    ///
    pub fn setMaxAllowedIncomingMessageSize(self: QWebSocket, _maxAllowedIncomingMessageSize: u64) void {
        qtc.QWebSocket_SetMaxAllowedIncomingMessageSize(@ptrCast(self.ptr), @bitCast(_maxAllowedIncomingMessageSize));
    }

    /// ### DEPRECATED: Use `maxAllowedIncomingMessageSize` instead
    ///
    pub const MaxAllowedIncomingMessageSize = maxAllowedIncomingMessageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxAllowedIncomingMessageSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn maxAllowedIncomingMessageSize(self: QWebSocket) u64 {
        return qtc.QWebSocket_MaxAllowedIncomingMessageSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maxIncomingMessageSize` instead
    ///
    pub const MaxIncomingMessageSize = maxIncomingMessageSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxIncomingMessageSize)
    ///
    pub fn maxIncomingMessageSize() u64 {
        return qtc.QWebSocket_MaxIncomingMessageSize();
    }

    /// ### DEPRECATED: Use `maxIncomingFrameSize` instead
    ///
    pub const MaxIncomingFrameSize = maxIncomingFrameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxIncomingFrameSize)
    ///
    pub fn maxIncomingFrameSize() u64 {
        return qtc.QWebSocket_MaxIncomingFrameSize();
    }

    /// ### DEPRECATED: Use `setOutgoingFrameSize` instead
    ///
    pub const SetOutgoingFrameSize = setOutgoingFrameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#setOutgoingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _outgoingFrameSize: u64 `
    ///
    pub fn setOutgoingFrameSize(self: QWebSocket, _outgoingFrameSize: u64) void {
        qtc.QWebSocket_SetOutgoingFrameSize(@ptrCast(self.ptr), @bitCast(_outgoingFrameSize));
    }

    /// ### DEPRECATED: Use `outgoingFrameSize` instead
    ///
    pub const OutgoingFrameSize = outgoingFrameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#outgoingFrameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn outgoingFrameSize(self: QWebSocket) u64 {
        return qtc.QWebSocket_OutgoingFrameSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maxOutgoingFrameSize` instead
    ///
    pub const MaxOutgoingFrameSize = maxOutgoingFrameSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#maxOutgoingFrameSize)
    ///
    pub fn maxOutgoingFrameSize() u64 {
        return qtc.QWebSocket_MaxOutgoingFrameSize();
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn close(self: QWebSocket) void {
        qtc.QWebSocket_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` url: QUrl `
    ///
    pub fn open(self: QWebSocket, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QWebSocket_Open(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### DEPRECATED: Use `open2` instead
    ///
    pub const Open2 = open2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _request: QNetworkRequest `
    ///
    pub fn open2(self: QWebSocket, _request: anytype) void {
        comptime _ = @TypeOf(_request)._is_QNetworkRequest;
        qtc.QWebSocket_Open2(@ptrCast(self.ptr), @ptrCast(_request.ptr));
    }

    /// ### DEPRECATED: Use `open3` instead
    ///
    pub const Open3 = open3;

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
    pub fn open3(self: QWebSocket, url: anytype, options: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        comptime _ = @TypeOf(options)._is_QWebSocketHandshakeOptions;
        qtc.QWebSocket_Open3(@ptrCast(self.ptr), @ptrCast(url.ptr), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `open4` instead
    ///
    pub const Open4 = open4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _request: QNetworkRequest `
    ///
    /// ` options: QWebSocketHandshakeOptions `
    ///
    pub fn open4(self: QWebSocket, _request: anytype, options: anytype) void {
        comptime _ = @TypeOf(_request)._is_QNetworkRequest;
        comptime _ = @TypeOf(options)._is_QWebSocketHandshakeOptions;
        qtc.QWebSocket_Open4(@ptrCast(self.ptr), @ptrCast(_request.ptr), @ptrCast(options.ptr));
    }

    /// ### DEPRECATED: Use `ping` instead
    ///
    pub const Ping = ping;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn ping(self: QWebSocket) void {
        qtc.QWebSocket_Ping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignoreSslErrors2` instead
    ///
    pub const IgnoreSslErrors2 = ignoreSslErrors2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn ignoreSslErrors2(self: QWebSocket) void {
        qtc.QWebSocket_IgnoreSslErrors2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `aboutToClose` instead
    ///
    pub const AboutToClose = aboutToClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn aboutToClose(self: QWebSocket) void {
        qtc.QWebSocket_AboutToClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToClose` instead
    ///
    pub const OnAboutToClose = onAboutToClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn onAboutToClose(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connected` instead
    ///
    pub const Connected = connected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn connected(self: QWebSocket) void {
        qtc.QWebSocket_Connected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConnected` instead
    ///
    pub const OnConnected = onConnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn onConnected(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
        qtc.QWebSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnected` instead
    ///
    pub const Disconnected = disconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn disconnected(self: QWebSocket) void {
        qtc.QWebSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnected` instead
    ///
    pub const OnDisconnected = onDisconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn onDisconnected(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
        qtc.QWebSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _state: qabstractsocket_enums.SocketState `
    ///
    pub fn stateChanged(self: QWebSocket, _state: i32) void {
        qtc.QWebSocket_StateChanged(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QWebSocket, callback: *const fn (QWebSocket, i32) callconv(.c) void) void {
        qtc.QWebSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `proxyAuthenticationRequired` instead
    ///
    pub const ProxyAuthenticationRequired = proxyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _proxy: QNetworkProxy `
    ///
    /// ` pAuthenticator: QAuthenticator `
    ///
    pub fn proxyAuthenticationRequired(self: QWebSocket, _proxy: anytype, pAuthenticator: anytype) void {
        comptime _ = @TypeOf(_proxy)._is_QNetworkProxy;
        comptime _ = @TypeOf(pAuthenticator)._is_QAuthenticator;
        qtc.QWebSocket_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(_proxy.ptr), @ptrCast(pAuthenticator.ptr));
    }

    /// ### DEPRECATED: Use `onProxyAuthenticationRequired` instead
    ///
    pub const OnProxyAuthenticationRequired = onProxyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, proxy: QNetworkProxy, pAuthenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn onProxyAuthenticationRequired(self: QWebSocket, callback: *const fn (QWebSocket, QNetworkProxy, QAuthenticator) callconv(.c) void) void {
        qtc.QWebSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `authenticationRequired` instead
    ///
    pub const AuthenticationRequired = authenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#authenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn authenticationRequired(self: QWebSocket, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QWebSocket_AuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onAuthenticationRequired` instead
    ///
    pub const OnAuthenticationRequired = onAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#authenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn onAuthenticationRequired(self: QWebSocket, callback: *const fn (QWebSocket, QAuthenticator) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readChannelFinished` instead
    ///
    pub const ReadChannelFinished = readChannelFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    pub fn readChannelFinished(self: QWebSocket) void {
        qtc.QWebSocket_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadChannelFinished` instead
    ///
    pub const OnReadChannelFinished = onReadChannelFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn onReadChannelFinished(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
        qtc.QWebSocket_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textFrameReceived` instead
    ///
    pub const TextFrameReceived = textFrameReceived;

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
    pub fn textFrameReceived(self: QWebSocket, frame: []const u8, isLastFrame: bool) void {
        const frame_str = qtc.libqt_string{
            .len = frame.len,
            .data = frame.ptr,
        };
        qtc.QWebSocket_TextFrameReceived(@ptrCast(self.ptr), frame_str, isLastFrame);
    }

    /// ### DEPRECATED: Use `onTextFrameReceived` instead
    ///
    pub const OnTextFrameReceived = onTextFrameReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textFrameReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, frame: [*:0]const u8, isLastFrame: bool) callconv(.c) void `
    ///
    pub fn onTextFrameReceived(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8, bool) callconv(.c) void) void {
        qtc.QWebSocket_Connect_TextFrameReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `binaryFrameReceived` instead
    ///
    pub const BinaryFrameReceived = binaryFrameReceived;

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
    pub fn binaryFrameReceived(self: QWebSocket, frame: []u8, isLastFrame: bool) void {
        const frame_str = qtc.libqt_string{
            .len = frame.len,
            .data = frame.ptr,
        };
        qtc.QWebSocket_BinaryFrameReceived(@ptrCast(self.ptr), frame_str, isLastFrame);
    }

    /// ### DEPRECATED: Use `onBinaryFrameReceived` instead
    ///
    pub const OnBinaryFrameReceived = onBinaryFrameReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryFrameReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, frame: qtc.libqt_string, isLastFrame: bool) callconv(.c) void `
    ///
    pub fn onBinaryFrameReceived(self: QWebSocket, callback: *const fn (QWebSocket, qtc.libqt_string, bool) callconv(.c) void) void {
        qtc.QWebSocket_Connect_BinaryFrameReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textMessageReceived` instead
    ///
    pub const TextMessageReceived = textMessageReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textMessageReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` message: []const u8 `
    ///
    pub fn textMessageReceived(self: QWebSocket, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QWebSocket_TextMessageReceived(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onTextMessageReceived` instead
    ///
    pub const OnTextMessageReceived = onTextMessageReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#textMessageReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onTextMessageReceived(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_TextMessageReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `binaryMessageReceived` instead
    ///
    pub const BinaryMessageReceived = binaryMessageReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryMessageReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` message: []u8 `
    ///
    pub fn binaryMessageReceived(self: QWebSocket, message: []u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QWebSocket_BinaryMessageReceived(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `onBinaryMessageReceived` instead
    ///
    pub const OnBinaryMessageReceived = onBinaryMessageReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#binaryMessageReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, message: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onBinaryMessageReceived(self: QWebSocket, callback: *const fn (QWebSocket, qtc.libqt_string) callconv(.c) void) void {
        qtc.QWebSocket_Connect_BinaryMessageReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `error2` instead
    ///
    pub const Error2 = error2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errorVal: qabstractsocket_enums.SocketError `
    ///
    pub fn error2(self: QWebSocket, errorVal: i32) void {
        qtc.QWebSocket_Error2(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errorVal: qabstractsocket_enums.SocketError `
    ///
    pub fn errorOccurred(self: QWebSocket, errorVal: i32) void {
        qtc.QWebSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, errorVal: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QWebSocket, callback: *const fn (QWebSocket, i32) callconv(.c) void) void {
        qtc.QWebSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pong` instead
    ///
    pub const Pong = pong;

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
    pub fn pong(self: QWebSocket, elapsedTime: u64, payload: []u8) void {
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        qtc.QWebSocket_Pong(@ptrCast(self.ptr), @bitCast(elapsedTime), payload_str);
    }

    /// ### DEPRECATED: Use `onPong` instead
    ///
    pub const OnPong = onPong;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#pong)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, elapsedTime: u64, payload: qtc.libqt_string) callconv(.c) void `
    ///
    pub fn onPong(self: QWebSocket, callback: *const fn (QWebSocket, u64, qtc.libqt_string) callconv(.c) void) void {
        qtc.QWebSocket_Connect_Pong(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesWritten` instead
    ///
    pub const BytesWritten = bytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn bytesWritten(self: QWebSocket, bytes: i64) void {
        qtc.QWebSocket_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onBytesWritten` instead
    ///
    pub const OnBytesWritten = onBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn onBytesWritten(self: QWebSocket, callback: *const fn (QWebSocket, i64) callconv(.c) void) void {
        qtc.QWebSocket_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `peerVerifyError` instead
    ///
    pub const PeerVerifyError = peerVerifyError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn peerVerifyError(self: QWebSocket, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QWebSocket_PeerVerifyError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### DEPRECATED: Use `onPeerVerifyError` instead
    ///
    pub const OnPeerVerifyError = onPeerVerifyError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn onPeerVerifyError(self: QWebSocket, callback: *const fn (QWebSocket, QSslError) callconv(.c) void) void {
        qtc.QWebSocket_Connect_PeerVerifyError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sslErrors` instead
    ///
    pub const SslErrors = sslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn sslErrors(self: QWebSocket, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QWebSocket_SslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### DEPRECATED: Use `onSslErrors` instead
    ///
    pub const OnSslErrors = onSslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn onSslErrors(self: QWebSocket, callback: *const fn (QWebSocket, qtc.libqt_list) callconv(.c) void) void {
        qtc.QWebSocket_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preSharedKeyAuthenticationRequired` instead
    ///
    pub const PreSharedKeyAuthenticationRequired = preSharedKeyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn preSharedKeyAuthenticationRequired(self: QWebSocket, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QWebSocket_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onPreSharedKeyAuthenticationRequired` instead
    ///
    pub const OnPreSharedKeyAuthenticationRequired = onPreSharedKeyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn onPreSharedKeyAuthenticationRequired(self: QWebSocket, callback: *const fn (QWebSocket, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QWebSocket_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alertSent` instead
    ///
    pub const AlertSent = alertSent;

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
    pub fn alertSent(self: QWebSocket, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocket_AlertSent(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### DEPRECATED: Use `onAlertSent` instead
    ///
    pub const OnAlertSent = onAlertSent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onAlertSent(self: QWebSocket, callback: *const fn (QWebSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AlertSent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alertReceived` instead
    ///
    pub const AlertReceived = alertReceived;

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
    pub fn alertReceived(self: QWebSocket, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWebSocket_AlertReceived(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### DEPRECATED: Use `onAlertReceived` instead
    ///
    pub const OnAlertReceived = onAlertReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onAlertReceived(self: QWebSocket, callback: *const fn (QWebSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QWebSocket_Connect_AlertReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `handshakeInterruptedOnError` instead
    ///
    pub const HandshakeInterruptedOnError = handshakeInterruptedOnError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn handshakeInterruptedOnError(self: QWebSocket, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QWebSocket_HandshakeInterruptedOnError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### DEPRECATED: Use `onHandshakeInterruptedOnError` instead
    ///
    pub const OnHandshakeInterruptedOnError = onHandshakeInterruptedOnError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn onHandshakeInterruptedOnError(self: QWebSocket, callback: *const fn (QWebSocket, QSslError) callconv(.c) void) void {
        qtc.QWebSocket_Connect_HandshakeInterruptedOnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `close1` instead
    ///
    pub const Close1 = close1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _closeCode: qwebsocketprotocol_enums.CloseCode `
    ///
    pub fn close1(self: QWebSocket, _closeCode: i32) void {
        qtc.QWebSocket_Close1(@ptrCast(self.ptr), @bitCast(_closeCode));
    }

    /// ### DEPRECATED: Use `close2` instead
    ///
    pub const Close2 = close2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` _closeCode: qwebsocketprotocol_enums.CloseCode `
    ///
    /// ` reason: []const u8 `
    ///
    pub fn close2(self: QWebSocket, _closeCode: i32, reason: []const u8) void {
        const reason_str = qtc.libqt_string{
            .len = reason.len,
            .data = reason.ptr,
        };
        qtc.QWebSocket_Close2(@ptrCast(self.ptr), @bitCast(_closeCode), reason_str);
    }

    /// ### DEPRECATED: Use `ping1` instead
    ///
    pub const Ping1 = ping1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#ping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QWebSocket `
    ///
    /// ` payload: []u8 `
    ///
    pub fn ping1(self: QWebSocket, payload: []u8) void {
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        qtc.QWebSocket_Ping1(@ptrCast(self.ptr), payload_str);
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
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QWebSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QWebSocket.objectName: Memory allocation failed");
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
    /// ` self: QWebSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QWebSocket, name: []const u8) void {
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
    /// ` self: QWebSocket `
    ///
    pub fn isWidgetType(self: QWebSocket) bool {
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
    /// ` self: QWebSocket `
    ///
    pub fn isWindowType(self: QWebSocket) bool {
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
    /// ` self: QWebSocket `
    ///
    pub fn isQuickItemType(self: QWebSocket) bool {
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
    /// ` self: QWebSocket `
    ///
    pub fn signalsBlocked(self: QWebSocket) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QWebSocket, b: bool) bool {
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
    /// ` self: QWebSocket `
    ///
    pub fn thread(self: QWebSocket) QThread {
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
    /// ` self: QWebSocket `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QWebSocket, _thread: anytype) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QWebSocket, interval: i32) i32 {
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
    /// ` self: QWebSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QWebSocket, time: i64) i32 {
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
    /// ` self: QWebSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QWebSocket, id: i32) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QWebSocket, id: i32) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QWebSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QWebSocket.children: Memory allocation failed");
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
    /// ` self: QWebSocket `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QWebSocket, _parent: anytype) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QWebSocket, filterObj: anytype) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QWebSocket, obj: anytype) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QWebSocket, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QWebSocket `
    ///
    pub fn disconnect3(self: QWebSocket) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QWebSocket, receiver: anytype) bool {
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
    /// ` self: QWebSocket `
    ///
    pub fn dumpObjectTree(self: QWebSocket) void {
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
    /// ` self: QWebSocket `
    ///
    pub fn dumpObjectInfo(self: QWebSocket) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QWebSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QWebSocket, name: [:0]const u8) QVariant {
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
    /// ` self: QWebSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QWebSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QWebSocket.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QWebSocket.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QWebSocket `
    ///
    pub fn bindingStorage(self: QWebSocket) QBindingStorage {
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
    /// ` self: QWebSocket `
    ///
    pub fn bindingStorage2(self: QWebSocket) QBindingStorage {
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
    /// ` self: QWebSocket `
    ///
    pub fn destroyed(self: QWebSocket) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QWebSocket, callback: *const fn (QWebSocket) callconv(.c) void) void {
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
    /// ` self: QWebSocket `
    ///
    pub fn parent(self: QWebSocket) QObject {
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
    /// ` self: QWebSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QWebSocket, classname: [:0]const u8) bool {
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
    /// ` self: QWebSocket `
    ///
    pub fn deleteLater(self: QWebSocket) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QWebSocket, interval: i32, timerType: i32) i32 {
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
    /// ` self: QWebSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QWebSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QWebSocket `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QWebSocket, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QWebSocket, signal: [:0]const u8) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QWebSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QWebSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QWebSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QWebSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QWebSocket, param1: anytype) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QWebSocket, callback: *const fn (QWebSocket, QObject) callconv(.c) void) void {
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
    /// ` self: QWebSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QWebSocket, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebSocket_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QWebSocket, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QWebSocket, callback: *const fn (QWebSocket, QEvent) callconv(.c) bool) void {
        qtc.QWebSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QWebSocket, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QWebSocket, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QWebSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QWebSocket, callback: *const fn (QWebSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QWebSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QWebSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QWebSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QWebSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QWebSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QWebSocket, callback: *const fn (QWebSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QWebSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QWebSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QWebSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QWebSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QWebSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QWebSocket, callback: *const fn (QWebSocket, QChildEvent) callconv(.c) void) void {
        qtc.QWebSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QWebSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QWebSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QWebSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QWebSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QWebSocket, callback: *const fn (QWebSocket, QEvent) callconv(.c) void) void {
        qtc.QWebSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QWebSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QWebSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QWebSocket, callback: *const fn (QWebSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QWebSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QWebSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QWebSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QWebSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QWebSocket, callback: *const fn (QWebSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QWebSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    pub fn sender(self: QWebSocket) QObject {
        return .{ .ptr = qtc.QWebSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebSocket `
    ///
    pub fn superSender(self: QWebSocket) QObject {
        return .{ .ptr = qtc.QWebSocket_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QWebSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QWebSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    pub fn senderSignalIndex(self: QWebSocket) i32 {
        return qtc.QWebSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebSocket `
    ///
    pub fn superSenderSignalIndex(self: QWebSocket) i32 {
        return qtc.QWebSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QWebSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QWebSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QWebSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QWebSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QWebSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QWebSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QWebSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QWebSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QWebSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QWebSocket`
    ///
    /// ` callback: *const fn (self: QWebSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QWebSocket, callback: *const fn (QWebSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QWebSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QWebSocket `
    ///
    /// ` callback: *const fn (self: QWebSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QWebSocket, callback: *const fn (QWebSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwebsocket.html#dtor.QWebSocket)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QWebSocket `
    ///
    pub fn delete(self: QWebSocket) void {
        qtc.QWebSocket_Delete(@ptrCast(self.ptr));
    }
};
