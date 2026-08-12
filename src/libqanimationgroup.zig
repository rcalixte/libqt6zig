const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractAnimation = @import("libqt6").QAbstractAnimation;
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

/// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html)
pub const QAnimationGroup = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAnimationGroup,

    pub const _is_QAnimationGroup = {};
    pub const _is_QAbstractAnimation = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAnimationGroup object in C++ memory
    ///
    pub fn new() QAnimationGroup {
        return .{ .ptr = qtc.QAnimationGroup_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAnimationGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) QAnimationGroup {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QAnimationGroup_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    pub fn metaObject(self: QAnimationGroup) QMetaObject {
        return .{ .ptr = qtc.QAnimationGroup_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QAnimationGroup, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QAnimationGroup_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    pub fn superMetaObject(self: QAnimationGroup) QMetaObject {
        return .{ .ptr = qtc.QAnimationGroup_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAnimationGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAnimationGroup_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QAnimationGroup, callback: *const fn (QAnimationGroup, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QAnimationGroup_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QAnimationGroup, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAnimationGroup_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QAnimationGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAnimationGroup_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QAnimationGroup, callback: *const fn (QAnimationGroup, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QAnimationGroup_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QAnimationGroup, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAnimationGroup_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAnimationGroup.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `animationAt` instead
    ///
    pub const AnimationAt = animationAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    pub fn animationAt(self: QAnimationGroup, index: i32) QAbstractAnimation {
        return .{ .ptr = qtc.QAnimationGroup_AnimationAt(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `animationCount` instead
    ///
    pub const AnimationCount = animationCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    pub fn animationCount(self: QAnimationGroup) i32 {
        return qtc.QAnimationGroup_AnimationCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexOfAnimation` instead
    ///
    pub const IndexOfAnimation = indexOfAnimation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn indexOfAnimation(self: QAnimationGroup, animation: anytype) i32 {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        return qtc.QAnimationGroup_IndexOfAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `addAnimation` instead
    ///
    pub const AddAnimation = addAnimation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn addAnimation(self: QAnimationGroup, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_AddAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `insertAnimation` instead
    ///
    pub const InsertAnimation = insertAnimation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn insertAnimation(self: QAnimationGroup, index: i32, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_InsertAnimation(@ptrCast(self.ptr), @bitCast(index), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `removeAnimation` instead
    ///
    pub const RemoveAnimation = removeAnimation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` animation: QAbstractAnimation `
    ///
    pub fn removeAnimation(self: QAnimationGroup, animation: anytype) void {
        comptime _ = @TypeOf(animation)._is_QAbstractAnimation;
        qtc.QAnimationGroup_RemoveAnimation(@ptrCast(self.ptr), @ptrCast(animation.ptr));
    }

    /// ### DEPRECATED: Use `takeAnimation` instead
    ///
    pub const TakeAnimation = takeAnimation;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` index: i32 `
    ///
    pub fn takeAnimation(self: QAnimationGroup, index: i32) QAbstractAnimation {
        return .{ .ptr = qtc.QAnimationGroup_TakeAnimation(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    pub fn clear(self: QAnimationGroup) void {
        qtc.QAnimationGroup_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAnimationGroup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAnimationGroup_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QAnimationGroup, callback: *const fn (QAnimationGroup, QEvent) callconv(.c) bool) void {
        qtc.QAnimationGroup_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QAnimationGroup, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAnimationGroup_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAnimationGroup.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAnimationGroup.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QAnimationGroup `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.State `
    ///
    pub fn state(self: QAnimationGroup) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn group(self: QAnimationGroup) QAnimationGroup {
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
    /// ` self: QAnimationGroup `
    ///
    /// ## Returns:
    ///
    /// ` qabstractanimation_enums.Direction `
    ///
    pub fn direction(self: QAnimationGroup) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _direction: qabstractanimation_enums.Direction `
    ///
    pub fn setDirection(self: QAnimationGroup, _direction: i32) void {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn currentTime(self: QAnimationGroup) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn currentLoopTime(self: QAnimationGroup) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn loopCount(self: QAnimationGroup) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _loopCount: i32 `
    ///
    pub fn setLoopCount(self: QAnimationGroup, _loopCount: i32) void {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn currentLoop(self: QAnimationGroup) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn totalDuration(self: QAnimationGroup) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn finished(self: QAnimationGroup) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup) callconv(.c) void `
    ///
    pub fn onFinished(self: QAnimationGroup, callback: *const fn (QAnimationGroup) callconv(.c) void) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn stateChanged(self: QAnimationGroup, newState: i32, oldState: i32) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QAnimationGroup, callback: *const fn (QAnimationGroup, i32, i32) callconv(.c) void) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _currentLoop: i32 `
    ///
    pub fn currentLoopChanged(self: QAnimationGroup, _currentLoop: i32) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup, currentLoop: i32) callconv(.c) void `
    ///
    pub fn onCurrentLoopChanged(self: QAnimationGroup, callback: *const fn (QAnimationGroup, i32) callconv(.c) void) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` param1: qabstractanimation_enums.Direction `
    ///
    pub fn directionChanged(self: QAnimationGroup, param1: i32) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup, param1: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn onDirectionChanged(self: QAnimationGroup, callback: *const fn (QAnimationGroup, i32) callconv(.c) void) void {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn start(self: QAnimationGroup) void {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn pause(self: QAnimationGroup) void {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn resume0(self: QAnimationGroup) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` paused: bool `
    ///
    pub fn setPaused(self: QAnimationGroup, paused: bool) void {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn stop(self: QAnimationGroup) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` msecs: i32 `
    ///
    pub fn setCurrentTime(self: QAnimationGroup, msecs: i32) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` policy: qabstractanimation_enums.DeletionPolicy `
    ///
    pub fn start1(self: QAnimationGroup, policy: i32) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAnimationGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAnimationGroup.objectName: Memory allocation failed");
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
    /// ` self: QAnimationGroup `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAnimationGroup, name: []const u8) void {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn isWidgetType(self: QAnimationGroup) bool {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn isWindowType(self: QAnimationGroup) bool {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn isQuickItemType(self: QAnimationGroup) bool {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn signalsBlocked(self: QAnimationGroup) bool {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAnimationGroup, b: bool) bool {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn thread(self: QAnimationGroup) QThread {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAnimationGroup, _thread: anytype) bool {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAnimationGroup, interval: i32) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAnimationGroup, time: i64) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAnimationGroup, id: i32) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAnimationGroup, id: i32) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAnimationGroup, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAnimationGroup.children: Memory allocation failed");
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAnimationGroup, _parent: anytype) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAnimationGroup, filterObj: anytype) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAnimationGroup, obj: anytype) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAnimationGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn disconnect3(self: QAnimationGroup) bool {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAnimationGroup, receiver: anytype) bool {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn dumpObjectTree(self: QAnimationGroup) void {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn dumpObjectInfo(self: QAnimationGroup) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAnimationGroup, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAnimationGroup, name: [:0]const u8) QVariant {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAnimationGroup, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QAnimationGroup.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAnimationGroup.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAnimationGroup `
    ///
    pub fn bindingStorage(self: QAnimationGroup) QBindingStorage {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn bindingStorage2(self: QAnimationGroup) QBindingStorage {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn destroyed(self: QAnimationGroup) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAnimationGroup, callback: *const fn (QAnimationGroup) callconv(.c) void) void {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn parent(self: QAnimationGroup) QObject {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAnimationGroup, classname: [:0]const u8) bool {
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
    /// ` self: QAnimationGroup `
    ///
    pub fn deleteLater(self: QAnimationGroup) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAnimationGroup, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAnimationGroup, time: i64, timerType: i32) i32 {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAnimationGroup, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAnimationGroup, signal: [:0]const u8) bool {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAnimationGroup, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAnimationGroup, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAnimationGroup, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAnimationGroup, param1: anytype) void {
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
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAnimationGroup, callback: *const fn (QAnimationGroup, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `duration` instead
    ///
    pub const Duration = duration;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    pub fn duration(self: QAnimationGroup) i32 {
        return qtc.QAnimationGroup_Duration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDuration` instead
    ///
    pub const SuperDuration = superDuration;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    pub fn superDuration(self: QAnimationGroup) i32 {
        return qtc.QAnimationGroup_SuperDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDuration` instead
    ///
    pub const OnDuration = onDuration;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDuration(self: QAnimationGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QAnimationGroup_OnDuration(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateCurrentTime` instead
    ///
    pub const UpdateCurrentTime = updateCurrentTime;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` _currentTime: i32 `
    ///
    pub fn updateCurrentTime(self: QAnimationGroup, _currentTime: i32) void {
        qtc.QAnimationGroup_UpdateCurrentTime(@ptrCast(self.ptr), @bitCast(_currentTime));
    }

    /// ### DEPRECATED: Use `superUpdateCurrentTime` instead
    ///
    pub const SuperUpdateCurrentTime = superUpdateCurrentTime;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` _currentTime: i32 `
    ///
    pub fn superUpdateCurrentTime(self: QAnimationGroup, _currentTime: i32) void {
        qtc.QAnimationGroup_SuperUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(_currentTime));
    }

    /// ### DEPRECATED: Use `onUpdateCurrentTime` instead
    ///
    pub const OnUpdateCurrentTime = onUpdateCurrentTime;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, currentTime: i32) callconv(.c) void `
    ///
    pub fn onUpdateCurrentTime(self: QAnimationGroup, callback: *const fn (QAnimationGroup, i32) callconv(.c) void) void {
        qtc.QAnimationGroup_OnUpdateCurrentTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateState` instead
    ///
    pub const UpdateState = updateState;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn updateState(self: QAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QAnimationGroup_UpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### DEPRECATED: Use `superUpdateState` instead
    ///
    pub const SuperUpdateState = superUpdateState;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` newState: qabstractanimation_enums.State `
    ///
    /// ` oldState: qabstractanimation_enums.State `
    ///
    pub fn superUpdateState(self: QAnimationGroup, newState: i32, oldState: i32) void {
        qtc.QAnimationGroup_SuperUpdateState(@ptrCast(self.ptr), @bitCast(newState), @bitCast(oldState));
    }

    /// ### DEPRECATED: Use `onUpdateState` instead
    ///
    pub const OnUpdateState = onUpdateState;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State) callconv(.c) void `
    ///
    pub fn onUpdateState(self: QAnimationGroup, callback: *const fn (QAnimationGroup, i32, i32) callconv(.c) void) void {
        qtc.QAnimationGroup_OnUpdateState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateDirection` instead
    ///
    pub const UpdateDirection = updateDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` _direction: qabstractanimation_enums.Direction `
    ///
    pub fn updateDirection(self: QAnimationGroup, _direction: i32) void {
        qtc.QAnimationGroup_UpdateDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `superUpdateDirection` instead
    ///
    pub const SuperUpdateDirection = superUpdateDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAnimationGroup `
    ///
    /// ` _direction: qabstractanimation_enums.Direction `
    ///
    pub fn superUpdateDirection(self: QAnimationGroup, _direction: i32) void {
        qtc.QAnimationGroup_SuperUpdateDirection(@ptrCast(self.ptr), @bitCast(_direction));
    }

    /// ### DEPRECATED: Use `onUpdateDirection` instead
    ///
    pub const OnUpdateDirection = onUpdateDirection;

    /// Inherited from QAbstractAnimation
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, direction: qabstractanimation_enums.Direction) callconv(.c) void `
    ///
    pub fn onUpdateDirection(self: QAnimationGroup, callback: *const fn (QAnimationGroup, i32) callconv(.c) void) void {
        qtc.QAnimationGroup_OnUpdateDirection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAnimationGroup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAnimationGroup_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QAnimationGroup, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QAnimationGroup_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QAnimationGroup, callback: *const fn (QAnimationGroup, QObject, QEvent) callconv(.c) bool) void {
        qtc.QAnimationGroup_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAnimationGroup_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QAnimationGroup_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QAnimationGroup, callback: *const fn (QAnimationGroup, QTimerEvent) callconv(.c) void) void {
        qtc.QAnimationGroup_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAnimationGroup_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QAnimationGroup_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QAnimationGroup, callback: *const fn (QAnimationGroup, QChildEvent) callconv(.c) void) void {
        qtc.QAnimationGroup_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAnimationGroup_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QAnimationGroup, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QAnimationGroup_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QAnimationGroup, callback: *const fn (QAnimationGroup, QEvent) callconv(.c) void) void {
        qtc.QAnimationGroup_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAnimationGroup_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAnimationGroup_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QAnimationGroup, callback: *const fn (QAnimationGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QAnimationGroup_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAnimationGroup_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QAnimationGroup, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QAnimationGroup_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QAnimationGroup, callback: *const fn (QAnimationGroup, QMetaMethod) callconv(.c) void) void {
        qtc.QAnimationGroup_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    pub fn sender(self: QAnimationGroup) QObject {
        return .{ .ptr = qtc.QAnimationGroup_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QAnimationGroup `
    ///
    pub fn superSender(self: QAnimationGroup) QObject {
        return .{ .ptr = qtc.QAnimationGroup_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QAnimationGroup, callback: *const fn () callconv(.c) QObject) void {
        qtc.QAnimationGroup_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    pub fn senderSignalIndex(self: QAnimationGroup) i32 {
        return qtc.QAnimationGroup_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QAnimationGroup `
    ///
    pub fn superSenderSignalIndex(self: QAnimationGroup) i32 {
        return qtc.QAnimationGroup_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QAnimationGroup, callback: *const fn () callconv(.c) i32) void {
        qtc.QAnimationGroup_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QAnimationGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAnimationGroup_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QAnimationGroup, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QAnimationGroup_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QAnimationGroup, callback: *const fn (QAnimationGroup, [*:0]const u8) callconv(.c) i32) void {
        qtc.QAnimationGroup_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QAnimationGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAnimationGroup_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QAnimationGroup, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QAnimationGroup_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QAnimationGroup`
    ///
    /// ` callback: *const fn (self: QAnimationGroup, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QAnimationGroup, callback: *const fn (QAnimationGroup, QMetaMethod) callconv(.c) bool) void {
        qtc.QAnimationGroup_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QAnimationGroup `
    ///
    /// ` callback: *const fn (self: QAnimationGroup, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAnimationGroup, callback: *const fn (QAnimationGroup, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qanimationgroup.html#dtor.QAnimationGroup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAnimationGroup `
    ///
    pub fn delete(self: QAnimationGroup) void {
        qtc.QAnimationGroup_Delete(@ptrCast(self.ptr));
    }
};
