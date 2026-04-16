const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAuthenticator = @import("libqt6").QAuthenticator;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHostAddress = @import("libqt6").QHostAddress;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkProxy = @import("libqt6").QNetworkProxy;
const QObject = @import("libqt6").QObject;
const QOcspResponse = @import("libqt6").QOcspResponse;
const QSslCertificate = @import("libqt6").QSslCertificate;
const QSslCipher = @import("libqt6").QSslCipher;
const QSslConfiguration = @import("libqt6").QSslConfiguration;
const QSslError = @import("libqt6").QSslError;
const QSslKey = @import("libqt6").QSslKey;
const QSslPreSharedKeyAuthenticator = @import("libqt6").QSslPreSharedKeyAuthenticator;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = @import("libqhostaddress.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("libqssl.zig").enums;
const qsslsocket_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html)
pub const QSslSocket = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSslSocket,

    pub const _is_QSslSocket = {};
    pub const _is_QTcpSocket = {};
    pub const _is_QAbstractSocket = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// New constructs a new QSslSocket object.
    ///
    pub fn New() QSslSocket {
        return .{ .ptr = qtc.QSslSocket_new() };
    }

    /// New2 constructs a new QSslSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QSslSocket {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSslSocket_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn MetaObject(self: QSslSocket) QMetaObject {
        return .{ .ptr = qtc.QSslSocket_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSslSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSslSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    pub fn SuperMetaObject(self: QSslSocket) QMetaObject {
        return .{ .ptr = qtc.QSslSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSslSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSslSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSslSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSslSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSslSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSslSocket, callback: *const fn (QSslSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSslSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSslSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSslSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Resume(self: QSslSocket) void {
        qtc.QSslSocket_Resume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResume(self: QSslSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QSslSocket_OnResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResume` instead
    ///
    pub const QBaseResume = SuperResume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperResume(self: QSslSocket) void {
        qtc.QSslSocket_SuperResume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHostEncrypted(self: QSslSocket, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted(@ptrCast(self.ptr), hostName_str, @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` sslPeerName: []const u8 `
    ///
    pub fn ConnectToHostEncrypted2(self: QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted2(@ptrCast(self.ptr), hostName_str, @bitCast(port), sslPeerName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetSocketDescriptor(self: QSslSocket, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QSslSocket_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnSetSocketDescriptor(self: QSslSocket, callback: *const fn (QSslSocket, isize, i32, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSocketDescriptor` instead
    ///
    pub const QBaseSetSocketDescriptor = SuperSetSocketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetSocketDescriptor(self: QSslSocket, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QSslSocket_SuperSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn ConnectToHost(self: QSslSocket, hostName: []const u8, port: u16, openMode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(openMode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, hostName: [*:0]const u8, port: u16, openMode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void `
    ///
    pub fn OnConnectToHost(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8, u16, i32, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnConnectToHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperConnectToHost` instead
    ///
    pub const QBaseConnectToHost = SuperConnectToHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn SuperConnectToHost(self: QSslSocket, hostName: []const u8, port: u16, openMode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_SuperConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(openMode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn DisconnectFromHost(self: QSslSocket) void {
        qtc.QSslSocket_DisconnectFromHost(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDisconnectFromHost(self: QSslSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QSslSocket_OnDisconnectFromHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDisconnectFromHost` instead
    ///
    pub const QBaseDisconnectFromHost = SuperDisconnectFromHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperDisconnectFromHost(self: QSslSocket) void {
        qtc.QSslSocket_SuperDisconnectFromHost(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetSocketOption(self: QSslSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QSslSocket_SetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, option: qabstractsocket_enums.SocketOption, value: QVariant) callconv(.c) void `
    ///
    pub fn OnSetSocketOption(self: QSslSocket, callback: *const fn (QSslSocket, i32, QVariant) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSocketOption` instead
    ///
    pub const QBaseSetSocketOption = SuperSetSocketOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetSocketOption(self: QSslSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QSslSocket_SuperSetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SocketOption(self: QSslSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QSslSocket_SocketOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, option: qabstractsocket_enums.SocketOption) callconv(.c) QVariant `
    ///
    pub fn OnSocketOption(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) QVariant) void {
        qtc.QSslSocket_OnSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSocketOption` instead
    ///
    pub const QBaseSocketOption = SuperSocketOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SuperSocketOption(self: QSslSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QSslSocket_SuperSocketOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qsslsocket_enums.SslMode `
    ///
    pub fn Mode(self: QSslSocket) i32 {
        return qtc.QSslSocket_Mode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsEncrypted(self: QSslSocket) bool {
        return qtc.QSslSocket_IsEncrypted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#protocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.SslProtocol `
    ///
    pub fn Protocol(self: QSslSocket) i32 {
        return qtc.QSslSocket_Protocol(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` protocol: qssl_enums.SslProtocol `
    ///
    pub fn SetProtocol(self: QSslSocket, protocol: i32) void {
        qtc.QSslSocket_SetProtocol(@ptrCast(self.ptr), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qsslsocket_enums.PeerVerifyMode `
    ///
    pub fn PeerVerifyMode(self: QSslSocket) i32 {
        return qtc.QSslSocket_PeerVerifyMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` mode: qsslsocket_enums.PeerVerifyMode `
    ///
    pub fn SetPeerVerifyMode(self: QSslSocket, mode: i32) void {
        qtc.QSslSocket_SetPeerVerifyMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn PeerVerifyDepth(self: QSslSocket) i32 {
        return qtc.QSslSocket_PeerVerifyDepth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` depth: i32 `
    ///
    pub fn SetPeerVerifyDepth(self: QSslSocket, depth: i32) void {
        qtc.QSslSocket_SetPeerVerifyDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerVerifyName(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslSocket_PeerVerifyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.PeerVerifyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn SetPeerVerifyName(self: QSslSocket, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_SetPeerVerifyName(@ptrCast(self.ptr), hostName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn BytesAvailable(self: QSslSocket) i64 {
        return qtc.QSslSocket_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: QSslSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBytesAvailable` instead
    ///
    pub const QBaseBytesAvailable = SuperBytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperBytesAvailable(self: QSslSocket) i64 {
        return qtc.QSslSocket_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn BytesToWrite(self: QSslSocket) i64 {
        return qtc.QSslSocket_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: QSslSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBytesToWrite` instead
    ///
    pub const QBaseBytesToWrite = SuperBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperBytesToWrite(self: QSslSocket) i64 {
        return qtc.QSslSocket_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn CanReadLine(self: QSslSocket) bool {
        return qtc.QSslSocket_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: QSslSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanReadLine` instead
    ///
    pub const QBaseCanReadLine = SuperCanReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperCanReadLine(self: QSslSocket) bool {
        return qtc.QSslSocket_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Close(self: QSslSocket) void {
        qtc.QSslSocket_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: QSslSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QSslSocket_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperClose(self: QSslSocket) void {
        qtc.QSslSocket_SuperClose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn AtEnd(self: QSslSocket) bool {
        return qtc.QSslSocket_AtEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: QSslSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAtEnd` instead
    ///
    pub const QBaseAtEnd = SuperAtEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperAtEnd(self: QSslSocket) bool {
        return qtc.QSslSocket_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SetReadBufferSize(self: QSslSocket, size: i64) void {
        qtc.QSslSocket_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, size: i64) callconv(.c) void `
    ///
    pub fn OnSetReadBufferSize(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) void) void {
        qtc.QSslSocket_OnSetReadBufferSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetReadBufferSize` instead
    ///
    pub const QBaseSetReadBufferSize = SuperSetReadBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperSetReadBufferSize(self: QSslSocket, size: i64) void {
        qtc.QSslSocket_SuperSetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn EncryptedBytesAvailable(self: QSslSocket) i64 {
        return qtc.QSslSocket_EncryptedBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn EncryptedBytesToWrite(self: QSslSocket) i64 {
        return qtc.QSslSocket_EncryptedBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SslConfiguration(self: QSslSocket) QSslConfiguration {
        return .{ .ptr = qtc.QSslSocket_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` config: QSslConfiguration `
    ///
    pub fn SetSslConfiguration(self: QSslSocket, config: anytype) void {
        comptime _ = @TypeOf(config)._is_QSslConfiguration;
        qtc.QSslSocket_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` localChain: []QSslCertificate `
    ///
    pub fn SetLocalCertificateChain(self: QSslSocket, localChain: []QSslCertificate) void {
        const localChain_list = qtc.libqt_list{
            .len = localChain.len,
            .data = @ptrCast(localChain.ptr),
        };
        qtc.QSslSocket_SetLocalCertificateChain(@ptrCast(self.ptr), localChain_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#localCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalCertificateChain(self: QSslSocket, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslSocket_LocalCertificateChain(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslsocket.LocalCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` certificate: QSslCertificate `
    ///
    pub fn SetLocalCertificate(self: QSslSocket, certificate: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        qtc.QSslSocket_SetLocalCertificate(@ptrCast(self.ptr), @ptrCast(certificate.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetLocalCertificate2(self: QSslSocket, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetLocalCertificate2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#localCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn LocalCertificate(self: QSslSocket) QSslCertificate {
        return .{ .ptr = qtc.QSslSocket_LocalCertificate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn PeerCertificate(self: QSslSocket) QSslCertificate {
        return .{ .ptr = qtc.QSslSocket_PeerCertificate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerCertificateChain(self: QSslSocket, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslSocket_PeerCertificateChain(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("qsslsocket.PeerCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sessionCipher)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SessionCipher(self: QSslSocket) QSslCipher {
        return .{ .ptr = qtc.QSslSocket_SessionCipher(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sessionProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.SslProtocol `
    ///
    pub fn SessionProtocol(self: QSslSocket) i32 {
        return qtc.QSslSocket_SessionProtocol(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ocspResponses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OcspResponses(self: QSslSocket, allocator: std.mem.Allocator) []QOcspResponse {
        const _arr: qtc.libqt_list = qtc.QSslSocket_OcspResponses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QOcspResponse, _arr.len) catch @panic("qsslsocket.OcspResponses: Memory allocation failed");
        const _data: [*]QtC.QOcspResponse = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` key: QSslKey `
    ///
    pub fn SetPrivateKey(self: QSslSocket, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QSslKey;
        qtc.QSslSocket_SetPrivateKey(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetPrivateKey2(self: QSslSocket, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#privateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn PrivateKey(self: QSslSocket) QSslKey {
        return .{ .ptr = qtc.QSslSocket_PrivateKey(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForConnected(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForConnected(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForConnected` instead
    ///
    pub const QBaseWaitForConnected = SuperWaitForConnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForConnected(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn WaitForEncrypted(self: QSslSocket) bool {
        return qtc.QSslSocket_WaitForEncrypted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForReadyRead` instead
    ///
    pub const QBaseWaitForReadyRead = SuperWaitForReadyRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForBytesWritten` instead
    ///
    pub const QBaseWaitForBytesWritten = SuperWaitForBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForDisconnected(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForDisconnected(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForDisconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForDisconnected` instead
    ///
    pub const QBaseWaitForDisconnected = SuperWaitForDisconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForDisconnected(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslHandshakeErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SslHandshakeErrors(self: QSslSocket, allocator: std.mem.Allocator) []QSslError {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SslHandshakeErrors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslError, _arr.len) catch @panic("qsslsocket.SslHandshakeErrors: Memory allocation failed");
        const _data: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportsSsl)
    ///
    pub fn SupportsSsl() bool {
        return qtc.QSslSocket_SupportsSsl();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionNumber)
    ///
    pub fn SslLibraryVersionNumber() isize {
        return qtc.QSslSocket_SslLibraryVersionNumber();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SslLibraryVersionString(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslSocket_SslLibraryVersionString();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.SslLibraryVersionString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionNumber)
    ///
    pub fn SslLibraryBuildVersionNumber() isize {
        return qtc.QSslSocket_SslLibraryBuildVersionNumber();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SslLibraryBuildVersionString(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslSocket_SslLibraryBuildVersionString();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.SslLibraryBuildVersionString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#availableBackends)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableBackends(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_AvailableBackends();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsslsocket.AvailableBackends: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslsocket.AvailableBackends: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#activeBackend)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActiveBackend(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslSocket_ActiveBackend();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.ActiveBackend: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setActiveBackend)
    ///
    /// ## Parameter(s):
    ///
    /// ` backendName: []const u8 `
    ///
    pub fn SetActiveBackend(backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_SetActiveBackend(backendName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qssl_enums.SslProtocol `
    ///
    pub fn SupportedProtocols(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedProtocols();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.SupportedProtocols: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: qssl_enums.SslProtocol `
    ///
    pub fn IsProtocolSupported(protocol: i32) bool {
        return qtc.QSslSocket_IsProtocolSupported(@bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qssl_enums.ImplementedClass `
    ///
    pub fn ImplementedClasses(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_ImplementedClasses();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.ImplementedClasses: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
    ///
    /// ## Parameter(s):
    ///
    /// ` cl: qssl_enums.ImplementedClass `
    ///
    pub fn IsClassImplemented(cl: i32) bool {
        return qtc.QSslSocket_IsClassImplemented(@bitCast(cl));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qssl_enums.SupportedFeature `
    ///
    pub fn SupportedFeatures(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedFeatures();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.SupportedFeatures: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` feat: qssl_enums.SupportedFeature `
    ///
    pub fn IsFeatureSupported(feat: i32) bool {
        return qtc.QSslSocket_IsFeatureSupported(@bitCast(feat));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn IgnoreSslErrors(self: QSslSocket, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslSocket_IgnoreSslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#continueInterruptedHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn ContinueInterruptedHandshake(self: QSslSocket) void {
        qtc.QSslSocket_ContinueInterruptedHandshake(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#startClientEncryption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn StartClientEncryption(self: QSslSocket) void {
        qtc.QSslSocket_StartClientEncryption(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#startServerEncryption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn StartServerEncryption(self: QSslSocket) void {
        qtc.QSslSocket_StartServerEncryption(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IgnoreSslErrors2(self: QSslSocket) void {
        qtc.QSslSocket_IgnoreSslErrors2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Encrypted(self: QSslSocket) void {
        qtc.QSslSocket_Encrypted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn OnEncrypted(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QSslSocket_Connect_Encrypted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn PeerVerifyError(self: QSslSocket, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QSslSocket_PeerVerifyError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn OnPeerVerifyError(self: QSslSocket, callback: *const fn (QSslSocket, QSslError) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PeerVerifyError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn SslErrors(self: QSslSocket, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslSocket_SslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: QSslSocket, callback: *const fn (QSslSocket, qtc.libqt_list) callconv(.c) void) void {
        qtc.QSslSocket_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` newMode: qsslsocket_enums.SslMode `
    ///
    pub fn ModeChanged(self: QSslSocket, newMode: i32) void {
        qtc.QSslSocket_ModeChanged(@ptrCast(self.ptr), @bitCast(newMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, newMode: qsslsocket_enums.SslMode) callconv(.c) void `
    ///
    pub fn OnModeChanged(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QSslSocket_Connect_ModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` totalBytes: i64 `
    ///
    pub fn EncryptedBytesWritten(self: QSslSocket, totalBytes: i64) void {
        qtc.QSslSocket_EncryptedBytesWritten(@ptrCast(self.ptr), @bitCast(totalBytes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, totalBytes: i64) callconv(.c) void `
    ///
    pub fn OnEncryptedBytesWritten(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) void) void {
        qtc.QSslSocket_Connect_EncryptedBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: QSslSocket, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QSslSocket_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: QSslSocket, callback: *const fn (QSslSocket, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn NewSessionTicketReceived(self: QSslSocket) void {
        qtc.QSslSocket_NewSessionTicketReceived(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn OnNewSessionTicketReceived(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QSslSocket_Connect_NewSessionTicketReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AlertSent(self: QSslSocket, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslSocket_AlertSent(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertSent(self: QSslSocket, callback: *const fn (QSslSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertSent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` level: qssl_enums.AlertLevel `
    ///
    /// ` typeVal: qssl_enums.AlertType `
    ///
    /// ` description: []const u8 `
    ///
    pub fn AlertReceived(self: QSslSocket, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslSocket_AlertReceived(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertReceived(self: QSslSocket, callback: *const fn (QSslSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn HandshakeInterruptedOnError(self: QSslSocket, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QSslSocket_HandshakeInterruptedOnError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn OnHandshakeInterruptedOnError(self: QSslSocket, callback: *const fn (QSslSocket, QSslError) callconv(.c) void) void {
        qtc.QSslSocket_Connect_HandshakeInterruptedOnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: QSslSocket, callback: *const fn (QSslSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadData` instead
    ///
    pub const QBaseReadData = SuperReadData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#readData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: QSslSocket, maxSize: i64) i64 {
        return qtc.QSslSocket_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSkipData` instead
    ///
    pub const QBaseSkipData = SuperSkipData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: QSslSocket, maxSize: i64) i64 {
        return qtc.QSslSocket_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: QSslSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteData` instead
    ///
    pub const QBaseWriteData = SuperWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: QSslSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHostEncrypted3(self: QSslSocket, hostName: []const u8, port: u16, mode: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted3(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn ConnectToHostEncrypted4(self: QSslSocket, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted4(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` sslPeerName: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHostEncrypted42(self: QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted42(@ptrCast(self.ptr), hostName_str, @bitCast(port), sslPeerName_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` sslPeerName: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn ConnectToHostEncrypted5(self: QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted5(@ptrCast(self.ptr), hostName_str, @bitCast(port), sslPeerName_str, @bitCast(mode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn SetLocalCertificate22(self: QSslSocket, fileName: []const u8, format: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetLocalCertificate22(@ptrCast(self.ptr), fileName_str, @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    pub fn SetPrivateKey22(self: QSslSocket, fileName: []const u8, algorithm: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey22(@ptrCast(self.ptr), fileName_str, @bitCast(algorithm));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn SetPrivateKey3(self: QSslSocket, fileName: []const u8, algorithm: i32, format: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey3(@ptrCast(self.ptr), fileName_str, @bitCast(algorithm), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` passPhrase: []u8 `
    ///
    pub fn SetPrivateKey4(self: QSslSocket, fileName: []const u8, algorithm: i32, format: i32, passPhrase: []u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        qtc.QSslSocket_SetPrivateKey4(@ptrCast(self.ptr), fileName_str, @bitCast(algorithm), @bitCast(format), passPhrase_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForEncrypted1(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForEncrypted1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` backendName: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` []qssl_enums.SslProtocol `
    ///
    pub fn SupportedProtocols1(allocator: std.mem.Allocator, backendName: []const u8) []i32 {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedProtocols1(backendName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.SupportedProtocols1: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` protocol: qssl_enums.SslProtocol `
    ///
    /// ` backendName: []const u8 `
    ///
    pub fn IsProtocolSupported2(protocol: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_IsProtocolSupported2(@bitCast(protocol), backendName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#implementedClasses)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` backendName: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` []qssl_enums.ImplementedClass `
    ///
    pub fn ImplementedClasses1(allocator: std.mem.Allocator, backendName: []const u8) []i32 {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslSocket_ImplementedClasses1(backendName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.ImplementedClasses1: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
    ///
    /// ## Parameter(s):
    ///
    /// ` cl: qssl_enums.ImplementedClass `
    ///
    /// ` backendName: []const u8 `
    ///
    pub fn IsClassImplemented2(cl: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_IsClassImplemented2(@bitCast(cl), backendName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportedFeatures)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` backendName: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` []qssl_enums.SupportedFeature `
    ///
    pub fn SupportedFeatures1(allocator: std.mem.Allocator, backendName: []const u8) []i32 {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedFeatures1(backendName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsslsocket.SupportedFeatures1: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` feat: qssl_enums.SupportedFeature `
    ///
    /// ` backendName: []const u8 `
    ///
    pub fn IsFeatureSupported2(feat: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_IsFeatureSupported2(@bitCast(feat), backendName_str);
    }

    /// Inherited from QTcpSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind2(self: QSslSocket, addr: i32, port: u16) bool {
        return qtc.QTcpSocket_Bind2(@ptrCast(self.ptr), @bitCast(addr), @bitCast(port));
    }

    /// Inherited from QTcpSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind3(self: QSslSocket, addr: i32, port: u16, mode: i32) bool {
        return qtc.QTcpSocket_Bind3(@ptrCast(self.ptr), @bitCast(addr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn PauseMode(self: QSslSocket) i32 {
        return qtc.QAbstractSocket_PauseMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn SetPauseMode(self: QSslSocket, pauseMode: i32) void {
        qtc.QAbstractSocket_SetPauseMode(@ptrCast(self.ptr), @bitCast(pauseMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHost2(self: QSslSocket, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsValid(self: QSslSocket) bool {
        return qtc.QAbstractSocket_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn LocalPort(self: QSslSocket) u16 {
        return qtc.QAbstractSocket_LocalPort(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn LocalAddress(self: QSslSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn PeerPort(self: QSslSocket) u16 {
        return qtc.QAbstractSocket_PeerPort(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn PeerAddress(self: QSslSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerName(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_PeerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.PeerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn ReadBufferSize(self: QSslSocket) i64 {
        return qtc.QAbstractSocket_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Abort(self: QSslSocket) void {
        qtc.QAbstractSocket_Abort(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketType `
    ///
    pub fn SocketType(self: QSslSocket) i32 {
        return qtc.QAbstractSocket_SocketType(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketState `
    ///
    pub fn State(self: QSslSocket) i32 {
        return qtc.QAbstractSocket_State(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn Error(self: QSslSocket) i32 {
        return qtc.QAbstractSocket_Error(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Flush(self: QSslSocket) bool {
        return qtc.QAbstractSocket_Flush(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn SetProxy(self: QSslSocket, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QAbstractSocket_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Proxy(self: QSslSocket) QNetworkProxy {
        return .{ .ptr = qtc.QAbstractSocket_Proxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolTag(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_ProtocolTag(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.ProtocolTag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn SetProtocolTag(self: QSslSocket, tag: []const u8) void {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        qtc.QAbstractSocket_SetProtocolTag(@ptrCast(self.ptr), tag_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn HostFound(self: QSslSocket) void {
        qtc.QAbstractSocket_HostFound(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn OnHostFound(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_HostFound(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Connected(self: QSslSocket) void {
        qtc.QAbstractSocket_Connected(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn OnConnected(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Disconnected(self: QSslSocket) void {
        qtc.QAbstractSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketState `
    ///
    pub fn StateChanged(self: QSslSocket, param1: i32) void {
        qtc.QAbstractSocket_StateChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, param1: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: QSslSocket, param1: i32) void {
        qtc.QAbstractSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, param1: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` proxy: QNetworkProxy `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: QSslSocket, proxy: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QNetworkProxy;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(proxy.ptr), @ptrCast(authenticator.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, proxy: QNetworkProxy, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: QSslSocket, callback: *const fn (QSslSocket, QNetworkProxy, QAuthenticator) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind1(self: QSslSocket, port: u16) bool {
        return qtc.QAbstractSocket_Bind1(@ptrCast(self.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind22(self: QSslSocket, port: u16, mode: i32) bool {
        return qtc.QAbstractSocket_Bind22(@ptrCast(self.ptr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHost3(self: QSslSocket, address: anytype, port: u16, mode: i32) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost3(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: QSslSocket) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: QSslSocket, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsTextModeEnabled(self: QSslSocket) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsOpen(self: QSslSocket) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsReadable(self: QSslSocket) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsWritable(self: QSslSocket) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn ReadChannelCount(self: QSslSocket) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn WriteChannelCount(self: QSslSocket) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn CurrentReadChannel(self: QSslSocket) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: QSslSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn CurrentWriteChannel(self: QSslSocket) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: QSslSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read2(self: QSslSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: QSslSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: QSslSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn StartTransaction(self: QSslSocket) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn CommitTransaction(self: QSslSocket) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn RollbackTransaction(self: QSslSocket) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsTransactionStarted(self: QSslSocket) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: QSslSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: QSslSocket, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: QSslSocket, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek2(self: QSslSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: QSslSocket, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: QSslSocket, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: QSslSocket, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: QSslSocket, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn ReadyRead(self: QSslSocket) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: QSslSocket, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: QSslSocket, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: QSslSocket, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: QSslSocket, callback: *const fn (QSslSocket, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn AboutToClose(self: QSslSocket) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn ReadChannelFinished(self: QSslSocket) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: QSslSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsslsocket.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSslSocket, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsWidgetType(self: QSslSocket) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsWindowType(self: QSslSocket) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsQuickItemType(self: QSslSocket) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SignalsBlocked(self: QSslSocket) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSslSocket, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Thread(self: QSslSocket) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSslSocket, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSslSocket, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSslSocket, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSslSocket, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSslSocket, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSslSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsslsocket.Children: Memory allocation failed");
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
    /// ` self: QSslSocket `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSslSocket, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSslSocket, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSslSocket, obj: anytype) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSslSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSslSocket `
    ///
    pub fn Disconnect3(self: QSslSocket) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSslSocket, receiver: anytype) bool {
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
    /// ` self: QSslSocket `
    ///
    pub fn DumpObjectTree(self: QSslSocket) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn DumpObjectInfo(self: QSslSocket) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSslSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSslSocket, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSslSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsslsocket.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsslsocket.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSslSocket `
    ///
    pub fn BindingStorage(self: QSslSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn BindingStorage2(self: QSslSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Destroyed(self: QSslSocket) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Parent(self: QSslSocket) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSslSocket, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn DeleteLater(self: QSslSocket) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSslSocket, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSslSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QSslSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSslSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSslSocket, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSslSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSslSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSslSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSslSocket, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSslSocket, callback: *const fn (QSslSocket, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind(self: QSslSocket, address: anytype, port: u16, mode: i32) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QSslSocket_Bind(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperBind` instead
    ///
    pub const QBaseBind = SuperBind;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn SuperBind(self: QSslSocket, address: anytype, port: u16, mode: i32) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QSslSocket_SuperBind(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, address: QHostAddress, port: u16, mode: flag of qabstractsocket_enums.BindFlag) callconv(.c) bool `
    ///
    pub fn OnBind(self: QSslSocket, callback: *const fn (QSslSocket, QHostAddress, u16, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnBind(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SocketDescriptor(self: QSslSocket) isize {
        return qtc.QSslSocket_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSocketDescriptor` instead
    ///
    pub const QBaseSocketDescriptor = SuperSocketDescriptor;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperSocketDescriptor(self: QSslSocket) isize {
        return qtc.QSslSocket_SuperSocketDescriptor(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) isize `
    ///
    pub fn OnSocketDescriptor(self: QSslSocket, callback: *const fn () callconv(.c) isize) void {
        qtc.QSslSocket_OnSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn IsSequential(self: QSslSocket) bool {
        return qtc.QSslSocket_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSequential` instead
    ///
    pub const QBaseIsSequential = SuperIsSequential;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperIsSequential(self: QSslSocket) bool {
        return qtc.QSslSocket_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: QSslSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `SuperReadLineData` instead
    ///
    pub const QBaseReadLineData = SuperReadLineData;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: QSslSocket, callback: *const fn (QSslSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: QSslSocket, mode: i32) bool {
        return qtc.QSslSocket_Open(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: QSslSocket, mode: i32) bool {
        return qtc.QSslSocket_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Pos(self: QSslSocket) i64 {
        return qtc.QSslSocket_Pos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperPos` instead
    ///
    pub const QBasePos = SuperPos;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperPos(self: QSslSocket) i64 {
        return qtc.QSslSocket_SuperPos(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: QSslSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Size(self: QSslSocket) i64 {
        return qtc.QSslSocket_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSize` instead
    ///
    pub const QBaseSize = SuperSize;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperSize(self: QSslSocket) i64 {
        return qtc.QSslSocket_SuperSize(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: QSslSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: QSslSocket, pos: i64) bool {
        return qtc.QSslSocket_Seek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `SuperSeek` instead
    ///
    pub const QBaseSeek = SuperSeek;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn SuperSeek(self: QSslSocket, pos: i64) bool {
        return qtc.QSslSocket_SuperSeek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, pos: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) bool) void {
        qtc.QSslSocket_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Reset(self: QSslSocket) bool {
        return qtc.QSslSocket_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SuperReset(self: QSslSocket) bool {
        return qtc.QSslSocket_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: QSslSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSslSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSslSocket_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSslSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSslSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSslSocket, callback: *const fn (QSslSocket, QEvent) callconv(.c) bool) void {
        qtc.QSslSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSslSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSslSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSslSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSslSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSslSocket, callback: *const fn (QSslSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSslSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSslSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSslSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSslSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSslSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSslSocket, callback: *const fn (QSslSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QSslSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSslSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSslSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSslSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSslSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSslSocket, callback: *const fn (QSslSocket, QChildEvent) callconv(.c) void) void {
        qtc.QSslSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSslSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSslSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSslSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSslSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSslSocket, callback: *const fn (QSslSocket, QEvent) callconv(.c) void) void {
        qtc.QSslSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSslSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSslSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSslSocket, callback: *const fn (QSslSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QSslSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSslSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSslSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSslSocket, callback: *const fn (QSslSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QSslSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SetSocketState(self: QSslSocket, state: i32) void {
        qtc.QSslSocket_SetSocketState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `SuperSetSocketState` instead
    ///
    pub const QBaseSetSocketState = SuperSetSocketState;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SuperSetSocketState(self: QSslSocket, state: i32) void {
        qtc.QSslSocket_SuperSetSocketState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnSetSocketState(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SetSocketError(self: QSslSocket, socketError: i32) void {
        qtc.QSslSocket_SetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### DEPRECATED: Use `SuperSetSocketError` instead
    ///
    pub const QBaseSetSocketError = SuperSetSocketError;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SuperSetSocketError(self: QSslSocket, socketError: i32) void {
        qtc.QSslSocket_SuperSetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnSetSocketError(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetLocalPort(self: QSslSocket, port: u16) void {
        qtc.QSslSocket_SetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `SuperSetLocalPort` instead
    ///
    pub const QBaseSetLocalPort = SuperSetLocalPort;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetLocalPort(self: QSslSocket, port: u16) void {
        qtc.QSslSocket_SuperSetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetLocalPort(self: QSslSocket, callback: *const fn (QSslSocket, u16) callconv(.c) void) void {
        qtc.QSslSocket_OnSetLocalPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SetLocalAddress(self: QSslSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QSslSocket_SetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetLocalAddress` instead
    ///
    pub const QBaseSetLocalAddress = SuperSetLocalAddress;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SuperSetLocalAddress(self: QSslSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QSslSocket_SuperSetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, address: QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetLocalAddress(self: QSslSocket, callback: *const fn (QSslSocket, QHostAddress) callconv(.c) void) void {
        qtc.QSslSocket_OnSetLocalAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetPeerPort(self: QSslSocket, port: u16) void {
        qtc.QSslSocket_SetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `SuperSetPeerPort` instead
    ///
    pub const QBaseSetPeerPort = SuperSetPeerPort;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetPeerPort(self: QSslSocket, port: u16) void {
        qtc.QSslSocket_SuperSetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetPeerPort(self: QSslSocket, callback: *const fn (QSslSocket, u16) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SetPeerAddress(self: QSslSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QSslSocket_SetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetPeerAddress` instead
    ///
    pub const QBaseSetPeerAddress = SuperSetPeerAddress;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SuperSetPeerAddress(self: QSslSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QSslSocket_SuperSetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, address: QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetPeerAddress(self: QSslSocket, callback: *const fn (QSslSocket, QHostAddress) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetPeerName(self: QSslSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSslSocket_SetPeerName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `SuperSetPeerName` instead
    ///
    pub const QBaseSetPeerName = SuperSetPeerName;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetPeerName(self: QSslSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSslSocket_SuperSetPeerName(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetPeerName(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: QSslSocket, openMode: i32) void {
        qtc.QSslSocket_SetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// ### DEPRECATED: Use `SuperSetOpenMode` instead
    ///
    pub const QBaseSetOpenMode = SuperSetOpenMode;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: QSslSocket, openMode: i32) void {
        qtc.QSslSocket_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: QSslSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSslSocket_SetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `SuperSetErrorString` instead
    ///
    pub const QBaseSetErrorString = SuperSetErrorString;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: QSslSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSslSocket_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Sender(self: QSslSocket) QObject {
        return .{ .ptr = qtc.QSslSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSslSocket `
    ///
    pub fn SuperSender(self: QSslSocket) QObject {
        return .{ .ptr = qtc.QSslSocket_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSslSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSslSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn SenderSignalIndex(self: QSslSocket) i32 {
        return qtc.QSslSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSslSocket `
    ///
    pub fn SuperSenderSignalIndex(self: QSslSocket) i32 {
        return qtc.QSslSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSslSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QSslSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSslSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSslSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSslSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSslSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSslSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSslSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSslSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSslSocket, callback: *const fn (QSslSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QSslSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#dtor.QSslSocket)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslSocket `
    ///
    pub fn Delete(self: QSslSocket) void {
        qtc.QSslSocket_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#public-types)
pub const enums = struct {
    pub const SslMode = enum(i32) {
        pub const UnencryptedMode: i32 = 0;
        pub const SslClientMode: i32 = 1;
        pub const SslServerMode: i32 = 2;
    };

    pub const PeerVerifyMode = enum(i32) {
        pub const VerifyNone: i32 = 0;
        pub const QueryPeer: i32 = 1;
        pub const VerifyPeer: i32 = 2;
        pub const AutoVerifyPeer: i32 = 3;
    };
};
