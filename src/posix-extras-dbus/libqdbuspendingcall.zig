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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusPendingCall object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusPendingCall `
    ///
    pub fn new(other: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        return .{ .ptr = qtc.QDBusPendingCall_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    /// ` other: QDBusPendingCall `
    ///
    pub fn operatorAssign(self: QDBusPendingCall, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        qtc.QDBusPendingCall_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    /// ` other: QDBusPendingCall `
    ///
    pub fn swap(self: QDBusPendingCall, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        qtc.QDBusPendingCall_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn isFinished(self: QDBusPendingCall) bool {
        return qtc.QDBusPendingCall_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `waitForFinished` instead
    ///
    pub const WaitForFinished = waitForFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn waitForFinished(self: QDBusPendingCall) void {
        qtc.QDBusPendingCall_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isError` instead
    ///
    pub const IsError = isError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn isError(self: QDBusPendingCall) bool {
        return qtc.QDBusPendingCall_IsError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn isValid(self: QDBusPendingCall) bool {
        return qtc.QDBusPendingCall_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn error0(self: QDBusPendingCall) QDBusError {
        return .{ .ptr = qtc.QDBusPendingCall_Error(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reply` instead
    ///
    pub const Reply = reply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#reply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn reply(self: QDBusPendingCall) QDBusMessage {
        return .{ .ptr = qtc.QDBusPendingCall_Reply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromError` instead
    ///
    pub const FromError = fromError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromError)
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: QDBusError `
    ///
    pub fn fromError(errorVal: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(errorVal)._is_QDBusError;
        return .{ .ptr = qtc.QDBusPendingCall_FromError(@ptrCast(errorVal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromCompletedCall` instead
    ///
    pub const FromCompletedCall = fromCompletedCall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromCompletedCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn fromCompletedCall(message: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusPendingCall_FromCompletedCall(@ptrCast(message.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#dtor.QDBusPendingCall)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusPendingCall `
    ///
    pub fn delete(self: QDBusPendingCall) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusPendingCallWatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` call: QDBusPendingCall `
    ///
    pub fn new(call: anytype) QDBusPendingCallWatcher {
        comptime _ = @TypeOf(call)._is_QDBusPendingCall;
        return .{ .ptr = qtc.QDBusPendingCallWatcher_new(@ptrCast(call.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusPendingCallWatcher object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` call: QDBusPendingCall `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(call: anytype, _parent: anytype) QDBusPendingCallWatcher {
        comptime _ = @TypeOf(call)._is_QDBusPendingCall;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDBusPendingCallWatcher_new2(@ptrCast(call.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn metaObject(self: QDBusPendingCallWatcher) QMetaObject {
        return .{ .ptr = qtc.QDBusPendingCallWatcher_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QDBusPendingCallWatcher, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDBusPendingCallWatcher_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn superMetaObject(self: QDBusPendingCallWatcher) QMetaObject {
        return .{ .ptr = qtc.QDBusPendingCallWatcher_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDBusPendingCallWatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusPendingCallWatcher_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDBusPendingCallWatcher_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDBusPendingCallWatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusPendingCallWatcher_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QDBusPendingCallWatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusPendingCallWatcher_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDBusPendingCallWatcher_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QDBusPendingCallWatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusPendingCallWatcher_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusPendingCallWatcher.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `waitForFinished` instead
    ///
    pub const WaitForFinished = waitForFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#waitForFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn waitForFinished(self: QDBusPendingCallWatcher) void {
        qtc.QDBusPendingCallWatcher_WaitForFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn finished(self: QDBusPendingCallWatcher) void {
        qtc.QDBusPendingCallWatcher_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher) callconv(.c) void `
    ///
    pub fn onFinished(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusPendingCallWatcher.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusPendingCallWatcher.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `finished1` instead
    ///
    pub const Finished1 = finished1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` selfVal: QDBusPendingCallWatcher `
    ///
    pub fn finished1(self: QDBusPendingCallWatcher, selfVal: anytype) void {
        comptime _ = @TypeOf(selfVal)._is_QDBusPendingCallWatcher;
        qtc.QDBusPendingCallWatcher_Finished1(@ptrCast(self.ptr), @ptrCast(selfVal.ptr));
    }

    /// ### DEPRECATED: Use `onFinished1` instead
    ///
    pub const OnFinished1 = onFinished1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, selfVal: QDBusPendingCallWatcher) callconv(.c) void `
    ///
    pub fn onFinished1(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QDBusPendingCallWatcher) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_Connect_Finished1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDBusPendingCallWatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusPendingCallWatcher.objectName: Memory allocation failed");
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDBusPendingCallWatcher, name: []const u8) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn isWidgetType(self: QDBusPendingCallWatcher) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn isWindowType(self: QDBusPendingCallWatcher) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn isQuickItemType(self: QDBusPendingCallWatcher) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn signalsBlocked(self: QDBusPendingCallWatcher) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDBusPendingCallWatcher, b: bool) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn thread(self: QDBusPendingCallWatcher) QThread {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDBusPendingCallWatcher, _thread: anytype) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDBusPendingCallWatcher, interval: i32) i32 {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDBusPendingCallWatcher, time: i64) i32 {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDBusPendingCallWatcher, id: i32) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDBusPendingCallWatcher, id: i32) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDBusPendingCallWatcher, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDBusPendingCallWatcher.children: Memory allocation failed");
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDBusPendingCallWatcher, _parent: anytype) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDBusPendingCallWatcher, filterObj: anytype) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDBusPendingCallWatcher, obj: anytype) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDBusPendingCallWatcher, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn disconnect3(self: QDBusPendingCallWatcher) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDBusPendingCallWatcher, receiver: anytype) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn dumpObjectTree(self: QDBusPendingCallWatcher) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn dumpObjectInfo(self: QDBusPendingCallWatcher) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDBusPendingCallWatcher, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDBusPendingCallWatcher, name: [:0]const u8) QVariant {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDBusPendingCallWatcher, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDBusPendingCallWatcher.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDBusPendingCallWatcher.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn bindingStorage(self: QDBusPendingCallWatcher) QBindingStorage {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn bindingStorage2(self: QDBusPendingCallWatcher) QBindingStorage {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn destroyed(self: QDBusPendingCallWatcher) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher) callconv(.c) void) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn parent(self: QDBusPendingCallWatcher) QObject {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDBusPendingCallWatcher, classname: [:0]const u8) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn deleteLater(self: QDBusPendingCallWatcher) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDBusPendingCallWatcher, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDBusPendingCallWatcher, time: i64, timerType: i32) i32 {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDBusPendingCallWatcher, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDBusPendingCallWatcher, signal: [:0]const u8) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDBusPendingCallWatcher, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDBusPendingCallWatcher, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDBusPendingCallWatcher, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDBusPendingCallWatcher, param1: anytype) void {
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

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
    pub fn operatorAssign(self: QDBusPendingCallWatcher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        qtc.QDBusPendingCall_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

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
    pub fn swap(self: QDBusPendingCallWatcher, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusPendingCall;
        qtc.QDBusPendingCall_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isFinished` instead
    ///
    pub const IsFinished = isFinished;

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn isFinished(self: QDBusPendingCallWatcher) bool {
        return qtc.QDBusPendingCall_IsFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isError` instead
    ///
    pub const IsError = isError;

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn isError(self: QDBusPendingCallWatcher) bool {
        return qtc.QDBusPendingCall_IsError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn isValid(self: QDBusPendingCallWatcher) bool {
        return qtc.QDBusPendingCall_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn error0(self: QDBusPendingCallWatcher) QDBusError {
        return .{ .ptr = qtc.QDBusPendingCall_Error(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `reply` instead
    ///
    pub const Reply = reply;

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#reply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn reply(self: QDBusPendingCallWatcher) QDBusMessage {
        return .{ .ptr = qtc.QDBusPendingCall_Reply(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromError` instead
    ///
    pub const FromError = fromError;

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromError)
    ///
    /// ## Parameter(s):
    ///
    /// ` errorVal: QDBusError `
    ///
    pub fn fromError(errorVal: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(errorVal)._is_QDBusError;
        return .{ .ptr = qtc.QDBusPendingCall_FromError(@ptrCast(errorVal.ptr)) };
    }

    /// ### DEPRECATED: Use `fromCompletedCall` instead
    ///
    pub const FromCompletedCall = fromCompletedCall;

    /// Inherited from QDBusPendingCall
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromCompletedCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn fromCompletedCall(message: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusPendingCall_FromCompletedCall(@ptrCast(message.ptr)) };
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDBusPendingCallWatcher, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusPendingCallWatcher_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDBusPendingCallWatcher, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusPendingCallWatcher_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QEvent) callconv(.c) bool) void {
        qtc.QDBusPendingCallWatcher_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDBusPendingCallWatcher, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusPendingCallWatcher_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDBusPendingCallWatcher, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusPendingCallWatcher_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDBusPendingCallWatcher_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDBusPendingCallWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDBusPendingCallWatcher_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDBusPendingCallWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDBusPendingCallWatcher_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QTimerEvent) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDBusPendingCallWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDBusPendingCallWatcher_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDBusPendingCallWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDBusPendingCallWatcher_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QChildEvent) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDBusPendingCallWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDBusPendingCallWatcher_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDBusPendingCallWatcher, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDBusPendingCallWatcher_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QEvent) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QDBusPendingCallWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusPendingCallWatcher_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QDBusPendingCallWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusPendingCallWatcher_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QDBusPendingCallWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusPendingCallWatcher_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QDBusPendingCallWatcher, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusPendingCallWatcher_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusPendingCallWatcher_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn sender(self: QDBusPendingCallWatcher) QObject {
        return .{ .ptr = qtc.QDBusPendingCallWatcher_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn superSender(self: QDBusPendingCallWatcher) QObject {
        return .{ .ptr = qtc.QDBusPendingCallWatcher_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QDBusPendingCallWatcher, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDBusPendingCallWatcher_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn senderSignalIndex(self: QDBusPendingCallWatcher) i32 {
        return qtc.QDBusPendingCallWatcher_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn superSenderSignalIndex(self: QDBusPendingCallWatcher) i32 {
        return qtc.QDBusPendingCallWatcher_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QDBusPendingCallWatcher, callback: *const fn () callconv(.c) i32) void {
        qtc.QDBusPendingCallWatcher_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QDBusPendingCallWatcher, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusPendingCallWatcher_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QDBusPendingCallWatcher, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusPendingCallWatcher_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDBusPendingCallWatcher_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QDBusPendingCallWatcher, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusPendingCallWatcher_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QDBusPendingCallWatcher, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusPendingCallWatcher_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDBusPendingCallWatcher`
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, QMetaMethod) callconv(.c) bool) void {
        qtc.QDBusPendingCallWatcher_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusPendingCallWatcher `
    ///
    /// ` callback: *const fn (self: QDBusPendingCallWatcher, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDBusPendingCallWatcher, callback: *const fn (QDBusPendingCallWatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#dtor.QDBusPendingCallWatcher)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusPendingCallWatcher `
    ///
    pub fn delete(self: QDBusPendingCallWatcher) void {
        qtc.QDBusPendingCallWatcher_Delete(@ptrCast(self.ptr));
    }
};
