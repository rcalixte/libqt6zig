const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qhostaddress_enums = @import("libqhostaddress.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qssl_enums = @import("libqssl.zig").enums;
const qsslsocket_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html)
pub const qsslsocket = struct {
    /// New constructs a new QSslSocket object.
    ///
    pub fn New() QtC.QSslSocket {
        return qtc.QSslSocket_new();
    }

    /// New2 constructs a new QSslSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.QSslSocket {
        return qtc.QSslSocket_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSslSocket_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QSslSocket_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSslSocket_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslSocket_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSslSocket_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSslSocket_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSslSocket_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSslSocket_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSslSocket_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Resume(self: ?*anyopaque) void {
        qtc.QSslSocket_Resume(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#resume)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResume(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSslSocket_OnResume(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperResume(self: ?*anyopaque) void {
        qtc.QSslSocket_SuperResume(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHostEncrypted(self: ?*anyopaque, hostName: []const u8, port: u16) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted(@ptrCast(self), hostName_str, @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` sslPeerName: []const u8 `
    ///
    pub fn ConnectToHostEncrypted2(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted2(@ptrCast(self), hostName_str, @bitCast(port), sslPeerName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QSslSocket_SetSocketDescriptor(@ptrCast(self), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketDescriptor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnSetSocketDescriptor(self: ?*anyopaque, callback: *const fn (?*anyopaque, isize, i32, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnSetSocketDescriptor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QSslSocket_SuperSetSocketDescriptor(@ptrCast(self), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn ConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, openMode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHost(@ptrCast(self), hostName_str, @bitCast(port), @bitCast(openMode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, hostName: [*:0]const u8, port: u16, openMode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void `
    ///
    pub fn OnConnectToHost(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, u16, i32, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnConnectToHost(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn SuperConnectToHost(self: ?*anyopaque, hostName: []const u8, port: u16, openMode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_SuperConnectToHost(@ptrCast(self), hostName_str, @bitCast(port), @bitCast(openMode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn DisconnectFromHost(self: ?*anyopaque) void {
        qtc.QSslSocket_DisconnectFromHost(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#disconnectFromHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDisconnectFromHost(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSslSocket_OnDisconnectFromHost(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperDisconnectFromHost(self: ?*anyopaque) void {
        qtc.QSslSocket_SuperDisconnectFromHost(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QSslSocket_SetSocketOption(@ptrCast(self), @bitCast(option), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSocketOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, option: qabstractsocket_enums.SocketOption, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetSocketOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketOption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperSetSocketOption(self: ?*anyopaque, option: i32, value: ?*anyopaque) void {
        qtc.QSslSocket_SuperSetSocketOption(@ptrCast(self), @bitCast(option), @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QSslSocket_SocketOption(@ptrCast(self), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#socketOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, option: qabstractsocket_enums.SocketOption) callconv(.c) QtC.QVariant `
    ///
    pub fn OnSocketOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.QSslSocket_OnSocketOption(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SuperSocketOption(self: ?*anyopaque, option: i32) QtC.QVariant {
        return qtc.QSslSocket_SuperSocketOption(@ptrCast(self), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#mode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qsslsocket_enums.SslMode `
    ///
    pub fn Mode(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_Mode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#isEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn IsEncrypted(self: ?*anyopaque) bool {
        return qtc.QSslSocket_IsEncrypted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#protocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.SslProtocol `
    ///
    pub fn Protocol(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_Protocol(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` protocol: qssl_enums.SslProtocol `
    ///
    pub fn SetProtocol(self: ?*anyopaque, protocol: i32) void {
        qtc.QSslSocket_SetProtocol(@ptrCast(self), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qsslsocket_enums.PeerVerifyMode `
    ///
    pub fn PeerVerifyMode(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_PeerVerifyMode(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` mode: qsslsocket_enums.PeerVerifyMode `
    ///
    pub fn SetPeerVerifyMode(self: ?*anyopaque, mode: i32) void {
        qtc.QSslSocket_SetPeerVerifyMode(@ptrCast(self), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn PeerVerifyDepth(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_PeerVerifyDepth(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` depth: i32 `
    ///
    pub fn SetPeerVerifyDepth(self: ?*anyopaque, depth: i32) void {
        qtc.QSslSocket_SetPeerVerifyDepth(@ptrCast(self), @bitCast(depth));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerVerifyName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSslSocket_PeerVerifyName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.PeerVerifyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPeerVerifyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    pub fn SetPeerVerifyName(self: ?*anyopaque, hostName: []const u8) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_SetPeerVerifyName(@ptrCast(self), hostName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn BytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_BytesAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesAvailable(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_SuperBytesAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn BytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_BytesToWrite(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#bytesToWrite)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnBytesToWrite(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_SuperBytesToWrite(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn CanReadLine(self: ?*anyopaque) bool {
        return qtc.QSslSocket_CanReadLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#canReadLine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnCanReadLine(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperCanReadLine(self: ?*anyopaque) bool {
        return qtc.QSslSocket_SuperCanReadLine(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Close(self: ?*anyopaque) void {
        qtc.QSslSocket_Close(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QSslSocket_OnClose(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperClose(self: ?*anyopaque) void {
        qtc.QSslSocket_SuperClose(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn AtEnd(self: ?*anyopaque) bool {
        return qtc.QSslSocket_AtEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#atEnd)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnAtEnd(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperAtEnd(self: ?*anyopaque) bool {
        return qtc.QSslSocket_SuperAtEnd(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QSslSocket_SetReadBufferSize(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setReadBufferSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, size: i64) callconv(.c) void `
    ///
    pub fn OnSetReadBufferSize(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSslSocket_OnSetReadBufferSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperSetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QSslSocket_SuperSetReadBufferSize(@ptrCast(self), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn EncryptedBytesAvailable(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_EncryptedBytesAvailable(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn EncryptedBytesToWrite(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_EncryptedBytesToWrite(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SslConfiguration(self: ?*anyopaque) QtC.QSslConfiguration {
        return qtc.QSslSocket_SslConfiguration(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setSslConfiguration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` config: QtC.QSslConfiguration `
    ///
    pub fn SetSslConfiguration(self: ?*anyopaque, config: ?*anyopaque) void {
        qtc.QSslSocket_SetSslConfiguration(@ptrCast(self), @ptrCast(config));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` localChain: []QtC.QSslCertificate `
    ///
    pub fn SetLocalCertificateChain(self: ?*anyopaque, localChain: []QtC.QSslCertificate) void {
        const localChain_list = qtc.libqt_list{
            .len = localChain.len,
            .data = @ptrCast(localChain.ptr),
        };
        qtc.QSslSocket_SetLocalCertificateChain(@ptrCast(self), localChain_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#localCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalCertificateChain(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslSocket_LocalCertificateChain(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslsocket.LocalCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` certificate: QtC.QSslCertificate `
    ///
    pub fn SetLocalCertificate(self: ?*anyopaque, certificate: ?*anyopaque) void {
        qtc.QSslSocket_SetLocalCertificate(@ptrCast(self), @ptrCast(certificate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetLocalCertificate2(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetLocalCertificate2(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#localCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn LocalCertificate(self: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslSocket_LocalCertificate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn PeerCertificate(self: ?*anyopaque) QtC.QSslCertificate {
        return qtc.QSslSocket_PeerCertificate(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerCertificateChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerCertificateChain(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslCertificate {
        const _arr: qtc.libqt_list = qtc.QSslSocket_PeerCertificateChain(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslCertificate, _arr.len) catch @panic("qsslsocket.PeerCertificateChain: Memory allocation failed");
        const _data: [*]QtC.QSslCertificate = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sessionCipher)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SessionCipher(self: ?*anyopaque) QtC.QSslCipher {
        return qtc.QSslSocket_SessionCipher(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sessionProtocol)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qssl_enums.SslProtocol `
    ///
    pub fn SessionProtocol(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_SessionProtocol(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ocspResponses)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn OcspResponses(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QOcspResponse {
        const _arr: qtc.libqt_list = qtc.QSslSocket_OcspResponses(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QOcspResponse, _arr.len) catch @panic("qsslsocket.OcspResponses: Memory allocation failed");
        const _data: [*]QtC.QOcspResponse = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` key: QtC.QSslKey `
    ///
    pub fn SetPrivateKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSslSocket_SetPrivateKey(@ptrCast(self), @ptrCast(key));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    pub fn SetPrivateKey2(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey2(@ptrCast(self), fileName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#privateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn PrivateKey(self: ?*anyopaque) QtC.QSslKey {
        return qtc.QSslSocket_PrivateKey(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForConnected(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForConnected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForConnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForConnected(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn WaitForEncrypted(self: ?*anyopaque) bool {
        return qtc.QSslSocket_WaitForEncrypted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForReadyRead(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForReadyRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForReadyRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForReadyRead(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForBytesWritten(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForBytesWritten)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForBytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForBytesWritten(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForDisconnected(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForDisconnected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnWaitForDisconnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForDisconnected(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_SuperWaitForDisconnected(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslHandshakeErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SslHandshakeErrors(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QSslError {
        const _arr: qtc.libqt_list = qtc.QSslSocket_SslHandshakeErrors(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QSslError, _arr.len) catch @panic("qsslsocket.SslHandshakeErrors: Memory allocation failed");
        const _data: [*]QtC.QSslError = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportsSsl)
    ///
    pub fn SupportsSsl() bool {
        return qtc.QSslSocket_SupportsSsl();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslLibraryVersionNumber)
    ///
    pub fn SslLibraryVersionNumber() i64 {
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
    pub fn SslLibraryBuildVersionNumber() i64 {
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
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` errors: []QtC.QSslError `
    ///
    pub fn IgnoreSslErrors(self: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslSocket_IgnoreSslErrors(@ptrCast(self), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#continueInterruptedHandshake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn ContinueInterruptedHandshake(self: ?*anyopaque) void {
        qtc.QSslSocket_ContinueInterruptedHandshake(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#startClientEncryption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn StartClientEncryption(self: ?*anyopaque) void {
        qtc.QSslSocket_StartClientEncryption(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#startServerEncryption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn StartServerEncryption(self: ?*anyopaque) void {
        qtc.QSslSocket_StartServerEncryption(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#ignoreSslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn IgnoreSslErrors2(self: ?*anyopaque) void {
        qtc.QSslSocket_IgnoreSslErrors2(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Encrypted(self: ?*anyopaque) void {
        qtc.QSslSocket_Encrypted(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encrypted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket) callconv(.c) void `
    ///
    pub fn OnEncrypted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_Encrypted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` errorVal: QtC.QSslError `
    ///
    pub fn PeerVerifyError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslSocket_PeerVerifyError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#peerVerifyError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, errorVal: QtC.QSslError) callconv(.c) void `
    ///
    pub fn OnPeerVerifyError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PeerVerifyError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` errors: []QtC.QSslError `
    ///
    pub fn SslErrors(self: ?*anyopaque, errors: []QtC.QSslError) void {
        const errors_list = qtc.libqt_list{
            .len = errors.len,
            .data = @ptrCast(errors.ptr),
        };
        qtc.QSslSocket_SslErrors(@ptrCast(self), errors_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#sslErrors)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, errors: qtc.libqt_list ([]QtC.QSslError)) callconv(.c) void `
    ///
    pub fn OnSslErrors(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QSslSocket_Connect_SslErrors(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` newMode: qsslsocket_enums.SslMode `
    ///
    pub fn ModeChanged(self: ?*anyopaque, newMode: i32) void {
        qtc.QSslSocket_ModeChanged(@ptrCast(self), @bitCast(newMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#modeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, newMode: qsslsocket_enums.SslMode) callconv(.c) void `
    ///
    pub fn OnModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSslSocket_Connect_ModeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` totalBytes: i64 `
    ///
    pub fn EncryptedBytesWritten(self: ?*anyopaque, totalBytes: i64) void {
        qtc.QSslSocket_EncryptedBytesWritten(@ptrCast(self), @bitCast(totalBytes));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#encryptedBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, totalBytes: i64) callconv(.c) void `
    ///
    pub fn OnEncryptedBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QSslSocket_Connect_EncryptedBytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` authenticator: QtC.QSslPreSharedKeyAuthenticator `
    ///
    pub fn PreSharedKeyAuthenticationRequired(self: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QSslSocket_PreSharedKeyAuthenticationRequired(@ptrCast(self), @ptrCast(authenticator));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#preSharedKeyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, authenticator: QtC.QSslPreSharedKeyAuthenticator) callconv(.c) void `
    ///
    pub fn OnPreSharedKeyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_PreSharedKeyAuthenticationRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn NewSessionTicketReceived(self: ?*anyopaque) void {
        qtc.QSslSocket_NewSessionTicketReceived(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#newSessionTicketReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket) callconv(.c) void `
    ///
    pub fn OnNewSessionTicketReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_NewSessionTicketReceived(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
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
        qtc.QSslSocket_AlertSent(@ptrCast(self), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertSent)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertSent(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertSent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
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
        qtc.QSslSocket_AlertReceived(@ptrCast(self), @bitCast(level), @bitCast(typeVal), description_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#alertReceived)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, level: qssl_enums.AlertLevel, typeVal: qssl_enums.AlertType, description: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAlertReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_Connect_AlertReceived(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` errorVal: QtC.QSslError `
    ///
    pub fn HandshakeInterruptedOnError(self: ?*anyopaque, errorVal: ?*anyopaque) void {
        qtc.QSslSocket_HandshakeInterruptedOnError(@ptrCast(self), @ptrCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#handshakeInterruptedOnError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, errorVal: QtC.QSslError) callconv(.c) void `
    ///
    pub fn OnHandshakeInterruptedOnError(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_Connect_HandshakeInterruptedOnError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_ReadData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnReadData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_SuperReadData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSslSocket_SkipData(@ptrCast(self), @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#skipData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnSkipData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QSslSocket_SuperSkipData(@ptrCast(self), @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_WriteData(@ptrCast(self), data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnWriteData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_SuperWriteData(@ptrCast(self), data_Cstring, @bitCast(lenVal));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsslsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHostEncrypted3(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted3(@ptrCast(self), hostName_str, @bitCast(port), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn ConnectToHostEncrypted4(self: ?*anyopaque, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted4(@ptrCast(self), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` sslPeerName: []const u8 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHostEncrypted42(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted42(@ptrCast(self), hostName_str, @bitCast(port), sslPeerName_str, @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#connectToHostEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
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
    pub fn ConnectToHostEncrypted5(self: ?*anyopaque, hostName: []const u8, port: u16, sslPeerName: []const u8, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        const sslPeerName_str = qtc.libqt_string{
            .len = sslPeerName.len,
            .data = sslPeerName.ptr,
        };
        qtc.QSslSocket_ConnectToHostEncrypted5(@ptrCast(self), hostName_str, @bitCast(port), sslPeerName_str, @bitCast(mode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setLocalCertificate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn SetLocalCertificate22(self: ?*anyopaque, fileName: []const u8, format: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetLocalCertificate22(@ptrCast(self), fileName_str, @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    pub fn SetPrivateKey22(self: ?*anyopaque, fileName: []const u8, algorithm: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey22(@ptrCast(self), fileName_str, @bitCast(algorithm));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    pub fn SetPrivateKey3(self: ?*anyopaque, fileName: []const u8, algorithm: i32, format: i32) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        qtc.QSslSocket_SetPrivateKey3(@ptrCast(self), fileName_str, @bitCast(algorithm), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#setPrivateKey)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` fileName: []const u8 `
    ///
    /// ` algorithm: qssl_enums.KeyAlgorithm `
    ///
    /// ` format: qssl_enums.EncodingFormat `
    ///
    /// ` passPhrase: []u8 `
    ///
    pub fn SetPrivateKey4(self: ?*anyopaque, fileName: []const u8, algorithm: i32, format: i32, passPhrase: []u8) void {
        const fileName_str = qtc.libqt_string{
            .len = fileName.len,
            .data = fileName.ptr,
        };
        const passPhrase_str = qtc.libqt_string{
            .len = passPhrase.len,
            .data = passPhrase.ptr,
        };
        qtc.QSslSocket_SetPrivateKey4(@ptrCast(self), fileName_str, @bitCast(algorithm), @bitCast(format), passPhrase_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#waitForEncrypted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForEncrypted1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QSslSocket_WaitForEncrypted1(@ptrCast(self), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsslsocket.html#supportedProtocols)
    ///
    /// ## Parameter(s):
    ///
    /// ` backendName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qssl_enums.SslProtocol `
    ///
    pub fn SupportedProtocols1(backendName: []const u8, allocator: std.mem.Allocator) []i32 {
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
    /// ` backendName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qssl_enums.ImplementedClass `
    ///
    pub fn ImplementedClasses1(backendName: []const u8, allocator: std.mem.Allocator) []i32 {
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
    /// ` backendName: []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ## Returns:
    ///
    /// ` []qssl_enums.SupportedFeature `
    ///
    pub fn SupportedFeatures1(backendName: []const u8, allocator: std.mem.Allocator) []i32 {
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind2(self: ?*anyopaque, addr: i32, port: u16) bool {
        return qtc.QTcpSocket_Bind2(@ptrCast(self), @bitCast(addr), @bitCast(port));
    }

    /// Inherited from QTcpSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` addr: qhostaddress_enums.SpecialAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind3(self: ?*anyopaque, addr: i32, port: u16, mode: i32) bool {
        return qtc.QTcpSocket_Bind3(@ptrCast(self), @bitCast(addr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn PauseMode(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_PauseMode(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn SetPauseMode(self: ?*anyopaque, pauseMode: i32) void {
        qtc.QAbstractSocket_SetPauseMode(@ptrCast(self), @bitCast(pauseMode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHost2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QAbstractSocket_ConnectToHost2(@ptrCast(self), @ptrCast(address), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QAbstractSocket_IsValid(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn LocalPort(self: ?*anyopaque) u16 {
        return qtc.QAbstractSocket_LocalPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn LocalAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QAbstractSocket_LocalAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn PeerPort(self: ?*anyopaque) u16 {
        return qtc.QAbstractSocket_PeerPort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn PeerAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QAbstractSocket_PeerAddress(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_PeerName(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn ReadBufferSize(self: ?*anyopaque) i64 {
        return qtc.QAbstractSocket_ReadBufferSize(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Abort(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Abort(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketType `
    ///
    pub fn SocketType(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_SocketType(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketState `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_State(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QAbstractSocket_Error(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Flush(self: ?*anyopaque) bool {
        return qtc.QAbstractSocket_Flush(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` networkProxy: QtC.QNetworkProxy `
    ///
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        qtc.QAbstractSocket_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Proxy(self: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QAbstractSocket_Proxy(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolTag(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_ProtocolTag(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn SetProtocolTag(self: ?*anyopaque, tag: []const u8) void {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        qtc.QAbstractSocket_SetProtocolTag(@ptrCast(self), tag_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn HostFound(self: ?*anyopaque) void {
        qtc.QAbstractSocket_HostFound(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket) callconv(.c) void `
    ///
    pub fn OnHostFound(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_HostFound(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Connected(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Connected(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket) callconv(.c) void `
    ///
    pub fn OnConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Connected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Disconnected(self: ?*anyopaque) void {
        qtc.QAbstractSocket_Disconnected(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Disconnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketState `
    ///
    pub fn StateChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QAbstractSocket_StateChanged(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, param1: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_StateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: ?*anyopaque, param1: i32) void {
        qtc.QAbstractSocket_ErrorOccurred(@ptrCast(self), @bitCast(param1));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, param1: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` proxy: QtC.QNetworkProxy `
    ///
    /// ` authenticator: QtC.QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: ?*anyopaque, proxy: ?*anyopaque, authenticator: ?*anyopaque) void {
        qtc.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self), @ptrCast(proxy), @ptrCast(authenticator));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, proxy: QtC.QNetworkProxy, authenticator: QtC.QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind1(self: ?*anyopaque, port: u16) bool {
        return qtc.QAbstractSocket_Bind1(@ptrCast(self), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind22(self: ?*anyopaque, port: u16, mode: i32) bool {
        return qtc.QAbstractSocket_Bind22(@ptrCast(self), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHost3(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i32) void {
        qtc.QAbstractSocket_ConnectToHost3(@ptrCast(self), @ptrCast(address), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: ?*anyopaque) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn IsTextModeEnabled(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn IsOpen(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn IsReadable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn IsWritable(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn ReadChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn WriteChannelCount(self: ?*anyopaque) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn CurrentReadChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn CurrentWriteChannel(self: ?*anyopaque) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Read2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self), @bitCast(maxlen));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn StartTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn CommitTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn RollbackTransaction(self: ?*anyopaque) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn IsTransactionStarted(self: ?*anyopaque) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: ?*anyopaque, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: ?*anyopaque, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return qtc.QIODevice_Write3(@ptrCast(self), data_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Peek2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self), @bitCast(maxlen));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: ?*anyopaque, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: ?*anyopaque, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: ?*anyopaque, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn ReadyRead(self: ?*anyopaque) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn AboutToClose(self: ?*anyopaque) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn ReadChannelFinished(self: ?*anyopaque) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` maxlen: i64 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), @bitCast(maxlen));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsslsocket.Children: Memory allocation failed");
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket) callconv(.c) void `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i32) bool {
        return qtc.QSslSocket_Bind(@ptrCast(self), @ptrCast(address), @bitCast(port), @bitCast(mode));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn SuperBind(self: ?*anyopaque, address: ?*anyopaque, port: u16, mode: i32) bool {
        return qtc.QSslSocket_SuperBind(@ptrCast(self), @ptrCast(address), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, address: QtC.QHostAddress, port: u16, mode: flag of qabstractsocket_enums.BindFlag) callconv(.c) bool `
    ///
    pub fn OnBind(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, u16, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnBind(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return qtc.QSslSocket_SocketDescriptor(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperSocketDescriptor(self: ?*anyopaque) isize {
        return qtc.QSslSocket_SuperSocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) isize `
    ///
    pub fn OnSocketDescriptor(self: ?*anyopaque, callback: *const fn () callconv(.c) isize) void {
        qtc.QSslSocket_OnSocketDescriptor(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn IsSequential(self: ?*anyopaque) bool {
        return qtc.QSslSocket_IsSequential(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperIsSequential(self: ?*anyopaque) bool {
        return qtc.QSslSocket_SuperIsSequential(@ptrCast(self));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnIsSequential(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_ReadLineData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: ?*anyopaque, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QSslSocket_SuperReadLineData(@ptrCast(self), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QSslSocket_OnReadLineData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: ?*anyopaque, mode: i32) bool {
        return qtc.QSslSocket_Open(@ptrCast(self), @bitCast(mode));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: ?*anyopaque, mode: i32) bool {
        return qtc.QSslSocket_SuperOpen(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QSslSocket_OnOpen(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Pos(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_Pos(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperPos(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_SuperPos(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnPos(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Size(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_Size(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperSize(self: ?*anyopaque) i64 {
        return qtc.QSslSocket_SuperSize(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: ?*anyopaque, callback: *const fn () callconv(.c) i64) void {
        qtc.QSslSocket_OnSize(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QSslSocket_Seek(@ptrCast(self), @bitCast(pos));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn SuperSeek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QSslSocket_SuperSeek(@ptrCast(self), @bitCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, pos: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QSslSocket_OnSeek(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Reset(self: ?*anyopaque) bool {
        return qtc.QSslSocket_Reset(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperReset(self: ?*anyopaque) bool {
        return qtc.QSslSocket_SuperReset(@ptrCast(self));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.QSslSocket_OnReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslSocket_Event(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslSocket_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSslSocket_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslSocket_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSslSocket_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSslSocket_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSslSocket_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslSocket_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslSocket_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslSocket_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSslSocket_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SetSocketState(self: ?*anyopaque, state: i32) void {
        qtc.QSslSocket_SetSocketState(@ptrCast(self), @bitCast(state));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SuperSetSocketState(self: ?*anyopaque, state: i32) void {
        qtc.QSslSocket_SuperSetSocketState(@ptrCast(self), @bitCast(state));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnSetSocketState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketState(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SetSocketError(self: ?*anyopaque, socketError: i32) void {
        qtc.QSslSocket_SetSocketError(@ptrCast(self), @bitCast(socketError));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SuperSetSocketError(self: ?*anyopaque, socketError: i32) void {
        qtc.QSslSocket_SuperSetSocketError(@ptrCast(self), @bitCast(socketError));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnSetSocketError(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetSocketError(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetLocalPort(self: ?*anyopaque, port: u16) void {
        qtc.QSslSocket_SetLocalPort(@ptrCast(self), @bitCast(port));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetLocalPort(self: ?*anyopaque, port: u16) void {
        qtc.QSslSocket_SuperSetLocalPort(@ptrCast(self), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetLocalPort(self: ?*anyopaque, callback: *const fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QSslSocket_OnSetLocalPort(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn SetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSslSocket_SetLocalAddress(@ptrCast(self), @ptrCast(address));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn SuperSetLocalAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSslSocket_SuperSetLocalAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, address: QtC.QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetLocalAddress(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnSetLocalAddress(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetPeerPort(self: ?*anyopaque, port: u16) void {
        qtc.QSslSocket_SetPeerPort(@ptrCast(self), @bitCast(port));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetPeerPort(self: ?*anyopaque, port: u16) void {
        qtc.QSslSocket_SuperSetPeerPort(@ptrCast(self), @bitCast(port));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetPeerPort(self: ?*anyopaque, callback: *const fn (?*anyopaque, u16) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerPort(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn SetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSslSocket_SetPeerAddress(@ptrCast(self), @ptrCast(address));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn SuperSetPeerAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QSslSocket_SuperSetPeerAddress(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, address: QtC.QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetPeerAddress(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerAddress(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSslSocket_SetPeerName(@ptrCast(self), name_str);
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetPeerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QSslSocket_SuperSetPeerName(@ptrCast(self), name_str);
    }

    /// Inherited from QAbstractSocket
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetPeerName(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_OnSetPeerName(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QSslSocket_SetOpenMode(@ptrCast(self), @bitCast(openMode));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QSslSocket_SuperSetOpenMode(@ptrCast(self), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSslSocket_OnSetOpenMode(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSslSocket_SetErrorString(@ptrCast(self), errorString_str);
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QSslSocket_SuperSetErrorString(@ptrCast(self), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSslSocket_OnSetErrorString(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSslSocket_Sender(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSslSocket_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QSslSocket_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSslSocket_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QSslSocket_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslSocket_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSslSocket_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSslSocket_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSslSocket_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QSslSocket `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSslSocket_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket`
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSslSocket_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QSslSocket `
    ///
    /// ` callback: *const fn (self: QtC.QSslSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QSslSocket `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QSslSocket_Delete(@ptrCast(self));
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
