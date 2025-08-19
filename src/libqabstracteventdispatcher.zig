const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstracteventdispatcher.html
pub const qabstracteventdispatcher = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAbstractEventDispatcher_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QAbstractEventDispatcher, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractEventDispatcher_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QAbstractEventDispatcher, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAbstractEventDispatcher_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QAbstractEventDispatcher_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    ///
    pub fn Instance() QtC.QAbstractEventDispatcher {
        return qtc.QAbstractEventDispatcher_Instance();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, flags: flag of qeventloop_enums.ProcessEventsFlag ```
    pub fn ProcessEvents(self: ?*anyopaque, flags: i64) bool {
        return qtc.QAbstractEventDispatcher_ProcessEvents(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, notifier: QtC.QSocketNotifier ```
    pub fn RegisterSocketNotifier(self: ?*anyopaque, notifier: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_RegisterSocketNotifier(@ptrCast(self), @ptrCast(notifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, notifier: QtC.QSocketNotifier ```
    pub fn UnregisterSocketNotifier(self: ?*anyopaque, notifier: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_UnregisterSocketNotifier(@ptrCast(self), @ptrCast(notifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, interval: i64, timerType: qnamespace_enums.TimerType, object: QtC.QObject ```
    pub fn RegisterTimer(self: ?*anyopaque, interval: i64, timerType: i32, object: ?*anyopaque) i32 {
        return qtc.QAbstractEventDispatcher_RegisterTimer(@ptrCast(self), @intCast(interval), @intCast(timerType), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, timerId: i32, interval: i64, timerType: qnamespace_enums.TimerType, object: QtC.QObject ```
    pub fn RegisterTimer2(self: ?*anyopaque, timerId: i32, interval: i64, timerType: i32, object: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_RegisterTimer2(@ptrCast(self), @intCast(timerId), @intCast(interval), @intCast(timerType), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, timerId: i32 ```
    pub fn UnregisterTimer(self: ?*anyopaque, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer(@ptrCast(self), @intCast(timerId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, object: QtC.QObject ```
    pub fn UnregisterTimers(self: ?*anyopaque, object: ?*anyopaque) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimers(@ptrCast(self), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registeredTimers)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, object: QtC.QObject, allocator: std.mem.Allocator ```
    pub fn RegisteredTimers(self: ?*anyopaque, object: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractEventDispatcher__TimerInfo {
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcher_RegisteredTimers(@ptrCast(self), @ptrCast(object));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractEventDispatcher__TimerInfo, _arr.len) catch @panic("qabstracteventdispatcher.RegisteredTimers: Memory allocation failed");
        const _data: [*]QtC.QAbstractEventDispatcher__TimerInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, timerId: i32 ```
    pub fn RemainingTime(self: ?*anyopaque, timerId: i32) i32 {
        return qtc.QAbstractEventDispatcher_RemainingTime(@ptrCast(self), @intCast(timerId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, timerId: qnamespace_enums.TimerId ```
    pub fn UnregisterTimer2(self: ?*anyopaque, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer2(@ptrCast(self), @intCast(timerId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#timersForObject)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, object: QtC.QObject, allocator: std.mem.Allocator ```
    pub fn TimersForObject(self: ?*anyopaque, object: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractEventDispatcher__TimerInfoV2 {
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcher_TimersForObject(@ptrCast(self), @ptrCast(object));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractEventDispatcher__TimerInfoV2, _arr.len) catch @panic("qabstracteventdispatcher.TimersForObject: Memory allocation failed");
        const _data: [*]QtC.QAbstractEventDispatcher__TimerInfoV2 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn WakeUp(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_WakeUp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn Interrupt(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_Interrupt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn StartingUp(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_StartingUp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn ClosingDown(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_ClosingDown(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn FilterNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractEventDispatcher_FilterNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn AboutToBlock(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_AboutToBlock(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, slot: fn (self: QtC.QAbstractEventDispatcher) callconv(.c) void ```
    pub fn OnAboutToBlock(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_AboutToBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn Awake(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_Awake(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, slot: fn (self: QtC.QAbstractEventDispatcher) callconv(.c) void ```
    pub fn OnAwake(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_Awake(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractEventDispatcher_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractEventDispatcher_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    /// ``` thread: QtC.QThread ```
    pub fn Instance1(thread: ?*anyopaque) QtC.QAbstractEventDispatcher {
        return qtc.QAbstractEventDispatcher_Instance1(@ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, name: []const u8 ```
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
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qabstracteventdispatcher.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, obj: QtC.QObject ```
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
    /// ``` self: QtC.QAbstractEventDispatcher, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qabstracteventdispatcher.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qabstracteventdispatcher.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, slot: fn (self: QtC.QAbstractEventDispatcher) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, slot: fn (self: QtC.QAbstractEventDispatcher, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QAbstractEventDispatcher, slot: fn (self: QtC.QAbstractEventDispatcher, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#dtor.QAbstractEventDispatcher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractEventDispatcher ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html
pub const qabstracteventdispatcherv2 = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QAbstractEventDispatcherV2_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QAbstractEventDispatcherV2, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractEventDispatcherV2_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QAbstractEventDispatcherV2, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QAbstractEventDispatcherV2_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QAbstractEventDispatcherV2_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#unregisterTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, timerId: qnamespace_enums.TimerId ```
    pub fn UnregisterTimer(self: ?*anyopaque, timerId: i32) bool {
        return qtc.QAbstractEventDispatcherV2_UnregisterTimer(@ptrCast(self), @intCast(timerId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#timersForObject)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, object: QtC.QObject, allocator: std.mem.Allocator ```
    pub fn TimersForObject(self: ?*anyopaque, object: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractEventDispatcher__TimerInfoV2 {
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcherV2_TimersForObject(@ptrCast(self), @ptrCast(object));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractEventDispatcher__TimerInfoV2, _arr.len) catch @panic("qabstracteventdispatcherv2.TimersForObject: Memory allocation failed");
        const _data: [*]QtC.QAbstractEventDispatcher__TimerInfoV2 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#processEventsWithDeadline)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, flags: flag of qeventloop_enums.ProcessEventsFlag, deadline: QtC.QDeadlineTimer ```
    pub fn ProcessEventsWithDeadline(self: ?*anyopaque, flags: i64, deadline: QtC.QDeadlineTimer) bool {
        return qtc.QAbstractEventDispatcherV2_ProcessEventsWithDeadline(@ptrCast(self), @intCast(flags), @ptrCast(deadline));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractEventDispatcherV2_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QAbstractEventDispatcherV2_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    ///
    pub fn Instance() QtC.QAbstractEventDispatcher {
        return qtc.QAbstractEventDispatcher_Instance();
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, flags: flag of qeventloop_enums.ProcessEventsFlag ```
    pub fn ProcessEvents(self: ?*anyopaque, flags: i64) bool {
        return qtc.QAbstractEventDispatcher_ProcessEvents(@ptrCast(self), @intCast(flags));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, notifier: QtC.QSocketNotifier ```
    pub fn RegisterSocketNotifier(self: ?*anyopaque, notifier: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_RegisterSocketNotifier(@ptrCast(self), @ptrCast(notifier));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, notifier: QtC.QSocketNotifier ```
    pub fn UnregisterSocketNotifier(self: ?*anyopaque, notifier: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_UnregisterSocketNotifier(@ptrCast(self), @ptrCast(notifier));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, interval: i64, timerType: qnamespace_enums.TimerType, object: QtC.QObject ```
    pub fn RegisterTimer(self: ?*anyopaque, interval: i64, timerType: i32, object: ?*anyopaque) i32 {
        return qtc.QAbstractEventDispatcher_RegisterTimer(@ptrCast(self), @intCast(interval), @intCast(timerType), @ptrCast(object));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, timerId: i32, interval: i64, timerType: qnamespace_enums.TimerType, object: QtC.QObject ```
    pub fn RegisterTimer2(self: ?*anyopaque, timerId: i32, interval: i64, timerType: i32, object: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_RegisterTimer2(@ptrCast(self), @intCast(timerId), @intCast(interval), @intCast(timerType), @ptrCast(object));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, object: QtC.QObject ```
    pub fn UnregisterTimers(self: ?*anyopaque, object: ?*anyopaque) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimers(@ptrCast(self), @ptrCast(object));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registeredTimers)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, object: QtC.QObject, allocator: std.mem.Allocator ```
    pub fn RegisteredTimers(self: ?*anyopaque, object: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QAbstractEventDispatcher__TimerInfo {
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcher_RegisteredTimers(@ptrCast(self), @ptrCast(object));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QAbstractEventDispatcher__TimerInfo, _arr.len) catch @panic("qabstracteventdispatcherv2.RegisteredTimers: Memory allocation failed");
        const _data: [*]QtC.QAbstractEventDispatcher__TimerInfo = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, timerId: i32 ```
    pub fn RemainingTime(self: ?*anyopaque, timerId: i32) i32 {
        return qtc.QAbstractEventDispatcher_RemainingTime(@ptrCast(self), @intCast(timerId));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, timerId: qnamespace_enums.TimerId ```
    pub fn UnregisterTimer2(self: ?*anyopaque, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer2(@ptrCast(self), @intCast(timerId));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn WakeUp(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_WakeUp(@ptrCast(self));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn Interrupt(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_Interrupt(@ptrCast(self));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn StartingUp(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_StartingUp(@ptrCast(self));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn ClosingDown(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_ClosingDown(@ptrCast(self));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, filterObj: QtC.QAbstractNativeEventFilter ```
    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, eventType: []u8, message: ?*anyopaque, result: *isize ```
    pub fn FilterNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractEventDispatcher_FilterNativeEvent(@ptrCast(self), eventType_str, message, @ptrCast(result));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn AboutToBlock(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_AboutToBlock(@ptrCast(self));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, slot: fn (self: QtC.QAbstractEventDispatcherV2) callconv(.c) void ```
    pub fn OnAboutToBlock(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_AboutToBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn Awake(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher_Awake(@ptrCast(self));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, slot: fn (self: QtC.QAbstractEventDispatcherV2) callconv(.c) void ```
    pub fn OnAwake(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_Awake(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    /// ``` thread: QtC.QThread ```
    pub fn Instance1(thread: ?*anyopaque) QtC.QAbstractEventDispatcher {
        return qtc.QAbstractEventDispatcher_Instance1(@ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, name: []const u8 ```
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
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qabstracteventdispatcherv2.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, obj: QtC.QObject ```
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
    /// ``` self: QtC.QAbstractEventDispatcherV2, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qabstracteventdispatcherv2.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qabstracteventdispatcherv2.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, slot: fn (self: QtC.QAbstractEventDispatcherV2) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, slot: fn (self: QtC.QAbstractEventDispatcherV2, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2, slot: fn (self: QtC.QAbstractEventDispatcherV2, objectName: []const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, []const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#dtor.QAbstractEventDispatcherV2)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractEventDispatcherV2 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcherV2_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html
pub const qabstracteventdispatcher__timerinfo = struct {
    /// New constructs a new QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ``` other: QtC.QAbstractEventDispatcher__TimerInfo ```
    pub fn New(other: ?*anyopaque) QtC.QAbstractEventDispatcher__TimerInfo {
        return qtc.QAbstractEventDispatcher__TimerInfo_new(@ptrCast(other));
    }

    /// New2 constructs a new QAbstractEventDispatcher::TimerInfo object and invalidates the source QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ``` other: QtC.QAbstractEventDispatcher__TimerInfo ```
    pub fn New2(other: ?*anyopaque) QtC.QAbstractEventDispatcher__TimerInfo {
        return qtc.QAbstractEventDispatcher__TimerInfo_new2(@ptrCast(other));
    }

    /// New3 constructs a new QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ``` id: i32, i: i32, t: qnamespace_enums.TimerType ```
    pub fn New3(id: i32, i: i32, t: i32) QtC.QAbstractEventDispatcher__TimerInfo {
        return qtc.QAbstractEventDispatcher__TimerInfo_new3(@intCast(id), @intCast(i), @intCast(t));
    }

    /// New4 constructs a new QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ``` param1: QtC.QAbstractEventDispatcher__TimerInfo ```
    pub fn New4(param1: ?*anyopaque) QtC.QAbstractEventDispatcher__TimerInfo {
        return qtc.QAbstractEventDispatcher__TimerInfo_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QAbstractEventDispatcher__TimerInfo, other: QtC.QAbstractEventDispatcher__TimerInfo ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher__TimerInfo_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QAbstractEventDispatcher__TimerInfo, other: QtC.QAbstractEventDispatcher__TimerInfo ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher__TimerInfo_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractEventDispatcher__TimerInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher__TimerInfo_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html
pub const qabstracteventdispatcher__timerinfov2 = struct {
    /// New constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
    ///
    /// ``` param1: QtC.QAbstractEventDispatcher__TimerInfoV2 ```
    pub fn New(param1: ?*anyopaque) QtC.QAbstractEventDispatcher__TimerInfoV2 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_new(@ptrCast(param1));
    }

    /// New2 constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
    ///
    ///
    pub fn New2() QtC.QAbstractEventDispatcher__TimerInfoV2 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_new2();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#operator-eq)
    ///
    /// ``` self: QtC.QAbstractEventDispatcher__TimerInfoV2, param1: QtC.QAbstractEventDispatcher__TimerInfoV2 ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QAbstractEventDispatcher__TimerInfoV2 ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_Delete(@ptrCast(self));
    }
};
