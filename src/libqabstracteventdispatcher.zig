const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractNativeEventFilter = @import("libqt6").QAbstractNativeEventFilter;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QDeadlineTimer = @import("libqt6").QDeadlineTimer;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QSocketNotifier = @import("libqt6").QSocketNotifier;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qeventloop_enums = @import("libqeventloop.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html)
pub const QAbstractEventDispatcher = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractEventDispatcher,

    pub const _is_QAbstractEventDispatcher = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn MetaObject(self: QAbstractEventDispatcher) QMetaObject {
        return .{ .ptr = qtc.QAbstractEventDispatcher_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QAbstractEventDispatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractEventDispatcher_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QAbstractEventDispatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractEventDispatcher_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    pub fn Instance() QAbstractEventDispatcher {
        return .{ .ptr = qtc.QAbstractEventDispatcher_Instance() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    pub fn ProcessEvents(self: QAbstractEventDispatcher, flags: i32) bool {
        return qtc.QAbstractEventDispatcher_ProcessEvents(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` notifier: QSocketNotifier `
    ///
    pub fn RegisterSocketNotifier(self: QAbstractEventDispatcher, notifier: anytype) void {
        comptime _ = @TypeOf(notifier)._is_QSocketNotifier;
        qtc.QAbstractEventDispatcher_RegisterSocketNotifier(@ptrCast(self.ptr), @ptrCast(notifier.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` notifier: QSocketNotifier `
    ///
    pub fn UnregisterSocketNotifier(self: QAbstractEventDispatcher, notifier: anytype) void {
        comptime _ = @TypeOf(notifier)._is_QSocketNotifier;
        qtc.QAbstractEventDispatcher_UnregisterSocketNotifier(@ptrCast(self.ptr), @ptrCast(notifier.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` interval: i64 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    /// ` object: QObject `
    ///
    pub fn RegisterTimer2(self: QAbstractEventDispatcher, interval: i64, timerType: i32, object: anytype) i32 {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAbstractEventDispatcher_RegisterTimer2(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` timerId: i32 `
    ///
    /// ` interval: i64 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    /// ` object: QObject `
    ///
    pub fn RegisterTimer3(self: QAbstractEventDispatcher, timerId: i32, interval: i64, timerType: i32, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QAbstractEventDispatcher_RegisterTimer3(@ptrCast(self.ptr), @bitCast(timerId), @bitCast(interval), @bitCast(timerType), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` timerId: i32 `
    ///
    pub fn UnregisterTimer(self: QAbstractEventDispatcher, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` object: QObject `
    ///
    pub fn UnregisterTimers(self: QAbstractEventDispatcher, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAbstractEventDispatcher_UnregisterTimers(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registeredTimers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` object: QObject `
    ///
    pub fn RegisteredTimers(self: QAbstractEventDispatcher, allocator: std.mem.Allocator, object: anytype) []QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(object)._is_QObject;
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcher_RegisteredTimers(@ptrCast(self.ptr), @ptrCast(object.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractEventDispatcher__TimerInfo, _arr.len) catch @panic("qabstracteventdispatcher.RegisteredTimers: Memory allocation failed");
        const _data: [*]QtC.QAbstractEventDispatcher__TimerInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` timerId: i32 `
    ///
    pub fn RemainingTime(self: QAbstractEventDispatcher, timerId: i32) i32 {
        return qtc.QAbstractEventDispatcher_RemainingTime(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` timerId: qnamespace_enums.TimerId `
    ///
    pub fn UnregisterTimer2(self: QAbstractEventDispatcher, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer2(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#timersForObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` object: QObject `
    ///
    pub fn TimersForObject(self: QAbstractEventDispatcher, allocator: std.mem.Allocator, object: anytype) []QAbstractEventDispatcher__TimerInfoV2 {
        comptime _ = @TypeOf(object)._is_QObject;
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcher_TimersForObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractEventDispatcher__TimerInfoV2, _arr.len) catch @panic("qabstracteventdispatcher.TimersForObject: Memory allocation failed");
        const _data: [*]QtC.QAbstractEventDispatcher__TimerInfoV2 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn WakeUp(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_WakeUp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn Interrupt(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_Interrupt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn StartingUp(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_StartingUp(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn ClosingDown(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_ClosingDown(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn InstallNativeEventFilter(self: QAbstractEventDispatcher, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QAbstractEventDispatcher_InstallNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn RemoveNativeEventFilter(self: QAbstractEventDispatcher, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QAbstractEventDispatcher_RemoveNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn FilterNativeEvent(self: QAbstractEventDispatcher, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractEventDispatcher_FilterNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn AboutToBlock(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_AboutToBlock(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher) callconv(.c) void `
    ///
    pub fn OnAboutToBlock(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_AboutToBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn Awake(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_Awake(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher) callconv(.c) void `
    ///
    pub fn OnAwake(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_Awake(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    /// ## Parameter(s):
    ///
    /// ` thread: QThread `
    ///
    pub fn Instance1(thread: anytype) QAbstractEventDispatcher {
        comptime _ = @TypeOf(thread)._is_QThread;
        return .{ .ptr = qtc.QAbstractEventDispatcher_Instance1(@ptrCast(thread.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QAbstractEventDispatcher, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QAbstractEventDispatcher, watched: anytype, event: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QAbstractEventDispatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcher.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QAbstractEventDispatcher, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn IsWidgetType(self: QAbstractEventDispatcher) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn IsWindowType(self: QAbstractEventDispatcher) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn IsQuickItemType(self: QAbstractEventDispatcher) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn SignalsBlocked(self: QAbstractEventDispatcher) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QAbstractEventDispatcher, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn Thread(self: QAbstractEventDispatcher) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QAbstractEventDispatcher, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QAbstractEventDispatcher, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QAbstractEventDispatcher, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QAbstractEventDispatcher, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QAbstractEventDispatcher, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QAbstractEventDispatcher, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qabstracteventdispatcher.Children: Memory allocation failed");
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QAbstractEventDispatcher, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QAbstractEventDispatcher, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QAbstractEventDispatcher, obj: anytype) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QAbstractEventDispatcher, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn Disconnect3(self: QAbstractEventDispatcher) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QAbstractEventDispatcher, receiver: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn DumpObjectTree(self: QAbstractEventDispatcher) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn DumpObjectInfo(self: QAbstractEventDispatcher) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QAbstractEventDispatcher, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QAbstractEventDispatcher, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QAbstractEventDispatcher, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn BindingStorage(self: QAbstractEventDispatcher) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn BindingStorage2(self: QAbstractEventDispatcher) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn Destroyed(self: QAbstractEventDispatcher) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn Parent(self: QAbstractEventDispatcher) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QAbstractEventDispatcher, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn DeleteLater(self: QAbstractEventDispatcher) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QAbstractEventDispatcher, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QAbstractEventDispatcher, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QAbstractEventDispatcher, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QAbstractEventDispatcher, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QAbstractEventDispatcher, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QAbstractEventDispatcher, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QAbstractEventDispatcher, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QAbstractEventDispatcher, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher, QObject) callconv(.c) void) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#dtor.QAbstractEventDispatcher)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn Delete(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html)
pub const QAbstractEventDispatcherV2 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractEventDispatcherV2,

    pub const _is_QAbstractEventDispatcherV2 = {};
    pub const _is_QAbstractEventDispatcher = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn MetaObject(self: QAbstractEventDispatcherV2) QMetaObject {
        return .{ .ptr = qtc.QAbstractEventDispatcherV2_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QAbstractEventDispatcherV2, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractEventDispatcherV2_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QAbstractEventDispatcherV2, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractEventDispatcherV2_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#unregisterTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` timerId: qnamespace_enums.TimerId `
    ///
    pub fn UnregisterTimer(self: QAbstractEventDispatcherV2, timerId: i32) bool {
        return qtc.QAbstractEventDispatcherV2_UnregisterTimer(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#timersForObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` object: QObject `
    ///
    pub fn TimersForObject(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator, object: anytype) []QAbstractEventDispatcher__TimerInfoV2 {
        comptime _ = @TypeOf(object)._is_QObject;
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcherV2_TimersForObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractEventDispatcher__TimerInfoV2, _arr.len) catch @panic("qabstracteventdispatcherv2.TimersForObject: Memory allocation failed");
        const _data: [*]QtC.QAbstractEventDispatcher__TimerInfoV2 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#processEventsWithDeadline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    /// ` deadline: QDeadlineTimer `
    ///
    pub fn ProcessEventsWithDeadline(self: QAbstractEventDispatcherV2, flags: i32, deadline: anytype) bool {
        comptime _ = @TypeOf(deadline)._is_QDeadlineTimer;
        return qtc.QAbstractEventDispatcherV2_ProcessEventsWithDeadline(@ptrCast(self.ptr), @bitCast(flags), @ptrCast(deadline.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    pub fn Instance() QAbstractEventDispatcher {
        return .{ .ptr = qtc.QAbstractEventDispatcher_Instance() };
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    pub fn ProcessEvents(self: QAbstractEventDispatcherV2, flags: i32) bool {
        return qtc.QAbstractEventDispatcher_ProcessEvents(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` notifier: QSocketNotifier `
    ///
    pub fn RegisterSocketNotifier(self: QAbstractEventDispatcherV2, notifier: anytype) void {
        comptime _ = @TypeOf(notifier)._is_QSocketNotifier;
        qtc.QAbstractEventDispatcher_RegisterSocketNotifier(@ptrCast(self.ptr), @ptrCast(notifier.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` notifier: QSocketNotifier `
    ///
    pub fn UnregisterSocketNotifier(self: QAbstractEventDispatcherV2, notifier: anytype) void {
        comptime _ = @TypeOf(notifier)._is_QSocketNotifier;
        qtc.QAbstractEventDispatcher_UnregisterSocketNotifier(@ptrCast(self.ptr), @ptrCast(notifier.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` interval: i64 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    /// ` object: QObject `
    ///
    pub fn RegisterTimer2(self: QAbstractEventDispatcherV2, interval: i64, timerType: i32, object: anytype) i32 {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAbstractEventDispatcher_RegisterTimer2(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType), @ptrCast(object.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` timerId: i32 `
    ///
    /// ` interval: i64 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    /// ` object: QObject `
    ///
    pub fn RegisterTimer3(self: QAbstractEventDispatcherV2, timerId: i32, interval: i64, timerType: i32, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QAbstractEventDispatcher_RegisterTimer3(@ptrCast(self.ptr), @bitCast(timerId), @bitCast(interval), @bitCast(timerType), @ptrCast(object.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` object: QObject `
    ///
    pub fn UnregisterTimers(self: QAbstractEventDispatcherV2, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAbstractEventDispatcher_UnregisterTimers(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registeredTimers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` object: QObject `
    ///
    pub fn RegisteredTimers(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator, object: anytype) []QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(object)._is_QObject;
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcher_RegisteredTimers(@ptrCast(self.ptr), @ptrCast(object.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractEventDispatcher__TimerInfo, _arr.len) catch @panic("qabstracteventdispatcherv2.RegisteredTimers: Memory allocation failed");
        const _data: [*]QtC.QAbstractEventDispatcher__TimerInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` timerId: i32 `
    ///
    pub fn RemainingTime(self: QAbstractEventDispatcherV2, timerId: i32) i32 {
        return qtc.QAbstractEventDispatcher_RemainingTime(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` timerId: qnamespace_enums.TimerId `
    ///
    pub fn UnregisterTimer2(self: QAbstractEventDispatcherV2, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer2(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn WakeUp(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_WakeUp(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn Interrupt(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_Interrupt(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn StartingUp(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_StartingUp(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn ClosingDown(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_ClosingDown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn InstallNativeEventFilter(self: QAbstractEventDispatcherV2, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QAbstractEventDispatcher_InstallNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn RemoveNativeEventFilter(self: QAbstractEventDispatcherV2, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QAbstractEventDispatcher_RemoveNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn FilterNativeEvent(self: QAbstractEventDispatcherV2, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractEventDispatcher_FilterNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn AboutToBlock(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_AboutToBlock(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcherV2) callconv(.c) void `
    ///
    pub fn OnAboutToBlock(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_AboutToBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn Awake(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_Awake(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcherV2) callconv(.c) void `
    ///
    pub fn OnAwake(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_Awake(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    /// ## Parameter(s):
    ///
    /// ` thread: QThread `
    ///
    pub fn Instance1(thread: anytype) QAbstractEventDispatcher {
        comptime _ = @TypeOf(thread)._is_QThread;
        return .{ .ptr = qtc.QAbstractEventDispatcher_Instance1(@ptrCast(thread.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QAbstractEventDispatcherV2, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QAbstractEventDispatcherV2, watched: anytype, event: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qabstracteventdispatcherv2.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QAbstractEventDispatcherV2, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn IsWidgetType(self: QAbstractEventDispatcherV2) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn IsWindowType(self: QAbstractEventDispatcherV2) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn IsQuickItemType(self: QAbstractEventDispatcherV2) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn SignalsBlocked(self: QAbstractEventDispatcherV2) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QAbstractEventDispatcherV2, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn Thread(self: QAbstractEventDispatcherV2) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QAbstractEventDispatcherV2, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QAbstractEventDispatcherV2, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QAbstractEventDispatcherV2, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QAbstractEventDispatcherV2, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QAbstractEventDispatcherV2, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qabstracteventdispatcherv2.Children: Memory allocation failed");
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QAbstractEventDispatcherV2, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QAbstractEventDispatcherV2, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QAbstractEventDispatcherV2, obj: anytype) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QAbstractEventDispatcherV2, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn Disconnect3(self: QAbstractEventDispatcherV2) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QAbstractEventDispatcherV2, receiver: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn DumpObjectTree(self: QAbstractEventDispatcherV2) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn DumpObjectInfo(self: QAbstractEventDispatcherV2) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QAbstractEventDispatcherV2, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QAbstractEventDispatcherV2, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn BindingStorage(self: QAbstractEventDispatcherV2) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn BindingStorage2(self: QAbstractEventDispatcherV2) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn Destroyed(self: QAbstractEventDispatcherV2) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcherV2) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn Parent(self: QAbstractEventDispatcherV2) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QAbstractEventDispatcherV2, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn DeleteLater(self: QAbstractEventDispatcherV2) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QAbstractEventDispatcherV2, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QAbstractEventDispatcherV2, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QAbstractEventDispatcherV2, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QAbstractEventDispatcherV2, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QAbstractEventDispatcherV2, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QAbstractEventDispatcherV2, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QAbstractEventDispatcherV2, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QAbstractEventDispatcherV2, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcherV2, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2, QObject) callconv(.c) void) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcherV2, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#dtor.QAbstractEventDispatcherV2)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn Delete(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcherV2_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html)
pub const QAbstractEventDispatcher__TimerInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractEventDispatcher__TimerInfo,

    pub const _is_QAbstractEventDispatcher__TimerInfo = {};

    /// New constructs a new QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn New(other: anytype) QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(other)._is_QAbstractEventDispatcher__TimerInfo;
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfo_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new QAbstractEventDispatcher::TimerInfo object and invalidates the source QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn New2(other: anytype) QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(other)._is_QAbstractEventDispatcher__TimerInfo;
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfo_new2(@ptrCast(other.ptr)) };
    }

    /// New3 constructs a new QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` id: i32 `
    ///
    /// ` i: i32 `
    ///
    /// ` t: qnamespace_enums.TimerType `
    ///
    pub fn New3(id: i32, i: i32, t: i32) QAbstractEventDispatcher__TimerInfo {
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfo_new3(@bitCast(id), @bitCast(i), @bitCast(t)) };
    }

    /// New4 constructs a new QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn New4(param1: anytype) QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(param1)._is_QAbstractEventDispatcher__TimerInfo;
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfo_new4(@ptrCast(param1.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` other: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn CopyAssign(self: QAbstractEventDispatcher__TimerInfo, other: QAbstractEventDispatcher__TimerInfo) void {
        qtc.QAbstractEventDispatcher__TimerInfo_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` other: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn MoveAssign(self: QAbstractEventDispatcher__TimerInfo, other: QAbstractEventDispatcher__TimerInfo) void {
        qtc.QAbstractEventDispatcher__TimerInfo_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn TimerId(self: QAbstractEventDispatcher__TimerInfo) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfo_TimerId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` timerId: i32 `
    ///
    pub fn SetTimerId(self: QAbstractEventDispatcher__TimerInfo, timerId: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfo_SetTimerId(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#interval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn Interval(self: QAbstractEventDispatcher__TimerInfo) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfo_Interval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#interval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` interval: i32 `
    ///
    pub fn SetInterval(self: QAbstractEventDispatcher__TimerInfo, interval: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfo_SetInterval(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimerType `
    ///
    pub fn TimerType(self: QAbstractEventDispatcher__TimerInfo) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfo_TimerType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn SetTimerType(self: QAbstractEventDispatcher__TimerInfo, timerType: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfo_SetTimerType(@ptrCast(self.ptr), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn Delete(self: QAbstractEventDispatcher__TimerInfo) void {
        qtc.QAbstractEventDispatcher__TimerInfo_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html)
pub const QAbstractEventDispatcher__TimerInfoV2 = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QAbstractEventDispatcher__TimerInfoV2,

    pub const _is_QAbstractEventDispatcher__TimerInfoV2 = {};

    /// New constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    pub fn New(param1: anytype) QAbstractEventDispatcher__TimerInfoV2 {
        comptime _ = @TypeOf(param1)._is_QAbstractEventDispatcher__TimerInfoV2;
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfoV2_new(@ptrCast(param1.ptr)) };
    }

    /// New2 constructs a new QAbstractEventDispatcher::TimerInfoV2 object.
    ///
    pub fn New2() QAbstractEventDispatcher__TimerInfoV2 {
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfoV2_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimerId `
    ///
    pub fn TimerId(self: QAbstractEventDispatcher__TimerInfoV2) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_TimerId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    /// ` timerId: qnamespace_enums.TimerId `
    ///
    pub fn SetTimerId(self: QAbstractEventDispatcher__TimerInfoV2, timerId: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_SetTimerId(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimerType `
    ///
    pub fn TimerType(self: QAbstractEventDispatcher__TimerInfoV2) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_TimerType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn SetTimerType(self: QAbstractEventDispatcher__TimerInfoV2, timerType: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_SetTimerType(@ptrCast(self.ptr), @bitCast(timerType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    /// ` param1: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    pub fn OperatorAssign(self: QAbstractEventDispatcher__TimerInfoV2, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractEventDispatcher__TimerInfoV2;
        qtc.QAbstractEventDispatcher__TimerInfoV2_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    pub fn Delete(self: QAbstractEventDispatcher__TimerInfoV2) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_Delete(@ptrCast(self.ptr));
    }
};
