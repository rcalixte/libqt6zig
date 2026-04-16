const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QDBusError = @import("libqt6").QDBusError;
const QDBusMessage = @import("libqt6").QDBusMessage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html)
pub const QDBusPendingCall = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusPendingCall,

    pub const _is_QDBusPendingCall = {};

    /// New constructs a new QDBusPendingCall object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusPendingCall `
    ///
    pub fn New(other: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        return .{ .ptr = qtc.QDBusPendingCall_new(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    /// ` other: QDBusPendingCall `
    ///
    pub fn OperatorAssign(self: QDBusPendingCall, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        qtc.QDBusPendingCall_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    /// ` other: QDBusPendingCall `
    ///
    pub fn Swap(self: QDBusPendingCall, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        qtc.QDBusPendingCall_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn IsFinished(self: QDBusPendingCall) bool {
        return qtc.QDBusPendingCall_IsFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn WaitForFinished(self: QDBusPendingCall) void {
        qtc.QDBusPendingCall_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn IsError(self: QDBusPendingCall) bool {
        return qtc.QDBusPendingCall_IsError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn IsValid(self: QDBusPendingCall) bool {
        return qtc.QDBusPendingCall_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn Error(self: QDBusPendingCall) QDBusError {
        return .{ .ptr = qtc.QDBusPendingCall_Error(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#reply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn Reply(self: QDBusPendingCall) QDBusMessage {
        return .{ .ptr = qtc.QDBusPendingCall_Reply(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromError)
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: QDBusError `
    ///
    pub fn FromError(errorVal: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(errorVal)._is_QDBusError;
        return .{ .ptr = qtc.QDBusPendingCall_FromError(@ptrCast(errorVal.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromCompletedCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn FromCompletedCall(message: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusPendingCall_FromCompletedCall(@ptrCast(message.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#dtor.QDBusPendingCall)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn Delete(self: QDBusPendingCall) void {
        qtc.QDBusPendingCall_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html)
pub const QDBusPendingCallWatcher = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusPendingCallWatcher,

    pub const _is_QDBusPendingCallWatcher = {};
    pub const _is_QObject = {};
    pub const _is_QDBusPendingCall = {};

    /// New constructs a new QDBusPendingCallWatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` call: QDBusPendingCall `
    ///
    pub fn New(call: anytype) QDBusPendingCallWatcher {
        comptime _ = @TypeOf(call)._is_QDBusPendingCall;
        return .{ .ptr = qtc.QDBusPendingCallWatcher_new(@ptrCast(call.ptr)) };
    }

    /// New2 constructs a new QDBusPendingCallWatcher object.
    ///
    /// ## Parameter(s):
    ///
    /// ` call: QDBusPendingCall `
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(call: anytype, parent: anytype) QDBusPendingCallWatcher {
        comptime _ = @TypeOf(call)._is_QDBusPendingCall;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDBusPendingCallWatcher_new2(@ptrCast(call.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn MetaObject(self: QDBusPendingCallWatcher) QMetaObject {
        return .{ .ptr = qtc.QDBusPendingCallWatcher_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QDBusPendingCallWatcher, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDBusPendingCallWatcher_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn SuperMetaObject(self: QDBusPendingCallWatcher) QMetaObject {
        return .{ .ptr = qtc.QDBusPendingCallWatcher_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDBusPendingCallWatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusPendingCallWatcher_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDBusPendingCallWatcher_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDBusPendingCallWatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusPendingCallWatcher_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDBusPendingCallWatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusPendingCallWatcher_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDBusPendingCallWatcher_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QDBusPendingCallWatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusPendingCallWatcher_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuspendingcallwatcher.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn WaitForFinished(self: QDBusPendingCallWatcher) void {
        qtc.QDBusPendingCallWatcher_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn Finished(self: QDBusPendingCallWatcher) void {
        qtc.QDBusPendingCallWatcher_Finished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher) callconv(.c) void `
    ///
    pub fn OnFinished(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuspendingcallwatcher.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuspendingcallwatcher.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` selfVal: QDBusPendingCallWatcher `
    ///
    pub fn Finished1(self: QDBusPendingCallWatcher, selfVal: anytype) void {
        comptime _ = @TypeOf(selfVal)._is_QDBusPendingCallWatcher;
        qtc.QDBusPendingCallWatcher_Finished1(@ptrCast(self.ptr), @ptrCast(selfVal.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, selfVal: QDBusPendingCallWatcher) callconv(.c) void `
    ///
    pub fn OnFinished1(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QDBusPendingCallWatcher) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_Connect_Finished1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDBusPendingCallWatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbuspendingcallwatcher.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDBusPendingCallWatcher, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn IsWidgetType(self: QDBusPendingCallWatcher) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn IsWindowType(self: QDBusPendingCallWatcher) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn IsQuickItemType(self: QDBusPendingCallWatcher) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn SignalsBlocked(self: QDBusPendingCallWatcher) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDBusPendingCallWatcher, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn Thread(self: QDBusPendingCallWatcher) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDBusPendingCallWatcher, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDBusPendingCallWatcher, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDBusPendingCallWatcher, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDBusPendingCallWatcher, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDBusPendingCallWatcher, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDBusPendingCallWatcher, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdbuspendingcallwatcher.Children: Memory allocation failed");
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDBusPendingCallWatcher, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDBusPendingCallWatcher, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDBusPendingCallWatcher, obj: anytype) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDBusPendingCallWatcher, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn Disconnect3(self: QDBusPendingCallWatcher) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDBusPendingCallWatcher, receiver: anytype) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn DumpObjectTree(self: QDBusPendingCallWatcher) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn DumpObjectInfo(self: QDBusPendingCallWatcher) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDBusPendingCallWatcher, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDBusPendingCallWatcher, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDBusPendingCallWatcher, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdbuspendingcallwatcher.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdbuspendingcallwatcher.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn BindingStorage(self: QDBusPendingCallWatcher) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn BindingStorage2(self: QDBusPendingCallWatcher) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn Destroyed(self: QDBusPendingCallWatcher) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn Parent(self: QDBusPendingCallWatcher) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDBusPendingCallWatcher, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn DeleteLater(self: QDBusPendingCallWatcher) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDBusPendingCallWatcher, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDBusPendingCallWatcher, time: i64, timerType: i32) i32 {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDBusPendingCallWatcher, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDBusPendingCallWatcher, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDBusPendingCallWatcher, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDBusPendingCallWatcher, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDBusPendingCallWatcher, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDBusPendingCallWatcher, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` other: QDBusPendingCall `
    ///
    pub fn OperatorAssign(self: QDBusPendingCallWatcher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        qtc.QDBusPendingCall_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` other: QDBusPendingCall `
    ///
    pub fn Swap(self: QDBusPendingCallWatcher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        qtc.QDBusPendingCall_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn IsFinished(self: QDBusPendingCallWatcher) bool {
        return qtc.QDBusPendingCall_IsFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn IsError(self: QDBusPendingCallWatcher) bool {
        return qtc.QDBusPendingCall_IsError(@ptrCast(self.ptr));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn IsValid(self: QDBusPendingCallWatcher) bool {
        return qtc.QDBusPendingCall_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn Error(self: QDBusPendingCallWatcher) QDBusError {
        return .{ .ptr = qtc.QDBusPendingCall_Error(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#reply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn Reply(self: QDBusPendingCallWatcher) QDBusMessage {
        return .{ .ptr = qtc.QDBusPendingCall_Reply(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromError)
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: QDBusError `
    ///
    pub fn FromError(errorVal: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(errorVal)._is_QDBusError;
        return .{ .ptr = qtc.QDBusPendingCall_FromError(@ptrCast(errorVal.ptr)) };
    }

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromCompletedCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn FromCompletedCall(message: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusPendingCall_FromCompletedCall(@ptrCast(message.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDBusPendingCallWatcher, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusPendingCallWatcher_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDBusPendingCallWatcher, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusPendingCallWatcher_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QEvent) callconv(.c) bool) void {
        qtc.QDBusPendingCallWatcher_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDBusPendingCallWatcher, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusPendingCallWatcher_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDBusPendingCallWatcher, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusPendingCallWatcher_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDBusPendingCallWatcher_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDBusPendingCallWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDBusPendingCallWatcher_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDBusPendingCallWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDBusPendingCallWatcher_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QTimerEvent) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDBusPendingCallWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDBusPendingCallWatcher_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDBusPendingCallWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDBusPendingCallWatcher_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QChildEvent) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDBusPendingCallWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDBusPendingCallWatcher_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDBusPendingCallWatcher, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDBusPendingCallWatcher_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QEvent) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QDBusPendingCallWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusPendingCallWatcher_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDBusPendingCallWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusPendingCallWatcher_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QDBusPendingCallWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusPendingCallWatcher_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDBusPendingCallWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusPendingCallWatcher_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn Sender(self: QDBusPendingCallWatcher) QObject {
        return .{ .ptr = qtc.QDBusPendingCallWatcher_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn SuperSender(self: QDBusPendingCallWatcher) QObject {
        return .{ .ptr = qtc.QDBusPendingCallWatcher_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QDBusPendingCallWatcher, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDBusPendingCallWatcher_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn SenderSignalIndex(self: QDBusPendingCallWatcher) i32 {
        return qtc.QDBusPendingCallWatcher_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn SuperSenderSignalIndex(self: QDBusPendingCallWatcher) i32 {
        return qtc.QDBusPendingCallWatcher_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QDBusPendingCallWatcher, callback: *const fn () callconv(.c) i32) void {
        qtc.QDBusPendingCallWatcher_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QDBusPendingCallWatcher, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusPendingCallWatcher_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDBusPendingCallWatcher, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusPendingCallWatcher_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDBusPendingCallWatcher_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QDBusPendingCallWatcher, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusPendingCallWatcher_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDBusPendingCallWatcher, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusPendingCallWatcher_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QMetaMethod) callconv(.c) bool) void {
        qtc.QDBusPendingCallWatcher_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#dtor.QDBusPendingCallWatcher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn Delete(self: QDBusPendingCallWatcher) void {
        qtc.QDBusPendingCallWatcher_Delete(@ptrCast(self.ptr));
    }
};
