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
const QTcpSocket = @import("libqt6").QTcpSocket;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html)
pub const QTcpServer = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTcpServer,

    pub const _is_QTcpServer = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTcpServer object in C++ memory
    ///
    pub fn new() QTcpServer {
        return .{ .ptr = qtc.QTcpServer_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QTcpServer object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QTcpServer {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QTcpServer_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn metaObject(self: QTcpServer) QMetaObject {
        return .{ .ptr = qtc.QTcpServer_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QTcpServer, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTcpServer_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    pub fn superMetaObject(self: QTcpServer) QMetaObject {
        return .{ .ptr = qtc.QTcpServer_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QTcpServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTcpServer_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QTcpServer, callback: *const fn (QTcpServer, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTcpServer_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QTcpServer, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTcpServer_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QTcpServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTcpServer_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QTcpServer, callback: *const fn (QTcpServer, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTcpServer_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QTcpServer, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTcpServer_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTcpServer.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `listen` instead
    ///
    pub const Listen = listen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn listen(self: QTcpServer) bool {
        return qtc.QTcpServer_Listen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn close(self: QTcpServer) void {
        qtc.QTcpServer_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListening` instead
    ///
    pub const IsListening = isListening;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn isListening(self: QTcpServer) bool {
        return qtc.QTcpServer_IsListening(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxPendingConnections` instead
    ///
    pub const SetMaxPendingConnections = setMaxPendingConnections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` numConnections: i32 `
    ///
    pub fn setMaxPendingConnections(self: QTcpServer, numConnections: i32) void {
        qtc.QTcpServer_SetMaxPendingConnections(@ptrCast(self.ptr), @bitCast(numConnections));
    }

    /// ### DEPRECATED: Use `maxPendingConnections` instead
    ///
    pub const MaxPendingConnections = maxPendingConnections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn maxPendingConnections(self: QTcpServer) i32 {
        return qtc.QTcpServer_MaxPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setListenBacklogSize` instead
    ///
    pub const SetListenBacklogSize = setListenBacklogSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` size: i32 `
    ///
    pub fn setListenBacklogSize(self: QTcpServer, size: i32) void {
        qtc.QTcpServer_SetListenBacklogSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### DEPRECATED: Use `listenBacklogSize` instead
    ///
    pub const ListenBacklogSize = listenBacklogSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn listenBacklogSize(self: QTcpServer) i32 {
        return qtc.QTcpServer_ListenBacklogSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serverPort` instead
    ///
    pub const ServerPort = serverPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn serverPort(self: QTcpServer) u16 {
        return qtc.QTcpServer_ServerPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `serverAddress` instead
    ///
    pub const ServerAddress = serverAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn serverAddress(self: QTcpServer) QHostAddress {
        return .{ .ptr = qtc.QTcpServer_ServerAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `socketDescriptor` instead
    ///
    pub const SocketDescriptor = socketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn socketDescriptor(self: QTcpServer) isize {
        return qtc.QTcpServer_SocketDescriptor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSocketDescriptor` instead
    ///
    pub const SetSocketDescriptor = setSocketDescriptor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` _socketDescriptor: isize `
    ///
    pub fn setSocketDescriptor(self: QTcpServer, _socketDescriptor: isize) bool {
        return qtc.QTcpServer_SetSocketDescriptor(@ptrCast(self.ptr), @bitCast(_socketDescriptor));
    }

    /// ### DEPRECATED: Use `waitForNewConnection` instead
    ///
    pub const WaitForNewConnection = waitForNewConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn waitForNewConnection(self: QTcpServer) bool {
        return qtc.QTcpServer_WaitForNewConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasPendingConnections` instead
    ///
    pub const HasPendingConnections = hasPendingConnections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn hasPendingConnections(self: QTcpServer) bool {
        return qtc.QTcpServer_HasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasPendingConnections` instead
    ///
    pub const OnHasPendingConnections = onHasPendingConnections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasPendingConnections(self: QTcpServer, callback: *const fn () callconv(.c) bool) void {
        qtc.QTcpServer_OnHasPendingConnections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHasPendingConnections` instead
    ///
    pub const SuperHasPendingConnections = superHasPendingConnections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn superHasPendingConnections(self: QTcpServer) bool {
        return qtc.QTcpServer_SuperHasPendingConnections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `nextPendingConnection` instead
    ///
    pub const NextPendingConnection = nextPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn nextPendingConnection(self: QTcpServer) QTcpSocket {
        return .{ .ptr = qtc.QTcpServer_NextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onNextPendingConnection` instead
    ///
    pub const OnNextPendingConnection = onNextPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn () callconv(.c) QTcpSocket `
    ///
    pub fn onNextPendingConnection(self: QTcpServer, callback: *const fn () callconv(.c) QTcpSocket) void {
        qtc.QTcpServer_OnNextPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superNextPendingConnection` instead
    ///
    pub const SuperNextPendingConnection = superNextPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn superNextPendingConnection(self: QTcpServer) QTcpSocket {
        return .{ .ptr = qtc.QTcpServer_SuperNextPendingConnection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `serverError` instead
    ///
    pub const ServerError = serverError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ## Returns:
    ///
    /// ` qabstractsocket_enums.SocketError `
    ///
    pub fn serverError(self: QTcpServer) i32 {
        return qtc.QTcpServer_ServerError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QTcpServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTcpServer_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTcpServer.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pauseAccepting` instead
    ///
    pub const PauseAccepting = pauseAccepting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn pauseAccepting(self: QTcpServer) void {
        qtc.QTcpServer_PauseAccepting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resumeAccepting` instead
    ///
    pub const ResumeAccepting = resumeAccepting;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn resumeAccepting(self: QTcpServer) void {
        qtc.QTcpServer_ResumeAccepting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProxy` instead
    ///
    pub const SetProxy = setProxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` networkProxy: QNetworkProxy `
    ///
    pub fn setProxy(self: QTcpServer, networkProxy: anytype) void {
        comptime _ = @TypeOf(networkProxy)._is_QNetworkProxy;
        qtc.QTcpServer_SetProxy(@ptrCast(self.ptr), @ptrCast(networkProxy.ptr));
    }

    /// ### DEPRECATED: Use `proxy` instead
    ///
    pub const Proxy = proxy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn proxy(self: QTcpServer) QNetworkProxy {
        return .{ .ptr = qtc.QTcpServer_Proxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `incomingConnection` instead
    ///
    pub const IncomingConnection = incomingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#incomingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` handle: isize `
    ///
    pub fn incomingConnection(self: QTcpServer, handle: isize) void {
        qtc.QTcpServer_IncomingConnection(@ptrCast(self.ptr), @bitCast(handle));
    }

    /// ### DEPRECATED: Use `onIncomingConnection` instead
    ///
    pub const OnIncomingConnection = onIncomingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#incomingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer, handle: isize) callconv(.c) void `
    ///
    pub fn onIncomingConnection(self: QTcpServer, callback: *const fn (QTcpServer, isize) callconv(.c) void) void {
        qtc.QTcpServer_OnIncomingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIncomingConnection` instead
    ///
    pub const SuperIncomingConnection = superIncomingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#incomingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` handle: isize `
    ///
    pub fn superIncomingConnection(self: QTcpServer, handle: isize) void {
        qtc.QTcpServer_SuperIncomingConnection(@ptrCast(self.ptr), @bitCast(handle));
    }

    /// ### DEPRECATED: Use `addPendingConnection` instead
    ///
    pub const AddPendingConnection = addPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` socket: QTcpSocket `
    ///
    pub fn addPendingConnection(self: QTcpServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QTcpServer_AddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `onAddPendingConnection` instead
    ///
    pub const OnAddPendingConnection = onAddPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer, socket: QTcpSocket) callconv(.c) void `
    ///
    pub fn onAddPendingConnection(self: QTcpServer, callback: *const fn (QTcpServer, QTcpSocket) callconv(.c) void) void {
        qtc.QTcpServer_OnAddPendingConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddPendingConnection` instead
    ///
    pub const SuperAddPendingConnection = superAddPendingConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` socket: QTcpSocket `
    ///
    pub fn superAddPendingConnection(self: QTcpServer, socket: anytype) void {
        comptime _ = @TypeOf(socket)._is_QTcpSocket;
        qtc.QTcpServer_SuperAddPendingConnection(@ptrCast(self.ptr), @ptrCast(socket.ptr));
    }

    /// ### DEPRECATED: Use `newConnection` instead
    ///
    pub const NewConnection = newConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    pub fn newConnection(self: QTcpServer) void {
        qtc.QTcpServer_NewConnection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onNewConnection` instead
    ///
    pub const OnNewConnection = onNewConnection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer) callconv(.c) void `
    ///
    pub fn onNewConnection(self: QTcpServer, callback: *const fn (QTcpServer) callconv(.c) void) void {
        qtc.QTcpServer_Connect_NewConnection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `acceptError` instead
    ///
    pub const AcceptError = acceptError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` socketError: qabstractsocket_enums.SocketError `
    ///
    pub fn acceptError(self: QTcpServer, socketError: i32) void {
        qtc.QTcpServer_AcceptError(@ptrCast(self.ptr), @bitCast(socketError));
    }

    /// ### DEPRECATED: Use `onAcceptError` instead
    ///
    pub const OnAcceptError = onAcceptError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer, socketError: qabstractsocket_enums.SocketError) callconv(.c) void `
    ///
    pub fn onAcceptError(self: QTcpServer, callback: *const fn (QTcpServer, i32) callconv(.c) void) void {
        qtc.QTcpServer_Connect_AcceptError(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTcpServer.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTcpServer.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `listen1` instead
    ///
    pub const Listen1 = listen1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn listen1(self: QTcpServer, address: anytype) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QTcpServer_Listen1(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `listen2` instead
    ///
    pub const Listen2 = listen2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn listen2(self: QTcpServer, address: anytype, port: u16) bool {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        return qtc.QTcpServer_Listen2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `waitForNewConnection1` instead
    ///
    pub const WaitForNewConnection1 = waitForNewConnection1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` msec: i32 `
    ///
    pub fn waitForNewConnection1(self: QTcpServer, msec: i32) bool {
        return qtc.QTcpServer_WaitForNewConnection1(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `waitForNewConnection2` instead
    ///
    pub const WaitForNewConnection2 = waitForNewConnection2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTcpServer `
    ///
    /// ` msec: i32 `
    ///
    /// ` timedOut: *bool `
    ///
    pub fn waitForNewConnection2(self: QTcpServer, msec: i32, timedOut: *bool) bool {
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
    /// ` self: QTcpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QTcpServer, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QTcpServer.objectName: Memory allocation failed");
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
    /// ` self: QTcpServer `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QTcpServer, name: []const u8) void {
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
    /// ` self: QTcpServer `
    ///
    pub fn isWidgetType(self: QTcpServer) bool {
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
    /// ` self: QTcpServer `
    ///
    pub fn isWindowType(self: QTcpServer) bool {
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
    /// ` self: QTcpServer `
    ///
    pub fn isQuickItemType(self: QTcpServer) bool {
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
    /// ` self: QTcpServer `
    ///
    pub fn signalsBlocked(self: QTcpServer) bool {
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
    /// ` self: QTcpServer `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QTcpServer, b: bool) bool {
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
    /// ` self: QTcpServer `
    ///
    pub fn thread(self: QTcpServer) QThread {
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
    /// ` self: QTcpServer `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QTcpServer, _thread: anytype) bool {
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
    /// ` self: QTcpServer `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QTcpServer, interval: i32) i32 {
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
    /// ` self: QTcpServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QTcpServer, time: i64) i32 {
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
    /// ` self: QTcpServer `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QTcpServer, id: i32) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QTcpServer, id: i32) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QTcpServer, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QTcpServer.children: Memory allocation failed");
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
    /// ` self: QTcpServer `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QTcpServer, _parent: anytype) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QTcpServer, filterObj: anytype) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QTcpServer, obj: anytype) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QTcpServer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTcpServer `
    ///
    pub fn disconnect3(self: QTcpServer) bool {
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
    /// ` self: QTcpServer `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QTcpServer, receiver: anytype) bool {
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
    /// ` self: QTcpServer `
    ///
    pub fn dumpObjectTree(self: QTcpServer) void {
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
    /// ` self: QTcpServer `
    ///
    pub fn dumpObjectInfo(self: QTcpServer) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QTcpServer, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTcpServer `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QTcpServer, name: [:0]const u8) QVariant {
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
    /// ` self: QTcpServer `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QTcpServer, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QTcpServer.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QTcpServer.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTcpServer `
    ///
    pub fn bindingStorage(self: QTcpServer) QBindingStorage {
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
    /// ` self: QTcpServer `
    ///
    pub fn bindingStorage2(self: QTcpServer) QBindingStorage {
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
    /// ` self: QTcpServer `
    ///
    pub fn destroyed(self: QTcpServer) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QTcpServer, callback: *const fn (QTcpServer) callconv(.c) void) void {
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
    /// ` self: QTcpServer `
    ///
    pub fn parent(self: QTcpServer) QObject {
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
    /// ` self: QTcpServer `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QTcpServer, classname: [:0]const u8) bool {
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
    /// ` self: QTcpServer `
    ///
    pub fn deleteLater(self: QTcpServer) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QTcpServer, interval: i32, timerType: i32) i32 {
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
    /// ` self: QTcpServer `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QTcpServer, time: i64, timerType: i32) i32 {
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
    /// ` self: QTcpServer `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QTcpServer, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QTcpServer, signal: [:0]const u8) bool {
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QTcpServer, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QTcpServer, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTcpServer `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QTcpServer, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTcpServer `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QTcpServer, param1: anytype) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QTcpServer, callback: *const fn (QTcpServer, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QTcpServer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTcpServer_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QTcpServer, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTcpServer_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn (self: QTcpServer, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QTcpServer, callback: *const fn (QTcpServer, QEvent) callconv(.c) bool) void {
        qtc.QTcpServer_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QTcpServer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTcpServer_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QTcpServer, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QTcpServer_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn (self: QTcpServer, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QTcpServer, callback: *const fn (QTcpServer, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTcpServer_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QTcpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTcpServer_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QTcpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QTcpServer_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn (self: QTcpServer, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QTcpServer, callback: *const fn (QTcpServer, QTimerEvent) callconv(.c) void) void {
        qtc.QTcpServer_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QTcpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTcpServer_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QTcpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QTcpServer_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn (self: QTcpServer, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QTcpServer, callback: *const fn (QTcpServer, QChildEvent) callconv(.c) void) void {
        qtc.QTcpServer_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QTcpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTcpServer_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QTcpServer, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QTcpServer_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn (self: QTcpServer, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QTcpServer, callback: *const fn (QTcpServer, QEvent) callconv(.c) void) void {
        qtc.QTcpServer_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QTcpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTcpServer_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QTcpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTcpServer_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn (self: QTcpServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QTcpServer, callback: *const fn (QTcpServer, QMetaMethod) callconv(.c) void) void {
        qtc.QTcpServer_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QTcpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTcpServer_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QTcpServer, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTcpServer_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn (self: QTcpServer, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QTcpServer, callback: *const fn (QTcpServer, QMetaMethod) callconv(.c) void) void {
        qtc.QTcpServer_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    pub fn sender(self: QTcpServer) QObject {
        return .{ .ptr = qtc.QTcpServer_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTcpServer `
    ///
    pub fn superSender(self: QTcpServer) QObject {
        return .{ .ptr = qtc.QTcpServer_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QTcpServer, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTcpServer_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    pub fn senderSignalIndex(self: QTcpServer) i32 {
        return qtc.QTcpServer_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTcpServer `
    ///
    pub fn superSenderSignalIndex(self: QTcpServer) i32 {
        return qtc.QTcpServer_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QTcpServer, callback: *const fn () callconv(.c) i32) void {
        qtc.QTcpServer_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QTcpServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTcpServer_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QTcpServer, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTcpServer_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn (self: QTcpServer, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QTcpServer, callback: *const fn (QTcpServer, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTcpServer_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QTcpServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTcpServer_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTcpServer `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QTcpServer, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTcpServer_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTcpServer`
    ///
    /// ` callback: *const fn (self: QTcpServer, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QTcpServer, callback: *const fn (QTcpServer, QMetaMethod) callconv(.c) bool) void {
        qtc.QTcpServer_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onPendingConnectionAvailable` instead
    ///
    pub const OnPendingConnectionAvailable = onPendingConnectionAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer) callconv(.c) void `
    ///
    pub fn onPendingConnectionAvailable(self: QTcpServer, callback: *const fn (QTcpServer) callconv(.c) void) void {
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
    /// ` self: QTcpServer `
    ///
    /// ` callback: *const fn (self: QTcpServer, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QTcpServer, callback: *const fn (QTcpServer, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtcpserver.html#dtor.QTcpServer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTcpServer `
    ///
    pub fn delete(self: QTcpServer) void {
        qtc.QTcpServer_Delete(@ptrCast(self.ptr));
    }
};
