const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdbusconnection_enums = @import("libqdbusconnection.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdbusconnectioninterface.html
pub const qdbusconnectioninterface = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.QDBusConnectionInterface_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.QDBusConnectionInterface, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusConnectionInterface_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.QDBusConnectionInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.QDBusConnectionInterface_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.QDBusConnectionInterface_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceRegistered)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, service: []const u8 ```
    pub fn ServiceRegistered(self: ?*anyopaque, service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        qtc.QDBusConnectionInterface_ServiceRegistered(@ptrCast(self), service_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceRegistered)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface, service: [*:0]const u8) callconv(.c) void ```
    pub fn OnServiceRegistered(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_ServiceRegistered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceUnregistered)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, service: []const u8 ```
    pub fn ServiceUnregistered(self: ?*anyopaque, service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        qtc.QDBusConnectionInterface_ServiceUnregistered(@ptrCast(self), service_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceUnregistered)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface, service: [*:0]const u8) callconv(.c) void ```
    pub fn OnServiceUnregistered(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_ServiceUnregistered(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceOwnerChanged)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, name: []const u8, oldOwner: []const u8, newOwner: []const u8 ```
    pub fn ServiceOwnerChanged(self: ?*anyopaque, name: []const u8, oldOwner: []const u8, newOwner: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const oldOwner_str = qtc.libqt_string{
            .len = oldOwner.len,
            .data = oldOwner.ptr,
        };
        const newOwner_str = qtc.libqt_string{
            .len = newOwner.len,
            .data = newOwner.ptr,
        };
        qtc.QDBusConnectionInterface_ServiceOwnerChanged(@ptrCast(self), name_str, oldOwner_str, newOwner_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceOwnerChanged)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface, name: [*:0]const u8, oldOwner: [*:0]const u8, newOwner: [*:0]const u8) callconv(.c) void ```
    pub fn OnServiceOwnerChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_ServiceOwnerChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#callWithCallbackFailed)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, errorVal: QtC.QDBusError, call: QtC.QDBusMessage ```
    pub fn CallWithCallbackFailed(self: ?*anyopaque, errorVal: ?*anyopaque, call: ?*anyopaque) void {
        qtc.QDBusConnectionInterface_CallWithCallbackFailed(@ptrCast(self), @ptrCast(errorVal), @ptrCast(call));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#callWithCallbackFailed)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface, errorVal: QtC.QDBusError, call: QtC.QDBusMessage) callconv(.c) void ```
    pub fn OnCallWithCallbackFailed(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_CallWithCallbackFailed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameAcquired)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, param1: []const u8 ```
    pub fn NameAcquired(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QDBusConnectionInterface_NameAcquired(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameAcquired)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnNameAcquired(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_NameAcquired(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameLost)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, param1: []const u8 ```
    pub fn NameLost(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QDBusConnectionInterface_NameLost(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameLost)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface, param1: [*:0]const u8) callconv(.c) void ```
    pub fn OnNameLost(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_NameLost(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameOwnerChanged)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, param1: []const u8, param2: []const u8, param3: []const u8 ```
    pub fn NameOwnerChanged(self: ?*anyopaque, param1: []const u8, param2: []const u8, param3: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const param2_str = qtc.libqt_string{
            .len = param2.len,
            .data = param2.ptr,
        };
        const param3_str = qtc.libqt_string{
            .len = param3.len,
            .data = param3.ptr,
        };
        qtc.QDBusConnectionInterface_NameOwnerChanged(@ptrCast(self), param1_str, param2_str, param3_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameOwnerChanged)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface, param1: [*:0]const u8, param2: [*:0]const u8, param3: [*:0]const u8) callconv(.c) void ```
    pub fn OnNameOwnerChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_NameOwnerChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QDBusConnectionInterface_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.QDBusConnectionInterface_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isValid)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QDBusAbstractInterface_IsValid(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connection)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn Connection(self: ?*anyopaque) QtC.QDBusConnection {
        return qtc.QDBusAbstractInterface_Connection(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#service)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, allocator: std.mem.Allocator ```
    pub fn Service(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusAbstractInterface_Service(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#path)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, allocator: std.mem.Allocator ```
    pub fn Path(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusAbstractInterface_Path(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#interface)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, allocator: std.mem.Allocator ```
    pub fn Interface(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusAbstractInterface_Interface(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Interface: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#lastError)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn LastError(self: ?*anyopaque) QtC.QDBusError {
        return qtc.QDBusAbstractInterface_LastError(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setTimeout)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, timeout: i32 ```
    pub fn SetTimeout(self: ?*anyopaque, timeout: i32) void {
        qtc.QDBusAbstractInterface_SetTimeout(@ptrCast(self), @intCast(timeout));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#timeout)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn Timeout(self: ?*anyopaque) i32 {
        return qtc.QDBusAbstractInterface_Timeout(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setInteractiveAuthorizationAllowed)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, enable: bool ```
    pub fn SetInteractiveAuthorizationAllowed(self: ?*anyopaque, enable: bool) void {
        qtc.QDBusAbstractInterface_SetInteractiveAuthorizationAllowed(@ptrCast(self), enable);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isInteractiveAuthorizationAllowed)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn IsInteractiveAuthorizationAllowed(self: ?*anyopaque) bool {
        return qtc.QDBusAbstractInterface_IsInteractiveAuthorizationAllowed(@ptrCast(self));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, method: []const u8 ```
    pub fn Call(self: ?*anyopaque, method: []const u8) QtC.QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return qtc.QDBusAbstractInterface_Call(@ptrCast(self), method_str);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, mode: qdbusconnection_enums.CallMode, method: []const u8 ```
    pub fn Call2(self: ?*anyopaque, mode: i32, method: []const u8) QtC.QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return qtc.QDBusAbstractInterface_Call2(@ptrCast(self), @intCast(mode), method_str);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithArgumentList)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, mode: qdbusconnection_enums.CallMode, method: []const u8, args: []QtC.QVariant ```
    pub fn CallWithArgumentList(self: ?*anyopaque, mode: i32, method: []const u8, args: []QtC.QVariant) QtC.QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return qtc.QDBusAbstractInterface_CallWithArgumentList(@ptrCast(self), @intCast(mode), method_str, args_list);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCall)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, method: []const u8 ```
    pub fn AsyncCall(self: ?*anyopaque, method: []const u8) QtC.QDBusPendingCall {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return qtc.QDBusAbstractInterface_AsyncCall(@ptrCast(self), method_str);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCallWithArgumentList)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, method: []const u8, args: []QtC.QVariant ```
    pub fn AsyncCallWithArgumentList(self: ?*anyopaque, method: []const u8, args: []QtC.QVariant) QtC.QDBusPendingCall {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return qtc.QDBusAbstractInterface_AsyncCallWithArgumentList(@ptrCast(self), method_str, args_list);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QObject_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, name: []const u8 ```
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
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("qdbusconnectioninterface.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, obj: QtC.QObject ```
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
    /// ``` self: QtC.QDBusConnectionInterface, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
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
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdbusconnectioninterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdbusconnectioninterface.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.QDBusConnectionInterface ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, interval: i32, timerType: qnamespace_enums.TimerType ```
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
    /// ``` self: QtC.QDBusConnectionInterface, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.QDBusConnectionInterface, slot: fn (self: QtC.QDBusConnectionInterface, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }
};

/// https://doc.qt.io/qt-6/qdbusconnectioninterface.html#types
pub const enums = struct {
    pub const ServiceQueueOptions = enum {
        pub const DontQueueService: i32 = 0;
        pub const QueueService: i32 = 1;
        pub const ReplaceExistingService: i32 = 2;
    };

    pub const ServiceReplacementOptions = enum {
        pub const DontAllowReplacement: i32 = 0;
        pub const AllowReplacement: i32 = 1;
    };

    pub const RegisterServiceReply = enum {
        pub const ServiceNotRegistered: i32 = 0;
        pub const ServiceRegistered: i32 = 1;
        pub const ServiceQueued: i32 = 2;
    };
};
