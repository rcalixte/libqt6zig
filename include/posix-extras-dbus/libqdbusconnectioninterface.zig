const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QDBusConnection = @import("libqt6").QDBusConnection;
const QDBusError = @import("libqt6").QDBusError;
const QDBusMessage = @import("libqt6").QDBusMessage;
const QDBusPendingCall = @import("libqt6").QDBusPendingCall;
const QEvent = @import("libqt6").QEvent;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QVariant = @import("libqt6").QVariant;
const qdbusconnection_enums = @import("libqdbusconnection.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html)
pub const QDBusConnectionInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusConnectionInterface,

    pub const _is_QDBusConnectionInterface = {};
    pub const _is_QDBusAbstractInterface = {};
    pub const _is_QDBusAbstractInterfaceBase = {};
    pub const _is_QObject = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn MetaObject(self: QDBusConnectionInterface) QMetaObject {
        return .{ .ptr = qtc.QDBusConnectionInterface_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDBusConnectionInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusConnectionInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDBusConnectionInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusConnectionInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceRegistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` service: []const u8 `
    ///
    pub fn ServiceRegistered(self: QDBusConnectionInterface, service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        qtc.QDBusConnectionInterface_ServiceRegistered(@ptrCast(self.ptr), service_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceRegistered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, service: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnServiceRegistered(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_ServiceRegistered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceUnregistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` service: []const u8 `
    ///
    pub fn ServiceUnregistered(self: QDBusConnectionInterface, service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        qtc.QDBusConnectionInterface_ServiceUnregistered(@ptrCast(self.ptr), service_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceUnregistered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, service: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnServiceUnregistered(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_ServiceUnregistered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceOwnerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` name: []const u8 `
    ///
    /// ` oldOwner: []const u8 `
    ///
    /// ` newOwner: []const u8 `
    ///
    pub fn ServiceOwnerChanged(self: QDBusConnectionInterface, name: []const u8, oldOwner: []const u8, newOwner: []const u8) void {
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
        qtc.QDBusConnectionInterface_ServiceOwnerChanged(@ptrCast(self.ptr), name_str, oldOwner_str, newOwner_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceOwnerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, name: [*:0]const u8, oldOwner: [*:0]const u8, newOwner: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnServiceOwnerChanged(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_ServiceOwnerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#callWithCallbackFailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` errorVal: QDBusError `
    ///
    /// ` call: QDBusMessage `
    ///
    pub fn CallWithCallbackFailed(self: QDBusConnectionInterface, errorVal: anytype, call: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QDBusError;
        comptime _ = @TypeOf(call)._is_QDBusMessage;
        qtc.QDBusConnectionInterface_CallWithCallbackFailed(@ptrCast(self.ptr), @ptrCast(errorVal.ptr), @ptrCast(call.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#callWithCallbackFailed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, errorVal: QDBusError, call: QDBusMessage) callconv(.c) void `
    ///
    pub fn OnCallWithCallbackFailed(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, QDBusError, QDBusMessage) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_CallWithCallbackFailed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameAcquired)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn NameAcquired(self: QDBusConnectionInterface, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QDBusConnectionInterface_NameAcquired(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameAcquired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnNameAcquired(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_NameAcquired(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameLost)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn NameLost(self: QDBusConnectionInterface, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QDBusConnectionInterface_NameLost(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameLost)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnNameLost(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_NameLost(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameOwnerChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` param1: []const u8 `
    ///
    /// ` param2: []const u8 `
    ///
    /// ` param3: []const u8 `
    ///
    pub fn NameOwnerChanged(self: QDBusConnectionInterface, param1: []const u8, param2: []const u8, param3: []const u8) void {
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
        qtc.QDBusConnectionInterface_NameOwnerChanged(@ptrCast(self.ptr), param1_str, param2_str, param3_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameOwnerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, param1: [*:0]const u8, param2: [*:0]const u8, param3: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnNameOwnerChanged(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_NameOwnerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn IsValid(self: QDBusConnectionInterface) bool {
        return qtc.QDBusAbstractInterface_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn Connection(self: QDBusConnectionInterface) QDBusConnection {
        return .{ .ptr = qtc.QDBusAbstractInterface_Connection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#service)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Service(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#interface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Interface(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Interface(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.Interface: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn LastError(self: QDBusConnectionInterface) QDBusError {
        return .{ .ptr = qtc.QDBusAbstractInterface_LastError(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SetTimeout(self: QDBusConnectionInterface, timeout: i32) void {
        qtc.QDBusAbstractInterface_SetTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#timeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn Timeout(self: QDBusConnectionInterface) i32 {
        return qtc.QDBusAbstractInterface_Timeout(@ptrCast(self.ptr));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` enable: bool `
    ///
    pub fn SetInteractiveAuthorizationAllowed(self: QDBusConnectionInterface, enable: bool) void {
        qtc.QDBusAbstractInterface_SetInteractiveAuthorizationAllowed(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn IsInteractiveAuthorizationAllowed(self: QDBusConnectionInterface) bool {
        return qtc.QDBusAbstractInterface_IsInteractiveAuthorizationAllowed(@ptrCast(self.ptr));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` method: []const u8 `
    ///
    pub fn Call(self: QDBusConnectionInterface, method: []const u8) QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusAbstractInterface_Call(@ptrCast(self.ptr), method_str) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    /// ` method: []const u8 `
    ///
    pub fn Call2(self: QDBusConnectionInterface, mode: i32, method: []const u8) QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusAbstractInterface_Call2(@ptrCast(self.ptr), @bitCast(mode), method_str) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithArgumentList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    /// ` method: []const u8 `
    ///
    /// ` args: []QVariant `
    ///
    pub fn CallWithArgumentList(self: QDBusConnectionInterface, mode: i32, method: []const u8, args: []QVariant) QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return .{ .ptr = qtc.QDBusAbstractInterface_CallWithArgumentList(@ptrCast(self.ptr), @bitCast(mode), method_str, args_list) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithCallback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` method: []const u8 `
    ///
    /// ` args: []QVariant `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` errorSlot: [:0]const u8 `
    ///
    pub fn CallWithCallback(self: QDBusConnectionInterface, method: []const u8, args: []QVariant, receiver: anytype, member: [:0]const u8, errorSlot: [:0]const u8) bool {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        const errorSlot_Cstring = errorSlot.ptr;
        return qtc.QDBusAbstractInterface_CallWithCallback(@ptrCast(self.ptr), method_str, args_list, @ptrCast(receiver.ptr), member_Cstring, errorSlot_Cstring);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithCallback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` method: []const u8 `
    ///
    /// ` args: []QVariant `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn CallWithCallback2(self: QDBusConnectionInterface, method: []const u8, args: []QVariant, receiver: anytype, member: [:0]const u8) bool {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QDBusAbstractInterface_CallWithCallback2(@ptrCast(self.ptr), method_str, args_list, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` method: []const u8 `
    ///
    pub fn AsyncCall(self: QDBusConnectionInterface, method: []const u8) QDBusPendingCall {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusAbstractInterface_AsyncCall(@ptrCast(self.ptr), method_str) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCallWithArgumentList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` method: []const u8 `
    ///
    /// ` args: []QVariant `
    ///
    pub fn AsyncCallWithArgumentList(self: QDBusConnectionInterface, method: []const u8, args: []QVariant) QDBusPendingCall {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        const args_list = qtc.libqt_list{
            .len = args.len,
            .data = @ptrCast(args.ptr),
        };
        return .{ .ptr = qtc.QDBusAbstractInterface_AsyncCallWithArgumentList(@ptrCast(self.ptr), method_str, args_list) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDBusConnectionInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QObject_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDBusConnectionInterface, watched: anytype, event: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnectioninterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDBusConnectionInterface, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn IsWidgetType(self: QDBusConnectionInterface) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn IsWindowType(self: QDBusConnectionInterface) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn IsQuickItemType(self: QDBusConnectionInterface) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn SignalsBlocked(self: QDBusConnectionInterface) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDBusConnectionInterface, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn Thread(self: QDBusConnectionInterface) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDBusConnectionInterface, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDBusConnectionInterface, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDBusConnectionInterface, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDBusConnectionInterface, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDBusConnectionInterface, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdbusconnectioninterface.Children: Memory allocation failed");
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDBusConnectionInterface, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDBusConnectionInterface, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDBusConnectionInterface, obj: anytype) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDBusConnectionInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn Disconnect3(self: QDBusConnectionInterface) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDBusConnectionInterface, receiver: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn DumpObjectTree(self: QDBusConnectionInterface) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn DumpObjectInfo(self: QDBusConnectionInterface) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDBusConnectionInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDBusConnectionInterface, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDBusConnectionInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn BindingStorage(self: QDBusConnectionInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn BindingStorage2(self: QDBusConnectionInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn Destroyed(self: QDBusConnectionInterface) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn Parent(self: QDBusConnectionInterface) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDBusConnectionInterface, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn DeleteLater(self: QDBusConnectionInterface) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDBusConnectionInterface, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDBusConnectionInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDBusConnectionInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDBusConnectionInterface, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDBusConnectionInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDBusConnectionInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDBusConnectionInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDBusConnectionInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, QObject) callconv(.c) void) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#public-types)
pub const enums = struct {
    pub const ServiceQueueOptions = enum(i32) {
        pub const DontQueueService: i32 = 0;
        pub const QueueService: i32 = 1;
        pub const ReplaceExistingService: i32 = 2;
    };

    pub const ServiceReplacementOptions = enum(i32) {
        pub const DontAllowReplacement: i32 = 0;
        pub const AllowReplacement: i32 = 1;
    };

    pub const RegisterServiceReply = enum(i32) {
        pub const ServiceNotRegistered: i32 = 0;
        pub const ServiceRegistered: i32 = 1;
        pub const ServiceQueued: i32 = 2;
    };
};
