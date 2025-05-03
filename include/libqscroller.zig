const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qscroller_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qscroller.html
pub const qscroller = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QScroller_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QScroller, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QScroller_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QScroller, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QScroller_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QScroller_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#hasScroller)
    ///
    /// ``` target: ?*C.QObject ```
    pub fn HasScroller(target: ?*anyopaque) bool {
        return C.QScroller_HasScroller(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scroller)
    ///
    /// ``` target: ?*C.QObject ```
    pub fn Scroller(target: ?*anyopaque) ?*C.QScroller {
        return C.QScroller_Scroller(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scroller)
    ///
    /// ``` target: ?*C.QObject ```
    pub fn ScrollerWithTarget(target: ?*anyopaque) ?*C.QScroller {
        return C.QScroller_ScrollerWithTarget(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
    ///
    /// ``` target: ?*C.QObject ```
    pub fn GrabGesture(target: ?*anyopaque) i64 {
        return C.QScroller_GrabGesture(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabbedGesture)
    ///
    /// ``` target: ?*C.QObject ```
    pub fn GrabbedGesture(target: ?*anyopaque) i64 {
        return C.QScroller_GrabbedGesture(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ungrabGesture)
    ///
    /// ``` target: ?*C.QObject ```
    pub fn UngrabGesture(target: ?*anyopaque) void {
        C.QScroller_UngrabGesture(@ptrCast(target));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#activeScrollers)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn ActiveScrollers(allocator: std.mem.Allocator) []?*C.QScroller {
        const _arr: C.struct_libqt_list = C.QScroller_ActiveScrollers();
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QScroller, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QScroller = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#target)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn Target(self: ?*anyopaque) ?*C.QObject {
        return C.QScroller_Target(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#state)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn State(self: ?*anyopaque) i64 {
        return C.QScroller_State(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#handleInput)
    ///
    /// ``` self: ?*C.QScroller, input: qscroller_enums.Input, position: ?*C.QPointF ```
    pub fn HandleInput(self: ?*anyopaque, input: i64, position: ?*anyopaque) bool {
        return C.QScroller_HandleInput(@ptrCast(self), @intCast(input), @ptrCast(position));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stop)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn Stop(self: ?*anyopaque) void {
        C.QScroller_Stop(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#velocity)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn Velocity(self: ?*anyopaque) ?*C.QPointF {
        return C.QScroller_Velocity(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#finalPosition)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn FinalPosition(self: ?*anyopaque) ?*C.QPointF {
        return C.QScroller_FinalPosition(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#pixelPerMeter)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn PixelPerMeter(self: ?*anyopaque) ?*C.QPointF {
        return C.QScroller_PixelPerMeter(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerProperties)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn ScrollerProperties(self: ?*anyopaque) ?*C.QScrollerProperties {
        return C.QScroller_ScrollerProperties(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
    ///
    /// ``` self: ?*C.QScroller, positions: []f64 ```
    pub fn SetSnapPositionsX(self: ?*anyopaque, positions: []f64) void {
        const positions_list = C.struct_libqt_list{
            .len = positions.len,
            .data = positions.ptr,
        };
        C.QScroller_SetSnapPositionsX(@ptrCast(self), positions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsX)
    ///
    /// ``` self: ?*C.QScroller, first: f64, interval: f64 ```
    pub fn SetSnapPositionsX2(self: ?*anyopaque, first: f64, interval: f64) void {
        C.QScroller_SetSnapPositionsX2(@ptrCast(self), @floatCast(first), @floatCast(interval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
    ///
    /// ``` self: ?*C.QScroller, positions: []f64 ```
    pub fn SetSnapPositionsY(self: ?*anyopaque, positions: []f64) void {
        const positions_list = C.struct_libqt_list{
            .len = positions.len,
            .data = positions.ptr,
        };
        C.QScroller_SetSnapPositionsY(@ptrCast(self), positions_list);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setSnapPositionsY)
    ///
    /// ``` self: ?*C.QScroller, first: f64, interval: f64 ```
    pub fn SetSnapPositionsY2(self: ?*anyopaque, first: f64, interval: f64) void {
        C.QScroller_SetSnapPositionsY2(@ptrCast(self), @floatCast(first), @floatCast(interval));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#setScrollerProperties)
    ///
    /// ``` self: ?*C.QScroller, prop: ?*C.QScrollerProperties ```
    pub fn SetScrollerProperties(self: ?*anyopaque, prop: ?*anyopaque) void {
        C.QScroller_SetScrollerProperties(@ptrCast(self), @ptrCast(prop));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
    ///
    /// ``` self: ?*C.QScroller, pos: ?*C.QPointF ```
    pub fn ScrollTo(self: ?*anyopaque, pos: ?*anyopaque) void {
        C.QScroller_ScrollTo(@ptrCast(self), @ptrCast(pos));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollTo)
    ///
    /// ``` self: ?*C.QScroller, pos: ?*C.QPointF, scrollTime: i32 ```
    pub fn ScrollTo2(self: ?*anyopaque, pos: ?*anyopaque, scrollTime: i32) void {
        C.QScroller_ScrollTo2(@ptrCast(self), @ptrCast(pos), @intCast(scrollTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
    ///
    /// ``` self: ?*C.QScroller, rect: ?*C.QRectF, xmargin: f64, ymargin: f64 ```
    pub fn EnsureVisible(self: ?*anyopaque, rect: ?*anyopaque, xmargin: f64, ymargin: f64) void {
        C.QScroller_EnsureVisible(@ptrCast(self), @ptrCast(rect), @floatCast(xmargin), @floatCast(ymargin));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#ensureVisible)
    ///
    /// ``` self: ?*C.QScroller, rect: ?*C.QRectF, xmargin: f64, ymargin: f64, scrollTime: i32 ```
    pub fn EnsureVisible2(self: ?*anyopaque, rect: ?*anyopaque, xmargin: f64, ymargin: f64, scrollTime: i32) void {
        C.QScroller_EnsureVisible2(@ptrCast(self), @ptrCast(rect), @floatCast(xmargin), @floatCast(ymargin), @intCast(scrollTime));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#resendPrepareEvent)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn ResendPrepareEvent(self: ?*anyopaque) void {
        C.QScroller_ResendPrepareEvent(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#stateChanged)
    ///
    /// ``` self: ?*C.QScroller, newstate: qscroller_enums.State ```
    pub fn StateChanged(self: ?*anyopaque, newstate: i64) void {
        C.QScroller_StateChanged(@ptrCast(self), @intCast(newstate));
    }

    /// ``` self: ?*C.QScroller, slot: fn (?*C.QScroller, qscroller_enums.State) callconv(.c) void ```
    pub fn OnStateChanged(self: ?*anyopaque, slot: fn (?*anyopaque, i64) callconv(.c) void) void {
        C.QScroller_Connect_StateChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#scrollerPropertiesChanged)
    ///
    /// ``` self: ?*C.QScroller, param1: ?*C.QScrollerProperties ```
    pub fn ScrollerPropertiesChanged(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QScroller_ScrollerPropertiesChanged(@ptrCast(self), @ptrCast(param1));
    }

    /// ``` self: ?*C.QScroller, slot: fn (?*C.QScroller, ?*C.QScrollerProperties) callconv(.c) void ```
    pub fn OnScrollerPropertiesChanged(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QScroller_Connect_ScrollerPropertiesChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QScroller_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QScroller_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#grabGesture)
    ///
    /// ``` target: ?*C.QObject, gestureType: qscroller_enums.ScrollerGestureType ```
    pub fn GrabGesture2(target: ?*anyopaque, gestureType: i64) i64 {
        return C.QScroller_GrabGesture2(@ptrCast(target), @intCast(gestureType));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qscroller.html#handleInput)
    ///
    /// ``` self: ?*C.QScroller, input: qscroller_enums.Input, position: ?*C.QPointF, timestamp: i64 ```
    pub fn HandleInput3(self: ?*anyopaque, input: i64, position: ?*anyopaque, timestamp: i64) bool {
        return C.QScroller_HandleInput3(@ptrCast(self), @intCast(input), @ptrCast(position), @intCast(timestamp));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QScroller, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QScroller, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QScroller, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QScroller, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QScroller, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QScroller, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QScroller, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QScroller, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QScroller, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QScroller, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QScroller, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QScroller, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QScroller, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QScroller ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QScroller, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QScroller, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QScroller, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QScroller ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QScroller ```
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
    /// ``` self: ?*C.QScroller ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QScroller, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QScroller ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QScroller, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QScroller, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QScroller, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
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
