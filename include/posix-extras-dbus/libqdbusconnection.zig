const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDBusConnectionInterface = @import("libqt6").QDBusConnectionInterface;
const QDBusError = @import("libqt6").QDBusError;
const QDBusMessage = @import("libqt6").QDBusMessage;
const QDBusPendingCall = @import("libqt6").QDBusPendingCall;
const QDBusVirtualObject = @import("libqt6").QDBusVirtualObject;
const QObject = @import("libqt6").QObject;
const qdbusconnection_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html)
pub const QDBusConnection = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDBusConnection,

    pub const _is_QDBusConnection = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDBusConnection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn new(_name: []const u8) QDBusConnection {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_new(name_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QDBusConnection object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusConnection `
    ///
    pub fn new2(other: anytype) QDBusConnection {
        comptime _ = @TypeOf(other)._is_QDBusConnection;
        return .{ .ptr = qtc.QDBusConnection_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` other: QDBusConnection `
    ///
    pub fn operatorAssign(self: QDBusConnection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusConnection;
        qtc.QDBusConnection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` other: QDBusConnection `
    ///
    pub fn swap(self: QDBusConnection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusConnection;
        qtc.QDBusConnection_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isConnected` instead
    ///
    pub const IsConnected = isConnected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#isConnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn isConnected(self: QDBusConnection) bool {
        return qtc.QDBusConnection_IsConnected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `baseService` instead
    ///
    pub const BaseService = baseService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#baseService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn baseService(self: QDBusConnection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusConnection_BaseService(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusConnection.baseService: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `lastError` instead
    ///
    pub const LastError = lastError;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn lastError(self: QDBusConnection) QDBusError {
        return .{ .ptr = qtc.QDBusConnection_LastError(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QDBusConnection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusConnection_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QDBusConnection.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `connectionCapabilities` instead
    ///
    pub const ConnectionCapabilities = connectionCapabilities;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectionCapabilities)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdbusconnection_enums.ConnectionCapability `
    ///
    pub fn connectionCapabilities(self: QDBusConnection) i32 {
        return qtc.QDBusConnection_ConnectionCapabilities(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `send` instead
    ///
    pub const Send = send;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#send)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn send(self: QDBusConnection, message: anytype) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return qtc.QDBusConnection_Send(@ptrCast(self.ptr), @ptrCast(message.ptr));
    }

    /// ### DEPRECATED: Use `callWithCallback` instead
    ///
    pub const CallWithCallback = callWithCallback;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    /// ` receiver: QObject `
    ///
    /// ` returnMethod: [:0]const u8 `
    ///
    /// ` errorMethod: [:0]const u8 `
    ///
    pub fn callWithCallback(self: QDBusConnection, message: anytype, receiver: anytype, returnMethod: [:0]const u8, errorMethod: [:0]const u8) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const returnMethod_Cstring = returnMethod.ptr;
        const errorMethod_Cstring = errorMethod.ptr;
        return qtc.QDBusConnection_CallWithCallback(@ptrCast(self.ptr), @ptrCast(message.ptr), @ptrCast(receiver.ptr), returnMethod_Cstring, errorMethod_Cstring);
    }

    /// ### DEPRECATED: Use `callWithCallback2` instead
    ///
    pub const CallWithCallback2 = callWithCallback2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn callWithCallback2(self: QDBusConnection, message: anytype, receiver: anytype, slot: [:0]const u8) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_CallWithCallback2(@ptrCast(self.ptr), @ptrCast(message.ptr), @ptrCast(receiver.ptr), slot_Cstring);
    }

    /// ### DEPRECATED: Use `call` instead
    ///
    pub const Call = call;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn call(self: QDBusConnection, message: anytype) QDBusMessage {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_Call(@ptrCast(self.ptr), @ptrCast(message.ptr)) };
    }

    /// ### DEPRECATED: Use `asyncCall` instead
    ///
    pub const AsyncCall = asyncCall;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#asyncCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn asyncCall(self: QDBusConnection, message: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_AsyncCall(@ptrCast(self.ptr), @ptrCast(message.ptr)) };
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn connect(self: QDBusConnection, service: []const u8, path: []const u8, _interface: []const u8, _name: []const u8, receiver: anytype, slot: [:0]const u8) bool {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Connect(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` signature: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn connect2(self: QDBusConnection, service: []const u8, path: []const u8, _interface: []const u8, _name: []const u8, signature: []const u8, receiver: anytype, slot: [:0]const u8) bool {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Connect2(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, signature_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` argumentMatch: []const []const u8 `
    ///
    /// ` signature: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn connect3(self: QDBusConnection, allocator: std.mem.Allocator, service: []const u8, path: []const u8, _interface: []const u8, _name: []const u8, argumentMatch: []const []const u8, signature: []const u8, receiver: anytype, slot: [:0]const u8) bool {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const argumentMatch_arr = allocator.alloc(qtc.libqt_string, argumentMatch.len) catch @panic("QDBusConnection.connect3: Memory allocation failed");
        defer allocator.free(argumentMatch_arr);
        for (argumentMatch, 0..argumentMatch.len) |str_item, i|
            argumentMatch_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const argumentMatch_list = qtc.libqt_list{
            .len = argumentMatch.len,
            .data = argumentMatch_arr.ptr,
        };
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Connect3(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, argumentMatch_list, signature_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn disconnect(self: QDBusConnection, service: []const u8, path: []const u8, _interface: []const u8, _name: []const u8, receiver: anytype, slot: [:0]const u8) bool {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Disconnect(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` signature: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn disconnect2(self: QDBusConnection, service: []const u8, path: []const u8, _interface: []const u8, _name: []const u8, signature: []const u8, receiver: anytype, slot: [:0]const u8) bool {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Disconnect2(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, signature_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` service: []const u8 `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    /// ` argumentMatch: []const []const u8 `
    ///
    /// ` signature: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn disconnect3(self: QDBusConnection, allocator: std.mem.Allocator, service: []const u8, path: []const u8, _interface: []const u8, _name: []const u8, argumentMatch: []const []const u8, signature: []const u8, receiver: anytype, slot: [:0]const u8) bool {
        const service_str = qtc.libqt_string{
            .len = service.len,
            .data = service.ptr,
        };
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        const argumentMatch_arr = allocator.alloc(qtc.libqt_string, argumentMatch.len) catch @panic("QDBusConnection.disconnect3: Memory allocation failed");
        defer allocator.free(argumentMatch_arr);
        for (argumentMatch, 0..argumentMatch.len) |str_item, i|
            argumentMatch_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const argumentMatch_list = qtc.libqt_list{
            .len = argumentMatch.len,
            .data = argumentMatch_arr.ptr,
        };
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Disconnect3(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, argumentMatch_list, signature_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

    /// ### DEPRECATED: Use `registerObject` instead
    ///
    pub const RegisterObject = registerObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    /// ` object: QObject `
    ///
    pub fn registerObject(self: QDBusConnection, path: []const u8, object: anytype) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDBusConnection_RegisterObject(@ptrCast(self.ptr), path_str, @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `registerObject2` instead
    ///
    pub const RegisterObject2 = registerObject2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` object: QObject `
    ///
    pub fn registerObject2(self: QDBusConnection, path: []const u8, _interface: []const u8, object: anytype) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDBusConnection_RegisterObject2(@ptrCast(self.ptr), path_str, interface_str, @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `unregisterObject` instead
    ///
    pub const UnregisterObject = unregisterObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    pub fn unregisterObject(self: QDBusConnection, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDBusConnection_UnregisterObject(@ptrCast(self.ptr), path_str);
    }

    /// ### DEPRECATED: Use `objectRegisteredAt` instead
    ///
    pub const ObjectRegisteredAt = objectRegisteredAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#objectRegisteredAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    pub fn objectRegisteredAt(self: QDBusConnection, path: []const u8) QObject {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_ObjectRegisteredAt(@ptrCast(self.ptr), path_str) };
    }

    /// ### DEPRECATED: Use `registerVirtualObject` instead
    ///
    pub const RegisterVirtualObject = registerVirtualObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerVirtualObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    /// ` object: QDBusVirtualObject `
    ///
    pub fn registerVirtualObject(self: QDBusConnection, path: []const u8, object: anytype) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(object)._is_QDBusVirtualObject;
        return qtc.QDBusConnection_RegisterVirtualObject(@ptrCast(self.ptr), path_str, @ptrCast(object.ptr));
    }

    /// ### DEPRECATED: Use `registerService` instead
    ///
    pub const RegisterService = registerService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` serviceName: []const u8 `
    ///
    pub fn registerService(self: QDBusConnection, serviceName: []const u8) bool {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        return qtc.QDBusConnection_RegisterService(@ptrCast(self.ptr), serviceName_str);
    }

    /// ### DEPRECATED: Use `unregisterService` instead
    ///
    pub const UnregisterService = unregisterService;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` serviceName: []const u8 `
    ///
    pub fn unregisterService(self: QDBusConnection, serviceName: []const u8) bool {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        return qtc.QDBusConnection_UnregisterService(@ptrCast(self.ptr), serviceName_str);
    }

    /// ### DEPRECATED: Use `interface` instead
    ///
    pub const Interface = interface;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#interface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn interface(self: QDBusConnection) QDBusConnectionInterface {
        return .{ .ptr = qtc.QDBusConnection_Interface(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `internalPointer` instead
    ///
    pub const InternalPointer = internalPointer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#internalPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn internalPointer(self: QDBusConnection) ?*anyopaque {
        return qtc.QDBusConnection_InternalPointer(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `connectToBus` instead
    ///
    pub const ConnectToBus = connectToBus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectToBus)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdbusconnection_enums.BusType `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn connectToBus(typeVal: i32, _name: []const u8) QDBusConnection {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_ConnectToBus(@bitCast(typeVal), name_str) };
    }

    /// ### DEPRECATED: Use `connectToBus2` instead
    ///
    pub const ConnectToBus2 = connectToBus2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectToBus)
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn connectToBus2(address: []const u8, _name: []const u8) QDBusConnection {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_ConnectToBus2(address_str, name_str) };
    }

    /// ### DEPRECATED: Use `connectToPeer` instead
    ///
    pub const ConnectToPeer = connectToPeer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectToPeer)
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn connectToPeer(address: []const u8, _name: []const u8) QDBusConnection {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_ConnectToPeer(address_str, name_str) };
    }

    /// ### DEPRECATED: Use `disconnectFromBus` instead
    ///
    pub const DisconnectFromBus = disconnectFromBus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnectFromBus)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn disconnectFromBus(_name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDBusConnection_DisconnectFromBus(name_str);
    }

    /// ### DEPRECATED: Use `disconnectFromPeer` instead
    ///
    pub const DisconnectFromPeer = disconnectFromPeer;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnectFromPeer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []const u8 `
    ///
    pub fn disconnectFromPeer(_name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QDBusConnection_DisconnectFromPeer(name_str);
    }

    /// ### DEPRECATED: Use `localMachineId` instead
    ///
    pub const LocalMachineId = localMachineId;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#localMachineId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn localMachineId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDBusConnection_LocalMachineId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QDBusConnection.localMachineId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sessionBus` instead
    ///
    pub const SessionBus = sessionBus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#sessionBus)
    ///
    pub fn sessionBus() QDBusConnection {
        return .{ .ptr = qtc.QDBusConnection_SessionBus() };
    }

    /// ### DEPRECATED: Use `systemBus` instead
    ///
    pub const SystemBus = systemBus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#systemBus)
    ///
    pub fn systemBus() QDBusConnection {
        return .{ .ptr = qtc.QDBusConnection_SystemBus() };
    }

    /// ### DEPRECATED: Use `callWithCallback5` instead
    ///
    pub const CallWithCallback5 = callWithCallback5;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    /// ` receiver: QObject `
    ///
    /// ` returnMethod: [:0]const u8 `
    ///
    /// ` errorMethod: [:0]const u8 `
    ///
    /// ` timeout: i32 `
    ///
    pub fn callWithCallback5(self: QDBusConnection, message: anytype, receiver: anytype, returnMethod: [:0]const u8, errorMethod: [:0]const u8, timeout: i32) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const returnMethod_Cstring = returnMethod.ptr;
        const errorMethod_Cstring = errorMethod.ptr;
        return qtc.QDBusConnection_CallWithCallback5(@ptrCast(self.ptr), @ptrCast(message.ptr), @ptrCast(receiver.ptr), returnMethod_Cstring, errorMethod_Cstring, @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `callWithCallback4` instead
    ///
    pub const CallWithCallback4 = callWithCallback4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    /// ` timeout: i32 `
    ///
    pub fn callWithCallback4(self: QDBusConnection, message: anytype, receiver: anytype, slot: [:0]const u8, timeout: i32) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_CallWithCallback4(@ptrCast(self.ptr), @ptrCast(message.ptr), @ptrCast(receiver.ptr), slot_Cstring, @bitCast(timeout));
    }

    /// ### DEPRECATED: Use `call2` instead
    ///
    pub const Call2 = call2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    pub fn call2(self: QDBusConnection, message: anytype, mode: i32) QDBusMessage {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_Call2(@ptrCast(self.ptr), @ptrCast(message.ptr), @bitCast(mode)) };
    }

    /// ### DEPRECATED: Use `call3` instead
    ///
    pub const Call3 = call3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    /// ` mode: qdbusconnection_enums.CallMode `
    ///
    /// ` timeout: i32 `
    ///
    pub fn call3(self: QDBusConnection, message: anytype, mode: i32, timeout: i32) QDBusMessage {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_Call3(@ptrCast(self.ptr), @ptrCast(message.ptr), @bitCast(mode), @bitCast(timeout)) };
    }

    /// ### DEPRECATED: Use `asyncCall2` instead
    ///
    pub const AsyncCall2 = asyncCall2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#asyncCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    /// ` timeout: i32 `
    ///
    pub fn asyncCall2(self: QDBusConnection, message: anytype, timeout: i32) QDBusPendingCall {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_AsyncCall2(@ptrCast(self.ptr), @ptrCast(message.ptr), @bitCast(timeout)) };
    }

    /// ### DEPRECATED: Use `registerObject3` instead
    ///
    pub const RegisterObject3 = registerObject3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    /// ` object: QObject `
    ///
    /// ` options: flag of qdbusconnection_enums.RegisterOption `
    ///
    pub fn registerObject3(self: QDBusConnection, path: []const u8, object: anytype, options: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDBusConnection_RegisterObject3(@ptrCast(self.ptr), path_str, @ptrCast(object.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `registerObject4` instead
    ///
    pub const RegisterObject4 = registerObject4;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    /// ` _interface: []const u8 `
    ///
    /// ` object: QObject `
    ///
    /// ` options: flag of qdbusconnection_enums.RegisterOption `
    ///
    pub fn registerObject4(self: QDBusConnection, path: []const u8, _interface: []const u8, object: anytype, options: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = _interface.len,
            .data = _interface.ptr,
        };
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDBusConnection_RegisterObject4(@ptrCast(self.ptr), path_str, interface_str, @ptrCast(object.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `unregisterObject2` instead
    ///
    pub const UnregisterObject2 = unregisterObject2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    /// ` mode: qdbusconnection_enums.UnregisterMode `
    ///
    pub fn unregisterObject2(self: QDBusConnection, path: []const u8, mode: i32) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDBusConnection_UnregisterObject2(@ptrCast(self.ptr), path_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `registerVirtualObject3` instead
    ///
    pub const RegisterVirtualObject3 = registerVirtualObject3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerVirtualObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    /// ` object: QDBusVirtualObject `
    ///
    /// ` options: qdbusconnection_enums.VirtualObjectRegisterOption `
    ///
    pub fn registerVirtualObject3(self: QDBusConnection, path: []const u8, object: anytype, options: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(object)._is_QDBusVirtualObject;
        return qtc.QDBusConnection_RegisterVirtualObject3(@ptrCast(self.ptr), path_str, @ptrCast(object.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#dtor.QDBusConnection)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn delete(self: QDBusConnection) void {
        qtc.QDBusConnection_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#public-types)
pub const enums = struct {
    pub const CallMode = enum {
        pub const NoBlock: i32 = 0;
        pub const Block: i32 = 1;
        pub const BlockWithGui: i32 = 2;
        pub const AutoDetect: i32 = 3;
    };

    pub const BusType = enum {
        pub const SessionBus: i32 = 0;
        pub const SystemBus: i32 = 1;
        pub const ActivationBus: i32 = 2;
    };

    pub const RegisterOption = enum {
        pub const ExportAdaptors: i32 = 1;
        pub const ExportScriptableSlots: i32 = 16;
        pub const ExportScriptableSignals: i32 = 32;
        pub const ExportScriptableProperties: i32 = 64;
        pub const ExportScriptableInvokables: i32 = 128;
        pub const ExportScriptableContents: i32 = 240;
        pub const ExportNonScriptableSlots: i32 = 256;
        pub const ExportNonScriptableSignals: i32 = 512;
        pub const ExportNonScriptableProperties: i32 = 1024;
        pub const ExportNonScriptableInvokables: i32 = 2048;
        pub const ExportNonScriptableContents: i32 = 3840;
        pub const ExportAllSlots: i32 = 272;
        pub const ExportAllSignals: i32 = 544;
        pub const ExportAllProperties: i32 = 1088;
        pub const ExportAllInvokables: i32 = 2176;
        pub const ExportAllContents: i32 = 4080;
        pub const ExportAllSignal: i32 = 544;
        pub const ExportChildObjects: i32 = 4096;
    };

    pub const UnregisterMode = enum {
        pub const UnregisterNode: i32 = 0;
        pub const UnregisterTree: i32 = 1;
    };

    pub const VirtualObjectRegisterOption = enum {
        pub const SingleNode: i32 = 0;
        pub const SubPath: i32 = 1;
    };

    pub const ConnectionCapability = enum {
        pub const UnixFileDescriptorPassing: i32 = 1;
    };
};
