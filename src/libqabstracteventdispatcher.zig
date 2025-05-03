const C = @import("qt6c");
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qabstracteventdispatcher.html
pub const qabstracteventdispatcher = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn MetaObject(self: ?*anyopaque) ?*C.QMetaObject {
        return C.QAbstractEventDispatcher_MetaObject(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractEventDispatcher, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = @constCast(param1.ptr);
        return C.QAbstractEventDispatcher_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: ?*C.QAbstractEventDispatcher, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i64, param2: i32, param3: ?*anyopaque) i32 {
        return C.QAbstractEventDispatcher_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const _str = C.QAbstractEventDispatcher_Tr(s_Cstring);
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    ///
    pub fn Instance() ?*C.QAbstractEventDispatcher {
        return C.QAbstractEventDispatcher_Instance();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#processEvents)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, flags: i32 ```
    pub fn ProcessEvents(self: ?*anyopaque, flags: i64) bool {
        return C.QAbstractEventDispatcher_ProcessEvents(@ptrCast(self), @intCast(flags));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerSocketNotifier)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, notifier: ?*C.QSocketNotifier ```
    pub fn RegisterSocketNotifier(self: ?*anyopaque, notifier: ?*anyopaque) void {
        C.QAbstractEventDispatcher_RegisterSocketNotifier(@ptrCast(self), @ptrCast(notifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterSocketNotifier)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, notifier: ?*C.QSocketNotifier ```
    pub fn UnregisterSocketNotifier(self: ?*anyopaque, notifier: ?*anyopaque) void {
        C.QAbstractEventDispatcher_UnregisterSocketNotifier(@ptrCast(self), @ptrCast(notifier));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, interval: i64, timerType: qnamespace_enums.TimerType, object: ?*C.QObject ```
    pub fn RegisterTimer(self: ?*anyopaque, interval: i64, timerType: i64, object: ?*anyopaque) i32 {
        return C.QAbstractEventDispatcher_RegisterTimer(@ptrCast(self), @intCast(interval), @intCast(timerType), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registerTimer)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, timerId: i32, interval: i64, timerType: qnamespace_enums.TimerType, object: ?*C.QObject ```
    pub fn RegisterTimer2(self: ?*anyopaque, timerId: i32, interval: i64, timerType: i64, object: ?*anyopaque) void {
        C.QAbstractEventDispatcher_RegisterTimer2(@ptrCast(self), @intCast(timerId), @intCast(interval), @intCast(timerType), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimer)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, timerId: i32 ```
    pub fn UnregisterTimer(self: ?*anyopaque, timerId: i32) bool {
        return C.QAbstractEventDispatcher_UnregisterTimer(@ptrCast(self), @intCast(timerId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#unregisterTimers)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, object: ?*C.QObject ```
    pub fn UnregisterTimers(self: ?*anyopaque, object: ?*anyopaque) bool {
        return C.QAbstractEventDispatcher_UnregisterTimers(@ptrCast(self), @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#registeredTimers)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, object: ?*C.QObject, allocator: std.mem.Allocator ```
    pub fn RegisteredTimers(self: ?*anyopaque, object: ?*anyopaque, allocator: std.mem.Allocator) []?*C.QAbstractEventDispatcher__TimerInfo {
        const _arr: C.struct_libqt_list = C.QAbstractEventDispatcher_RegisteredTimers(@ptrCast(self), @ptrCast(object));
        defer C.libqt_free(_arr.data);
        const _ret = allocator.alloc(?*C.QAbstractEventDispatcher__TimerInfo, _arr.len) catch @panic("Memory allocation failed");
        const _data: [*]?*C.QAbstractEventDispatcher__TimerInfo = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |_i| {
            _ret[_i] = _data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#remainingTime)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, timerId: i32 ```
    pub fn RemainingTime(self: ?*anyopaque, timerId: i32) i32 {
        return C.QAbstractEventDispatcher_RemainingTime(@ptrCast(self), @intCast(timerId));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#wakeUp)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn WakeUp(self: ?*anyopaque) void {
        C.QAbstractEventDispatcher_WakeUp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#interrupt)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn Interrupt(self: ?*anyopaque) void {
        C.QAbstractEventDispatcher_Interrupt(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#startingUp)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn StartingUp(self: ?*anyopaque) void {
        C.QAbstractEventDispatcher_StartingUp(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#closingDown)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn ClosingDown(self: ?*anyopaque) void {
        C.QAbstractEventDispatcher_ClosingDown(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#installNativeEventFilter)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, filterObj: ?*C.QAbstractNativeEventFilter ```
    pub fn InstallNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QAbstractEventDispatcher_InstallNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#removeNativeEventFilter)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, filterObj: ?*C.QAbstractNativeEventFilter ```
    pub fn RemoveNativeEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QAbstractEventDispatcher_RemoveNativeEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#filterNativeEvent)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, eventType: []u8, message: ?*anyopaque, result: ?*isize ```
    pub fn FilterNativeEvent(self: ?*anyopaque, eventType: []u8, message: ?*anyopaque, result: ?*anyopaque) bool {
        const eventType_str = C.struct_libqt_string{
            .len = eventType.len,
            .data = @constCast(eventType.ptr),
        };
        return C.QAbstractEventDispatcher_FilterNativeEvent(@ptrCast(self), eventType_str, message, @intCast(result));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#aboutToBlock)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn AboutToBlock(self: ?*anyopaque) void {
        C.QAbstractEventDispatcher_AboutToBlock(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractEventDispatcher, slot: fn (?*C.QAbstractEventDispatcher) callconv(.c) void ```
    pub fn OnAboutToBlock(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractEventDispatcher_Connect_AboutToBlock(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#awake)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn Awake(self: ?*anyopaque) void {
        C.QAbstractEventDispatcher_Awake(@ptrCast(self));
    }

    /// ``` self: ?*C.QAbstractEventDispatcher, slot: fn (?*C.QAbstractEventDispatcher) callconv(.c) void ```
    pub fn OnAwake(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        C.QAbstractEventDispatcher_Connect_Awake(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = @constCast(s.ptr);
        const c_Cstring = @constCast(c.ptr);
        const _str = C.QAbstractEventDispatcher_Tr2(s_Cstring, c_Cstring);
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
        const _str = C.QAbstractEventDispatcher_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer C.libqt_string_free(@constCast(&_str));
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Memory allocation failed");
        for (0.._str.len) |_i| {
            _ret[_i] = _str.data[_i];
        }
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qabstracteventdispatcher.html#instance)
    ///
    /// ``` thread: ?*C.QThread ```
    pub fn Instance1(thread: ?*anyopaque) ?*C.QAbstractEventDispatcher {
        return C.QAbstractEventDispatcher_Instance1(@ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, event: ?*C.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, watched: ?*C.QObject, event: ?*C.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return C.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractEventDispatcher, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        C.QObject_SetObjectName(@ptrCast(self), @constCast(name.ptr));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return C.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return C.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return C.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return C.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return C.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn Thread(self: ?*anyopaque) ?*C.QThread {
        return C.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, thread: ?*C.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) void {
        C.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return C.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        C.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractEventDispatcher, parent: ?*C.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        C.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, filterObj: ?*C.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        C.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, obj: ?*C.QObject ```
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
    /// ``` self: ?*C.QAbstractEventDispatcher, sender: ?*C.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        C.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        C.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, name: []const u8, value: ?*C.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) ?*C.QVariant {
        const name_Cstring = @constCast(name.ptr);
        return C.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, allocator: std.mem.Allocator ```
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
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn BindingStorage(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn BindingStorage2(self: ?*anyopaque) ?*C.QBindingStorage {
        return C.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
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
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn Parent(self: ?*anyopaque) ?*C.QObject {
        return C.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = @constCast(classname.ptr);
        return C.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        C.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: ?*C.QAbstractEventDispatcher, sender: ?*C.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i64) ?*C.QMetaObject__Connection {
        const signal_Cstring = @constCast(signal.ptr);
        const member_Cstring = @constCast(member.ptr);
        return C.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher, param1: ?*C.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        C.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ``` self: ?*C.QObject, slot: fn (?*C.QObject, ?*C.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        C.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAbstractEventDispatcher_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qabstracteventdispatcher-timerinfo.html
pub const qabstracteventdispatcher__timerinfo = struct {
    /// New constructs a new QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ``` other: ?*C.QAbstractEventDispatcher__TimerInfo ```
    pub fn New(other: ?*anyopaque) ?*C.QAbstractEventDispatcher__TimerInfo {
        return C.QAbstractEventDispatcher__TimerInfo_new(@ptrCast(other));
    }

    /// New2 constructs a new QAbstractEventDispatcher::TimerInfo object and invalidates the source QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ``` other: ?*C.QAbstractEventDispatcher__TimerInfo ```
    pub fn New2(other: ?*anyopaque) ?*C.QAbstractEventDispatcher__TimerInfo {
        return C.QAbstractEventDispatcher__TimerInfo_new2(@ptrCast(other));
    }

    /// New3 constructs a new QAbstractEventDispatcher::TimerInfo object.
    ///
    /// ``` id: i32, i: i32, t: qnamespace_enums.TimerType ```
    pub fn New3(id: i32, i: i32, t: i64) ?*C.QAbstractEventDispatcher__TimerInfo {
        return C.QAbstractEventDispatcher__TimerInfo_new3(@intCast(id), @intCast(i), @intCast(t));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: ?*QAbstractEventDispatcher__TimerInfo, other: ?*QAbstractEventDispatcher__TimerInfo ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QAbstractEventDispatcher__TimerInfo_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: ?*QAbstractEventDispatcher__TimerInfo, other: ?*QAbstractEventDispatcher__TimerInfo ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        C.QAbstractEventDispatcher__TimerInfo_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: ?*C.QAbstractEventDispatcher__TimerInfo ```
    pub fn QDelete(self: ?*anyopaque) void {
        C.QAbstractEventDispatcher__TimerInfo_Delete(@ptrCast(self));
    }
};
