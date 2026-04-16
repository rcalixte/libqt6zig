const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAnimation = @import("libqt6").QAbstractAnimation;
const QAnimationGroup = @import("libqt6").QAnimationGroup;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPauseAnimation = @import("libqt6").QPauseAnimation;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractanimation_enums = @import("libqabstractanimation.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html)
pub const QSequentialAnimationGroup = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSequentialAnimationGroup,

    pub const _is_QSequentialAnimationGroup = {};
    pub const _is_QAnimationGroup = {};
    pub const _is_QAbstractAnimation = {};
    pub const _is_QObject = {};

    /// New constructs a new QSequentialAnimationGroup object.
    ///
    pub fn New() QSequentialAnimationGroup {
        return .{ .ptr = qtc.QSequentialAnimationGroup_new() };
    }

    /// New2 constructs a new QSequentialAnimationGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QSequentialAnimationGroup {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QSequentialAnimationGroup_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn MetaObject(self: QSequentialAnimationGroup) QMetaObject {
        return .{ .ptr = qtc.QSequentialAnimationGroup_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSequentialAnimationGroup, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSequentialAnimationGroup_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn SuperMetaObject(self: QSequentialAnimationGroup) QMetaObject {
        return .{ .ptr = qtc.QSequentialAnimationGroup_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSequentialAnimationGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSequentialAnimationGroup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSequentialAnimationGroup_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSequentialAnimationGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSequentialAnimationGroup_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSequentialAnimationGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSequentialAnimationGroup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSequentialAnimationGroup_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSequentialAnimationGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSequentialAnimationGroup_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsequentialanimationgroup.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#addPause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` msecs: i32 `
    ///
    pub fn AddPause(self: QSequentialAnimationGroup, msecs: i32) QPauseAnimation {
        return .{ .ptr = qtc.QSequentialAnimationGroup_AddPause(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#insertPause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    /// ` msecs: i32 `
    ///
    pub fn InsertPause(self: QSequentialAnimationGroup, index: i32, msecs: i32) QPauseAnimation {
        return .{ .ptr = qtc.QSequentialAnimationGroup_InsertPause(@ptrCast(self.ptr), @bitCast(index), @bitCast(msecs)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn CurrentAnimation(self: QSequentialAnimationGroup) QAbstractAnimation {
        return .{ .ptr = qtc.QSequentialAnimationGroup_CurrentAnimation(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Duration(self: QSequentialAnimationGroup) i32 {
        return qtc.QSequentialAnimationGroup_Duration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDuration(self: QSequentialAnimationGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QSequentialAnimationGroup_OnDuration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDuration` instead
    ///
    pub const QBaseDuration = SuperDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn SuperDuration(self: QSequentialAnimationGroup) i32 {
        return qtc.QSequentialAnimationGroup_SuperDuration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` current: QAbstractAnimation `
    ///
    pub fn CurrentAnimationChanged(self: QSequentialAnimationGroup, current: anytype) void {
        comptime _ = @TypeOf(current)._is_QAbstractAnimation;
        qtc.QSequentialAnimationGroup_CurrentAnimationChanged(@ptrCast(self.ptr), @ptrCast(current.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, current: QAbstractAnimation) callconv(.c) void `
    ///
    pub fn OnCurrentAnimationChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QAbstractAnimation) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_Connect_CurrentAnimationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSequentialAnimationGroup, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSequentialAnimationGroup_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QEvent) callconv(.c) bool) void {
        qtc.QSequentialAnimationGroup_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSequentialAnimationGroup, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSequentialAnimationGroup_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: i32 `
    ///
    pub fn UpdateCurrentTime(self: QSequentialAnimationGroup, param1: i32) void {
        qtc.QSequentialAnimationGroup_UpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, param1: i32) callconv(.c) void `
    ///
    pub fn OnUpdateCurrentTime(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateCurrentTime` instead
    ///
    pub const QBaseUpdateCurrentTime = SuperUpdateCurrentTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperUpdateCurrentTime(self: QSequentialAnimationGroup, param1: i32) void {
        qtc.QSequentialAnimationGroup_SuperUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn UpdateState(self: QSequentialAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QSequentialAnimationGroup_UpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn OnUpdateState(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32, i32) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnUpdateState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateState` instead
    ///
    pub const QBaseUpdateState = SuperUpdateState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn SuperUpdateState(self: QSequentialAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QSequentialAnimationGroup_SuperUpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn UpdateDirection(self: QSequentialAnimationGroup, direction: i32) void {
        qtc.QSequentialAnimationGroup_UpdateDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, direction: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn OnUpdateDirection(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnUpdateDirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateDirection` instead
    ///
    pub const QBaseUpdateDirection = SuperUpdateDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn SuperUpdateDirection(self: QSequentialAnimationGroup, direction: i32) void {
        qtc.QSequentialAnimationGroup_SuperUpdateDirection(@ptrCast(self.ptr), @bitCast(direction));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsequentialanimationgroup.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsequentialanimationgroup.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    pub fn AnimationAt(self: QSequentialAnimationGroup, index: i32) QAbstractAnimation {
        return .{ .ptr = qtc.QAnimationGroup_AnimationAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn AnimationCount(self: QSequentialAnimationGroup) i32 {
        return qtc.QAnimationGroup_AnimationCount(@ptrCast(self.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn IndexOfAnimation(self: QSequentialAnimationGroup, animation: anytype) i32 {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        return qtc.QAnimationGroup_IndexOfAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn AddAnimation(self: QSequentialAnimationGroup, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_AddAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn InsertAnimation(self: QSequentialAnimationGroup, index: i32, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_InsertAnimation(@ptrCast(self.ptr), @bitCast(index), @ptrCast(animation.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn RemoveAnimation(self: QSequentialAnimationGroup, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_RemoveAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    pub fn TakeAnimation(self: QSequentialAnimationGroup, index: i32) QAbstractAnimation {
        return .{ .ptr = qtc.QAnimationGroup_TakeAnimation(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Clear(self: QSequentialAnimationGroup) void {
        qtc.QAnimationGroup_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.State `
    ///
    pub fn State(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_State(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Group(self: QSequentialAnimationGroup) QAnimationGroup {
        return .{ .ptr = qtc.QAbstractAnimation_Group(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.Direction `
    ///
    pub fn Direction(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn SetDirection(self: QSequentialAnimationGroup, direction: i32) void {
        qtc.QAbstractAnimation_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn CurrentTime(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_CurrentTime(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn CurrentLoopTime(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_CurrentLoopTime(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn LoopCount(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_LoopCount(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` loopCount: i32 `
    ///
    pub fn SetLoopCount(self: QSequentialAnimationGroup, loopCount: i32) void {
        qtc.QAbstractAnimation_SetLoopCount(@ptrCast(self.ptr), @bitCast(loopCount));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn CurrentLoop(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_CurrentLoop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn TotalDuration(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_TotalDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Finished(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Finished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup) callconv(.c) void `
    ///
    pub fn OnFinished(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn StateChanged(self: QSequentialAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QAbstractAnimation_StateChanged(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` currentLoop: i32 `
    ///
    pub fn CurrentLoopChanged(self: QSequentialAnimationGroup, currentLoop: i32) void {
        qtc.QAbstractAnimation_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(currentLoop));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, currentLoop: i32) callconv(.c) void `
    ///
    pub fn OnCurrentLoopChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: qabstractanimation_enums.Direction `
    ///
    pub fn DirectionChanged(self: QSequentialAnimationGroup, param1: i32) void {
        qtc.QAbstractAnimation_DirectionChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, param1: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn OnDirectionChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_DirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Start(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Start(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Pause(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Pause(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Resume(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Resume(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` paused: bool `
    ///
    pub fn SetPaused(self: QSequentialAnimationGroup, paused: bool) void {
        qtc.QAbstractAnimation_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Stop(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Stop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetCurrentTime(self: QSequentialAnimationGroup, msecs: i32) void {
        qtc.QAbstractAnimation_SetCurrentTime(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` policy: qabstractanimation_enums.DeletionPolicy `
    ///
    pub fn Start1(self: QSequentialAnimationGroup, policy: i32) void {
        qtc.QAbstractAnimation_Start1(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSequentialAnimationGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsequentialanimationgroup.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSequentialAnimationGroup, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn IsWidgetType(self: QSequentialAnimationGroup) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn IsWindowType(self: QSequentialAnimationGroup) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn IsQuickItemType(self: QSequentialAnimationGroup) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn SignalsBlocked(self: QSequentialAnimationGroup) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSequentialAnimationGroup, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Thread(self: QSequentialAnimationGroup) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSequentialAnimationGroup, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSequentialAnimationGroup, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSequentialAnimationGroup, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSequentialAnimationGroup, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSequentialAnimationGroup, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSequentialAnimationGroup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsequentialanimationgroup.Children: Memory allocation failed");
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QSequentialAnimationGroup, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSequentialAnimationGroup, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSequentialAnimationGroup, obj: anytype) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSequentialAnimationGroup, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Disconnect3(self: QSequentialAnimationGroup) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSequentialAnimationGroup, receiver: anytype) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn DumpObjectTree(self: QSequentialAnimationGroup) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn DumpObjectInfo(self: QSequentialAnimationGroup) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSequentialAnimationGroup, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSequentialAnimationGroup, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSequentialAnimationGroup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsequentialanimationgroup.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsequentialanimationgroup.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn BindingStorage(self: QSequentialAnimationGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn BindingStorage2(self: QSequentialAnimationGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Destroyed(self: QSequentialAnimationGroup) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Parent(self: QSequentialAnimationGroup) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSequentialAnimationGroup, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn DeleteLater(self: QSequentialAnimationGroup) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSequentialAnimationGroup, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSequentialAnimationGroup, time: i64, timerType: i32) i32 {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSequentialAnimationGroup, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSequentialAnimationGroup, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSequentialAnimationGroup, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSequentialAnimationGroup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSequentialAnimationGroup, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSequentialAnimationGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSequentialAnimationGroup, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSequentialAnimationGroup_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSequentialAnimationGroup, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSequentialAnimationGroup_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSequentialAnimationGroup_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSequentialAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSequentialAnimationGroup_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSequentialAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSequentialAnimationGroup_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QTimerEvent) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSequentialAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSequentialAnimationGroup_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSequentialAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSequentialAnimationGroup_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QChildEvent) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSequentialAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSequentialAnimationGroup_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSequentialAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSequentialAnimationGroup_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QEvent) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSequentialAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSequentialAnimationGroup_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSequentialAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSequentialAnimationGroup_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSequentialAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSequentialAnimationGroup_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSequentialAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSequentialAnimationGroup_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Sender(self: QSequentialAnimationGroup) QObject {
        return .{ .ptr = qtc.QSequentialAnimationGroup_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn SuperSender(self: QSequentialAnimationGroup) QObject {
        return .{ .ptr = qtc.QSequentialAnimationGroup_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSequentialAnimationGroup, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSequentialAnimationGroup_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn SenderSignalIndex(self: QSequentialAnimationGroup) i32 {
        return qtc.QSequentialAnimationGroup_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn SuperSenderSignalIndex(self: QSequentialAnimationGroup) i32 {
        return qtc.QSequentialAnimationGroup_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSequentialAnimationGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QSequentialAnimationGroup_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSequentialAnimationGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSequentialAnimationGroup_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSequentialAnimationGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSequentialAnimationGroup_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSequentialAnimationGroup_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSequentialAnimationGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSequentialAnimationGroup_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSequentialAnimationGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSequentialAnimationGroup_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QMetaMethod) callconv(.c) bool) void {
        qtc.QSequentialAnimationGroup_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#dtor.QSequentialAnimationGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn Delete(self: QSequentialAnimationGroup) void {
        qtc.QSequentialAnimationGroup_Delete(@ptrCast(self.ptr));
    }
};
