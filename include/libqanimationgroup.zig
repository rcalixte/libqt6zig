const C = @import("qt6c");
const qabstractanimation_enums = @import("libqabstractanimation.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qanimationgroup.html
pub const qanimationgroup = struct {
    /// New constructs a new QAnimationGroup object.
    ///
    ///
    pub fn New() ?*C.QAnimationGroup {
        return C.QAnimationGroup_new();
    }

    /// New2 constructs a new QAnimationGroup object.
    ///
    /// ``` parent: ?*C.QObject ```
    pub fn New2(parent: ?*anyopaque) ?*C.QAnimationGroup {
        return C.QAnimationGroup_new2(@ptrCast(parent));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QAnimationGroup_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QAnimationGroup, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QAnimationGroup_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QAnimationGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QAnimationGroup_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, qobjectdefs_enums.Call, i32, ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i32, ?*anyopaque) callconv(.c) i32) void {
        C.QAnimationGroup_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAnimationGroup, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QAnimationGroup_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QAnimationGroup_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
    ///
    /// ``` self: ?*C.QAnimationGroup, index: i32 ```
    pub fn AnimationAt(self: ?*anyopaque, index: i32) ?*C.QAbstractAnimation {
        return C.QAnimationGroup_AnimationAt(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn AnimationCount(self: ?*anyopaque) i32 {
        return C.QAnimationGroup_AnimationCount(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
    ///
    /// ``` self: ?*C.QAnimationGroup, animation: ?*C.QAbstractAnimation ```
    pub fn IndexOfAnimation(self: ?*anyopaque, animation: ?*anyopaque) i32 {
        return C.QAnimationGroup_IndexOfAnimation(@ptrCast(self), @ptrCast(animation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
    ///
    /// ``` self: ?*C.QAnimationGroup, animation: ?*C.QAbstractAnimation ```
    pub fn AddAnimation(self: ?*anyopaque, animation: ?*anyopaque) void {
        C.QAnimationGroup_AddAnimation(@ptrCast(self), @ptrCast(animation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
    ///
    /// ``` self: ?*C.QAnimationGroup, index: i32, animation: ?*C.QAbstractAnimation ```
    pub fn InsertAnimation(self: ?*anyopaque, index: i32, animation: ?*anyopaque) void {
        C.QAnimationGroup_InsertAnimation(@ptrCast(self), @intCast(index), @ptrCast(animation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
    ///
    /// ``` self: ?*C.QAnimationGroup, animation: ?*C.QAbstractAnimation ```
    pub fn RemoveAnimation(self: ?*anyopaque, animation: ?*anyopaque) void {
        C.QAnimationGroup_RemoveAnimation(@ptrCast(self), @ptrCast(animation));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
    ///
    /// ``` self: ?*C.QAnimationGroup, index: i32 ```
    pub fn TakeAnimation(self: ?*anyopaque, index: i32) ?*C.QAbstractAnimation {
        return C.QAnimationGroup_TakeAnimation(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Clear(self: ?*anyopaque) void {
        C.QAnimationGroup_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#event)
    ///
    /// ``` self: ?*C.QAnimationGroup, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAnimationGroup_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QAnimationGroup_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: ?*C.QAnimationGroup, event: ?*C.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAnimationGroup_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QAnimationGroup_Tr2(s_Cstring, c_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QAnimationGroup_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QAbstractAnimation_State(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Group(self: ?*anyopaque) ?*C.QAnimationGroup {
        return C.QAbstractAnimation_Group(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Direction(self: ?*anyopaque) i64 {
        return C.QAbstractAnimation_Direction(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
    ///
    /// ``` self: ?*C.QAnimationGroup, direction: qabstractanimation_enums.Direction ```
    pub fn SetDirection(self: ?*anyopaque, direction: i64) void {
        C.QAbstractAnimation_SetDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn CurrentTime(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_CurrentTime(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn CurrentLoopTime(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_CurrentLoopTime(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn LoopCount(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_LoopCount(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
    ///
    /// ``` self: ?*C.QAnimationGroup, loopCount: i32 ```
    pub fn SetLoopCount(self: ?*anyopaque, loopCount: i32) void {
        C.QAbstractAnimation_SetLoopCount(@ptrCast(self), @intCast(loopCount));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn CurrentLoop(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_CurrentLoop(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn TotalDuration(self: ?*anyopaque) i32 {
        return C.QAbstractAnimation_TotalDuration(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Finished(self: ?*anyopaque) void {
        C.QAbstractAnimation_Finished(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ``` self: ?*C.QAbstractAnimation, slot: fn (?*C.QAbstractAnimation) callconv(.c) void ```
    pub fn OnFinished(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractAnimation_Connect_Finished(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
    ///
    /// ``` self: ?*C.QAnimationGroup, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State ```
    pub fn StateChanged(self: ?*anyopaque, newState: i64, oldState: i64) void {
        C.QAbstractAnimation_StateChanged(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ``` self: ?*C.QAbstractAnimation, slot: fn (?*C.QAbstractAnimation, qabstractanimation_enums.State, qabstractanimation_enums.State) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) void) void {
        C.QAbstractAnimation_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
    ///
    /// ``` self: ?*C.QAnimationGroup, currentLoop: i32 ```
    pub fn CurrentLoopChanged(self: ?*anyopaque, currentLoop: i32) void {
        C.QAbstractAnimation_CurrentLoopChanged(@ptrCast(self), @intCast(currentLoop));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ``` self: ?*C.QAbstractAnimation, slot: fn (?*C.QAbstractAnimation, i32) callconv(.c) void ```
    pub fn OnCurrentLoopChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QAbstractAnimation_Connect_CurrentLoopChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
    ///
    /// ``` self: ?*C.QAnimationGroup, param1: qabstractanimation_enums.Direction ```
    pub fn DirectionChanged(self: ?*anyopaque, param1: i64) void {
        C.QAbstractAnimation_DirectionChanged(@ptrCast(self), @intCast(param1));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// ``` self: ?*C.QAbstractAnimation, slot: fn (?*C.QAbstractAnimation, qabstractanimation_enums.Direction) callconv(.c) void ```
    pub fn OnDirectionChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAbstractAnimation_Connect_DirectionChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Start(self: ?*anyopaque) void {
        C.QAbstractAnimation_Start(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Pause(self: ?*anyopaque) void {
        C.QAbstractAnimation_Pause(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Resume(self: ?*anyopaque) void {
        C.QAbstractAnimation_Resume(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
    ///
    /// ``` self: ?*C.QAnimationGroup, paused: bool ```
    pub fn SetPaused(self: ?*anyopaque, paused: bool) void {
        C.QAbstractAnimation_SetPaused(@ptrCast(self), paused);
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Stop(self: ?*anyopaque) void {
        C.QAbstractAnimation_Stop(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
    ///
    /// ``` self: ?*C.QAnimationGroup, msecs: i32 ```
    pub fn SetCurrentTime(self: ?*anyopaque, msecs: i32) void {
        C.QAbstractAnimation_SetCurrentTime(@ptrCast(self), @intCast(msecs));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
    ///
    /// ``` self: ?*C.QAnimationGroup, policy: qabstractanimation_enums.DeletionPolicy ```
    pub fn Start1(self: ?*anyopaque, policy: i64) void {
        C.QAbstractAnimation_Start1(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QAnimationGroup, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = C.QObject_ObjectName(@ptrCast(self));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: ?*C.QAnimationGroup, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QAnimationGroup, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QAnimationGroup, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAnimationGroup, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QAnimationGroup, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QAnimationGroup, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QObject {
        const _arr: C.struct_libqt_list = C.QObject_Children(@ptrCast(self));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QObject, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: ?*C.QAnimationGroup, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QAnimationGroup, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QAnimationGroup, obj: ?*C.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        C.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) ?*C.QMetaObject__Connection {
        return C.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QAnimationGroup, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, member: ?*C.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return C.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: ?*C.QMetaObject__Connection ```
    pub fn DisconnectWithQMetaObjectConnection(param1: ?*anyopaque) bool {
        return C.QObject_DisconnectWithQMetaObjectConnection(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QAnimationGroup, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QAnimationGroup, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QAnimationGroup, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: C.struct_libqt_list = C.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]C.struct_libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |_i| {
                C.libqt_string_free(@ptrCast(&_str[_i]));
            }
            C.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("Memory allocation failed");
        for (0.._arr.len) |_i| {
            const _data = _str[_i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[_i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Destroyed(self: ?*anyopaque) void {
        C.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QAnimationGroup, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAnimationGroup, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer2(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return C.QObject_StartTimer2(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: ?*C.QObject, signal: ?*C.QMetaMethod, receiver: ?*C.QObject, method: ?*C.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) ?*C.QMetaObject__Connection {
        return C.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: ?*C.QAnimationGroup, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAnimationGroup, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Duration(self: ?*anyopaque) i32 {
        return C.QAnimationGroup_Duration(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn QBaseDuration(self: ?*anyopaque) i32 {
        return C.QAnimationGroup_QBaseDuration(@ptrCast(self));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn () callconv(.c) i32 ```
    pub fn OnDuration(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QAnimationGroup_OnDuration(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, currentTime: i32 ```
    pub fn UpdateCurrentTime(self: ?*anyopaque, currentTime: i32) void {
        C.QAnimationGroup_UpdateCurrentTime(@ptrCast(self), @intCast(currentTime));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, currentTime: i32 ```
    pub fn QBaseUpdateCurrentTime(self: ?*anyopaque, currentTime: i32) void {
        C.QAnimationGroup_QBaseUpdateCurrentTime(@ptrCast(self), @intCast(currentTime));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, i32) callconv(.c) void ```
    pub fn OnUpdateCurrentTime(self: ?*anyopaque, slot: fn (?*anyopaque, i32) callconv(.c) void) void {
        C.QAnimationGroup_OnUpdateCurrentTime(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State ```
    pub fn UpdateState(self: ?*anyopaque, newState: i64, oldState: i64) void {
        C.QAnimationGroup_UpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, newState: qabstractanimation_enums.State, oldState: qabstractanimation_enums.State ```
    pub fn QBaseUpdateState(self: ?*anyopaque, newState: i64, oldState: i64) void {
        C.QAnimationGroup_QBaseUpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, qabstractanimation_enums.State, qabstractanimation_enums.State) callconv(.c) void ```
    pub fn OnUpdateState(self: ?*anyopaque, slot: fn (?*anyopaque, i64, i64) callconv(.c) void) void {
        C.QAnimationGroup_OnUpdateState(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, direction: qabstractanimation_enums.Direction ```
    pub fn UpdateDirection(self: ?*anyopaque, direction: i64) void {
        C.QAnimationGroup_UpdateDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, direction: qabstractanimation_enums.Direction ```
    pub fn QBaseUpdateDirection(self: ?*anyopaque, direction: i64) void {
        C.QAnimationGroup_QBaseUpdateDirection(@ptrCast(self), @intCast(direction));
    }

    /// Inherited from QAbstractAnimation
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, qabstractanimation_enums.Direction) callconv(.c) void ```
    pub fn OnUpdateDirection(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QAnimationGroup_OnUpdateDirection(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAnimationGroup_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QAnimationGroup_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, ?*C.QObject, ?*C.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QAnimationGroup_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, event: ?*C.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAnimationGroup_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, event: ?*C.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAnimationGroup_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, ?*C.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAnimationGroup_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, event: ?*C.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAnimationGroup_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, event: ?*C.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAnimationGroup_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, ?*C.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAnimationGroup_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, event: ?*C.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAnimationGroup_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, event: ?*C.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        C.QAnimationGroup_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, ?*C.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAnimationGroup_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, signal: ?*C.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAnimationGroup_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, signal: ?*C.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAnimationGroup_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAnimationGroup_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, signal: ?*C.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAnimationGroup_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, signal: ?*C.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        C.QAnimationGroup_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, ?*C.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QAnimationGroup_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn Sender(self: ?*anyopaque) ?*C.QObject {
        return C.QAnimationGroup_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn QBaseSender(self: ?*anyopaque) ?*C.QObject {
        return C.QAnimationGroup_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn () callconv(.c) ?*C.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) ?*C.QObject) void {
        C.QAnimationGroup_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QAnimationGroup_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return C.QAnimationGroup_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        C.QAnimationGroup_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QAnimationGroup_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = @constCast(signal.ptr);
        return C.QAnimationGroup_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, []const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) i32) void {
        C.QAnimationGroup_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, signal: ?*C.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QAnimationGroup_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, signal: ?*C.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return C.QAnimationGroup_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: ?*C.QAnimationGroup, slot: fn (?*C.QAnimationGroup, ?*C.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        C.QAnimationGroup_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAnimationGroup ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAnimationGroup_Delete(@ptrCast(self));
    }
};
