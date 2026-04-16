const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAnimation = @import("libqt6").QAbstractAnimation;
const QAbstractState = @import("libqt6").QAbstractState;
const QAbstractTransition = @import("libqt6").QAbstractTransition;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSignalTransition = @import("libqt6").QSignalTransition;
const QState = @import("libqt6").QState;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qstate_enums = @import("libqstate.zig").enums;
const qstatemachine_enums = enums;
const std = @import("std");
const Set_QAbstractState = std.AutoHashMapUnmanaged(QAbstractState, void);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html)
pub const QStateMachine = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStateMachine,

    pub const _is_QStateMachine = {};
    pub const _is_QState = {};
    pub const _is_QAbstractState = {};
    pub const _is_QObject = {};

    /// New constructs a new QStateMachine object.
    ///
    pub fn New() QStateMachine {
        return .{ .ptr = qtc.QStateMachine_new() };
    }

    /// New2 constructs a new QStateMachine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` childMode: qstate_enums.ChildMode `
    ///
    pub fn New2(childMode: i32) QStateMachine {
        return .{ .ptr = qtc.QStateMachine_new2(@bitCast(childMode)) };
    }

    /// New3 constructs a new QStateMachine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QStateMachine {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QStateMachine_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QStateMachine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` childMode: qstate_enums.ChildMode `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(childMode: i32, parent: anytype) QStateMachine {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QStateMachine_new4(@bitCast(childMode), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn MetaObject(self: QStateMachine) QMetaObject {
        return .{ .ptr = qtc.QStateMachine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QStateMachine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QStateMachine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    pub fn SuperMetaObject(self: QStateMachine) QMetaObject {
        return .{ .ptr = qtc.QStateMachine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QStateMachine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStateMachine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QStateMachine, callback: *const fn (QStateMachine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QStateMachine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QStateMachine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStateMachine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QStateMachine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStateMachine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QStateMachine, callback: *const fn (QStateMachine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QStateMachine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QStateMachine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStateMachine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatemachine.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#addState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` state: QAbstractState `
    ///
    pub fn AddState(self: QStateMachine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QAbstractState;
        qtc.QStateMachine_AddState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#removeState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` state: QAbstractState `
    ///
    pub fn RemoveState(self: QStateMachine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QAbstractState;
        qtc.QStateMachine_RemoveState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ## Returns:
    ///
    /// ` qstatemachine_enums.Error `
    ///
    pub fn Error(self: QStateMachine) i32 {
        return qtc.QStateMachine_Error(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: QStateMachine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStateMachine_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatemachine.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#clearError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn ClearError(self: QStateMachine) void {
        qtc.QStateMachine_ClearError(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn IsRunning(self: QStateMachine) bool {
        return qtc.QStateMachine_IsRunning(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#isAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn IsAnimated(self: QStateMachine) bool {
        return qtc.QStateMachine_IsAnimated(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAnimated(self: QStateMachine, enabled: bool) void {
        qtc.QStateMachine_SetAnimated(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#addDefaultAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn AddDefaultAnimation(self: QStateMachine, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QStateMachine_AddDefaultAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#defaultAnimations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultAnimations(self: QStateMachine, allocator: std.mem.Allocator) []QAbstractAnimation {
        const _arr: qtc.libqt_list = qtc.QStateMachine_DefaultAnimations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAnimation, _arr.len) catch @panic("qstatemachine.DefaultAnimations: Memory allocation failed");
        const _data: [*]QtC.QAbstractAnimation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#removeDefaultAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn RemoveDefaultAnimation(self: QStateMachine, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QStateMachine_RemoveDefaultAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#globalRestorePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ## Returns:
    ///
    /// ` qstate_enums.RestorePolicy `
    ///
    pub fn GlobalRestorePolicy(self: QStateMachine) i32 {
        return qtc.QStateMachine_GlobalRestorePolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setGlobalRestorePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` restorePolicy: qstate_enums.RestorePolicy `
    ///
    pub fn SetGlobalRestorePolicy(self: QStateMachine, restorePolicy: i32) void {
        qtc.QStateMachine_SetGlobalRestorePolicy(@ptrCast(self.ptr), @bitCast(restorePolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn PostEvent(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_PostEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postDelayedEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    /// ` delay: i32 `
    ///
    pub fn PostDelayedEvent(self: QStateMachine, event: anytype, delay: i32) i32 {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QStateMachine_PostDelayedEvent(@ptrCast(self.ptr), @ptrCast(event.ptr), @bitCast(delay));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#cancelDelayedEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` id: i32 `
    ///
    pub fn CancelDelayedEvent(self: QStateMachine, id: i32) bool {
        return qtc.QStateMachine_CancelDelayedEvent(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#configuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Configuration(self: QStateMachine, allocator: std.mem.Allocator) Set_QAbstractState {
        const _set: qtc.libqt_list = qtc.QStateMachine_Configuration(@ptrCast(self.ptr));
        var _ret: Set_QAbstractState = .empty;
        const _data: [*]QtC.QAbstractState = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.put(allocator, .{ .ptr = _data[i] }, {}) catch @panic("qstatemachine.Configuration: Set insertion failed");
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QStateMachine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QStateMachine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QStateMachine, callback: *const fn (QStateMachine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QStateMachine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QStateMachine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QStateMachine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postDelayedEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    /// ` delay: i64 of milliseconds `
    ///
    pub fn PostDelayedEvent2(self: QStateMachine, event: anytype, delay: i64) i32 {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QStateMachine_PostDelayedEvent2(@ptrCast(self.ptr), @ptrCast(event.ptr), @bitCast(delay));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn Start(self: QStateMachine) void {
        qtc.QStateMachine_Start(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn Stop(self: QStateMachine) void {
        qtc.QStateMachine_Stop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` running: bool `
    ///
    pub fn SetRunning(self: QStateMachine, running: bool) void {
        qtc.QStateMachine_SetRunning(@ptrCast(self.ptr), running);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#runningChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` running: bool `
    ///
    pub fn RunningChanged(self: QStateMachine, running: bool) void {
        qtc.QStateMachine_RunningChanged(@ptrCast(self.ptr), running);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#runningChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, running: bool) callconv(.c) void `
    ///
    pub fn OnRunningChanged(self: QStateMachine, callback: *const fn (QStateMachine, bool) callconv(.c) void) void {
        qtc.QStateMachine_Connect_RunningChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn OnEntry(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_OnEntry(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnOnEntry(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnOnEntry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOnEntry` instead
    ///
    pub const QBaseOnEntry = SuperOnEntry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperOnEntry(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_SuperOnEntry(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn OnExit(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_OnExit(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnOnExit(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnOnExit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOnExit` instead
    ///
    pub const QBaseOnExit = SuperOnExit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperOnExit(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_SuperOnExit(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn BeginSelectTransitions(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_BeginSelectTransitions(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnBeginSelectTransitions(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnBeginSelectTransitions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBeginSelectTransitions` instead
    ///
    pub const QBaseBeginSelectTransitions = SuperBeginSelectTransitions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperBeginSelectTransitions(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_SuperBeginSelectTransitions(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn EndSelectTransitions(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_EndSelectTransitions(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnEndSelectTransitions(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnEndSelectTransitions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEndSelectTransitions` instead
    ///
    pub const QBaseEndSelectTransitions = SuperEndSelectTransitions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEndSelectTransitions(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_SuperEndSelectTransitions(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn BeginMicrostep(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_BeginMicrostep(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnBeginMicrostep(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnBeginMicrostep(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBeginMicrostep` instead
    ///
    pub const QBaseBeginMicrostep = SuperBeginMicrostep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperBeginMicrostep(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_SuperBeginMicrostep(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn EndMicrostep(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_EndMicrostep(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnEndMicrostep(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnEndMicrostep(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEndMicrostep` instead
    ///
    pub const QBaseEndMicrostep = SuperEndMicrostep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEndMicrostep(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_SuperEndMicrostep(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QStateMachine, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QStateMachine_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) bool) void {
        qtc.QStateMachine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: QStateMachine, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QStateMachine_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatemachine.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatemachine.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    /// ` priority: qstatemachine_enums.EventPriority `
    ///
    pub fn PostEvent2(self: QStateMachine, event: anytype, priority: i32) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_PostEvent2(@ptrCast(self.ptr), @ptrCast(event.ptr), @bitCast(priority));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#errorState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn ErrorState(self: QStateMachine) QAbstractState {
        return .{ .ptr = qtc.QState_ErrorState(@ptrCast(self.ptr)) };
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setErrorState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` state: QAbstractState `
    ///
    pub fn SetErrorState(self: QStateMachine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QAbstractState;
        qtc.QState_SetErrorState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` transition: QAbstractTransition `
    ///
    pub fn AddTransition(self: QStateMachine, transition: anytype) void {
        comptime _ = @TypeOf(transition)._is_QAbstractTransition;
        qtc.QState_AddTransition(@ptrCast(self.ptr), @ptrCast(transition.ptr));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` target: QAbstractState `
    ///
    pub fn AddTransition2(self: QStateMachine, sender: anytype, signal: [:0]const u8, target: anytype) QSignalTransition {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(target)._is_QAbstractState;
        return .{ .ptr = qtc.QState_AddTransition2(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, @ptrCast(target.ptr)) };
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` target: QAbstractState `
    ///
    pub fn AddTransition3(self: QStateMachine, target: anytype) QAbstractTransition {
        comptime _ = @TypeOf(target)._is_QAbstractState;
        return .{ .ptr = qtc.QState_AddTransition3(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#removeTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` transition: QAbstractTransition `
    ///
    pub fn RemoveTransition(self: QStateMachine, transition: anytype) void {
        comptime _ = @TypeOf(transition)._is_QAbstractTransition;
        qtc.QState_RemoveTransition(@ptrCast(self.ptr), @ptrCast(transition.ptr));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#transitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Transitions(self: QStateMachine, allocator: std.mem.Allocator) []QAbstractTransition {
        const _arr: qtc.libqt_list = qtc.QState_Transitions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractTransition, _arr.len) catch @panic("qstatemachine.Transitions: Memory allocation failed");
        const _data: [*]QtC.QAbstractTransition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#initialState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn InitialState(self: QStateMachine) QAbstractState {
        return .{ .ptr = qtc.QState_InitialState(@ptrCast(self.ptr)) };
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setInitialState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` state: QAbstractState `
    ///
    pub fn SetInitialState(self: QStateMachine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QAbstractState;
        qtc.QState_SetInitialState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#childMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ## Returns:
    ///
    /// ` qstate_enums.ChildMode `
    ///
    pub fn ChildMode(self: QStateMachine) i32 {
        return qtc.QState_ChildMode(@ptrCast(self.ptr));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setChildMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` mode: qstate_enums.ChildMode `
    ///
    pub fn SetChildMode(self: QStateMachine, mode: i32) void {
        qtc.QState_SetChildMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#assignProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` object: QObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn AssignProperty(self: QStateMachine, object: anytype, name: [:0]const u8, value: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QState_AssignProperty(@ptrCast(self.ptr), @ptrCast(object.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#parentState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn ParentState(self: QStateMachine) QState {
        return .{ .ptr = qtc.QAbstractState_ParentState(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#machine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn Machine(self: QStateMachine) QStateMachine {
        return .{ .ptr = qtc.QAbstractState_Machine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#active)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn Active(self: QStateMachine) bool {
        return qtc.QAbstractState_Active(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` active: bool `
    ///
    pub fn ActiveChanged(self: QStateMachine, active: bool) void {
        qtc.QAbstractState_ActiveChanged(@ptrCast(self.ptr), active);
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, active: bool) callconv(.c) void `
    ///
    pub fn OnActiveChanged(self: QStateMachine, callback: *const fn (QStateMachine, bool) callconv(.c) void) void {
        qtc.QAbstractState_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QStateMachine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatemachine.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QStateMachine, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn IsWidgetType(self: QStateMachine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn IsWindowType(self: QStateMachine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn IsQuickItemType(self: QStateMachine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn SignalsBlocked(self: QStateMachine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QStateMachine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn Thread(self: QStateMachine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QStateMachine, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QStateMachine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QStateMachine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QStateMachine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QStateMachine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QStateMachine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qstatemachine.Children: Memory allocation failed");
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
    /// ` self: QStateMachine `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QStateMachine, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QStateMachine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QStateMachine, obj: anytype) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QStateMachine, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QStateMachine `
    ///
    pub fn Disconnect3(self: QStateMachine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QStateMachine, receiver: anytype) bool {
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
    /// ` self: QStateMachine `
    ///
    pub fn DumpObjectTree(self: QStateMachine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn DumpObjectInfo(self: QStateMachine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QStateMachine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QStateMachine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QStateMachine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qstatemachine.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qstatemachine.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QStateMachine `
    ///
    pub fn BindingStorage(self: QStateMachine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn BindingStorage2(self: QStateMachine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn Destroyed(self: QStateMachine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn Parent(self: QStateMachine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QStateMachine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn DeleteLater(self: QStateMachine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QStateMachine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QStateMachine, time: i64, timerType: i32) i32 {
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
    /// ` self: QStateMachine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QStateMachine, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QStateMachine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QStateMachine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QStateMachine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QStateMachine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QStateMachine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QStateMachine, callback: *const fn (QStateMachine, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QStateMachine_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QStateMachine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QStateMachine, callback: *const fn (QStateMachine, QTimerEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QStateMachine_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QStateMachine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QStateMachine, callback: *const fn (QStateMachine, QChildEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QStateMachine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QStateMachine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QStateMachine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStateMachine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QStateMachine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStateMachine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QStateMachine, callback: *const fn (QStateMachine, QMetaMethod) callconv(.c) void) void {
        qtc.QStateMachine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QStateMachine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStateMachine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QStateMachine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStateMachine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QStateMachine, callback: *const fn (QStateMachine, QMetaMethod) callconv(.c) void) void {
        qtc.QStateMachine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn Sender(self: QStateMachine) QObject {
        return .{ .ptr = qtc.QStateMachine_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QStateMachine `
    ///
    pub fn SuperSender(self: QStateMachine) QObject {
        return .{ .ptr = qtc.QStateMachine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QStateMachine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QStateMachine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn SenderSignalIndex(self: QStateMachine) i32 {
        return qtc.QStateMachine_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QStateMachine `
    ///
    pub fn SuperSenderSignalIndex(self: QStateMachine) i32 {
        return qtc.QStateMachine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QStateMachine, callback: *const fn () callconv(.c) i32) void {
        qtc.QStateMachine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QStateMachine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStateMachine_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QStateMachine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStateMachine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QStateMachine, callback: *const fn (QStateMachine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QStateMachine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QStateMachine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStateMachine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QStateMachine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStateMachine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QStateMachine, callback: *const fn (QStateMachine, QMetaMethod) callconv(.c) bool) void {
        qtc.QStateMachine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#started)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnStarted(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QStateMachine_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#stopped)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnStopped(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QStateMachine_Connect_Stopped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnFinished(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#propertiesAssigned)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnPropertiesAssigned(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_PropertiesAssigned(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#childModeChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnChildModeChanged(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_ChildModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#initialStateChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnInitialStateChanged(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_InitialStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#errorStateChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnErrorStateChanged(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_ErrorStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#entered)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnEntered(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QAbstractState_Connect_Entered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#exited)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn OnExited(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QAbstractState_Connect_Exited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QStateMachine, callback: *const fn (QStateMachine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#dtor.QStateMachine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStateMachine `
    ///
    pub fn Delete(self: QStateMachine) void {
        qtc.QStateMachine_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html)
pub const QStateMachine__SignalEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStateMachine__SignalEvent,

    pub const _is_QStateMachine__SignalEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QStateMachine::SignalEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signalIndex: i32 `
    ///
    /// ` arguments: []QVariant `
    ///
    pub fn New(sender: anytype, signalIndex: i32, arguments: []QVariant) QStateMachine__SignalEvent {
        comptime _ = @TypeOf(sender)._is_QObject;
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = @ptrCast(arguments.ptr),
        };
        return .{ .ptr = qtc.QStateMachine__SignalEvent_new(@ptrCast(sender.ptr), @bitCast(signalIndex), arguments_list) };
    }

    /// New2 constructs a new QStateMachine::SignalEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStateMachine__SignalEvent `
    ///
    pub fn New2(param1: anytype) QStateMachine__SignalEvent {
        comptime _ = @TypeOf(param1)._is_QStateMachine__SignalEvent;
        return .{ .ptr = qtc.QStateMachine__SignalEvent_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#sender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn Sender(self: QStateMachine__SignalEvent) QObject {
        return .{ .ptr = qtc.QStateMachine__SignalEvent_Sender(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#signalIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn SignalIndex(self: QStateMachine__SignalEvent) i32 {
        return qtc.QStateMachine__SignalEvent_SignalIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Arguments(self: QStateMachine__SignalEvent, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QStateMachine__SignalEvent_Arguments(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("qstatemachine__signalevent.Arguments: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QStateMachine__SignalEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn Spontaneous(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn IsAccepted(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn Accept(self: QStateMachine__SignalEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn Ignore(self: QStateMachine__SignalEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn IsInputEvent(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn IsPointerEvent(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn IsSinglePointEvent(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QStateMachine__SignalEvent, accepted: bool) void {
        qtc.QStateMachine__SignalEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QStateMachine__SignalEvent, accepted: bool) void {
        qtc.QStateMachine__SignalEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine__SignalEvent`
    ///
    /// ` callback: *const fn (self: QStateMachine__SignalEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QStateMachine__SignalEvent, callback: *const fn (QStateMachine__SignalEvent, bool) callconv(.c) void) void {
        qtc.QStateMachine__SignalEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn Clone(self: QStateMachine__SignalEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__SignalEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn SuperClone(self: QStateMachine__SignalEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__SignalEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine__SignalEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn OnClone(self: QStateMachine__SignalEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QStateMachine__SignalEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn Delete(self: QStateMachine__SignalEvent) void {
        qtc.QStateMachine__SignalEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html)
pub const QStateMachine__WrappedEvent = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QStateMachine__WrappedEvent,

    pub const _is_QStateMachine__WrappedEvent = {};
    pub const _is_QEvent = {};

    /// New constructs a new QStateMachine::WrappedEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn New(object: anytype, event: anytype) QStateMachine__WrappedEvent {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_new(@ptrCast(object.ptr), @ptrCast(event.ptr)) };
    }

    /// New2 constructs a new QStateMachine::WrappedEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStateMachine__WrappedEvent `
    ///
    pub fn New2(param1: anytype) QStateMachine__WrappedEvent {
        comptime _ = @TypeOf(param1)._is_QStateMachine__WrappedEvent;
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_new2(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn Object(self: QStateMachine__WrappedEvent) QObject {
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn Event(self: QStateMachine__WrappedEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_Event(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: QStateMachine__WrappedEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn Spontaneous(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn IsAccepted(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn Accept(self: QStateMachine__WrappedEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn Ignore(self: QStateMachine__WrappedEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn IsInputEvent(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn IsPointerEvent(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn IsSinglePointEvent(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn RegisterEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn RegisterEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: QStateMachine__WrappedEvent, accepted: bool) void {
        qtc.QStateMachine__WrappedEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `SuperSetAccepted` instead
    ///
    pub const QBaseSetAccepted = SuperSetAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: QStateMachine__WrappedEvent, accepted: bool) void {
        qtc.QStateMachine__WrappedEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine__WrappedEvent`
    ///
    /// ` callback: *const fn (self: QStateMachine__WrappedEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: QStateMachine__WrappedEvent, callback: *const fn (QStateMachine__WrappedEvent, bool) callconv(.c) void) void {
        qtc.QStateMachine__WrappedEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn Clone(self: QStateMachine__WrappedEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn SuperClone(self: QStateMachine__WrappedEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine__WrappedEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QEvent `
    ///
    pub fn OnClone(self: QStateMachine__WrappedEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QStateMachine__WrappedEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn Delete(self: QStateMachine__WrappedEvent) void {
        qtc.QStateMachine__WrappedEvent_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#public-types)
pub const enums = struct {
    pub const EventPriority = enum(i32) {
        pub const NormalPriority: i32 = 0;
        pub const HighPriority: i32 = 1;
    };

    pub const Error = enum(i32) {
        pub const NoError: i32 = 0;
        pub const NoInitialStateError: i32 = 1;
        pub const NoDefaultStateInHistoryStateError: i32 = 2;
        pub const NoCommonAncestorForTransitionError: i32 = 3;
        pub const StateMachineChildModeSetToParallelError: i32 = 4;
    };
};
