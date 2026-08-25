const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAuthenticator = @import("libqt6").QAuthenticator;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHostAddress = @import("libqt6").QHostAddress;
const QIODeviceBase = @import("libqt6").QIODeviceBase;
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSslSocket object in C++ memory
    ///
    pub fn new() QSslSocket {
        return .{ .ptr = qtc.QSslSocket_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSslSocket object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QSslSocket {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSslSocket_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn metaObject(self: QSslSocket) QMetaObject {
        return .{ .ptr = qtc.QSslSocket_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSslSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSslSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    pub fn superMetaObject(self: QSslSocket) QMetaObject {
        return .{ .ptr = qtc.QSslSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSslSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSslSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSslSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QSslSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSslSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSslSocket, callback: *const fn (QSslSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSslSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QSslSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSslSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn resume0(self: QSslSocket) void {
        qtc.QSslSocket_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResume` instead
    ///
    pub const OnResume = onResume;

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
    pub fn onResume(self: QSslSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QSslSocket_OnResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResume` instead
    ///
    pub const SuperResume = superResume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn superResume(self: QSslSocket) void {
        qtc.QSslSocket_SuperResume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted` instead
    ///
    pub const ConnectToHostEncrypted = connectToHostEncrypted;

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
    pub fn connectToHostEncrypted(self: QSslSocket, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted(@ptrCast(self.ptr), hostName_str, @bitCast(port));
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted2` instead
    ///
    pub const ConnectToHostEncrypted2 = connectToHostEncrypted2;

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
    pub fn connectToHostEncrypted2(self: QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8) void {
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

    /// ### DEPRECATED: Use `setSocketDescriptor` instead
    ///
    pub const SetSocketDescriptor = setSocketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` _socketDescriptor: isize `
    ///
    /// ` _state: qabstractsocket_enums.SocketState `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setSocketDescriptor(self: QSslSocket, _socketDescriptor: isize, _state: i32, _openMode: i32) bool {
        return qtc.QSslSocket_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(_socketDescriptor), @bitCast(_state), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `onSetSocketDescriptor` instead
    ///
    pub const OnSetSocketDescriptor = onSetSocketDescriptor;

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
    pub fn onSetSocketDescriptor(self: QSslSocket, callback: *const fn (QSslSocket, isize, i32, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSocketDescriptor` instead
    ///
    pub const SuperSetSocketDescriptor = superSetSocketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` _socketDescriptor: isize `
    ///
    /// ` _state: qabstractsocket_enums.SocketState `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superSetSocketDescriptor(self: QSslSocket, _socketDescriptor: isize, _state: i32, _openMode: i32) bool {
        return qtc.QSslSocket_SuperSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(_socketDescriptor), @bitCast(_state), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `connectToHost` instead
    ///
    pub const ConnectToHost = connectToHost;

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
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` _protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn connectToHost(self: QSslSocket, hostName: []const u8, port: u16, _openMode: i32, _protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(_openMode), @bitCast(_protocol));
    }

    /// ### DEPRECATED: Use `onConnectToHost` instead
    ///
    pub const OnConnectToHost = onConnectToHost;

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
    pub fn onConnectToHost(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8, u16, i32, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnConnectToHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConnectToHost` instead
    ///
    pub const SuperConnectToHost = superConnectToHost;

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
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` _protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn superConnectToHost(self: QSslSocket, hostName: []const u8, port: u16, _openMode: i32, _protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_SuperConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(_openMode), @bitCast(_protocol));
    }

    /// ### DEPRECATED: Use `disconnectFromHost` instead
    ///
    pub const DisconnectFromHost = disconnectFromHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn disconnectFromHost(self: QSslSocket) void {
        qtc.QSslSocket_DisconnectFromHost(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectFromHost` instead
    ///
    pub const OnDisconnectFromHost = onDisconnectFromHost;

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
    pub fn onDisconnectFromHost(self: QSslSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QSslSocket_OnDisconnectFromHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDisconnectFromHost` instead
    ///
    pub const SuperDisconnectFromHost = superDisconnectFromHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn superDisconnectFromHost(self: QSslSocket) void {
        qtc.QSslSocket_SuperDisconnectFromHost(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSocketOption` instead
    ///
    pub const SetSocketOption = setSocketOption;

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
    pub fn setSocketOption(self: QSslSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QSslSocket_SetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetSocketOption` instead
    ///
    pub const OnSetSocketOption = onSetSocketOption;

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
    pub fn onSetSocketOption(self: QSslSocket, callback: *const fn (QSslSocket, i32, QVariant) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSocketOption` instead
    ///
    pub const SuperSetSocketOption = superSetSocketOption;

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
    pub fn superSetSocketOption(self: QSslSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QSslSocket_SuperSetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `socketOption` instead
    ///
    pub const SocketOption = socketOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn socketOption(self: QSslSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QSslSocket_SocketOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// ### DEPRECATED: Use `onSocketOption` instead
    ///
    pub const OnSocketOption = onSocketOption;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSocketOption(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) QVariant) void {
        qtc.QSslSocket_OnSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSocketOption` instead
    ///
    pub const SuperSocketOption = superSocketOption;

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
    pub fn superSocketOption(self: QSslSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QSslSocket_SuperSocketOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// ### DEPRECATED: Use `mode` instead
    ///
    pub const Mode = mode;

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
    pub fn mode(self: QSslSocket) i32 {
        return qtc.QSslSocket_Mode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEncrypted` instead
    ///
    pub const IsEncrypted = isEncrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn isEncrypted(self: QSslSocket) bool {
        return qtc.QSslSocket_IsEncrypted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `protocol` instead
    ///
    pub const Protocol = protocol;

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
    pub fn protocol(self: QSslSocket) i32 {
        return qtc.QSslSocket_Protocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProtocol` instead
    ///
    pub const SetProtocol = setProtocol;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` _protocol: qssl_enums.SslProtocol `
    ///
    pub fn setProtocol(self: QSslSocket, _protocol: i32) void {
        qtc.QSslSocket_SetProtocol(@ptrCast(self.ptr), @bitCast(_protocol));
    }

    /// ### DEPRECATED: Use `peerVerifyMode` instead
    ///
    pub const PeerVerifyMode = peerVerifyMode;

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
    pub fn peerVerifyMode(self: QSslSocket) i32 {
        return qtc.QSslSocket_PeerVerifyMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPeerVerifyMode` instead
    ///
    pub const SetPeerVerifyMode = setPeerVerifyMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` _mode: qsslsocket_enums.PeerVerifyMode `
    ///
    pub fn setPeerVerifyMode(self: QSslSocket, _mode: i32) void {
        qtc.QSslSocket_SetPeerVerifyMode(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `peerVerifyDepth` instead
    ///
    pub const PeerVerifyDepth = peerVerifyDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn peerVerifyDepth(self: QSslSocket) i32 {
        return qtc.QSslSocket_PeerVerifyDepth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPeerVerifyDepth` instead
    ///
    pub const SetPeerVerifyDepth = setPeerVerifyDepth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` depth: i32 `
    ///
    pub fn setPeerVerifyDepth(self: QSslSocket, depth: i32) void {
        qtc.QSslSocket_SetPeerVerifyDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// ### DEPRECATED: Use `peerVerifyName` instead
    ///
    pub const PeerVerifyName = peerVerifyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn peerVerifyName(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslSocket_PeerVerifyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.peerVerifyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPeerVerifyName` instead
    ///
    pub const SetPeerVerifyName = setPeerVerifyName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn setPeerVerifyName(self: QSslSocket, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_SetPeerVerifyName(@ptrCast(self.ptr), hostName_str);
    }

    /// ### DEPRECATED: Use `bytesAvailable` instead
    ///
    pub const BytesAvailable = bytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn bytesAvailable(self: QSslSocket) i64 {
        return qtc.QSslSocket_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesAvailable` instead
    ///
    pub const OnBytesAvailable = onBytesAvailable;

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
    pub fn onBytesAvailable(self: QSslSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBytesAvailable` instead
    ///
    pub const SuperBytesAvailable = superBytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn superBytesAvailable(self: QSslSocket) i64 {
        return qtc.QSslSocket_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesToWrite` instead
    ///
    pub const BytesToWrite = bytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn bytesToWrite(self: QSslSocket) i64 {
        return qtc.QSslSocket_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesToWrite` instead
    ///
    pub const OnBytesToWrite = onBytesToWrite;

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
    pub fn onBytesToWrite(self: QSslSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBytesToWrite` instead
    ///
    pub const SuperBytesToWrite = superBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn superBytesToWrite(self: QSslSocket) i64 {
        return qtc.QSslSocket_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canReadLine` instead
    ///
    pub const CanReadLine = canReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn canReadLine(self: QSslSocket) bool {
        return qtc.QSslSocket_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanReadLine` instead
    ///
    pub const OnCanReadLine = onCanReadLine;

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
    pub fn onCanReadLine(self: QSslSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanReadLine` instead
    ///
    pub const SuperCanReadLine = superCanReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn superCanReadLine(self: QSslSocket) bool {
        return qtc.QSslSocket_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn close(self: QSslSocket) void {
        qtc.QSslSocket_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

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
    pub fn onClose(self: QSslSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QSslSocket_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn superClose(self: QSslSocket) void {
        qtc.QSslSocket_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn atEnd(self: QSslSocket) bool {
        return qtc.QSslSocket_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAtEnd` instead
    ///
    pub const OnAtEnd = onAtEnd;

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
    pub fn onAtEnd(self: QSslSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAtEnd` instead
    ///
    pub const SuperAtEnd = superAtEnd;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn superAtEnd(self: QSslSocket) bool {
        return qtc.QSslSocket_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadBufferSize` instead
    ///
    pub const SetReadBufferSize = setReadBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` _size: i64 `
    ///
    pub fn setReadBufferSize(self: QSslSocket, _size: i64) void {
        qtc.QSslSocket_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `onSetReadBufferSize` instead
    ///
    pub const OnSetReadBufferSize = onSetReadBufferSize;

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
    pub fn onSetReadBufferSize(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) void) void {
        qtc.QSslSocket_OnSetReadBufferSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetReadBufferSize` instead
    ///
    pub const SuperSetReadBufferSize = superSetReadBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` _size: i64 `
    ///
    pub fn superSetReadBufferSize(self: QSslSocket, _size: i64) void {
        qtc.QSslSocket_SuperSetReadBufferSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `encryptedBytesAvailable` instead
    ///
    pub const EncryptedBytesAvailable = encryptedBytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn encryptedBytesAvailable(self: QSslSocket) i64 {
        return qtc.QSslSocket_EncryptedBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `encryptedBytesToWrite` instead
    ///
    pub const EncryptedBytesToWrite = encryptedBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn encryptedBytesToWrite(self: QSslSocket) i64 {
        return qtc.QSslSocket_EncryptedBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sslConfiguration` instead
    ///
    pub const SslConfiguration = sslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn sslConfiguration(self: QSslSocket) QSslConfiguration {
        return .{ .ptr = qtc.QSslSocket_SslConfiguration(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSslConfiguration` instead
    ///
    pub const SetSslConfiguration = setSslConfiguration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` config: QSslConfiguration `
    ///
    pub fn setSslConfiguration(self: QSslSocket, config: anytype) void {
        comptime _ = @TypeOf(config)._is_QSslConfiguration;
        qtc.QSslSocket_SetSslConfiguration(@ptrCast(self.ptr), @ptrCast(config.ptr));
    }

    /// ### DEPRECATED: Use `setLocalCertificateChain` instead
    ///
    pub const SetLocalCertificateChain = setLocalCertificateChain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` localChain: []QSslCertificate `
    ///
    pub fn setLocalCertificateChain(self: QSslSocket, localChain: []QSslCertificate) void {
        const localChain_list = qtc.libqt_list{
            .len = localChain.len,
            .data = @ptrCast(localChain.ptr),
        };
        qtc.QSslSocket_SetLocalCertificateChain(@ptrCast(self.ptr), localChain_list);
    }

    /// ### DEPRECATED: Use `localCertificateChain` instead
    ///
    pub const LocalCertificateChain = localCertificateChain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#localCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localCertificateChain(self: QSslSocket, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslSocket_LocalCertificateChain(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslSocket.localCertificateChain: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setLocalCertificate` instead
    ///
    pub const SetLocalCertificate = setLocalCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` certificate: QSslCertificate `
    ///
    pub fn setLocalCertificate(self: QSslSocket, certificate: anytype) void {
        comptime _ = @TypeOf(certificate)._is_QSslCertificate;
        qtc.QSslSocket_SetLocalCertificate(@ptrCast(self.ptr), @ptrCast(certificate.ptr));
    }

    /// ### DEPRECATED: Use `setLocalCertificate2` instead
    ///
    pub const SetLocalCertificate2 = setLocalCertificate2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setLocalCertificate2(self: QSslSocket, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetLocalCertificate2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `localCertificate` instead
    ///
    pub const LocalCertificate = localCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#localCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn localCertificate(self: QSslSocket) QSslCertificate {
        return .{ .ptr = qtc.QSslSocket_LocalCertificate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `peerCertificate` instead
    ///
    pub const PeerCertificate = peerCertificate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn peerCertificate(self: QSslSocket) QSslCertificate {
        return .{ .ptr = qtc.QSslSocket_PeerCertificate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `peerCertificateChain` instead
    ///
    pub const PeerCertificateChain = peerCertificateChain;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn peerCertificateChain(self: QSslSocket, allocator: std.mem.Allocator) []QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslSocket_PeerCertificateChain(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslCertificate, _arr.len) catch @panic("QSslSocket.peerCertificateChain: Memory allocation failed");
        const _data_val: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `sessionCipher` instead
    ///
    pub const SessionCipher = sessionCipher;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sessionCipher)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn sessionCipher(self: QSslSocket) QSslCipher {
        return .{ .ptr = qtc.QSslSocket_SessionCipher(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sessionProtocol` instead
    ///
    pub const SessionProtocol = sessionProtocol;

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
    pub fn sessionProtocol(self: QSslSocket) i32 {
        return qtc.QSslSocket_SessionProtocol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ocspResponses` instead
    ///
    pub const OcspResponses = ocspResponses;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ocspResponses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ocspResponses(self: QSslSocket, allocator: std.mem.Allocator) []QOcspResponse {
        const _arr: qtc.libqt_list = qtc.QSslSocket_OcspResponses(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QOcspResponse, _arr.len) catch @panic("QSslSocket.ocspResponses: Memory allocation failed");
        const _data_val: [*]QtC.QOcspResponse = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setPrivateKey` instead
    ///
    pub const SetPrivateKey = setPrivateKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` key: QSslKey `
    ///
    pub fn setPrivateKey(self: QSslSocket, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QSslKey;
        qtc.QSslSocket_SetPrivateKey(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `setPrivateKey2` instead
    ///
    pub const SetPrivateKey2 = setPrivateKey2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn setPrivateKey2(self: QSslSocket, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey2(@ptrCast(self.ptr), fileName_str);
    }

    /// ### DEPRECATED: Use `privateKey` instead
    ///
    pub const PrivateKey = privateKey;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#privateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn privateKey(self: QSslSocket) QSslKey {
        return .{ .ptr = qtc.QSslSocket_PrivateKey(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `waitForConnected` instead
    ///
    pub const WaitForConnected = waitForConnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForConnected(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForConnected` instead
    ///
    pub const OnWaitForConnected = onWaitForConnected;

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
    pub fn onWaitForConnected(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWaitForConnected` instead
    ///
    pub const SuperWaitForConnected = superWaitForConnected;

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
    pub fn superWaitForConnected(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForEncrypted` instead
    ///
    pub const WaitForEncrypted = waitForEncrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn waitForEncrypted(self: QSslSocket) bool {
        return qtc.QSslSocket_WaitForEncrypted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForReadyRead` instead
    ///
    pub const WaitForReadyRead = waitForReadyRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForReadyRead(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForReadyRead` instead
    ///
    pub const OnWaitForReadyRead = onWaitForReadyRead;

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
    pub fn onWaitForReadyRead(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWaitForReadyRead` instead
    ///
    pub const SuperWaitForReadyRead = superWaitForReadyRead;

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
    pub fn superWaitForReadyRead(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForBytesWritten` instead
    ///
    pub const WaitForBytesWritten = waitForBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForBytesWritten(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForBytesWritten` instead
    ///
    pub const OnWaitForBytesWritten = onWaitForBytesWritten;

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
    pub fn onWaitForBytesWritten(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWaitForBytesWritten` instead
    ///
    pub const SuperWaitForBytesWritten = superWaitForBytesWritten;

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
    pub fn superWaitForBytesWritten(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForDisconnected` instead
    ///
    pub const WaitForDisconnected = waitForDisconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForDisconnected(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForDisconnected` instead
    ///
    pub const OnWaitForDisconnected = onWaitForDisconnected;

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
    pub fn onWaitForDisconnected(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForDisconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWaitForDisconnected` instead
    ///
    pub const SuperWaitForDisconnected = superWaitForDisconnected;

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
    pub fn superWaitForDisconnected(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `sslHandshakeErrors` instead
    ///
    pub const SslHandshakeErrors = sslHandshakeErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslHandshakeErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sslHandshakeErrors(self: QSslSocket, allocator: std.mem.Allocator) []QSslError {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SslHandshakeErrors(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QSslError, _arr.len) catch @panic("QSslSocket.sslHandshakeErrors: Memory allocation failed");
        const _data_val: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `supportsSsl` instead
    ///
    pub const SupportsSsl = supportsSsl;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportsSsl)
    ///
    pub fn supportsSsl() bool {
        return qtc.QSslSocket_SupportsSsl();
    }

    /// ### DEPRECATED: Use `sslLibraryVersionNumber` instead
    ///
    pub const SslLibraryVersionNumber = sslLibraryVersionNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionNumber)
    ///
    pub fn sslLibraryVersionNumber() isize {
        return qtc.QSslSocket_SslLibraryVersionNumber();
    }

    /// ### DEPRECATED: Use `sslLibraryVersionString` instead
    ///
    pub const SslLibraryVersionString = sslLibraryVersionString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sslLibraryVersionString(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslSocket_SslLibraryVersionString();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.sslLibraryVersionString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sslLibraryBuildVersionNumber` instead
    ///
    pub const SslLibraryBuildVersionNumber = sslLibraryBuildVersionNumber;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionNumber)
    ///
    pub fn sslLibraryBuildVersionNumber() isize {
        return qtc.QSslSocket_SslLibraryBuildVersionNumber();
    }

    /// ### DEPRECATED: Use `sslLibraryBuildVersionString` instead
    ///
    pub const SslLibraryBuildVersionString = sslLibraryBuildVersionString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryBuildVersionString)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn sslLibraryBuildVersionString(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslSocket_SslLibraryBuildVersionString();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.sslLibraryBuildVersionString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `availableBackends` instead
    ///
    pub const AvailableBackends = availableBackends;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#availableBackends)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn availableBackends(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_AvailableBackends();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QSslSocket.availableBackends: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSslSocket.availableBackends: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `activeBackend` instead
    ///
    pub const ActiveBackend = activeBackend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#activeBackend)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn activeBackend(allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslSocket_ActiveBackend();
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.activeBackend: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setActiveBackend` instead
    ///
    pub const SetActiveBackend = setActiveBackend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setActiveBackend)
    ///
    /// ## Parameter(s):
    ///
    /// ` backendName: []const u8 `
    ///
    pub fn setActiveBackend(backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_SetActiveBackend(backendName_str);
    }

    /// ### DEPRECATED: Use `supportedProtocols` instead
    ///
    pub const SupportedProtocols = supportedProtocols;

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
    pub fn supportedProtocols(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedProtocols();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QSslSocket.supportedProtocols: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isProtocolSupported` instead
    ///
    pub const IsProtocolSupported = isProtocolSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` _protocol: qssl_enums.SslProtocol `
    ///
    pub fn isProtocolSupported(_protocol: i32) bool {
        return qtc.QSslSocket_IsProtocolSupported(@bitCast(_protocol));
    }

    /// ### DEPRECATED: Use `implementedClasses` instead
    ///
    pub const ImplementedClasses = implementedClasses;

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
    pub fn implementedClasses(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_ImplementedClasses();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QSslSocket.implementedClasses: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isClassImplemented` instead
    ///
    pub const IsClassImplemented = isClassImplemented;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
    ///
    /// ## Parameter(s):
    ///
    /// ` cl: qssl_enums.ImplementedClass `
    ///
    pub fn isClassImplemented(cl: i32) bool {
        return qtc.QSslSocket_IsClassImplemented(@bitCast(cl));
    }

    /// ### DEPRECATED: Use `supportedFeatures` instead
    ///
    pub const SupportedFeatures = supportedFeatures;

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
    pub fn supportedFeatures(allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedFeatures();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QSslSocket.supportedFeatures: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFeatureSupported` instead
    ///
    pub const IsFeatureSupported = isFeatureSupported;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` feat: qssl_enums.SupportedFeature `
    ///
    pub fn isFeatureSupported(feat: i32) bool {
        return qtc.QSslSocket_IsFeatureSupported(@bitCast(feat));
    }

    /// ### DEPRECATED: Use `ignoreSslErrors` instead
    ///
    pub const IgnoreSslErrors = ignoreSslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn ignoreSslErrors(self: QSslSocket, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslSocket_IgnoreSslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### DEPRECATED: Use `continueInterruptedHandshake` instead
    ///
    pub const ContinueInterruptedHandshake = continueInterruptedHandshake;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#continueInterruptedHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn continueInterruptedHandshake(self: QSslSocket) void {
        qtc.QSslSocket_ContinueInterruptedHandshake(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startClientEncryption` instead
    ///
    pub const StartClientEncryption = startClientEncryption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#startClientEncryption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn startClientEncryption(self: QSslSocket) void {
        qtc.QSslSocket_StartClientEncryption(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startServerEncryption` instead
    ///
    pub const StartServerEncryption = startServerEncryption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#startServerEncryption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn startServerEncryption(self: QSslSocket) void {
        qtc.QSslSocket_StartServerEncryption(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignoreSslErrors2` instead
    ///
    pub const IgnoreSslErrors2 = ignoreSslErrors2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn ignoreSslErrors2(self: QSslSocket) void {
        qtc.QSslSocket_IgnoreSslErrors2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `encrypted` instead
    ///
    pub const Encrypted = encrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn encrypted(self: QSslSocket) void {
        qtc.QSslSocket_Encrypted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEncrypted` instead
    ///
    pub const OnEncrypted = onEncrypted;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn onEncrypted(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QSslSocket_Connect_Encrypted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `peerVerifyError` instead
    ///
    pub const PeerVerifyError = peerVerifyError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn peerVerifyError(self: QSslSocket, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QSslSocket_PeerVerifyError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### DEPRECATED: Use `onPeerVerifyError` instead
    ///
    pub const OnPeerVerifyError = onPeerVerifyError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn onPeerVerifyError(self: QSslSocket, callback: *const fn (QSslSocket, QSslError) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PeerVerifyError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sslErrors` instead
    ///
    pub const SslErrors = sslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errors: []QSslError `
    ///
    pub fn sslErrors(self: QSslSocket, errors: []QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslSocket_SslErrors(@ptrCast(self.ptr), errors_list);
    }

    /// ### DEPRECATED: Use `onSslErrors` instead
    ///
    pub const OnSslErrors = onSslErrors;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, errors: qtc.libqt_list ([]QSslError)) callconv(.c) void `
    ///
    pub fn onSslErrors(self: QSslSocket, callback: *const fn (QSslSocket, qtc.libqt_list) callconv(.c) void) void {
        qtc.QSslSocket_Connect_SslErrors(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modeChanged` instead
    ///
    pub const ModeChanged = modeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` newMode: qsslsocket_enums.SslMode `
    ///
    pub fn modeChanged(self: QSslSocket, newMode: i32) void {
        qtc.QSslSocket_ModeChanged(@ptrCast(self.ptr), @bitCast(newMode));
    }

    /// ### DEPRECATED: Use `onModeChanged` instead
    ///
    pub const OnModeChanged = onModeChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, newMode: qsslsocket_enums.SslMode) callconv(.c) void `
    ///
    pub fn onModeChanged(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QSslSocket_Connect_ModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `encryptedBytesWritten` instead
    ///
    pub const EncryptedBytesWritten = encryptedBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` totalBytes: i64 `
    ///
    pub fn encryptedBytesWritten(self: QSslSocket, totalBytes: i64) void {
        qtc.QSslSocket_EncryptedBytesWritten(@ptrCast(self.ptr), @bitCast(totalBytes));
    }

    /// ### DEPRECATED: Use `onEncryptedBytesWritten` instead
    ///
    pub const OnEncryptedBytesWritten = onEncryptedBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, totalBytes: i64) callconv(.c) void `
    ///
    pub fn onEncryptedBytesWritten(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) void) void {
        qtc.QSslSocket_Connect_EncryptedBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `preSharedKeyAuthenticationRequired` instead
    ///
    pub const PreSharedKeyAuthenticationRequired = preSharedKeyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` authenticator: QSslPreSharedKeyAuthenticator `
    ///
    pub fn preSharedKeyAuthenticationRequired(self: QSslSocket, authenticator: anytype) void {
        comptime _ = @TypeOf(authenticator)._is_QSslPreSharedKeyAuthenticator;
        qtc.QSslSocket_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onPreSharedKeyAuthenticationRequired` instead
    ///
    pub const OnPreSharedKeyAuthenticationRequired = onPreSharedKeyAuthenticationRequired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, authenticator: QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn onPreSharedKeyAuthenticationRequired(self: QSslSocket, callback: *const fn (QSslSocket, QSslPreSharedKeyAuthenticator) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `newSessionTicketReceived` instead
    ///
    pub const NewSessionTicketReceived = newSessionTicketReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn newSessionTicketReceived(self: QSslSocket) void {
        qtc.QSslSocket_NewSessionTicketReceived(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNewSessionTicketReceived` instead
    ///
    pub const OnNewSessionTicketReceived = onNewSessionTicketReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn onNewSessionTicketReceived(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QSslSocket_Connect_NewSessionTicketReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alertSent` instead
    ///
    pub const AlertSent = alertSent;

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
    pub fn alertSent(self: QSslSocket, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslSocket_AlertSent(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### DEPRECATED: Use `onAlertSent` instead
    ///
    pub const OnAlertSent = onAlertSent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onAlertSent(self: QSslSocket, callback: *const fn (QSslSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertSent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `alertReceived` instead
    ///
    pub const AlertReceived = alertReceived;

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
    pub fn alertReceived(self: QSslSocket, level: i32, typeVal: i32, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QSslSocket_AlertReceived(@ptrCast(self.ptr), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### DEPRECATED: Use `onAlertReceived` instead
    ///
    pub const OnAlertReceived = onAlertReceived;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onAlertReceived(self: QSslSocket, callback: *const fn (QSslSocket, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertReceived(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `handshakeInterruptedOnError` instead
    ///
    pub const HandshakeInterruptedOnError = handshakeInterruptedOnError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` errorVal: QSslError `
    ///
    pub fn handshakeInterruptedOnError(self: QSslSocket, errorVal: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QSslError;
        qtc.QSslSocket_HandshakeInterruptedOnError(@ptrCast(self.ptr), @ptrCast(errorVal.ptr));
    }

    /// ### DEPRECATED: Use `onHandshakeInterruptedOnError` instead
    ///
    pub const OnHandshakeInterruptedOnError = onHandshakeInterruptedOnError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, errorVal: QSslError) callconv(.c) void `
    ///
    pub fn onHandshakeInterruptedOnError(self: QSslSocket, callback: *const fn (QSslSocket, QSslError) callconv(.c) void) void {
        qtc.QSslSocket_Connect_HandshakeInterruptedOnError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readData` instead
    ///
    pub const ReadData = readData;

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
    pub fn readData(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadData` instead
    ///
    pub const OnReadData = onReadData;

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
    pub fn onReadData(self: QSslSocket, callback: *const fn (QSslSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadData` instead
    ///
    pub const SuperReadData = superReadData;

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
    pub fn superReadData(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `skipData` instead
    ///
    pub const SkipData = skipData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skipData(self: QSslSocket, maxSize: i64) i64 {
        return qtc.QSslSocket_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `onSkipData` instead
    ///
    pub const OnSkipData = onSkipData;

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
    pub fn onSkipData(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSkipData` instead
    ///
    pub const SuperSkipData = superSkipData;

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
    pub fn superSkipData(self: QSslSocket, maxSize: i64) i64 {
        return qtc.QSslSocket_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `writeData` instead
    ///
    pub const WriteData = writeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn writeData(self: QSslSocket, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `onWriteData` instead
    ///
    pub const OnWriteData = onWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, data: [*:0]const u8, len: i64) callconv(.c) i64 `
    ///
    pub fn onWriteData(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteData` instead
    ///
    pub const SuperWriteData = superWriteData;

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
    /// ` len: i64 `
    ///
    pub fn superWriteData(self: QSslSocket, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted3` instead
    ///
    pub const ConnectToHostEncrypted3 = connectToHostEncrypted3;

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
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn connectToHostEncrypted3(self: QSslSocket, hostName: []const u8, port: u16, _mode: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted3(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted4` instead
    ///
    pub const ConnectToHostEncrypted4 = connectToHostEncrypted4;

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
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` _protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn connectToHostEncrypted4(self: QSslSocket, hostName: []const u8, port: u16, _mode: i32, _protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted4(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(_mode), @bitCast(_protocol));
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted42` instead
    ///
    pub const ConnectToHostEncrypted42 = connectToHostEncrypted42;

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
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn connectToHostEncrypted42(self: QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8, _mode: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted42(@ptrCast(self.ptr), hostName_str, @bitCast(port), sslPeerName_str, @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `connectToHostEncrypted5` instead
    ///
    pub const ConnectToHostEncrypted5 = connectToHostEncrypted5;

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
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` _protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn connectToHostEncrypted5(self: QSslSocket, hostName: []const u8, port: u16, sslPeerName: []const u8, _mode: i32, _protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted5(@ptrCast(self.ptr), hostName_str, @bitCast(port), sslPeerName_str, @bitCast(_mode), @bitCast(_protocol));
    }

    /// ### DEPRECATED: Use `setLocalCertificate22` instead
    ///
    pub const SetLocalCertificate22 = setLocalCertificate22;

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
    pub fn setLocalCertificate22(self: QSslSocket, fileName: []const u8, format: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetLocalCertificate22(@ptrCast(self.ptr), fileName_str, @bitCast(format));
    }

    /// ### DEPRECATED: Use `setPrivateKey22` instead
    ///
    pub const SetPrivateKey22 = setPrivateKey22;

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
    pub fn setPrivateKey22(self: QSslSocket, fileName: []const u8, algorithm: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey22(@ptrCast(self.ptr), fileName_str, @bitCast(algorithm));
    }

    /// ### DEPRECATED: Use `setPrivateKey3` instead
    ///
    pub const SetPrivateKey3 = setPrivateKey3;

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
    pub fn setPrivateKey3(self: QSslSocket, fileName: []const u8, algorithm: i32, format: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey3(@ptrCast(self.ptr), fileName_str, @bitCast(algorithm), @bitCast(format));
    }

    /// ### DEPRECATED: Use `setPrivateKey4` instead
    ///
    pub const SetPrivateKey4 = setPrivateKey4;

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
    pub fn setPrivateKey4(self: QSslSocket, fileName: []const u8, algorithm: i32, format: i32, passPhrase: []u8) void {
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

    /// ### DEPRECATED: Use `waitForEncrypted1` instead
    ///
    pub const WaitForEncrypted1 = waitForEncrypted1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForEncrypted1(self: QSslSocket, msecs: i32) bool {
        return qtc.QSslSocket_WaitForEncrypted1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `supportedProtocols1` instead
    ///
    pub const SupportedProtocols1 = supportedProtocols1;

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
    pub fn supportedProtocols1(allocator: std.mem.Allocator, backendName: []const u8) []i32 {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedProtocols1(backendName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QSslSocket.supportedProtocols1: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isProtocolSupported2` instead
    ///
    pub const IsProtocolSupported2 = isProtocolSupported2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isProtocolSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` _protocol: qssl_enums.SslProtocol `
    ///
    /// ` backendName: []const u8 `
    ///
    pub fn isProtocolSupported2(_protocol: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_IsProtocolSupported2(@bitCast(_protocol), backendName_str);
    }

    /// ### DEPRECATED: Use `implementedClasses1` instead
    ///
    pub const ImplementedClasses1 = implementedClasses1;

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
    pub fn implementedClasses1(allocator: std.mem.Allocator, backendName: []const u8) []i32 {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslSocket_ImplementedClasses1(backendName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QSslSocket.implementedClasses1: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isClassImplemented2` instead
    ///
    pub const IsClassImplemented2 = isClassImplemented2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isClassImplemented)
    ///
    /// ## Parameter(s):
    ///
    /// ` cl: qssl_enums.ImplementedClass `
    ///
    /// ` backendName: []const u8 `
    ///
    pub fn isClassImplemented2(cl: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_IsClassImplemented2(@bitCast(cl), backendName_str);
    }

    /// ### DEPRECATED: Use `supportedFeatures1` instead
    ///
    pub const SupportedFeatures1 = supportedFeatures1;

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
    pub fn supportedFeatures1(allocator: std.mem.Allocator, backendName: []const u8) []i32 {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QSslSocket_SupportedFeatures1(backendName_str);
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QSslSocket.supportedFeatures1: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isFeatureSupported2` instead
    ///
    pub const IsFeatureSupported2 = isFeatureSupported2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isFeatureSupported)
    ///
    /// ## Parameter(s):
    ///
    /// ` feat: qssl_enums.SupportedFeature `
    ///
    /// ` backendName: []const u8 `
    ///
    pub fn isFeatureSupported2(feat: i32, backendName: []const u8) bool {
        const backendName_str = qtc.libqt_string{
            .len = backendName.len,
            .data = backendName.ptr,
        };
        return qtc.QSslSocket_IsFeatureSupported2(@bitCast(feat), backendName_str);
    }

    /// ### DEPRECATED: Use `bind2` instead
    ///
    pub const Bind2 = bind2;

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
    pub fn bind2(self: QSslSocket, addr: i32, port: u16) bool {
        return qtc.QTcpSocket_Bind2(@ptrCast(self.ptr), @bitCast(addr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `bind3` instead
    ///
    pub const Bind3 = bind3;

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
    /// ` _mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn bind3(self: QSslSocket, addr: i32, port: u16, _mode: i32) bool {
        return qtc.QTcpSocket_Bind3(@ptrCast(self.ptr), @bitCast(addr), @bitCast(port), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `pauseMode` instead
    ///
    pub const PauseMode = pauseMode;

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
    pub fn pauseMode(self: QSslSocket) i32 {
        return qtc.QAbstractSocket_PauseMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPauseMode` instead
    ///
    pub const SetPauseMode = setPauseMode;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` _pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn setPauseMode(self: QSslSocket, _pauseMode: i32) void {
        qtc.QAbstractSocket_SetPauseMode(@ptrCast(self.ptr), @bitCast(_pauseMode));
    }

    /// ### DEPRECATED: Use `connectToHost2` instead
    ///
    pub const ConnectToHost2 = connectToHost2;

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
    pub fn connectToHost2(self: QSslSocket, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn isValid(self: QSslSocket) bool {
        return qtc.QAbstractSocket_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `localPort` instead
    ///
    pub const LocalPort = localPort;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn localPort(self: QSslSocket) u16 {
        return qtc.QAbstractSocket_LocalPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `localAddress` instead
    ///
    pub const LocalAddress = localAddress;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn localAddress(self: QSslSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `peerPort` instead
    ///
    pub const PeerPort = peerPort;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn peerPort(self: QSslSocket) u16 {
        return qtc.QAbstractSocket_PeerPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `peerAddress` instead
    ///
    pub const PeerAddress = peerAddress;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn peerAddress(self: QSslSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `peerName` instead
    ///
    pub const PeerName = peerName;

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
    pub fn peerName(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_PeerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.peerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readBufferSize` instead
    ///
    pub const ReadBufferSize = readBufferSize;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn readBufferSize(self: QSslSocket) i64 {
        return qtc.QAbstractSocket_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn abort(self: QSslSocket) void {
        qtc.QAbstractSocket_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `socketType` instead
    ///
    pub const SocketType = socketType;

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
    pub fn socketType(self: QSslSocket) i32 {
        return qtc.QAbstractSocket_SocketType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QSslSocket) i32 {
        return qtc.QAbstractSocket_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QSslSocket) i32 {
        return qtc.QAbstractSocket_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flush` instead
    ///
    pub const Flush = flush;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn flush(self: QSslSocket) bool {
        return qtc.QAbstractSocket_Flush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProxy` instead
    ///
    pub const SetProxy = setProxy;

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
    pub fn setProxy(self: QSslSocket, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QAbstractSocket_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// ### DEPRECATED: Use `proxy` instead
    ///
    pub const Proxy = proxy;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn proxy(self: QSslSocket) QNetworkProxy {
        return .{ .ptr = qtc.QAbstractSocket_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `protocolTag` instead
    ///
    pub const ProtocolTag = protocolTag;

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
    pub fn protocolTag(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_ProtocolTag(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.protocolTag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProtocolTag` instead
    ///
    pub const SetProtocolTag = setProtocolTag;

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
    pub fn setProtocolTag(self: QSslSocket, tag: []const u8) void {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        qtc.QAbstractSocket_SetProtocolTag(@ptrCast(self.ptr), tag_str);
    }

    /// ### DEPRECATED: Use `hostFound` instead
    ///
    pub const HostFound = hostFound;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn hostFound(self: QSslSocket) void {
        qtc.QAbstractSocket_HostFound(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHostFound` instead
    ///
    pub const OnHostFound = onHostFound;

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
    pub fn onHostFound(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_HostFound(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connected` instead
    ///
    pub const Connected = connected;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn connected(self: QSslSocket) void {
        qtc.QAbstractSocket_Connected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConnected` instead
    ///
    pub const OnConnected = onConnected;

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
    pub fn onConnected(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnected` instead
    ///
    pub const Disconnected = disconnected;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn disconnected(self: QSslSocket) void {
        qtc.QAbstractSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnected` instead
    ///
    pub const OnDisconnected = onDisconnected;

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
    pub fn onDisconnected(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

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
    pub fn stateChanged(self: QSslSocket, param1: i32) void {
        qtc.QAbstractSocket_StateChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

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
    pub fn onStateChanged(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

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
    pub fn errorOccurred(self: QSslSocket, param1: i32) void {
        qtc.QAbstractSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

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
    pub fn onErrorOccurred(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `proxyAuthenticationRequired` instead
    ///
    pub const ProxyAuthenticationRequired = proxyAuthenticationRequired;

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    /// ` _proxy: QNetworkProxy `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn proxyAuthenticationRequired(self: QSslSocket, _proxy: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(_proxy)._is_QNetworkProxy;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(_proxy.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### DEPRECATED: Use `onProxyAuthenticationRequired` instead
    ///
    pub const OnProxyAuthenticationRequired = onProxyAuthenticationRequired;

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
    pub fn onProxyAuthenticationRequired(self: QSslSocket, callback: *const fn (QSslSocket, QNetworkProxy, QAuthenticator) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bind1` instead
    ///
    pub const Bind1 = bind1;

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
    pub fn bind1(self: QSslSocket, port: u16) bool {
        return qtc.QAbstractSocket_Bind1(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `bind22` instead
    ///
    pub const Bind22 = bind22;

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
    /// ` _mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn bind22(self: QSslSocket, port: u16, _mode: i32) bool {
        return qtc.QAbstractSocket_Bind22(@ptrCast(self.ptr), @bitCast(port), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `connectToHost3` instead
    ///
    pub const ConnectToHost3 = connectToHost3;

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
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn connectToHost3(self: QSslSocket, address: anytype, port: u16, _mode: i32) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost3(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(_mode));
    }

    /// Inherited from QIODevice
    ///
    /// Upcasts to a QIODeviceBase object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn asQIODeviceBase(self: QSslSocket) QIODeviceBase {
        return .{ .ptr = qtc.QIODevice_AsQIODeviceBase(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `openMode` instead
    ///
    pub const OpenMode = openMode;

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
    pub fn openMode(self: QSslSocket) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextModeEnabled` instead
    ///
    pub const SetTextModeEnabled = setTextModeEnabled;

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
    pub fn setTextModeEnabled(self: QSslSocket, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `isTextModeEnabled` instead
    ///
    pub const IsTextModeEnabled = isTextModeEnabled;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn isTextModeEnabled(self: QSslSocket) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn isOpen(self: QSslSocket) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn isReadable(self: QSslSocket) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWritable` instead
    ///
    pub const IsWritable = isWritable;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn isWritable(self: QSslSocket) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readChannelCount` instead
    ///
    pub const ReadChannelCount = readChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn readChannelCount(self: QSslSocket) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `writeChannelCount` instead
    ///
    pub const WriteChannelCount = writeChannelCount;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn writeChannelCount(self: QSslSocket) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentReadChannel` instead
    ///
    pub const CurrentReadChannel = currentReadChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn currentReadChannel(self: QSslSocket) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentReadChannel` instead
    ///
    pub const SetCurrentReadChannel = setCurrentReadChannel;

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
    pub fn setCurrentReadChannel(self: QSslSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `currentWriteChannel` instead
    ///
    pub const CurrentWriteChannel = currentWriteChannel;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn currentWriteChannel(self: QSslSocket) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentWriteChannel` instead
    ///
    pub const SetCurrentWriteChannel = setCurrentWriteChannel;

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
    pub fn setCurrentWriteChannel(self: QSslSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

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
    pub fn read(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `read2` instead
    ///
    pub const Read2 = read2;

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
    pub fn read2(self: QSslSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslSocket.read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readAll` instead
    ///
    pub const ReadAll = readAll;

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
    pub fn readAll(self: QSslSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslSocket.readAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readLine` instead
    ///
    pub const ReadLine = readLine;

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
    pub fn readLine(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `readLine2` instead
    ///
    pub const ReadLine2 = readLine2;

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
    pub fn readLine2(self: QSslSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslSocket.readLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `startTransaction` instead
    ///
    pub const StartTransaction = startTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn startTransaction(self: QSslSocket) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `commitTransaction` instead
    ///
    pub const CommitTransaction = commitTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn commitTransaction(self: QSslSocket) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rollbackTransaction` instead
    ///
    pub const RollbackTransaction = rollbackTransaction;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn rollbackTransaction(self: QSslSocket) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isTransactionStarted` instead
    ///
    pub const IsTransactionStarted = isTransactionStarted;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn isTransactionStarted(self: QSslSocket) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

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
    /// ` len: i64 `
    ///
    pub fn write(self: QSslSocket, data: [:0]const u8, len: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(len));
    }

    /// ### DEPRECATED: Use `write2` instead
    ///
    pub const Write2 = write2;

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
    pub fn write2(self: QSslSocket, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// ### DEPRECATED: Use `write3` instead
    ///
    pub const Write3 = write3;

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
    pub fn write3(self: QSslSocket, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `peek` instead
    ///
    pub const Peek = peek;

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
    pub fn peek(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `peek2` instead
    ///
    pub const Peek2 = peek2;

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
    pub fn peek2(self: QSslSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslSocket.peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `skip` instead
    ///
    pub const Skip = skip;

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
    pub fn skip(self: QSslSocket, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `ungetChar` instead
    ///
    pub const UngetChar = ungetChar;

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
    pub fn ungetChar(self: QSslSocket, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `putChar` instead
    ///
    pub const PutChar = putChar;

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
    pub fn putChar(self: QSslSocket, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// ### DEPRECATED: Use `getChar` instead
    ///
    pub const GetChar = getChar;

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
    pub fn getChar(self: QSslSocket, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

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
    pub fn errorString(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `readyRead` instead
    ///
    pub const ReadyRead = readyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn readyRead(self: QSslSocket) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadyRead` instead
    ///
    pub const OnReadyRead = onReadyRead;

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
    pub fn onReadyRead(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelReadyRead` instead
    ///
    pub const ChannelReadyRead = channelReadyRead;

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
    pub fn channelReadyRead(self: QSslSocket, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// ### DEPRECATED: Use `onChannelReadyRead` instead
    ///
    pub const OnChannelReadyRead = onChannelReadyRead;

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
    pub fn onChannelReadyRead(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesWritten` instead
    ///
    pub const BytesWritten = bytesWritten;

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
    pub fn bytesWritten(self: QSslSocket, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onBytesWritten` instead
    ///
    pub const OnBytesWritten = onBytesWritten;

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
    pub fn onBytesWritten(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `channelBytesWritten` instead
    ///
    pub const ChannelBytesWritten = channelBytesWritten;

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
    pub fn channelBytesWritten(self: QSslSocket, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// ### DEPRECATED: Use `onChannelBytesWritten` instead
    ///
    pub const OnChannelBytesWritten = onChannelBytesWritten;

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
    pub fn onChannelBytesWritten(self: QSslSocket, callback: *const fn (QSslSocket, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `aboutToClose` instead
    ///
    pub const AboutToClose = aboutToClose;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn aboutToClose(self: QSslSocket) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToClose` instead
    ///
    pub const OnAboutToClose = onAboutToClose;

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
    pub fn onAboutToClose(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readChannelFinished` instead
    ///
    pub const ReadChannelFinished = readChannelFinished;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSslSocket `
    ///
    pub fn readChannelFinished(self: QSslSocket) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReadChannelFinished` instead
    ///
    pub const OnReadChannelFinished = onReadChannelFinished;

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
    pub fn onReadChannelFinished(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLine1` instead
    ///
    pub const ReadLine1 = readLine1;

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
    pub fn readLine1(self: QSslSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QSslSocket.readLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
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
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSslSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSslSocket.objectName: Memory allocation failed");
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
    /// ` self: QSslSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSslSocket, name: []const u8) void {
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
    /// ` self: QSslSocket `
    ///
    pub fn isWidgetType(self: QSslSocket) bool {
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
    /// ` self: QSslSocket `
    ///
    pub fn isWindowType(self: QSslSocket) bool {
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
    /// ` self: QSslSocket `
    ///
    pub fn isQuickItemType(self: QSslSocket) bool {
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
    /// ` self: QSslSocket `
    ///
    pub fn signalsBlocked(self: QSslSocket) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSslSocket, b: bool) bool {
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
    /// ` self: QSslSocket `
    ///
    pub fn thread(self: QSslSocket) QThread {
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
    /// ` self: QSslSocket `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSslSocket, _thread: anytype) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSslSocket, interval: i32) i32 {
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
    /// ` self: QSslSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSslSocket, time: i64) i32 {
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
    /// ` self: QSslSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSslSocket, id: i32) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSslSocket, id: i32) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSslSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSslSocket.children: Memory allocation failed");
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
    /// ` self: QSslSocket `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSslSocket, _parent: anytype) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSslSocket, filterObj: anytype) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSslSocket, obj: anytype) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSslSocket, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSslSocket `
    ///
    pub fn disconnect3(self: QSslSocket) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSslSocket, receiver: anytype) bool {
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
    /// ` self: QSslSocket `
    ///
    pub fn dumpObjectTree(self: QSslSocket) void {
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
    /// ` self: QSslSocket `
    ///
    pub fn dumpObjectInfo(self: QSslSocket) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSslSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSslSocket, name: [:0]const u8) QVariant {
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
    /// ` self: QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSslSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSslSocket.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSslSocket.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSslSocket `
    ///
    pub fn bindingStorage(self: QSslSocket) QBindingStorage {
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
    /// ` self: QSslSocket `
    ///
    pub fn bindingStorage2(self: QSslSocket) QBindingStorage {
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
    /// ` self: QSslSocket `
    ///
    pub fn destroyed(self: QSslSocket) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSslSocket, callback: *const fn (QSslSocket) callconv(.c) void) void {
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
    /// ` self: QSslSocket `
    ///
    pub fn parent(self: QSslSocket) QObject {
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
    /// ` self: QSslSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSslSocket, classname: [:0]const u8) bool {
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
    /// ` self: QSslSocket `
    ///
    pub fn deleteLater(self: QSslSocket) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSslSocket, interval: i32, timerType: i32) i32 {
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
    /// ` self: QSslSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSslSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QSslSocket `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSslSocket, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSslSocket, signal: [:0]const u8) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSslSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSslSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSslSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSslSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSslSocket, param1: anytype) void {
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
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSslSocket, callback: *const fn (QSslSocket, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bind` instead
    ///
    pub const Bind = bind;

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
    /// ` _mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn bind(self: QSslSocket, address: anytype, port: u16, _mode: i32) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QSslSocket_Bind(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `superBind` instead
    ///
    pub const SuperBind = superBind;

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
    /// ` _mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn superBind(self: QSslSocket, address: anytype, port: u16, _mode: i32) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QSslSocket_SuperBind(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onBind` instead
    ///
    pub const OnBind = onBind;

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
    pub fn onBind(self: QSslSocket, callback: *const fn (QSslSocket, QHostAddress, u16, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnBind(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `socketDescriptor` instead
    ///
    pub const SocketDescriptor = socketDescriptor;

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
    pub fn socketDescriptor(self: QSslSocket) isize {
        return qtc.QSslSocket_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSocketDescriptor` instead
    ///
    pub const SuperSocketDescriptor = superSocketDescriptor;

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
    pub fn superSocketDescriptor(self: QSslSocket) isize {
        return qtc.QSslSocket_SuperSocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSocketDescriptor` instead
    ///
    pub const OnSocketDescriptor = onSocketDescriptor;

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
    pub fn onSocketDescriptor(self: QSslSocket, callback: *const fn () callconv(.c) isize) void {
        qtc.QSslSocket_OnSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSequential` instead
    ///
    pub const IsSequential = isSequential;

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
    pub fn isSequential(self: QSslSocket) bool {
        return qtc.QSslSocket_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superIsSequential` instead
    ///
    pub const SuperIsSequential = superIsSequential;

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
    pub fn superIsSequential(self: QSslSocket) bool {
        return qtc.QSslSocket_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSequential` instead
    ///
    pub const OnIsSequential = onIsSequential;

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
    pub fn onIsSequential(self: QSslSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLineData` instead
    ///
    pub const ReadLineData = readLineData;

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
    pub fn readLineData(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `superReadLineData` instead
    ///
    pub const SuperReadLineData = superReadLineData;

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
    pub fn superReadLineData(self: QSslSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadLineData` instead
    ///
    pub const OnReadLineData = onReadLineData;

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
    pub fn onReadLineData(self: QSslSocket, callback: *const fn (QSslSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

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
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: QSslSocket, _mode: i32) bool {
        return qtc.QSslSocket_Open(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

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
    /// ` _mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpen(self: QSslSocket, _mode: i32) bool {
        return qtc.QSslSocket_SuperOpen(@ptrCast(self.ptr), @bitCast(_mode));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

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
    pub fn onOpen(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

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
    pub fn pos(self: QSslSocket) i64 {
        return qtc.QSslSocket_Pos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superPos` instead
    ///
    pub const SuperPos = superPos;

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
    pub fn superPos(self: QSslSocket) i64 {
        return qtc.QSslSocket_SuperPos(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPos` instead
    ///
    pub const OnPos = onPos;

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
    pub fn onPos(self: QSslSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

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
    pub fn size(self: QSslSocket) i64 {
        return qtc.QSslSocket_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSize` instead
    ///
    pub const SuperSize = superSize;

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
    pub fn superSize(self: QSslSocket) i64 {
        return qtc.QSslSocket_SuperSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSize` instead
    ///
    pub const OnSize = onSize;

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
    pub fn onSize(self: QSslSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `seek` instead
    ///
    pub const Seek = seek;

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
    /// ` _pos: i64 `
    ///
    pub fn seek(self: QSslSocket, _pos: i64) bool {
        return qtc.QSslSocket_Seek(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `superSeek` instead
    ///
    pub const SuperSeek = superSeek;

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
    /// ` _pos: i64 `
    ///
    pub fn superSeek(self: QSslSocket, _pos: i64) bool {
        return qtc.QSslSocket_SuperSeek(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `onSeek` instead
    ///
    pub const OnSeek = onSeek;

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
    pub fn onSeek(self: QSslSocket, callback: *const fn (QSslSocket, i64) callconv(.c) bool) void {
        qtc.QSslSocket_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

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
    pub fn reset(self: QSslSocket) bool {
        return qtc.QSslSocket_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

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
    pub fn superReset(self: QSslSocket) bool {
        return qtc.QSslSocket_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

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
    pub fn onReset(self: QSslSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSslSocket, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSslSocket_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSslSocket, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSslSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSslSocket, callback: *const fn (QSslSocket, QEvent) callconv(.c) bool) void {
        qtc.QSslSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSslSocket, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSslSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSslSocket, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSslSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSslSocket, callback: *const fn (QSslSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSslSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSslSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSslSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSslSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSslSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSslSocket, callback: *const fn (QSslSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QSslSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSslSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSslSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSslSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSslSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSslSocket, callback: *const fn (QSslSocket, QChildEvent) callconv(.c) void) void {
        qtc.QSslSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSslSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSslSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSslSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSslSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSslSocket, callback: *const fn (QSslSocket, QEvent) callconv(.c) void) void {
        qtc.QSslSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSslSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSslSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSslSocket, callback: *const fn (QSslSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QSslSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSslSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSslSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSslSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSslSocket, callback: *const fn (QSslSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QSslSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSocketState` instead
    ///
    pub const SetSocketState = setSocketState;

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
    /// ` _state: qabstractsocket_enums.SocketState `
    ///
    pub fn setSocketState(self: QSslSocket, _state: i32) void {
        qtc.QSslSocket_SetSocketState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `superSetSocketState` instead
    ///
    pub const SuperSetSocketState = superSetSocketState;

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
    /// ` _state: qabstractsocket_enums.SocketState `
    ///
    pub fn superSetSocketState(self: QSslSocket, _state: i32) void {
        qtc.QSslSocket_SuperSetSocketState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onSetSocketState` instead
    ///
    pub const OnSetSocketState = onSetSocketState;

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
    pub fn onSetSocketState(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSocketError` instead
    ///
    pub const SetSocketError = setSocketError;

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
    pub fn setSocketError(self: QSslSocket, socketError: i32) void {
        qtc.QSslSocket_SetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### DEPRECATED: Use `superSetSocketError` instead
    ///
    pub const SuperSetSocketError = superSetSocketError;

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
    pub fn superSetSocketError(self: QSslSocket, socketError: i32) void {
        qtc.QSslSocket_SuperSetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### DEPRECATED: Use `onSetSocketError` instead
    ///
    pub const OnSetSocketError = onSetSocketError;

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
    pub fn onSetSocketError(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLocalPort` instead
    ///
    pub const SetLocalPort = setLocalPort;

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
    pub fn setLocalPort(self: QSslSocket, port: u16) void {
        qtc.QSslSocket_SetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `superSetLocalPort` instead
    ///
    pub const SuperSetLocalPort = superSetLocalPort;

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
    pub fn superSetLocalPort(self: QSslSocket, port: u16) void {
        qtc.QSslSocket_SuperSetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `onSetLocalPort` instead
    ///
    pub const OnSetLocalPort = onSetLocalPort;

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
    pub fn onSetLocalPort(self: QSslSocket, callback: *const fn (QSslSocket, u16) callconv(.c) void) void {
        qtc.QSslSocket_OnSetLocalPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setLocalAddress` instead
    ///
    pub const SetLocalAddress = setLocalAddress;

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
    pub fn setLocalAddress(self: QSslSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QSslSocket_SetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `superSetLocalAddress` instead
    ///
    pub const SuperSetLocalAddress = superSetLocalAddress;

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
    pub fn superSetLocalAddress(self: QSslSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QSslSocket_SuperSetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `onSetLocalAddress` instead
    ///
    pub const OnSetLocalAddress = onSetLocalAddress;

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
    pub fn onSetLocalAddress(self: QSslSocket, callback: *const fn (QSslSocket, QHostAddress) callconv(.c) void) void {
        qtc.QSslSocket_OnSetLocalAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPeerPort` instead
    ///
    pub const SetPeerPort = setPeerPort;

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
    pub fn setPeerPort(self: QSslSocket, port: u16) void {
        qtc.QSslSocket_SetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `superSetPeerPort` instead
    ///
    pub const SuperSetPeerPort = superSetPeerPort;

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
    pub fn superSetPeerPort(self: QSslSocket, port: u16) void {
        qtc.QSslSocket_SuperSetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `onSetPeerPort` instead
    ///
    pub const OnSetPeerPort = onSetPeerPort;

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
    pub fn onSetPeerPort(self: QSslSocket, callback: *const fn (QSslSocket, u16) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPeerAddress` instead
    ///
    pub const SetPeerAddress = setPeerAddress;

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
    pub fn setPeerAddress(self: QSslSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QSslSocket_SetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `superSetPeerAddress` instead
    ///
    pub const SuperSetPeerAddress = superSetPeerAddress;

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
    pub fn superSetPeerAddress(self: QSslSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QSslSocket_SuperSetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `onSetPeerAddress` instead
    ///
    pub const OnSetPeerAddress = onSetPeerAddress;

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
    pub fn onSetPeerAddress(self: QSslSocket, callback: *const fn (QSslSocket, QHostAddress) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPeerName` instead
    ///
    pub const SetPeerName = setPeerName;

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
    pub fn setPeerName(self: QSslSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSslSocket_SetPeerName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `superSetPeerName` instead
    ///
    pub const SuperSetPeerName = superSetPeerName;

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
    pub fn superSetPeerName(self: QSslSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSslSocket_SuperSetPeerName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `onSetPeerName` instead
    ///
    pub const OnSetPeerName = onSetPeerName;

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
    pub fn onSetPeerName(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setOpenMode` instead
    ///
    pub const SetOpenMode = setOpenMode;

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
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setOpenMode(self: QSslSocket, _openMode: i32) void {
        qtc.QSslSocket_SetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `superSetOpenMode` instead
    ///
    pub const SuperSetOpenMode = superSetOpenMode;

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
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superSetOpenMode(self: QSslSocket, _openMode: i32) void {
        qtc.QSslSocket_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `onSetOpenMode` instead
    ///
    pub const OnSetOpenMode = onSetOpenMode;

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
    pub fn onSetOpenMode(self: QSslSocket, callback: *const fn (QSslSocket, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setErrorString` instead
    ///
    pub const SetErrorString = setErrorString;

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
    /// ` _errorString: []const u8 `
    ///
    pub fn setErrorString(self: QSslSocket, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QSslSocket_SetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `superSetErrorString` instead
    ///
    pub const SuperSetErrorString = superSetErrorString;

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
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetErrorString(self: QSslSocket, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QSslSocket_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// ### DEPRECATED: Use `onSetErrorString` instead
    ///
    pub const OnSetErrorString = onSetErrorString;

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
    pub fn onSetErrorString(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    pub fn sender(self: QSslSocket) QObject {
        return .{ .ptr = qtc.QSslSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSslSocket `
    ///
    pub fn superSender(self: QSslSocket) QObject {
        return .{ .ptr = qtc.QSslSocket_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSslSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSslSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    pub fn senderSignalIndex(self: QSslSocket) i32 {
        return qtc.QSslSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSslSocket `
    ///
    pub fn superSenderSignalIndex(self: QSslSocket) i32 {
        return qtc.QSslSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSslSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QSslSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSslSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSslSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSslSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSslSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSslSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSslSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSslSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSslSocket`
    ///
    /// ` callback: *const fn (self: QSslSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSslSocket, callback: *const fn (QSslSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QSslSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSslSocket `
    ///
    /// ` callback: *const fn (self: QSslSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSslSocket, callback: *const fn (QSslSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#dtor.QSslSocket)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSslSocket `
    ///
    pub fn delete(self: QSslSocket) void {
        qtc.QSslSocket_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#public-types)
pub const enums = struct {
    pub const SslMode = enum {
        pub const UnencryptedMode: i32 = 0;
        pub const SslClientMode: i32 = 1;
        pub const SslServerMode: i32 = 2;
    };

    pub const PeerVerifyMode = enum {
        pub const VerifyNone: i32 = 0;
        pub const QueryPeer: i32 = 1;
        pub const VerifyPeer: i32 = 2;
        pub const AutoVerifyPeer: i32 = 3;
    };
};
