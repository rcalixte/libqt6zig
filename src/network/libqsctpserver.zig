const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QHostAddress = @import("libqt6").QHostAddress;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QNetworkProxy = @import("libqt6").QNetworkProxy;
const QObject = @import("libqt6").QObject;
const QSctpSocket = @import("libqt6").QSctpSocket;
const QTcpSocket = @import("libqt6").QTcpSocket;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html)
pub const QSctpServer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSctpServer,

    pub const _is_QSctpServer = {};
    pub const _is_QTcpServer = {};
    pub const _is_QObject = {};

    /// New constructs a new QSctpServer object.
    ///
    pub fn New() QSctpServer {
        return .{ .ptr = qtc.QSctpServer_new() };
    }

    /// New2 constructs a new QSctpServer object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QSctpServer {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSctpServer_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn MetaObject(self: QSctpServer) QMetaObject {
        return .{ .ptr = qtc.QSctpServer_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSctpServer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSctpServer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    pub fn SuperMetaObject(self: QSctpServer) QMetaObject {
        return .{ .ptr = qtc.QSctpServer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSctpServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSctpServer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSctpServer, callback: *const fn (QSctpServer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSctpServer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSctpServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSctpServer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSctpServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSctpServer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSctpServer, callback: *const fn (QSctpServer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSctpServer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSctpServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSctpServer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#setMaximumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` count: i32 `
    ///
    pub fn SetMaximumChannelCount(self: QSctpServer, count: i32) void {
        qtc.QSctpServer_SetMaximumChannelCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#maximumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn MaximumChannelCount(self: QSctpServer) i32 {
        return qtc.QSctpServer_MaximumChannelCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#nextPendingDatagramConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn NextPendingDatagramConnection(self: QSctpServer) QSctpSocket {
        return .{ .ptr = qtc.QSctpServer_NextPendingDatagramConnection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` handle: isize `
    ///
    pub fn IncomingConnection(self: QSctpServer, handle: isize) void {
        qtc.QSctpServer_IncomingConnection(@ptrCast(self.ptr), @bitCast(handle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, handle: isize) callconv(.c) void `
    ///
    pub fn OnIncomingConnection(self: QSctpServer, callback: *const fn (QSctpServer, isize) callconv(.c) void) void {
        qtc.QSctpServer_OnIncomingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIncomingConnection` instead
    ///
    pub const QBaseIncomingConnection = SuperIncomingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` handle: isize `
    ///
    pub fn SuperIncomingConnection(self: QSctpServer, handle: isize) void {
        qtc.QSctpServer_SuperIncomingConnection(@ptrCast(self.ptr), @bitCast(handle));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn Listen(self: QSctpServer) bool {
        return qtc.QTcpServer_Listen(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn Close(self: QSctpServer) void {
        qtc.QTcpServer_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn IsListening(self: QSctpServer) bool {
        return qtc.QTcpServer_IsListening(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` numConnections: i32 `
    ///
    pub fn SetMaxPendingConnections(self: QSctpServer, numConnections: i32) void {
        qtc.QTcpServer_SetMaxPendingConnections(@ptrCast(self.ptr), @bitCast(numConnections));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn MaxPendingConnections(self: QSctpServer) i32 {
        return qtc.QTcpServer_MaxPendingConnections(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` size: i32 `
    ///
    pub fn SetListenBacklogSize(self: QSctpServer, size: i32) void {
        qtc.QTcpServer_SetListenBacklogSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn ListenBacklogSize(self: QSctpServer) i32 {
        return qtc.QTcpServer_ListenBacklogSize(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn ServerPort(self: QSctpServer) u16 {
        return qtc.QTcpServer_ServerPort(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn ServerAddress(self: QSctpServer) QHostAddress {
        return .{ .ptr = qtc.QTcpServer_ServerAddress(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn SocketDescriptor(self: QSctpServer) isize {
        return qtc.QTcpServer_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` socketDescriptor: isize `
    ///
    pub fn SetSocketDescriptor(self: QSctpServer, socketDescriptor: isize) bool {
        return qtc.QTcpServer_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(socketDescriptor));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn WaitForNewConnection(self: QSctpServer) bool {
        return qtc.QTcpServer_WaitForNewConnection(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn ServerError(self: QSctpServer) i32 {
        return qtc.QTcpServer_ServerError(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QSctpServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTcpServer_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn PauseAccepting(self: QSctpServer) void {
        qtc.QTcpServer_PauseAccepting(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn ResumeAccepting(self: QSctpServer) void {
        qtc.QTcpServer_ResumeAccepting(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn SetProxy(self: QSctpServer, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QTcpServer_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn Proxy(self: QSctpServer) QNetworkProxy {
        return .{ .ptr = qtc.QTcpServer_Proxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn NewConnection(self: QSctpServer) void {
        qtc.QTcpServer_NewConnection(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer) callconv(.c) void `
    ///
    pub fn OnNewConnection(self: QSctpServer, callback: *const fn (QSctpServer) callconv(.c) void) void {
        qtc.QTcpServer_Connect_NewConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn AcceptError(self: QSctpServer, socketError: i32) void {
        qtc.QTcpServer_AcceptError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn OnAcceptError(self: QSctpServer, callback: *const fn (QSctpServer, i32) callconv(.c) void) void {
        qtc.QTcpServer_Connect_AcceptError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn Listen1(self: QSctpServer, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QTcpServer_Listen1(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn Listen2(self: QSctpServer, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QTcpServer_Listen2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` msec: i32 `
    ///
    pub fn WaitForNewConnection1(self: QSctpServer, msec: i32) bool {
        return qtc.QTcpServer_WaitForNewConnection1(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` msec: i32 `
    ///
    /// ` timedOut: *bool `
    ///
    pub fn WaitForNewConnection2(self: QSctpServer, msec: i32, timedOut: *bool) bool {
        return qtc.QTcpServer_WaitForNewConnection2(@ptrCast(self.ptr), @bitCast(msec), @ptrCast(timedOut));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSctpServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSctpServer, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn IsWidgetType(self: QSctpServer) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn IsWindowType(self: QSctpServer) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn IsQuickItemType(self: QSctpServer) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn SignalsBlocked(self: QSctpServer) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSctpServer, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn Thread(self: QSctpServer) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSctpServer, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSctpServer, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSctpServer, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSctpServer, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSctpServer, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSctpServer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsctpserver.Children: Memory allocation failed");
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
    /// ` self: QSctpServer `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSctpServer, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSctpServer, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSctpServer, obj: anytype) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSctpServer, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSctpServer `
    ///
    pub fn Disconnect3(self: QSctpServer) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSctpServer, receiver: anytype) bool {
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
    /// ` self: QSctpServer `
    ///
    pub fn DumpObjectTree(self: QSctpServer) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn DumpObjectInfo(self: QSctpServer) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSctpServer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSctpServer, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSctpServer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsctpserver.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsctpserver.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSctpServer `
    ///
    pub fn BindingStorage(self: QSctpServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn BindingStorage2(self: QSctpServer) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn Destroyed(self: QSctpServer) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSctpServer, callback: *const fn (QSctpServer) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn Parent(self: QSctpServer) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSctpServer, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn DeleteLater(self: QSctpServer) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSctpServer, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSctpServer, time: i64, timerType: i32) i32 {
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
    /// ` self: QSctpServer `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSctpServer, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSctpServer, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSctpServer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSctpServer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSctpServer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSctpServer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSctpServer, callback: *const fn (QSctpServer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn HasPendingConnections(self: QSctpServer) bool {
        return qtc.QSctpServer_HasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHasPendingConnections` instead
    ///
    pub const QBaseHasPendingConnections = SuperHasPendingConnections;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn SuperHasPendingConnections(self: QSctpServer) bool {
        return qtc.QSctpServer_SuperHasPendingConnections(@ptrCast(self.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasPendingConnections(self: QSctpServer, callback: *const fn () callconv(.c) bool) void {
        qtc.QSctpServer_OnHasPendingConnections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn NextPendingConnection(self: QSctpServer) QTcpSocket {
        return .{ .ptr = qtc.QSctpServer_NextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperNextPendingConnection` instead
    ///
    pub const QBaseNextPendingConnection = SuperNextPendingConnection;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn SuperNextPendingConnection(self: QSctpServer) QTcpSocket {
        return .{ .ptr = qtc.QSctpServer_SuperNextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn () callconv(.c) QTcpSocket `
    ///
    pub fn OnNextPendingConnection(self: QSctpServer, callback: *const fn () callconv(.c) QTcpSocket) void {
        qtc.QSctpServer_OnNextPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSctpServer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSctpServer_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSctpServer, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSctpServer_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSctpServer, callback: *const fn (QSctpServer, QEvent) callconv(.c) bool) void {
        qtc.QSctpServer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSctpServer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSctpServer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSctpServer, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSctpServer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSctpServer, callback: *const fn (QSctpServer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSctpServer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSctpServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSctpServer_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSctpServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSctpServer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSctpServer, callback: *const fn (QSctpServer, QTimerEvent) callconv(.c) void) void {
        qtc.QSctpServer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSctpServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSctpServer_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSctpServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSctpServer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSctpServer, callback: *const fn (QSctpServer, QChildEvent) callconv(.c) void) void {
        qtc.QSctpServer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSctpServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSctpServer_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSctpServer, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSctpServer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSctpServer, callback: *const fn (QSctpServer, QEvent) callconv(.c) void) void {
        qtc.QSctpServer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSctpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSctpServer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSctpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSctpServer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSctpServer, callback: *const fn (QSctpServer, QMetaMethod) callconv(.c) void) void {
        qtc.QSctpServer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSctpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSctpServer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSctpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSctpServer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSctpServer, callback: *const fn (QSctpServer, QMetaMethod) callconv(.c) void) void {
        qtc.QSctpServer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` socket: QTcpSocket `
    ///
    pub fn AddPendingConnection(self: QSctpServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QSctpServer_AddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `SuperAddPendingConnection` instead
    ///
    pub const QBaseAddPendingConnection = SuperAddPendingConnection;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` socket: QTcpSocket `
    ///
    pub fn SuperAddPendingConnection(self: QSctpServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QSctpServer_SuperAddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, socket: QTcpSocket) callconv(.c) void `
    ///
    pub fn OnAddPendingConnection(self: QSctpServer, callback: *const fn (QSctpServer, QTcpSocket) callconv(.c) void) void {
        qtc.QSctpServer_OnAddPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn Sender(self: QSctpServer) QObject {
        return .{ .ptr = qtc.QSctpServer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSctpServer `
    ///
    pub fn SuperSender(self: QSctpServer) QObject {
        return .{ .ptr = qtc.QSctpServer_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSctpServer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSctpServer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn SenderSignalIndex(self: QSctpServer) i32 {
        return qtc.QSctpServer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSctpServer `
    ///
    pub fn SuperSenderSignalIndex(self: QSctpServer) i32 {
        return qtc.QSctpServer_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSctpServer, callback: *const fn () callconv(.c) i32) void {
        qtc.QSctpServer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSctpServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSctpServer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSctpServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSctpServer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSctpServer, callback: *const fn (QSctpServer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSctpServer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSctpServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSctpServer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSctpServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSctpServer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSctpServer, callback: *const fn (QSctpServer, QMetaMethod) callconv(.c) bool) void {
        qtc.QSctpServer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer) callconv(.c) void `
    ///
    pub fn OnPendingConnectionAvailable(self: QSctpServer, callback: *const fn (QSctpServer) callconv(.c) void) void {
        qtc.QTcpServer_Connect_PendingConnectionAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSctpServer, callback: *const fn (QSctpServer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#dtor.QSctpServer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSctpServer `
    ///
    pub fn Delete(self: QSctpServer) void {
        qtc.QSctpServer_Delete(@ptrCast(self.ptr));
    }
};
