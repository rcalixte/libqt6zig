const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QGesture = @import("libqt6").QGesture;
const QGestureRecognizer = @import("libqt6").QGestureRecognizer;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPointF = @import("libqt6").QPointF;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qgesture_enums = @import("../libqgesture.zig").enums;
const qgesturerecognizer_enums = @import("../libqgesturerecognizer.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html)
pub const KTwoFingerSwipe = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTwoFingerSwipe,

    pub const _is_KTwoFingerSwipe = {};
    pub const _is_QGesture = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTwoFingerSwipe object in C++ memory
    ///
    pub fn new() KTwoFingerSwipe {
        return .{ .ptr = qtc.KTwoFingerSwipe_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTwoFingerSwipe object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KTwoFingerSwipe {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerSwipe_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn metaObject(self: KTwoFingerSwipe) QMetaObject {
        return .{ .ptr = qtc.KTwoFingerSwipe_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KTwoFingerSwipe, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTwoFingerSwipe_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn superMetaObject(self: KTwoFingerSwipe) QMetaObject {
        return .{ .ptr = qtc.KTwoFingerSwipe_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KTwoFingerSwipe, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerSwipe_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTwoFingerSwipe_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KTwoFingerSwipe, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerSwipe_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KTwoFingerSwipe, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerSwipe_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTwoFingerSwipe_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KTwoFingerSwipe, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerSwipe_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTwoFingerSwipe.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn pos(self: KTwoFingerSwipe) QPointF {
        return .{ .ptr = qtc.KTwoFingerSwipe_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: KTwoFingerSwipe, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.KTwoFingerSwipe_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn screenPos(self: KTwoFingerSwipe) QPointF {
        return .{ .ptr = qtc.KTwoFingerSwipe_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreenPos` instead
    ///
    pub const SetScreenPos = setScreenPos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _screenPos: QPointF `
    ///
    pub fn setScreenPos(self: KTwoFingerSwipe, _screenPos: anytype) void {
        comptime _ = @TypeOf(_screenPos)._is_QPointF;
        qtc.KTwoFingerSwipe_SetScreenPos(@ptrCast(self.ptr), @ptrCast(_screenPos.ptr));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn scenePos(self: KTwoFingerSwipe) QPointF {
        return .{ .ptr = qtc.KTwoFingerSwipe_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScenePos` instead
    ///
    pub const SetScenePos = setScenePos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _scenePos: QPointF `
    ///
    pub fn setScenePos(self: KTwoFingerSwipe, _scenePos: anytype) void {
        comptime _ = @TypeOf(_scenePos)._is_QPointF;
        qtc.KTwoFingerSwipe_SetScenePos(@ptrCast(self.ptr), @ptrCast(_scenePos.ptr));
    }

    /// ### DEPRECATED: Use `swipeAngle` instead
    ///
    pub const SwipeAngle = swipeAngle;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#swipeAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn swipeAngle(self: KTwoFingerSwipe) f64 {
        return qtc.KTwoFingerSwipe_SwipeAngle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSwipeAngle` instead
    ///
    pub const SetSwipeAngle = setSwipeAngle;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setSwipeAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _swipeAngle: f64 `
    ///
    pub fn setSwipeAngle(self: KTwoFingerSwipe, _swipeAngle: f64) void {
        qtc.KTwoFingerSwipe_SetSwipeAngle(@ptrCast(self.ptr), @bitCast(_swipeAngle));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTwoFingerSwipe.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTwoFingerSwipe.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `gestureType` instead
    ///
    pub const GestureType = gestureType;

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn gestureType(self: KTwoFingerSwipe) i32 {
        return qtc.QGesture_GestureType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureState `
    ///
    pub fn state(self: KTwoFingerSwipe) i32 {
        return qtc.QGesture_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hotSpot` instead
    ///
    pub const HotSpot = hotSpot;

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn hotSpot(self: KTwoFingerSwipe) QPointF {
        return .{ .ptr = qtc.QGesture_HotSpot(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHotSpot` instead
    ///
    pub const SetHotSpot = setHotSpot;

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` value: QPointF `
    ///
    pub fn setHotSpot(self: KTwoFingerSwipe, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QPointF;
        qtc.QGesture_SetHotSpot(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `hasHotSpot` instead
    ///
    pub const HasHotSpot = hasHotSpot;

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn hasHotSpot(self: KTwoFingerSwipe) bool {
        return qtc.QGesture_HasHotSpot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unsetHotSpot` instead
    ///
    pub const UnsetHotSpot = unsetHotSpot;

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn unsetHotSpot(self: KTwoFingerSwipe) void {
        qtc.QGesture_UnsetHotSpot(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGestureCancelPolicy` instead
    ///
    pub const SetGestureCancelPolicy = setGestureCancelPolicy;

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` policy: qgesture_enums.GestureCancelPolicy `
    ///
    pub fn setGestureCancelPolicy(self: KTwoFingerSwipe, policy: i32) void {
        qtc.QGesture_SetGestureCancelPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `gestureCancelPolicy` instead
    ///
    pub const GestureCancelPolicy = gestureCancelPolicy;

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ## Returns:
    ///
    /// ` qgesture_enums.GestureCancelPolicy `
    ///
    pub fn gestureCancelPolicy(self: KTwoFingerSwipe) i32 {
        return qtc.QGesture_GestureCancelPolicy(@ptrCast(self.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KTwoFingerSwipe, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTwoFingerSwipe.objectName: Memory allocation failed");
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KTwoFingerSwipe, name: []const u8) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn isWidgetType(self: KTwoFingerSwipe) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn isWindowType(self: KTwoFingerSwipe) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn isQuickItemType(self: KTwoFingerSwipe) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn signalsBlocked(self: KTwoFingerSwipe) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KTwoFingerSwipe, b: bool) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn thread(self: KTwoFingerSwipe) QThread {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KTwoFingerSwipe, _thread: anytype) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KTwoFingerSwipe, interval: i32) i32 {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KTwoFingerSwipe, time: i64) i32 {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KTwoFingerSwipe, id: i32) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KTwoFingerSwipe, id: i32) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KTwoFingerSwipe, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KTwoFingerSwipe.children: Memory allocation failed");
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KTwoFingerSwipe, _parent: anytype) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KTwoFingerSwipe, filterObj: anytype) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KTwoFingerSwipe, obj: anytype) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KTwoFingerSwipe, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn disconnect3(self: KTwoFingerSwipe) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KTwoFingerSwipe, receiver: anytype) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn dumpObjectTree(self: KTwoFingerSwipe) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn dumpObjectInfo(self: KTwoFingerSwipe) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KTwoFingerSwipe, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KTwoFingerSwipe, name: [:0]const u8) QVariant {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KTwoFingerSwipe, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KTwoFingerSwipe.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTwoFingerSwipe.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn bindingStorage(self: KTwoFingerSwipe) QBindingStorage {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn bindingStorage2(self: KTwoFingerSwipe) QBindingStorage {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn destroyed(self: KTwoFingerSwipe) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe) callconv(.c) void) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn parent(self: KTwoFingerSwipe) QObject {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KTwoFingerSwipe, classname: [:0]const u8) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn deleteLater(self: KTwoFingerSwipe) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KTwoFingerSwipe, interval: i32, timerType: i32) i32 {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KTwoFingerSwipe, time: i64, timerType: i32) i32 {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KTwoFingerSwipe, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KTwoFingerSwipe, signal: [:0]const u8) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KTwoFingerSwipe, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KTwoFingerSwipe, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KTwoFingerSwipe, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KTwoFingerSwipe, param1: anytype) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KTwoFingerSwipe, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerSwipe_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KTwoFingerSwipe, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerSwipe_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QEvent) callconv(.c) bool) void {
        qtc.KTwoFingerSwipe_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KTwoFingerSwipe, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerSwipe_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KTwoFingerSwipe, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerSwipe_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTwoFingerSwipe_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KTwoFingerSwipe, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KTwoFingerSwipe_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KTwoFingerSwipe, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KTwoFingerSwipe_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QTimerEvent) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KTwoFingerSwipe, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTwoFingerSwipe_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KTwoFingerSwipe, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTwoFingerSwipe_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QChildEvent) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KTwoFingerSwipe, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTwoFingerSwipe_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KTwoFingerSwipe, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTwoFingerSwipe_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QEvent) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KTwoFingerSwipe, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerSwipe_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KTwoFingerSwipe, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerSwipe_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QMetaMethod) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KTwoFingerSwipe, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerSwipe_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KTwoFingerSwipe, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerSwipe_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QMetaMethod) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn sender(self: KTwoFingerSwipe) QObject {
        return .{ .ptr = qtc.KTwoFingerSwipe_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn superSender(self: KTwoFingerSwipe) QObject {
        return .{ .ptr = qtc.KTwoFingerSwipe_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KTwoFingerSwipe, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTwoFingerSwipe_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn senderSignalIndex(self: KTwoFingerSwipe) i32 {
        return qtc.KTwoFingerSwipe_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn superSenderSignalIndex(self: KTwoFingerSwipe) i32 {
        return qtc.KTwoFingerSwipe_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KTwoFingerSwipe, callback: *const fn () callconv(.c) i32) void {
        qtc.KTwoFingerSwipe_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KTwoFingerSwipe, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerSwipe_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KTwoFingerSwipe, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerSwipe_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTwoFingerSwipe_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KTwoFingerSwipe, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTwoFingerSwipe_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KTwoFingerSwipe, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTwoFingerSwipe_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QMetaMethod) callconv(.c) bool) void {
        qtc.KTwoFingerSwipe_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#dtor.KTwoFingerSwipe)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn delete(self: KTwoFingerSwipe) void {
        qtc.KTwoFingerSwipe_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html)
pub const KTwoFingerSwipeRecognizer = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTwoFingerSwipeRecognizer,

    pub const _is_KTwoFingerSwipeRecognizer = {};
    pub const _is_QGestureRecognizer = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTwoFingerSwipeRecognizer object in C++ memory
    ///
    pub fn new() KTwoFingerSwipeRecognizer {
        return .{ .ptr = qtc.KTwoFingerSwipeRecognizer_new() };
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` target: QObject `
    ///
    pub fn create(self: KTwoFingerSwipeRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerSwipeRecognizer_Create(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreate` instead
    ///
    pub const OnCreate = onCreate;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#create)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipeRecognizer, target: QObject) callconv(.c) QGesture `
    ///
    pub fn onCreate(self: KTwoFingerSwipeRecognizer, callback: *const fn (KTwoFingerSwipeRecognizer, QObject) callconv(.c) QGesture) void {
        qtc.KTwoFingerSwipeRecognizer_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreate` instead
    ///
    pub const SuperCreate = superCreate;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#create)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` target: QObject `
    ///
    pub fn superCreate(self: KTwoFingerSwipeRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerSwipeRecognizer_SuperCreate(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// ### DEPRECATED: Use `recognize` instead
    ///
    pub const Recognize = recognize;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#recognize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` gesture: QGesture `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn recognize(self: KTwoFingerSwipeRecognizer, gesture: anytype, watched: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(gesture)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerSwipeRecognizer_Recognize(@ptrCast(self.ptr), @ptrCast(gesture.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onRecognize` instead
    ///
    pub const OnRecognize = onRecognize;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#recognize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipeRecognizer, gesture: QGesture, watched: QObject, event: QEvent) callconv(.c) i32 `
    ///
    pub fn onRecognize(self: KTwoFingerSwipeRecognizer, callback: *const fn (KTwoFingerSwipeRecognizer, QGesture, QObject, QEvent) callconv(.c) i32) void {
        qtc.KTwoFingerSwipeRecognizer_OnRecognize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRecognize` instead
    ///
    pub const SuperRecognize = superRecognize;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#recognize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` gesture: QGesture `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn superRecognize(self: KTwoFingerSwipeRecognizer, gesture: anytype, watched: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(gesture)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerSwipeRecognizer_SuperRecognize(@ptrCast(self.ptr), @ptrCast(gesture.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `maxSwipeTime` instead
    ///
    pub const MaxSwipeTime = maxSwipeTime;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#maxSwipeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    pub fn maxSwipeTime(self: KTwoFingerSwipeRecognizer) i32 {
        return qtc.KTwoFingerSwipeRecognizer_MaxSwipeTime(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxSwipeTime` instead
    ///
    pub const SetMaxSwipeTime = setMaxSwipeTime;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#setMaxSwipeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` i: i32 `
    ///
    pub fn setMaxSwipeTime(self: KTwoFingerSwipeRecognizer, i: i32) void {
        qtc.KTwoFingerSwipeRecognizer_SetMaxSwipeTime(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `minSswipeDistance` instead
    ///
    pub const MinSswipeDistance = minSswipeDistance;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#minSswipeDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    pub fn minSswipeDistance(self: KTwoFingerSwipeRecognizer) i32 {
        return qtc.KTwoFingerSwipeRecognizer_MinSswipeDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSwipeDistance` instead
    ///
    pub const SetSwipeDistance = setSwipeDistance;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#setSwipeDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` i: i32 `
    ///
    pub fn setSwipeDistance(self: KTwoFingerSwipeRecognizer, i: i32) void {
        qtc.KTwoFingerSwipeRecognizer_SetSwipeDistance(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### DEPRECATED: Use `registerRecognizer` instead
    ///
    pub const RegisterRecognizer = registerRecognizer;

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
    ///
    /// ## Parameter(s):
    ///
    /// ` recognizer: QGestureRecognizer `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn registerRecognizer(recognizer: anytype) i32 {
        comptime _ = @TypeOf(recognizer)._is_QGestureRecognizer;
        return qtc.QGestureRecognizer_RegisterRecognizer(@ptrCast(recognizer.ptr));
    }

    /// ### DEPRECATED: Use `unregisterRecognizer` instead
    ///
    pub const UnregisterRecognizer = unregisterRecognizer;

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn unregisterRecognizer(typeVal: i32) void {
        qtc.QGestureRecognizer_UnregisterRecognizer(@bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` param1: QGestureRecognizer `
    ///
    pub fn operatorAssign(self: KTwoFingerSwipeRecognizer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QGestureRecognizer;
        qtc.QGestureRecognizer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` _state: QGesture `
    ///
    pub fn reset(self: KTwoFingerSwipeRecognizer, _state: anytype) void {
        comptime _ = @TypeOf(_state)._is_QGesture;
        qtc.KTwoFingerSwipeRecognizer_Reset(@ptrCast(self.ptr), @ptrCast(_state.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` _state: QGesture `
    ///
    pub fn superReset(self: KTwoFingerSwipeRecognizer, _state: anytype) void {
        comptime _ = @TypeOf(_state)._is_QGesture;
        qtc.KTwoFingerSwipeRecognizer_SuperReset(@ptrCast(self.ptr), @ptrCast(_state.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerSwipeRecognizer`
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipeRecognizer, state: QGesture) callconv(.c) void `
    ///
    pub fn onReset(self: KTwoFingerSwipeRecognizer, callback: *const fn (KTwoFingerSwipeRecognizer, QGesture) callconv(.c) void) void {
        qtc.KTwoFingerSwipeRecognizer_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#dtor.KTwoFingerSwipeRecognizer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    pub fn delete(self: KTwoFingerSwipeRecognizer) void {
        qtc.KTwoFingerSwipeRecognizer_Delete(@ptrCast(self.ptr));
    }
};
