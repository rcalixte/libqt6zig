const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qscroller_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qscroller.html
pub const qscroller = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QScroller_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QScroller, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QScroller_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QScroller, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QScroller_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QScroller_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#hasScroller)
    ///
    /// ``` target: QtC.QObject ```
    pub fn HasScroller(target: ?*anyopaque) bool {
        return qtc.QScroller_HasScroller(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scroller)
    ///
    /// ``` target: QtC.QObject ```
    pub fn Scroller(target: ?*anyopaque) QtC.QScroller {
        return qtc.QScroller_Scroller(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scroller)
    ///
    /// ``` target: QtC.QObject ```
    pub fn Scroller2(target: ?*anyopaque) QtC.QScroller {
        return qtc.QScroller_Scroller2(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
    ///
    /// ``` target: QtC.QObject ```
    ///
    /// Returns: ``` qnamespace_enums.GestureType ```
    pub fn GrabGesture(target: ?*anyopaque) i64 {
        return qtc.QScroller_GrabGesture(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabbedGesture)
    ///
    /// ``` target: QtC.QObject ```
    ///
    /// Returns: ``` qnamespace_enums.GestureType ```
    pub fn GrabbedGesture(target: ?*anyopaque) i64 {
        return qtc.QScroller_GrabbedGesture(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ungrabGesture)
    ///
    /// ``` target: QtC.QObject ```
    pub fn UngrabGesture(target: ?*anyopaque) void {
        qtc.QScroller_UngrabGesture(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#activeScrollers)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ActiveScrollers(allocator: std.mem.Allocator) []QtC.QScroller {
        const _arr: qtc.libqt_list = qtc.QScroller_ActiveScrollers();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QScroller, _arr.len) catch @panic("qscroller.ActiveScrollers: Memory allocation failed");
        const _data: [*]QtC.QScroller = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#target)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn Target(self: ?*anyopaque) QtC.QObject {
        return qtc.QScroller_Target(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#state)
    ///
    /// ``` self: QtC.QScroller ```
    ///
    /// Returns: ``` qscroller_enums.State ```
    pub fn State(self: ?*anyopaque) i64 {
        return qtc.QScroller_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#handleInput)
    ///
    /// ``` self: QtC.QScroller, input: qscroller_enums.Input, position: QtC.QPointF ```
    pub fn HandleInput(self: ?*anyopaque, input: i64, position: ?*anyopaque) bool {
        return qtc.QScroller_HandleInput(@ptrCast(self), @intCast(input), @ptrCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stop)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn Stop(self: ?*anyopaque) void {
        qtc.QScroller_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#velocity)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn Velocity(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScroller_Velocity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#finalPosition)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn FinalPosition(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScroller_FinalPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#pixelPerMeter)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn PixelPerMeter(self: ?*anyopaque) QtC.QPointF {
        return qtc.QScroller_PixelPerMeter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerProperties)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn ScrollerProperties(self: ?*anyopaque) QtC.QScrollerProperties {
        return qtc.QScroller_ScrollerProperties(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
    ///
    /// ``` self: QtC.QScroller, positions: []f64 ```
    pub fn SetSnapPositionsX(self: ?*anyopaque, positions: []f64) void {
        const positions_list = qtc.libqt_list{
            .len = positions.len,
            .data = positions.ptr,
        };
        qtc.QScroller_SetSnapPositionsX(@ptrCast(self), positions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
    ///
    /// ``` self: QtC.QScroller, first: f64, interval: f64 ```
    pub fn SetSnapPositionsX2(self: ?*anyopaque, first: f64, interval: f64) void {
        qtc.QScroller_SetSnapPositionsX2(@ptrCast(self), @floatCast(first), @floatCast(interval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
    ///
    /// ``` self: QtC.QScroller, positions: []f64 ```
    pub fn SetSnapPositionsY(self: ?*anyopaque, positions: []f64) void {
        const positions_list = qtc.libqt_list{
            .len = positions.len,
            .data = positions.ptr,
        };
        qtc.QScroller_SetSnapPositionsY(@ptrCast(self), positions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
    ///
    /// ``` self: QtC.QScroller, first: f64, interval: f64 ```
    pub fn SetSnapPositionsY2(self: ?*anyopaque, first: f64, interval: f64) void {
        qtc.QScroller_SetSnapPositionsY2(@ptrCast(self), @floatCast(first), @floatCast(interval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setScrollerProperties)
    ///
    /// ``` self: QtC.QScroller, prop: QtC.QScrollerProperties ```
    pub fn SetScrollerProperties(self: ?*anyopaque, prop: ?*anyopaque) void {
        qtc.QScroller_SetScrollerProperties(@ptrCast(self), @ptrCast(prop));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
    ///
    /// ``` self: QtC.QScroller, pos: QtC.QPointF ```
    pub fn ScrollTo(self: ?*anyopaque, pos: ?*anyopaque) void {
        qtc.QScroller_ScrollTo(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
    ///
    /// ``` self: QtC.QScroller, pos: QtC.QPointF, scrollTime: i32 ```
    pub fn ScrollTo2(self: ?*anyopaque, pos: ?*anyopaque, scrollTime: i32) void {
        qtc.QScroller_ScrollTo2(@ptrCast(self), @ptrCast(pos), @intCast(scrollTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
    ///
    /// ``` self: QtC.QScroller, rect: QtC.QRectF, xmargin: f64, ymargin: f64 ```
    pub fn EnsureVisible(self: ?*anyopaque, rect: ?*anyopaque, xmargin: f64, ymargin: f64) void {
        qtc.QScroller_EnsureVisible(@ptrCast(self), @ptrCast(rect), @floatCast(xmargin), @floatCast(ymargin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
    ///
    /// ``` self: QtC.QScroller, rect: QtC.QRectF, xmargin: f64, ymargin: f64, scrollTime: i32 ```
    pub fn EnsureVisible2(self: ?*anyopaque, rect: ?*anyopaque, xmargin: f64, ymargin: f64, scrollTime: i32) void {
        qtc.QScroller_EnsureVisible2(@ptrCast(self), @ptrCast(rect), @floatCast(xmargin), @floatCast(ymargin), @intCast(scrollTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#resendPrepareEvent)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn ResendPrepareEvent(self: ?*anyopaque) void {
        qtc.QScroller_ResendPrepareEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
    ///
    /// ``` self: QtC.QScroller, newstate: qscroller_enums.State ```
    pub fn StateChanged(self: ?*anyopaque, newstate: i64) void {
        qtc.QScroller_StateChanged(@ptrCast(self), @intCast(newstate));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
    ///
    /// ``` self: QtC.QScroller, slot: fn (self: QtC.QScroller, newstate: qscroller_enums.State) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QScroller_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
    ///
    /// ``` self: QtC.QScroller, param1: QtC.QScrollerProperties ```
    pub fn ScrollerPropertiesChanged(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScroller_ScrollerPropertiesChanged(@ptrCast(self), @ptrCast(param1));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
    ///
    /// ``` self: QtC.QScroller, slot: fn (self: QtC.QScroller, param1: QtC.QScrollerProperties) callconv(.c) void ```
    pub fn OnScrollerPropertiesChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScroller_Connect_ScrollerPropertiesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QScroller_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QScroller_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
    ///
    /// ``` target: QtC.QObject, gestureType: qscroller_enums.ScrollerGestureType ```
    ///
    /// Returns: ``` qnamespace_enums.GestureType ```
    pub fn GrabGesture2(target: ?*anyopaque, gestureType: i64) i64 {
        return qtc.QScroller_GrabGesture2(@ptrCast(target), @intCast(gestureType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#handleInput)
    ///
    /// ``` self: QtC.QScroller, input: qscroller_enums.Input, position: QtC.QPointF, timestamp: i64 ```
    pub fn HandleInput3(self: ?*anyopaque, input: i64, position: ?*anyopaque, timestamp: i64) bool {
        return qtc.QScroller_HandleInput3(@ptrCast(self), @intCast(input), @ptrCast(position), @intCast(timestamp));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QScroller, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QScroller, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QScroller, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qscroller.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QScroller, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QScroller, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QScroller, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QScroller, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QScroller, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QScroller, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i64) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QScroller, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qscroller.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QScroller, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QScroller, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QScroller, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QScroller, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QScroller, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QScroller, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QScroller, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
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
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QScroller, slot: fn (self: QtC.QScroller) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QScroller, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QScroller ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QScroller, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QScroller, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i64) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i64) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QScroller, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QScroller, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QScroller, slot: fn (self: QtC.QScroller, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QScroller, slot: fn (self: QtC.QScroller, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }
};

/// https://doc.qt.io/qt-6/qscroller.html#types
pub const enums = struct {
    pub const State = enum {
        pub const Inactive: i32 = 0;
        pub const Pressed: i32 = 1;
        pub const Dragging: i32 = 2;
        pub const Scrolling: i32 = 3;
    };

    pub const ScrollerGestureType = enum {
        pub const TouchGesture: i32 = 0;
        pub const LeftMouseButtonGesture: i32 = 1;
        pub const RightMouseButtonGesture: i32 = 2;
        pub const MiddleMouseButtonGesture: i32 = 3;
    };

    pub const Input = enum {
        pub const InputPress: i32 = 1;
        pub const InputMove: i32 = 2;
        pub const InputRelease: i32 = 3;
    };
};
