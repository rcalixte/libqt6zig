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

    /// New constructs a new KTwoFingerSwipe object.
    ///
    pub fn New() KTwoFingerSwipe {
        return .{ .ptr = qtc.KTwoFingerSwipe_new() };
    }

    /// New2 constructs a new KTwoFingerSwipe object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KTwoFingerSwipe {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerSwipe_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn MetaObject(self: KTwoFingerSwipe) QMetaObject {
        return .{ .ptr = qtc.KTwoFingerSwipe_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KTwoFingerSwipe, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTwoFingerSwipe_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn SuperMetaObject(self: KTwoFingerSwipe) QMetaObject {
        return .{ .ptr = qtc.KTwoFingerSwipe_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTwoFingerSwipe, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerSwipe_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTwoFingerSwipe_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KTwoFingerSwipe, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerSwipe_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KTwoFingerSwipe, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerSwipe_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: KTwoFingerSwipe, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTwoFingerSwipe_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KTwoFingerSwipe, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerSwipe_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktwofingerswipe.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn Pos(self: KTwoFingerSwipe) QPointF {
        return .{ .ptr = qtc.KTwoFingerSwipe_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: KTwoFingerSwipe, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.KTwoFingerSwipe_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn ScreenPos(self: KTwoFingerSwipe) QPointF {
        return .{ .ptr = qtc.KTwoFingerSwipe_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` screenPos: QPointF `
    ///
    pub fn SetScreenPos(self: KTwoFingerSwipe, screenPos: anytype) void {
        comptime _ = @TypeOf(screenPos)._is_QPointF;
        qtc.KTwoFingerSwipe_SetScreenPos(@ptrCast(self.ptr), @ptrCast(screenPos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn ScenePos(self: KTwoFingerSwipe) QPointF {
        return .{ .ptr = qtc.KTwoFingerSwipe_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` scenePos: QPointF `
    ///
    pub fn SetScenePos(self: KTwoFingerSwipe, scenePos: anytype) void {
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        qtc.KTwoFingerSwipe_SetScenePos(@ptrCast(self.ptr), @ptrCast(scenePos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#swipeAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn SwipeAngle(self: KTwoFingerSwipe) f64 {
        return qtc.KTwoFingerSwipe_SwipeAngle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setSwipeAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` swipeAngle: f64 `
    ///
    pub fn SetSwipeAngle(self: KTwoFingerSwipe, swipeAngle: f64) void {
        qtc.KTwoFingerSwipe_SetSwipeAngle(@ptrCast(self.ptr), @bitCast(swipeAngle));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktwofingerswipe.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktwofingerswipe.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn GestureType(self: KTwoFingerSwipe) i32 {
        return qtc.QGesture_GestureType(@ptrCast(self.ptr));
    }

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
    pub fn State(self: KTwoFingerSwipe) i32 {
        return qtc.QGesture_State(@ptrCast(self.ptr));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn HotSpot(self: KTwoFingerSwipe) QPointF {
        return .{ .ptr = qtc.QGesture_HotSpot(@ptrCast(self.ptr)) };
    }

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
    pub fn SetHotSpot(self: KTwoFingerSwipe, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QPointF;
        qtc.QGesture_SetHotSpot(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn HasHotSpot(self: KTwoFingerSwipe) bool {
        return qtc.QGesture_HasHotSpot(@ptrCast(self.ptr));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn UnsetHotSpot(self: KTwoFingerSwipe) void {
        qtc.QGesture_UnsetHotSpot(@ptrCast(self.ptr));
    }

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
    pub fn SetGestureCancelPolicy(self: KTwoFingerSwipe, policy: i32) void {
        qtc.QGesture_SetGestureCancelPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

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
    pub fn GestureCancelPolicy(self: KTwoFingerSwipe) i32 {
        return qtc.QGesture_GestureCancelPolicy(@ptrCast(self.ptr));
    }

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
    pub fn ObjectName(self: KTwoFingerSwipe, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktwofingerswipe.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KTwoFingerSwipe, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn IsWidgetType(self: KTwoFingerSwipe) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn IsWindowType(self: KTwoFingerSwipe) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn IsQuickItemType(self: KTwoFingerSwipe) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn SignalsBlocked(self: KTwoFingerSwipe) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KTwoFingerSwipe, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn Thread(self: KTwoFingerSwipe) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTwoFingerSwipe, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KTwoFingerSwipe, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KTwoFingerSwipe, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KTwoFingerSwipe, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KTwoFingerSwipe, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KTwoFingerSwipe, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktwofingerswipe.Children: Memory allocation failed");
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTwoFingerSwipe, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KTwoFingerSwipe, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KTwoFingerSwipe, obj: anytype) void {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTwoFingerSwipe, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn Disconnect3(self: KTwoFingerSwipe) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KTwoFingerSwipe, receiver: anytype) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn DumpObjectTree(self: KTwoFingerSwipe) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn DumpObjectInfo(self: KTwoFingerSwipe) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KTwoFingerSwipe, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTwoFingerSwipe, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KTwoFingerSwipe, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktwofingerswipe.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktwofingerswipe.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn BindingStorage(self: KTwoFingerSwipe) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn BindingStorage2(self: KTwoFingerSwipe) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn Destroyed(self: KTwoFingerSwipe) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn Parent(self: KTwoFingerSwipe) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KTwoFingerSwipe, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn DeleteLater(self: KTwoFingerSwipe) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KTwoFingerSwipe, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KTwoFingerSwipe, time: i64, timerType: i32) i32 {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTwoFingerSwipe, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTwoFingerSwipe, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KTwoFingerSwipe, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTwoFingerSwipe, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTwoFingerSwipe, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTwoFingerSwipe, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTwoFingerSwipe, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerSwipe_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KTwoFingerSwipe, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerSwipe_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QEvent) callconv(.c) bool) void {
        qtc.KTwoFingerSwipe_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTwoFingerSwipe, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerSwipe_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KTwoFingerSwipe, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerSwipe_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTwoFingerSwipe_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KTwoFingerSwipe, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTwoFingerSwipe_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KTwoFingerSwipe, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTwoFingerSwipe_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QTimerEvent) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KTwoFingerSwipe, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTwoFingerSwipe_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KTwoFingerSwipe, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTwoFingerSwipe_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QChildEvent) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KTwoFingerSwipe, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTwoFingerSwipe_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KTwoFingerSwipe, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTwoFingerSwipe_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QEvent) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KTwoFingerSwipe, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerSwipe_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KTwoFingerSwipe, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerSwipe_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QMetaMethod) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KTwoFingerSwipe, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerSwipe_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KTwoFingerSwipe, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerSwipe_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QMetaMethod) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KTwoFingerSwipe) QObject {
        return .{ .ptr = qtc.KTwoFingerSwipe_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn SuperSender(self: KTwoFingerSwipe) QObject {
        return .{ .ptr = qtc.KTwoFingerSwipe_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KTwoFingerSwipe, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTwoFingerSwipe_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KTwoFingerSwipe) i32 {
        return qtc.KTwoFingerSwipe_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn SuperSenderSignalIndex(self: KTwoFingerSwipe) i32 {
        return qtc.KTwoFingerSwipe_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KTwoFingerSwipe, callback: *const fn () callconv(.c) i32) void {
        qtc.KTwoFingerSwipe_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KTwoFingerSwipe, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerSwipe_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KTwoFingerSwipe, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerSwipe_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTwoFingerSwipe_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KTwoFingerSwipe, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTwoFingerSwipe_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerSwipe `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KTwoFingerSwipe, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTwoFingerSwipe_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, QMetaMethod) callconv(.c) bool) void {
        qtc.KTwoFingerSwipe_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KTwoFingerSwipe, callback: *const fn (KTwoFingerSwipe, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#dtor.KTwoFingerSwipe)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTwoFingerSwipe `
    ///
    pub fn Delete(self: KTwoFingerSwipe) void {
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

    /// New constructs a new KTwoFingerSwipeRecognizer object.
    ///
    pub fn New() KTwoFingerSwipeRecognizer {
        return .{ .ptr = qtc.KTwoFingerSwipeRecognizer_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` target: QObject `
    ///
    pub fn Create(self: KTwoFingerSwipeRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerSwipeRecognizer_Create(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

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
    pub fn OnCreate(self: KTwoFingerSwipeRecognizer, callback: *const fn (KTwoFingerSwipeRecognizer, QObject) callconv(.c) QGesture) void {
        qtc.KTwoFingerSwipeRecognizer_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

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
    pub fn SuperCreate(self: KTwoFingerSwipeRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerSwipeRecognizer_SuperCreate(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

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
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn Recognize(self: KTwoFingerSwipeRecognizer, gesture: anytype, watched: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(gesture)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerSwipeRecognizer_Recognize(@ptrCast(self.ptr), @ptrCast(gesture.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnRecognize(self: KTwoFingerSwipeRecognizer, callback: *const fn (KTwoFingerSwipeRecognizer, QGesture, QObject, QEvent) callconv(.c) i32) void {
        qtc.KTwoFingerSwipeRecognizer_OnRecognize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRecognize` instead
    ///
    pub const QBaseRecognize = SuperRecognize;

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
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn SuperRecognize(self: KTwoFingerSwipeRecognizer, gesture: anytype, watched: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(gesture)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerSwipeRecognizer_SuperRecognize(@ptrCast(self.ptr), @ptrCast(gesture.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#maxSwipeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    pub fn MaxSwipeTime(self: KTwoFingerSwipeRecognizer) i32 {
        return qtc.KTwoFingerSwipeRecognizer_MaxSwipeTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#setMaxSwipeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` i: i32 `
    ///
    pub fn SetMaxSwipeTime(self: KTwoFingerSwipeRecognizer, i: i32) void {
        qtc.KTwoFingerSwipeRecognizer_SetMaxSwipeTime(@ptrCast(self.ptr), @bitCast(i));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#minSswipeDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    pub fn MinSswipeDistance(self: KTwoFingerSwipeRecognizer) i32 {
        return qtc.KTwoFingerSwipeRecognizer_MinSswipeDistance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#setSwipeDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    /// ` i: i32 `
    ///
    pub fn SetSwipeDistance(self: KTwoFingerSwipeRecognizer, i: i32) void {
        qtc.KTwoFingerSwipeRecognizer_SetSwipeDistance(@ptrCast(self.ptr), @bitCast(i));
    }

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
    pub fn RegisterRecognizer(recognizer: anytype) i32 {
        comptime _ = @TypeOf(recognizer)._is_QGestureRecognizer;
        return qtc.QGestureRecognizer_RegisterRecognizer(@ptrCast(recognizer.ptr));
    }

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UnregisterRecognizer(typeVal: i32) void {
        qtc.QGestureRecognizer_UnregisterRecognizer(@bitCast(typeVal));
    }

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
    pub fn OperatorAssign(self: KTwoFingerSwipeRecognizer, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QGestureRecognizer;
        qtc.QGestureRecognizer_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    /// ` state: QGesture `
    ///
    pub fn Reset(self: KTwoFingerSwipeRecognizer, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QGesture;
        qtc.KTwoFingerSwipeRecognizer_Reset(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

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
    /// ` state: QGesture `
    ///
    pub fn SuperReset(self: KTwoFingerSwipeRecognizer, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QGesture;
        qtc.KTwoFingerSwipeRecognizer_SuperReset(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

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
    pub fn OnReset(self: KTwoFingerSwipeRecognizer, callback: *const fn (KTwoFingerSwipeRecognizer, QGesture) callconv(.c) void) void {
        qtc.KTwoFingerSwipeRecognizer_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#dtor.KTwoFingerSwipeRecognizer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTwoFingerSwipeRecognizer `
    ///
    pub fn Delete(self: KTwoFingerSwipeRecognizer) void {
        qtc.KTwoFingerSwipeRecognizer_Delete(@ptrCast(self.ptr));
    }
};
