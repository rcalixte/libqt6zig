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
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qabstractanimation_enums = @import("libqabstractanimation.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html)
pub const QParallelAnimationGroup = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QParallelAnimationGroup,

    pub const _is_QParallelAnimationGroup = {};
    pub const _is_QAnimationGroup = {};
    pub const _is_QAbstractAnimation = {};
    pub const _is_QObject = {};

    /// New constructs a new QParallelAnimationGroup object.
    ///
    pub fn New() QParallelAnimationGroup {
        return .{ .ptr = qtc.QParallelAnimationGroup_new() };
    }

    /// New2 constructs a new QParallelAnimationGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) QParallelAnimationGroup {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QParallelAnimationGroup_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn MetaObject(self: QParallelAnimationGroup) QMetaObject {
        return .{ .ptr = qtc.QParallelAnimationGroup_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QParallelAnimationGroup, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QParallelAnimationGroup_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn SuperMetaObject(self: QParallelAnimationGroup) QMetaObject {
        return .{ .ptr = qtc.QParallelAnimationGroup_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QParallelAnimationGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QParallelAnimationGroup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QParallelAnimationGroup_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QParallelAnimationGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QParallelAnimationGroup_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QParallelAnimationGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QParallelAnimationGroup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QParallelAnimationGroup_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QParallelAnimationGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QParallelAnimationGroup_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qparallelanimationgroup.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Duration(self: QParallelAnimationGroup) i32 {
        return qtc.QParallelAnimationGroup_Duration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDuration(self: QParallelAnimationGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QParallelAnimationGroup_OnDuration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDuration` instead
    ///
    pub const QBaseDuration = SuperDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn SuperDuration(self: QParallelAnimationGroup) i32 {
        return qtc.QParallelAnimationGroup_SuperDuration(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QParallelAnimationGroup, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QParallelAnimationGroup_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, QEvent) callconv(.c) bool) void {
        qtc.QParallelAnimationGroup_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QParallelAnimationGroup, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QParallelAnimationGroup_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` currentTime: i32 `
    ///
    pub fn UpdateCurrentTime(self: QParallelAnimationGroup, currentTime: i32) void {
        qtc.QParallelAnimationGroup_UpdateCurrentTime(@ptrCast(self.ptr), @bitCast(currentTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, currentTime: i32) callconv(.c) void `
    ///
    pub fn OnUpdateCurrentTime(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, i32) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateCurrentTime` instead
    ///
    pub const QBaseUpdateCurrentTime = SuperUpdateCurrentTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` currentTime: i32 `
    ///
    pub fn SuperUpdateCurrentTime(self: QParallelAnimationGroup, currentTime: i32) void {
        qtc.QParallelAnimationGroup_SuperUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(currentTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn UpdateState(self: QParallelAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QParallelAnimationGroup_UpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn OnUpdateState(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, i32, i32) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnUpdateState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateState` instead
    ///
    pub const QBaseUpdateState = SuperUpdateState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn SuperUpdateState(self: QParallelAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QParallelAnimationGroup_SuperUpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn UpdateDirection(self: QParallelAnimationGroup, direction: i32) void {
        qtc.QParallelAnimationGroup_UpdateDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, direction: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn OnUpdateDirection(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, i32) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnUpdateDirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateDirection` instead
    ///
    pub const QBaseUpdateDirection = SuperUpdateDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn SuperUpdateDirection(self: QParallelAnimationGroup, direction: i32) void {
        qtc.QParallelAnimationGroup_SuperUpdateDirection(@ptrCast(self.ptr), @bitCast(direction));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qparallelanimationgroup.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qparallelanimationgroup.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    pub fn AnimationAt(self: QParallelAnimationGroup, index: i32) QAbstractAnimation {
        return .{ .ptr = qtc.QAnimationGroup_AnimationAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn AnimationCount(self: QParallelAnimationGroup) i32 {
        return qtc.QAnimationGroup_AnimationCount(@ptrCast(self.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn IndexOfAnimation(self: QParallelAnimationGroup, animation: anytype) i32 {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        return qtc.QAnimationGroup_IndexOfAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn AddAnimation(self: QParallelAnimationGroup, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_AddAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn InsertAnimation(self: QParallelAnimationGroup, index: i32, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_InsertAnimation(@ptrCast(self.ptr), @bitCast(index), @ptrCast(animation.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn RemoveAnimation(self: QParallelAnimationGroup, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_RemoveAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    pub fn TakeAnimation(self: QParallelAnimationGroup, index: i32) QAbstractAnimation {
        return .{ .ptr = qtc.QAnimationGroup_TakeAnimation(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Clear(self: QParallelAnimationGroup) void {
        qtc.QAnimationGroup_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.State `
    ///
    pub fn State(self: QParallelAnimationGroup) i32 {
        return qtc.QAbstractAnimation_State(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Group(self: QParallelAnimationGroup) QAnimationGroup {
        return .{ .ptr = qtc.QAbstractAnimation_Group(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.Direction `
    ///
    pub fn Direction(self: QParallelAnimationGroup) i32 {
        return qtc.QAbstractAnimation_Direction(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` direction: qabstractanimation_enums.Direction `
    ///
    pub fn SetDirection(self: QParallelAnimationGroup, direction: i32) void {
        qtc.QAbstractAnimation_SetDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn CurrentTime(self: QParallelAnimationGroup) i32 {
        return qtc.QAbstractAnimation_CurrentTime(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn CurrentLoopTime(self: QParallelAnimationGroup) i32 {
        return qtc.QAbstractAnimation_CurrentLoopTime(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn LoopCount(self: QParallelAnimationGroup) i32 {
        return qtc.QAbstractAnimation_LoopCount(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` loopCount: i32 `
    ///
    pub fn SetLoopCount(self: QParallelAnimationGroup, loopCount: i32) void {
        qtc.QAbstractAnimation_SetLoopCount(@ptrCast(self.ptr), @bitCast(loopCount));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn CurrentLoop(self: QParallelAnimationGroup) i32 {
        return qtc.QAbstractAnimation_CurrentLoop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn TotalDuration(self: QParallelAnimationGroup) i32 {
        return qtc.QAbstractAnimation_TotalDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Finished(self: QParallelAnimationGroup) void {
        qtc.QAbstractAnimation_Finished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup) callconv(.c) void `
    ///
    pub fn OnFinished(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn StateChanged(self: QParallelAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QAbstractAnimation_StateChanged(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, i32, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` currentLoop: i32 `
    ///
    pub fn CurrentLoopChanged(self: QParallelAnimationGroup, currentLoop: i32) void {
        qtc.QAbstractAnimation_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(currentLoop));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, currentLoop: i32) callconv(.c) void `
    ///
    pub fn OnCurrentLoopChanged(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` param1: qabstractanimation_enums.Direction `
    ///
    pub fn DirectionChanged(self: QParallelAnimationGroup, param1: i32) void {
        qtc.QAbstractAnimation_DirectionChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, param1: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn OnDirectionChanged(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_DirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Start(self: QParallelAnimationGroup) void {
        qtc.QAbstractAnimation_Start(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Pause(self: QParallelAnimationGroup) void {
        qtc.QAbstractAnimation_Pause(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Resume(self: QParallelAnimationGroup) void {
        qtc.QAbstractAnimation_Resume(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` paused: bool `
    ///
    pub fn SetPaused(self: QParallelAnimationGroup, paused: bool) void {
        qtc.QAbstractAnimation_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Stop(self: QParallelAnimationGroup) void {
        qtc.QAbstractAnimation_Stop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` msecs: i32 `
    ///
    pub fn SetCurrentTime(self: QParallelAnimationGroup, msecs: i32) void {
        qtc.QAbstractAnimation_SetCurrentTime(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` policy: qabstractanimation_enums.DeletionPolicy `
    ///
    pub fn Start1(self: QParallelAnimationGroup, policy: i32) void {
        qtc.QAbstractAnimation_Start1(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QParallelAnimationGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qparallelanimationgroup.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QParallelAnimationGroup, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn IsWidgetType(self: QParallelAnimationGroup) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn IsWindowType(self: QParallelAnimationGroup) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn IsQuickItemType(self: QParallelAnimationGroup) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn SignalsBlocked(self: QParallelAnimationGroup) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QParallelAnimationGroup, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Thread(self: QParallelAnimationGroup) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QParallelAnimationGroup, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QParallelAnimationGroup, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QParallelAnimationGroup, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QParallelAnimationGroup, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QParallelAnimationGroup, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QParallelAnimationGroup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qparallelanimationgroup.Children: Memory allocation failed");
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QParallelAnimationGroup, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QParallelAnimationGroup, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QParallelAnimationGroup, obj: anytype) void {
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QParallelAnimationGroup, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Disconnect3(self: QParallelAnimationGroup) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QParallelAnimationGroup, receiver: anytype) bool {
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
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn DumpObjectTree(self: QParallelAnimationGroup) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn DumpObjectInfo(self: QParallelAnimationGroup) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QParallelAnimationGroup, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QParallelAnimationGroup, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QParallelAnimationGroup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qparallelanimationgroup.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qparallelanimationgroup.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn BindingStorage(self: QParallelAnimationGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn BindingStorage2(self: QParallelAnimationGroup) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Destroyed(self: QParallelAnimationGroup) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Parent(self: QParallelAnimationGroup) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QParallelAnimationGroup, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn DeleteLater(self: QParallelAnimationGroup) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QParallelAnimationGroup, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QParallelAnimationGroup, time: i64, timerType: i32) i32 {
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QParallelAnimationGroup, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QParallelAnimationGroup, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QParallelAnimationGroup, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QParallelAnimationGroup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QParallelAnimationGroup, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QParallelAnimationGroup, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, QObject) callconv(.c) void) void {
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QParallelAnimationGroup, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QParallelAnimationGroup_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QParallelAnimationGroup, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QParallelAnimationGroup_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, QObject, QEvent) callconv(.c) bool) void {
        qtc.QParallelAnimationGroup_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QParallelAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QParallelAnimationGroup_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QParallelAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QParallelAnimationGroup_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, QTimerEvent) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QParallelAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QParallelAnimationGroup_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QParallelAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QParallelAnimationGroup_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, QChildEvent) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QParallelAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QParallelAnimationGroup_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QParallelAnimationGroup, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QParallelAnimationGroup_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, QEvent) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QParallelAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QParallelAnimationGroup_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QParallelAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QParallelAnimationGroup_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QParallelAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QParallelAnimationGroup_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QParallelAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QParallelAnimationGroup_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QParallelAnimationGroup_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Sender(self: QParallelAnimationGroup) QObject {
        return .{ .ptr = qtc.QParallelAnimationGroup_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn SuperSender(self: QParallelAnimationGroup) QObject {
        return .{ .ptr = qtc.QParallelAnimationGroup_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QParallelAnimationGroup, callback: *const fn () callconv(.c) QObject) void {
        qtc.QParallelAnimationGroup_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn SenderSignalIndex(self: QParallelAnimationGroup) i32 {
        return qtc.QParallelAnimationGroup_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn SuperSenderSignalIndex(self: QParallelAnimationGroup) i32 {
        return qtc.QParallelAnimationGroup_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QParallelAnimationGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QParallelAnimationGroup_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QParallelAnimationGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QParallelAnimationGroup_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QParallelAnimationGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QParallelAnimationGroup_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, [*:0]const u8) callconv(.c) i32) void {
        qtc.QParallelAnimationGroup_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QParallelAnimationGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QParallelAnimationGroup_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QParallelAnimationGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QParallelAnimationGroup_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup`
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, QMetaMethod) callconv(.c) bool) void {
        qtc.QParallelAnimationGroup_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    /// ` callback: *const fn (self: QParallelAnimationGroup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QParallelAnimationGroup, callback: *const fn (QParallelAnimationGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qparallelanimationgroup.html#dtor.QParallelAnimationGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QParallelAnimationGroup `
    ///
    pub fn Delete(self: QParallelAnimationGroup) void {
        qtc.QParallelAnimationGroup_Delete(@ptrCast(self.ptr));
    }
};
