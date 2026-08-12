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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothSocket object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    pub fn new(_socketType: i32) QBluetoothSocket {
        return .{ .ptr = qtc.QBluetoothSocket_new(@bitCast(_socketType)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothSocket object in C++ memory
    ///
    pub fn new2() QBluetoothSocket {
        return .{ .ptr = qtc.QBluetoothSocket_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBluetoothSocket object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_socketType: i32, _parent: anytype) QBluetoothSocket {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothSocket_new3(@bitCast(_socketType), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QBluetoothSocket object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_parent: anytype) QBluetoothSocket {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QBluetoothSocket_new4(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn metaObject(self: QBluetoothSocket) QMetaObject {
        return .{ .ptr = qtc.QBluetoothSocket_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QBluetoothSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QBluetoothSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn superMetaObject(self: QBluetoothSocket) QMetaObject {
        return .{ .ptr = qtc.QBluetoothSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QBluetoothSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QBluetoothSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QBluetoothSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QBluetoothSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QBluetoothSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QBluetoothSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QBluetoothSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QBluetoothSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothSocket.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn abort(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn close(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

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
    pub fn onClose(self: QBluetoothSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QBluetoothSocket_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn superClose(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSequential` instead
    ///
    pub const IsSequential = isSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#isSequential)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn isSequential(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSequential` instead
    ///
    pub const OnIsSequential = onIsSequential;

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
    pub fn onIsSequential(self: QBluetoothSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsSequential` instead
    ///
    pub const SuperIsSequential = superIsSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#isSequential)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn superIsSequential(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesAvailable` instead
    ///
    pub const BytesAvailable = bytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn bytesAvailable(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesAvailable` instead
    ///
    pub const OnBytesAvailable = onBytesAvailable;

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
    pub fn onBytesAvailable(self: QBluetoothSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBytesAvailable` instead
    ///
    pub const SuperBytesAvailable = superBytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn superBytesAvailable(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesToWrite` instead
    ///
    pub const BytesToWrite = bytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn bytesToWrite(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesToWrite` instead
    ///
    pub const OnBytesToWrite = onBytesToWrite;

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
    pub fn onBytesToWrite(self: QBluetoothSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBytesToWrite` instead
    ///
    pub const SuperBytesToWrite = superBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn superBytesToWrite(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canReadLine` instead
    ///
    pub const CanReadLine = canReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#canReadLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn canReadLine(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanReadLine` instead
    ///
    pub const OnCanReadLine = onCanReadLine;

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
    pub fn onCanReadLine(self: QBluetoothSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanReadLine` instead
    ///
    pub const SuperCanReadLine = superCanReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#canReadLine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn superCanReadLine(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connectToService` instead
    ///
    pub const ConnectToService = connectToService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` service: QBluetoothServiceInfo `
    ///
    pub fn connectToService(self: QBluetoothSocket, service: anytype) void {
        comptime _ = @TypeOf(service)._is_QBluetoothServiceInfo;
        qtc.QBluetoothSocket_ConnectToService(@ptrCast(self.ptr), @ptrCast(service.ptr));
    }

    /// ### DEPRECATED: Use `connectToService2` instead
    ///
    pub const ConnectToService2 = connectToService2;

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
    pub fn connectToService2(self: QBluetoothSocket, address: anytype, uuid: anytype) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QBluetoothSocket_ConnectToService2(@ptrCast(self.ptr), @ptrCast(address.ptr), @ptrCast(uuid.ptr));
    }

    /// ### DEPRECATED: Use `connectToService3` instead
    ///
    pub const ConnectToService3 = connectToService3;

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
    pub fn connectToService3(self: QBluetoothSocket, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothSocket_ConnectToService3(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `connectToService4` instead
    ///
    pub const ConnectToService4 = connectToService4;

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
    pub fn connectToService4(self: QBluetoothSocket, address: anytype, uuid: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothSocket_ConnectToService4(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(uuid));
    }

    /// ### DEPRECATED: Use `disconnectFromService` instead
    ///
    pub const DisconnectFromService = disconnectFromService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#disconnectFromService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn disconnectFromService(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_DisconnectFromService(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `localName` instead
    ///
    pub const LocalName = localName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#localName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localName(self: QBluetoothSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothSocket_LocalName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothSocket.localName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `localAddress` instead
    ///
    pub const LocalAddress = localAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#localAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn localAddress(self: QBluetoothSocket) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothSocket_LocalAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `localPort` instead
    ///
    pub const LocalPort = localPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#localPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn localPort(self: QBluetoothSocket) u16 {
        return qtc.QBluetoothSocket_LocalPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `peerName` instead
    ///
    pub const PeerName = peerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#peerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn peerName(self: QBluetoothSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothSocket_PeerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothSocket.peerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `peerAddress` instead
    ///
    pub const PeerAddress = peerAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#peerAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn peerAddress(self: QBluetoothSocket) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothSocket_PeerAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `peerPort` instead
    ///
    pub const PeerPort = peerPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#peerPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn peerPort(self: QBluetoothSocket) u16 {
        return qtc.QBluetoothSocket_PeerPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSocketDescriptor` instead
    ///
    pub const SetSocketDescriptor = setSocketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` _socketDescriptor: i32 `
    ///
    /// ` _socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    pub fn setSocketDescriptor(self: QBluetoothSocket, _socketDescriptor: i32, _socketType: i32) bool {
        return qtc.QBluetoothSocket_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(_socketDescriptor), @bitCast(_socketType));
    }

    /// ### DEPRECATED: Use `socketDescriptor` instead
    ///
    pub const SocketDescriptor = socketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn socketDescriptor(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `socketType` instead
    ///
    pub const SocketType = socketType;

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
    pub fn socketType(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_SocketType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QBluetoothSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothSocket_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothSocket.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPreferredSecurityFlags` instead
    ///
    pub const SetPreferredSecurityFlags = setPreferredSecurityFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setPreferredSecurityFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` flags: flag of qbluetooth_enums.Security `
    ///
    pub fn setPreferredSecurityFlags(self: QBluetoothSocket, flags: i32) void {
        qtc.QBluetoothSocket_SetPreferredSecurityFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `preferredSecurityFlags` instead
    ///
    pub const PreferredSecurityFlags = preferredSecurityFlags;

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
    pub fn preferredSecurityFlags(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_PreferredSecurityFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connected` instead
    ///
    pub const Connected = connected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn connected(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_Connected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConnected` instead
    ///
    pub const OnConnected = onConnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn onConnected(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
        qtc.QBluetoothSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnected` instead
    ///
    pub const Disconnected = disconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn disconnected(self: QBluetoothSocket) void {
        qtc.QBluetoothSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnected` instead
    ///
    pub const OnDisconnected = onDisconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn onDisconnected(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
        qtc.QBluetoothSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` errorVal: qbluetoothsocket_enums.SocketError `
    ///
    pub fn errorOccurred(self: QBluetoothSocket, errorVal: i32) void {
        qtc.QBluetoothSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, errorVal: qbluetoothsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` _state: qbluetoothsocket_enums.SocketState `
    ///
    pub fn stateChanged(self: QBluetoothSocket, _state: i32) void {
        qtc.QBluetoothSocket_StateChanged(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, state: qbluetoothsocket_enums.SocketState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readData` instead
    ///
    pub const ReadData = readData;

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
    pub fn readData(self: QBluetoothSocket, data: [:0]u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_ReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `onReadData` instead
    ///
    pub const OnReadData = onReadData;

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
    pub fn onReadData(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadData` instead
    ///
    pub const SuperReadData = superReadData;

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
    pub fn superReadData(self: QBluetoothSocket, data: [:0]u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_SuperReadData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `writeData` instead
    ///
    pub const WriteData = writeData;

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
    pub fn writeData(self: QBluetoothSocket, data: [:0]const u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_WriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `onWriteData` instead
    ///
    pub const OnWriteData = onWriteData;

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
    pub fn onWriteData(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteData` instead
    ///
    pub const SuperWriteData = superWriteData;

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
    pub fn superWriteData(self: QBluetoothSocket, data: [:0]const u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_SuperWriteData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `setSocketState` instead
    ///
    pub const SetSocketState = setSocketState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` _state: qbluetoothsocket_enums.SocketState `
    ///
    pub fn setSocketState(self: QBluetoothSocket, _state: i32) void {
        qtc.QBluetoothSocket_SetSocketState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onSetSocketState` instead
    ///
    pub const OnSetSocketState = onSetSocketState;

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
    pub fn onSetSocketState(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnSetSocketState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSocketState` instead
    ///
    pub const SuperSetSocketState = superSetSocketState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` _state: qbluetoothsocket_enums.SocketState `
    ///
    pub fn superSetSocketState(self: QBluetoothSocket, _state: i32) void {
        qtc.QBluetoothSocket_SuperSetSocketState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `setSocketError` instead
    ///
    pub const SetSocketError = setSocketError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` errorVal: qbluetoothsocket_enums.SocketError `
    ///
    pub fn setSocketError(self: QBluetoothSocket, errorVal: i32) void {
        qtc.QBluetoothSocket_SetSocketError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `onSetSocketError` instead
    ///
    pub const OnSetSocketError = onSetSocketError;

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
    pub fn onSetSocketError(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnSetSocketError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSocketError` instead
    ///
    pub const SuperSetSocketError = superSetSocketError;

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
    pub fn superSetSocketError(self: QBluetoothSocket, errorVal: i32) void {
        qtc.QBluetoothSocket_SuperSetSocketError(@ptrCast(self.ptr), @bitCast(errorVal));
    }

    /// ### DEPRECATED: Use `doDeviceDiscovery` instead
    ///
    pub const DoDeviceDiscovery = doDeviceDiscovery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#doDeviceDiscovery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` service: QBluetoothServiceInfo `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn doDeviceDiscovery(self: QBluetoothSocket, service: anytype, _openMode: i32) void {
        comptime _ = @TypeOf(service)._is_QBluetoothServiceInfo;
        qtc.QBluetoothSocket_DoDeviceDiscovery(@ptrCast(self.ptr), @ptrCast(service.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `onDoDeviceDiscovery` instead
    ///
    pub const OnDoDeviceDiscovery = onDoDeviceDiscovery;

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
    pub fn onDoDeviceDiscovery(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QBluetoothServiceInfo, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnDoDeviceDiscovery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoDeviceDiscovery` instead
    ///
    pub const SuperDoDeviceDiscovery = superDoDeviceDiscovery;

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
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superDoDeviceDiscovery(self: QBluetoothSocket, service: anytype, _openMode: i32) void {
        comptime _ = @TypeOf(service)._is_QBluetoothServiceInfo;
        qtc.QBluetoothSocket_SuperDoDeviceDiscovery(@ptrCast(self.ptr), @ptrCast(service.ptr), @bitCast(_openMode));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothSocket.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothSocket.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connectToService22` instead
    ///
    pub const ConnectToService22 = connectToService22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#connectToService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` service: QBluetoothServiceInfo `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn connectToService22(self: QBluetoothSocket, service: anytype, _openMode: i32) void {
        comptime _ = @TypeOf(service)._is_QBluetoothServiceInfo;
        qtc.QBluetoothSocket_ConnectToService22(@ptrCast(self.ptr), @ptrCast(service.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `connectToService32` instead
    ///
    pub const ConnectToService32 = connectToService32;

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
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn connectToService32(self: QBluetoothSocket, address: anytype, uuid: anytype, _openMode: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        comptime _ = @TypeOf(uuid)._is_QBluetoothUuid;
        qtc.QBluetoothSocket_ConnectToService32(@ptrCast(self.ptr), @ptrCast(address.ptr), @ptrCast(uuid.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `connectToService33` instead
    ///
    pub const ConnectToService33 = connectToService33;

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
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn connectToService33(self: QBluetoothSocket, address: anytype, port: u16, _openMode: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothSocket_ConnectToService33(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `connectToService34` instead
    ///
    pub const ConnectToService34 = connectToService34;

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
    pub fn connectToService34(self: QBluetoothSocket, address: anytype, uuid: i32, mode: i32) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothSocket_ConnectToService34(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(uuid), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setSocketDescriptor3` instead
    ///
    pub const SetSocketDescriptor3 = setSocketDescriptor3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` _socketDescriptor: i32 `
    ///
    /// ` _socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    /// ` socketState: qbluetoothsocket_enums.SocketState `
    ///
    pub fn setSocketDescriptor3(self: QBluetoothSocket, _socketDescriptor: i32, _socketType: i32, socketState: i32) bool {
        return qtc.QBluetoothSocket_SetSocketDescriptor3(@ptrCast(self.ptr), @bitCast(_socketDescriptor), @bitCast(_socketType), @bitCast(socketState));
    }

    /// ### DEPRECATED: Use `setSocketDescriptor4` instead
    ///
    pub const SetSocketDescriptor4 = setSocketDescriptor4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothSocket `
    ///
    /// ` _socketDescriptor: i32 `
    ///
    /// ` _socketType: qbluetoothserviceinfo_enums.Protocol `
    ///
    /// ` socketState: qbluetoothsocket_enums.SocketState `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setSocketDescriptor4(self: QBluetoothSocket, _socketDescriptor: i32, _socketType: i32, socketState: i32, _openMode: i32) bool {
        return qtc.QBluetoothSocket_SetSocketDescriptor4(@ptrCast(self.ptr), @bitCast(_socketDescriptor), @bitCast(_socketType), @bitCast(socketState), @bitCast(_openMode));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn openMode(self: QBluetoothSocket) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` enabled: bool `
    ///
    pub fn setTextModeEnabled(self: QBluetoothSocket, enabled: bool) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn isTextModeEnabled(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn isOpen(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn isReadable(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn isWritable(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn readChannelCount(self: QBluetoothSocket) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn writeChannelCount(self: QBluetoothSocket) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn currentReadChannel(self: QBluetoothSocket) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentReadChannel(self: QBluetoothSocket, channel: i32) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn currentWriteChannel(self: QBluetoothSocket) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentWriteChannel(self: QBluetoothSocket, channel: i32) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read2(self: QBluetoothSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothSocket.read2: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAll(self: QBluetoothSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothSocket.readAll: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readLine2(self: QBluetoothSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothSocket.readLine2: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn startTransaction(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn commitTransaction(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn rollbackTransaction(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn isTransactionStarted(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn write(self: QBluetoothSocket, data: [:0]const u8, len: i64) i64 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn write2(self: QBluetoothSocket, data: [:0]const u8) i64 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn write3(self: QBluetoothSocket, data: []u8) i64 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek2(self: QBluetoothSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothSocket.peek2: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skip(self: QBluetoothSocket, maxSize: i64) i64 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn ungetChar(self: QBluetoothSocket, c: u8) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn putChar(self: QBluetoothSocket, c: u8) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn getChar(self: QBluetoothSocket, c: [:0]u8) bool {
        const c_Cstring = c.ptr;
        return qtc.QIODevice_GetChar(@ptrCast(self.ptr), c_Cstring);
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn readyRead(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn onReadyRead(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn channelReadyRead(self: QBluetoothSocket, channel: i32) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, channel: i32) callconv(.c) void `
    ///
    pub fn onChannelReadyRead(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn bytesWritten(self: QBluetoothSocket, bytes: i64) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn onBytesWritten(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i64) callconv(.c) void) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn channelBytesWritten(self: QBluetoothSocket, channel: i32, bytes: i64) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn onChannelBytesWritten(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32, i64) callconv(.c) void) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn aboutToClose(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn onAboutToClose(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn readChannelFinished(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn onReadChannelFinished(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine1(self: QBluetoothSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QBluetoothSocket.readLine1: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QBluetoothSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothSocket.objectName: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QBluetoothSocket, name: []const u8) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn isWidgetType(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn isWindowType(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn isQuickItemType(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn signalsBlocked(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QBluetoothSocket, b: bool) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn thread(self: QBluetoothSocket) QThread {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QBluetoothSocket, _thread: anytype) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QBluetoothSocket, interval: i32) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QBluetoothSocket, time: i64) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QBluetoothSocket, id: i32) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QBluetoothSocket, id: i32) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QBluetoothSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QBluetoothSocket.children: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QBluetoothSocket, _parent: anytype) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QBluetoothSocket, filterObj: anytype) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QBluetoothSocket, obj: anytype) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QBluetoothSocket, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn disconnect3(self: QBluetoothSocket) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QBluetoothSocket, receiver: anytype) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn dumpObjectTree(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn dumpObjectInfo(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QBluetoothSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QBluetoothSocket, name: [:0]const u8) QVariant {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QBluetoothSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QBluetoothSocket.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QBluetoothSocket.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn bindingStorage(self: QBluetoothSocket) QBindingStorage {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn bindingStorage2(self: QBluetoothSocket) QBindingStorage {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn destroyed(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket) callconv(.c) void) void {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn parent(self: QBluetoothSocket) QObject {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QBluetoothSocket, classname: [:0]const u8) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn deleteLater(self: QBluetoothSocket) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QBluetoothSocket, interval: i32, timerType: i32) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QBluetoothSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QBluetoothSocket, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QBluetoothSocket, signal: [:0]const u8) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QBluetoothSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QBluetoothSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QBluetoothSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QBluetoothSocket, param1: anytype) void {
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: QBluetoothSocket, mode: i32) bool {
        return qtc.QBluetoothSocket_Open(@ptrCast(self.ptr), @bitCast(mode));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` mode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpen(self: QBluetoothSocket, mode: i32) bool {
        return qtc.QBluetoothSocket_SuperOpen(@ptrCast(self.ptr), @bitCast(mode));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, mode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onOpen(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn pos(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_Pos(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn superPos(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_SuperPos(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onPos(self: QBluetoothSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn size(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_Size(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn superSize(self: QBluetoothSocket) i64 {
        return qtc.QBluetoothSocket_SuperSize(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onSize(self: QBluetoothSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _pos: i64 `
    ///
    pub fn seek(self: QBluetoothSocket, _pos: i64) bool {
        return qtc.QBluetoothSocket_Seek(@ptrCast(self.ptr), @bitCast(_pos));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _pos: i64 `
    ///
    pub fn superSeek(self: QBluetoothSocket, _pos: i64) bool {
        return qtc.QBluetoothSocket_SuperSeek(@ptrCast(self.ptr), @bitCast(_pos));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, pos: i64) callconv(.c) bool `
    ///
    pub fn onSeek(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i64) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `atEnd` instead
    ///
    pub const AtEnd = atEnd;

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
    pub fn atEnd(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_AtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAtEnd` instead
    ///
    pub const SuperAtEnd = superAtEnd;

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
    pub fn superAtEnd(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_SuperAtEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAtEnd` instead
    ///
    pub const OnAtEnd = onAtEnd;

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
    pub fn onAtEnd(self: QBluetoothSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn reset(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_Reset(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn superReset(self: QBluetoothSocket) bool {
        return qtc.QBluetoothSocket_SuperReset(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onReset(self: QBluetoothSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `waitForReadyRead` instead
    ///
    pub const WaitForReadyRead = waitForReadyRead;

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
    pub fn waitForReadyRead(self: QBluetoothSocket, msecs: i32) bool {
        return qtc.QBluetoothSocket_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `superWaitForReadyRead` instead
    ///
    pub const SuperWaitForReadyRead = superWaitForReadyRead;

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
    pub fn superWaitForReadyRead(self: QBluetoothSocket, msecs: i32) bool {
        return qtc.QBluetoothSocket_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForReadyRead` instead
    ///
    pub const OnWaitForReadyRead = onWaitForReadyRead;

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
    pub fn onWaitForReadyRead(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `waitForBytesWritten` instead
    ///
    pub const WaitForBytesWritten = waitForBytesWritten;

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
    pub fn waitForBytesWritten(self: QBluetoothSocket, msecs: i32) bool {
        return qtc.QBluetoothSocket_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `superWaitForBytesWritten` instead
    ///
    pub const SuperWaitForBytesWritten = superWaitForBytesWritten;

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
    pub fn superWaitForBytesWritten(self: QBluetoothSocket, msecs: i32) bool {
        return qtc.QBluetoothSocket_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForBytesWritten` instead
    ///
    pub const OnWaitForBytesWritten = onWaitForBytesWritten;

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
    pub fn onWaitForBytesWritten(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readLineData` instead
    ///
    pub const ReadLineData = readLineData;

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
    pub fn readLineData(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `superReadLineData` instead
    ///
    pub const SuperReadLineData = superReadLineData;

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
    pub fn superReadLineData(self: QBluetoothSocket, data: [:0]u8, maxlen: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QBluetoothSocket_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxlen));
    }

    /// ### DEPRECATED: Use `onReadLineData` instead
    ///
    pub const OnReadLineData = onReadLineData;

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
    pub fn onReadLineData(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `skipData` instead
    ///
    pub const SkipData = skipData;

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
    pub fn skipData(self: QBluetoothSocket, maxSize: i64) i64 {
        return qtc.QBluetoothSocket_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `superSkipData` instead
    ///
    pub const SuperSkipData = superSkipData;

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
    pub fn superSkipData(self: QBluetoothSocket, maxSize: i64) i64 {
        return qtc.QBluetoothSocket_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `onSkipData` instead
    ///
    pub const OnSkipData = onSkipData;

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
    pub fn onSkipData(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i64) callconv(.c) i64) void {
        qtc.QBluetoothSocket_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QBluetoothSocket, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBluetoothSocket_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QBluetoothSocket, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBluetoothSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QBluetoothSocket, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBluetoothSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QBluetoothSocket, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QBluetoothSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QBluetoothSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBluetoothSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QBluetoothSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QBluetoothSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QBluetoothSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBluetoothSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QBluetoothSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QBluetoothSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QChildEvent) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QBluetoothSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBluetoothSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QBluetoothSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QBluetoothSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QEvent) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QBluetoothSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QBluetoothSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QBluetoothSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QBluetoothSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QBluetoothSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setOpenMode(self: QBluetoothSocket, _openMode: i32) void {
        qtc.QBluetoothSocket_SetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superSetOpenMode(self: QBluetoothSocket, _openMode: i32) void {
        qtc.QBluetoothSocket_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn onSetOpenMode(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, i32) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn setErrorString(self: QBluetoothSocket, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QBluetoothSocket_SetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetErrorString(self: QBluetoothSocket, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QBluetoothSocket_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorString(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QBluetoothSocket_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn sender(self: QBluetoothSocket) QObject {
        return .{ .ptr = qtc.QBluetoothSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn superSender(self: QBluetoothSocket) QObject {
        return .{ .ptr = qtc.QBluetoothSocket_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QBluetoothSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QBluetoothSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn senderSignalIndex(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    pub fn superSenderSignalIndex(self: QBluetoothSocket) i32 {
        return qtc.QBluetoothSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QBluetoothSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QBluetoothSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QBluetoothSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QBluetoothSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QBluetoothSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QBluetoothSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QBluetoothSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QBluetoothSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QBluetoothSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QBluetoothSocket`
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QBluetoothSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QBluetoothSocket `
    ///
    /// ` callback: *const fn (self: QBluetoothSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QBluetoothSocket, callback: *const fn (QBluetoothSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothsocket.html#dtor.QBluetoothSocket)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothSocket `
    ///
    pub fn delete(self: QBluetoothSocket) void {
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
