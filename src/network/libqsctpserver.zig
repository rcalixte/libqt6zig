const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qabstractsocket_enums = @import("libqabstractsocket.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qsctpserver.html
pub const qsctpserver = struct {
    /// New constructs a new QSctpServer object.
    ///
    ///
    pub fn New() QtC.QSctpServer {
        return qtc.QSctpServer_new();
    }

    /// New2 constructs a new QSctpServer object.
    ///
    /// ``` parent: QtC.QObject ```
    pub fn New2(parent: ?*anyopaque) QtC.QSctpServer {
        return qtc.QSctpServer_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QSctpServer_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QSctpServer, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSctpServer_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QSctpServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSctpServer_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.QSctpServer_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.QSctpServer, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QSctpServer_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QSctpServer_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#setMaximumChannelCount)
    ///
    /// ``` self: QtC.QSctpServer, count: i32 ```
    pub fn SetMaximumChannelCount(self: ?*anyopaque, count: i32) void {
        qtc.QSctpServer_SetMaximumChannelCount(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#maximumChannelCount)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn MaximumChannelCount(self: ?*anyopaque) i32 {
        return qtc.QSctpServer_MaximumChannelCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#nextPendingDatagramConnection)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn NextPendingDatagramConnection(self: ?*anyopaque) QtC.QSctpSocket {
        return qtc.QSctpServer_NextPendingDatagramConnection(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
    ///
    /// ``` self: QtC.QSctpServer, handle: isize ```
    pub fn IncomingConnection(self: ?*anyopaque, handle: isize) void {
        qtc.QSctpServer_IncomingConnection(@ptrCast(self), @intCast(handle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, handle: isize) callconv(.c) void ```
    pub fn OnIncomingConnection(self: ?*anyopaque, slot: fn (?*anyopaque, isize) callconv(.c) void) void {
        qtc.QSctpServer_OnIncomingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#incomingConnection)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.QSctpServer, handle: isize ```
    pub fn QBaseIncomingConnection(self: ?*anyopaque, handle: isize) void {
        qtc.QSctpServer_QBaseIncomingConnection(@ptrCast(self), @intCast(handle));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSctpServer_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QSctpServer_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn Listen(self: ?*anyopaque) bool {
        return qtc.QTcpServer_Listen(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn Close(self: ?*anyopaque) void {
        qtc.QTcpServer_Close(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn IsListening(self: ?*anyopaque) bool {
        return qtc.QTcpServer_IsListening(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
    ///
    /// ``` self: QtC.QSctpServer, numConnections: i32 ```
    pub fn SetMaxPendingConnections(self: ?*anyopaque, numConnections: i32) void {
        qtc.QTcpServer_SetMaxPendingConnections(@ptrCast(self), @intCast(numConnections));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn MaxPendingConnections(self: ?*anyopaque) i32 {
        return qtc.QTcpServer_MaxPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
    ///
    /// ``` self: QtC.QSctpServer, size: i32 ```
    pub fn SetListenBacklogSize(self: ?*anyopaque, size: i32) void {
        qtc.QTcpServer_SetListenBacklogSize(@ptrCast(self), @intCast(size));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn ListenBacklogSize(self: ?*anyopaque) i32 {
        return qtc.QTcpServer_ListenBacklogSize(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn ServerPort(self: ?*anyopaque) u16 {
        return qtc.QTcpServer_ServerPort(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn ServerAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QTcpServer_ServerAddress(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn SocketDescriptor(self: ?*anyopaque) isize {
        return qtc.QTcpServer_SocketDescriptor(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
    ///
    /// ``` self: QtC.QSctpServer, socketDescriptor: isize ```
    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize) bool {
        return qtc.QTcpServer_SetSocketDescriptor(@ptrCast(self), @intCast(socketDescriptor));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn WaitForNewConnection(self: ?*anyopaque) bool {
        return qtc.QTcpServer_WaitForNewConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn ServerError(self: ?*anyopaque) i64 {
        return qtc.QTcpServer_ServerError(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
    ///
    /// ``` self: QtC.QSctpServer, allocator: std.mem.Allocator ```
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QTcpServer_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn PauseAccepting(self: ?*anyopaque) void {
        qtc.QTcpServer_PauseAccepting(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn ResumeAccepting(self: ?*anyopaque) void {
        qtc.QTcpServer_ResumeAccepting(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
    ///
    /// ``` self: QtC.QSctpServer, networkProxy: QtC.QNetworkProxy ```
    pub fn SetProxy(self: ?*anyopaque, networkProxy: ?*anyopaque) void {
        qtc.QTcpServer_SetProxy(@ptrCast(self), @ptrCast(networkProxy));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn Proxy(self: ?*anyopaque) QtC.QNetworkProxy {
        return qtc.QTcpServer_Proxy(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn NewConnection(self: ?*anyopaque) void {
        qtc.QTcpServer_NewConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
    ///
    /// ``` self: QtC.QTcpServer, slot: fn (self: QtC.QTcpServer) callconv(.c) void ```
    pub fn OnNewConnection(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTcpServer_Connect_NewConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ``` self: QtC.QSctpServer, socketError: qabstractsocket_enums.SocketError ```
    pub fn AcceptError(self: ?*anyopaque, socketError: i64) void {
        qtc.QTcpServer_AcceptError(@ptrCast(self), @intCast(socketError));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
    ///
    /// ``` self: QtC.QTcpServer, slot: fn (self: QtC.QTcpServer, socketError: qabstractsocket_enums.SocketError) callconv(.c) void ```
    pub fn OnAcceptError(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QTcpServer_Connect_AcceptError(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: QtC.QSctpServer, address: QtC.QHostAddress ```
    pub fn Listen1(self: ?*anyopaque, address: ?*anyopaque) bool {
        return qtc.QTcpServer_Listen1(@ptrCast(self), @ptrCast(address));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
    ///
    /// ``` self: QtC.QSctpServer, address: QtC.QHostAddress, port: u16 ```
    pub fn Listen2(self: ?*anyopaque, address: ?*anyopaque, port: u16) bool {
        return qtc.QTcpServer_Listen2(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: QtC.QSctpServer, msec: i32 ```
    pub fn WaitForNewConnection1(self: ?*anyopaque, msec: i32) bool {
        return qtc.QTcpServer_WaitForNewConnection1(@ptrCast(self), @intCast(msec));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
    ///
    /// ``` self: QtC.QSctpServer, msec: i32, timedOut: bool ```
    pub fn WaitForNewConnection2(self: ?*anyopaque, msec: i32, timedOut: ?*anyopaque) bool {
        return qtc.QTcpServer_WaitForNewConnection2(@ptrCast(self), @intCast(msec), @ptrCast(timedOut));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QSctpServer, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsctpserver.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QSctpServer, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.struct_libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QSctpServer, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSctpServer, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSctpServer, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSctpServer, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QSctpServer, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QSctpServer, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.struct_libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qsctpserver.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QSctpServer, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QSctpServer, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QSctpServer, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSctpServer, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QSctpServer, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QSctpServer, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QSctpServer, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.struct_libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QSctpServer, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QSctpServer, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QSctpServer, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QSctpServer, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QSctpServer, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QObject, slot: fn (self: QtC.QObject, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn HasPendingConnections(self: ?*anyopaque) bool {
        return qtc.QSctpServer_HasPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn QBaseHasPendingConnections(self: ?*anyopaque) bool {
        return qtc.QSctpServer_QBaseHasPendingConnections(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn () callconv(.c) bool ```
    pub fn OnHasPendingConnections(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.QSctpServer_OnHasPendingConnections(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn NextPendingConnection(self: ?*anyopaque) QtC.QTcpSocket {
        return qtc.QSctpServer_NextPendingConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn QBaseNextPendingConnection(self: ?*anyopaque) QtC.QTcpSocket {
        return qtc.QSctpServer_QBaseNextPendingConnection(@ptrCast(self));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn () callconv(.c) QtC.QTcpSocket ```
    pub fn OnNextPendingConnection(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QTcpSocket) void {
        qtc.QSctpServer_OnNextPendingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSctpServer_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSctpServer_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSctpServer_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSctpServer_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSctpServer_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSctpServer_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpServer_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpServer_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpServer_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpServer_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpServer_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpServer_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpServer_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QSctpServer_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpServer_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSctpServer_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSctpServer_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpServer_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSctpServer_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QSctpServer_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpServer_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, socket: QtC.QTcpSocket ```
    pub fn AddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QSctpServer_AddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, socket: QtC.QTcpSocket ```
    pub fn QBaseAddPendingConnection(self: ?*anyopaque, socket: ?*anyopaque) void {
        qtc.QSctpServer_QBaseAddPendingConnection(@ptrCast(self), @ptrCast(socket));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, socket: QtC.QTcpSocket) callconv(.c) void ```
    pub fn OnAddPendingConnection(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QSctpServer_OnAddPendingConnection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSctpServer_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QSctpServer_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.QSctpServer_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSctpServer_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QSctpServer_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.QSctpServer_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSctpServer_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSctpServer_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, signal: []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        qtc.QSctpServer_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSctpServer_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QSctpServer_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QSctpServer, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSctpServer_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QTcpServer
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pendingConnectionAvailable)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QTcpServer) callconv(.c) void ```
    pub fn OnPendingConnectionAvailable(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QTcpServer_Connect_PendingConnectionAvailable(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QSctpServer, slot: fn (self: QtC.QObject, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qsctpserver.html#dtor.QSctpServer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QSctpServer ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSctpServer_Delete(@ptrCast(self));
    }
};
