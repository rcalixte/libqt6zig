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

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn metaObject(self: QDBusConnectionInterface) QMetaObject {
        return .{ .ptr = qtc.QDBusConnectionInterface_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDBusConnectionInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusConnectionInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QDBusConnectionInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusConnectionInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusConnectionInterface.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceRegistered` instead
    ///
    pub const ServiceRegistered = serviceRegistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceRegistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` _service: []const u8 `
    ///
    pub fn serviceRegistered(self: QDBusConnectionInterface, _service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = _service.len,
            .data = _service.ptr,
        };
        qtc.QDBusConnectionInterface_ServiceRegistered(@ptrCast(self.ptr), service_str);
    }

    /// ### DEPRECATED: Use `onServiceRegistered` instead
    ///
    pub const OnServiceRegistered = onServiceRegistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceRegistered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, service: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onServiceRegistered(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_ServiceRegistered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `serviceUnregistered` instead
    ///
    pub const ServiceUnregistered = serviceUnregistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceUnregistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` _service: []const u8 `
    ///
    pub fn serviceUnregistered(self: QDBusConnectionInterface, _service: []const u8) void {
        const service_str = qtc.libqt_string{
            .len = _service.len,
            .data = _service.ptr,
        };
        qtc.QDBusConnectionInterface_ServiceUnregistered(@ptrCast(self.ptr), service_str);
    }

    /// ### DEPRECATED: Use `onServiceUnregistered` instead
    ///
    pub const OnServiceUnregistered = onServiceUnregistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceUnregistered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, service: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onServiceUnregistered(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_ServiceUnregistered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `serviceOwnerChanged` instead
    ///
    pub const ServiceOwnerChanged = serviceOwnerChanged;

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
    pub fn serviceOwnerChanged(self: QDBusConnectionInterface, name: []const u8, oldOwner: []const u8, newOwner: []const u8) void {
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

    /// ### DEPRECATED: Use `onServiceOwnerChanged` instead
    ///
    pub const OnServiceOwnerChanged = onServiceOwnerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#serviceOwnerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, name: [*:0]const u8, oldOwner: [*:0]const u8, newOwner: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onServiceOwnerChanged(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_ServiceOwnerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `callWithCallbackFailed` instead
    ///
    pub const CallWithCallbackFailed = callWithCallbackFailed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#callWithCallbackFailed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` errorVal: QDBusError `
    ///
    /// ` _call: QDBusMessage `
    ///
    pub fn callWithCallbackFailed(self: QDBusConnectionInterface, errorVal: anytype, _call: anytype) void {
        comptime _ = @TypeOf(errorVal)._is_QDBusError;
        comptime _ = @TypeOf(_call)._is_QDBusMessage;
        qtc.QDBusConnectionInterface_CallWithCallbackFailed(@ptrCast(self.ptr), @ptrCast(errorVal.ptr), @ptrCast(_call.ptr));
    }

    /// ### DEPRECATED: Use `onCallWithCallbackFailed` instead
    ///
    pub const OnCallWithCallbackFailed = onCallWithCallbackFailed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#callWithCallbackFailed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, errorVal: QDBusError, call: QDBusMessage) callconv(.c) void `
    ///
    pub fn onCallWithCallbackFailed(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, QDBusError, QDBusMessage) callconv(.c) void) void {
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

    /// ### DEPRECATED: Use `onNameAcquired` instead
    ///
    pub const OnNameAcquired = onNameAcquired;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameAcquired)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onNameAcquired(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
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

    /// ### DEPRECATED: Use `onNameLost` instead
    ///
    pub const OnNameLost = onNameLost;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameLost)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onNameLost(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
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

    /// ### DEPRECATED: Use `onNameOwnerChanged` instead
    ///
    pub const OnNameOwnerChanged = onNameOwnerChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnectioninterface.html#NameOwnerChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, param1: [*:0]const u8, param2: [*:0]const u8, param3: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onNameOwnerChanged(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QDBusConnectionInterface_Connect_NameOwnerChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusConnectionInterface.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusConnectionInterface.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn isValid(self: QDBusConnectionInterface) bool {
        return qtc.QDBusAbstractInterface_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connection` instead
    ///
    pub const Connection = connection;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn connection(self: QDBusConnectionInterface) QDBusConnection {
        return .{ .ptr = qtc.QDBusAbstractInterface_Connection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `service` instead
    ///
    pub const Service = service;

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
    pub fn service(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusConnectionInterface.service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `path` instead
    ///
    pub const Path = path;

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
    pub fn path(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusConnectionInterface.path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `interface` instead
    ///
    pub const Interface = interface;

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
    pub fn interface(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Interface(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusConnectionInterface.interface: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn lastError(self: QDBusConnectionInterface) QDBusError {
        return .{ .ptr = qtc.QDBusAbstractInterface_LastError(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTimeout` instead
    ///
    pub const SetTimeout = setTimeout;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` _timeout: i32 `
    ///
    pub fn setTimeout(self: QDBusConnectionInterface, _timeout: i32) void {
        qtc.QDBusAbstractInterface_SetTimeout(@ptrCast(self.ptr), @bitCast(_timeout));
    }

    /// ### DEPRECATED: Use `timeout` instead
    ///
    pub const Timeout = timeout;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#timeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn timeout(self: QDBusConnectionInterface) i32 {
        return qtc.QDBusAbstractInterface_Timeout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInteractiveAuthorizationAllowed` instead
    ///
    pub const SetInteractiveAuthorizationAllowed = setInteractiveAuthorizationAllowed;

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
    pub fn setInteractiveAuthorizationAllowed(self: QDBusConnectionInterface, enable: bool) void {
        qtc.QDBusAbstractInterface_SetInteractiveAuthorizationAllowed(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isInteractiveAuthorizationAllowed` instead
    ///
    pub const IsInteractiveAuthorizationAllowed = isInteractiveAuthorizationAllowed;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn isInteractiveAuthorizationAllowed(self: QDBusConnectionInterface) bool {
        return qtc.QDBusAbstractInterface_IsInteractiveAuthorizationAllowed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `call` instead
    ///
    pub const Call = call;

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
    pub fn call(self: QDBusConnectionInterface, method: []const u8) QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusAbstractInterface_Call(@ptrCast(self.ptr), method_str) };
    }

    /// ### DEPRECATED: Use `call2` instead
    ///
    pub const Call2 = call2;

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
    pub fn call2(self: QDBusConnectionInterface, mode: i32, method: []const u8) QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusAbstractInterface_Call2(@ptrCast(self.ptr), @bitCast(mode), method_str) };
    }

    /// ### DEPRECATED: Use `callWithArgumentList` instead
    ///
    pub const CallWithArgumentList = callWithArgumentList;

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
    pub fn callWithArgumentList(self: QDBusConnectionInterface, mode: i32, method: []const u8, args: []QVariant) QDBusMessage {
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

    /// ### DEPRECATED: Use `callWithCallback` instead
    ///
    pub const CallWithCallback = callWithCallback;

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
    pub fn callWithCallback(self: QDBusConnectionInterface, method: []const u8, args: []QVariant, receiver: anytype, member: [:0]const u8, errorSlot: [:0]const u8) bool {
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

    /// ### DEPRECATED: Use `callWithCallback2` instead
    ///
    pub const CallWithCallback2 = callWithCallback2;

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
    pub fn callWithCallback2(self: QDBusConnectionInterface, method: []const u8, args: []QVariant, receiver: anytype, member: [:0]const u8) bool {
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

    /// ### DEPRECATED: Use `asyncCall` instead
    ///
    pub const AsyncCall = asyncCall;

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
    pub fn asyncCall(self: QDBusConnectionInterface, method: []const u8) QDBusPendingCall {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusAbstractInterface_AsyncCall(@ptrCast(self.ptr), method_str) };
    }

    /// ### DEPRECATED: Use `asyncCallWithArgumentList` instead
    ///
    pub const AsyncCallWithArgumentList = asyncCallWithArgumentList;

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
    pub fn asyncCallWithArgumentList(self: QDBusConnectionInterface, method: []const u8, args: []QVariant) QDBusPendingCall {
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

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDBusConnectionInterface, _event: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDBusConnectionInterface, watched: anytype, _event: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusConnectionInterface.objectName: Memory allocation failed");
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDBusConnectionInterface, name: []const u8) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn isWidgetType(self: QDBusConnectionInterface) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn isWindowType(self: QDBusConnectionInterface) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn isQuickItemType(self: QDBusConnectionInterface) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn signalsBlocked(self: QDBusConnectionInterface) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDBusConnectionInterface, b: bool) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn thread(self: QDBusConnectionInterface) QThread {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDBusConnectionInterface, _thread: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDBusConnectionInterface, interval: i32) i32 {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDBusConnectionInterface, time: i64) i32 {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDBusConnectionInterface, id: i32) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDBusConnectionInterface, id: i32) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDBusConnectionInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDBusConnectionInterface.children: Memory allocation failed");
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDBusConnectionInterface, _parent: anytype) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDBusConnectionInterface, filterObj: anytype) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDBusConnectionInterface, obj: anytype) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDBusConnectionInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn disconnect3(self: QDBusConnectionInterface) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDBusConnectionInterface, receiver: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn dumpObjectTree(self: QDBusConnectionInterface) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn dumpObjectInfo(self: QDBusConnectionInterface) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDBusConnectionInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDBusConnectionInterface, name: [:0]const u8) QVariant {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDBusConnectionInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDBusConnectionInterface.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDBusConnectionInterface.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn bindingStorage(self: QDBusConnectionInterface) QBindingStorage {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn bindingStorage2(self: QDBusConnectionInterface) QBindingStorage {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn destroyed(self: QDBusConnectionInterface) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface) callconv(.c) void) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn parent(self: QDBusConnectionInterface) QObject {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDBusConnectionInterface, classname: [:0]const u8) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    pub fn deleteLater(self: QDBusConnectionInterface) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDBusConnectionInterface, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDBusConnectionInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDBusConnectionInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDBusConnectionInterface, signal: [:0]const u8) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDBusConnectionInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDBusConnectionInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDBusConnectionInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDBusConnectionInterface, param1: anytype) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, QObject) callconv(.c) void) void {
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
    /// ` self: QDBusConnectionInterface `
    ///
    /// ` callback: *const fn (self: QDBusConnectionInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDBusConnectionInterface, callback: *const fn (QDBusConnectionInterface, [*:0]const u8) callconv(.c) void) void {
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
