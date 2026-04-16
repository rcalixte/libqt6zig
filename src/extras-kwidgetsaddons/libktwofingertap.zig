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

    /// New constructs a new KTwoFingerTap object.
    ///
    pub fn New() KTwoFingerTap {
        return .{ .ptr = qtc.KTwoFingerTap_new() };
    }

    /// New2 constructs a new KTwoFingerTap object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QObject `
    ///
    pub fn New2(parent: anytype) KTwoFingerTap {
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerTap_new2(@ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn MetaObject(self: KTwoFingerTap) QMetaObject {
        return .{ .ptr = qtc.KTwoFingerTap_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: KTwoFingerTap, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTwoFingerTap_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn SuperMetaObject(self: KTwoFingerTap) QMetaObject {
        return .{ .ptr = qtc.KTwoFingerTap_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTwoFingerTap, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerTap_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTwoFingerTap_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KTwoFingerTap, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerTap_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: KTwoFingerTap, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerTap_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` callback: *const fn (self: KTwoFingerTap, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTwoFingerTap_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: KTwoFingerTap, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerTap_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktwofingertap.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn Pos(self: KTwoFingerTap) QPointF {
        return .{ .ptr = qtc.KTwoFingerTap_Pos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` pos: QPointF `
    ///
    pub fn SetPos(self: KTwoFingerTap, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.KTwoFingerTap_SetPos(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn ScreenPos(self: KTwoFingerTap) QPointF {
        return .{ .ptr = qtc.KTwoFingerTap_ScreenPos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` screenPos: QPointF `
    ///
    pub fn SetScreenPos(self: KTwoFingerTap, screenPos: anytype) void {
        comptime _ = @TypeOf(screenPos)._is_QPointF;
        qtc.KTwoFingerTap_SetScreenPos(@ptrCast(self.ptr), @ptrCast(screenPos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn ScenePos(self: KTwoFingerTap) QPointF {
        return .{ .ptr = qtc.KTwoFingerTap_ScenePos(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` scenePos: QPointF `
    ///
    pub fn SetScenePos(self: KTwoFingerTap, scenePos: anytype) void {
        comptime _ = @TypeOf(scenePos)._is_QPointF;
        qtc.KTwoFingerTap_SetScenePos(@ptrCast(self.ptr), @ptrCast(scenePos.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktwofingertap.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktwofingertap.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn GestureType(self: KTwoFingerTap) i32 {
        return qtc.QGesture_GestureType(@ptrCast(self.ptr));
    }

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
    pub fn State(self: KTwoFingerTap) i32 {
        return qtc.QGesture_State(@ptrCast(self.ptr));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn HotSpot(self: KTwoFingerTap) QPointF {
        return .{ .ptr = qtc.QGesture_HotSpot(@ptrCast(self.ptr)) };
    }

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
    pub fn SetHotSpot(self: KTwoFingerTap, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QPointF;
        qtc.QGesture_SetHotSpot(@ptrCast(self.ptr), @ptrCast(value.ptr));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn HasHotSpot(self: KTwoFingerTap) bool {
        return qtc.QGesture_HasHotSpot(@ptrCast(self.ptr));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn UnsetHotSpot(self: KTwoFingerTap) void {
        qtc.QGesture_UnsetHotSpot(@ptrCast(self.ptr));
    }

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
    pub fn SetGestureCancelPolicy(self: KTwoFingerTap, policy: i32) void {
        qtc.QGesture_SetGestureCancelPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

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
    pub fn GestureCancelPolicy(self: KTwoFingerTap) i32 {
        return qtc.QGesture_GestureCancelPolicy(@ptrCast(self.ptr));
    }

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
    pub fn ObjectName(self: KTwoFingerTap, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktwofingertap.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: KTwoFingerTap, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn IsWidgetType(self: KTwoFingerTap) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn IsWindowType(self: KTwoFingerTap) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn IsQuickItemType(self: KTwoFingerTap) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn SignalsBlocked(self: KTwoFingerTap) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: KTwoFingerTap, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn Thread(self: KTwoFingerTap) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTwoFingerTap, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: KTwoFingerTap, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: KTwoFingerTap, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: KTwoFingerTap, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: KTwoFingerTap, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: KTwoFingerTap, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktwofingertap.Children: Memory allocation failed");
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KTwoFingerTap, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

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
    pub fn InstallEventFilter(self: KTwoFingerTap, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: KTwoFingerTap, obj: anytype) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTwoFingerTap, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn Disconnect3(self: KTwoFingerTap) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: KTwoFingerTap, receiver: anytype) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn DumpObjectTree(self: KTwoFingerTap) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn DumpObjectInfo(self: KTwoFingerTap) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: KTwoFingerTap, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTwoFingerTap, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: KTwoFingerTap, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktwofingertap.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktwofingertap.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn BindingStorage(self: KTwoFingerTap) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn BindingStorage2(self: KTwoFingerTap) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn Destroyed(self: KTwoFingerTap) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn Parent(self: KTwoFingerTap) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: KTwoFingerTap, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn DeleteLater(self: KTwoFingerTap) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: KTwoFingerTap, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: KTwoFingerTap, time: i64, timerType: i32) i32 {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTwoFingerTap, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTwoFingerTap, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: KTwoFingerTap, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTwoFingerTap, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTwoFingerTap, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTwoFingerTap, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QObject) callconv(.c) void) void {
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTwoFingerTap, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerTap_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KTwoFingerTap, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerTap_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QEvent) callconv(.c) bool) void {
        qtc.KTwoFingerTap_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTwoFingerTap, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerTap_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KTwoFingerTap, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerTap_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTwoFingerTap_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KTwoFingerTap, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTwoFingerTap_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KTwoFingerTap, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KTwoFingerTap_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QTimerEvent) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KTwoFingerTap, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTwoFingerTap_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KTwoFingerTap, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTwoFingerTap_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QChildEvent) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KTwoFingerTap, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTwoFingerTap_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KTwoFingerTap, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTwoFingerTap_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QEvent) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: KTwoFingerTap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerTap_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KTwoFingerTap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerTap_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QMetaMethod) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: KTwoFingerTap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerTap_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KTwoFingerTap, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTwoFingerTap_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QMetaMethod) callconv(.c) void) void {
        qtc.KTwoFingerTap_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: KTwoFingerTap) QObject {
        return .{ .ptr = qtc.KTwoFingerTap_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn SuperSender(self: KTwoFingerTap) QObject {
        return .{ .ptr = qtc.KTwoFingerTap_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: KTwoFingerTap, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTwoFingerTap_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: KTwoFingerTap) i32 {
        return qtc.KTwoFingerTap_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    pub fn SuperSenderSignalIndex(self: KTwoFingerTap) i32 {
        return qtc.KTwoFingerTap_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: KTwoFingerTap, callback: *const fn () callconv(.c) i32) void {
        qtc.KTwoFingerTap_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: KTwoFingerTap, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerTap_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KTwoFingerTap, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerTap_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTwoFingerTap_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: KTwoFingerTap, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTwoFingerTap_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTwoFingerTap `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KTwoFingerTap, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTwoFingerTap_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, QMetaMethod) callconv(.c) bool) void {
        qtc.KTwoFingerTap_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: KTwoFingerTap, callback: *const fn (KTwoFingerTap, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertap.html#dtor.KTwoFingerTap)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTwoFingerTap `
    ///
    pub fn Delete(self: KTwoFingerTap) void {
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

    /// New constructs a new KTwoFingerTapRecognizer object.
    ///
    pub fn New() KTwoFingerTapRecognizer {
        return .{ .ptr = qtc.KTwoFingerTapRecognizer_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` target: QObject `
    ///
    pub fn Create(self: KTwoFingerTapRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerTapRecognizer_Create(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

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
    pub fn OnCreate(self: KTwoFingerTapRecognizer, callback: *const fn (KTwoFingerTapRecognizer, QObject) callconv(.c) QGesture) void {
        qtc.KTwoFingerTapRecognizer_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

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
    pub fn SuperCreate(self: KTwoFingerTapRecognizer, target: anytype) QGesture {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.KTwoFingerTapRecognizer_SuperCreate(@ptrCast(self.ptr), @ptrCast(target.ptr)) };
    }

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
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn Recognize(self: KTwoFingerTapRecognizer, gesture: anytype, watched: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(gesture)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerTapRecognizer_Recognize(@ptrCast(self.ptr), @ptrCast(gesture.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnRecognize(self: KTwoFingerTapRecognizer, callback: *const fn (KTwoFingerTapRecognizer, QGesture, QObject, QEvent) callconv(.c) i32) void {
        qtc.KTwoFingerTapRecognizer_OnRecognize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRecognize` instead
    ///
    pub const QBaseRecognize = SuperRecognize;

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
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn SuperRecognize(self: KTwoFingerTapRecognizer, gesture: anytype, watched: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(gesture)._is_QGesture;
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTwoFingerTapRecognizer_SuperRecognize(@ptrCast(self.ptr), @ptrCast(gesture.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#tapRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    pub fn TapRadius(self: KTwoFingerTapRecognizer) i32 {
        return qtc.KTwoFingerTapRecognizer_TapRadius(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#setTapRadius)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` i: i32 `
    ///
    pub fn SetTapRadius(self: KTwoFingerTapRecognizer, i: i32) void {
        qtc.KTwoFingerTapRecognizer_SetTapRadius(@ptrCast(self.ptr), @bitCast(i));
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
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` param1: QGestureRecognizer `
    ///
    pub fn OperatorAssign(self: KTwoFingerTapRecognizer, param1: anytype) void {
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
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` state: QGesture `
    ///
    pub fn Reset(self: KTwoFingerTapRecognizer, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QGesture;
        qtc.KTwoFingerTapRecognizer_Reset(@ptrCast(self.ptr), @ptrCast(state.ptr));
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
    /// ` self: KTwoFingerTapRecognizer `
    ///
    /// ` state: QGesture `
    ///
    pub fn SuperReset(self: KTwoFingerTapRecognizer, state: anytype) void {
        comptime _ = @TypeOf(state)._is_QGesture;
        qtc.KTwoFingerTapRecognizer_SuperReset(@ptrCast(self.ptr), @ptrCast(state.ptr));
    }

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
    pub fn OnReset(self: KTwoFingerTapRecognizer, callback: *const fn (KTwoFingerTapRecognizer, QGesture) callconv(.c) void) void {
        qtc.KTwoFingerTapRecognizer_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#dtor.KTwoFingerTapRecognizer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTwoFingerTapRecognizer `
    ///
    pub fn Delete(self: KTwoFingerTapRecognizer) void {
        qtc.KTwoFingerTapRecognizer_Delete(@ptrCast(self.ptr));
    }
};
