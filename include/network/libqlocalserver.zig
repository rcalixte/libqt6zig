const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QLocalSocket = @import("libqt6").QLocalSocket;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qlocalserver_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html)
pub const QLocalServer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QLocalServer,

    pub const _is_QLocalServer = {};
    pub const _is_QObject = {};

    /// New constructs a new QLocalServer object.
    ///
    pub fn New() QLocalServer {
        return .{ .ptr = qtc.QLocalServer_new() };
    }

    /// New2 constructs a new QLocalServer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QLocalServer {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QLocalServer_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn MetaObject(self: QLocalServer) QMetaObject {
        return .{ .ptr = qtc.QLocalServer_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QLocalServer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QLocalServer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QLocalServer `
    ///
    pub fn SuperMetaObject(self: QLocalServer) QMetaObject {
        return .{ .ptr = qtc.QLocalServer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QLocalServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLocalServer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn (self: QLocalServer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QLocalServer, callback: *const fn (QLocalServer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QLocalServer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QLocalServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QLocalServer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QLocalServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLocalServer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn (self: QLocalServer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QLocalServer, callback: *const fn (QLocalServer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QLocalServer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QLocalServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QLocalServer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#newConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn NewConnection(self: QLocalServer) void {
        qtc.QLocalServer_NewConnection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#newConnection)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn (self: QLocalServer) callconv(.c) void `
    ///
    pub fn OnNewConnection(self: QLocalServer, callback: *const fn (QLocalServer) callconv(.c) void) void {
        qtc.QLocalServer_Connect_NewConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn Close(self: QLocalServer) void {
        qtc.QLocalServer_Close(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QLocalServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLocalServer_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn HasPendingConnections(self: QLocalServer) bool {
        return qtc.QLocalServer_HasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasPendingConnections(self: QLocalServer, callback: *const fn () callconv(.c) bool) void {
        qtc.QLocalServer_OnHasPendingConnections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHasPendingConnections` instead
    ///
    pub const QBaseHasPendingConnections = SuperHasPendingConnections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#hasPendingConnections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn SuperHasPendingConnections(self: QLocalServer) bool {
        return qtc.QLocalServer_SuperHasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#isListening)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn IsListening(self: QLocalServer) bool {
        return qtc.QLocalServer_IsListening(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn Listen(self: QLocalServer, name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QLocalServer_Listen(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` socketDescriptor: isize `
    ///
    pub fn Listen2(self: QLocalServer, socketDescriptor: isize) bool {
        return qtc.QLocalServer_Listen2(@ptrCast(self.ptr), @bitCast(socketDescriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#maxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn MaxPendingConnections(self: QLocalServer) i32 {
        return qtc.QLocalServer_MaxPendingConnections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn NextPendingConnection(self: QLocalServer) QLocalSocket {
        return .{ .ptr = qtc.QLocalServer_NextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn () callconv(.c) QLocalSocket `
    ///
    pub fn OnNextPendingConnection(self: QLocalServer, callback: *const fn () callconv(.c) QLocalSocket) void {
        qtc.QLocalServer_OnNextPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperNextPendingConnection` instead
    ///
    pub const QBaseNextPendingConnection = SuperNextPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#nextPendingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn SuperNextPendingConnection(self: QLocalServer) QLocalSocket {
        return .{ .ptr = qtc.QLocalServer_SuperNextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#serverName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServerName(self: QLocalServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLocalServer_ServerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.ServerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#fullServerName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FullServerName(self: QLocalServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLocalServer_FullServerName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.FullServerName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#removeServer)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn RemoveServer(name: []const u8) bool {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QLocalServer_RemoveServer(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#serverError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn ServerError(self: QLocalServer) i32 {
        return qtc.QLocalServer_ServerError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#setMaxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` numConnections: i32 `
    ///
    pub fn SetMaxPendingConnections(self: QLocalServer, numConnections: i32) void {
        qtc.QLocalServer_SetMaxPendingConnections(@ptrCast(self.ptr), @bitCast(numConnections));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn WaitForNewConnection(self: QLocalServer) bool {
        return qtc.QLocalServer_WaitForNewConnection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#setListenBacklogSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` size: i32 `
    ///
    pub fn SetListenBacklogSize(self: QLocalServer, size: i32) void {
        qtc.QLocalServer_SetListenBacklogSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#listenBacklogSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn ListenBacklogSize(self: QLocalServer) i32 {
        return qtc.QLocalServer_ListenBacklogSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#setSocketOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` options: flag of qlocalserver_enums.SocketOption `
    ///
    pub fn SetSocketOptions(self: QLocalServer, options: i32) void {
        qtc.QLocalServer_SetSocketOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#socketOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ## Returns:
    ///
    /// ` flag of qlocalserver_enums.SocketOption `
    ///
    pub fn SocketOptions(self: QLocalServer) i32 {
        return qtc.QLocalServer_SocketOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn SocketDescriptor(self: QLocalServer) isize {
        return qtc.QLocalServer_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` socketDescriptor: usize `
    ///
    pub fn IncomingConnection(self: QLocalServer, socketDescriptor: usize) void {
        qtc.QLocalServer_IncomingConnection(@ptrCast(self.ptr), @bitCast(socketDescriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn (self: QLocalServer, socketDescriptor: usize) callconv(.c) void `
    ///
    pub fn OnIncomingConnection(self: QLocalServer, callback: *const fn (QLocalServer, usize) callconv(.c) void) void {
        qtc.QLocalServer_OnIncomingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIncomingConnection` instead
    ///
    pub const QBaseIncomingConnection = SuperIncomingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#incomingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` socketDescriptor: usize `
    ///
    pub fn SuperIncomingConnection(self: QLocalServer, socketDescriptor: usize) void {
        qtc.QLocalServer_SuperIncomingConnection(@ptrCast(self.ptr), @bitCast(socketDescriptor));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#addPendingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` socket: QLocalSocket `
    ///
    pub fn AddPendingConnection(self: QLocalServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QLocalSocket;
        qtc.QLocalServer_AddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#addPendingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn (self: QLocalServer, socket: QLocalSocket) callconv(.c) void `
    ///
    pub fn OnAddPendingConnection(self: QLocalServer, callback: *const fn (QLocalServer, QLocalSocket) callconv(.c) void) void {
        qtc.QLocalServer_OnAddPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddPendingConnection` instead
    ///
    pub const QBaseAddPendingConnection = SuperAddPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#addPendingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` socket: QLocalSocket `
    ///
    pub fn SuperAddPendingConnection(self: QLocalServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QLocalSocket;
        qtc.QLocalServer_SuperAddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` msec: i32 `
    ///
    pub fn WaitForNewConnection1(self: QLocalServer, msec: i32) bool {
        return qtc.QLocalServer_WaitForNewConnection1(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` msec: i32 `
    ///
    /// ` timedOut: *bool `
    ///
    pub fn WaitForNewConnection2(self: QLocalServer, msec: i32, timedOut: *bool) bool {
        return qtc.QLocalServer_WaitForNewConnection2(@ptrCast(self.ptr), @bitCast(msec), @ptrCast(timedOut));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QLocalServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalserver.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QLocalServer, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn IsWidgetType(self: QLocalServer) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn IsWindowType(self: QLocalServer) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn IsQuickItemType(self: QLocalServer) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn SignalsBlocked(self: QLocalServer) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QLocalServer, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn Thread(self: QLocalServer) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QLocalServer, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QLocalServer, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QLocalServer, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QLocalServer, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QLocalServer, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QLocalServer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qlocalserver.Children: Memory allocation failed");
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
    /// ` self: QLocalServer `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QLocalServer, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QLocalServer, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QLocalServer, obj: anytype) void {
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
    /// ` self: QLocalServer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QLocalServer, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QLocalServer `
    ///
    pub fn Disconnect3(self: QLocalServer) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QLocalServer, receiver: anytype) bool {
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
    /// ` self: QLocalServer `
    ///
    pub fn DumpObjectTree(self: QLocalServer) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn DumpObjectInfo(self: QLocalServer) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QLocalServer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QLocalServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QLocalServer, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QLocalServer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qlocalserver.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qlocalserver.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QLocalServer `
    ///
    pub fn BindingStorage(self: QLocalServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn BindingStorage2(self: QLocalServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn Destroyed(self: QLocalServer) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn (self: QLocalServer) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QLocalServer, callback: *const fn (QLocalServer) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn Parent(self: QLocalServer) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QLocalServer, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn DeleteLater(self: QLocalServer) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QLocalServer, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QLocalServer, time: i64, timerType: i32) i32 {
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
    /// ` self: QLocalServer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QLocalServer, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QLocalServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QLocalServer, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QLocalServer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QLocalServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QLocalServer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLocalServer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QLocalServer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QLocalServer `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QLocalServer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn (self: QLocalServer, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QLocalServer, callback: *const fn (QLocalServer, QObject) callconv(.c) void) void {
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
    /// ` self: QLocalServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QLocalServer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QLocalServer_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QLocalServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QLocalServer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QLocalServer_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn (self: QLocalServer, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QLocalServer, callback: *const fn (QLocalServer, QEvent) callconv(.c) bool) void {
        qtc.QLocalServer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QLocalServer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QLocalServer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QLocalServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QLocalServer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QLocalServer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn (self: QLocalServer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QLocalServer, callback: *const fn (QLocalServer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QLocalServer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QLocalServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QLocalServer_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QLocalServer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QLocalServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QLocalServer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn (self: QLocalServer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QLocalServer, callback: *const fn (QLocalServer, QTimerEvent) callconv(.c) void) void {
        qtc.QLocalServer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QLocalServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QLocalServer_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QLocalServer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QLocalServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QLocalServer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn (self: QLocalServer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QLocalServer, callback: *const fn (QLocalServer, QChildEvent) callconv(.c) void) void {
        qtc.QLocalServer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QLocalServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QLocalServer_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QLocalServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QLocalServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QLocalServer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn (self: QLocalServer, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QLocalServer, callback: *const fn (QLocalServer, QEvent) callconv(.c) void) void {
        qtc.QLocalServer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QLocalServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QLocalServer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QLocalServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QLocalServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QLocalServer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn (self: QLocalServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QLocalServer, callback: *const fn (QLocalServer, QMetaMethod) callconv(.c) void) void {
        qtc.QLocalServer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QLocalServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QLocalServer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QLocalServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QLocalServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QLocalServer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn (self: QLocalServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QLocalServer, callback: *const fn (QLocalServer, QMetaMethod) callconv(.c) void) void {
        qtc.QLocalServer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn Sender(self: QLocalServer) QObject {
        return .{ .ptr = qtc.QLocalServer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QLocalServer `
    ///
    pub fn SuperSender(self: QLocalServer) QObject {
        return .{ .ptr = qtc.QLocalServer_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QLocalServer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QLocalServer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    pub fn SenderSignalIndex(self: QLocalServer) i32 {
        return qtc.QLocalServer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QLocalServer `
    ///
    pub fn SuperSenderSignalIndex(self: QLocalServer) i32 {
        return qtc.QLocalServer_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QLocalServer, callback: *const fn () callconv(.c) i32) void {
        qtc.QLocalServer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QLocalServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLocalServer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QLocalServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QLocalServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QLocalServer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn (self: QLocalServer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QLocalServer, callback: *const fn (QLocalServer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QLocalServer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QLocalServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QLocalServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QLocalServer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QLocalServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QLocalServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QLocalServer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer`
    ///
    /// ` callback: *const fn (self: QLocalServer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QLocalServer, callback: *const fn (QLocalServer, QMetaMethod) callconv(.c) bool) void {
        qtc.QLocalServer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QLocalServer `
    ///
    /// ` callback: *const fn (self: QLocalServer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QLocalServer, callback: *const fn (QLocalServer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#dtor.QLocalServer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QLocalServer `
    ///
    pub fn Delete(self: QLocalServer) void {
        qtc.QLocalServer_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlocalserver.html#public-types)
pub const enums = struct {
    pub const SocketOption = enum(i32) {
        pub const NoOptions: i32 = 0;
        pub const UserAccessOption: i32 = 1;
        pub const GroupAccessOption: i32 = 2;
        pub const OtherAccessOption: i32 = 4;
        pub const WorldAccessOption: i32 = 7;
        pub const AbstractNamespaceOption: i32 = 8;
    };
};
