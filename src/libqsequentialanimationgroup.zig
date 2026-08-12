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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QSequentialAnimationGroup object in C++ memory
    ///
    pub fn new() QSequentialAnimationGroup {
        return .{ .ptr = qtc.QSequentialAnimationGroup_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QSequentialAnimationGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QSequentialAnimationGroup {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QSequentialAnimationGroup_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn metaObject(self: QSequentialAnimationGroup) QMetaObject {
        return .{ .ptr = qtc.QSequentialAnimationGroup_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QSequentialAnimationGroup, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSequentialAnimationGroup_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn superMetaObject(self: QSequentialAnimationGroup) QMetaObject {
        return .{ .ptr = qtc.QSequentialAnimationGroup_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QSequentialAnimationGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSequentialAnimationGroup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSequentialAnimationGroup_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QSequentialAnimationGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSequentialAnimationGroup_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QSequentialAnimationGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSequentialAnimationGroup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSequentialAnimationGroup_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QSequentialAnimationGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSequentialAnimationGroup_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSequentialAnimationGroup.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `addPause` instead
    ///
    pub const AddPause = addPause;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#addPause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` msecs: i32 `
    ///
    pub fn addPause(self: QSequentialAnimationGroup, msecs: i32) QPauseAnimation {
        return .{ .ptr = qtc.QSequentialAnimationGroup_AddPause(@ptrCast(self.ptr), @bitCast(msecs)) };
    }

    /// ### DEPRECATED: Use `insertPause` instead
    ///
    pub const InsertPause = insertPause;

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
    pub fn insertPause(self: QSequentialAnimationGroup, index: i32, msecs: i32) QPauseAnimation {
        return .{ .ptr = qtc.QSequentialAnimationGroup_InsertPause(@ptrCast(self.ptr), @bitCast(index), @bitCast(msecs)) };
    }

    /// ### DEPRECATED: Use `currentAnimation` instead
    ///
    pub const CurrentAnimation = currentAnimation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn currentAnimation(self: QSequentialAnimationGroup) QAbstractAnimation {
        return .{ .ptr = qtc.QSequentialAnimationGroup_CurrentAnimation(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `duration` instead
    ///
    pub const Duration = duration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn duration(self: QSequentialAnimationGroup) i32 {
        return qtc.QSequentialAnimationGroup_Duration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDuration` instead
    ///
    pub const OnDuration = onDuration;

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
    pub fn onDuration(self: QSequentialAnimationGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QSequentialAnimationGroup_OnDuration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDuration` instead
    ///
    pub const SuperDuration = superDuration;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn superDuration(self: QSequentialAnimationGroup) i32 {
        return qtc.QSequentialAnimationGroup_SuperDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentAnimationChanged` instead
    ///
    pub const CurrentAnimationChanged = currentAnimationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` current: QAbstractAnimation `
    ///
    pub fn currentAnimationChanged(self: QSequentialAnimationGroup, current: anytype) void {
        comptime _ = @TypeOf(current)._is_QAbstractAnimation;
        qtc.QSequentialAnimationGroup_CurrentAnimationChanged(@ptrCast(self.ptr), @ptrCast(current.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentAnimationChanged` instead
    ///
    pub const OnCurrentAnimationChanged = onCurrentAnimationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, current: QAbstractAnimation) callconv(.c) void `
    ///
    pub fn onCurrentAnimationChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QAbstractAnimation) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_Connect_CurrentAnimationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QSequentialAnimationGroup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSequentialAnimationGroup_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QEvent) callconv(.c) bool) void {
        qtc.QSequentialAnimationGroup_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QSequentialAnimationGroup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSequentialAnimationGroup_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `updateCurrentTime` instead
    ///
    pub const UpdateCurrentTime = updateCurrentTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: i32 `
    ///
    pub fn updateCurrentTime(self: QSequentialAnimationGroup, param1: i32) void {
        qtc.QSequentialAnimationGroup_UpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onUpdateCurrentTime` instead
    ///
    pub const OnUpdateCurrentTime = onUpdateCurrentTime;

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
    pub fn onUpdateCurrentTime(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateCurrentTime` instead
    ///
    pub const SuperUpdateCurrentTime = superUpdateCurrentTime;

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
    pub fn superUpdateCurrentTime(self: QSequentialAnimationGroup, param1: i32) void {
        qtc.QSequentialAnimationGroup_SuperUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `updateState` instead
    ///
    pub const UpdateState = updateState;

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
    pub fn updateState(self: QSequentialAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QSequentialAnimationGroup_UpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### DEPRECATED: Use `onUpdateState` instead
    ///
    pub const OnUpdateState = onUpdateState;

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
    pub fn onUpdateState(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32, i32) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnUpdateState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateState` instead
    ///
    pub const SuperUpdateState = superUpdateState;

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
    pub fn superUpdateState(self: QSequentialAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QSequentialAnimationGroup_SuperUpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### DEPRECATED: Use `updateDirection` instead
    ///
    pub const UpdateDirection = updateDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _direction: qabstractanimation_enums.Direction `
    ///
    pub fn updateDirection(self: QSequentialAnimationGroup, _direction: i32) void {
        qtc.QSequentialAnimationGroup_UpdateDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `onUpdateDirection` instead
    ///
    pub const OnUpdateDirection = onUpdateDirection;

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
    pub fn onUpdateDirection(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnUpdateDirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateDirection` instead
    ///
    pub const SuperUpdateDirection = superUpdateDirection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _direction: qabstractanimation_enums.Direction `
    ///
    pub fn superUpdateDirection(self: QSequentialAnimationGroup, _direction: i32) void {
        qtc.QSequentialAnimationGroup_SuperUpdateDirection(@ptrCast(self.ptr), @bitCast(_direction));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSequentialAnimationGroup.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSequentialAnimationGroup.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `animationAt` instead
    ///
    pub const AnimationAt = animationAt;

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
    pub fn animationAt(self: QSequentialAnimationGroup, index: i32) QAbstractAnimation {
        return .{ .ptr = qtc.QAnimationGroup_AnimationAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `animationCount` instead
    ///
    pub const AnimationCount = animationCount;

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn animationCount(self: QSequentialAnimationGroup) i32 {
        return qtc.QAnimationGroup_AnimationCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexOfAnimation` instead
    ///
    pub const IndexOfAnimation = indexOfAnimation;

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
    pub fn indexOfAnimation(self: QSequentialAnimationGroup, animation: anytype) i32 {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        return qtc.QAnimationGroup_IndexOfAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `addAnimation` instead
    ///
    pub const AddAnimation = addAnimation;

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
    pub fn addAnimation(self: QSequentialAnimationGroup, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_AddAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `insertAnimation` instead
    ///
    pub const InsertAnimation = insertAnimation;

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
    pub fn insertAnimation(self: QSequentialAnimationGroup, index: i32, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_InsertAnimation(@ptrCast(self.ptr), @bitCast(index), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `removeAnimation` instead
    ///
    pub const RemoveAnimation = removeAnimation;

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
    pub fn removeAnimation(self: QSequentialAnimationGroup, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_RemoveAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `takeAnimation` instead
    ///
    pub const TakeAnimation = takeAnimation;

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
    pub fn takeAnimation(self: QSequentialAnimationGroup, index: i32) QAbstractAnimation {
        return .{ .ptr = qtc.QAnimationGroup_TakeAnimation(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QAnimationGroup
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn clear(self: QSequentialAnimationGroup) void {
        qtc.QAnimationGroup_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `group` instead
    ///
    pub const Group = group;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn group(self: QSequentialAnimationGroup) QAnimationGroup {
        return .{ .ptr = qtc.QAbstractAnimation_Group(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `direction` instead
    ///
    pub const Direction = direction;

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
    pub fn direction(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_Direction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDirection` instead
    ///
    pub const SetDirection = setDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _direction: qabstractanimation_enums.Direction `
    ///
    pub fn setDirection(self: QSequentialAnimationGroup, _direction: i32) void {
        qtc.QAbstractAnimation_SetDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `currentTime` instead
    ///
    pub const CurrentTime = currentTime;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn currentTime(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_CurrentTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentLoopTime` instead
    ///
    pub const CurrentLoopTime = currentLoopTime;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn currentLoopTime(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_CurrentLoopTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loopCount` instead
    ///
    pub const LoopCount = loopCount;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn loopCount(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_LoopCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLoopCount` instead
    ///
    pub const SetLoopCount = setLoopCount;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _loopCount: i32 `
    ///
    pub fn setLoopCount(self: QSequentialAnimationGroup, _loopCount: i32) void {
        qtc.QAbstractAnimation_SetLoopCount(@ptrCast(self.ptr), @bitCast(_loopCount));
    }

    /// ### DEPRECATED: Use `currentLoop` instead
    ///
    pub const CurrentLoop = currentLoop;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn currentLoop(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_CurrentLoop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `totalDuration` instead
    ///
    pub const TotalDuration = totalDuration;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn totalDuration(self: QSequentialAnimationGroup) i32 {
        return qtc.QAbstractAnimation_TotalDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn finished(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Finished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

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
    pub fn onFinished(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

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
    pub fn stateChanged(self: QSequentialAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QAbstractAnimation_StateChanged(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

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
    pub fn onStateChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentLoopChanged` instead
    ///
    pub const CurrentLoopChanged = currentLoopChanged;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _currentLoop: i32 `
    ///
    pub fn currentLoopChanged(self: QSequentialAnimationGroup, _currentLoop: i32) void {
        qtc.QAbstractAnimation_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(_currentLoop));
    }

    /// ### DEPRECATED: Use `onCurrentLoopChanged` instead
    ///
    pub const OnCurrentLoopChanged = onCurrentLoopChanged;

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
    pub fn onCurrentLoopChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_CurrentLoopChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `directionChanged` instead
    ///
    pub const DirectionChanged = directionChanged;

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
    pub fn directionChanged(self: QSequentialAnimationGroup, param1: i32) void {
        qtc.QAbstractAnimation_DirectionChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onDirectionChanged` instead
    ///
    pub const OnDirectionChanged = onDirectionChanged;

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
    pub fn onDirectionChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, i32) callconv(.c) void) void {
        qtc.QAbstractAnimation_Connect_DirectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `start` instead
    ///
    pub const Start = start;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn start(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Start(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pause` instead
    ///
    pub const Pause = pause;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn pause(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Pause(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resume0` instead
    ///
    pub const Resume = resume0;

    pub const @"resume" = resume0;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn resume0(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Resume(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPaused` instead
    ///
    pub const SetPaused = setPaused;

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
    pub fn setPaused(self: QSequentialAnimationGroup, paused: bool) void {
        qtc.QAbstractAnimation_SetPaused(@ptrCast(self.ptr), paused);
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn stop(self: QSequentialAnimationGroup) void {
        qtc.QAbstractAnimation_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentTime` instead
    ///
    pub const SetCurrentTime = setCurrentTime;

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
    pub fn setCurrentTime(self: QSequentialAnimationGroup, msecs: i32) void {
        qtc.QAbstractAnimation_SetCurrentTime(@ptrCast(self.ptr), @bitCast(msecs));
    }

    /// ### DEPRECATED: Use `start1` instead
    ///
    pub const Start1 = start1;

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
    pub fn start1(self: QSequentialAnimationGroup, policy: i32) void {
        qtc.QAbstractAnimation_Start1(@ptrCast(self.ptr), @bitCast(policy));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QSequentialAnimationGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QSequentialAnimationGroup.objectName: Memory allocation failed");
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QSequentialAnimationGroup, name: []const u8) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn isWidgetType(self: QSequentialAnimationGroup) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn isWindowType(self: QSequentialAnimationGroup) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn isQuickItemType(self: QSequentialAnimationGroup) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn signalsBlocked(self: QSequentialAnimationGroup) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QSequentialAnimationGroup, b: bool) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn thread(self: QSequentialAnimationGroup) QThread {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QSequentialAnimationGroup, _thread: anytype) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QSequentialAnimationGroup, interval: i32) i32 {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QSequentialAnimationGroup, time: i64) i32 {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QSequentialAnimationGroup, id: i32) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QSequentialAnimationGroup, id: i32) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QSequentialAnimationGroup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QSequentialAnimationGroup.children: Memory allocation failed");
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QSequentialAnimationGroup, _parent: anytype) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QSequentialAnimationGroup, filterObj: anytype) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QSequentialAnimationGroup, obj: anytype) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QSequentialAnimationGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn disconnect3(self: QSequentialAnimationGroup) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QSequentialAnimationGroup, receiver: anytype) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn dumpObjectTree(self: QSequentialAnimationGroup) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn dumpObjectInfo(self: QSequentialAnimationGroup) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QSequentialAnimationGroup, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QSequentialAnimationGroup, name: [:0]const u8) QVariant {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QSequentialAnimationGroup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QSequentialAnimationGroup.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QSequentialAnimationGroup.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn bindingStorage(self: QSequentialAnimationGroup) QBindingStorage {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn bindingStorage2(self: QSequentialAnimationGroup) QBindingStorage {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn destroyed(self: QSequentialAnimationGroup) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup) callconv(.c) void) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn parent(self: QSequentialAnimationGroup) QObject {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QSequentialAnimationGroup, classname: [:0]const u8) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn deleteLater(self: QSequentialAnimationGroup) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QSequentialAnimationGroup, interval: i32, timerType: i32) i32 {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QSequentialAnimationGroup, time: i64, timerType: i32) i32 {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QSequentialAnimationGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QSequentialAnimationGroup, signal: [:0]const u8) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QSequentialAnimationGroup, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QSequentialAnimationGroup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QSequentialAnimationGroup, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QSequentialAnimationGroup, param1: anytype) void {
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QSequentialAnimationGroup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSequentialAnimationGroup_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QSequentialAnimationGroup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QSequentialAnimationGroup_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSequentialAnimationGroup_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QSequentialAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSequentialAnimationGroup_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QSequentialAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QSequentialAnimationGroup_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QTimerEvent) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QSequentialAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSequentialAnimationGroup_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QSequentialAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QSequentialAnimationGroup_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QChildEvent) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QSequentialAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSequentialAnimationGroup_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QSequentialAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QSequentialAnimationGroup_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QEvent) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QSequentialAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSequentialAnimationGroup_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QSequentialAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSequentialAnimationGroup_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QSequentialAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSequentialAnimationGroup_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QSequentialAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSequentialAnimationGroup_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QSequentialAnimationGroup_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn sender(self: QSequentialAnimationGroup) QObject {
        return .{ .ptr = qtc.QSequentialAnimationGroup_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn superSender(self: QSequentialAnimationGroup) QObject {
        return .{ .ptr = qtc.QSequentialAnimationGroup_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QSequentialAnimationGroup, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSequentialAnimationGroup_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn senderSignalIndex(self: QSequentialAnimationGroup) i32 {
        return qtc.QSequentialAnimationGroup_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn superSenderSignalIndex(self: QSequentialAnimationGroup) i32 {
        return qtc.QSequentialAnimationGroup_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QSequentialAnimationGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QSequentialAnimationGroup_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QSequentialAnimationGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSequentialAnimationGroup_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QSequentialAnimationGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSequentialAnimationGroup_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSequentialAnimationGroup_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QSequentialAnimationGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSequentialAnimationGroup_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QSequentialAnimationGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSequentialAnimationGroup_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSequentialAnimationGroup`
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, QMetaMethod) callconv(.c) bool) void {
        qtc.QSequentialAnimationGroup_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSequentialAnimationGroup `
    ///
    /// ` callback: *const fn (self: QSequentialAnimationGroup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QSequentialAnimationGroup, callback: *const fn (QSequentialAnimationGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#dtor.QSequentialAnimationGroup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QSequentialAnimationGroup `
    ///
    pub fn delete(self: QSequentialAnimationGroup) void {
        qtc.QSequentialAnimationGroup_Delete(@ptrCast(self.ptr));
    }
};
