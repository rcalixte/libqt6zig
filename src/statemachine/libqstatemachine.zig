const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qcoreevent_enums = @import("../libqcoreevent.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qstate_enums = @import("libqstate.zig").enums;
const qstatemachine_enums = enums;
const std = @import("std");
const set_qtcqabstractstate = std.AutoHashMapUnmanaged(QtC.QAbstractState, void);

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html)
pub const qstatemachine = struct {
    /// New constructs a new QStateMachine object.
    ///
    pub fn New() QtC.QStateMachine {
        return qtc.QStateMachine_new();
    }

    /// New2 constructs a new QStateMachine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` childMode: qstate_enums.ChildMode `
    ///
    pub fn New2(childMode: i32) QtC.QStateMachine {
        return qtc.QStateMachine_new2(@bitCast(childMode));
    }

    /// New3 constructs a new QStateMachine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New3(parent: ?*anyopaque) QtC.QStateMachine {
        return qtc.QStateMachine_new3(@ptrCast(parent));
    }

    /// New4 constructs a new QStateMachine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` childMode: qstate_enums.ChildMode `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New4(childMode: i32, parent: ?*anyopaque) QtC.QStateMachine {
        return qtc.QStateMachine_new4(@bitCast(childMode), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QStateMachine_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.QStateMachine_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QStateMachine_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStateMachine_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QStateMachine_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QStateMachine_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStateMachine_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QStateMachine_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QStateMachine_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` state: QtC.QAbstractState `
    ///
    pub fn AddState(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QStateMachine_AddState(@ptrCast(self), @ptrCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#removeState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` state: QtC.QAbstractState `
    ///
    pub fn RemoveState(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QStateMachine_RemoveState(@ptrCast(self), @ptrCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#error)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ## Returns:
    ///
    /// ` qstatemachine_enums.Error `
    ///
    pub fn Error(self: ?*anyopaque) i32 {
        return qtc.QStateMachine_Error(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#errorString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ErrorString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QStateMachine_ErrorString(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatemachine.ErrorString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#clearError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn ClearError(self: ?*anyopaque) void {
        qtc.QStateMachine_ClearError(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#isRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn IsRunning(self: ?*anyopaque) bool {
        return qtc.QStateMachine_IsRunning(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#isAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn IsAnimated(self: ?*anyopaque) bool {
        return qtc.QStateMachine_IsAnimated(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAnimated(self: ?*anyopaque, enabled: bool) void {
        qtc.QStateMachine_SetAnimated(@ptrCast(self), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#addDefaultAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` animation: QtC.QAbstractAnimation `
    ///
    pub fn AddDefaultAnimation(self: ?*anyopaque, animation: ?*anyopaque) void {
        qtc.QStateMachine_AddDefaultAnimation(@ptrCast(self), @ptrCast(animation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#defaultAnimations)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DefaultAnimations(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractAnimation {
        const _arr: qtc.libqt_list = qtc.QStateMachine_DefaultAnimations(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractAnimation, _arr.len) catch @panic("qstatemachine.DefaultAnimations: Memory allocation failed");
        const _data: [*]QtC.QAbstractAnimation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#removeDefaultAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` animation: QtC.QAbstractAnimation `
    ///
    pub fn RemoveDefaultAnimation(self: ?*anyopaque, animation: ?*anyopaque) void {
        qtc.QStateMachine_RemoveDefaultAnimation(@ptrCast(self), @ptrCast(animation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#globalRestorePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ## Returns:
    ///
    /// ` qstate_enums.RestorePolicy `
    ///
    pub fn GlobalRestorePolicy(self: ?*anyopaque) i32 {
        return qtc.QStateMachine_GlobalRestorePolicy(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setGlobalRestorePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` restorePolicy: qstate_enums.RestorePolicy `
    ///
    pub fn SetGlobalRestorePolicy(self: ?*anyopaque, restorePolicy: i32) void {
        qtc.QStateMachine_SetGlobalRestorePolicy(@ptrCast(self), @bitCast(restorePolicy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn PostEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_PostEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postDelayedEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ` delay: i32 `
    ///
    pub fn PostDelayedEvent(self: ?*anyopaque, event: ?*anyopaque, delay: i32) i32 {
        return qtc.QStateMachine_PostDelayedEvent(@ptrCast(self), @ptrCast(event), @bitCast(delay));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#cancelDelayedEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` id: i32 `
    ///
    pub fn CancelDelayedEvent(self: ?*anyopaque, id: i32) bool {
        return qtc.QStateMachine_CancelDelayedEvent(@ptrCast(self), @bitCast(id));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#configuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Configuration(self: ?*anyopaque, allocator: std.mem.Allocator) set_qtcqabstractstate {
        const _set: qtc.libqt_list = qtc.QStateMachine_Configuration(@ptrCast(self));
        var _ret: set_qtcqabstractstate = .empty;
        const _data: [*]QtC.QAbstractState = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i| {
            _ret.put(allocator, _data[i], {}) catch @panic("qstatemachine.Configuration: Set insertion failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStateMachine_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStateMachine_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QStateMachine_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postDelayedEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ` delay: i64 of milliseconds `
    ///
    pub fn PostDelayedEvent2(self: ?*anyopaque, event: ?*anyopaque, delay: i64) i32 {
        return qtc.QStateMachine_PostDelayedEvent2(@ptrCast(self), @ptrCast(event), @bitCast(delay));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Start(self: ?*anyopaque) void {
        qtc.QStateMachine_Start(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QStateMachine_Stop(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setRunning)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` running: bool `
    ///
    pub fn SetRunning(self: ?*anyopaque, running: bool) void {
        qtc.QStateMachine_SetRunning(@ptrCast(self), running);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#runningChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` running: bool `
    ///
    pub fn RunningChanged(self: ?*anyopaque, running: bool) void {
        qtc.QStateMachine_RunningChanged(@ptrCast(self), running);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#runningChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, running: bool) callconv(.c) void `
    ///
    pub fn OnRunningChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QStateMachine_Connect_RunningChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn OnEntry(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_OnEntry(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnOnEntry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnOnEntry(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperOnEntry(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_SuperOnEntry(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn OnExit(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_OnExit(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnOnExit(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnOnExit(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperOnExit(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_SuperOnExit(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn BeginSelectTransitions(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_BeginSelectTransitions(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnBeginSelectTransitions(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnBeginSelectTransitions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperBeginSelectTransitions(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_SuperBeginSelectTransitions(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EndSelectTransitions(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_EndSelectTransitions(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnEndSelectTransitions(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnEndSelectTransitions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEndSelectTransitions(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_SuperEndSelectTransitions(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn BeginMicrostep(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_BeginMicrostep(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnBeginMicrostep(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnBeginMicrostep(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperBeginMicrostep(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_SuperBeginMicrostep(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EndMicrostep(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_EndMicrostep(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnEndMicrostep(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnEndMicrostep(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEndMicrostep(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_SuperEndMicrostep(@ptrCast(self), @ptrCast(event));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QStateMachine_Event(@ptrCast(self), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, e: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStateMachine_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` e: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QStateMachine_SuperEvent(@ptrCast(self), @ptrCast(e));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ` priority: qstatemachine_enums.EventPriority `
    ///
    pub fn PostEvent2(self: ?*anyopaque, event: ?*anyopaque, priority: i32) void {
        qtc.QStateMachine_PostEvent2(@ptrCast(self), @ptrCast(event), @bitCast(priority));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#errorState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn ErrorState(self: ?*anyopaque) QtC.QAbstractState {
        return qtc.QState_ErrorState(@ptrCast(self));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setErrorState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` state: QtC.QAbstractState `
    ///
    pub fn SetErrorState(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QState_SetErrorState(@ptrCast(self), @ptrCast(state));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` transition: QtC.QAbstractTransition `
    ///
    pub fn AddTransition(self: ?*anyopaque, transition: ?*anyopaque) void {
        qtc.QState_AddTransition(@ptrCast(self), @ptrCast(transition));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` target: QtC.QAbstractState `
    ///
    pub fn AddTransition2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, target: ?*anyopaque) QtC.QSignalTransition {
        const signal_Cstring = signal.ptr;
        return qtc.QState_AddTransition2(@ptrCast(self), @ptrCast(sender), signal_Cstring, @ptrCast(target));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` target: QtC.QAbstractState `
    ///
    pub fn AddTransition3(self: ?*anyopaque, target: ?*anyopaque) QtC.QAbstractTransition {
        return qtc.QState_AddTransition3(@ptrCast(self), @ptrCast(target));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#removeTransition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` transition: QtC.QAbstractTransition `
    ///
    pub fn RemoveTransition(self: ?*anyopaque, transition: ?*anyopaque) void {
        qtc.QState_RemoveTransition(@ptrCast(self), @ptrCast(transition));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#transitions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Transitions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractTransition {
        const _arr: qtc.libqt_list = qtc.QState_Transitions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractTransition, _arr.len) catch @panic("qstatemachine.Transitions: Memory allocation failed");
        const _data: [*]QtC.QAbstractTransition = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#initialState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn InitialState(self: ?*anyopaque) QtC.QAbstractState {
        return qtc.QState_InitialState(@ptrCast(self));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setInitialState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` state: QtC.QAbstractState `
    ///
    pub fn SetInitialState(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.QState_SetInitialState(@ptrCast(self), @ptrCast(state));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#childMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ## Returns:
    ///
    /// ` qstate_enums.ChildMode `
    ///
    pub fn ChildMode(self: ?*anyopaque) i32 {
        return qtc.QState_ChildMode(@ptrCast(self));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setChildMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` mode: qstate_enums.ChildMode `
    ///
    pub fn SetChildMode(self: ?*anyopaque, mode: i32) void {
        qtc.QState_SetChildMode(@ptrCast(self), @bitCast(mode));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#assignProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn AssignProperty(self: ?*anyopaque, object: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) void {
        const name_Cstring = name.ptr;
        qtc.QState_AssignProperty(@ptrCast(self), @ptrCast(object), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#parentState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn ParentState(self: ?*anyopaque) QtC.QState {
        return qtc.QAbstractState_ParentState(@ptrCast(self));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#machine)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Machine(self: ?*anyopaque) QtC.QStateMachine {
        return qtc.QAbstractState_Machine(@ptrCast(self));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#active)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Active(self: ?*anyopaque) bool {
        return qtc.QAbstractState_Active(@ptrCast(self));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` active: bool `
    ///
    pub fn ActiveChanged(self: ?*anyopaque, active: bool) void {
        qtc.QAbstractState_ActiveChanged(@ptrCast(self), active);
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, active: bool) callconv(.c) void `
    ///
    pub fn OnActiveChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QAbstractState_Connect_ActiveChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qstatemachine.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.QStateMachine `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_TimerEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine`
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_ChildEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine`
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_CustomEvent(@ptrCast(self), @ptrCast(event));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QStateMachine_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine`
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStateMachine_ConnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStateMachine_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine`
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStateMachine_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QStateMachine_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine`
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QStateMachine_Sender(@ptrCast(self));
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
    /// ` self: QtC.QStateMachine `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.QStateMachine_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.QStateMachine_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QStateMachine_SenderSignalIndex(@ptrCast(self));
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
    /// ` self: QtC.QStateMachine `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.QStateMachine_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.QStateMachine_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStateMachine_Receivers(@ptrCast(self), signal_Cstring);
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QStateMachine_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine`
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QStateMachine_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QStateMachine_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
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
    /// ` self: QtC.QStateMachine `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.QStateMachine_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine`
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStateMachine_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#started)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnStarted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_Connect_Started(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#stopped)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnStopped(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QStateMachine_Connect_Stopped(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#finished)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QState_Connect_Finished(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#propertiesAssigned)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnPropertiesAssigned(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QState_Connect_PropertiesAssigned(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#childModeChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnChildModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QState_Connect_ChildModeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#initialStateChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnInitialStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QState_Connect_InitialStateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstate.html#errorStateChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnErrorStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QState_Connect_ErrorStateChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#entered)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnEntered(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractState_Connect_Entered(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractState
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#exited)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine) callconv(.c) void `
    ///
    pub fn OnExited(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractState_Connect_Exited(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine `
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QtC.QStateMachine `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStateMachine_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html)
pub const qstatemachine__signalevent = struct {
    /// New constructs a new QStateMachine::SignalEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signalIndex: i32 `
    ///
    /// ` arguments: []QtC.QVariant `
    ///
    pub fn New(sender: ?*anyopaque, signalIndex: i32, arguments: []QtC.QVariant) QtC.QStateMachine__SignalEvent {
        const arguments_list = qtc.libqt_list{
            .len = arguments.len,
            .data = @ptrCast(arguments.ptr),
        };

        return qtc.QStateMachine__SignalEvent_new(@ptrCast(sender), @bitCast(signalIndex), arguments_list);
    }

    /// New2 constructs a new QStateMachine::SignalEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QStateMachine__SignalEvent `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QStateMachine__SignalEvent {
        return qtc.QStateMachine__SignalEvent_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#sender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.QStateMachine__SignalEvent_Sender(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#signalIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn SignalIndex(self: ?*anyopaque) i32 {
        return qtc.QStateMachine__SignalEvent_SignalIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#arguments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Arguments(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QVariant {
        const _arr: qtc.libqt_list = qtc.QStateMachine__SignalEvent_Arguments(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QVariant, _arr.len) catch @panic("qstatemachine__signalevent.Arguments: Memory allocation failed");
        const _data: [*]QtC.QVariant = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
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
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QStateMachine__SignalEvent_SetAccepted(@ptrCast(self), accepted);
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
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QStateMachine__SignalEvent_SuperSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine__SignalEvent`
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine__SignalEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QStateMachine__SignalEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QStateMachine__SignalEvent_Clone(@ptrCast(self));
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
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn SuperClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QStateMachine__SignalEvent_SuperClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine__SignalEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QStateMachine__SignalEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStateMachine__SignalEvent `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStateMachine__SignalEvent_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html)
pub const qstatemachine__wrappedevent = struct {
    /// New constructs a new QStateMachine::WrappedEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` object: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn New(object: ?*anyopaque, event: ?*anyopaque) QtC.QStateMachine__WrappedEvent {
        return qtc.QStateMachine__WrappedEvent_new(@ptrCast(object), @ptrCast(event));
    }

    /// New2 constructs a new QStateMachine::WrappedEvent object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn New2(param1: ?*anyopaque) QtC.QStateMachine__WrappedEvent {
        return qtc.QStateMachine__WrappedEvent_new2(@ptrCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn Object(self: ?*anyopaque) QtC.QObject {
        return qtc.QStateMachine__WrappedEvent_Object(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn Event(self: ?*anyopaque) QtC.QEvent {
        return qtc.QStateMachine__WrappedEvent_Event(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    /// ## Returns:
    ///
    /// ` qcoreevent_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.QEvent_Type(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn Spontaneous(self: ?*anyopaque) bool {
        return qtc.QEvent_Spontaneous(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn IsAccepted(self: ?*anyopaque) bool {
        return qtc.QEvent_IsAccepted(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn Accept(self: ?*anyopaque) void {
        qtc.QEvent_Accept(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn Ignore(self: ?*anyopaque) void {
        qtc.QEvent_Ignore(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn IsInputEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsInputEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn IsPointerEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsPointerEvent(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn IsSinglePointEvent(self: ?*anyopaque) bool {
        return qtc.QEvent_IsSinglePointEvent(@ptrCast(self));
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
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QStateMachine__WrappedEvent_SetAccepted(@ptrCast(self), accepted);
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
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    /// ` accepted: bool `
    ///
    pub fn SuperSetAccepted(self: ?*anyopaque, accepted: bool) void {
        qtc.QStateMachine__WrappedEvent_SuperSetAccepted(@ptrCast(self), accepted);
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent`
    ///
    /// ` callback: *const fn (self: QtC.QStateMachine__WrappedEvent, accepted: bool) callconv(.c) void `
    ///
    pub fn OnSetAccepted(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QStateMachine__WrappedEvent_OnSetAccepted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn Clone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QStateMachine__WrappedEvent_Clone(@ptrCast(self));
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
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn SuperClone(self: ?*anyopaque) QtC.QEvent {
        return qtc.QStateMachine__WrappedEvent_SuperClone(@ptrCast(self));
    }

    /// Inherited from QEvent
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QEvent `
    ///
    pub fn OnClone(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QEvent) void {
        qtc.QStateMachine__WrappedEvent_OnClone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QStateMachine__WrappedEvent `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QStateMachine__WrappedEvent_Delete(@ptrCast(self));
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
