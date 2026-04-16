const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBluetoothAddress = @import("libqt6").QBluetoothAddress;
const QBluetoothServiceInfo = @import("libqt6").QBluetoothServiceInfo;
const QBluetoothUuid = @import("libqt6").QBluetoothUuid;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qbluetooth_enums = @import("libqbluetooth.zig").enums;
const qbluetoothserviceinfo_enums = @import("libqbluetoothserviceinfo.zig").enums;
const qbluetoothsocket_enums = enums;
const qbluetoothuuid_enums = @import("libqbluetoothuuid.zig").enums;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html)
pub const QBluetoothSocket = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothSocket,

    pub const _is_QBluetoothSocket = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// New constructs a new QBluetoothSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    pub fn New(socketType: i32) QBluetoothSocket {
        return .{ .ptr = qtc.QBluetoothSocket_new(@bitCast(socketType)) };
    }

    /// New2 constructs a new QBluetoothSocket object.
    ///
    pub fn New2() QBluetoothSocket {
        return .{ .ptr = qtc.QBluetoothSocket_new2() };
    }

    /// New3 constructs a new QBluetoothSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(socketType: i32, parent: anytype) QBluetoothSocket {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothSocket_new3(@bitCast(socketType), @ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QBluetoothSocket object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(parent: anytype) QBluetoothSocket {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothSocket_new4(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn MetaObject(self: QBluetoothSocket) QMetaObject {
        return .{ .ptr = qtc.QBluetoothSocket_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QBluetoothSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBluetoothSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperMetaObject(self: QBluetoothSocket) QMetaObject {
        return .{ .ptr = qtc.QBluetoothSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QBluetoothSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBluetoothSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QBluetoothSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QBluetoothSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBluetoothSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QBluetoothSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothsocket.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Abort(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_Abort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Close(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClose(self: QBluetoothSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QBluetoothSocket_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClose` instead
    ///
    pub const QBaseClose = SuperClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperClose(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_SuperClose(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#isSequential)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn IsSequential(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_IsSequential(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#isSequential)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsSequential(self: QBluetoothSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsSequential` instead
    ///
    pub const QBaseIsSequential = SuperIsSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#isSequential)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperIsSequential(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn BytesAvailable(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesAvailable(self: QBluetoothSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBytesAvailable` instead
    ///
    pub const QBaseBytesAvailable = SuperBytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperBytesAvailable(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn BytesToWrite(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesToWrite)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnBytesToWrite(self: QBluetoothSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBytesToWrite` instead
    ///
    pub const QBaseBytesToWrite = SuperBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperBytesToWrite(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#canReadLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn CanReadLine(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#canReadLine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanReadLine(self: QBluetoothSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanReadLine` instead
    ///
    pub const QBaseCanReadLine = SuperCanReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#canReadLine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperCanReadLine(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` service: QBluetoothServiceInfo `
    ///
    pub fn ConnectToService(self: QBluetoothSocket, service: anytype) void {
        comptime _ = @TypeOf(service)._is_QBluetoothServiceInfo;
        qtc.QBluetoothSocket_ConnectToService(@ptrCast(self.ptr), @ptrCast(service.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    pub fn ConnectToService2(self: QBluetoothSocket, address: anytype, uuid: anytype) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QBluetoothSocket_ConnectToService2(@ptrCast(self.ptr), @ptrCast(address.ptr), @ptrCast(uuid.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn ConnectToService3(self: QBluetoothSocket, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothSocket_ConnectToService3(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ` uuid: qbluetoothuuid_enums.ServiceClassUuid `
    ///
    pub fn ConnectToService4(self: QBluetoothSocket, address: anytype, uuid: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothSocket_ConnectToService4(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(uuid));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#disconnectFromService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn DisconnectFromService(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_DisconnectFromService(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalName(self: QBluetoothSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothSocket_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothsocket.LocalName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn LocalAddress(self: QBluetoothSocket) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothSocket_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn LocalPort(self: QBluetoothSocket) u16 {
        return qtc.QBluetoothSocket_LocalPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PeerName(self: QBluetoothSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothSocket_PeerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothsocket.PeerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn PeerAddress(self: QBluetoothSocket) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothSocket_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn PeerPort(self: QBluetoothSocket) u16 {
        return qtc.QBluetoothSocket_PeerPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` socketDescriptor: i32 `
    ///
    /// ` socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    pub fn SetSocketDescriptor(self: QBluetoothSocket, socketDescriptor: i32, socketType: i32) bool {
        return qtc.QBluetoothSocket_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(socketType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn SocketDescriptor(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#socketType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothserviceinfo_enums.Protocol `
    ///
    pub fn SocketType(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_SocketType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothsocket_enums.SocketState `
    ///
    pub fn State(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ## Returns:
    ///
    /// ` qbluetoothsocket_enums.SocketError `
    ///
    pub fn Error(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QBluetoothSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothSocket_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothsocket.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setPreferredSecurityFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` flags: flag of qbluetooth_enums.Security `
    ///
    pub fn SetPreferredSecurityFlags(self: QBluetoothSocket, flags: i32) void {
        qtc.QBluetoothSocket_SetPreferredSecurityFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#preferredSecurityFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qbluetooth_enums.Security `
    ///
    pub fn PreferredSecurityFlags(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_PreferredSecurityFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Connected(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_Connected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn OnConnected(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
        qtc.QBluetoothSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Disconnected(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn OnDisconnected(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
        qtc.QBluetoothSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` errorVal: qbluetoothsocket_enums.SocketError `
    ///
    pub fn ErrorOccurred(self: QBluetoothSocket, errorVal: i32) void {
        qtc.QBluetoothSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, errorVal: qbluetoothsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnErrorOccurred(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` state: qbluetoothsocket_enums.SocketState `
    ///
    pub fn StateChanged(self: QBluetoothSocket, state: i32) void {
        qtc.QBluetoothSocket_StateChanged(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, state: qbluetoothsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn ReadData(self: QBluetoothSocket, data: [:0]u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, data: qtc.libqt_string, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnReadData(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReadData` instead
    ///
    pub const QBaseReadData = SuperReadData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#readData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperReadData(self: QBluetoothSocket, data: [:0]u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn WriteData(self: QBluetoothSocket, data: [:0]const u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, data: [*:0]const u8, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnWriteData(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWriteData` instead
    ///
    pub const QBaseWriteData = SuperWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#writeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperWriteData(self: QBluetoothSocket, data: [:0]const u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` state: qbluetoothsocket_enums.SocketState `
    ///
    pub fn SetSocketState(self: QBluetoothSocket, state: i32) void {
        qtc.QBluetoothSocket_SetSocketState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, state: qbluetoothsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn OnSetSocketState(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnSetSocketState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSocketState` instead
    ///
    pub const QBaseSetSocketState = SuperSetSocketState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` state: qbluetoothsocket_enums.SocketState `
    ///
    pub fn SuperSetSocketState(self: QBluetoothSocket, state: i32) void {
        qtc.QBluetoothSocket_SuperSetSocketState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` errorVal: qbluetoothsocket_enums.SocketError `
    ///
    pub fn SetSocketError(self: QBluetoothSocket, errorVal: i32) void {
        qtc.QBluetoothSocket_SetSocketError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketError)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, errorVal: qbluetoothsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnSetSocketError(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnSetSocketError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSocketError` instead
    ///
    pub const QBaseSetSocketError = SuperSetSocketError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketError)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` errorVal: qbluetoothsocket_enums.SocketError `
    ///
    pub fn SuperSetSocketError(self: QBluetoothSocket, errorVal: i32) void {
        qtc.QBluetoothSocket_SuperSetSocketError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#doDeviceDiscovery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` service: QBluetoothServiceInfo `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn DoDeviceDiscovery(self: QBluetoothSocket, service: anytype, openMode: i32) void {
        comptime _ = @TypeOf(service)._is_QBluetoothServiceInfo;
        qtc.QBluetoothSocket_DoDeviceDiscovery(@ptrCast(self.ptr), @ptrCast(service.ptr), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#doDeviceDiscovery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, service: QBluetoothServiceInfo, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnDoDeviceDiscovery(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QBluetoothServiceInfo, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnDoDeviceDiscovery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoDeviceDiscovery` instead
    ///
    pub const QBaseDoDeviceDiscovery = SuperDoDeviceDiscovery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#doDeviceDiscovery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` service: QBluetoothServiceInfo `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperDoDeviceDiscovery(self: QBluetoothSocket, service: anytype, openMode: i32) void {
        comptime _ = @TypeOf(service)._is_QBluetoothServiceInfo;
        qtc.QBluetoothSocket_SuperDoDeviceDiscovery(@ptrCast(self.ptr), @ptrCast(service.ptr), @bitCast(openMode));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothsocket.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothsocket.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` service: QBluetoothServiceInfo `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToService22(self: QBluetoothSocket, service: anytype, openMode: i32) void {
        comptime _ = @TypeOf(service)._is_QBluetoothServiceInfo;
        qtc.QBluetoothSocket_ConnectToService22(@ptrCast(self.ptr), @ptrCast(service.ptr), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ` uuid: QBluetoothUuid `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToService32(self: QBluetoothSocket, address: anytype, uuid: anytype, openMode: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QBluetoothSocket_ConnectToService32(@ptrCast(self.ptr), @ptrCast(address.ptr), @ptrCast(uuid.ptr), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ` port: u16 `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToService33(self: QBluetoothSocket, address: anytype, port: u16, openMode: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothSocket_ConnectToService33(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(openMode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` address: QBluetoothAddress `
    ///
    /// ` uuid: qbluetoothuuid_enums.ServiceClassUuid `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn ConnectToService34(self: QBluetoothSocket, address: anytype, uuid: i32, mode: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothSocket_ConnectToService34(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(uuid), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` socketDescriptor: i32 `
    ///
    /// ` socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    /// ` socketState: qbluetoothsocket_enums.SocketState `
    ///
    pub fn SetSocketDescriptor3(self: QBluetoothSocket, socketDescriptor: i32, socketType: i32, socketState: i32) bool {
        return qtc.QBluetoothSocket_SetSocketDescriptor3(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(socketType), @bitCast(socketState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` socketDescriptor: i32 `
    ///
    /// ` socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    /// ` socketState: qbluetoothsocket_enums.SocketState `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetSocketDescriptor4(self: QBluetoothSocket, socketDescriptor: i32, socketType: i32, socketState: i32, openMode: i32) bool {
        return qtc.QBluetoothSocket_SetSocketDescriptor4(@ptrCast(self.ptr), @bitCast(socketDescriptor), @bitCast(socketType), @bitCast(socketState), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#openMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn OpenMode(self: QBluetoothSocket) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTextModeEnabled(self: QBluetoothSocket, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn IsTextModeEnabled(self: QBluetoothSocket) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn IsOpen(self: QBluetoothSocket) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn IsReadable(self: QBluetoothSocket) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn IsWritable(self: QBluetoothSocket) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn ReadChannelCount(self: QBluetoothSocket) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn WriteChannelCount(self: QBluetoothSocket) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn CurrentReadChannel(self: QBluetoothSocket) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentReadChannel(self: QBluetoothSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn CurrentWriteChannel(self: QBluetoothSocket) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn SetCurrentWriteChannel(self: QBluetoothSocket, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Read(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Read2(self: QBluetoothSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothsocket.Read2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadAll(self: QBluetoothSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothsocket.ReadAll: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_ReadLine(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ReadLine2(self: QBluetoothSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothsocket.ReadLine2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn StartTransaction(self: QBluetoothSocket) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn CommitTransaction(self: QBluetoothSocket) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn RollbackTransaction(self: QBluetoothSocket) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn IsTransactionStarted(self: QBluetoothSocket) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` lenVal: i64 `
    ///
    pub fn Write(self: QBluetoothSocket, data: [:0]const u8, lenVal: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write(@ptrCast(self.ptr), data_Cstring, @bitCast(lenVal));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn Write2(self: QBluetoothSocket, data: [:0]const u8) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Write2(@ptrCast(self.ptr), data_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn Write3(self: QBluetoothSocket, data: []u8) i64 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QIODevice_Peek(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#peek)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn Peek2(self: QBluetoothSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothsocket.Peek2: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn Skip(self: QBluetoothSocket, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn UngetChar(self: QBluetoothSocket, c: u8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#putChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn PutChar(self: QBluetoothSocket, c: u8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self.ptr), @bitCast(c));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#getChar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn GetChar(self: QBluetoothSocket, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn ReadyRead(self: QBluetoothSocket) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn OnReadyRead(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn ChannelReadyRead(self: QBluetoothSocket, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(channel));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, channel: i32) callconv(.c) void `
    ///
    pub fn OnChannelReadyRead(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn BytesWritten(self: QBluetoothSocket, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self.ptr), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn OnBytesWritten(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn ChannelBytesWritten(self: QBluetoothSocket, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(channel), @bitCast(bytes));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn OnChannelBytesWritten(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn AboutToClose(self: QBluetoothSocket) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn OnAboutToClose(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn ReadChannelFinished(self: QBluetoothSocket) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn OnReadChannelFinished(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLine1(self: QBluetoothSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qbluetoothsocket.ReadLine1: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QBluetoothSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothsocket.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QBluetoothSocket, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn IsWidgetType(self: QBluetoothSocket) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn IsWindowType(self: QBluetoothSocket) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn IsQuickItemType(self: QBluetoothSocket) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn SignalsBlocked(self: QBluetoothSocket) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QBluetoothSocket, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Thread(self: QBluetoothSocket) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QBluetoothSocket, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QBluetoothSocket, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QBluetoothSocket, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QBluetoothSocket, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QBluetoothSocket, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QBluetoothSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qbluetoothsocket.Children: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QBluetoothSocket, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QBluetoothSocket, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QBluetoothSocket, obj: anytype) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QBluetoothSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn Disconnect3(self: QBluetoothSocket) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QBluetoothSocket, receiver: anytype) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn DumpObjectTree(self: QBluetoothSocket) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn DumpObjectInfo(self: QBluetoothSocket) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QBluetoothSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QBluetoothSocket, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QBluetoothSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qbluetoothsocket.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qbluetoothsocket.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn BindingStorage(self: QBluetoothSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn BindingStorage2(self: QBluetoothSocket) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Destroyed(self: QBluetoothSocket) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Parent(self: QBluetoothSocket) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QBluetoothSocket, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn DeleteLater(self: QBluetoothSocket) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QBluetoothSocket, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QBluetoothSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QBluetoothSocket, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QBluetoothSocket, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QBluetoothSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QBluetoothSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QBluetoothSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QBluetoothSocket, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QObject) callconv(.c) void) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn Open(self: QBluetoothSocket, mode: i32) bool {
        return qtc.QBluetoothSocket_Open(@ptrCast(self.ptr), @bitCast(mode));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperOpen(self: QBluetoothSocket, mode: i32) bool {
        return qtc.QBluetoothSocket_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn OnOpen(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Pos(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_Pos(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperPos(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_SuperPos(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#pos)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnPos(self: QBluetoothSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Size(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_Size(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperSize(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_SuperSize(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#size)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn OnSize(self: QBluetoothSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn Seek(self: QBluetoothSocket, pos: i64) bool {
        return qtc.QBluetoothSocket_Seek(@ptrCast(self.ptr), @bitCast(pos));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` pos: i64 `
    ///
    pub fn SuperSeek(self: QBluetoothSocket, pos: i64) bool {
        return qtc.QBluetoothSocket_SuperSeek(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#seek)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, pos: i64) callconv(.c) bool `
    ///
    pub fn OnSeek(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i64) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn AtEnd(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_AtEnd(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperAtEnd(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnAtEnd(self: QBluetoothSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Reset(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_Reset(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperReset(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnReset(self: QBluetoothSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForReadyRead(self: QBluetoothSocket, msecs: i32) bool {
        return qtc.QBluetoothSocket_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForReadyRead` instead
    ///
    pub const QBaseWaitForReadyRead = SuperWaitForReadyRead;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForReadyRead(self: QBluetoothSocket, msecs: i32) bool {
        return qtc.QBluetoothSocket_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForReadyRead)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForReadyRead(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn WaitForBytesWritten(self: QBluetoothSocket, msecs: i32) bool {
        return qtc.QBluetoothSocket_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `SuperWaitForBytesWritten` instead
    ///
    pub const QBaseWaitForBytesWritten = SuperWaitForBytesWritten;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SuperWaitForBytesWritten(self: QBluetoothSocket, msecs: i32) bool {
        return qtc.QBluetoothSocket_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#waitForBytesWritten)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn OnWaitForBytesWritten(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn ReadLineData(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `SuperReadLineData` instead
    ///
    pub const QBaseReadLineData = SuperReadLineData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn SuperReadLineData(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#readLineData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, data: qtc.libqt_string, maxlen: i64) callconv(.c) i64 `
    ///
    pub fn OnReadLineData(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SkipData(self: QBluetoothSocket, maxSize: i64) i64 {
        return qtc.QBluetoothSocket_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `SuperSkipData` instead
    ///
    pub const QBaseSkipData = SuperSkipData;

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn SuperSkipData(self: QBluetoothSocket, maxSize: i64) i64 {
        return qtc.QBluetoothSocket_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#skipData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn OnSkipData(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i64) callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QBluetoothSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothSocket_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QBluetoothSocket, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QBluetoothSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QBluetoothSocket, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QBluetoothSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QBluetoothSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBluetoothSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QBluetoothSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QBluetoothSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QBluetoothSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBluetoothSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QBluetoothSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QBluetoothSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QChildEvent) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QBluetoothSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBluetoothSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QBluetoothSocket, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QBluetoothSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QEvent) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QBluetoothSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QBluetoothSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QBluetoothSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QBluetoothSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SetOpenMode(self: QBluetoothSocket, openMode: i32) void {
        qtc.QBluetoothSocket_SetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn SuperSetOpenMode(self: QBluetoothSocket, openMode: i32) void {
        qtc.QBluetoothSocket_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(openMode));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn OnSetOpenMode(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SetErrorString(self: QBluetoothSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QBluetoothSocket_SetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` errorString: []const u8 `
    ///
    pub fn SuperSetErrorString(self: QBluetoothSocket, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = errorString.len,
            .data = errorString.ptr,
        };
        qtc.QBluetoothSocket_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
    }

    /// Inherited from QIODevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetErrorString(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Sender(self: QBluetoothSocket) QObject {
        return .{ .ptr = qtc.QBluetoothSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperSender(self: QBluetoothSocket) QObject {
        return .{ .ptr = qtc.QBluetoothSocket_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QBluetoothSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBluetoothSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn SenderSignalIndex(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn SuperSenderSignalIndex(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QBluetoothSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QBluetoothSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QBluetoothSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QBluetoothSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBluetoothSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QBluetoothSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QBluetoothSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#dtor.QBluetoothSocket)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn Delete(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#public-types)
pub const enums = struct {
    pub const SocketState = enum(i32) {
        pub const UnconnectedState: i32 = 0;
        pub const ServiceLookupState: i32 = 1;
        pub const ConnectingState: i32 = 2;
        pub const ConnectedState: i32 = 3;
        pub const BoundState: i32 = 4;
        pub const ClosingState: i32 = 5;
        pub const ListeningState: i32 = 6;
    };

    pub const SocketError = enum(i32) {
        pub const NoSocketError: i32 = 0;
        pub const UnknownSocketError: i32 = 1;
        pub const RemoteHostClosedError: i32 = 2;
        pub const HostNotFoundError: i32 = 3;
        pub const ServiceNotFoundError: i32 = 4;
        pub const NetworkError: i32 = 5;
        pub const UnsupportedProtocolError: i32 = 6;
        pub const OperationError: i32 = 7;
        pub const MissingPermissionsError: i32 = 8;
    };
};
