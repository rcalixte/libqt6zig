const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QPointF = @import("libqt6").QPointF;
const QRectF = @import("libqt6").QRectF;
const QScrollerProperties = @import("libqt6").QScrollerProperties;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qscroller_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html)
pub const QScroller = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QScroller,

    pub const _is_QScroller = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn MetaObject(self: QScroller) QMetaObject {
        return .{ .ptr = qtc.QScroller_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QScroller, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScroller_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QScroller, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QScroller_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#hasScroller)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QObject `
    ///
    pub fn HasScroller(target: anytype) bool {
        comptime _ = @TypeOf(target)._is_QObject;
        return qtc.QScroller_HasScroller(@ptrCast(target.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scroller)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QObject `
    ///
    pub fn Scroller(target: anytype) QScroller {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.QScroller_Scroller(@ptrCast(target.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scroller)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QObject `
    ///
    pub fn Scroller2(target: anytype) QScroller {
        comptime _ = @TypeOf(target)._is_QObject;
        return .{ .ptr = qtc.QScroller_Scroller2(@ptrCast(target.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QObject `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(target: anytype) i32 {
        comptime _ = @TypeOf(target)._is_QObject;
        return qtc.QScroller_GrabGesture(@ptrCast(target.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#grabbedGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QObject `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn GrabbedGesture(target: anytype) i32 {
        comptime _ = @TypeOf(target)._is_QObject;
        return qtc.QScroller_GrabbedGesture(@ptrCast(target.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QObject `
    ///
    pub fn UngrabGesture(target: anytype) void {
        comptime _ = @TypeOf(target)._is_QObject;
        qtc.QScroller_UngrabGesture(@ptrCast(target.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#activeScrollers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ActiveScrollers(allocator: std.mem.Allocator) []QScroller {
        const _arr: qtc.libqt_list = qtc.QScroller_ActiveScrollers();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QScroller, _arr.len) catch @panic("qscroller.ActiveScrollers: Memory allocation failed");
        const _data: [*]QtC.QScroller = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn Target(self: QScroller) QObject {
        return .{ .ptr = qtc.QScroller_Target(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#state)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ## Returns:
    ///
    /// ` qscroller_enums.State `
    ///
    pub fn State(self: QScroller) i32 {
        return qtc.QScroller_State(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#handleInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` input: qscroller_enums.Input `
    ///
    /// ` position: QPointF `
    ///
    pub fn HandleInput(self: QScroller, input: i32, position: anytype) bool {
        comptime _ = @TypeOf(position)._is_QPointF;
        return qtc.QScroller_HandleInput(@ptrCast(self.ptr), @bitCast(input), @ptrCast(position.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn Stop(self: QScroller) void {
        qtc.QScroller_Stop(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#velocity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn Velocity(self: QScroller) QPointF {
        return .{ .ptr = qtc.QScroller_Velocity(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#finalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn FinalPosition(self: QScroller) QPointF {
        return .{ .ptr = qtc.QScroller_FinalPosition(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#pixelPerMeter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn PixelPerMeter(self: QScroller) QPointF {
        return .{ .ptr = qtc.QScroller_PixelPerMeter(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollerProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn ScrollerProperties(self: QScroller) QScrollerProperties {
        return .{ .ptr = qtc.QScroller_ScrollerProperties(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` positions: []f64 `
    ///
    pub fn SetSnapPositionsX(self: QScroller, positions: []f64) void {
        const positions_list = qtc.libqt_list{
            .len = positions.len,
            .data = positions.ptr,
        };
        qtc.QScroller_SetSnapPositionsX(@ptrCast(self.ptr), positions_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` first: f64 `
    ///
    /// ` interval: f64 `
    ///
    pub fn SetSnapPositionsX2(self: QScroller, first: f64, interval: f64) void {
        qtc.QScroller_SetSnapPositionsX2(@ptrCast(self.ptr), @bitCast(first), @bitCast(interval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` positions: []f64 `
    ///
    pub fn SetSnapPositionsY(self: QScroller, positions: []f64) void {
        const positions_list = qtc.libqt_list{
            .len = positions.len,
            .data = positions.ptr,
        };
        qtc.QScroller_SetSnapPositionsY(@ptrCast(self.ptr), positions_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` first: f64 `
    ///
    /// ` interval: f64 `
    ///
    pub fn SetSnapPositionsY2(self: QScroller, first: f64, interval: f64) void {
        qtc.QScroller_SetSnapPositionsY2(@ptrCast(self.ptr), @bitCast(first), @bitCast(interval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setScrollerProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` prop: QScrollerProperties `
    ///
    pub fn SetScrollerProperties(self: QScroller, prop: anytype) void {
        comptime _ = @TypeOf(prop)._is_QScrollerProperties;
        qtc.QScroller_SetScrollerProperties(@ptrCast(self.ptr), @ptrCast(prop.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` pos: QPointF `
    ///
    pub fn ScrollTo(self: QScroller, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QScroller_ScrollTo(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` pos: QPointF `
    ///
    /// ` scrollTime: i32 `
    ///
    pub fn ScrollTo2(self: QScroller, pos: anytype, scrollTime: i32) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QScroller_ScrollTo2(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(scrollTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: f64 `
    ///
    /// ` ymargin: f64 `
    ///
    pub fn EnsureVisible(self: QScroller, rect: anytype, xmargin: f64, ymargin: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QScroller_EnsureVisible(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` rect: QRectF `
    ///
    /// ` xmargin: f64 `
    ///
    /// ` ymargin: f64 `
    ///
    /// ` scrollTime: i32 `
    ///
    pub fn EnsureVisible2(self: QScroller, rect: anytype, xmargin: f64, ymargin: f64, scrollTime: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QScroller_EnsureVisible2(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin), @bitCast(scrollTime));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#resendPrepareEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn ResendPrepareEvent(self: QScroller) void {
        qtc.QScroller_ResendPrepareEvent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` newstate: qscroller_enums.State `
    ///
    pub fn StateChanged(self: QScroller, newstate: i32) void {
        qtc.QScroller_StateChanged(@ptrCast(self.ptr), @bitCast(newstate));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller, newstate: qscroller_enums.State) callconv(.c) void `
    ///
    pub fn OnStateChanged(self: QScroller, callback: *const fn (QScroller, i32) callconv(.c) void) void {
        qtc.QScroller_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` param1: QScrollerProperties `
    ///
    pub fn ScrollerPropertiesChanged(self: QScroller, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QScrollerProperties;
        qtc.QScroller_ScrollerPropertiesChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller, param1: QScrollerProperties) callconv(.c) void `
    ///
    pub fn OnScrollerPropertiesChanged(self: QScroller, callback: *const fn (QScroller, QScrollerProperties) callconv(.c) void) void {
        qtc.QScroller_Connect_ScrollerPropertiesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` target: QObject `
    ///
    /// ` gestureType: qscroller_enums.ScrollerGestureType `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture2(target: anytype, gestureType: i32) i32 {
        comptime _ = @TypeOf(target)._is_QObject;
        return qtc.QScroller_GrabGesture2(@ptrCast(target.ptr), @bitCast(gestureType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#handleInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` input: qscroller_enums.Input `
    ///
    /// ` position: QPointF `
    ///
    /// ` timestamp: i64 `
    ///
    pub fn HandleInput3(self: QScroller, input: i32, position: anytype, timestamp: i64) bool {
        comptime _ = @TypeOf(position)._is_QPointF;
        return qtc.QScroller_HandleInput3(@ptrCast(self.ptr), @bitCast(input), @ptrCast(position.ptr), @bitCast(timestamp));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QScroller, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QScroller, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QScroller, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QScroller, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn IsWidgetType(self: QScroller) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn IsWindowType(self: QScroller) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn IsQuickItemType(self: QScroller) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn SignalsBlocked(self: QScroller) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QScroller, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn Thread(self: QScroller) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QScroller, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QScroller, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QScroller, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QScroller, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QScroller, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QScroller, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qscroller.Children: Memory allocation failed");
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
    /// ` self: QScroller `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QScroller, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QScroller, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QScroller, obj: anytype) void {
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
    /// ` self: QScroller `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QScroller, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QScroller `
    ///
    pub fn Disconnect3(self: QScroller) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QScroller, receiver: anytype) bool {
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
    /// ` self: QScroller `
    ///
    pub fn DumpObjectTree(self: QScroller) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn DumpObjectInfo(self: QScroller) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QScroller, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QScroller `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QScroller, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QScroller, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qscroller.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qscroller.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QScroller `
    ///
    pub fn BindingStorage(self: QScroller) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn BindingStorage2(self: QScroller) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn Destroyed(self: QScroller) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QScroller, callback: *const fn (QScroller) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn Parent(self: QScroller) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QScroller, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn DeleteLater(self: QScroller) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QScroller, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QScroller, time: i64, timerType: i32) i32 {
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
    /// ` self: QScroller `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QScroller, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QScroller `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QScroller, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QScroller, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QScroller `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QScroller, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QScroller `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QScroller, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QScroller `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QScroller, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QScroller, callback: *const fn (QScroller, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QScroller, callback: *const fn (QScroller, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#public-types)
pub const enums = struct {
    pub const State = enum(i32) {
        pub const Inactive: i32 = 0;
        pub const Pressed: i32 = 1;
        pub const Dragging: i32 = 2;
        pub const Scrolling: i32 = 3;
    };

    pub const ScrollerGestureType = enum(i32) {
        pub const TouchGesture: i32 = 0;
        pub const LeftMouseButtonGesture: i32 = 1;
        pub const RightMouseButtonGesture: i32 = 2;
        pub const MiddleMouseButtonGesture: i32 = 3;
    };

    pub const Input = enum(i32) {
        pub const InputPress: i32 = 1;
        pub const InputMove: i32 = 2;
        pub const InputRelease: i32 = 3;
    };
};
