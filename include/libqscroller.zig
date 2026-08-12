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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn metaObject(self: QScroller) QMetaObject {
        return .{ .ptr = qtc.QScroller_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QScroller, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScroller_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QScroller, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QScroller_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScroller.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasScroller` instead
    ///
    pub const HasScroller = hasScroller;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#hasScroller)
    ///
    /// ## Parameter(s):
    ///
    /// ` _target: QObject `
    ///
    pub fn hasScroller(_target: anytype) bool {
        comptime _ = @TypeOf(_target)._is_QObject;
        return qtc.QScroller_HasScroller(@ptrCast(_target.ptr));
    }

    /// ### DEPRECATED: Use `scroller` instead
    ///
    pub const Scroller = scroller;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scroller)
    ///
    /// ## Parameter(s):
    ///
    /// ` _target: QObject `
    ///
    pub fn scroller(_target: anytype) QScroller {
        comptime _ = @TypeOf(_target)._is_QObject;
        return .{ .ptr = qtc.QScroller_Scroller(@ptrCast(_target.ptr)) };
    }

    /// ### DEPRECATED: Use `scroller2` instead
    ///
    pub const Scroller2 = scroller2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scroller)
    ///
    /// ## Parameter(s):
    ///
    /// ` _target: QObject `
    ///
    pub fn scroller2(_target: anytype) QScroller {
        comptime _ = @TypeOf(_target)._is_QObject;
        return .{ .ptr = qtc.QScroller_Scroller2(@ptrCast(_target.ptr)) };
    }

    /// ### DEPRECATED: Use `grabGesture` instead
    ///
    pub const GrabGesture = grabGesture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` _target: QObject `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(_target: anytype) i32 {
        comptime _ = @TypeOf(_target)._is_QObject;
        return qtc.QScroller_GrabGesture(@ptrCast(_target.ptr));
    }

    /// ### DEPRECATED: Use `grabbedGesture` instead
    ///
    pub const GrabbedGesture = grabbedGesture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#grabbedGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` _target: QObject `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn grabbedGesture(_target: anytype) i32 {
        comptime _ = @TypeOf(_target)._is_QObject;
        return qtc.QScroller_GrabbedGesture(@ptrCast(_target.ptr));
    }

    /// ### DEPRECATED: Use `ungrabGesture` instead
    ///
    pub const UngrabGesture = ungrabGesture;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` _target: QObject `
    ///
    pub fn ungrabGesture(_target: anytype) void {
        comptime _ = @TypeOf(_target)._is_QObject;
        qtc.QScroller_UngrabGesture(@ptrCast(_target.ptr));
    }

    /// ### DEPRECATED: Use `activeScrollers` instead
    ///
    pub const ActiveScrollers = activeScrollers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#activeScrollers)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn activeScrollers(allocator: std.mem.Allocator) []QScroller {
        const _arr: qtc.libqt_list = qtc.QScroller_ActiveScrollers();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QScroller, _arr.len) catch @panic("QScroller.activeScrollers: Memory allocation failed");
        const _data_val: [*]QtC.QScroller = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `target` instead
    ///
    pub const Target = target;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#target)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn target(self: QScroller) QObject {
        return .{ .ptr = qtc.QScroller_Target(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

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
    pub fn state(self: QScroller) i32 {
        return qtc.QScroller_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `handleInput` instead
    ///
    pub const HandleInput = handleInput;

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
    pub fn handleInput(self: QScroller, input: i32, position: anytype) bool {
        comptime _ = @TypeOf(position)._is_QPointF;
        return qtc.QScroller_HandleInput(@ptrCast(self.ptr), @bitCast(input), @ptrCast(position.ptr));
    }

    /// ### DEPRECATED: Use `stop` instead
    ///
    pub const Stop = stop;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#stop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn stop(self: QScroller) void {
        qtc.QScroller_Stop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `velocity` instead
    ///
    pub const Velocity = velocity;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#velocity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn velocity(self: QScroller) QPointF {
        return .{ .ptr = qtc.QScroller_Velocity(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `finalPosition` instead
    ///
    pub const FinalPosition = finalPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#finalPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn finalPosition(self: QScroller) QPointF {
        return .{ .ptr = qtc.QScroller_FinalPosition(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `pixelPerMeter` instead
    ///
    pub const PixelPerMeter = pixelPerMeter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#pixelPerMeter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn pixelPerMeter(self: QScroller) QPointF {
        return .{ .ptr = qtc.QScroller_PixelPerMeter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `scrollerProperties` instead
    ///
    pub const ScrollerProperties = scrollerProperties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollerProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn scrollerProperties(self: QScroller) QScrollerProperties {
        return .{ .ptr = qtc.QScroller_ScrollerProperties(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSnapPositionsX` instead
    ///
    pub const SetSnapPositionsX = setSnapPositionsX;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` positions: []f64 `
    ///
    pub fn setSnapPositionsX(self: QScroller, positions: []f64) void {
        const positions_list = qtc.libqt_list{
            .len = positions.len,
            .data = positions.ptr,
        };
        qtc.QScroller_SetSnapPositionsX(@ptrCast(self.ptr), positions_list);
    }

    /// ### DEPRECATED: Use `setSnapPositionsX2` instead
    ///
    pub const SetSnapPositionsX2 = setSnapPositionsX2;

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
    pub fn setSnapPositionsX2(self: QScroller, first: f64, interval: f64) void {
        qtc.QScroller_SetSnapPositionsX2(@ptrCast(self.ptr), @bitCast(first), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `setSnapPositionsY` instead
    ///
    pub const SetSnapPositionsY = setSnapPositionsY;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` positions: []f64 `
    ///
    pub fn setSnapPositionsY(self: QScroller, positions: []f64) void {
        const positions_list = qtc.libqt_list{
            .len = positions.len,
            .data = positions.ptr,
        };
        qtc.QScroller_SetSnapPositionsY(@ptrCast(self.ptr), positions_list);
    }

    /// ### DEPRECATED: Use `setSnapPositionsY2` instead
    ///
    pub const SetSnapPositionsY2 = setSnapPositionsY2;

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
    pub fn setSnapPositionsY2(self: QScroller, first: f64, interval: f64) void {
        qtc.QScroller_SetSnapPositionsY2(@ptrCast(self.ptr), @bitCast(first), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `setScrollerProperties` instead
    ///
    pub const SetScrollerProperties = setScrollerProperties;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#setScrollerProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` prop: QScrollerProperties `
    ///
    pub fn setScrollerProperties(self: QScroller, prop: anytype) void {
        comptime _ = @TypeOf(prop)._is_QScrollerProperties;
        qtc.QScroller_SetScrollerProperties(@ptrCast(self.ptr), @ptrCast(prop.ptr));
    }

    /// ### DEPRECATED: Use `scrollTo` instead
    ///
    pub const ScrollTo = scrollTo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` pos: QPointF `
    ///
    pub fn scrollTo(self: QScroller, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QScroller_ScrollTo(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `scrollTo2` instead
    ///
    pub const ScrollTo2 = scrollTo2;

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
    pub fn scrollTo2(self: QScroller, pos: anytype, scrollTime: i32) void {
        comptime _ = @TypeOf(pos)._is_QPointF;
        qtc.QScroller_ScrollTo2(@ptrCast(self.ptr), @ptrCast(pos.ptr), @bitCast(scrollTime));
    }

    /// ### DEPRECATED: Use `ensureVisible` instead
    ///
    pub const EnsureVisible = ensureVisible;

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
    pub fn ensureVisible(self: QScroller, rect: anytype, xmargin: f64, ymargin: f64) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QScroller_EnsureVisible(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin));
    }

    /// ### DEPRECATED: Use `ensureVisible2` instead
    ///
    pub const EnsureVisible2 = ensureVisible2;

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
    pub fn ensureVisible2(self: QScroller, rect: anytype, xmargin: f64, ymargin: f64, scrollTime: i32) void {
        comptime _ = @TypeOf(rect)._is_QRectF;
        qtc.QScroller_EnsureVisible2(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(xmargin), @bitCast(ymargin), @bitCast(scrollTime));
    }

    /// ### DEPRECATED: Use `resendPrepareEvent` instead
    ///
    pub const ResendPrepareEvent = resendPrepareEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#resendPrepareEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    pub fn resendPrepareEvent(self: QScroller) void {
        qtc.QScroller_ResendPrepareEvent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stateChanged` instead
    ///
    pub const StateChanged = stateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` newstate: qscroller_enums.State `
    ///
    pub fn stateChanged(self: QScroller, newstate: i32) void {
        qtc.QScroller_StateChanged(@ptrCast(self.ptr), @bitCast(newstate));
    }

    /// ### DEPRECATED: Use `onStateChanged` instead
    ///
    pub const OnStateChanged = onStateChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller, newstate: qscroller_enums.State) callconv(.c) void `
    ///
    pub fn onStateChanged(self: QScroller, callback: *const fn (QScroller, i32) callconv(.c) void) void {
        qtc.QScroller_Connect_StateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollerPropertiesChanged` instead
    ///
    pub const ScrollerPropertiesChanged = scrollerPropertiesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` param1: QScrollerProperties `
    ///
    pub fn scrollerPropertiesChanged(self: QScroller, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QScrollerProperties;
        qtc.QScroller_ScrollerPropertiesChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onScrollerPropertiesChanged` instead
    ///
    pub const OnScrollerPropertiesChanged = onScrollerPropertiesChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller, param1: QScrollerProperties) callconv(.c) void `
    ///
    pub fn onScrollerPropertiesChanged(self: QScroller, callback: *const fn (QScroller, QScrollerProperties) callconv(.c) void) void {
        qtc.QScroller_Connect_ScrollerPropertiesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScroller.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScroller.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `grabGesture2` instead
    ///
    pub const GrabGesture2 = grabGesture2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` _target: QObject `
    ///
    /// ` gestureType: qscroller_enums.ScrollerGestureType `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.GestureType `
    ///
    pub fn grabGesture2(_target: anytype, gestureType: i32) i32 {
        comptime _ = @TypeOf(_target)._is_QObject;
        return qtc.QScroller_GrabGesture2(@ptrCast(_target.ptr), @bitCast(gestureType));
    }

    /// ### DEPRECATED: Use `handleInput3` instead
    ///
    pub const HandleInput3 = handleInput3;

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
    pub fn handleInput3(self: QScroller, input: i32, position: anytype, timestamp: i64) bool {
        comptime _ = @TypeOf(position)._is_QPointF;
        return qtc.QScroller_HandleInput3(@ptrCast(self.ptr), @bitCast(input), @ptrCast(position.ptr), @bitCast(timestamp));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QScroller `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QScroller, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QScroller, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QObject_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QScroller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QScroller, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QScroller.objectName: Memory allocation failed");
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
    /// ` self: QScroller `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QScroller, name: []const u8) void {
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
    /// ` self: QScroller `
    ///
    pub fn isWidgetType(self: QScroller) bool {
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
    /// ` self: QScroller `
    ///
    pub fn isWindowType(self: QScroller) bool {
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
    /// ` self: QScroller `
    ///
    pub fn isQuickItemType(self: QScroller) bool {
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
    /// ` self: QScroller `
    ///
    pub fn signalsBlocked(self: QScroller) bool {
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
    /// ` self: QScroller `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QScroller, b: bool) bool {
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
    /// ` self: QScroller `
    ///
    pub fn thread(self: QScroller) QThread {
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
    /// ` self: QScroller `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QScroller, _thread: anytype) bool {
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
    /// ` self: QScroller `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QScroller, interval: i32) i32 {
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
    /// ` self: QScroller `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QScroller, time: i64) i32 {
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
    /// ` self: QScroller `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QScroller, id: i32) void {
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
    /// ` self: QScroller `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QScroller, id: i32) void {
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
    /// ` self: QScroller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QScroller, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QScroller.children: Memory allocation failed");
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
    /// ` self: QScroller `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QScroller, _parent: anytype) void {
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
    /// ` self: QScroller `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QScroller, filterObj: anytype) void {
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
    /// ` self: QScroller `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QScroller, obj: anytype) void {
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
    /// ` self: QScroller `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QScroller, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QScroller `
    ///
    pub fn disconnect3(self: QScroller) bool {
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
    /// ` self: QScroller `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QScroller, receiver: anytype) bool {
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
    /// ` self: QScroller `
    ///
    pub fn dumpObjectTree(self: QScroller) void {
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
    /// ` self: QScroller `
    ///
    pub fn dumpObjectInfo(self: QScroller) void {
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
    /// ` self: QScroller `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QScroller, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QScroller `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QScroller, name: [:0]const u8) QVariant {
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
    /// ` self: QScroller `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QScroller, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QScroller.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QScroller.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QScroller `
    ///
    pub fn bindingStorage(self: QScroller) QBindingStorage {
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
    /// ` self: QScroller `
    ///
    pub fn bindingStorage2(self: QScroller) QBindingStorage {
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
    /// ` self: QScroller `
    ///
    pub fn destroyed(self: QScroller) void {
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
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QScroller, callback: *const fn (QScroller) callconv(.c) void) void {
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
    /// ` self: QScroller `
    ///
    pub fn parent(self: QScroller) QObject {
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
    /// ` self: QScroller `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QScroller, classname: [:0]const u8) bool {
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
    /// ` self: QScroller `
    ///
    pub fn deleteLater(self: QScroller) void {
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
    /// ` self: QScroller `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QScroller, interval: i32, timerType: i32) i32 {
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
    /// ` self: QScroller `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QScroller, time: i64, timerType: i32) i32 {
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
    /// ` self: QScroller `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QScroller, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QScroller `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QScroller, signal: [:0]const u8) bool {
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
    /// ` self: QScroller `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QScroller, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QScroller `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QScroller, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QScroller `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QScroller, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QScroller `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QScroller, param1: anytype) void {
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
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QScroller, callback: *const fn (QScroller, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QScroller `
    ///
    /// ` callback: *const fn (self: QScroller, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QScroller, callback: *const fn (QScroller, [*:0]const u8) callconv(.c) void) void {
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
