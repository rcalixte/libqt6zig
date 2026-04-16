const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
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
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qdbusconnection_enums = @import("libqdbusconnection.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusinterface.html)
pub const QDBusInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusInterface,

    pub const _is_QDBusInterface = {};
    pub const _is_QDBusAbstractInterface = {};
    pub const _is_QDBusAbstractInterfaceBase = {};
    pub const _is_QObject = {};

    /// New constructs a new QDBusInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    pub fn New(service: []const u8, path: []const u8) QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QDBusInterface_new(service_str, path_str) };
    }

    /// New2 constructs a new QDBusInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` interface: []const u8 `
    ///
    pub fn New2(service: []const u8, path: []const u8, interface: []const u8) QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        return .{ .ptr = qtc.QDBusInterface_new2(service_str, path_str, interface_str) };
    }

    /// New3 constructs a new QDBusInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` interface: []const u8 `
    ///
    /// ` connection: QDBusConnection `
    ///
    pub fn New3(service: []const u8, path: []const u8, interface: []const u8, connection: anytype) QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        comptime _ = @TypeOf(connection)._is_QDBusConnection;
        return .{ .ptr = qtc.QDBusInterface_new3(service_str, path_str, interface_str, @ptrCast(connection.ptr)) };
    }

    /// New4 constructs a new QDBusInterface object.
    ///
    /// ## Parameter(s):
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` interface: []const u8 `
    ///
    /// ` connection: QDBusConnection `
    ///
    /// ` parent: QObject `
    ///
    pub fn New4(service: []const u8, path: []const u8, interface: []const u8, connection: anytype, parent: anytype) QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        comptime _ = @TypeOf(connection)._is_QDBusConnection;
        comptime _ = @TypeOf(parent)._is_QObject;
        return .{ .ptr = qtc.QDBusInterface_new4(service_str, path_str, interface_str, @ptrCast(connection.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn MetaObject(self: QDBusInterface) QMetaObject {
        return .{ .ptr = qtc.QDBusInterface_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QDBusInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDBusInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn SuperMetaObject(self: QDBusInterface) QMetaObject {
        return .{ .ptr = qtc.QDBusInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDBusInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDBusInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDBusInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDBusInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDBusInterface, callback: *const fn (QDBusInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDBusInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QDBusInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Inherited from QDBusAbstractInterface
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn IsValid(self: QDBusInterface) bool {
        return qtc.QDBusAbstractInterface_IsValid(@ptrCast(self.ptr));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn Connection(self: QDBusInterface) QDBusConnection {
        return .{ .ptr = qtc.QDBusAbstractInterface_Connection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#service)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Service(self: QDBusInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Service: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#path)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Path(self: QDBusInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Path: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#interface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Interface(self: QDBusInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Interface(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Interface: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn LastError(self: QDBusInterface) QDBusError {
        return .{ .ptr = qtc.QDBusAbstractInterface_LastError(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setTimeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` timeout: i32 `
    ///
    pub fn SetTimeout(self: QDBusInterface, timeout: i32) void {
        qtc.QDBusAbstractInterface_SetTimeout(@ptrCast(self.ptr), @bitCast(timeout));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#timeout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn Timeout(self: QDBusInterface) i32 {
        return qtc.QDBusAbstractInterface_Timeout(@ptrCast(self.ptr));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` enable: bool `
    ///
    pub fn SetInteractiveAuthorizationAllowed(self: QDBusInterface, enable: bool) void {
        qtc.QDBusAbstractInterface_SetInteractiveAuthorizationAllowed(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isInteractiveAuthorizationAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn IsInteractiveAuthorizationAllowed(self: QDBusInterface) bool {
        return qtc.QDBusAbstractInterface_IsInteractiveAuthorizationAllowed(@ptrCast(self.ptr));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` method: []const u8 `
    ///
    pub fn Call(self: QDBusInterface, method: []const u8) QDBusMessage {
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
    /// ` self: QDBusInterface `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    /// ` method: []const u8 `
    ///
    pub fn Call2(self: QDBusInterface, mode: i32, method: []const u8) QDBusMessage {
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
    /// ` self: QDBusInterface `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    /// ` method: []const u8 `
    ///
    /// ` args: []QVariant `
    ///
    pub fn CallWithArgumentList(self: QDBusInterface, mode: i32, method: []const u8, args: []QVariant) QDBusMessage {
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
    /// ` self: QDBusInterface `
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
    pub fn CallWithCallback(self: QDBusInterface, method: []const u8, args: []QVariant, receiver: anytype, member: [:0]const u8, errorSlot: [:0]const u8) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` method: []const u8 `
    ///
    /// ` args: []QVariant `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn CallWithCallback2(self: QDBusInterface, method: []const u8, args: []QVariant, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` method: []const u8 `
    ///
    pub fn AsyncCall(self: QDBusInterface, method: []const u8) QDBusPendingCall {
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
    /// ` self: QDBusInterface `
    ///
    /// ` method: []const u8 `
    ///
    /// ` args: []QVariant `
    ///
    pub fn AsyncCallWithArgumentList(self: QDBusInterface, method: []const u8, args: []QVariant) QDBusPendingCall {
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

    /// Inherited from QDBusAbstractInterface
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDBusAbstractInterface
    ///
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDBusInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusinterface.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDBusInterface, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn IsWidgetType(self: QDBusInterface) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn IsWindowType(self: QDBusInterface) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn IsQuickItemType(self: QDBusInterface) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn SignalsBlocked(self: QDBusInterface) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDBusInterface, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn Thread(self: QDBusInterface) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDBusInterface, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDBusInterface, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDBusInterface, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDBusInterface, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDBusInterface, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDBusInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdbusinterface.Children: Memory allocation failed");
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
    /// ` self: QDBusInterface `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QDBusInterface, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDBusInterface, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDBusInterface, obj: anytype) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDBusInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDBusInterface `
    ///
    pub fn Disconnect3(self: QDBusInterface) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDBusInterface, receiver: anytype) bool {
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
    /// ` self: QDBusInterface `
    ///
    pub fn DumpObjectTree(self: QDBusInterface) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn DumpObjectInfo(self: QDBusInterface) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDBusInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDBusInterface, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDBusInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdbusinterface.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdbusinterface.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDBusInterface `
    ///
    pub fn BindingStorage(self: QDBusInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn BindingStorage2(self: QDBusInterface) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn Destroyed(self: QDBusInterface) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDBusInterface, callback: *const fn (QDBusInterface) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn Parent(self: QDBusInterface) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDBusInterface, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn DeleteLater(self: QDBusInterface) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDBusInterface, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDBusInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDBusInterface `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDBusInterface, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDBusInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDBusInterface, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDBusInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDBusInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDBusInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDBusInterface, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDBusInterface, callback: *const fn (QDBusInterface, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QDBusInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDBusInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QDBusInterface, callback: *const fn (QDBusInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QDBusInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDBusInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QDBusInterface, callback: *const fn (QDBusInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDBusInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusInterface_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDBusInterface, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QDBusInterface, callback: *const fn (QDBusInterface, QEvent) callconv(.c) bool) void {
        qtc.QDBusInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDBusInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDBusInterface, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDBusInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QDBusInterface, callback: *const fn (QDBusInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDBusInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDBusInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDBusInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDBusInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDBusInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QDBusInterface, callback: *const fn (QDBusInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDBusInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDBusInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDBusInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDBusInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDBusInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QDBusInterface, callback: *const fn (QDBusInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDBusInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDBusInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDBusInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDBusInterface, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDBusInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QDBusInterface, callback: *const fn (QDBusInterface, QEvent) callconv(.c) void) void {
        qtc.QDBusInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropGet)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` propname: [:0]const u8 `
    ///
    pub fn InternalPropGet(self: QDBusInterface, propname: [:0]const u8) QVariant {
        const propname_Cstring = propname.ptr;
        return .{ .ptr = qtc.QDBusInterface_InternalPropGet(@ptrCast(self.ptr), propname_Cstring) };
    }

    /// ### DEPRECATED: Use `SuperInternalPropGet` instead
    ///
    pub const QBaseInternalPropGet = SuperInternalPropGet;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropGet)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` propname: [:0]const u8 `
    ///
    pub fn SuperInternalPropGet(self: QDBusInterface, propname: [:0]const u8) QVariant {
        const propname_Cstring = propname.ptr;
        return .{ .ptr = qtc.QDBusInterface_SuperInternalPropGet(@ptrCast(self.ptr), propname_Cstring) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropGet)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, propname: [*:0]const u8) callconv(.c) QVariant `
    ///
    pub fn OnInternalPropGet(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QDBusInterface_OnInternalPropGet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropSet)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` propname: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn InternalPropSet(self: QDBusInterface, propname: [:0]const u8, value: anytype) void {
        const propname_Cstring = propname.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDBusInterface_InternalPropSet(@ptrCast(self.ptr), propname_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `SuperInternalPropSet` instead
    ///
    pub const QBaseInternalPropSet = SuperInternalPropSet;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropSet)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` propname: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperInternalPropSet(self: QDBusInterface, propname: [:0]const u8, value: anytype) void {
        const propname_Cstring = propname.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDBusInterface_SuperInternalPropSet(@ptrCast(self.ptr), propname_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalPropSet)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, propname: [*:0]const u8, value: QVariant) callconv(.c) void `
    ///
    pub fn OnInternalPropSet(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDBusInterface_OnInternalPropSet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalConstCall)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    /// ` method: []const u8 `
    ///
    pub fn InternalConstCall(self: QDBusInterface, mode: i32, method: []const u8) QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusInterface_InternalConstCall(@ptrCast(self.ptr), @bitCast(mode), method_str) };
    }

    /// ### DEPRECATED: Use `SuperInternalConstCall` instead
    ///
    pub const QBaseInternalConstCall = SuperInternalConstCall;

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalConstCall)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    /// ` method: []const u8 `
    ///
    pub fn SuperInternalConstCall(self: QDBusInterface, mode: i32, method: []const u8) QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusInterface_SuperInternalConstCall(@ptrCast(self.ptr), @bitCast(mode), method_str) };
    }

    /// Inherited from QDBusAbstractInterface
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#internalConstCall)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, mode: qdbusconnection_enums.CallMode, method: [*:0]const u8) callconv(.c) QDBusMessage `
    ///
    pub fn OnInternalConstCall(self: QDBusInterface, callback: *const fn (QDBusInterface, i32, [*:0]const u8) callconv(.c) QDBusMessage) void {
        qtc.QDBusInterface_OnInternalConstCall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn Sender(self: QDBusInterface) QObject {
        return .{ .ptr = qtc.QDBusInterface_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn SuperSender(self: QDBusInterface) QObject {
        return .{ .ptr = qtc.QDBusInterface_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QDBusInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDBusInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn SenderSignalIndex(self: QDBusInterface) i32 {
        return qtc.QDBusInterface_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn SuperSenderSignalIndex(self: QDBusInterface) i32 {
        return qtc.QDBusInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QDBusInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDBusInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QDBusInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDBusInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDBusInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QDBusInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDBusInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface`
    ///
    /// ` callback: *const fn (self: QDBusInterface, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QDBusInterface, callback: *const fn (QDBusInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDBusInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusinterface.html#dtor.QDBusInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn Delete(self: QDBusInterface) void {
        qtc.QDBusInterface_Delete(@ptrCast(self.ptr));
    }
};
