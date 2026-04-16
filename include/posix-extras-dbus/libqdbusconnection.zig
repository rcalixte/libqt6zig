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

    /// New constructs a new QDBusConnection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn New(name: []const u8) QDBusConnection {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_new(name_str) };
    }

    /// New2 constructs a new QDBusConnection object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QDBusConnection `
    ///
    pub fn New2(other: anytype) QDBusConnection {
        comptime _ = @TypeOf(other)._is_QDBusConnection;
        return .{ .ptr = qtc.QDBusConnection_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` other: QDBusConnection `
    ///
    pub fn OperatorAssign(self: QDBusConnection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusConnection;
        qtc.QDBusConnection_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` other: QDBusConnection `
    ///
    pub fn Swap(self: QDBusConnection, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QDBusConnection;
        qtc.QDBusConnection_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#isConnected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn IsConnected(self: QDBusConnection) bool {
        return qtc.QDBusConnection_IsConnected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#baseService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BaseService(self: QDBusConnection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusConnection_BaseService(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnection.BaseService: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#lastError)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn LastError(self: QDBusConnection) QDBusError {
        return .{ .ptr = qtc.QDBusConnection_LastError(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QDBusConnection, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDBusConnection_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnection.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn ConnectionCapabilities(self: QDBusConnection) i32 {
        return qtc.QDBusConnection_ConnectionCapabilities(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#send)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn Send(self: QDBusConnection, message: anytype) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return qtc.QDBusConnection_Send(@ptrCast(self.ptr), @ptrCast(message.ptr));
    }

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
    pub fn CallWithCallback(self: QDBusConnection, message: anytype, receiver: anytype, returnMethod: [:0]const u8, errorMethod: [:0]const u8) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const returnMethod_Cstring = returnMethod.ptr;
        const errorMethod_Cstring = errorMethod.ptr;
        return qtc.QDBusConnection_CallWithCallback(@ptrCast(self.ptr), @ptrCast(message.ptr), @ptrCast(receiver.ptr), returnMethod_Cstring, errorMethod_Cstring);
    }

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
    pub fn CallWithCallback2(self: QDBusConnection, message: anytype, receiver: anytype, slot: [:0]const u8) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_CallWithCallback2(@ptrCast(self.ptr), @ptrCast(message.ptr), @ptrCast(receiver.ptr), slot_Cstring);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#call)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn Call(self: QDBusConnection, message: anytype) QDBusMessage {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_Call(@ptrCast(self.ptr), @ptrCast(message.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#asyncCall)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` message: QDBusMessage `
    ///
    pub fn AsyncCall(self: QDBusConnection, message: anytype) QDBusPendingCall {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_AsyncCall(@ptrCast(self.ptr), @ptrCast(message.ptr)) };
    }

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
    /// ` interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn Connect(self: QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, receiver: anytype, slot: [:0]const u8) bool {
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
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Connect(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

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
    /// ` interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` signature: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn Connect2(self: QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, signature: []const u8, receiver: anytype, slot: [:0]const u8) bool {
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
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Connect2(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, signature_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

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
    /// ` interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` argumentMatch: []const []const u8 `
    ///
    /// ` signature: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn Connect3(self: QDBusConnection, allocator: std.mem.Allocator, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, argumentMatch: []const []const u8, signature: []const u8, receiver: anytype, slot: [:0]const u8) bool {
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
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const argumentMatch_arr = allocator.alloc(qtc.libqt_string, argumentMatch.len) catch @panic("qdbusconnection.Connect3: Memory allocation failed");
        defer allocator.free(argumentMatch_arr);
        for (argumentMatch, 0..argumentMatch.len) |item, i|
            argumentMatch_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
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
    /// ` interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn Disconnect(self: QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, receiver: anytype, slot: [:0]const u8) bool {
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
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Disconnect(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

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
    /// ` interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` signature: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn Disconnect2(self: QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, signature: []const u8, receiver: anytype, slot: [:0]const u8) bool {
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
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Disconnect2(@ptrCast(self.ptr), service_str, path_str, interface_str, name_str, signature_str, @ptrCast(receiver.ptr), slot_Cstring);
    }

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
    /// ` interface: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    /// ` argumentMatch: []const []const u8 `
    ///
    /// ` signature: []const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` slot: [:0]const u8 `
    ///
    pub fn Disconnect3(self: QDBusConnection, allocator: std.mem.Allocator, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, argumentMatch: []const []const u8, signature: []const u8, receiver: anytype, slot: [:0]const u8) bool {
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
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        const argumentMatch_arr = allocator.alloc(qtc.libqt_string, argumentMatch.len) catch @panic("qdbusconnection.Disconnect3: Memory allocation failed");
        defer allocator.free(argumentMatch_arr);
        for (argumentMatch, 0..argumentMatch.len) |item, i|
            argumentMatch_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
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
    pub fn RegisterObject(self: QDBusConnection, path: []const u8, object: anytype) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDBusConnection_RegisterObject(@ptrCast(self.ptr), path_str, @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    /// ` interface: []const u8 `
    ///
    /// ` object: QObject `
    ///
    pub fn RegisterObject2(self: QDBusConnection, path: []const u8, interface: []const u8, object: anytype) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDBusConnection_RegisterObject2(@ptrCast(self.ptr), path_str, interface_str, @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    pub fn UnregisterObject(self: QDBusConnection, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDBusConnection_UnregisterObject(@ptrCast(self.ptr), path_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#objectRegisteredAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    pub fn ObjectRegisteredAt(self: QDBusConnection, path: []const u8) QObject {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_ObjectRegisteredAt(@ptrCast(self.ptr), path_str) };
    }

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
    pub fn RegisterVirtualObject(self: QDBusConnection, path: []const u8, object: anytype) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(object)._is_QDBusVirtualObject;
        return qtc.QDBusConnection_RegisterVirtualObject(@ptrCast(self.ptr), path_str, @ptrCast(object.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` serviceName: []const u8 `
    ///
    pub fn RegisterService(self: QDBusConnection, serviceName: []const u8) bool {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        return qtc.QDBusConnection_RegisterService(@ptrCast(self.ptr), serviceName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterService)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` serviceName: []const u8 `
    ///
    pub fn UnregisterService(self: QDBusConnection, serviceName: []const u8) bool {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        return qtc.QDBusConnection_UnregisterService(@ptrCast(self.ptr), serviceName_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#interface)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn Interface(self: QDBusConnection) QDBusConnectionInterface {
        return .{ .ptr = qtc.QDBusConnection_Interface(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#internalPointer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn InternalPointer(self: QDBusConnection) ?*anyopaque {
        return qtc.QDBusConnection_InternalPointer(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectToBus)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: qdbusconnection_enums.BusType `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ConnectToBus(typeVal: i32, name: []const u8) QDBusConnection {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_ConnectToBus(@bitCast(typeVal), name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectToBus)
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ConnectToBus2(address: []const u8, name: []const u8) QDBusConnection {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_ConnectToBus2(address_str, name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#connectToPeer)
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ConnectToPeer(address: []const u8, name: []const u8) QDBusConnection {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return .{ .ptr = qtc.QDBusConnection_ConnectToPeer(address_str, name_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnectFromBus)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn DisconnectFromBus(name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDBusConnection_DisconnectFromBus(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#disconnectFromPeer)
    ///
    /// ## Parameter(s):
    ///
    /// ` name: []const u8 `
    ///
    pub fn DisconnectFromPeer(name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDBusConnection_DisconnectFromPeer(name_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#localMachineId)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LocalMachineId(allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QDBusConnection_LocalMachineId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdbusconnection.LocalMachineId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#sessionBus)
    ///
    pub fn SessionBus() QDBusConnection {
        return .{ .ptr = qtc.QDBusConnection_SessionBus() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#systemBus)
    ///
    pub fn SystemBus() QDBusConnection {
        return .{ .ptr = qtc.QDBusConnection_SystemBus() };
    }

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
    pub fn CallWithCallback5(self: QDBusConnection, message: anytype, receiver: anytype, returnMethod: [:0]const u8, errorMethod: [:0]const u8, timeout: i32) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const returnMethod_Cstring = returnMethod.ptr;
        const errorMethod_Cstring = errorMethod.ptr;
        return qtc.QDBusConnection_CallWithCallback5(@ptrCast(self.ptr), @ptrCast(message.ptr), @ptrCast(receiver.ptr), returnMethod_Cstring, errorMethod_Cstring, @bitCast(timeout));
    }

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
    pub fn CallWithCallback4(self: QDBusConnection, message: anytype, receiver: anytype, slot: [:0]const u8, timeout: i32) bool {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_CallWithCallback4(@ptrCast(self.ptr), @ptrCast(message.ptr), @ptrCast(receiver.ptr), slot_Cstring, @bitCast(timeout));
    }

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
    pub fn Call2(self: QDBusConnection, message: anytype, mode: i32) QDBusMessage {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_Call2(@ptrCast(self.ptr), @ptrCast(message.ptr), @bitCast(mode)) };
    }

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
    pub fn Call3(self: QDBusConnection, message: anytype, mode: i32, timeout: i32) QDBusMessage {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_Call3(@ptrCast(self.ptr), @ptrCast(message.ptr), @bitCast(mode), @bitCast(timeout)) };
    }

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
    pub fn AsyncCall2(self: QDBusConnection, message: anytype, timeout: i32) QDBusPendingCall {
        comptime _ = @TypeOf(message)._is_QDBusMessage;
        return .{ .ptr = qtc.QDBusConnection_AsyncCall2(@ptrCast(self.ptr), @ptrCast(message.ptr), @bitCast(timeout)) };
    }

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
    pub fn RegisterObject3(self: QDBusConnection, path: []const u8, object: anytype, options: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDBusConnection_RegisterObject3(@ptrCast(self.ptr), path_str, @ptrCast(object.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDBusConnection `
    ///
    /// ` path: []const u8 `
    ///
    /// ` interface: []const u8 `
    ///
    /// ` object: QObject `
    ///
    /// ` options: flag of qdbusconnection_enums.RegisterOption `
    ///
    pub fn RegisterObject4(self: QDBusConnection, path: []const u8, interface: []const u8, object: anytype, options: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        comptime _ = @TypeOf(object)._is_QObject;
        return qtc.QDBusConnection_RegisterObject4(@ptrCast(self.ptr), path_str, interface_str, @ptrCast(object.ptr), @bitCast(options));
    }

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
    pub fn UnregisterObject2(self: QDBusConnection, path: []const u8, mode: i32) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDBusConnection_UnregisterObject2(@ptrCast(self.ptr), path_str, @bitCast(mode));
    }

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
    pub fn RegisterVirtualObject3(self: QDBusConnection, path: []const u8, object: anytype, options: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        comptime _ = @TypeOf(object)._is_QDBusVirtualObject;
        return qtc.QDBusConnection_RegisterVirtualObject3(@ptrCast(self.ptr), path_str, @ptrCast(object.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#dtor.QDBusConnection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDBusConnection `
    ///
    pub fn Delete(self: QDBusConnection) void {
        qtc.QDBusConnection_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdbusconnection.html#public-types)
pub const enums = struct {
    pub const CallMode = enum(i32) {
        pub const NoBlock: i32 = 0;
        pub const Block: i32 = 1;
        pub const BlockWithGui: i32 = 2;
        pub const AutoDetect: i32 = 3;
    };

    pub const BusType = enum(i32) {
        pub const SessionBus: i32 = 0;
        pub const SystemBus: i32 = 1;
        pub const ActivationBus: i32 = 2;
    };

    pub const RegisterOption = enum(i32) {
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

    pub const UnregisterMode = enum(i32) {
        pub const UnregisterNode: i32 = 0;
        pub const UnregisterTree: i32 = 1;
    };

    pub const VirtualObjectRegisterOption = enum(i32) {
        pub const SingleNode: i32 = 0;
        pub const SubPath: i32 = 1;
    };

    pub const ConnectionCapability = enum(i32) {
        pub const UnixFileDescriptorPassing: i32 = 1;
    };
};
