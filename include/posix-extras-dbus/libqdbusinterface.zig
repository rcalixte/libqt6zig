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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _service: []const u8 `
    ///
    /// ` _path: []const u8 `
    ///
    pub fn new(_service: []const u8, _path: []const u8) QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = _service.len,
            .data = _service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        return .{ .ptr = qtc.QDBusInterface_new(service_str, path_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _service: []const u8 `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    pub fn new2(_service: []const u8, _path: []const u8, _interface: []const u8) QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = _service.len,
            .data = _service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        return .{ .ptr = qtc.QDBusInterface_new2(service_str, path_str, interface_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QDBusInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _service: []const u8 `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` _connection: QDBusConnection `
    ///
    pub fn new3(_service: []const u8, _path: []const u8, _interface: []const u8, _connection: anytype) QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = _service.len,
            .data = _service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        comptime _ = @TypeOf(_connection)._is_QDBusConnection;
        return .{ .ptr = qtc.QDBusInterface_new3(service_str, path_str, interface_str, @ptrCast(_connection.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QDBusInterface object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _service: []const u8 `
    ///
    /// ` _path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` _connection: QDBusConnection `
    ///
    /// ` _parent: QObject `
    ///
    pub fn new4(_service: []const u8, _path: []const u8, _interface: []const u8, _connection: anytype, _parent: anytype) QDBusInterface {
        const service_str = qtc.libqt_string{
            .len = _service.len,
            .data = _service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = _path.len,
            .data = _path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        comptime _ = @TypeOf(_connection)._is_QDBusConnection;
        comptime _ = @TypeOf(_parent)._is_QObject;
        return .{ .ptr = qtc.QDBusInterface_new4(service_str, path_str, interface_str, @ptrCast(_connection.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn metaObject(self: QDBusInterface) QMetaObject {
        return .{ .ptr = qtc.QDBusInterface_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: QDBusInterface, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDBusInterface_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn superMetaObject(self: QDBusInterface) QMetaObject {
        return .{ .ptr = qtc.QDBusInterface_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QDBusInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusInterface_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDBusInterface_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QDBusInterface, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDBusInterface_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QDBusInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusInterface_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QDBusInterface, callback: *const fn (QDBusInterface, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDBusInterface_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QDBusInterface, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDBusInterface_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

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
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusInterface.tr: Memory allocation failed");
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
    /// ` self: QDBusInterface `
    ///
    pub fn isValid(self: QDBusInterface) bool {
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
    /// ` self: QDBusInterface `
    ///
    pub fn connection(self: QDBusInterface) QDBusConnection {
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
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn service(self: QDBusInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Service(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusInterface.service: Memory allocation failed");
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
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn path(self: QDBusInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Path(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusInterface.path: Memory allocation failed");
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
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn interface(self: QDBusInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusAbstractInterface_Interface(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusInterface.interface: Memory allocation failed");
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
    /// ` self: QDBusInterface `
    ///
    pub fn lastError(self: QDBusInterface) QDBusError {
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
    /// ` self: QDBusInterface `
    ///
    /// ` _timeout: i32 `
    ///
    pub fn setTimeout(self: QDBusInterface, _timeout: i32) void {
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
    /// ` self: QDBusInterface `
    ///
    pub fn timeout(self: QDBusInterface) i32 {
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
    /// ` self: QDBusInterface `
    ///
    /// ` enable: bool `
    ///
    pub fn setInteractiveAuthorizationAllowed(self: QDBusInterface, enable: bool) void {
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
    /// ` self: QDBusInterface `
    ///
    pub fn isInteractiveAuthorizationAllowed(self: QDBusInterface) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` method: []const u8 `
    ///
    pub fn call(self: QDBusInterface, method: []const u8) QDBusMessage {
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
    /// ` self: QDBusInterface `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    /// ` method: []const u8 `
    ///
    pub fn call2(self: QDBusInterface, mode: i32, method: []const u8) QDBusMessage {
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
    /// ` self: QDBusInterface `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    /// ` method: []const u8 `
    ///
    /// ` args: []QVariant `
    ///
    pub fn callWithArgumentList(self: QDBusInterface, mode: i32, method: []const u8, args: []QVariant) QDBusMessage {
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
    pub fn callWithCallback(self: QDBusInterface, method: []const u8, args: []QVariant, receiver: anytype, member: [:0]const u8, errorSlot: [:0]const u8) bool {
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
    pub fn callWithCallback2(self: QDBusInterface, method: []const u8, args: []QVariant, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` method: []const u8 `
    ///
    pub fn asyncCall(self: QDBusInterface, method: []const u8) QDBusPendingCall {
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
    /// ` self: QDBusInterface `
    ///
    /// ` method: []const u8 `
    ///
    /// ` args: []QVariant `
    ///
    pub fn asyncCallWithArgumentList(self: QDBusInterface, method: []const u8, args: []QVariant) QDBusPendingCall {
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

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusInterface.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusInterface.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
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
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QDBusInterface, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusInterface.objectName: Memory allocation failed");
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
    /// ` self: QDBusInterface `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QDBusInterface, name: []const u8) void {
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
    /// ` self: QDBusInterface `
    ///
    pub fn isWidgetType(self: QDBusInterface) bool {
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
    /// ` self: QDBusInterface `
    ///
    pub fn isWindowType(self: QDBusInterface) bool {
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
    /// ` self: QDBusInterface `
    ///
    pub fn isQuickItemType(self: QDBusInterface) bool {
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
    /// ` self: QDBusInterface `
    ///
    pub fn signalsBlocked(self: QDBusInterface) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QDBusInterface, b: bool) bool {
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
    /// ` self: QDBusInterface `
    ///
    pub fn thread(self: QDBusInterface) QThread {
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
    /// ` self: QDBusInterface `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QDBusInterface, _thread: anytype) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QDBusInterface, interval: i32) i32 {
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
    /// ` self: QDBusInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QDBusInterface, time: i64) i32 {
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
    /// ` self: QDBusInterface `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QDBusInterface, id: i32) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QDBusInterface, id: i32) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QDBusInterface, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QDBusInterface.children: Memory allocation failed");
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
    /// ` self: QDBusInterface `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QDBusInterface, _parent: anytype) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QDBusInterface, filterObj: anytype) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QDBusInterface, obj: anytype) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QDBusInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDBusInterface `
    ///
    pub fn disconnect3(self: QDBusInterface) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QDBusInterface, receiver: anytype) bool {
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
    /// ` self: QDBusInterface `
    ///
    pub fn dumpObjectTree(self: QDBusInterface) void {
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
    /// ` self: QDBusInterface `
    ///
    pub fn dumpObjectInfo(self: QDBusInterface) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QDBusInterface, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QDBusInterface, name: [:0]const u8) QVariant {
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
    /// ` self: QDBusInterface `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QDBusInterface, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QDBusInterface.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QDBusInterface.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDBusInterface `
    ///
    pub fn bindingStorage(self: QDBusInterface) QBindingStorage {
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
    /// ` self: QDBusInterface `
    ///
    pub fn bindingStorage2(self: QDBusInterface) QBindingStorage {
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
    /// ` self: QDBusInterface `
    ///
    pub fn destroyed(self: QDBusInterface) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QDBusInterface, callback: *const fn (QDBusInterface) callconv(.c) void) void {
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
    /// ` self: QDBusInterface `
    ///
    pub fn parent(self: QDBusInterface) QObject {
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
    /// ` self: QDBusInterface `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QDBusInterface, classname: [:0]const u8) bool {
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
    /// ` self: QDBusInterface `
    ///
    pub fn deleteLater(self: QDBusInterface) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QDBusInterface, interval: i32, timerType: i32) i32 {
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
    /// ` self: QDBusInterface `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QDBusInterface, time: i64, timerType: i32) i32 {
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
    /// ` self: QDBusInterface `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QDBusInterface, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDBusInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QDBusInterface, signal: [:0]const u8) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QDBusInterface, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QDBusInterface, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QDBusInterface, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDBusInterface `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QDBusInterface, param1: anytype) void {
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
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QDBusInterface, callback: *const fn (QDBusInterface, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: QDBusInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusInterface_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: QDBusInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusInterface_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: QDBusInterface, callback: *const fn (QDBusInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusInterface_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: QDBusInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusInterface_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: QDBusInterface, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDBusInterface_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: QDBusInterface, callback: *const fn (QDBusInterface, QMetaMethod) callconv(.c) void) void {
        qtc.QDBusInterface_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QDBusInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusInterface_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QDBusInterface, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusInterface_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QDBusInterface, callback: *const fn (QDBusInterface, QEvent) callconv(.c) bool) void {
        qtc.QDBusInterface_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QDBusInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusInterface_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QDBusInterface, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QDBusInterface_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QDBusInterface, callback: *const fn (QDBusInterface, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDBusInterface_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QDBusInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDBusInterface_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QDBusInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QDBusInterface_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QDBusInterface, callback: *const fn (QDBusInterface, QTimerEvent) callconv(.c) void) void {
        qtc.QDBusInterface_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QDBusInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDBusInterface_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QDBusInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QDBusInterface_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: QDBusInterface, callback: *const fn (QDBusInterface, QChildEvent) callconv(.c) void) void {
        qtc.QDBusInterface_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QDBusInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDBusInterface_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QDBusInterface, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QDBusInterface_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: QDBusInterface, callback: *const fn (QDBusInterface, QEvent) callconv(.c) void) void {
        qtc.QDBusInterface_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `internalPropGet` instead
    ///
    pub const InternalPropGet = internalPropGet;

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
    pub fn internalPropGet(self: QDBusInterface, propname: [:0]const u8) QVariant {
        const propname_Cstring = propname.ptr;
        return .{ .ptr = qtc.QDBusInterface_InternalPropGet(@ptrCast(self.ptr), propname_Cstring) };
    }

    /// ### DEPRECATED: Use `superInternalPropGet` instead
    ///
    pub const SuperInternalPropGet = superInternalPropGet;

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
    pub fn superInternalPropGet(self: QDBusInterface, propname: [:0]const u8) QVariant {
        const propname_Cstring = propname.ptr;
        return .{ .ptr = qtc.QDBusInterface_SuperInternalPropGet(@ptrCast(self.ptr), propname_Cstring) };
    }

    /// ### DEPRECATED: Use `onInternalPropGet` instead
    ///
    pub const OnInternalPropGet = onInternalPropGet;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInternalPropGet(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8) callconv(.c) QVariant) void {
        qtc.QDBusInterface_OnInternalPropGet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `internalPropSet` instead
    ///
    pub const InternalPropSet = internalPropSet;

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
    pub fn internalPropSet(self: QDBusInterface, propname: [:0]const u8, value: anytype) void {
        const propname_Cstring = propname.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDBusInterface_InternalPropSet(@ptrCast(self.ptr), propname_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `superInternalPropSet` instead
    ///
    pub const SuperInternalPropSet = superInternalPropSet;

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
    pub fn superInternalPropSet(self: QDBusInterface, propname: [:0]const u8, value: anytype) void {
        const propname_Cstring = propname.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDBusInterface_SuperInternalPropSet(@ptrCast(self.ptr), propname_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onInternalPropSet` instead
    ///
    pub const OnInternalPropSet = onInternalPropSet;

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
    pub fn onInternalPropSet(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDBusInterface_OnInternalPropSet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `internalConstCall` instead
    ///
    pub const InternalConstCall = internalConstCall;

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
    pub fn internalConstCall(self: QDBusInterface, mode: i32, method: []const u8) QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusInterface_InternalConstCall(@ptrCast(self.ptr), @bitCast(mode), method_str) };
    }

    /// ### DEPRECATED: Use `superInternalConstCall` instead
    ///
    pub const SuperInternalConstCall = superInternalConstCall;

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
    pub fn superInternalConstCall(self: QDBusInterface, mode: i32, method: []const u8) QDBusMessage {
        const method_str = qtc.libqt_string{
            .len = method.len,
            .data = method.ptr,
        };
        return .{ .ptr = qtc.QDBusInterface_SuperInternalConstCall(@ptrCast(self.ptr), @bitCast(mode), method_str) };
    }

    /// ### DEPRECATED: Use `onInternalConstCall` instead
    ///
    pub const OnInternalConstCall = onInternalConstCall;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInternalConstCall(self: QDBusInterface, callback: *const fn (QDBusInterface, i32, [*:0]const u8) callconv(.c) QDBusMessage) void {
        qtc.QDBusInterface_OnInternalConstCall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: QDBusInterface) QObject {
        return .{ .ptr = qtc.QDBusInterface_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: QDBusInterface) QObject {
        return .{ .ptr = qtc.QDBusInterface_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: QDBusInterface, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDBusInterface_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: QDBusInterface) i32 {
        return qtc.QDBusInterface_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: QDBusInterface) i32 {
        return qtc.QDBusInterface_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: QDBusInterface, callback: *const fn () callconv(.c) i32) void {
        qtc.QDBusInterface_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: QDBusInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusInterface_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: QDBusInterface, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDBusInterface_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDBusInterface_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: QDBusInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusInterface_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: QDBusInterface, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDBusInterface_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: QDBusInterface, callback: *const fn (QDBusInterface, QMetaMethod) callconv(.c) bool) void {
        qtc.QDBusInterface_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDBusInterface `
    ///
    /// ` callback: *const fn (self: QDBusInterface, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QDBusInterface, callback: *const fn (QDBusInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusinterface.html#dtor.QDBusInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusInterface `
    ///
    pub fn delete(self: QDBusInterface) void {
        qtc.QDBusInterface_Delete(@ptrCast(self.ptr));
    }
};
