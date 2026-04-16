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
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractsocket_enums = enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html)
pub const QAbstractSocket = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractSocket,

    pub const _is_QAbstractSocket = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// New constructs a new QAbstractSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` socketType: qabstractsocket_enums.SocketType `
    ///
    /// ` parent: QObject `
    ///
    pub fn New(socketType: i32, parent: anytype) QAbstractSocket {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QAbstractSocket_new(@bitCast(socketType), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn MetaObject(self: QAbstractSocket) QMetaObject {
        return .{ .ptr = qtc.QAbstractSocket_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QAbstractSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QAbstractSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperMetaObject(self: QAbstractSocket) QMetaObject {
        return .{ .ptr = qtc.QAbstractSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QAbstractSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QAbstractSocket, callback: *const fn (QAbstractSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QAbstractSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QAbstractSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QAbstractSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QAbstractSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QAbstractSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Resume(self: QAbstractSocket) void {
        qtc.QAbstractSocket_Resume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResume(self: QAbstractSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractSocket_OnResume(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResume` instead
    ///
    pub const QBaseResume = SuperResume;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperResume(self: QAbstractSocket) void {
        qtc.QAbstractSocket_SuperResume(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn PauseMode(self: QAbstractSocket) i32 {
        return qtc.QAbstractSocket_PauseMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` pauseMode: flag of qabstractsocket_enums.PauseMode `
    ///
    pub fn SetPauseMode(self: QAbstractSocket, pauseMode: i32) void {
        qtc.QAbstractSocket_SetPauseMode(@ptrCast(self.ptr), @bitCast(pauseMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind(self: QAbstractSocket, address: anytype, port: u16, mode: i32) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QAbstractSocket_Bind(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, address: QHostAddress, port: u16, mode: flag of qabstractsocket_enums.BindFlag) callconv(.c) bool `
    ///
    pub fn OnBind(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QHostAddress, u16, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnBind(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBind` instead
    ///
    pub const QBaseBind = SuperBind;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn SuperBind(self: QAbstractSocket, address: anytype, port: u16, mode: i32) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QAbstractSocket_SuperBind(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Bind2(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_Bind2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn ConnectToHost(self: QAbstractSocket, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QAbstractSocket_ConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, hostName: [*:0]const u8, port: u16, mode: flag of qiodevicebase_enums.OpenModeFlag, protocol: qabstractsocket_enums.NetworkLayerProtocol) callconv(.c) void `
    ///
    pub fn OnConnectToHost(self: QAbstractSocket, callback: *const fn (QAbstractSocket, [*:0]const u8, u16, i32, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_OnConnectToHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperConnectToHost` instead
    ///
    pub const QBaseConnectToHost = SuperConnectToHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` hostName: []const u8 `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    /// ` protocol: qabstractsocket_enums.NetworkLayerProtocol `
    ///
    pub fn SuperConnectToHost(self: QAbstractSocket, hostName: []const u8, port: u16, mode: i32, protocol: i32) void {
        const hostName_str = qtc.libqt_string{
            .len = hostName.len,
            .data = hostName.ptr,
        };
        qtc.QAbstractSocket_SuperConnectToHost(@ptrCast(self.ptr), hostName_str, @bitCast(port), @bitCast(mode), @bitCast(protocol));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToHost2(self: QAbstractSocket, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn DisconnectFromHost(self: QAbstractSocket) void {
        qtc.QAbstractSocket_DisconnectFromHost(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDisconnectFromHost(self: QAbstractSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractSocket_OnDisconnectFromHost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDisconnectFromHost` instead
    ///
    pub const QBaseDisconnectFromHost = SuperDisconnectFromHost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperDisconnectFromHost(self: QAbstractSocket) void {
        qtc.QAbstractSocket_SuperDisconnectFromHost(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsValid(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn BytesAvailable(self: QAbstractSocket) i64 {
        return qtc.QAbstractSocket_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: QAbstractSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QAbstractSocket_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBytesAvailable` instead
    ///
    pub const QBaseBytesAvailable = SuperBytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperBytesAvailable(self: QAbstractSocket) i64 {
        return qtc.QAbstractSocket_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn BytesToWrite(self: QAbstractSocket) i64 {
        return qtc.QAbstractSocket_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: QAbstractSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QAbstractSocket_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBytesToWrite` instead
    ///
    pub const QBaseBytesToWrite = SuperBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperBytesToWrite(self: QAbstractSocket) i64 {
        return qtc.QAbstractSocket_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn LocalPort(self: QAbstractSocket) u16 {
        return qtc.QAbstractSocket_LocalPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn LocalAddress(self: QAbstractSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn PeerPort(self: QAbstractSocket) u16 {
        return qtc.QAbstractSocket_PeerPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn PeerAddress(self: QAbstractSocket) QHostAddress {
        return .{ .ptr = qtc.QAbstractSocket_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerName(self: QAbstractSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_PeerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.PeerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn ReadBufferSize(self: QAbstractSocket) i64 {
        return qtc.QAbstractSocket_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SetReadBufferSize(self: QAbstractSocket, size: i64) void {
        qtc.QAbstractSocket_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, size: i64) callconv(.c) void `
    ///
    pub fn OnSetReadBufferSize(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i64) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetReadBufferSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetReadBufferSize` instead
    ///
    pub const QBaseSetReadBufferSize = SuperSetReadBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` size: i64 `
    ///
    pub fn SuperSetReadBufferSize(self: QAbstractSocket, size: i64) void {
        qtc.QAbstractSocket_SuperSetReadBufferSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Abort(self: QAbstractSocket) void {
        qtc.QAbstractSocket_Abort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SocketDescriptor(self: QAbstractSocket) isize {
        return qtc.QAbstractSocket_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn () callconv(.c) isize `
    ///
    pub fn OnSocketDescriptor(self: QAbstractSocket, callback: *const fn () callconv(.c) isize) void {
        qtc.QAbstractSocket_OnSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSocketDescriptor` instead
    ///
    pub const QBaseSocketDescriptor = SuperSocketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperSocketDescriptor(self: QAbstractSocket) isize {
        return qtc.QAbstractSocket_SuperSocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetSocketDescriptor(self: QAbstractSocket, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QAbstractSocket_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, socketDescriptor: isize, state: qabstractsocket_enums.SocketState, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnSetSocketDescriptor(self: QAbstractSocket, callback: *const fn (QAbstractSocket, isize, i32, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSocketDescriptor` instead
    ///
    pub const QBaseSetSocketDescriptor = SuperSetSocketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` socketDescriptor: isize `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetSocketDescriptor(self: QAbstractSocket, socketDescriptor: isize, state: i32, openMode: i32) bool {
        return qtc.QAbstractSocket_SuperSetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(state), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetSocketOption(self: QAbstractSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QAbstractSocket_SetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, option: qabstractsocket_enums.SocketOption, value: QVariant) callconv(.c) void `
    ///
    pub fn OnSetSocketOption(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32, QVariant) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSocketOption` instead
    ///
    pub const QBaseSetSocketOption = SuperSetSocketOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetSocketOption(self: QAbstractSocket, option: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QAbstractSocket_SuperSetSocketOption(@ptrCast(self.ptr), @bitCast(option), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SocketOption(self: QAbstractSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QAbstractSocket_SocketOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, option: qabstractsocket_enums.SocketOption) callconv(.c) QVariant `
    ///
    pub fn OnSocketOption(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) QVariant) void {
        qtc.QAbstractSocket_OnSocketOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSocketOption` instead
    ///
    pub const QBaseSocketOption = SuperSocketOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` option: qabstractsocket_enums.SocketOption `
    ///
    pub fn SuperSocketOption(self: QAbstractSocket, option: i32) QVariant {
        return .{ .ptr = qtc.QAbstractSocket_SuperSocketOption(@ptrCast(self.ptr), @bitCast(option)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketType `
    ///
    pub fn SocketType(self: QAbstractSocket) i32 {
        return qtc.QAbstractSocket_SocketType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketState `
    ///
    pub fn State(self: QAbstractSocket) i32 {
        return qtc.QAbstractSocket_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn Error(self: QAbstractSocket) i32 {
        return qtc.QAbstractSocket_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Close(self: QAbstractSocket) void {
        qtc.QAbstractSocket_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: QAbstractSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QAbstractSocket_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperClose(self: QAbstractSocket) void {
        qtc.QAbstractSocket_SuperClose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsSequential(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_IsSequential(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: QAbstractSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QAbstractSocket_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsSequential` instead
    ///
    pub const QBaseIsSequential = SuperIsSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperIsSequential(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Flush(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_Flush(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForConnected(self: QAbstractSocket, msecs: i32) bool {
        return qtc.QAbstractSocket_WaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForConnected(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnWaitForConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForConnected` instead
    ///
    pub const QBaseWaitForConnected = SuperWaitForConnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForConnected(self: QAbstractSocket, msecs: i32) bool {
        return qtc.QAbstractSocket_SuperWaitForConnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: QAbstractSocket, msecs: i32) bool {
        return qtc.QAbstractSocket_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForReadyRead` instead
    ///
    pub const QBaseWaitForReadyRead = SuperWaitForReadyRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: QAbstractSocket, msecs: i32) bool {
        return qtc.QAbstractSocket_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: QAbstractSocket, msecs: i32) bool {
        return qtc.QAbstractSocket_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForBytesWritten` instead
    ///
    pub const QBaseWaitForBytesWritten = SuperWaitForBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: QAbstractSocket, msecs: i32) bool {
        return qtc.QAbstractSocket_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForDisconnected(self: QAbstractSocket, msecs: i32) bool {
        return qtc.QAbstractSocket_WaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForDisconnected(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnWaitForDisconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWaitForDisconnected` instead
    ///
    pub const QBaseWaitForDisconnected = SuperWaitForDisconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForDisconnected(self: QAbstractSocket, msecs: i32) bool {
        return qtc.QAbstractSocket_SuperWaitForDisconnected(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn SetProxy(self: QAbstractSocket, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QAbstractSocket_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Proxy(self: QAbstractSocket) QNetworkProxy {
        return .{ .ptr = qtc.QAbstractSocket_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProtocolTag(self: QAbstractSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSocket_ProtocolTag(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.ProtocolTag: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn SetProtocolTag(self: QAbstractSocket, tag: []const u8) void {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        qtc.QAbstractSocket_SetProtocolTag(@ptrCast(self.ptr), tag_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn HostFound(self: QAbstractSocket) void {
        qtc.QAbstractSocket_HostFound(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket) callconv(.c) void `
    ///
    pub fn OnHostFound(self: QAbstractSocket, callback: *const fn (QAbstractSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_HostFound(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Connected(self: QAbstractSocket) void {
        qtc.QAbstractSocket_Connected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket) callconv(.c) void `
    ///
    pub fn OnConnected(self: QAbstractSocket, callback: *const fn (QAbstractSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Disconnected(self: QAbstractSocket) void {
        qtc.QAbstractSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: QAbstractSocket, callback: *const fn (QAbstractSocket) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketState `
    ///
    pub fn StateChanged(self: QAbstractSocket, param1: i32) void {
        qtc.QAbstractSocket_StateChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, param1: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` param1: qabstractsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: QAbstractSocket, param1: i32) void {
        qtc.QAbstractSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, param1: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` proxy: QNetworkProxy `
    ///
    /// ` authenticator: QAuthenticator `
    ///
    pub fn ProxyAuthenticationRequired(self: QAbstractSocket, proxy: anytype, authenticator: anytype) void {
        comptime _ = @TypeOf(proxy)._is_QNetworkProxy;
        comptime _ = @TypeOf(authenticator)._is_QAuthenticator;
        qtc.QAbstractSocket_ProxyAuthenticationRequired(@ptrCast(self.ptr), @ptrCast(proxy.ptr), @ptrCast(authenticator.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, proxy: QNetworkProxy, authenticator: QAuthenticator) callconv(.c) void `
    ///
    pub fn OnProxyAuthenticationRequired(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QNetworkProxy, QAuthenticator) callconv(.c) void) void {
        qtc.QAbstractSocket_Connect_ProxyAuthenticationRequired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadData(self: QAbstractSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QAbstractSocket_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: QAbstractSocket, callback: *const fn (QAbstractSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadData` instead
    ///
    pub const QBaseReadData = SuperReadData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadData(self: QAbstractSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QAbstractSocket_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: QAbstractSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QAbstractSocket_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: QAbstractSocket, callback: *const fn (QAbstractSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadLineData` instead
    ///
    pub const QBaseReadLineData = SuperReadLineData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: QAbstractSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QAbstractSocket_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: QAbstractSocket, maxSize: i64) i64 {
        return qtc.QAbstractSocket_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i64) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSkipData` instead
    ///
    pub const QBaseSkipData = SuperSkipData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: QAbstractSocket, maxSize: i64) i64 {
        return qtc.QAbstractSocket_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn WriteData(self: QAbstractSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QAbstractSocket_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, data: [*:0]const u8, lenVal: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: QAbstractSocket, callback: *const fn (QAbstractSocket, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QAbstractSocket_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteData` instead
    ///
    pub const QBaseWriteData = SuperWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn SuperWriteData(self: QAbstractSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QAbstractSocket_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SetSocketState(self: QAbstractSocket, state: i32) void {
        qtc.QAbstractSocket_SetSocketState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, state: qabstractsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnSetSocketState(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetSocketState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSocketState` instead
    ///
    pub const QBaseSetSocketState = SuperSetSocketState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` state: qabstractsocket_enums.SocketState `
    ///
    pub fn SuperSetSocketState(self: QAbstractSocket, state: i32) void {
        qtc.QAbstractSocket_SuperSetSocketState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SetSocketError(self: QAbstractSocket, socketError: i32) void {
        qtc.QAbstractSocket_SetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnSetSocketError(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetSocketError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSocketError` instead
    ///
    pub const QBaseSetSocketError = SuperSetSocketError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn SuperSetSocketError(self: QAbstractSocket, socketError: i32) void {
        qtc.QAbstractSocket_SuperSetSocketError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetLocalPort(self: QAbstractSocket, port: u16) void {
        qtc.QAbstractSocket_SetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetLocalPort(self: QAbstractSocket, callback: *const fn (QAbstractSocket, u16) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetLocalPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetLocalPort` instead
    ///
    pub const QBaseSetLocalPort = SuperSetLocalPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetLocalPort(self: QAbstractSocket, port: u16) void {
        qtc.QAbstractSocket_SuperSetLocalPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SetLocalAddress(self: QAbstractSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_SetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, address: QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetLocalAddress(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QHostAddress) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetLocalAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetLocalAddress` instead
    ///
    pub const QBaseSetLocalAddress = SuperSetLocalAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SuperSetLocalAddress(self: QAbstractSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_SuperSetLocalAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SetPeerPort(self: QAbstractSocket, port: u16) void {
        qtc.QAbstractSocket_SetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, port: u16) callconv(.c) void `
    ///
    pub fn OnSetPeerPort(self: QAbstractSocket, callback: *const fn (QAbstractSocket, u16) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetPeerPort(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPeerPort` instead
    ///
    pub const QBaseSetPeerPort = SuperSetPeerPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn SuperSetPeerPort(self: QAbstractSocket, port: u16) void {
        qtc.QAbstractSocket_SuperSetPeerPort(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SetPeerAddress(self: QAbstractSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_SetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, address: QHostAddress) callconv(.c) void `
    ///
    pub fn OnSetPeerAddress(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QHostAddress) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetPeerAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPeerAddress` instead
    ///
    pub const QBaseSetPeerAddress = SuperSetPeerAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SuperSetPeerAddress(self: QAbstractSocket, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_SuperSetPeerAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetPeerName(self: QAbstractSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSocket_SetPeerName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, name: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetPeerName(self: QAbstractSocket, callback: *const fn (QAbstractSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetPeerName(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPeerName` instead
    ///
    pub const QBaseSetPeerName = SuperSetPeerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SuperSetPeerName(self: QAbstractSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QAbstractSocket_SuperSetPeerName(@ptrCast(self.ptr), name_str);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` port: u16 `
    ///
    pub fn Bind1(self: QAbstractSocket, port: u16) bool {
        return qtc.QAbstractSocket_Bind1(@ptrCast(self.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qabstractsocket_enums.BindFlag `
    ///
    pub fn Bind22(self: QAbstractSocket, port: u16, mode: i32) bool {
        return qtc.QAbstractSocket_Bind22(@ptrCast(self.ptr), @bitCast(port), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToHost3(self: QAbstractSocket, address: anytype, port: u16, mode: i32) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QAbstractSocket_ConnectToHost3(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: QAbstractSocket) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: QAbstractSocket, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsTextModeEnabled(self: QAbstractSocket) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsOpen(self: QAbstractSocket) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsReadable(self: QAbstractSocket) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsWritable(self: QAbstractSocket) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn ReadChannelCount(self: QAbstractSocket) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn WriteChannelCount(self: QAbstractSocket) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn CurrentReadChannel(self: QAbstractSocket) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: QAbstractSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn CurrentWriteChannel(self: QAbstractSocket) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: QAbstractSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: QAbstractSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read2(self: QAbstractSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qabstractsocket.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: QAbstractSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qabstractsocket.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: QAbstractSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: QAbstractSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qabstractsocket.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn StartTransaction(self: QAbstractSocket) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn CommitTransaction(self: QAbstractSocket) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn RollbackTransaction(self: QAbstractSocket) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsTransactionStarted(self: QAbstractSocket) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: QAbstractSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: QAbstractSocket, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: QAbstractSocket, data: []u8) i64 {
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
    /// ` self: QAbstractSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: QAbstractSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek2(self: QAbstractSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qabstractsocket.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: QAbstractSocket, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: QAbstractSocket, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: QAbstractSocket, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: QAbstractSocket, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QAbstractSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn ReadyRead(self: QAbstractSocket) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: QAbstractSocket, callback: *const fn (QAbstractSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: QAbstractSocket, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: QAbstractSocket, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: QAbstractSocket, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn AboutToClose(self: QAbstractSocket) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: QAbstractSocket, callback: *const fn (QAbstractSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn ReadChannelFinished(self: QAbstractSocket) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: QAbstractSocket, callback: *const fn (QAbstractSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: QAbstractSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qabstractsocket.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QAbstractSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstractsocket.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QAbstractSocket, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsWidgetType(self: QAbstractSocket) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsWindowType(self: QAbstractSocket) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn IsQuickItemType(self: QAbstractSocket) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SignalsBlocked(self: QAbstractSocket) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QAbstractSocket, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Thread(self: QAbstractSocket) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QAbstractSocket, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QAbstractSocket, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QAbstractSocket, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QAbstractSocket, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QAbstractSocket, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QAbstractSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qabstractsocket.Children: Memory allocation failed");
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
    /// ` self: QAbstractSocket `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QAbstractSocket, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QAbstractSocket, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QAbstractSocket, obj: anytype) void {
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
    /// ` self: QAbstractSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QAbstractSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractSocket `
    ///
    pub fn Disconnect3(self: QAbstractSocket) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QAbstractSocket, receiver: anytype) bool {
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
    /// ` self: QAbstractSocket `
    ///
    pub fn DumpObjectTree(self: QAbstractSocket) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn DumpObjectInfo(self: QAbstractSocket) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QAbstractSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QAbstractSocket, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QAbstractSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qabstractsocket.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qabstractsocket.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstractSocket `
    ///
    pub fn BindingStorage(self: QAbstractSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn BindingStorage2(self: QAbstractSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Destroyed(self: QAbstractSocket) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QAbstractSocket, callback: *const fn (QAbstractSocket) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Parent(self: QAbstractSocket) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QAbstractSocket, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn DeleteLater(self: QAbstractSocket) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QAbstractSocket, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QAbstractSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QAbstractSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QAbstractSocket, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QAbstractSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QAbstractSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QAbstractSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QAbstractSocket, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: QAbstractSocket, mode: i32) bool {
        return qtc.QAbstractSocket_Open(@ptrCast(self.ptr), @bitCast(mode));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: QAbstractSocket, mode: i32) bool {
        return qtc.QAbstractSocket_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Pos(self: QAbstractSocket) i64 {
        return qtc.QAbstractSocket_Pos(@ptrCast(self.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperPos(self: QAbstractSocket) i64 {
        return qtc.QAbstractSocket_SuperPos(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: QAbstractSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QAbstractSocket_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Size(self: QAbstractSocket) i64 {
        return qtc.QAbstractSocket_Size(@ptrCast(self.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperSize(self: QAbstractSocket) i64 {
        return qtc.QAbstractSocket_SuperSize(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: QAbstractSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QAbstractSocket_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: QAbstractSocket, pos: i64) bool {
        return qtc.QAbstractSocket_Seek(@ptrCast(self.ptr), @bitCast(pos));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn SuperSeek(self: QAbstractSocket, pos: i64) bool {
        return qtc.QAbstractSocket_SuperSeek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, pos: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i64) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn AtEnd(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperAtEnd` instead
    ///
    pub const QBaseAtEnd = SuperAtEnd;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperAtEnd(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: QAbstractSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QAbstractSocket_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Reset(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_Reset(@ptrCast(self.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperReset(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: QAbstractSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QAbstractSocket_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn CanReadLine(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanReadLine` instead
    ///
    pub const QBaseCanReadLine = SuperCanReadLine;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperCanReadLine(self: QAbstractSocket) bool {
        return qtc.QAbstractSocket_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: QAbstractSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QAbstractSocket_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QAbstractSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QAbstractSocket_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QAbstractSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QAbstractSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QEvent) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QAbstractSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QAbstractSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QAbstractSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QAbstractSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QAbstractSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QAbstractSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QAbstractSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QAbstractSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QAbstractSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QAbstractSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QAbstractSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QAbstractSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QAbstractSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QChildEvent) callconv(.c) void) void {
        qtc.QAbstractSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QAbstractSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QAbstractSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QAbstractSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QAbstractSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QEvent) callconv(.c) void) void {
        qtc.QAbstractSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QAbstractSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QAbstractSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QAbstractSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QAbstractSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QAbstractSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAbstractSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QAbstractSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: QAbstractSocket, openMode: i32) void {
        qtc.QAbstractSocket_SetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: QAbstractSocket, openMode: i32) void {
        qtc.QAbstractSocket_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: QAbstractSocket, callback: *const fn (QAbstractSocket, i32) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: QAbstractSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QAbstractSocket_SetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QAbstractSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: QAbstractSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QAbstractSocket_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: QAbstractSocket, callback: *const fn (QAbstractSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QAbstractSocket_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Sender(self: QAbstractSocket) QObject {
        return .{ .ptr = qtc.QAbstractSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperSender(self: QAbstractSocket) QObject {
        return .{ .ptr = qtc.QAbstractSocket_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QAbstractSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAbstractSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn SenderSignalIndex(self: QAbstractSocket) i32 {
        return qtc.QAbstractSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    pub fn SuperSenderSignalIndex(self: QAbstractSocket) i32 {
        return qtc.QAbstractSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QAbstractSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QAbstractSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QAbstractSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QAbstractSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAbstractSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QAbstractSocket, callback: *const fn (QAbstractSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QAbstractSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QAbstractSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAbstractSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAbstractSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QAbstractSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAbstractSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket`
    ///
    /// ` callback: *const fn (self: QAbstractSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QAbstractSocket, callback: *const fn (QAbstractSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QAbstractSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractSocket `
    ///
    /// ` callback: *const fn (self: QAbstractSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QAbstractSocket, callback: *const fn (QAbstractSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#dtor.QAbstractSocket)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractSocket `
    ///
    pub fn Delete(self: QAbstractSocket) void {
        qtc.QAbstractSocket_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractsocket.html#public-types)
pub const enums = struct {
    pub const SocketType = enum(i32) {
        pub const TcpSocket: i32 = 0;
        pub const UdpSocket: i32 = 1;
        pub const SctpSocket: i32 = 2;
        pub const UnknownSocketType: i32 = -1;
    };

    pub const NetworkLayerProtocol = enum(i32) {
        pub const IPv4Protocol: i32 = 0;
        pub const IPv6Protocol: i32 = 1;
        pub const AnyIPProtocol: i32 = 2;
        pub const UnknownNetworkLayerProtocol: i32 = -1;
    };

    pub const SocketError = enum(i32) {
        pub const ConnectionRefusedError: i32 = 0;
        pub const RemoteHostClosedError: i32 = 1;
        pub const HostNotFoundError: i32 = 2;
        pub const SocketAccessError: i32 = 3;
        pub const SocketResourceError: i32 = 4;
        pub const SocketTimeoutError: i32 = 5;
        pub const DatagramTooLargeError: i32 = 6;
        pub const NetworkError: i32 = 7;
        pub const AddressInUseError: i32 = 8;
        pub const SocketAddressNotAvailableError: i32 = 9;
        pub const UnsupportedSocketOperationError: i32 = 10;
        pub const UnfinishedSocketOperationError: i32 = 11;
        pub const ProxyAuthenticationRequiredError: i32 = 12;
        pub const SslHandshakeFailedError: i32 = 13;
        pub const ProxyConnectionRefusedError: i32 = 14;
        pub const ProxyConnectionClosedError: i32 = 15;
        pub const ProxyConnectionTimeoutError: i32 = 16;
        pub const ProxyNotFoundError: i32 = 17;
        pub const ProxyProtocolError: i32 = 18;
        pub const OperationError: i32 = 19;
        pub const SslInternalError: i32 = 20;
        pub const SslInvalidUserDataError: i32 = 21;
        pub const TemporaryError: i32 = 22;
        pub const UnknownSocketError: i32 = -1;
    };

    pub const SocketState = enum(i32) {
        pub const UnconnectedState: i32 = 0;
        pub const HostLookupState: i32 = 1;
        pub const ConnectingState: i32 = 2;
        pub const ConnectedState: i32 = 3;
        pub const BoundState: i32 = 4;
        pub const ListeningState: i32 = 5;
        pub const ClosingState: i32 = 6;
    };

    pub const SocketOption = enum(i32) {
        pub const LowDelayOption: i32 = 0;
        pub const KeepAliveOption: i32 = 1;
        pub const MulticastTtlOption: i32 = 2;
        pub const MulticastLoopbackOption: i32 = 3;
        pub const TypeOfServiceOption: i32 = 4;
        pub const SendBufferSizeSocketOption: i32 = 5;
        pub const ReceiveBufferSizeSocketOption: i32 = 6;
        pub const PathMtuSocketOption: i32 = 7;
    };

    pub const BindFlag = enum(i32) {
        pub const DefaultForPlatform: i32 = 0;
        pub const ShareAddress: i32 = 1;
        pub const DontShareAddress: i32 = 2;
        pub const ReuseAddressHint: i32 = 4;
    };

    pub const PauseMode = enum(i32) {
        pub const PauseNever: i32 = 0;
        pub const PauseOnSslErrors: i32 = 1;
    };
};
