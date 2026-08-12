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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn metaObject(self: QAbstractEventDispatcher) QMetaObject {
        return .{ .ptr = qtc.QAbstractEventDispatcher_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstractEventDispatcher, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractEventDispatcher_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QAbstractEventDispatcher, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractEventDispatcher_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractEventDispatcher.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `instance` instead
    ///
    pub const Instance = instance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    pub fn instance() QAbstractEventDispatcher {
        return .{ .ptr = qtc.QAbstractEventDispatcher_Instance() };
    }

    /// ### DEPRECATED: Use `processEvents` instead
    ///
    pub const ProcessEvents = processEvents;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` flags: flag of qeventloop_enums.ProcessEventsFlag `
    ///
    pub fn processEvents(self: QAbstractEventDispatcher, flags: i32) bool {
        return qtc.QAbstractEventDispatcher_ProcessEvents(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `registerSocketNotifier` instead
    ///
    pub const RegisterSocketNotifier = registerSocketNotifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` notifier: QSocketNotifier `
    ///
    pub fn registerSocketNotifier(self: QAbstractEventDispatcher, notifier: anytype) void {
        comptime _ = @TypeOf(notifier)._is_QSocketNotifier;
        qtc.QAbstractEventDispatcher_RegisterSocketNotifier(@ptrCast(self.ptr), @ptrCast(notifier.ptr));
    }

    /// ### DEPRECATED: Use `unregisterSocketNotifier` instead
    ///
    pub const UnregisterSocketNotifier = unregisterSocketNotifier;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` notifier: QSocketNotifier `
    ///
    pub fn unregisterSocketNotifier(self: QAbstractEventDispatcher, notifier: anytype) void {
        comptime _ = @TypeOf(notifier)._is_QSocketNotifier;
        qtc.QAbstractEventDispatcher_UnregisterSocketNotifier(@ptrCast(self.ptr), @ptrCast(notifier.ptr));
    }

    /// ### DEPRECATED: Use `registerTimer2` instead
    ///
    pub const RegisterTimer2 = registerTimer2;

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
    pub fn registerTimer2(self: QAbstractEventDispatcher, interval: i64, timerType: i32, object: anytype) i32 {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAbstractEventDispatcher_RegisterTimer2(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `registerTimer3` instead
    ///
    pub const RegisterTimer3 = registerTimer3;

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
    pub fn registerTimer3(self: QAbstractEventDispatcher, timerId: i32, interval: i64, timerType: i32, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QAbstractEventDispatcher_RegisterTimer3(@ptrCast(self.ptr), @bitCast(timerId), @bitCast(interval), @bitCast(timerType), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `unregisterTimer` instead
    ///
    pub const UnregisterTimer = unregisterTimer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` timerId: i32 `
    ///
    pub fn unregisterTimer(self: QAbstractEventDispatcher, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### DEPRECATED: Use `unregisterTimers` instead
    ///
    pub const UnregisterTimers = unregisterTimers;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` object: QObject `
    ///
    pub fn unregisterTimers(self: QAbstractEventDispatcher, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAbstractEventDispatcher_UnregisterTimers(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `registeredTimers` instead
    ///
    pub const RegisteredTimers = registeredTimers;

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
    pub fn registeredTimers(self: QAbstractEventDispatcher, allocator: std.mem.Allocator, object: anytype) []QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(object)._is_QObject;
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcher_RegisteredTimers(@ptrCast(self.ptr), @ptrCast(object.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractEventDispatcher__TimerInfo, _arr.len) catch @panic("QAbstractEventDispatcher.registeredTimers: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractEventDispatcher__TimerInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `remainingTime` instead
    ///
    pub const RemainingTime = remainingTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` timerId: i32 `
    ///
    pub fn remainingTime(self: QAbstractEventDispatcher, timerId: i32) i32 {
        return qtc.QAbstractEventDispatcher_RemainingTime(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### DEPRECATED: Use `unregisterTimer2` instead
    ///
    pub const UnregisterTimer2 = unregisterTimer2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` timerId: qnamespace_enums.TimerId `
    ///
    pub fn unregisterTimer2(self: QAbstractEventDispatcher, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer2(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### DEPRECATED: Use `timersForObject` instead
    ///
    pub const TimersForObject = timersForObject;

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
    pub fn timersForObject(self: QAbstractEventDispatcher, allocator: std.mem.Allocator, object: anytype) []QAbstractEventDispatcher__TimerInfoV2 {
        comptime _ = @TypeOf(object)._is_QObject;
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcher_TimersForObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractEventDispatcher__TimerInfoV2, _arr.len) catch @panic("QAbstractEventDispatcher.timersForObject: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractEventDispatcher__TimerInfoV2 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `wakeUp` instead
    ///
    pub const WakeUp = wakeUp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn wakeUp(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_WakeUp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `interrupt` instead
    ///
    pub const Interrupt = interrupt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn interrupt(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_Interrupt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startingUp` instead
    ///
    pub const StartingUp = startingUp;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn startingUp(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_StartingUp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closingDown` instead
    ///
    pub const ClosingDown = closingDown;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn closingDown(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_ClosingDown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `installNativeEventFilter` instead
    ///
    pub const InstallNativeEventFilter = installNativeEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn installNativeEventFilter(self: QAbstractEventDispatcher, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QAbstractEventDispatcher_InstallNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeNativeEventFilter` instead
    ///
    pub const RemoveNativeEventFilter = removeNativeEventFilter;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` filterObj: QAbstractNativeEventFilter `
    ///
    pub fn removeNativeEventFilter(self: QAbstractEventDispatcher, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QAbstractEventDispatcher_RemoveNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `filterNativeEvent` instead
    ///
    pub const FilterNativeEvent = filterNativeEvent;

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
    pub fn filterNativeEvent(self: QAbstractEventDispatcher, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractEventDispatcher_FilterNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `aboutToBlock` instead
    ///
    pub const AboutToBlock = aboutToBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn aboutToBlock(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_AboutToBlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToBlock` instead
    ///
    pub const OnAboutToBlock = onAboutToBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher) callconv(.c) void `
    ///
    pub fn onAboutToBlock(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_AboutToBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `awake` instead
    ///
    pub const Awake = awake;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn awake(self: QAbstractEventDispatcher) void {
        qtc.QAbstractEventDispatcher_Awake(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAwake` instead
    ///
    pub const OnAwake = onAwake;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher) callconv(.c) void `
    ///
    pub fn onAwake(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_Awake(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractEventDispatcher.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractEventDispatcher.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `instance1` instead
    ///
    pub const Instance1 = instance1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    /// ## Parameter(s):
    ///
    /// ` _thread: QThread `
    ///
    pub fn instance1(_thread: anytype) QAbstractEventDispatcher {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return .{ .ptr = qtc.QAbstractEventDispatcher_Instance1(@ptrCast(_thread.ptr)) };
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAbstractEventDispatcher, _event: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstractEventDispatcher, watched: anytype, _event: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAbstractEventDispatcher, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractEventDispatcher.objectName: Memory allocation failed");
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAbstractEventDispatcher, name: []const u8) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn isWidgetType(self: QAbstractEventDispatcher) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn isWindowType(self: QAbstractEventDispatcher) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn isQuickItemType(self: QAbstractEventDispatcher) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn signalsBlocked(self: QAbstractEventDispatcher) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAbstractEventDispatcher, b: bool) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn thread(self: QAbstractEventDispatcher) QThread {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstractEventDispatcher, _thread: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAbstractEventDispatcher, interval: i32) i32 {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAbstractEventDispatcher, time: i64) i32 {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAbstractEventDispatcher, id: i32) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAbstractEventDispatcher, id: i32) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAbstractEventDispatcher, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstractEventDispatcher.children: Memory allocation failed");
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAbstractEventDispatcher, _parent: anytype) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAbstractEventDispatcher, filterObj: anytype) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAbstractEventDispatcher, obj: anytype) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstractEventDispatcher, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn disconnect3(self: QAbstractEventDispatcher) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAbstractEventDispatcher, receiver: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn dumpObjectTree(self: QAbstractEventDispatcher) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn dumpObjectInfo(self: QAbstractEventDispatcher) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAbstractEventDispatcher, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAbstractEventDispatcher, name: [:0]const u8) QVariant {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAbstractEventDispatcher, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QAbstractEventDispatcher.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstractEventDispatcher.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn bindingStorage(self: QAbstractEventDispatcher) QBindingStorage {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn bindingStorage2(self: QAbstractEventDispatcher) QBindingStorage {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn destroyed(self: QAbstractEventDispatcher) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher) callconv(.c) void) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn parent(self: QAbstractEventDispatcher) QObject {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAbstractEventDispatcher, classname: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn deleteLater(self: QAbstractEventDispatcher) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAbstractEventDispatcher, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAbstractEventDispatcher, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstractEventDispatcher, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAbstractEventDispatcher, signal: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAbstractEventDispatcher, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAbstractEventDispatcher, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAbstractEventDispatcher, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAbstractEventDispatcher, param1: anytype) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher, QObject) callconv(.c) void) void {
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
    /// ` self: QAbstractEventDispatcher `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcher, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAbstractEventDispatcher, callback: *const fn (QAbstractEventDispatcher, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#dtor.QAbstractEventDispatcher)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractEventDispatcher `
    ///
    pub fn delete(self: QAbstractEventDispatcher) void {
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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn metaObject(self: QAbstractEventDispatcherV2) QMetaObject {
        return .{ .ptr = qtc.QAbstractEventDispatcherV2_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QAbstractEventDispatcherV2, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QAbstractEventDispatcherV2_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QAbstractEventDispatcherV2, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QAbstractEventDispatcherV2_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractEventDispatcherV2.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `unregisterTimer` instead
    ///
    pub const UnregisterTimer = unregisterTimer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#unregisterTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` timerId: qnamespace_enums.TimerId `
    ///
    pub fn unregisterTimer(self: QAbstractEventDispatcherV2, timerId: i32) bool {
        return qtc.QAbstractEventDispatcherV2_UnregisterTimer(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### DEPRECATED: Use `timersForObject` instead
    ///
    pub const TimersForObject = timersForObject;

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
    pub fn timersForObject(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator, object: anytype) []QAbstractEventDispatcher__TimerInfoV2 {
        comptime _ = @TypeOf(object)._is_QObject;
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcherV2_TimersForObject(@ptrCast(self.ptr), @ptrCast(object.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractEventDispatcher__TimerInfoV2, _arr.len) catch @panic("QAbstractEventDispatcherV2.timersForObject: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractEventDispatcher__TimerInfoV2 = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `processEventsWithDeadline` instead
    ///
    pub const ProcessEventsWithDeadline = processEventsWithDeadline;

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
    pub fn processEventsWithDeadline(self: QAbstractEventDispatcherV2, flags: i32, deadline: anytype) bool {
        comptime _ = @TypeOf(deadline)._is_QDeadlineTimer;
        return qtc.QAbstractEventDispatcherV2_ProcessEventsWithDeadline(@ptrCast(self.ptr), @bitCast(flags), @ptrCast(deadline.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractEventDispatcherV2.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractEventDispatcherV2.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `instance` instead
    ///
    pub const Instance = instance;

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    pub fn instance() QAbstractEventDispatcher {
        return .{ .ptr = qtc.QAbstractEventDispatcher_Instance() };
    }

    /// ### DEPRECATED: Use `processEvents` instead
    ///
    pub const ProcessEvents = processEvents;

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
    pub fn processEvents(self: QAbstractEventDispatcherV2, flags: i32) bool {
        return qtc.QAbstractEventDispatcher_ProcessEvents(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `registerSocketNotifier` instead
    ///
    pub const RegisterSocketNotifier = registerSocketNotifier;

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
    pub fn registerSocketNotifier(self: QAbstractEventDispatcherV2, notifier: anytype) void {
        comptime _ = @TypeOf(notifier)._is_QSocketNotifier;
        qtc.QAbstractEventDispatcher_RegisterSocketNotifier(@ptrCast(self.ptr), @ptrCast(notifier.ptr));
    }

    /// ### DEPRECATED: Use `unregisterSocketNotifier` instead
    ///
    pub const UnregisterSocketNotifier = unregisterSocketNotifier;

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
    pub fn unregisterSocketNotifier(self: QAbstractEventDispatcherV2, notifier: anytype) void {
        comptime _ = @TypeOf(notifier)._is_QSocketNotifier;
        qtc.QAbstractEventDispatcher_UnregisterSocketNotifier(@ptrCast(self.ptr), @ptrCast(notifier.ptr));
    }

    /// ### DEPRECATED: Use `registerTimer2` instead
    ///
    pub const RegisterTimer2 = registerTimer2;

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
    pub fn registerTimer2(self: QAbstractEventDispatcherV2, interval: i64, timerType: i32, object: anytype) i32 {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAbstractEventDispatcher_RegisterTimer2(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `registerTimer3` instead
    ///
    pub const RegisterTimer3 = registerTimer3;

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
    pub fn registerTimer3(self: QAbstractEventDispatcherV2, timerId: i32, interval: i64, timerType: i32, object: anytype) void {
        comptime _ = @TypeOf(object)._is_QObject;
        qtc.QAbstractEventDispatcher_RegisterTimer3(@ptrCast(self.ptr), @bitCast(timerId), @bitCast(interval), @bitCast(timerType), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `unregisterTimers` instead
    ///
    pub const UnregisterTimers = unregisterTimers;

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
    pub fn unregisterTimers(self: QAbstractEventDispatcherV2, object: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QAbstractEventDispatcher_UnregisterTimers(@ptrCast(self.ptr), @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `registeredTimers` instead
    ///
    pub const RegisteredTimers = registeredTimers;

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
    pub fn registeredTimers(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator, object: anytype) []QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(object)._is_QObject;
        const _arr: qtc.libqt_list = qtc.QAbstractEventDispatcher_RegisteredTimers(@ptrCast(self.ptr), @ptrCast(object.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractEventDispatcher__TimerInfo, _arr.len) catch @panic("QAbstractEventDispatcherV2.registeredTimers: Memory allocation failed");
        const _data_val: [*]QtC.QAbstractEventDispatcher__TimerInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `remainingTime` instead
    ///
    pub const RemainingTime = remainingTime;

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
    pub fn remainingTime(self: QAbstractEventDispatcherV2, timerId: i32) i32 {
        return qtc.QAbstractEventDispatcher_RemainingTime(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### DEPRECATED: Use `unregisterTimer2` instead
    ///
    pub const UnregisterTimer2 = unregisterTimer2;

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
    pub fn unregisterTimer2(self: QAbstractEventDispatcherV2, timerId: i32) bool {
        return qtc.QAbstractEventDispatcher_UnregisterTimer2(@ptrCast(self.ptr), @bitCast(timerId));
    }

    /// ### DEPRECATED: Use `wakeUp` instead
    ///
    pub const WakeUp = wakeUp;

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn wakeUp(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_WakeUp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `interrupt` instead
    ///
    pub const Interrupt = interrupt;

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn interrupt(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_Interrupt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startingUp` instead
    ///
    pub const StartingUp = startingUp;

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn startingUp(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_StartingUp(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `closingDown` instead
    ///
    pub const ClosingDown = closingDown;

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn closingDown(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_ClosingDown(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `installNativeEventFilter` instead
    ///
    pub const InstallNativeEventFilter = installNativeEventFilter;

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
    pub fn installNativeEventFilter(self: QAbstractEventDispatcherV2, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QAbstractEventDispatcher_InstallNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeNativeEventFilter` instead
    ///
    pub const RemoveNativeEventFilter = removeNativeEventFilter;

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
    pub fn removeNativeEventFilter(self: QAbstractEventDispatcherV2, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QAbstractNativeEventFilter;
        qtc.QAbstractEventDispatcher_RemoveNativeEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `filterNativeEvent` instead
    ///
    pub const FilterNativeEvent = filterNativeEvent;

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
    pub fn filterNativeEvent(self: QAbstractEventDispatcherV2, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QAbstractEventDispatcher_FilterNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `aboutToBlock` instead
    ///
    pub const AboutToBlock = aboutToBlock;

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn aboutToBlock(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_AboutToBlock(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAboutToBlock` instead
    ///
    pub const OnAboutToBlock = onAboutToBlock;

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
    pub fn onAboutToBlock(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_AboutToBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `awake` instead
    ///
    pub const Awake = awake;

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn awake(self: QAbstractEventDispatcherV2) void {
        qtc.QAbstractEventDispatcher_Awake(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAwake` instead
    ///
    pub const OnAwake = onAwake;

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
    pub fn onAwake(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2) callconv(.c) void) void {
        qtc.QAbstractEventDispatcher_Connect_Awake(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `instance1` instead
    ///
    pub const Instance1 = instance1;

    /// Inherited from QAbstractEventDispatcher
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    /// ## Parameter(s):
    ///
    /// ` _thread: QThread `
    ///
    pub fn instance1(_thread: anytype) QAbstractEventDispatcher {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return .{ .ptr = qtc.QAbstractEventDispatcher_Instance1(@ptrCast(_thread.ptr)) };
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QAbstractEventDispatcherV2, _event: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QAbstractEventDispatcherV2, watched: anytype, _event: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QAbstractEventDispatcherV2.objectName: Memory allocation failed");
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QAbstractEventDispatcherV2, name: []const u8) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn isWidgetType(self: QAbstractEventDispatcherV2) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn isWindowType(self: QAbstractEventDispatcherV2) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn isQuickItemType(self: QAbstractEventDispatcherV2) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn signalsBlocked(self: QAbstractEventDispatcherV2) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QAbstractEventDispatcherV2, b: bool) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn thread(self: QAbstractEventDispatcherV2) QThread {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QAbstractEventDispatcherV2, _thread: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QAbstractEventDispatcherV2, interval: i32) i32 {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QAbstractEventDispatcherV2, time: i64) i32 {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QAbstractEventDispatcherV2, id: i32) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QAbstractEventDispatcherV2, id: i32) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QAbstractEventDispatcherV2.children: Memory allocation failed");
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QAbstractEventDispatcherV2, _parent: anytype) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QAbstractEventDispatcherV2, filterObj: anytype) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QAbstractEventDispatcherV2, obj: anytype) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QAbstractEventDispatcherV2, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn disconnect3(self: QAbstractEventDispatcherV2) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QAbstractEventDispatcherV2, receiver: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn dumpObjectTree(self: QAbstractEventDispatcherV2) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn dumpObjectInfo(self: QAbstractEventDispatcherV2) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QAbstractEventDispatcherV2, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QAbstractEventDispatcherV2, name: [:0]const u8) QVariant {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QAbstractEventDispatcherV2, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QAbstractEventDispatcherV2.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QAbstractEventDispatcherV2.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn bindingStorage(self: QAbstractEventDispatcherV2) QBindingStorage {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn bindingStorage2(self: QAbstractEventDispatcherV2) QBindingStorage {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn destroyed(self: QAbstractEventDispatcherV2) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcherV2) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2) callconv(.c) void) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn parent(self: QAbstractEventDispatcherV2) QObject {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QAbstractEventDispatcherV2, classname: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn deleteLater(self: QAbstractEventDispatcherV2) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QAbstractEventDispatcherV2, interval: i32, timerType: i32) i32 {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QAbstractEventDispatcherV2, time: i64, timerType: i32) i32 {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QAbstractEventDispatcherV2, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QAbstractEventDispatcherV2, signal: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QAbstractEventDispatcherV2, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QAbstractEventDispatcherV2, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QAbstractEventDispatcherV2, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QAbstractEventDispatcherV2, param1: anytype) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcherV2, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2, QObject) callconv(.c) void) void {
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
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    /// ` callback: *const fn (self: QAbstractEventDispatcherV2, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QAbstractEventDispatcherV2, callback: *const fn (QAbstractEventDispatcherV2, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcherv2.html#dtor.QAbstractEventDispatcherV2)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractEventDispatcherV2 `
    ///
    pub fn delete(self: QAbstractEventDispatcherV2) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAbstractEventDispatcher::TimerInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn new(other: anytype) QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(other)._is_QAbstractEventDispatcher__TimerInfo;
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfo_new(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAbstractEventDispatcher::TimerInfo object and invalidate the source QAbstractEventDispatcher::TimerInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn new2(other: anytype) QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(other)._is_QAbstractEventDispatcher__TimerInfo;
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QAbstractEventDispatcher::TimerInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` id: i32 `
    ///
    /// ` i: i32 `
    ///
    /// ` t: qnamespace_enums.TimerType `
    ///
    pub fn new3(id: i32, i: i32, t: i32) QAbstractEventDispatcher__TimerInfo {
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfo_new3(@bitCast(id), @bitCast(i), @bitCast(t)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QAbstractEventDispatcher::TimerInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn new4(param1: anytype) QAbstractEventDispatcher__TimerInfo {
        comptime _ = @TypeOf(param1)._is_QAbstractEventDispatcher__TimerInfo;
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfo_new4(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` other: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn copyAssign(self: QAbstractEventDispatcher__TimerInfo, other: QAbstractEventDispatcher__TimerInfo) void {
        qtc.QAbstractEventDispatcher__TimerInfo_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` other: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn moveAssign(self: QAbstractEventDispatcher__TimerInfo, other: QAbstractEventDispatcher__TimerInfo) void {
        qtc.QAbstractEventDispatcher__TimerInfo_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `timerId` instead
    ///
    pub const TimerId = timerId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn timerId(self: QAbstractEventDispatcher__TimerInfo) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfo_TimerId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimerId` instead
    ///
    pub const SetTimerId = setTimerId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` _timerId: i32 `
    ///
    pub fn setTimerId(self: QAbstractEventDispatcher__TimerInfo, _timerId: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfo_SetTimerId(@ptrCast(self.ptr), @bitCast(_timerId));
    }

    /// ### DEPRECATED: Use `interval` instead
    ///
    pub const Interval = interval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#interval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn interval(self: QAbstractEventDispatcher__TimerInfo) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfo_Interval(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInterval` instead
    ///
    pub const SetInterval = setInterval;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#interval-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` _interval: i32 `
    ///
    pub fn setInterval(self: QAbstractEventDispatcher__TimerInfo, _interval: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfo_SetInterval(@ptrCast(self.ptr), @bitCast(_interval));
    }

    /// ### DEPRECATED: Use `timerType` instead
    ///
    pub const TimerType = timerType;

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
    pub fn timerType(self: QAbstractEventDispatcher__TimerInfo) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfo_TimerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimerType` instead
    ///
    pub const SetTimerType = setTimerType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html#timerType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    /// ` _timerType: qnamespace_enums.TimerType `
    ///
    pub fn setTimerType(self: QAbstractEventDispatcher__TimerInfo, _timerType: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfo_SetTimerType(@ptrCast(self.ptr), @bitCast(_timerType));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfo `
    ///
    pub fn delete(self: QAbstractEventDispatcher__TimerInfo) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QAbstractEventDispatcher::TimerInfoV2 object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    pub fn new(param1: anytype) QAbstractEventDispatcher__TimerInfoV2 {
        comptime _ = @TypeOf(param1)._is_QAbstractEventDispatcher__TimerInfoV2;
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfoV2_new(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QAbstractEventDispatcher::TimerInfoV2 object in C++ memory
    ///
    pub fn new2() QAbstractEventDispatcher__TimerInfoV2 {
        return .{ .ptr = qtc.QAbstractEventDispatcher__TimerInfoV2_new2() };
    }

    /// ### DEPRECATED: Use `timerId` instead
    ///
    pub const TimerId = timerId;

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
    pub fn timerId(self: QAbstractEventDispatcher__TimerInfoV2) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_TimerId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimerId` instead
    ///
    pub const SetTimerId = setTimerId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerId-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    /// ` _timerId: qnamespace_enums.TimerId `
    ///
    pub fn setTimerId(self: QAbstractEventDispatcher__TimerInfoV2, _timerId: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_SetTimerId(@ptrCast(self.ptr), @bitCast(_timerId));
    }

    /// ### DEPRECATED: Use `timerType` instead
    ///
    pub const TimerType = timerType;

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
    pub fn timerType(self: QAbstractEventDispatcher__TimerInfoV2) i32 {
        return qtc.QAbstractEventDispatcher__TimerInfoV2_TimerType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTimerType` instead
    ///
    pub const SetTimerType = setTimerType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#timerType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    /// ` _timerType: qnamespace_enums.TimerType `
    ///
    pub fn setTimerType(self: QAbstractEventDispatcher__TimerInfoV2, _timerType: i32) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_SetTimerType(@ptrCast(self.ptr), @bitCast(_timerType));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfov2.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    /// ` param1: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    pub fn operatorAssign(self: QAbstractEventDispatcher__TimerInfoV2, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAbstractEventDispatcher__TimerInfoV2;
        qtc.QAbstractEventDispatcher__TimerInfoV2_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QAbstractEventDispatcher__TimerInfoV2 `
    ///
    pub fn delete(self: QAbstractEventDispatcher__TimerInfoV2) void {
        qtc.QAbstractEventDispatcher__TimerInfoV2_Delete(@ptrCast(self.ptr));
    }
};
