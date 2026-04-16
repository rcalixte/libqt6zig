const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAnimationGroup = @import("libqt6").QAnimationGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractanimation_enums = @import("libqabstractanimation.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html)
pub const QPauseAnimation = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPauseAnimation,

    pub const _is_QPauseAnimation = {};
    pub const _is_QAbstractAnimation = {};
    pub const _is_QObject = {};

    /// New constructs a new QPauseAnimation object.
    ///
    pub fn New() QPauseAnimation {
        return .{ .ptr = qtc.QPauseAnimation_new() };
    }

    /// New2 constructs a new QPauseAnimation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i32 `
    ///
    pub fn New2(msecs: i32) QPauseAnimation {
        return .{ .ptr = qtc.QPauseAnimation_new2(@bitCast(msecs)) };
    }

    /// New3 constructs a new QPauseAnimation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New3(parent: anytype) QPauseAnimation {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPauseAnimation_new3(@ptrCast(parent.ptr)) };
    }

    /// New4 constructs a new QPauseAnimation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` msecs: i32 `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(msecs: i32, parent: anytype) QPauseAnimation {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QPauseAnimation_new4(@bitCast(msecs), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn MetaObject(self: QPauseAnimation) QMetaObject {
        return .{ .ptr = qtc.QPauseAnimation_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QPauseAnimation, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPauseAnimation_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPauseAnimation `
    ///
    pub fn SuperMetaObject(self: QPauseAnimation) QMetaObject {
        return .{ .ptr = qtc.QPauseAnimation_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPauseAnimation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPauseAnimation_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPauseAnimation, callback: *const fn (QPauseAnimation, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPauseAnimation_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPauseAnimation, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPauseAnimation_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPauseAnimation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPauseAnimation_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPauseAnimation, callback: *const fn (QPauseAnimation, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPauseAnimation_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QPauseAnimation, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPauseAnimation_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpauseanimation.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Duration(self: QPauseAnimation) i32 {
        return qtc.QPauseAnimation_Duration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDuration(self: QPauseAnimation, callback: *const fn () callconv(.c) i32) void {
        qtc.QPauseAnimation_OnDuration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDuration` instead
    ///
    pub const QBaseDuration = SuperDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn SuperDuration(self: QPauseAnimation) i32 {
        return qtc.QPauseAnimation_SuperDuration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#setDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetDuration(self: QPauseAnimation, msecs: i32) void {
        qtc.QPauseAnimation_SetDuration(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QPauseAnimation, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPauseAnimation_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QPauseAnimation, callback: *const fn (QPauseAnimation, QEvent) callconv(.c) bool) void {
        qtc.QPauseAnimation_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: QPauseAnimation, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPauseAnimation_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` param1: i32 `
    ///
    pub fn UpdateCurrentTime(self: QPauseAnimation, param1: i32) void {
        qtc.QPauseAnimation_UpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation, param1: i32) callconv(.c) void `
    ///
    pub fn OnUpdateCurrentTime(self: QPauseAnimation, callback: *const fn (QPauseAnimation, i32) callconv(.c) void) void {
        qtc.QPauseAnimation_OnUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateCurrentTime` instead
    ///
    pub const QBaseUpdateCurrentTime = SuperUpdateCurrentTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperUpdateCurrentTime(self: QPauseAnimation, param1: i32) void {
        qtc.QPauseAnimation_SuperUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpauseanimation.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpauseanimation.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.State `
    ///
    pub fn State(self: QPauseAnimation) i32 {
        return qtc.QAbstractAnimation_State(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Group(self: QPauseAnimation) QAnimationGroup {
        return .{ .ptr = qtc.QAbstractAnimation_Group(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.Direction `
    ///
    pub fn Direction(self: QPauseAnimation) i32 {
        return qtc.QAbstractAnimation_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn SetDirection(self: QPauseAnimation, direction: i32) void {
        qtc.QAbstractAnimation_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn CurrentTime(self: QPauseAnimation) i32 {
        return qtc.QAbstractAnimation_CurrentTime(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn CurrentLoopTime(self: QPauseAnimation) i32 {
        return qtc.QAbstractAnimation_CurrentLoopTime(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn LoopCount(self: QPauseAnimation) i32 {
        return qtc.QAbstractAnimation_LoopCount(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` loopCount: i32 `
    ///
    pub fn SetLoopCount(self: QPauseAnimation, loopCount: i32) void {
        qtc.QAbstractAnimation_SetLoopCount(@ptrCast(self.ptr), @bitCast(loopCount));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn CurrentLoop(self: QPauseAnimation) i32 {
        return qtc.QAbstractAnimation_CurrentLoop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn TotalDuration(self: QPauseAnimation) i32 {
        return qtc.QAbstractAnimation_TotalDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Finished(self: QPauseAnimation) void {
        qtc.QAbstractAnimation_Finished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation) callconv(.c) void `
    ///
    pub fn OnFinished(self: QPauseAnimation, callback: *const fn (QPauseAnimation) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn StateChanged(self: QPauseAnimation, newState: i32, oldState: i32) void {
        qtc.QAbstractAnimation_StateChanged(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QPauseAnimation, callback: *const fn (QPauseAnimation, i32, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` currentLoop: i32 `
    ///
    pub fn CurrentLoopChanged(self: QPauseAnimation, currentLoop: i32) void {
        qtc.QAbstractAnimation_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(currentLoop));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation, currentLoop: i32) callconv(.c) void `
    ///
    pub fn OnCurrentLoopChanged(self: QPauseAnimation, callback: *const fn (QPauseAnimation, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` param1: qabstractanimation_enums.Direction `
    ///
    pub fn DirectionChanged(self: QPauseAnimation, param1: i32) void {
        qtc.QAbstractAnimation_DirectionChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation, param1: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn OnDirectionChanged(self: QPauseAnimation, callback: *const fn (QPauseAnimation, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_DirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Start(self: QPauseAnimation) void {
        qtc.QAbstractAnimation_Start(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Pause(self: QPauseAnimation) void {
        qtc.QAbstractAnimation_Pause(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Resume(self: QPauseAnimation) void {
        qtc.QAbstractAnimation_Resume(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` paused: bool `
    ///
    pub fn SetPaused(self: QPauseAnimation, paused: bool) void {
        qtc.QAbstractAnimation_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Stop(self: QPauseAnimation) void {
        qtc.QAbstractAnimation_Stop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetCurrentTime(self: QPauseAnimation, msecs: i32) void {
        qtc.QAbstractAnimation_SetCurrentTime(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` policy: qabstractanimation_enums.DeletionPolicy `
    ///
    pub fn Start1(self: QPauseAnimation, policy: i32) void {
        qtc.QAbstractAnimation_Start1(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPauseAnimation, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qpauseanimation.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPauseAnimation, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn IsWidgetType(self: QPauseAnimation) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn IsWindowType(self: QPauseAnimation) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn IsQuickItemType(self: QPauseAnimation) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn SignalsBlocked(self: QPauseAnimation) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPauseAnimation, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Thread(self: QPauseAnimation) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPauseAnimation, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPauseAnimation, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPauseAnimation, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPauseAnimation, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPauseAnimation, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPauseAnimation, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qpauseanimation.Children: Memory allocation failed");
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
    /// ` self: QPauseAnimation `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPauseAnimation, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPauseAnimation, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPauseAnimation, obj: anytype) void {
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
    /// ` self: QPauseAnimation `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPauseAnimation, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPauseAnimation `
    ///
    pub fn Disconnect3(self: QPauseAnimation) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPauseAnimation, receiver: anytype) bool {
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
    /// ` self: QPauseAnimation `
    ///
    pub fn DumpObjectTree(self: QPauseAnimation) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn DumpObjectInfo(self: QPauseAnimation) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPauseAnimation, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPauseAnimation `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPauseAnimation, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPauseAnimation, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qpauseanimation.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qpauseanimation.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPauseAnimation `
    ///
    pub fn BindingStorage(self: QPauseAnimation) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn BindingStorage2(self: QPauseAnimation) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Destroyed(self: QPauseAnimation) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPauseAnimation, callback: *const fn (QPauseAnimation) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Parent(self: QPauseAnimation) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPauseAnimation, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn DeleteLater(self: QPauseAnimation) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPauseAnimation, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPauseAnimation, time: i64, timerType: i32) i32 {
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
    /// ` self: QPauseAnimation `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPauseAnimation, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPauseAnimation, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPauseAnimation, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPauseAnimation, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPauseAnimation `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPauseAnimation, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPauseAnimation `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPauseAnimation, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPauseAnimation, callback: *const fn (QPauseAnimation, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn UpdateState(self: QPauseAnimation, newState: i32, oldState: i32) void {
        qtc.QPauseAnimation_UpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### DEPRECATED: Use `SuperUpdateState` instead
    ///
    pub const QBaseUpdateState = SuperUpdateState;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn SuperUpdateState(self: QPauseAnimation, newState: i32, oldState: i32) void {
        qtc.QPauseAnimation_SuperUpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn OnUpdateState(self: QPauseAnimation, callback: *const fn (QPauseAnimation, i32, i32) callconv(.c) void) void {
        qtc.QPauseAnimation_OnUpdateState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn UpdateDirection(self: QPauseAnimation, direction: i32) void {
        qtc.QPauseAnimation_UpdateDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `SuperUpdateDirection` instead
    ///
    pub const QBaseUpdateDirection = SuperUpdateDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn SuperUpdateDirection(self: QPauseAnimation, direction: i32) void {
        qtc.QPauseAnimation_SuperUpdateDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, direction: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn OnUpdateDirection(self: QPauseAnimation, callback: *const fn (QPauseAnimation, i32) callconv(.c) void) void {
        qtc.QPauseAnimation_OnUpdateDirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPauseAnimation, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPauseAnimation_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPauseAnimation `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QPauseAnimation, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPauseAnimation_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QPauseAnimation, callback: *const fn (QPauseAnimation, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPauseAnimation_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPauseAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPauseAnimation_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPauseAnimation `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPauseAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPauseAnimation_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QPauseAnimation, callback: *const fn (QPauseAnimation, QTimerEvent) callconv(.c) void) void {
        qtc.QPauseAnimation_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPauseAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPauseAnimation_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPauseAnimation `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPauseAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPauseAnimation_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QPauseAnimation, callback: *const fn (QPauseAnimation, QChildEvent) callconv(.c) void) void {
        qtc.QPauseAnimation_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPauseAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPauseAnimation_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPauseAnimation `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPauseAnimation, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPauseAnimation_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QPauseAnimation, callback: *const fn (QPauseAnimation, QEvent) callconv(.c) void) void {
        qtc.QPauseAnimation_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QPauseAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPauseAnimation_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPauseAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPauseAnimation_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QPauseAnimation, callback: *const fn (QPauseAnimation, QMetaMethod) callconv(.c) void) void {
        qtc.QPauseAnimation_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QPauseAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPauseAnimation_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPauseAnimation, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPauseAnimation_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QPauseAnimation, callback: *const fn (QPauseAnimation, QMetaMethod) callconv(.c) void) void {
        qtc.QPauseAnimation_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Sender(self: QPauseAnimation) QObject {
        return .{ .ptr = qtc.QPauseAnimation_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPauseAnimation `
    ///
    pub fn SuperSender(self: QPauseAnimation) QObject {
        return .{ .ptr = qtc.QPauseAnimation_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QPauseAnimation, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPauseAnimation_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn SenderSignalIndex(self: QPauseAnimation) i32 {
        return qtc.QPauseAnimation_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPauseAnimation `
    ///
    pub fn SuperSenderSignalIndex(self: QPauseAnimation) i32 {
        return qtc.QPauseAnimation_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QPauseAnimation, callback: *const fn () callconv(.c) i32) void {
        qtc.QPauseAnimation_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QPauseAnimation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPauseAnimation_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPauseAnimation, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPauseAnimation_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QPauseAnimation, callback: *const fn (QPauseAnimation, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPauseAnimation_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QPauseAnimation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPauseAnimation_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPauseAnimation `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPauseAnimation, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPauseAnimation_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation`
    ///
    /// ` callback: *const fn (self: QPauseAnimation, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QPauseAnimation, callback: *const fn (QPauseAnimation, QMetaMethod) callconv(.c) bool) void {
        qtc.QPauseAnimation_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPauseAnimation `
    ///
    /// ` callback: *const fn (self: QPauseAnimation, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPauseAnimation, callback: *const fn (QPauseAnimation, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#dtor.QPauseAnimation)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPauseAnimation `
    ///
    pub fn Delete(self: QPauseAnimation) void {
        qtc.QPauseAnimation_Delete(@ptrCast(self.ptr));
    }
};
