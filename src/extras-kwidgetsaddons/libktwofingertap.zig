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

/// ### [Upstream resources](https://api.kde.org/ktwofingertap.html)
pub const KTwoFingerTap = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTwoFingerTap,

    pub const _is_KTwoFingerTap = {};
    pub const _is_QGesture = {};
    pub const _is_QObject = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTwoFingerTap object in C++ memory
    ///
    pub fn new() KTwoFingerTap {
        return .{ .ptr = qtc.KTwoFingerTap_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTwoFingerTap object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QObject `
    ///
    pub fn new2(_parent: anytype) KTwoFingerTap {
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerTap_new2(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn metaObject(self: KTwoFingerTap) QMetaObject {
        return .{ .ptr = qtc.KTwoFingerTap_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: KTwoFingerTap, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTwoFingerTap_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn superMetaObject(self: KTwoFingerTap) QMetaObject {
        return .{ .ptr = qtc.KTwoFingerTap_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KTwoFingerTap, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerTap_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTwoFingerTap_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KTwoFingerTap, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerTap_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: KTwoFingerTap, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerTap_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTwoFingerTap_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: KTwoFingerTap, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerTap_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTwoFingerTap.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn pos(self: KTwoFingerTap) QPointF {
        return .{ .ptr = qtc.KTwoFingerTap_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPos` instead
    ///
    pub const SetPos = setPos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn setPos(self: KTwoFingerTap, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        qtc.KTwoFingerTap_SetPos(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `screenPos` instead
    ///
    pub const ScreenPos = screenPos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn screenPos(self: KTwoFingerTap) QPointF {
        return .{ .ptr = qtc.KTwoFingerTap_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreenPos` instead
    ///
    pub const SetScreenPos = setScreenPos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` _screenPos: QPointF `
    ///
    pub fn setScreenPos(self: KTwoFingerTap, _screenPos: anytype) void {
        comptime _ = @TypeOf(_screenPos)._is_QPointF;
        qtc.KTwoFingerTap_SetScreenPos(@ptrCast(self.ptr), @ptrCast(_screenPos.ptr));
    }

    /// ### DEPRECATED: Use `scenePos` instead
    ///
    pub const ScenePos = scenePos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn scenePos(self: KTwoFingerTap) QPointF {
        return .{ .ptr = qtc.KTwoFingerTap_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScenePos` instead
    ///
    pub const SetScenePos = setScenePos;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` _scenePos: QPointF `
    ///
    pub fn setScenePos(self: KTwoFingerTap, _scenePos: anytype) void {
        comptime _ = @TypeOf(_scenePos)._is_QPointF;
        qtc.KTwoFingerTap_SetScenePos(@ptrCast(self.ptr), @ptrCast(_scenePos.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTwoFingerTap.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTwoFingerTap.tr3: Memory allocation failed");
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
    /// ` self: KTwoFingerTap `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn gestureType(self: KTwoFingerTap) i32 {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureState `
    ///
    pub fn state(self: KTwoFingerTap) i32 {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn hotSpot(self: KTwoFingerTap) QPointF {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` value: QPointF `
    ///
    pub fn setHotSpot(self: KTwoFingerTap, value: anytype) void {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn hasHotSpot(self: KTwoFingerTap) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn unsetHotSpot(self: KTwoFingerTap) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` policy: qgesture_enums.GestureCancelPolicy `
    ///
    pub fn setGestureCancelPolicy(self: KTwoFingerTap, policy: i32) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ## Returns:
    ///
    /// ` qgesture_enums.GestureCancelPolicy `
    ///
    pub fn gestureCancelPolicy(self: KTwoFingerTap) i32 {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: KTwoFingerTap, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTwoFingerTap.objectName: Memory allocation failed");
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: KTwoFingerTap, name: []const u8) void {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn isWidgetType(self: KTwoFingerTap) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn isWindowType(self: KTwoFingerTap) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn isQuickItemType(self: KTwoFingerTap) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn signalsBlocked(self: KTwoFingerTap) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: KTwoFingerTap, b: bool) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn thread(self: KTwoFingerTap) QThread {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KTwoFingerTap, _thread: anytype) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: KTwoFingerTap, interval: i32) i32 {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: KTwoFingerTap, time: i64) i32 {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: KTwoFingerTap, id: i32) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: KTwoFingerTap, id: i32) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: KTwoFingerTap, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KTwoFingerTap.children: Memory allocation failed");
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: KTwoFingerTap, _parent: anytype) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: KTwoFingerTap, filterObj: anytype) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: KTwoFingerTap, obj: anytype) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KTwoFingerTap, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn disconnect3(self: KTwoFingerTap) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: KTwoFingerTap, receiver: anytype) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn dumpObjectTree(self: KTwoFingerTap) void {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn dumpObjectInfo(self: KTwoFingerTap) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: KTwoFingerTap, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: KTwoFingerTap, name: [:0]const u8) QVariant {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: KTwoFingerTap, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KTwoFingerTap.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTwoFingerTap.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn bindingStorage(self: KTwoFingerTap) QBindingStorage {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn bindingStorage2(self: KTwoFingerTap) QBindingStorage {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn destroyed(self: KTwoFingerTap) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` callback: *const fn (self: KTwoFingerTap) callconv(.c) void `
    ///
    pub fn onDestroyed(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap) callconv(.c) void) void {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn parent(self: KTwoFingerTap) QObject {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: KTwoFingerTap, classname: [:0]const u8) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn deleteLater(self: KTwoFingerTap) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: KTwoFingerTap, interval: i32, timerType: i32) i32 {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: KTwoFingerTap, time: i64, timerType: i32) i32 {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KTwoFingerTap, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: KTwoFingerTap, signal: [:0]const u8) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: KTwoFingerTap, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: KTwoFingerTap, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: KTwoFingerTap, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: KTwoFingerTap, param1: anytype) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QObject) callconv(.c) void) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KTwoFingerTap, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerTap_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KTwoFingerTap, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerTap_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QEvent) callconv(.c) bool) void {
        qtc.KTwoFingerTap_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KTwoFingerTap, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerTap_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KTwoFingerTap, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerTap_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTwoFingerTap_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: KTwoFingerTap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KTwoFingerTap_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: KTwoFingerTap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.KTwoFingerTap_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QTimerEvent) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KTwoFingerTap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTwoFingerTap_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KTwoFingerTap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTwoFingerTap_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QChildEvent) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KTwoFingerTap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTwoFingerTap_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KTwoFingerTap, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTwoFingerTap_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QEvent) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: KTwoFingerTap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerTap_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: KTwoFingerTap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerTap_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QMetaMethod) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: KTwoFingerTap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerTap_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: KTwoFingerTap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerTap_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QMetaMethod) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn sender(self: KTwoFingerTap) QObject {
        return .{ .ptr = qtc.KTwoFingerTap_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn superSender(self: KTwoFingerTap) QObject {
        return .{ .ptr = qtc.KTwoFingerTap_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: KTwoFingerTap, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTwoFingerTap_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn senderSignalIndex(self: KTwoFingerTap) i32 {
        return qtc.KTwoFingerTap_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn superSenderSignalIndex(self: KTwoFingerTap) i32 {
        return qtc.KTwoFingerTap_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: KTwoFingerTap, callback: *const fn () callconv(.c) i32) void {
        qtc.KTwoFingerTap_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: KTwoFingerTap, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerTap_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: KTwoFingerTap, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerTap_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTwoFingerTap_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: KTwoFingerTap, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTwoFingerTap_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: KTwoFingerTap, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTwoFingerTap_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerTap`
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QMetaMethod) callconv(.c) bool) void {
        qtc.KTwoFingerTap_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#dtor.KTwoFingerTap)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn delete(self: KTwoFingerTap) void {
        qtc.KTwoFingerTap_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html)
pub const KTwoFingerTapRecognizer = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTwoFingerTapRecognizer,

    pub const _is_KTwoFingerTapRecognizer = {};
    pub const _is_QGestureRecognizer = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTwoFingerTapRecognizer object in C++ memory
    ///
    pub fn new() KTwoFingerTapRecognizer {
        return .{ .ptr = qtc.KTwoFingerTapRecognizer_new() };
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` target: QObject `
    ///
    pub fn create(self: KTwoFingerTapRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerTapRecognizer_Create(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreate` instead
    ///
    pub const OnCreate = onCreate;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#create)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` callback: *const fn (self: KTwoFingerTapRecognizer, target: QObject) callconv(.c) QGesture `
    ///
    pub fn onCreate(self: KTwoFingerTapRecognizer, callback: *const fn (KTwoFingerTapRecognizer, QObject) callconv(.c) QGesture) void {
        qtc.KTwoFingerTapRecognizer_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreate` instead
    ///
    pub const SuperCreate = superCreate;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#create)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` target: QObject `
    ///
    pub fn superCreate(self: KTwoFingerTapRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerTapRecognizer_SuperCreate(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

    /// ### DEPRECATED: Use `recognize` instead
    ///
    pub const Recognize = recognize;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#recognize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTapRecognizer `
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
    pub fn recognize(self: KTwoFingerTapRecognizer, gesture: anytype, watched: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(gesture)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerTapRecognizer_Recognize(@ptrCast(self.ptr), @ptrCast(gesture.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onRecognize` instead
    ///
    pub const OnRecognize = onRecognize;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#recognize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` callback: *const fn (self: KTwoFingerTapRecognizer, gesture: QGesture, watched: QObject, event: QEvent) callconv(.c) i32 `
    ///
    pub fn onRecognize(self: KTwoFingerTapRecognizer, callback: *const fn (KTwoFingerTapRecognizer, QGesture, QObject, QEvent) callconv(.c) i32) void {
        qtc.KTwoFingerTapRecognizer_OnRecognize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRecognize` instead
    ///
    pub const SuperRecognize = superRecognize;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#recognize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTapRecognizer `
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
    pub fn superRecognize(self: KTwoFingerTapRecognizer, gesture: anytype, watched: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(gesture)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTwoFingerTapRecognizer_SuperRecognize(@ptrCast(self.ptr), @ptrCast(gesture.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `tapRadius` instead
    ///
    pub const TapRadius = tapRadius;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#tapRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    pub fn tapRadius(self: KTwoFingerTapRecognizer) i32 {
        return qtc.KTwoFingerTapRecognizer_TapRadius(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTapRadius` instead
    ///
    pub const SetTapRadius = setTapRadius;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#setTapRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` i: i32 `
    ///
    pub fn setTapRadius(self: KTwoFingerTapRecognizer, i: i32) void {
        qtc.KTwoFingerTapRecognizer_SetTapRadius(@ptrCast(self.ptr), @bitCast(i));
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
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` param1: QGestureRecognizer `
    ///
    pub fn operatorAssign(self: KTwoFingerTapRecognizer, param1: anytype) void {
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
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` _state: QGesture `
    ///
    pub fn reset(self: KTwoFingerTapRecognizer, _state: anytype) void {
        comptime _ = @TypeOf(_state)._is_QGesture;
        qtc.KTwoFingerTapRecognizer_Reset(@ptrCast(self.ptr), @ptrCast(_state.ptr));
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
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` _state: QGesture `
    ///
    pub fn superReset(self: KTwoFingerTapRecognizer, _state: anytype) void {
        comptime _ = @TypeOf(_state)._is_QGesture;
        qtc.KTwoFingerTapRecognizer_SuperReset(@ptrCast(self.ptr), @ptrCast(_state.ptr));
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
    /// ` self: KTwoFingerTapRecognizer`
    ///
    /// ` callback: *const fn (self: KTwoFingerTapRecognizer, state: QGesture) callconv(.c) void `
    ///
    pub fn onReset(self: KTwoFingerTapRecognizer, callback: *const fn (KTwoFingerTapRecognizer, QGesture) callconv(.c) void) void {
        qtc.KTwoFingerTapRecognizer_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#dtor.KTwoFingerTapRecognizer)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    pub fn delete(self: KTwoFingerTapRecognizer) void {
        qtc.KTwoFingerTapRecognizer_Delete(@ptrCast(self.ptr));
    }
};
