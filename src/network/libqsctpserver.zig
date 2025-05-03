const C = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsctpserver.html
pub const qsctpserver = struct {
    /// New constructs a new QSctpServer object.
    ///
    ///
    pub fn New() ?*C.QSctpServer {
        return C.QSctpServer_new();
    }

    /// New2 constructs a new QSctpServer object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QSctpServer {
        return C.QSctpServer_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QSctpServer_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QSctpServer, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QSctpServer_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QSctpServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSctpServer_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QSctpServer_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSctpServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QSctpServer_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QSctpServer_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#setMaximumChannelCount)
    ///
    /// ``` self: ?*C.QSctpServer, count: i32 ```
    pub fn SetMaximumChannelCount(self: ?*anyopaque, count: i32) void {
        C.QSctpServer_SetMaximumChannelCount(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#maximumChannelCount)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn MaximumChannelCount(self: ?*anyopaque) i32 {
        return C.QSctpServer_MaximumChannelCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#nextPendingDatagramConnection)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn NextPendingDatagramConnection(self: ?*anyopaque) ?*C.QSctpSocket {
        return C.QSctpServer_NextPendingDatagramConnection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
    ///
    /// ``` self: ?*C.QSctpServer, handle: isize ```
    pub fn IncomingConnection(self: ?*anyopaque, handle: isize) void {
        C.QSctpServer_IncomingConnection(@ptrCast(self), @intCast(handle));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, isize) callconv(.c) void ```
    pub fn OnIncomingConnection(self: ?*anyopaque, slot: fn (?*anyopaque, isize) callconv(.c) void) void {
        C.QSctpServer_OnIncomingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QSctpServer, handle: isize ```
    pub fn QBaseIncomingConnection(self: ?*anyopaque, handle: isize) void {
        C.QSctpServer_QBaseIncomingConnection(@ptrCast(self), @intCast(handle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSctpServer_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QSctpServer_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn Listen(self: ?*anyopaque) bool {
        return C.QTcpServer_Listen(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn Close(self: ?*anyopaque) void {
        C.QTcpServer_Close(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn IsListening(self: ?*anyopaque) bool {
        return C.QTcpServer_IsListening(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
    ///
    /// ``` self: ?*C.QSctpServer, numConnections: i32 ```
    pub fn SetMaxPendingConnections(self: ?*anyopaque, numConnections: i32) void {
        C.QTcpServer_SetMaxPendingConnections(@ptrCast(self), @intCast(numConnections));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn MaxPendingConnections(self: ?*anyopaque) i32 {
        return C.QTcpServer_MaxPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
    ///
    /// ``` self: ?*C.QSctpServer, size: i32 ```
    pub fn SetListenBacklogSize(self: ?*anyopaque, size: i32) void {
        C.QTcpServer_SetListenBacklogSize(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn ListenBacklogSize(self: ?*anyopaque) i32 {
        return C.QTcpServer_ListenBacklogSize(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn ServerPort(self: ?*anyopaque) u16 {
        return C.QTcpServer_ServerPort(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn ServerAddress(self: ?*anyopaque) ?*C.QHostAddress {
        return C.QTcpServer_ServerAddress(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return C.QTcpServer_SocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
    ///
    /// ``` self: ?*C.QSctpServer, socketDescriptor: isize ```
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize) bool {
        return C.QTcpServer_SetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn WaitForNewConnection(self: ?*anyopaque) bool {
        return C.QTcpServer_WaitForNewConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn ServerError(self: ?*anyopaque) i64 {
        return C.QTcpServer_ServerError(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
    ///
    /// ``` self: ?*C.QSctpServer, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QTcpServer_ErrorString(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn PauseAccepting(self: ?*anyopaque) void {
        C.QTcpServer_PauseAccepting(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn ResumeAccepting(self: ?*anyopaque) void {
        C.QTcpServer_ResumeAccepting(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
    ///
    /// ``` self: ?*C.QSctpServer, networkProxy: ?*C.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        C.QTcpServer_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn Proxy(self: ?*anyopaque) ?*C.QNetworkProxy {
        return C.QTcpServer_Proxy(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn NewConnection(self: ?*anyopaque) void {
        C.QTcpServer_NewConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// ``` self: ?*C.QTcpServer, slot: fn (?*C.QTcpServer) callconv(.c) void ```
    pub fn OnNewConnection(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QTcpServer_Connect_NewConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ``` self: ?*C.QSctpServer, socketError: qabstractsocket_enums.SocketError ```
    pub fn AcceptError(self: ?*anyopaque, socketError: i64) void {
        C.QTcpServer_AcceptError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QTcpServer
    ///
    /// ``` self: ?*C.QTcpServer, slot: fn (?*C.QTcpServer, qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnAcceptError(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QTcpServer_Connect_AcceptError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: ?*C.QSctpServer, address: ?*C.QHostAddress ```
    pub fn Listen1(self: ?*anyopaque, address: ?*anyopaque) bool {
        return C.QTcpServer_Listen1(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: ?*C.QSctpServer, address: ?*C.QHostAddress, port: u16 ```
    pub fn Listen2(self: ?*anyopaque, address: ?*anyopaque, port: u16) bool {
        return C.QTcpServer_Listen2(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: ?*C.QSctpServer, msec: i32 ```
    pub fn WaitForNewConnection1(self: ?*anyopaque, msec: i32) bool {
        return C.QTcpServer_WaitForNewConnection1(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: ?*C.QSctpServer, msec: i32, timedOut: ?*bool ```
    pub fn WaitForNewConnection2(self: ?*anyopaque, msec: i32, timedOut: ?*anyopaque) bool {
        return C.QTcpServer_WaitForNewConnection2(@ptrCast(self), @intCast(msec), @ptrCast(timedOut));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QSctpServer, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QSctpServer, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QSctpServer, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QSctpServer, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSctpServer, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QSctpServer, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QSctpServer, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QSctpServer, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QSctpServer, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QSctpServer, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QSctpServer, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QSctpServer, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QSctpServer, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QSctpServer, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QSctpServer, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QSctpServer, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QSctpServer, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QSctpServer, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn HasPendingConnections(self: ?*anyopaque) bool {
        return C.QSctpServer_HasPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn QBaseHasPendingConnections(self: ?*anyopaque) bool {
        return C.QSctpServer_QBaseHasPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn () callconv(.c) bool ```
    pub fn OnHasPendingConnections(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        C.QSctpServer_OnHasPendingConnections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn NextPendingConnection(self: ?*anyopaque) ?*C.QTcpSocket {
        return C.QSctpServer_NextPendingConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn QBaseNextPendingConnection(self: ?*anyopaque) ?*C.QTcpSocket {
        return C.QSctpServer_QBaseNextPendingConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn () callconv(.c) ?*C.QTcpSocket ```
    pub fn OnNextPendingConnection(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QTcpSocket) void {
        C.QSctpServer_OnNextPendingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSctpServer_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSctpServer_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSctpServer_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSctpServer_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QSctpServer_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSctpServer_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSctpServer_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSctpServer_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSctpServer_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSctpServer_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSctpServer_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSctpServer_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSctpServer_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QSctpServer_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSctpServer_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSctpServer_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSctpServer_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSctpServer_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSctpServer_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QSctpServer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSctpServer_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, socket: ?*C.QTcpSocket ```
    pub fn AddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        C.QSctpServer_AddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, socket: ?*C.QTcpSocket ```
    pub fn QBaseAddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        C.QSctpServer_QBaseAddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Inherited from QTcpServer
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, ?*C.QTcpSocket) callconv(.c) void ```
    pub fn OnAddPendingConnection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QSctpServer_OnAddPendingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QSctpServer_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QSctpServer_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QSctpServer_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSctpServer_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QSctpServer_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QSctpServer_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSctpServer_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QSctpServer_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QSctpServer_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSctpServer_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QSctpServer_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QSctpServer, slot: fn (?*C.QSctpServer, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QSctpServer_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QSctpServer ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QSctpServer_Delete(@ptrCast(self));
    }
};
