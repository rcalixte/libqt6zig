const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qiodevicebase_enums = @import("../libqiodevicebase.zig").enums;
const qlocalsocket_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html)
pub const QLocalSocket = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLocalSocket,

    pub const _is_QLocalSocket = {};
    pub const _is_QIODevice = {};
    pub const _is_QObject = {};
    pub const _is_QIODeviceBase = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QLocalSocket object in C++ memory
    ///
    pub fn new() QLocalSocket {
        return .{ .ptr = qtc.QLocalSocket_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QLocalSocket object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QLocalSocket {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QLocalSocket_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn metaObject(self: QLocalSocket) QMetaObject {
        return .{ .ptr = qtc.QLocalSocket_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QLocalSocket, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QLocalSocket_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    pub fn superMetaObject(self: QLocalSocket) QMetaObject {
        return .{ .ptr = qtc.QLocalSocket_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QLocalSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLocalSocket_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QLocalSocket, callback: *const fn (QLocalSocket, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QLocalSocket_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QLocalSocket, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLocalSocket_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QLocalSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLocalSocket_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QLocalSocket, callback: *const fn (QLocalSocket, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QLocalSocket_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QLocalSocket, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLocalSocket_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLocalSocket.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connectToServer` instead
    ///
    pub const ConnectToServer = connectToServer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn connectToServer(self: QLocalSocket) void {
        qtc.QLocalSocket_ConnectToServer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connectToServer2` instead
    ///
    pub const ConnectToServer2 = connectToServer2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn connectToServer2(self: QLocalSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QLocalSocket_ConnectToServer2(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `disconnectFromServer` instead
    ///
    pub const DisconnectFromServer = disconnectFromServer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#disconnectFromServer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn disconnectFromServer(self: QLocalSocket) void {
        qtc.QLocalSocket_DisconnectFromServer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setServerName` instead
    ///
    pub const SetServerName = setServerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setServerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setServerName(self: QLocalSocket, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QLocalSocket_SetServerName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `serverName` instead
    ///
    pub const ServerName = serverName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#serverName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serverName(self: QLocalSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLocalSocket_ServerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLocalSocket.serverName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fullServerName` instead
    ///
    pub const FullServerName = fullServerName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#fullServerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fullServerName(self: QLocalSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLocalSocket_FullServerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLocalSocket.fullServerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `abort` instead
    ///
    pub const Abort = abort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#abort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn abort(self: QLocalSocket) void {
        qtc.QLocalSocket_Abort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSequential` instead
    ///
    pub const IsSequential = isSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn isSequential(self: QLocalSocket) bool {
        return qtc.QLocalSocket_IsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onIsSequential` instead
    ///
    pub const OnIsSequential = onIsSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onIsSequential(self: QLocalSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QLocalSocket_OnIsSequential(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIsSequential` instead
    ///
    pub const SuperIsSequential = superIsSequential;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isSequential)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn superIsSequential(self: QLocalSocket) bool {
        return qtc.QLocalSocket_SuperIsSequential(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesAvailable` instead
    ///
    pub const BytesAvailable = bytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn bytesAvailable(self: QLocalSocket) i64 {
        return qtc.QLocalSocket_BytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesAvailable` instead
    ///
    pub const OnBytesAvailable = onBytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onBytesAvailable(self: QLocalSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QLocalSocket_OnBytesAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBytesAvailable` instead
    ///
    pub const SuperBytesAvailable = superBytesAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesAvailable)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn superBytesAvailable(self: QLocalSocket) i64 {
        return qtc.QLocalSocket_SuperBytesAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytesToWrite` instead
    ///
    pub const BytesToWrite = bytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn bytesToWrite(self: QLocalSocket) i64 {
        return qtc.QLocalSocket_BytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onBytesToWrite` instead
    ///
    pub const OnBytesToWrite = onBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onBytesToWrite(self: QLocalSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QLocalSocket_OnBytesToWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBytesToWrite` instead
    ///
    pub const SuperBytesToWrite = superBytesToWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#bytesToWrite)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn superBytesToWrite(self: QLocalSocket) i64 {
        return qtc.QLocalSocket_SuperBytesToWrite(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canReadLine` instead
    ///
    pub const CanReadLine = canReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn canReadLine(self: QLocalSocket) bool {
        return qtc.QLocalSocket_CanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanReadLine` instead
    ///
    pub const OnCanReadLine = onCanReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onCanReadLine(self: QLocalSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QLocalSocket_OnCanReadLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanReadLine` instead
    ///
    pub const SuperCanReadLine = superCanReadLine;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#canReadLine)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn superCanReadLine(self: QLocalSocket) bool {
        return qtc.QLocalSocket_SuperCanReadLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#open)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn open(self: QLocalSocket, _openMode: i32) bool {
        return qtc.QLocalSocket_Open(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#open)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) bool `
    ///
    pub fn onOpen(self: QLocalSocket, callback: *const fn (QLocalSocket, i32) callconv(.c) bool) void {
        qtc.QLocalSocket_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#open)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superOpen(self: QLocalSocket, _openMode: i32) bool {
        return qtc.QLocalSocket_SuperOpen(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn close(self: QLocalSocket) void {
        qtc.QLocalSocket_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClose` instead
    ///
    pub const OnClose = onClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#close)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClose(self: QLocalSocket, callback: *const fn () callconv(.c) void) void {
        qtc.QLocalSocket_OnClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClose` instead
    ///
    pub const SuperClose = superClose;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#close)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn superClose(self: QLocalSocket) void {
        qtc.QLocalSocket_SuperClose(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ## Returns:
    ///
    /// ` qlocalsocket_enums.LocalSocketError `
    ///
    pub fn error0(self: QLocalSocket) i32 {
        return qtc.QLocalSocket_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flush` instead
    ///
    pub const Flush = flush;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#flush)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn flush(self: QLocalSocket) bool {
        return qtc.QLocalSocket_Flush(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn isValid(self: QLocalSocket) bool {
        return qtc.QLocalSocket_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `readBufferSize` instead
    ///
    pub const ReadBufferSize = readBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn readBufferSize(self: QLocalSocket) i64 {
        return qtc.QLocalSocket_ReadBufferSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadBufferSize` instead
    ///
    pub const SetReadBufferSize = setReadBufferSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setReadBufferSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` _size: i64 `
    ///
    pub fn setReadBufferSize(self: QLocalSocket, _size: i64) void {
        qtc.QLocalSocket_SetReadBufferSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `setSocketDescriptor` instead
    ///
    pub const SetSocketDescriptor = setSocketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` _socketDescriptor: isize `
    ///
    pub fn setSocketDescriptor(self: QLocalSocket, _socketDescriptor: isize) bool {
        return qtc.QLocalSocket_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(_socketDescriptor));
    }

    /// ### DEPRECATED: Use `socketDescriptor` instead
    ///
    pub const SocketDescriptor = socketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn socketDescriptor(self: QLocalSocket) isize {
        return qtc.QLocalSocket_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSocketOptions` instead
    ///
    pub const SetSocketOptions = setSocketOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` option: flag of qlocalsocket_enums.SocketOption `
    ///
    pub fn setSocketOptions(self: QLocalSocket, option: i32) void {
        qtc.QLocalSocket_SetSocketOptions(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### DEPRECATED: Use `socketOptions` instead
    ///
    pub const SocketOptions = socketOptions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#socketOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlocalsocket_enums.SocketOption `
    ///
    pub fn socketOptions(self: QLocalSocket) i32 {
        return qtc.QLocalSocket_SocketOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ## Returns:
    ///
    /// ` qlocalsocket_enums.LocalSocketState `
    ///
    pub fn state(self: QLocalSocket) i32 {
        return qtc.QLocalSocket_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForBytesWritten` instead
    ///
    pub const WaitForBytesWritten = waitForBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForBytesWritten(self: QLocalSocket, msecs: i32) bool {
        return qtc.QLocalSocket_WaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForBytesWritten` instead
    ///
    pub const OnWaitForBytesWritten = onWaitForBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn onWaitForBytesWritten(self: QLocalSocket, callback: *const fn (QLocalSocket, i32) callconv(.c) bool) void {
        qtc.QLocalSocket_OnWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWaitForBytesWritten` instead
    ///
    pub const SuperWaitForBytesWritten = superWaitForBytesWritten;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForBytesWritten)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn superWaitForBytesWritten(self: QLocalSocket, msecs: i32) bool {
        return qtc.QLocalSocket_SuperWaitForBytesWritten(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForConnected` instead
    ///
    pub const WaitForConnected = waitForConnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn waitForConnected(self: QLocalSocket) bool {
        return qtc.QLocalSocket_WaitForConnected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForDisconnected` instead
    ///
    pub const WaitForDisconnected = waitForDisconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn waitForDisconnected(self: QLocalSocket) bool {
        return qtc.QLocalSocket_WaitForDisconnected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForReadyRead` instead
    ///
    pub const WaitForReadyRead = waitForReadyRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForReadyRead(self: QLocalSocket, msecs: i32) bool {
        return qtc.QLocalSocket_WaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `onWaitForReadyRead` instead
    ///
    pub const OnWaitForReadyRead = onWaitForReadyRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, msecs: i32) callconv(.c) bool `
    ///
    pub fn onWaitForReadyRead(self: QLocalSocket, callback: *const fn (QLocalSocket, i32) callconv(.c) bool) void {
        qtc.QLocalSocket_OnWaitForReadyRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWaitForReadyRead` instead
    ///
    pub const SuperWaitForReadyRead = superWaitForReadyRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForReadyRead)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn superWaitForReadyRead(self: QLocalSocket, msecs: i32) bool {
        return qtc.QLocalSocket_SuperWaitForReadyRead(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `connected` instead
    ///
    pub const Connected = connected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn connected(self: QLocalSocket) void {
        qtc.QLocalSocket_Connected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConnected` instead
    ///
    pub const OnConnected = onConnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket) callconv(.c) void `
    ///
    pub fn onConnected(self: QLocalSocket, callback: *const fn (QLocalSocket) callconv(.c) void) void {
        qtc.QLocalSocket_Connect_Connected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnected` instead
    ///
    pub const Disconnected = disconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#disconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn disconnected(self: QLocalSocket) void {
        qtc.QLocalSocket_Disconnected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnected` instead
    ///
    pub const OnDisconnected = onDisconnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#disconnected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket) callconv(.c) void `
    ///
    pub fn onDisconnected(self: QLocalSocket, callback: *const fn (QLocalSocket) callconv(.c) void) void {
        qtc.QLocalSocket_Connect_Disconnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `errorOccurred` instead
    ///
    pub const ErrorOccurred = errorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#errorOccurred)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` socketError: qlocalsocket_enums.LocalSocketError `
    ///
    pub fn errorOccurred(self: QLocalSocket, socketError: i32) void {
        qtc.QLocalSocket_ErrorOccurred(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### DEPRECATED: Use `onErrorOccurred` instead
    ///
    pub const OnErrorOccurred = onErrorOccurred;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#errorOccurred)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, socketError: qlocalsocket_enums.LocalSocketError) callconv(.c) void `
    ///
    pub fn onErrorOccurred(self: QLocalSocket, callback: *const fn (QLocalSocket, i32) callconv(.c) void) void {
        qtc.QLocalSocket_Connect_ErrorOccurred(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` socketState: qlocalsocket_enums.LocalSocketState `
    ///
    pub fn stateChanged(self: QLocalSocket, socketState: i32) void {
        qtc.QLocalSocket_StateChanged(@ptrCast(self.ptr), @bitCast(socketState));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, socketState: qlocalsocket_enums.LocalSocketState) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QLocalSocket, callback: *const fn (QLocalSocket, i32) callconv(.c) void) void {
        qtc.QLocalSocket_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `readData` instead
    ///
    pub const ReadData = readData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` param1: [:0]u8 `
    ///
    /// ` param2: i64 `
    ///
    pub fn readData(self: QLocalSocket, param1: [:0]u8, param2: i64) i64 {
        const param1_Cstring = param1.ptr;
        return qtc.QLocalSocket_ReadData(@ptrCast(self.ptr), param1_Cstring, @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onReadData` instead
    ///
    pub const OnReadData = onReadData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, param1: qtc.libqt_string, param2: i64) callconv(.c) i64 `
    ///
    pub fn onReadData(self: QLocalSocket, callback: *const fn (QLocalSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QLocalSocket_OnReadData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadData` instead
    ///
    pub const SuperReadData = superReadData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` param1: [:0]u8 `
    ///
    /// ` param2: i64 `
    ///
    pub fn superReadData(self: QLocalSocket, param1: [:0]u8, param2: i64) i64 {
        const param1_Cstring = param1.ptr;
        return qtc.QLocalSocket_SuperReadData(@ptrCast(self.ptr), param1_Cstring, @bitCast(param2));
    }

    /// ### DEPRECATED: Use `readLineData` instead
    ///
    pub const ReadLineData = readLineData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn readLineData(self: QLocalSocket, data: [:0]u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QLocalSocket_ReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `onReadLineData` instead
    ///
    pub const OnReadLineData = onReadLineData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, data: qtc.libqt_string, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn onReadLineData(self: QLocalSocket, callback: *const fn (QLocalSocket, qtc.libqt_string, i64) callconv(.c) i64) void {
        qtc.QLocalSocket_OnReadLineData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReadLineData` instead
    ///
    pub const SuperReadLineData = superReadLineData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#readLineData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn superReadLineData(self: QLocalSocket, data: [:0]u8, maxSize: i64) i64 {
        const data_Cstring = data.ptr;
        return qtc.QLocalSocket_SuperReadLineData(@ptrCast(self.ptr), data_Cstring, @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `skipData` instead
    ///
    pub const SkipData = skipData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skipData(self: QLocalSocket, maxSize: i64) i64 {
        return qtc.QLocalSocket_SkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `onSkipData` instead
    ///
    pub const OnSkipData = onSkipData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, maxSize: i64) callconv(.c) i64 `
    ///
    pub fn onSkipData(self: QLocalSocket, callback: *const fn (QLocalSocket, i64) callconv(.c) i64) void {
        qtc.QLocalSocket_OnSkipData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSkipData` instead
    ///
    pub const SuperSkipData = superSkipData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#skipData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn superSkipData(self: QLocalSocket, maxSize: i64) i64 {
        return qtc.QLocalSocket_SuperSkipData(@ptrCast(self.ptr), @bitCast(maxSize));
    }

    /// ### DEPRECATED: Use `writeData` instead
    ///
    pub const WriteData = writeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    /// ` param2: i64 `
    ///
    pub fn writeData(self: QLocalSocket, param1: [:0]const u8, param2: i64) i64 {
        const param1_Cstring = param1.ptr;
        return qtc.QLocalSocket_WriteData(@ptrCast(self.ptr), param1_Cstring, @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onWriteData` instead
    ///
    pub const OnWriteData = onWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, param1: [*:0]const u8, param2: i64) callconv(.c) i64 `
    ///
    pub fn onWriteData(self: QLocalSocket, callback: *const fn (QLocalSocket, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QLocalSocket_OnWriteData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWriteData` instead
    ///
    pub const SuperWriteData = superWriteData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#writeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` param1: [:0]const u8 `
    ///
    /// ` param2: i64 `
    ///
    pub fn superWriteData(self: QLocalSocket, param1: [:0]const u8, param2: i64) i64 {
        const param1_Cstring = param1.ptr;
        return qtc.QLocalSocket_SuperWriteData(@ptrCast(self.ptr), param1_Cstring, @bitCast(param2));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLocalSocket.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLocalSocket.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connectToServer1` instead
    ///
    pub const ConnectToServer1 = connectToServer1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn connectToServer1(self: QLocalSocket, _openMode: i32) void {
        qtc.QLocalSocket_ConnectToServer1(@ptrCast(self.ptr), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `connectToServer22` instead
    ///
    pub const ConnectToServer22 = connectToServer22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#connectToServer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` name: []const u8 `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn connectToServer22(self: QLocalSocket, name: []const u8, _openMode: i32) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QLocalSocket_ConnectToServer22(@ptrCast(self.ptr), name_str, @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `setSocketDescriptor2` instead
    ///
    pub const SetSocketDescriptor2 = setSocketDescriptor2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` _socketDescriptor: isize `
    ///
    /// ` socketState: qlocalsocket_enums.LocalSocketState `
    ///
    pub fn setSocketDescriptor2(self: QLocalSocket, _socketDescriptor: isize, socketState: i32) bool {
        return qtc.QLocalSocket_SetSocketDescriptor2(@ptrCast(self.ptr), @bitCast(_socketDescriptor), @bitCast(socketState));
    }

    /// ### DEPRECATED: Use `setSocketDescriptor3` instead
    ///
    pub const SetSocketDescriptor3 = setSocketDescriptor3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` _socketDescriptor: isize `
    ///
    /// ` socketState: qlocalsocket_enums.LocalSocketState `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setSocketDescriptor3(self: QLocalSocket, _socketDescriptor: isize, socketState: i32, _openMode: i32) bool {
        return qtc.QLocalSocket_SetSocketDescriptor3(@ptrCast(self.ptr), @bitCast(_socketDescriptor), @bitCast(socketState), @bitCast(_openMode));
    }

    /// ### DEPRECATED: Use `waitForConnected1` instead
    ///
    pub const WaitForConnected1 = waitForConnected1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForConnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForConnected1(self: QLocalSocket, msecs: i32) bool {
        return qtc.QLocalSocket_WaitForConnected1(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `waitForDisconnected1` instead
    ///
    pub const WaitForDisconnected1 = waitForDisconnected1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#waitForDisconnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalSocket `
    ///
    /// ` msecs: i32 `
    ///
    pub fn waitForDisconnected1(self: QLocalSocket, msecs: i32) bool {
        return qtc.QLocalSocket_WaitForDisconnected1(@ptrCast(self.ptr), @bitCast(msecs));
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
    /// ` self: QLocalSocket `
    ///
    /// ## Returns:
    ///
    /// ` flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn openMode(self: QLocalSocket) i32 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` enabled: bool `
    ///
    pub fn setTextModeEnabled(self: QLocalSocket, enabled: bool) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn isTextModeEnabled(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn isOpen(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn isReadable(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn isWritable(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn readChannelCount(self: QLocalSocket) i32 {
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
    /// ` self: QLocalSocket `
    ///
    pub fn writeChannelCount(self: QLocalSocket) i32 {
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
    /// ` self: QLocalSocket `
    ///
    pub fn currentReadChannel(self: QLocalSocket) i32 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentReadChannel(self: QLocalSocket, channel: i32) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn currentWriteChannel(self: QLocalSocket) i32 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn setCurrentWriteChannel(self: QLocalSocket, channel: i32) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read(self: QLocalSocket, data: [:0]u8, maxlen: i64) i64 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn read2(self: QLocalSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLocalSocket.read2: Memory allocation failed");
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
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readAll(self: QLocalSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLocalSocket.readAll: Memory allocation failed");
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
    /// ` self: QLocalSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine(self: QLocalSocket, data: [:0]u8, maxlen: i64) i64 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn readLine2(self: QLocalSocket, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLocalSocket.readLine2: Memory allocation failed");
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
    /// ` self: QLocalSocket `
    ///
    pub fn startTransaction(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn commitTransaction(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn rollbackTransaction(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn isTransactionStarted(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    /// ` len: i64 `
    ///
    pub fn write(self: QLocalSocket, data: [:0]const u8, len: i64) i64 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` data: [:0]const u8 `
    ///
    pub fn write2(self: QLocalSocket, data: [:0]const u8) i64 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` data: []u8 `
    ///
    pub fn write3(self: QLocalSocket, data: []u8) i64 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` data: [:0]u8 `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek(self: QLocalSocket, data: [:0]u8, maxlen: i64) i64 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn peek2(self: QLocalSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLocalSocket.peek2: Memory allocation failed");
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
    /// ` self: QLocalSocket `
    ///
    /// ` maxSize: i64 `
    ///
    pub fn skip(self: QLocalSocket, maxSize: i64) i64 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn ungetChar(self: QLocalSocket, c: u8) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` c: u8 `
    ///
    pub fn putChar(self: QLocalSocket, c: u8) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` c: [:0]u8 `
    ///
    pub fn getChar(self: QLocalSocket, c: [:0]u8) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QLocalSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QIODevice_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLocalSocket.errorString: Memory allocation failed");
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
    /// ` self: QLocalSocket `
    ///
    pub fn readyRead(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket) callconv(.c) void `
    ///
    pub fn onReadyRead(self: QLocalSocket, callback: *const fn (QLocalSocket) callconv(.c) void) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` channel: i32 `
    ///
    pub fn channelReadyRead(self: QLocalSocket, channel: i32) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, channel: i32) callconv(.c) void `
    ///
    pub fn onChannelReadyRead(self: QLocalSocket, callback: *const fn (QLocalSocket, i32) callconv(.c) void) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` bytes: i64 `
    ///
    pub fn bytesWritten(self: QLocalSocket, bytes: i64) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, bytes: i64) callconv(.c) void `
    ///
    pub fn onBytesWritten(self: QLocalSocket, callback: *const fn (QLocalSocket, i64) callconv(.c) void) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` channel: i32 `
    ///
    /// ` bytes: i64 `
    ///
    pub fn channelBytesWritten(self: QLocalSocket, channel: i32, bytes: i64) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, channel: i32, bytes: i64) callconv(.c) void `
    ///
    pub fn onChannelBytesWritten(self: QLocalSocket, callback: *const fn (QLocalSocket, i32, i64) callconv(.c) void) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn aboutToClose(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket) callconv(.c) void `
    ///
    pub fn onAboutToClose(self: QLocalSocket, callback: *const fn (QLocalSocket) callconv(.c) void) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn readChannelFinished(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket) callconv(.c) void `
    ///
    pub fn onReadChannelFinished(self: QLocalSocket, callback: *const fn (QLocalSocket) callconv(.c) void) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` maxlen: i64 `
    ///
    pub fn readLine1(self: QLocalSocket, allocator: std.mem.Allocator, maxlen: i64) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self.ptr), @bitCast(maxlen));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QLocalSocket.readLine1: Memory allocation failed");
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
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QLocalSocket, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QLocalSocket.objectName: Memory allocation failed");
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
    /// ` self: QLocalSocket `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QLocalSocket, name: []const u8) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn isWidgetType(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn isWindowType(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn isQuickItemType(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn signalsBlocked(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QLocalSocket, b: bool) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn thread(self: QLocalSocket) QThread {
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
    /// ` self: QLocalSocket `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QLocalSocket, _thread: anytype) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QLocalSocket, interval: i32) i32 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QLocalSocket, time: i64) i32 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QLocalSocket, id: i32) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QLocalSocket, id: i32) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QLocalSocket, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QLocalSocket.children: Memory allocation failed");
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
    /// ` self: QLocalSocket `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QLocalSocket, _parent: anytype) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QLocalSocket, filterObj: anytype) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QLocalSocket, obj: anytype) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QLocalSocket, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QLocalSocket `
    ///
    pub fn disconnect3(self: QLocalSocket) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QLocalSocket, receiver: anytype) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn dumpObjectTree(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn dumpObjectInfo(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QLocalSocket, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QLocalSocket, name: [:0]const u8) QVariant {
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
    /// ` self: QLocalSocket `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QLocalSocket, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QLocalSocket.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QLocalSocket.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QLocalSocket `
    ///
    pub fn bindingStorage(self: QLocalSocket) QBindingStorage {
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
    /// ` self: QLocalSocket `
    ///
    pub fn bindingStorage2(self: QLocalSocket) QBindingStorage {
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
    /// ` self: QLocalSocket `
    ///
    pub fn destroyed(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QLocalSocket, callback: *const fn (QLocalSocket) callconv(.c) void) void {
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
    /// ` self: QLocalSocket `
    ///
    pub fn parent(self: QLocalSocket) QObject {
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
    /// ` self: QLocalSocket `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QLocalSocket, classname: [:0]const u8) bool {
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
    /// ` self: QLocalSocket `
    ///
    pub fn deleteLater(self: QLocalSocket) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QLocalSocket, interval: i32, timerType: i32) i32 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QLocalSocket, time: i64, timerType: i32) i32 {
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
    /// ` self: QLocalSocket `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QLocalSocket, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QLocalSocket, signal: [:0]const u8) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QLocalSocket, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QLocalSocket, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QLocalSocket, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLocalSocket `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QLocalSocket, param1: anytype) void {
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QLocalSocket, callback: *const fn (QLocalSocket, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    pub fn pos(self: QLocalSocket) i64 {
        return qtc.QLocalSocket_Pos(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket `
    ///
    pub fn superPos(self: QLocalSocket) i64 {
        return qtc.QLocalSocket_SuperPos(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onPos(self: QLocalSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QLocalSocket_OnPos(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    pub fn size(self: QLocalSocket) i64 {
        return qtc.QLocalSocket_Size(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket `
    ///
    pub fn superSize(self: QLocalSocket) i64 {
        return qtc.QLocalSocket_SuperSize(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i64 `
    ///
    pub fn onSize(self: QLocalSocket, callback: *const fn () callconv(.c) i64) void {
        qtc.QLocalSocket_OnSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _pos: i64 `
    ///
    pub fn seek(self: QLocalSocket, _pos: i64) bool {
        return qtc.QLocalSocket_Seek(@ptrCast(self.ptr), @bitCast(_pos));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _pos: i64 `
    ///
    pub fn superSeek(self: QLocalSocket, _pos: i64) bool {
        return qtc.QLocalSocket_SuperSeek(@ptrCast(self.ptr), @bitCast(_pos));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, pos: i64) callconv(.c) bool `
    ///
    pub fn onSeek(self: QLocalSocket, callback: *const fn (QLocalSocket, i64) callconv(.c) bool) void {
        qtc.QLocalSocket_OnSeek(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    pub fn atEnd(self: QLocalSocket) bool {
        return qtc.QLocalSocket_AtEnd(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket `
    ///
    pub fn superAtEnd(self: QLocalSocket) bool {
        return qtc.QLocalSocket_SuperAtEnd(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onAtEnd(self: QLocalSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QLocalSocket_OnAtEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    pub fn reset(self: QLocalSocket) bool {
        return qtc.QLocalSocket_Reset(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket `
    ///
    pub fn superReset(self: QLocalSocket) bool {
        return qtc.QLocalSocket_SuperReset(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onReset(self: QLocalSocket, callback: *const fn () callconv(.c) bool) void {
        qtc.QLocalSocket_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QLocalSocket, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QLocalSocket_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QLocalSocket, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QLocalSocket_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QLocalSocket, callback: *const fn (QLocalSocket, QEvent) callconv(.c) bool) void {
        qtc.QLocalSocket_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QLocalSocket, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QLocalSocket_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QLocalSocket, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QLocalSocket_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QLocalSocket, callback: *const fn (QLocalSocket, QObject, QEvent) callconv(.c) bool) void {
        qtc.QLocalSocket_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QLocalSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QLocalSocket_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QLocalSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QLocalSocket_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QLocalSocket, callback: *const fn (QLocalSocket, QTimerEvent) callconv(.c) void) void {
        qtc.QLocalSocket_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QLocalSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QLocalSocket_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QLocalSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QLocalSocket_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QLocalSocket, callback: *const fn (QLocalSocket, QChildEvent) callconv(.c) void) void {
        qtc.QLocalSocket_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QLocalSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QLocalSocket_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QLocalSocket, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QLocalSocket_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QLocalSocket, callback: *const fn (QLocalSocket, QEvent) callconv(.c) void) void {
        qtc.QLocalSocket_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QLocalSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QLocalSocket_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QLocalSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QLocalSocket_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QLocalSocket, callback: *const fn (QLocalSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QLocalSocket_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QLocalSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QLocalSocket_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QLocalSocket, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QLocalSocket_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QLocalSocket, callback: *const fn (QLocalSocket, QMetaMethod) callconv(.c) void) void {
        qtc.QLocalSocket_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn setOpenMode(self: QLocalSocket, _openMode: i32) void {
        qtc.QLocalSocket_SetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _openMode: flag of qiodevicebase_enums.OpenModeFlag `
    ///
    pub fn superSetOpenMode(self: QLocalSocket, _openMode: i32) void {
        qtc.QLocalSocket_SuperSetOpenMode(@ptrCast(self.ptr), @bitCast(_openMode));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, openMode: flag of qiodevicebase_enums.OpenModeFlag) callconv(.c) void `
    ///
    pub fn onSetOpenMode(self: QLocalSocket, callback: *const fn (QLocalSocket, i32) callconv(.c) void) void {
        qtc.QLocalSocket_OnSetOpenMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn setErrorString(self: QLocalSocket, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QLocalSocket_SetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QLocalSocket `
    ///
    /// ` _errorString: []const u8 `
    ///
    pub fn superSetErrorString(self: QLocalSocket, _errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
            .len = _errorString.len,
            .data = _errorString.ptr,
        };
        qtc.QLocalSocket_SuperSetErrorString(@ptrCast(self.ptr), errorString_str);
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, errorString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSetErrorString(self: QLocalSocket, callback: *const fn (QLocalSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QLocalSocket_OnSetErrorString(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    pub fn sender(self: QLocalSocket) QObject {
        return .{ .ptr = qtc.QLocalSocket_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QLocalSocket `
    ///
    pub fn superSender(self: QLocalSocket) QObject {
        return .{ .ptr = qtc.QLocalSocket_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QLocalSocket, callback: *const fn () callconv(.c) QObject) void {
        qtc.QLocalSocket_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    pub fn senderSignalIndex(self: QLocalSocket) i32 {
        return qtc.QLocalSocket_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket `
    ///
    pub fn superSenderSignalIndex(self: QLocalSocket) i32 {
        return qtc.QLocalSocket_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QLocalSocket, callback: *const fn () callconv(.c) i32) void {
        qtc.QLocalSocket_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QLocalSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLocalSocket_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QLocalSocket, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLocalSocket_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QLocalSocket, callback: *const fn (QLocalSocket, [*:0]const u8) callconv(.c) i32) void {
        qtc.QLocalSocket_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QLocalSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QLocalSocket_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QLocalSocket `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QLocalSocket, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QLocalSocket_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QLocalSocket`
    ///
    /// ` callback: *const fn (self: QLocalSocket, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QLocalSocket, callback: *const fn (QLocalSocket, QMetaMethod) callconv(.c) bool) void {
        qtc.QLocalSocket_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalSocket `
    ///
    /// ` callback: *const fn (self: QLocalSocket, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QLocalSocket, callback: *const fn (QLocalSocket, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#dtor.QLocalSocket)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QLocalSocket `
    ///
    pub fn delete(self: QLocalSocket) void {
        qtc.QLocalSocket_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalsocket.html#public-types)
pub const enums = struct {
    pub const LocalSocketError = enum(i32) {
        pub const ConnectionRefusedError: i32 = 0;
        pub const PeerClosedError: i32 = 1;
        pub const ServerNotFoundError: i32 = 2;
        pub const SocketAccessError: i32 = 3;
        pub const SocketResourceError: i32 = 4;
        pub const SocketTimeoutError: i32 = 5;
        pub const DatagramTooLargeError: i32 = 6;
        pub const ConnectionError: i32 = 7;
        pub const UnsupportedSocketOperationError: i32 = 10;
        pub const UnknownSocketError: i32 = -1;
        pub const OperationError: i32 = 19;
    };

    pub const LocalSocketState = enum(i32) {
        pub const UnconnectedState: i32 = 0;
        pub const ConnectingState: i32 = 2;
        pub const ConnectedState: i32 = 3;
        pub const ClosingState: i32 = 6;
    };

    pub const SocketOption = enum(i32) {
        pub const NoOptions: i32 = 0;
        pub const AbstractNamespaceOption: i32 = 1;
    };
};
