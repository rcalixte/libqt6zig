const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qdbusconnection_enums = enums;
const std = @import("std");

/// https://doc.qt.io/qt-6/qdbusconnection.html
pub const qdbusconnection = struct {
    /// New constructs a new QDBusConnection object.
    ///
    /// ``` name: []const u8 ```
    pub fn New(name: []const u8) QtC.QDBusConnection {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };

        return qtc.QDBusConnection_new(name_str);
    }

    /// New2 constructs a new QDBusConnection object.
    ///
    /// ``` other: QtC.QDBusConnection ```
    pub fn New2(other: ?*anyopaque) QtC.QDBusConnection {
        return qtc.QDBusConnection_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#operator-eq)
    ///
    /// ``` self: QtC.QDBusConnection, other: QtC.QDBusConnection ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusConnection_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#swap)
    ///
    /// ``` self: QtC.QDBusConnection, other: QtC.QDBusConnection ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QDBusConnection_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#isConnected)
    ///
    /// ``` self: QtC.QDBusConnection ```
    pub fn IsConnected(self: ?*anyopaque) bool {
        return qtc.QDBusConnection_IsConnected(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#baseService)
    ///
    /// ``` self: QtC.QDBusConnection, allocator: std.mem.Allocator ```
    pub fn BaseService(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusConnection_BaseService(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnection.BaseService: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#lastError)
    ///
    /// ``` self: QtC.QDBusConnection ```
    pub fn LastError(self: ?*anyopaque) QtC.QDBusError {
        return qtc.QDBusConnection_LastError(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#name)
    ///
    /// ``` self: QtC.QDBusConnection, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDBusConnection_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdbusconnection.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#connectionCapabilities)
    ///
    /// ``` self: QtC.QDBusConnection ```
    ///
    /// Returns: ``` flag of qdbusconnection_enums.ConnectionCapability ```
    pub fn ConnectionCapabilities(self: ?*anyopaque) i32 {
        return qtc.QDBusConnection_ConnectionCapabilities(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#send)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage ```
    pub fn Send(self: ?*anyopaque, message: ?*anyopaque) bool {
        return qtc.QDBusConnection_Send(@ptrCast(self), @ptrCast(message));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage, receiver: QtC.QObject, returnMethod: []const u8, errorMethod: []const u8 ```
    pub fn CallWithCallback(self: ?*anyopaque, message: ?*anyopaque, receiver: ?*anyopaque, returnMethod: []const u8, errorMethod: []const u8) bool {
        const returnMethod_Cstring = returnMethod.ptr;
        const errorMethod_Cstring = errorMethod.ptr;
        return qtc.QDBusConnection_CallWithCallback(@ptrCast(self), @ptrCast(message), @ptrCast(receiver), returnMethod_Cstring, errorMethod_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage, receiver: QtC.QObject, slot: []const u8 ```
    pub fn CallWithCallback2(self: ?*anyopaque, message: ?*anyopaque, receiver: ?*anyopaque, slot: []const u8) bool {
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_CallWithCallback2(@ptrCast(self), @ptrCast(message), @ptrCast(receiver), slot_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#call)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage ```
    pub fn Call(self: ?*anyopaque, message: ?*anyopaque) QtC.QDBusMessage {
        return qtc.QDBusConnection_Call(@ptrCast(self), @ptrCast(message));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#asyncCall)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage ```
    pub fn AsyncCall(self: ?*anyopaque, message: ?*anyopaque) QtC.QDBusPendingCall {
        return qtc.QDBusConnection_AsyncCall(@ptrCast(self), @ptrCast(message));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#connect)
    ///
    /// ``` self: QtC.QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, receiver: QtC.QObject, slot: []const u8 ```
    pub fn Connect(self: ?*anyopaque, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, receiver: ?*anyopaque, slot: []const u8) bool {
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
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Connect(@ptrCast(self), service_str, path_str, interface_str, name_str, @ptrCast(receiver), slot_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#connect)
    ///
    /// ``` self: QtC.QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, signature: []const u8, receiver: QtC.QObject, slot: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, signature: []const u8, receiver: ?*anyopaque, slot: []const u8) bool {
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
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Connect2(@ptrCast(self), service_str, path_str, interface_str, name_str, signature_str, @ptrCast(receiver), slot_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#connect)
    ///
    /// ``` self: QtC.QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, argumentMatch: [][]const u8, signature: []const u8, receiver: QtC.QObject, slot: []const u8, allocator: std.mem.Allocator ```
    pub fn Connect3(self: ?*anyopaque, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, argumentMatch: [][]const u8, signature: []const u8, receiver: ?*anyopaque, slot: []const u8, allocator: std.mem.Allocator) bool {
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
        var argumentMatch_arr = allocator.alloc(qtc.libqt_string, argumentMatch.len) catch @panic("qdbusconnection.Connect3: Memory allocation failed");
        defer allocator.free(argumentMatch_arr);
        for (argumentMatch, 0..argumentMatch.len) |item, i| {
            argumentMatch_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const argumentMatch_list = qtc.libqt_list{
            .len = argumentMatch.len,
            .data = argumentMatch_arr.ptr,
        };
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Connect3(@ptrCast(self), service_str, path_str, interface_str, name_str, argumentMatch_list, signature_str, @ptrCast(receiver), slot_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#disconnect)
    ///
    /// ``` self: QtC.QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, receiver: QtC.QObject, slot: []const u8 ```
    pub fn Disconnect(self: ?*anyopaque, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, receiver: ?*anyopaque, slot: []const u8) bool {
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
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Disconnect(@ptrCast(self), service_str, path_str, interface_str, name_str, @ptrCast(receiver), slot_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#disconnect)
    ///
    /// ``` self: QtC.QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, signature: []const u8, receiver: QtC.QObject, slot: []const u8 ```
    pub fn Disconnect2(self: ?*anyopaque, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, signature: []const u8, receiver: ?*anyopaque, slot: []const u8) bool {
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
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Disconnect2(@ptrCast(self), service_str, path_str, interface_str, name_str, signature_str, @ptrCast(receiver), slot_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#disconnect)
    ///
    /// ``` self: QtC.QDBusConnection, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, argumentMatch: [][]const u8, signature: []const u8, receiver: QtC.QObject, slot: []const u8, allocator: std.mem.Allocator ```
    pub fn Disconnect3(self: ?*anyopaque, service: []const u8, path: []const u8, interface: []const u8, name: []const u8, argumentMatch: [][]const u8, signature: []const u8, receiver: ?*anyopaque, slot: []const u8, allocator: std.mem.Allocator) bool {
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
        var argumentMatch_arr = allocator.alloc(qtc.libqt_string, argumentMatch.len) catch @panic("qdbusconnection.Disconnect3: Memory allocation failed");
        defer allocator.free(argumentMatch_arr);
        for (argumentMatch, 0..argumentMatch.len) |item, i| {
            argumentMatch_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const argumentMatch_list = qtc.libqt_list{
            .len = argumentMatch.len,
            .data = argumentMatch_arr.ptr,
        };
        const signature_str = qtc.libqt_string{
            .len = signature.len,
            .data = signature.ptr,
        };
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_Disconnect3(@ptrCast(self), service_str, path_str, interface_str, name_str, argumentMatch_list, signature_str, @ptrCast(receiver), slot_Cstring);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ``` self: QtC.QDBusConnection, path: []const u8, object: QtC.QObject ```
    pub fn RegisterObject(self: ?*anyopaque, path: []const u8, object: ?*anyopaque) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDBusConnection_RegisterObject(@ptrCast(self), path_str, @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ``` self: QtC.QDBusConnection, path: []const u8, interface: []const u8, object: QtC.QObject ```
    pub fn RegisterObject2(self: ?*anyopaque, path: []const u8, interface: []const u8, object: ?*anyopaque) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        return qtc.QDBusConnection_RegisterObject2(@ptrCast(self), path_str, interface_str, @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterObject)
    ///
    /// ``` self: QtC.QDBusConnection, path: []const u8 ```
    pub fn UnregisterObject(self: ?*anyopaque, path: []const u8) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDBusConnection_UnregisterObject(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#objectRegisteredAt)
    ///
    /// ``` self: QtC.QDBusConnection, path: []const u8 ```
    pub fn ObjectRegisteredAt(self: ?*anyopaque, path: []const u8) QtC.QObject {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDBusConnection_ObjectRegisteredAt(@ptrCast(self), path_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#registerVirtualObject)
    ///
    /// ``` self: QtC.QDBusConnection, path: []const u8, object: QtC.QDBusVirtualObject ```
    pub fn RegisterVirtualObject(self: ?*anyopaque, path: []const u8, object: ?*anyopaque) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDBusConnection_RegisterVirtualObject(@ptrCast(self), path_str, @ptrCast(object));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#registerService)
    ///
    /// ``` self: QtC.QDBusConnection, serviceName: []const u8 ```
    pub fn RegisterService(self: ?*anyopaque, serviceName: []const u8) bool {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        return qtc.QDBusConnection_RegisterService(@ptrCast(self), serviceName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterService)
    ///
    /// ``` self: QtC.QDBusConnection, serviceName: []const u8 ```
    pub fn UnregisterService(self: ?*anyopaque, serviceName: []const u8) bool {
        const serviceName_str = qtc.libqt_string{
            .len = serviceName.len,
            .data = serviceName.ptr,
        };
        return qtc.QDBusConnection_UnregisterService(@ptrCast(self), serviceName_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#interface)
    ///
    /// ``` self: QtC.QDBusConnection ```
    pub fn Interface(self: ?*anyopaque) QtC.QDBusConnectionInterface {
        return qtc.QDBusConnection_Interface(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#internalPointer)
    ///
    /// ``` self: QtC.QDBusConnection ```
    pub fn InternalPointer(self: ?*anyopaque) ?*anyopaque {
        return qtc.QDBusConnection_InternalPointer(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#connectToBus)
    ///
    /// ``` typeVal: qdbusconnection_enums.BusType, name: []const u8 ```
    pub fn ConnectToBus(typeVal: i32, name: []const u8) QtC.QDBusConnection {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDBusConnection_ConnectToBus(@intCast(typeVal), name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#connectToBus)
    ///
    /// ``` address: []const u8, name: []const u8 ```
    pub fn ConnectToBus2(address: []const u8, name: []const u8) QtC.QDBusConnection {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDBusConnection_ConnectToBus2(address_str, name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#connectToPeer)
    ///
    /// ``` address: []const u8, name: []const u8 ```
    pub fn ConnectToPeer(address: []const u8, name: []const u8) QtC.QDBusConnection {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        return qtc.QDBusConnection_ConnectToPeer(address_str, name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#disconnectFromBus)
    ///
    /// ``` name: []const u8 ```
    pub fn DisconnectFromBus(name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDBusConnection_DisconnectFromBus(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#disconnectFromPeer)
    ///
    /// ``` name: []const u8 ```
    pub fn DisconnectFromPeer(name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QDBusConnection_DisconnectFromPeer(name_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#localMachineId)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn LocalMachineId(allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QDBusConnection_LocalMachineId();
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdbusconnection.LocalMachineId: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#sessionBus)
    ///
    ///
    pub fn SessionBus() QtC.QDBusConnection {
        return qtc.QDBusConnection_SessionBus();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#systemBus)
    ///
    ///
    pub fn SystemBus() QtC.QDBusConnection {
        return qtc.QDBusConnection_SystemBus();
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage, receiver: QtC.QObject, returnMethod: []const u8, errorMethod: []const u8, timeout: i32 ```
    pub fn CallWithCallback5(self: ?*anyopaque, message: ?*anyopaque, receiver: ?*anyopaque, returnMethod: []const u8, errorMethod: []const u8, timeout: i32) bool {
        const returnMethod_Cstring = returnMethod.ptr;
        const errorMethod_Cstring = errorMethod.ptr;
        return qtc.QDBusConnection_CallWithCallback5(@ptrCast(self), @ptrCast(message), @ptrCast(receiver), returnMethod_Cstring, errorMethod_Cstring, @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#callWithCallback)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage, receiver: QtC.QObject, slot: []const u8, timeout: i32 ```
    pub fn CallWithCallback4(self: ?*anyopaque, message: ?*anyopaque, receiver: ?*anyopaque, slot: []const u8, timeout: i32) bool {
        const slot_Cstring = slot.ptr;
        return qtc.QDBusConnection_CallWithCallback4(@ptrCast(self), @ptrCast(message), @ptrCast(receiver), slot_Cstring, @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#call)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage, mode: qdbusconnection_enums.CallMode ```
    pub fn Call2(self: ?*anyopaque, message: ?*anyopaque, mode: i32) QtC.QDBusMessage {
        return qtc.QDBusConnection_Call2(@ptrCast(self), @ptrCast(message), @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#call)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage, mode: qdbusconnection_enums.CallMode, timeout: i32 ```
    pub fn Call3(self: ?*anyopaque, message: ?*anyopaque, mode: i32, timeout: i32) QtC.QDBusMessage {
        return qtc.QDBusConnection_Call3(@ptrCast(self), @ptrCast(message), @intCast(mode), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#asyncCall)
    ///
    /// ``` self: QtC.QDBusConnection, message: QtC.QDBusMessage, timeout: i32 ```
    pub fn AsyncCall2(self: ?*anyopaque, message: ?*anyopaque, timeout: i32) QtC.QDBusPendingCall {
        return qtc.QDBusConnection_AsyncCall2(@ptrCast(self), @ptrCast(message), @intCast(timeout));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ``` self: QtC.QDBusConnection, path: []const u8, object: QtC.QObject, options: flag of qdbusconnection_enums.RegisterOption ```
    pub fn RegisterObject3(self: ?*anyopaque, path: []const u8, object: ?*anyopaque, options: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDBusConnection_RegisterObject3(@ptrCast(self), path_str, @ptrCast(object), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#registerObject)
    ///
    /// ``` self: QtC.QDBusConnection, path: []const u8, interface: []const u8, object: QtC.QObject, options: flag of qdbusconnection_enums.RegisterOption ```
    pub fn RegisterObject4(self: ?*anyopaque, path: []const u8, interface: []const u8, object: ?*anyopaque, options: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        const interface_str = qtc.libqt_string{
            .len = interface.len,
            .data = interface.ptr,
        };
        return qtc.QDBusConnection_RegisterObject4(@ptrCast(self), path_str, interface_str, @ptrCast(object), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#unregisterObject)
    ///
    /// ``` self: QtC.QDBusConnection, path: []const u8, mode: qdbusconnection_enums.UnregisterMode ```
    pub fn UnregisterObject2(self: ?*anyopaque, path: []const u8, mode: i32) void {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        qtc.QDBusConnection_UnregisterObject2(@ptrCast(self), path_str, @intCast(mode));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#registerVirtualObject)
    ///
    /// ``` self: QtC.QDBusConnection, path: []const u8, object: QtC.QDBusVirtualObject, options: qdbusconnection_enums.VirtualObjectRegisterOption ```
    pub fn RegisterVirtualObject3(self: ?*anyopaque, path: []const u8, object: ?*anyopaque, options: i32) bool {
        const path_str = qtc.libqt_string{
            .len = path.len,
            .data = path.ptr,
        };
        return qtc.QDBusConnection_RegisterVirtualObject3(@ptrCast(self), path_str, @ptrCast(object), @intCast(options));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qdbusconnection.html#dtor.QDBusConnection)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QDBusConnection ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDBusConnection_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdbusconnection.html#types
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
