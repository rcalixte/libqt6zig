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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSctpServer object in C++ memory
    ///
    pub fn new() QSctpServer {
        return .{ .ptr = qtc.QSctpServer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSctpServer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QSctpServer {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSctpServer_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn metaObject(self: QSctpServer) QMetaObject {
        return .{ .ptr = qtc.QSctpServer_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSctpServer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSctpServer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    pub fn superMetaObject(self: QSctpServer) QMetaObject {
        return .{ .ptr = qtc.QSctpServer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSctpServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSctpServer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSctpServer, callback: *const fn (QSctpServer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSctpServer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSctpServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSctpServer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QSctpServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSctpServer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSctpServer, callback: *const fn (QSctpServer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSctpServer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QSctpServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSctpServer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSctpServer.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMaximumChannelCount` instead
    ///
    pub const SetMaximumChannelCount = setMaximumChannelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#setMaximumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` count: i32 `
    ///
    pub fn setMaximumChannelCount(self: QSctpServer, count: i32) void {
        qtc.QSctpServer_SetMaximumChannelCount(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `maximumChannelCount` instead
    ///
    pub const MaximumChannelCount = maximumChannelCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#maximumChannelCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn maximumChannelCount(self: QSctpServer) i32 {
        return qtc.QSctpServer_MaximumChannelCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextPendingDatagramConnection` instead
    ///
    pub const NextPendingDatagramConnection = nextPendingDatagramConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#nextPendingDatagramConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn nextPendingDatagramConnection(self: QSctpServer) QSctpSocket {
        return .{ .ptr = qtc.QSctpServer_NextPendingDatagramConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `incomingConnection` instead
    ///
    pub const IncomingConnection = incomingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` handle: isize `
    ///
    pub fn incomingConnection(self: QSctpServer, handle: isize) void {
        qtc.QSctpServer_IncomingConnection(@ptrCast(self.ptr), @bitCast(handle));
    }

    /// ### DEPRECATED: Use `onIncomingConnection` instead
    ///
    pub const OnIncomingConnection = onIncomingConnection;

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
    pub fn onIncomingConnection(self: QSctpServer, callback: *const fn (QSctpServer, isize) callconv(.c) void) void {
        qtc.QSctpServer_OnIncomingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIncomingConnection` instead
    ///
    pub const SuperIncomingConnection = superIncomingConnection;

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
    pub fn superIncomingConnection(self: QSctpServer, handle: isize) void {
        qtc.QSctpServer_SuperIncomingConnection(@ptrCast(self.ptr), @bitCast(handle));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSctpServer.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSctpServer.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `listen` instead
    ///
    pub const Listen = listen;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn listen(self: QSctpServer) bool {
        return qtc.QTcpServer_Listen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn close(self: QSctpServer) void {
        qtc.QTcpServer_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListening` instead
    ///
    pub const IsListening = isListening;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn isListening(self: QSctpServer) bool {
        return qtc.QTcpServer_IsListening(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxPendingConnections` instead
    ///
    pub const SetMaxPendingConnections = setMaxPendingConnections;

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
    pub fn setMaxPendingConnections(self: QSctpServer, numConnections: i32) void {
        qtc.QTcpServer_SetMaxPendingConnections(@ptrCast(self.ptr), @bitCast(numConnections));
    }

    /// ### DEPRECATED: Use `maxPendingConnections` instead
    ///
    pub const MaxPendingConnections = maxPendingConnections;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn maxPendingConnections(self: QSctpServer) i32 {
        return qtc.QTcpServer_MaxPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setListenBacklogSize` instead
    ///
    pub const SetListenBacklogSize = setListenBacklogSize;

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
    pub fn setListenBacklogSize(self: QSctpServer, size: i32) void {
        qtc.QTcpServer_SetListenBacklogSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `listenBacklogSize` instead
    ///
    pub const ListenBacklogSize = listenBacklogSize;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn listenBacklogSize(self: QSctpServer) i32 {
        return qtc.QTcpServer_ListenBacklogSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serverPort` instead
    ///
    pub const ServerPort = serverPort;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn serverPort(self: QSctpServer) u16 {
        return qtc.QTcpServer_ServerPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serverAddress` instead
    ///
    pub const ServerAddress = serverAddress;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn serverAddress(self: QSctpServer) QHostAddress {
        return .{ .ptr = qtc.QTcpServer_ServerAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `socketDescriptor` instead
    ///
    pub const SocketDescriptor = socketDescriptor;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn socketDescriptor(self: QSctpServer) isize {
        return qtc.QTcpServer_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSocketDescriptor` instead
    ///
    pub const SetSocketDescriptor = setSocketDescriptor;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    /// ` _socketDescriptor: isize `
    ///
    pub fn setSocketDescriptor(self: QSctpServer, _socketDescriptor: isize) bool {
        return qtc.QTcpServer_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(_socketDescriptor));
    }

    /// ### DEPRECATED: Use `waitForNewConnection` instead
    ///
    pub const WaitForNewConnection = waitForNewConnection;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn waitForNewConnection(self: QSctpServer) bool {
        return qtc.QTcpServer_WaitForNewConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serverError` instead
    ///
    pub const ServerError = serverError;

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
    pub fn serverError(self: QSctpServer) i32 {
        return qtc.QTcpServer_ServerError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

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
    pub fn errorString(self: QSctpServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTcpServer_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSctpServer.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pauseAccepting` instead
    ///
    pub const PauseAccepting = pauseAccepting;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn pauseAccepting(self: QSctpServer) void {
        qtc.QTcpServer_PauseAccepting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resumeAccepting` instead
    ///
    pub const ResumeAccepting = resumeAccepting;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn resumeAccepting(self: QSctpServer) void {
        qtc.QTcpServer_ResumeAccepting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProxy` instead
    ///
    pub const SetProxy = setProxy;

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
    pub fn setProxy(self: QSctpServer, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QTcpServer_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// ### DEPRECATED: Use `proxy` instead
    ///
    pub const Proxy = proxy;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn proxy(self: QSctpServer) QNetworkProxy {
        return .{ .ptr = qtc.QTcpServer_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `newConnection` instead
    ///
    pub const NewConnection = newConnection;

    /// Inherited from QTcpServer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSctpServer `
    ///
    pub fn newConnection(self: QSctpServer) void {
        qtc.QTcpServer_NewConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNewConnection` instead
    ///
    pub const OnNewConnection = onNewConnection;

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
    pub fn onNewConnection(self: QSctpServer, callback: *const fn (QSctpServer) callconv(.c) void) void {
        qtc.QTcpServer_Connect_NewConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `acceptError` instead
    ///
    pub const AcceptError = acceptError;

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
    pub fn acceptError(self: QSctpServer, socketError: i32) void {
        qtc.QTcpServer_AcceptError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### DEPRECATED: Use `onAcceptError` instead
    ///
    pub const OnAcceptError = onAcceptError;

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
    pub fn onAcceptError(self: QSctpServer, callback: *const fn (QSctpServer, i32) callconv(.c) void) void {
        qtc.QTcpServer_Connect_AcceptError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `listen1` instead
    ///
    pub const Listen1 = listen1;

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
    pub fn listen1(self: QSctpServer, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QTcpServer_Listen1(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `listen2` instead
    ///
    pub const Listen2 = listen2;

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
    pub fn listen2(self: QSctpServer, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QTcpServer_Listen2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `waitForNewConnection1` instead
    ///
    pub const WaitForNewConnection1 = waitForNewConnection1;

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
    pub fn waitForNewConnection1(self: QSctpServer, msec: i32) bool {
        return qtc.QTcpServer_WaitForNewConnection1(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `waitForNewConnection2` instead
    ///
    pub const WaitForNewConnection2 = waitForNewConnection2;

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
    pub fn waitForNewConnection2(self: QSctpServer, msec: i32, timedOut: *bool) bool {
        return qtc.QTcpServer_WaitForNewConnection2(@ptrCast(self.ptr), @bitCast(msec), @ptrCast(timedOut));
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
    /// ` self: QSctpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSctpServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSctpServer.objectName: Memory allocation failed");
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
    /// ` self: QSctpServer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSctpServer, name: []const u8) void {
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
    /// ` self: QSctpServer `
    ///
    pub fn isWidgetType(self: QSctpServer) bool {
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
    /// ` self: QSctpServer `
    ///
    pub fn isWindowType(self: QSctpServer) bool {
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
    /// ` self: QSctpServer `
    ///
    pub fn isQuickItemType(self: QSctpServer) bool {
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
    /// ` self: QSctpServer `
    ///
    pub fn signalsBlocked(self: QSctpServer) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSctpServer, b: bool) bool {
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
    /// ` self: QSctpServer `
    ///
    pub fn thread(self: QSctpServer) QThread {
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
    /// ` self: QSctpServer `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSctpServer, _thread: anytype) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSctpServer, interval: i32) i32 {
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
    /// ` self: QSctpServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSctpServer, time: i64) i32 {
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
    /// ` self: QSctpServer `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSctpServer, id: i32) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSctpServer, id: i32) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSctpServer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSctpServer.children: Memory allocation failed");
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
    /// ` self: QSctpServer `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSctpServer, _parent: anytype) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSctpServer, filterObj: anytype) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSctpServer, obj: anytype) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSctpServer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSctpServer `
    ///
    pub fn disconnect3(self: QSctpServer) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSctpServer, receiver: anytype) bool {
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
    /// ` self: QSctpServer `
    ///
    pub fn dumpObjectTree(self: QSctpServer) void {
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
    /// ` self: QSctpServer `
    ///
    pub fn dumpObjectInfo(self: QSctpServer) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSctpServer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSctpServer, name: [:0]const u8) QVariant {
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
    /// ` self: QSctpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSctpServer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSctpServer.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSctpServer.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSctpServer `
    ///
    pub fn bindingStorage(self: QSctpServer) QBindingStorage {
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
    /// ` self: QSctpServer `
    ///
    pub fn bindingStorage2(self: QSctpServer) QBindingStorage {
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
    /// ` self: QSctpServer `
    ///
    pub fn destroyed(self: QSctpServer) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSctpServer, callback: *const fn (QSctpServer) callconv(.c) void) void {
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
    /// ` self: QSctpServer `
    ///
    pub fn parent(self: QSctpServer) QObject {
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
    /// ` self: QSctpServer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSctpServer, classname: [:0]const u8) bool {
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
    /// ` self: QSctpServer `
    ///
    pub fn deleteLater(self: QSctpServer) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSctpServer, interval: i32, timerType: i32) i32 {
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
    /// ` self: QSctpServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSctpServer, time: i64, timerType: i32) i32 {
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
    /// ` self: QSctpServer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSctpServer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSctpServer, signal: [:0]const u8) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSctpServer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSctpServer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSctpServer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSctpServer `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSctpServer, param1: anytype) void {
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
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSctpServer, callback: *const fn (QSctpServer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasPendingConnections` instead
    ///
    pub const HasPendingConnections = hasPendingConnections;

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
    pub fn hasPendingConnections(self: QSctpServer) bool {
        return qtc.QSctpServer_HasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasPendingConnections` instead
    ///
    pub const SuperHasPendingConnections = superHasPendingConnections;

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
    pub fn superHasPendingConnections(self: QSctpServer) bool {
        return qtc.QSctpServer_SuperHasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasPendingConnections` instead
    ///
    pub const OnHasPendingConnections = onHasPendingConnections;

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
    pub fn onHasPendingConnections(self: QSctpServer, callback: *const fn () callconv(.c) bool) void {
        qtc.QSctpServer_OnHasPendingConnections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nextPendingConnection` instead
    ///
    pub const NextPendingConnection = nextPendingConnection;

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
    pub fn nextPendingConnection(self: QSctpServer) QTcpSocket {
        return .{ .ptr = qtc.QSctpServer_NextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superNextPendingConnection` instead
    ///
    pub const SuperNextPendingConnection = superNextPendingConnection;

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
    pub fn superNextPendingConnection(self: QSctpServer) QTcpSocket {
        return .{ .ptr = qtc.QSctpServer_SuperNextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onNextPendingConnection` instead
    ///
    pub const OnNextPendingConnection = onNextPendingConnection;

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
    pub fn onNextPendingConnection(self: QSctpServer, callback: *const fn () callconv(.c) QTcpSocket) void {
        qtc.QSctpServer_OnNextPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSctpServer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSctpServer_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSctpServer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSctpServer_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QSctpServer, callback: *const fn (QSctpServer, QEvent) callconv(.c) bool) void {
        qtc.QSctpServer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSctpServer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSctpServer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSctpServer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSctpServer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSctpServer, callback: *const fn (QSctpServer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSctpServer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSctpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSctpServer_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSctpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSctpServer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSctpServer, callback: *const fn (QSctpServer, QTimerEvent) callconv(.c) void) void {
        qtc.QSctpServer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSctpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSctpServer_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSctpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSctpServer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSctpServer, callback: *const fn (QSctpServer, QChildEvent) callconv(.c) void) void {
        qtc.QSctpServer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSctpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSctpServer_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSctpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSctpServer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSctpServer, callback: *const fn (QSctpServer, QEvent) callconv(.c) void) void {
        qtc.QSctpServer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSctpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSctpServer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSctpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSctpServer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSctpServer, callback: *const fn (QSctpServer, QMetaMethod) callconv(.c) void) void {
        qtc.QSctpServer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSctpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSctpServer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSctpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSctpServer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSctpServer, callback: *const fn (QSctpServer, QMetaMethod) callconv(.c) void) void {
        qtc.QSctpServer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addPendingConnection` instead
    ///
    pub const AddPendingConnection = addPendingConnection;

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
    pub fn addPendingConnection(self: QSctpServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QSctpServer_AddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `superAddPendingConnection` instead
    ///
    pub const SuperAddPendingConnection = superAddPendingConnection;

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
    pub fn superAddPendingConnection(self: QSctpServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QSctpServer_SuperAddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `onAddPendingConnection` instead
    ///
    pub const OnAddPendingConnection = onAddPendingConnection;

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
    pub fn onAddPendingConnection(self: QSctpServer, callback: *const fn (QSctpServer, QTcpSocket) callconv(.c) void) void {
        qtc.QSctpServer_OnAddPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    pub fn sender(self: QSctpServer) QObject {
        return .{ .ptr = qtc.QSctpServer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSctpServer `
    ///
    pub fn superSender(self: QSctpServer) QObject {
        return .{ .ptr = qtc.QSctpServer_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSctpServer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSctpServer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    pub fn senderSignalIndex(self: QSctpServer) i32 {
        return qtc.QSctpServer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSctpServer `
    ///
    pub fn superSenderSignalIndex(self: QSctpServer) i32 {
        return qtc.QSctpServer_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSctpServer, callback: *const fn () callconv(.c) i32) void {
        qtc.QSctpServer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSctpServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSctpServer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSctpServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSctpServer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSctpServer, callback: *const fn (QSctpServer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSctpServer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSctpServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSctpServer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSctpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSctpServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSctpServer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSctpServer`
    ///
    /// ` callback: *const fn (self: QSctpServer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSctpServer, callback: *const fn (QSctpServer, QMetaMethod) callconv(.c) bool) void {
        qtc.QSctpServer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onPendingConnectionAvailable` instead
    ///
    pub const OnPendingConnectionAvailable = onPendingConnectionAvailable;

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
    pub fn onPendingConnectionAvailable(self: QSctpServer, callback: *const fn (QSctpServer) callconv(.c) void) void {
        qtc.QTcpServer_Connect_PendingConnectionAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSctpServer `
    ///
    /// ` callback: *const fn (self: QSctpServer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSctpServer, callback: *const fn (QSctpServer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsctpserver.html#dtor.QSctpServer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSctpServer `
    ///
    pub fn delete(self: QSctpServer) void {
        qtc.QSctpServer_Delete(@ptrCast(self.ptr));
    }
};
