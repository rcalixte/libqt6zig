const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qgesture_enums = @import("../libqgesture.zig").enums;
const qgesturerecognizer_enums = @import("../libqgesturerecognizer.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html)
pub const ktwofingerswipe = struct {
    /// New constructs a new KTwoFingerSwipe object.
    ///
    pub fn New() QtC.KTwoFingerSwipe {
        return qtc.KTwoFingerSwipe_new();
    }

    /// New2 constructs a new KTwoFingerSwipe object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.KTwoFingerSwipe {
        return qtc.KTwoFingerSwipe_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTwoFingerSwipe_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KTwoFingerSwipe_OnMetaObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn QBaseMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KTwoFingerSwipe_QBaseMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerSwipe_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTwoFingerSwipe_OnMetacast(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn QBaseMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTwoFingerSwipe_QBaseMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerSwipe_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTwoFingerSwipe_OnMetacall(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTwoFingerSwipe_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn Pos(self: ?*anyopaque) QtC.QPointF {
        return qtc.KTwoFingerSwipe_Pos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` pos: QtC.QPointF `
    ///
    pub fn SetPos(self: ?*anyopaque, pos: QtC.QPointF) void {
        qtc.KTwoFingerSwipe_SetPos(@ptrCast(self), @ptrCast(pos));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#screenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn ScreenPos(self: ?*anyopaque) QtC.QPointF {
        return qtc.KTwoFingerSwipe_ScreenPos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setScreenPos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` screenPos: QtC.QPointF `
    ///
    pub fn SetScreenPos(self: ?*anyopaque, screenPos: QtC.QPointF) void {
        qtc.KTwoFingerSwipe_SetScreenPos(@ptrCast(self), @ptrCast(screenPos));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#scenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn ScenePos(self: ?*anyopaque) QtC.QPointF {
        return qtc.KTwoFingerSwipe_ScenePos(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setScenePos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` scenePos: QtC.QPointF `
    ///
    pub fn SetScenePos(self: ?*anyopaque, scenePos: QtC.QPointF) void {
        qtc.KTwoFingerSwipe_SetScenePos(@ptrCast(self), @ptrCast(scenePos));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#swipeAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn SwipeAngle(self: ?*anyopaque) f64 {
        return qtc.KTwoFingerSwipe_SwipeAngle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#setSwipeAngle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` swipeAngle: f64 `
    ///
    pub fn SetSwipeAngle(self: ?*anyopaque, swipeAngle: f64) void {
        qtc.KTwoFingerSwipe_SetSwipeAngle(@ptrCast(self), @floatCast(swipeAngle));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
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
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @intCast(n));
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
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn GestureType(self: ?*anyopaque) i32 {
        return qtc.QGesture_GestureType(@ptrCast(self));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureState `
    ///
    pub fn State(self: ?*anyopaque) i32 {
        return qtc.QGesture_State(@ptrCast(self));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn HotSpot(self: ?*anyopaque) QtC.QPointF {
        return qtc.QGesture_HotSpot(@ptrCast(self));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` value: QtC.QPointF `
    ///
    pub fn SetHotSpot(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QGesture_SetHotSpot(@ptrCast(self), @ptrCast(value));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn HasHotSpot(self: ?*anyopaque) bool {
        return qtc.QGesture_HasHotSpot(@ptrCast(self));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn UnsetHotSpot(self: ?*anyopaque) void {
        qtc.QGesture_UnsetHotSpot(@ptrCast(self));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` policy: qgesture_enums.GestureCancelPolicy `
    ///
    pub fn SetGestureCancelPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QGesture_SetGestureCancelPolicy(@ptrCast(self), @intCast(policy));
    }

    /// Inherited from QGesture
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ## Returns:
    ///
    /// ` qgesture_enums.GestureCancelPolicy `
    ///
    pub fn GestureCancelPolicy(self: ?*anyopaque) i32 {
        return qtc.QGesture_GestureCancelPolicy(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
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
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @intCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("ktwofingerswipe.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @intCast(time), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTwoFingerSwipe_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTwoFingerSwipe_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTwoFingerSwipe_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTwoFingerSwipe_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KTwoFingerSwipe_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTwoFingerSwipe_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnTimerEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnChildEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnCustomEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTwoFingerSwipe_OnDisconnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTwoFingerSwipe_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KTwoFingerSwipe_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KTwoFingerSwipe_OnSender(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTwoFingerSwipe_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KTwoFingerSwipe_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KTwoFingerSwipe_OnSenderSignalIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerSwipe_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn QBaseReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTwoFingerSwipe_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTwoFingerSwipe_OnReceivers(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTwoFingerSwipe_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KTwoFingerSwipe_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KTwoFingerSwipe_OnIsSignalConnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipe, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswipe.html#dtor.KTwoFingerSwipe)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTwoFingerSwipe `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTwoFingerSwipe_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html)
pub const ktwofingerswiperecognizer = struct {
    /// New constructs a new KTwoFingerSwipeRecognizer object.
    ///
    pub fn New() QtC.KTwoFingerSwipeRecognizer {
        return qtc.KTwoFingerSwipeRecognizer_new();
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` target: QtC.QObject `
    ///
    pub fn Create(self: ?*anyopaque, target: ?*anyopaque) QtC.QGesture {
        return qtc.KTwoFingerSwipeRecognizer_Create(@ptrCast(self), @ptrCast(target));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#create)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipeRecognizer, target: QtC.QObject) callconv(.c) QtC.QGesture `
    ///
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QGesture) void {
        qtc.KTwoFingerSwipeRecognizer_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#create)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` target: QtC.QObject `
    ///
    pub fn QBaseCreate(self: ?*anyopaque, target: ?*anyopaque) QtC.QGesture {
        return qtc.KTwoFingerSwipeRecognizer_QBaseCreate(@ptrCast(self), @ptrCast(target));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#recognize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` gesture: QtC.QGesture `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn Recognize(self: ?*anyopaque, gesture: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.KTwoFingerSwipeRecognizer_Recognize(@ptrCast(self), @ptrCast(gesture), @ptrCast(watched), @ptrCast(event));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#recognize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipeRecognizer, gesture: QtC.QGesture, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) i32 `
    ///
    pub fn OnRecognize(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KTwoFingerSwipeRecognizer_OnRecognize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#recognize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` gesture: QtC.QGesture `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qgesturerecognizer_enums.ResultFlag `
    ///
    pub fn QBaseRecognize(self: ?*anyopaque, gesture: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) i32 {
        return qtc.KTwoFingerSwipeRecognizer_QBaseRecognize(@ptrCast(self), @ptrCast(gesture), @ptrCast(watched), @ptrCast(event));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#maxSwipeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    pub fn MaxSwipeTime(self: ?*anyopaque) i32 {
        return qtc.KTwoFingerSwipeRecognizer_MaxSwipeTime(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#setMaxSwipeTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` i: i32 `
    ///
    pub fn SetMaxSwipeTime(self: ?*anyopaque, i: i32) void {
        qtc.KTwoFingerSwipeRecognizer_SetMaxSwipeTime(@ptrCast(self), @intCast(i));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#minSswipeDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    pub fn MinSswipeDistance(self: ?*anyopaque) i32 {
        return qtc.KTwoFingerSwipeRecognizer_MinSswipeDistance(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#setSwipeDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` i: i32 `
    ///
    pub fn SetSwipeDistance(self: ?*anyopaque, i: i32) void {
        qtc.KTwoFingerSwipeRecognizer_SetSwipeDistance(@ptrCast(self), @intCast(i));
    }

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
    ///
    /// ## Parameter(s):
    ///
    /// ` recognizer: QtC.QGestureRecognizer `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn RegisterRecognizer(recognizer: ?*anyopaque) i32 {
        return qtc.QGestureRecognizer_RegisterRecognizer(@ptrCast(recognizer));
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
        qtc.QGestureRecognizer_UnregisterRecognizer(@intCast(typeVal));
    }

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` param1: QtC.QGestureRecognizer `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QGestureRecognizer_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` state: QtC.QGesture `
    ///
    pub fn Reset(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.KTwoFingerSwipeRecognizer_Reset(@ptrCast(self), @ptrCast(state));
    }

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    /// ` state: QtC.QGesture `
    ///
    pub fn QBaseReset(self: ?*anyopaque, state: ?*anyopaque) void {
        qtc.KTwoFingerSwipeRecognizer_QBaseReset(@ptrCast(self), @ptrCast(state));
    }

    /// Inherited from QGestureRecognizer
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer`
    ///
    /// ` callback: *const fn (self: QtC.KTwoFingerSwipeRecognizer, state: QtC.QGesture) callconv(.c) void `
    ///
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KTwoFingerSwipeRecognizer_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktwofingerswiperecognizer.html#dtor.KTwoFingerSwipeRecognizer)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KTwoFingerSwipeRecognizer `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KTwoFingerSwipeRecognizer_Delete(@ptrCast(self));
    }
};
