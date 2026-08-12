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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStateMachine object in C++ memory
    ///
    pub fn new() QStateMachine {
        return .{ .ptr = qtc.QStateMachine_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStateMachine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _childMode: qstate_enums.ChildMode `
    ///
    pub fn new2(_childMode: i32) QStateMachine {
        return .{ .ptr = qtc.QStateMachine_new2(@bitCast(_childMode)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QStateMachine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new3(_parent: anytype) QStateMachine {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QStateMachine_new3(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QStateMachine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _childMode: qstate_enums.ChildMode `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_childMode: i32, _parent: anytype) QStateMachine {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QStateMachine_new4(@bitCast(_childMode), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn metaObject(self: QStateMachine) QMetaObject {
        return .{ .ptr = qtc.QStateMachine_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QStateMachine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QStateMachine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    pub fn superMetaObject(self: QStateMachine) QMetaObject {
        return .{ .ptr = qtc.QStateMachine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QStateMachine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStateMachine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QStateMachine, callback: *const fn (QStateMachine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QStateMachine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QStateMachine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStateMachine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QStateMachine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStateMachine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QStateMachine, callback: *const fn (QStateMachine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QStateMachine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QStateMachine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStateMachine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStateMachine.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addState` instead
    ///
    pub const AddState = addState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#addState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` state: QAbstractState `
    ///
    pub fn addState(self: QStateMachine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QAbstractState;
        qtc.QStateMachine_AddState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `removeState` instead
    ///
    pub const RemoveState = removeState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#removeState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` state: QAbstractState `
    ///
    pub fn removeState(self: QStateMachine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QAbstractState;
        qtc.QStateMachine_RemoveState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `error0` instead
    ///
    pub const Error = error0;

    pub const @"error" = error0;

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
    pub fn error0(self: QStateMachine) i32 {
        return qtc.QStateMachine_Error(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `errorString` instead
    ///
    pub const ErrorString = errorString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn errorString(self: QStateMachine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStateMachine_ErrorString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStateMachine.errorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clearError` instead
    ///
    pub const ClearError = clearError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#clearError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn clearError(self: QStateMachine) void {
        qtc.QStateMachine_ClearError(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRunning` instead
    ///
    pub const IsRunning = isRunning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn isRunning(self: QStateMachine) bool {
        return qtc.QStateMachine_IsRunning(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAnimated` instead
    ///
    pub const IsAnimated = isAnimated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#isAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn isAnimated(self: QStateMachine) bool {
        return qtc.QStateMachine_IsAnimated(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAnimated` instead
    ///
    pub const SetAnimated = setAnimated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAnimated(self: QStateMachine, enabled: bool) void {
        qtc.QStateMachine_SetAnimated(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `addDefaultAnimation` instead
    ///
    pub const AddDefaultAnimation = addDefaultAnimation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#addDefaultAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn addDefaultAnimation(self: QStateMachine, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QStateMachine_AddDefaultAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `defaultAnimations` instead
    ///
    pub const DefaultAnimations = defaultAnimations;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#defaultAnimations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn defaultAnimations(self: QStateMachine, allocator: std.mem.Allocator) []QAbstractAnimation {
        const _arr: qtc.libqt_list = qtc.QStateMachine_DefaultAnimations(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractAnimation, _arr.len) catch @panic("QStateMachine.defaultAnimations: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractAnimation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `removeDefaultAnimation` instead
    ///
    pub const RemoveDefaultAnimation = removeDefaultAnimation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#removeDefaultAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn removeDefaultAnimation(self: QStateMachine, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QStateMachine_RemoveDefaultAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `globalRestorePolicy` instead
    ///
    pub const GlobalRestorePolicy = globalRestorePolicy;

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
    pub fn globalRestorePolicy(self: QStateMachine) i32 {
        return qtc.QStateMachine_GlobalRestorePolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGlobalRestorePolicy` instead
    ///
    pub const SetGlobalRestorePolicy = setGlobalRestorePolicy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setGlobalRestorePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` restorePolicy: qstate_enums.RestorePolicy `
    ///
    pub fn setGlobalRestorePolicy(self: QStateMachine, restorePolicy: i32) void {
        qtc.QStateMachine_SetGlobalRestorePolicy(@ptrCast(self.ptr), @bitCast(restorePolicy));
    }

    /// ### DEPRECATED: Use `postEvent` instead
    ///
    pub const PostEvent = postEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn postEvent(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_PostEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `postDelayedEvent` instead
    ///
    pub const PostDelayedEvent = postDelayedEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postDelayedEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    /// ` delay: i32 `
    ///
    pub fn postDelayedEvent(self: QStateMachine, _event: anytype, delay: i32) i32 {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStateMachine_PostDelayedEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr), @bitCast(delay));
    }

    /// ### DEPRECATED: Use `cancelDelayedEvent` instead
    ///
    pub const CancelDelayedEvent = cancelDelayedEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#cancelDelayedEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` id: i32 `
    ///
    pub fn cancelDelayedEvent(self: QStateMachine, id: i32) bool {
        return qtc.QStateMachine_CancelDelayedEvent(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `configuration` instead
    ///
    pub const Configuration = configuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#configuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn configuration(self: QStateMachine, allocator: std.mem.Allocator) Set_QAbstractState {
        const _set: qtc.libqt_list = qtc.QStateMachine_Configuration(@ptrCast(self.ptr));
        var _ret: Set_QAbstractState = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("QStateMachine.configuration: Total capacity allocation failed");
        const _data_val: [*]QtC.QAbstractState = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(.{ .ptr = _data_val[i] }, {});
        return _ret;
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QStateMachine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStateMachine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QStateMachine, callback: *const fn (QStateMachine, QObject, QEvent) callconv(.c) bool) void {
        qtc.QStateMachine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QStateMachine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStateMachine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `postDelayedEvent2` instead
    ///
    pub const PostDelayedEvent2 = postDelayedEvent2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postDelayedEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    /// ` delay: i64 of milliseconds `
    ///
    pub fn postDelayedEvent2(self: QStateMachine, _event: anytype, delay: i64) i32 {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QStateMachine_PostDelayedEvent2(@ptrCast(self.ptr), @ptrCast(_event.ptr), @bitCast(delay));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn start(self: QStateMachine) void {
        qtc.QStateMachine_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn stop(self: QStateMachine) void {
        qtc.QStateMachine_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setRunning` instead
    ///
    pub const SetRunning = setRunning;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` running: bool `
    ///
    pub fn setRunning(self: QStateMachine, running: bool) void {
        qtc.QStateMachine_SetRunning(@ptrCast(self.ptr), running);
    }

    /// ### DEPRECATED: Use `runningChanged` instead
    ///
    pub const RunningChanged = runningChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#runningChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` running: bool `
    ///
    pub fn runningChanged(self: QStateMachine, running: bool) void {
        qtc.QStateMachine_RunningChanged(@ptrCast(self.ptr), running);
    }

    /// ### DEPRECATED: Use `onRunningChanged` instead
    ///
    pub const OnRunningChanged = onRunningChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#runningChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, running: bool) callconv(.c) void `
    ///
    pub fn onRunningChanged(self: QStateMachine, callback: *const fn (QStateMachine, bool) callconv(.c) void) void {
        qtc.QStateMachine_Connect_RunningChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onEntry` instead
    ///
    pub const OnEntry = onEntry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn onEntry(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_OnEntry(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onOnEntry` instead
    ///
    pub const OnOnEntry = onOnEntry;

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
    pub fn onOnEntry(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnOnEntry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOnEntry` instead
    ///
    pub const SuperOnEntry = superOnEntry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superOnEntry(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_SuperOnEntry(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onExit` instead
    ///
    pub const OnExit = onExit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn onExit(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_OnExit(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onOnExit` instead
    ///
    pub const OnOnExit = onOnExit;

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
    pub fn onOnExit(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnOnExit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOnExit` instead
    ///
    pub const SuperOnExit = superOnExit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superOnExit(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_SuperOnExit(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `beginSelectTransitions` instead
    ///
    pub const BeginSelectTransitions = beginSelectTransitions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn beginSelectTransitions(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_BeginSelectTransitions(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onBeginSelectTransitions` instead
    ///
    pub const OnBeginSelectTransitions = onBeginSelectTransitions;

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
    pub fn onBeginSelectTransitions(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnBeginSelectTransitions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBeginSelectTransitions` instead
    ///
    pub const SuperBeginSelectTransitions = superBeginSelectTransitions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superBeginSelectTransitions(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_SuperBeginSelectTransitions(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `endSelectTransitions` instead
    ///
    pub const EndSelectTransitions = endSelectTransitions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn endSelectTransitions(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_EndSelectTransitions(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEndSelectTransitions` instead
    ///
    pub const OnEndSelectTransitions = onEndSelectTransitions;

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
    pub fn onEndSelectTransitions(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnEndSelectTransitions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEndSelectTransitions` instead
    ///
    pub const SuperEndSelectTransitions = superEndSelectTransitions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEndSelectTransitions(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_SuperEndSelectTransitions(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `beginMicrostep` instead
    ///
    pub const BeginMicrostep = beginMicrostep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn beginMicrostep(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_BeginMicrostep(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onBeginMicrostep` instead
    ///
    pub const OnBeginMicrostep = onBeginMicrostep;

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
    pub fn onBeginMicrostep(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnBeginMicrostep(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBeginMicrostep` instead
    ///
    pub const SuperBeginMicrostep = superBeginMicrostep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superBeginMicrostep(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_SuperBeginMicrostep(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `endMicrostep` instead
    ///
    pub const EndMicrostep = endMicrostep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn endMicrostep(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_EndMicrostep(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEndMicrostep` instead
    ///
    pub const OnEndMicrostep = onEndMicrostep;

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
    pub fn onEndMicrostep(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnEndMicrostep(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEndMicrostep` instead
    ///
    pub const SuperEndMicrostep = superEndMicrostep;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEndMicrostep(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_SuperEndMicrostep(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` e: QEvent `
    ///
    pub fn event(self: QStateMachine, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QStateMachine_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) bool) void {
        qtc.QStateMachine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QStateMachine, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QStateMachine_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStateMachine.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStateMachine.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `postEvent2` instead
    ///
    pub const PostEvent2 = postEvent2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    /// ` priority: qstatemachine_enums.EventPriority `
    ///
    pub fn postEvent2(self: QStateMachine, _event: anytype, priority: i32) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_PostEvent2(@ptrCast(self.ptr), @ptrCast(_event.ptr), @bitCast(priority));
    }

    /// ### DEPRECATED: Use `errorState` instead
    ///
    pub const ErrorState = errorState;

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#errorState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn errorState(self: QStateMachine) QAbstractState {
        return .{ .ptr = qtc.QState_ErrorState(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setErrorState` instead
    ///
    pub const SetErrorState = setErrorState;

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
    pub fn setErrorState(self: QStateMachine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QAbstractState;
        qtc.QState_SetErrorState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `addTransition` instead
    ///
    pub const AddTransition = addTransition;

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
    pub fn addTransition(self: QStateMachine, transition: anytype) void {
        comptime _ = @TypeOf(transition)._is_QAbstractTransition;
        qtc.QState_AddTransition(@ptrCast(self.ptr), @ptrCast(transition.ptr));
    }

    /// ### DEPRECATED: Use `addTransition2` instead
    ///
    pub const AddTransition2 = addTransition2;

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` target: QAbstractState `
    ///
    pub fn addTransition2(self: QStateMachine, _sender: anytype, signal: [:0]const u8, target: anytype) QSignalTransition {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(target)._is_QAbstractState;
        return .{ .ptr = qtc.QState_AddTransition2(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, @ptrCast(target.ptr)) };
    }

    /// ### DEPRECATED: Use `addTransition3` instead
    ///
    pub const AddTransition3 = addTransition3;

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
    pub fn addTransition3(self: QStateMachine, target: anytype) QAbstractTransition {
        comptime _ = @TypeOf(target)._is_QAbstractState;
        return .{ .ptr = qtc.QState_AddTransition3(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// ### DEPRECATED: Use `removeTransition` instead
    ///
    pub const RemoveTransition = removeTransition;

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
    pub fn removeTransition(self: QStateMachine, transition: anytype) void {
        comptime _ = @TypeOf(transition)._is_QAbstractTransition;
        qtc.QState_RemoveTransition(@ptrCast(self.ptr), @ptrCast(transition.ptr));
    }

    /// ### DEPRECATED: Use `transitions` instead
    ///
    pub const Transitions = transitions;

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
    pub fn transitions(self: QStateMachine, allocator: std.mem.Allocator) []QAbstractTransition {
        const _arr: qtc.libqt_list = qtc.QState_Transitions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractTransition, _arr.len) catch @panic("QStateMachine.transitions: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractTransition = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `initialState` instead
    ///
    pub const InitialState = initialState;

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#initialState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn initialState(self: QStateMachine) QAbstractState {
        return .{ .ptr = qtc.QState_InitialState(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setInitialState` instead
    ///
    pub const SetInitialState = setInitialState;

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
    pub fn setInitialState(self: QStateMachine, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QAbstractState;
        qtc.QState_SetInitialState(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `childMode` instead
    ///
    pub const ChildMode = childMode;

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
    pub fn childMode(self: QStateMachine) i32 {
        return qtc.QState_ChildMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setChildMode` instead
    ///
    pub const SetChildMode = setChildMode;

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
    pub fn setChildMode(self: QStateMachine, mode: i32) void {
        qtc.QState_SetChildMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `assignProperty` instead
    ///
    pub const AssignProperty = assignProperty;

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
    pub fn assignProperty(self: QStateMachine, object: anytype, name: [:0]const u8, value: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QState_AssignProperty(@ptrCast(self.ptr), @ptrCast(object.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `parentState` instead
    ///
    pub const ParentState = parentState;

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#parentState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn parentState(self: QStateMachine) QState {
        return .{ .ptr = qtc.QAbstractState_ParentState(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `machine` instead
    ///
    pub const Machine = machine;

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#machine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn machine(self: QStateMachine) QStateMachine {
        return .{ .ptr = qtc.QAbstractState_Machine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `active` instead
    ///
    pub const Active = active;

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#active)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    pub fn active(self: QStateMachine) bool {
        return qtc.QAbstractState_Active(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activeChanged` instead
    ///
    pub const ActiveChanged = activeChanged;

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine `
    ///
    /// ` _active: bool `
    ///
    pub fn activeChanged(self: QStateMachine, _active: bool) void {
        qtc.QAbstractState_ActiveChanged(@ptrCast(self.ptr), _active);
    }

    /// ### DEPRECATED: Use `onActiveChanged` instead
    ///
    pub const OnActiveChanged = onActiveChanged;

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
    pub fn onActiveChanged(self: QStateMachine, callback: *const fn (QStateMachine, bool) callconv(.c) void) void {
        qtc.QAbstractState_Connect_ActiveChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QStateMachine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QStateMachine.objectName: Memory allocation failed");
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
    /// ` self: QStateMachine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QStateMachine, name: []const u8) void {
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
    /// ` self: QStateMachine `
    ///
    pub fn isWidgetType(self: QStateMachine) bool {
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
    /// ` self: QStateMachine `
    ///
    pub fn isWindowType(self: QStateMachine) bool {
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
    /// ` self: QStateMachine `
    ///
    pub fn isQuickItemType(self: QStateMachine) bool {
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
    /// ` self: QStateMachine `
    ///
    pub fn signalsBlocked(self: QStateMachine) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QStateMachine, b: bool) bool {
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
    /// ` self: QStateMachine `
    ///
    pub fn thread(self: QStateMachine) QThread {
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
    /// ` self: QStateMachine `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QStateMachine, _thread: anytype) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QStateMachine, interval: i32) i32 {
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
    /// ` self: QStateMachine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QStateMachine, time: i64) i32 {
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
    /// ` self: QStateMachine `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QStateMachine, id: i32) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QStateMachine, id: i32) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QStateMachine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QStateMachine.children: Memory allocation failed");
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
    /// ` self: QStateMachine `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QStateMachine, _parent: anytype) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QStateMachine, filterObj: anytype) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QStateMachine, obj: anytype) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QStateMachine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QStateMachine `
    ///
    pub fn disconnect3(self: QStateMachine) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QStateMachine, receiver: anytype) bool {
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
    /// ` self: QStateMachine `
    ///
    pub fn dumpObjectTree(self: QStateMachine) void {
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
    /// ` self: QStateMachine `
    ///
    pub fn dumpObjectInfo(self: QStateMachine) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QStateMachine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QStateMachine, name: [:0]const u8) QVariant {
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
    /// ` self: QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QStateMachine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QStateMachine.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QStateMachine.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QStateMachine `
    ///
    pub fn bindingStorage(self: QStateMachine) QBindingStorage {
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
    /// ` self: QStateMachine `
    ///
    pub fn bindingStorage2(self: QStateMachine) QBindingStorage {
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
    /// ` self: QStateMachine `
    ///
    pub fn destroyed(self: QStateMachine) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
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
    /// ` self: QStateMachine `
    ///
    pub fn parent(self: QStateMachine) QObject {
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
    /// ` self: QStateMachine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QStateMachine, classname: [:0]const u8) bool {
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
    /// ` self: QStateMachine `
    ///
    pub fn deleteLater(self: QStateMachine) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QStateMachine, interval: i32, timerType: i32) i32 {
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
    /// ` self: QStateMachine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QStateMachine, time: i64, timerType: i32) i32 {
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
    /// ` self: QStateMachine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QStateMachine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QStateMachine, signal: [:0]const u8) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QStateMachine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QStateMachine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QStateMachine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QStateMachine `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QStateMachine, param1: anytype) void {
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
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QStateMachine, callback: *const fn (QStateMachine, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QStateMachine_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QStateMachine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QStateMachine, callback: *const fn (QStateMachine, QTimerEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QStateMachine_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QStateMachine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QStateMachine, callback: *const fn (QStateMachine, QChildEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QStateMachine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QStateMachine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QStateMachine, callback: *const fn (QStateMachine, QEvent) callconv(.c) void) void {
        qtc.QStateMachine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QStateMachine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStateMachine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QStateMachine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStateMachine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QStateMachine, callback: *const fn (QStateMachine, QMetaMethod) callconv(.c) void) void {
        qtc.QStateMachine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QStateMachine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStateMachine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QStateMachine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QStateMachine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QStateMachine, callback: *const fn (QStateMachine, QMetaMethod) callconv(.c) void) void {
        qtc.QStateMachine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    pub fn sender(self: QStateMachine) QObject {
        return .{ .ptr = qtc.QStateMachine_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QStateMachine `
    ///
    pub fn superSender(self: QStateMachine) QObject {
        return .{ .ptr = qtc.QStateMachine_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QStateMachine, callback: *const fn () callconv(.c) QObject) void {
        qtc.QStateMachine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    pub fn senderSignalIndex(self: QStateMachine) i32 {
        return qtc.QStateMachine_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QStateMachine `
    ///
    pub fn superSenderSignalIndex(self: QStateMachine) i32 {
        return qtc.QStateMachine_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QStateMachine, callback: *const fn () callconv(.c) i32) void {
        qtc.QStateMachine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QStateMachine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStateMachine_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QStateMachine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStateMachine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QStateMachine, callback: *const fn (QStateMachine, [*:0]const u8) callconv(.c) i32) void {
        qtc.QStateMachine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QStateMachine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStateMachine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStateMachine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QStateMachine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QStateMachine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QStateMachine`
    ///
    /// ` callback: *const fn (self: QStateMachine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QStateMachine, callback: *const fn (QStateMachine, QMetaMethod) callconv(.c) bool) void {
        qtc.QStateMachine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onStarted` instead
    ///
    pub const OnStarted = onStarted;

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
    pub fn onStarted(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QStateMachine_Connect_Started(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onStopped` instead
    ///
    pub const OnStopped = onStopped;

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
    pub fn onStopped(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QStateMachine_Connect_Stopped(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

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
    pub fn onFinished(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onPropertiesAssigned` instead
    ///
    pub const OnPropertiesAssigned = onPropertiesAssigned;

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
    pub fn onPropertiesAssigned(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_PropertiesAssigned(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onChildModeChanged` instead
    ///
    pub const OnChildModeChanged = onChildModeChanged;

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
    pub fn onChildModeChanged(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_ChildModeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onInitialStateChanged` instead
    ///
    pub const OnInitialStateChanged = onInitialStateChanged;

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
    pub fn onInitialStateChanged(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_InitialStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onErrorStateChanged` instead
    ///
    pub const OnErrorStateChanged = onErrorStateChanged;

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
    pub fn onErrorStateChanged(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QState_Connect_ErrorStateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onEntered` instead
    ///
    pub const OnEntered = onEntered;

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
    pub fn onEntered(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QAbstractState_Connect_Entered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onExited` instead
    ///
    pub const OnExited = onExited;

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
    pub fn onExited(self: QStateMachine, callback: *const fn (QStateMachine) callconv(.c) void) void {
        qtc.QAbstractState_Connect_Exited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QStateMachine `
    ///
    /// ` callback: *const fn (self: QStateMachine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QStateMachine, callback: *const fn (QStateMachine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#dtor.QStateMachine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStateMachine `
    ///
    pub fn delete(self: QStateMachine) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStateMachine::SignalEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` _signalIndex: i32 `
    ///
    /// ` _arguments: []QVariant `
    ///
    pub fn new(_sender: anytype, _signalIndex: i32, _arguments: []QVariant) QStateMachine__SignalEvent {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const arguments_list = qtc.libqt_list{
            .len = _arguments.len,
            .data = @ptrCast(_arguments.ptr),
        };
        return .{ .ptr = qtc.QStateMachine__SignalEvent_new(@ptrCast(_sender.ptr), @bitCast(_signalIndex), arguments_list) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStateMachine::SignalEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStateMachine__SignalEvent `
    ///
    pub fn new2(param1: anytype) QStateMachine__SignalEvent {
        comptime _ = @TypeOf(param1)._is_QStateMachine__SignalEvent;
        return .{ .ptr = qtc.QStateMachine__SignalEvent_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#sender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn sender(self: QStateMachine__SignalEvent) QObject {
        return .{ .ptr = qtc.QStateMachine__SignalEvent_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `signalIndex` instead
    ///
    pub const SignalIndex = signalIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#signalIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn signalIndex(self: QStateMachine__SignalEvent) i32 {
        return qtc.QStateMachine__SignalEvent_SignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `arguments` instead
    ///
    pub const Arguments = arguments;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn arguments(self: QStateMachine__SignalEvent, allocator: std.mem.Allocator) []QVariant {
        const _arr: qtc.libqt_list = qtc.QStateMachine__SignalEvent_Arguments(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QVariant, _arr.len) catch @panic("QStateMachine__SignalEvent.arguments: Memory allocation failed");
        const _data_val: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QStateMachine__SignalEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn spontaneous(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn isAccepted(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn accept(self: QStateMachine__SignalEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn ignore(self: QStateMachine__SignalEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn isInputEvent(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn isPointerEvent(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn isSinglePointEvent(self: QStateMachine__SignalEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QStateMachine__SignalEvent, accepted: bool) void {
        qtc.QStateMachine__SignalEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QStateMachine__SignalEvent, accepted: bool) void {
        qtc.QStateMachine__SignalEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QStateMachine__SignalEvent, callback: *const fn (QStateMachine__SignalEvent, bool) callconv(.c) void) void {
        qtc.QStateMachine__SignalEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

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
    pub fn clone(self: QStateMachine__SignalEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__SignalEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

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
    pub fn superClone(self: QStateMachine__SignalEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__SignalEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QStateMachine__SignalEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QStateMachine__SignalEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStateMachine__SignalEvent `
    ///
    pub fn delete(self: QStateMachine__SignalEvent) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QStateMachine::WrappedEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn new(_object: anytype, _event: anytype) QStateMachine__WrappedEvent {
        comptime _ = @TypeOf(_object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_new(@ptrCast(_object.ptr), @ptrCast(_event.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QStateMachine::WrappedEvent object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QStateMachine__WrappedEvent `
    ///
    pub fn new2(param1: anytype) QStateMachine__WrappedEvent {
        comptime _ = @TypeOf(param1)._is_QStateMachine__WrappedEvent;
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn object(self: QStateMachine__WrappedEvent) QObject {
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn event(self: QStateMachine__WrappedEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_Event(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: QStateMachine__WrappedEvent) i32 {
        return qtc.QEvent_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spontaneous` instead
    ///
    pub const Spontaneous = spontaneous;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn spontaneous(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAccepted` instead
    ///
    pub const IsAccepted = isAccepted;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn isAccepted(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn accept(self: QStateMachine__WrappedEvent) void {
        qtc.QEvent_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ignore` instead
    ///
    pub const Ignore = ignore;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn ignore(self: QStateMachine__WrappedEvent) void {
        qtc.QEvent_Ignore(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isInputEvent` instead
    ///
    pub const IsInputEvent = isInputEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn isInputEvent(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isPointerEvent` instead
    ///
    pub const IsPointerEvent = isPointerEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn isPointerEvent(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSinglePointEvent` instead
    ///
    pub const IsSinglePointEvent = isSinglePointEvent;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn isSinglePointEvent(self: QStateMachine__WrappedEvent) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerEventType` instead
    ///
    pub const RegisterEventType = registerEventType;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    pub fn registerEventType() i32 {
        return qtc.QEvent_RegisterEventType();
    }

    /// ### DEPRECATED: Use `registerEventType1` instead
    ///
    pub const RegisterEventType1 = registerEventType1;

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
    ///
    /// ## Parameter(s):
    ///
    /// ` hint: i32 `
    ///
    pub fn registerEventType1(hint: i32) i32 {
        return qtc.QEvent_RegisterEventType1(@bitCast(hint));
    }

    /// ### DEPRECATED: Use `setAccepted` instead
    ///
    pub const SetAccepted = setAccepted;

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
    pub fn setAccepted(self: QStateMachine__WrappedEvent, accepted: bool) void {
        qtc.QStateMachine__WrappedEvent_SetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `superSetAccepted` instead
    ///
    pub const SuperSetAccepted = superSetAccepted;

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
    pub fn superSetAccepted(self: QStateMachine__WrappedEvent, accepted: bool) void {
        qtc.QStateMachine__WrappedEvent_SuperSetAccepted(@ptrCast(self.ptr), accepted);
    }

    /// ### DEPRECATED: Use `onSetAccepted` instead
    ///
    pub const OnSetAccepted = onSetAccepted;

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
    pub fn onSetAccepted(self: QStateMachine__WrappedEvent, callback: *const fn (QStateMachine__WrappedEvent, bool) callconv(.c) void) void {
        qtc.QStateMachine__WrappedEvent_OnSetAccepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

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
    pub fn clone(self: QStateMachine__WrappedEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

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
    pub fn superClone(self: QStateMachine__WrappedEvent) QEvent {
        return .{ .ptr = qtc.QStateMachine__WrappedEvent_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

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
    pub fn onClone(self: QStateMachine__WrappedEvent, callback: *const fn () callconv(.c) QEvent) void {
        qtc.QStateMachine__WrappedEvent_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QStateMachine__WrappedEvent `
    ///
    pub fn delete(self: QStateMachine__WrappedEvent) void {
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
