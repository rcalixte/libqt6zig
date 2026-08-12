const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QHostAddress = @import("libqt6").QHostAddress;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html)
pub const QNetworkDatagram = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QNetworkDatagram,

    pub const _is_QNetworkDatagram = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QNetworkDatagram object in C++ memory
    ///
    pub fn new() QNetworkDatagram {
        return .{ .ptr = qtc.QNetworkDatagram_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QNetworkDatagram object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _data: []u8 `
    ///
    pub fn new2(_data: []u8) QNetworkDatagram {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        return .{ .ptr = qtc.QNetworkDatagram_new2(data_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QNetworkDatagram object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkDatagram `
    ///
    pub fn new3(other: anytype) QNetworkDatagram {
        comptime _ = @TypeOf(other)._is_QNetworkDatagram;
        return .{ .ptr = qtc.QNetworkDatagram_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QNetworkDatagram object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _data: []u8 `
    ///
    /// ` _destinationAddress: QHostAddress `
    ///
    pub fn new4(_data: []u8, _destinationAddress: anytype) QNetworkDatagram {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        comptime _ = @TypeOf(_destinationAddress)._is_QHostAddress;
        return .{ .ptr = qtc.QNetworkDatagram_new4(data_str, @ptrCast(_destinationAddress.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QNetworkDatagram object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _data: []u8 `
    ///
    /// ` _destinationAddress: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn new5(_data: []u8, _destinationAddress: anytype, port: u16) QNetworkDatagram {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        comptime _ = @TypeOf(_destinationAddress)._is_QHostAddress;
        return .{ .ptr = qtc.QNetworkDatagram_new5(data_str, @ptrCast(_destinationAddress.ptr), @bitCast(port)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` other: QNetworkDatagram `
    ///
    pub fn operatorAssign(self: QNetworkDatagram, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkDatagram;
        qtc.QNetworkDatagram_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `swap` instead
    ///
    pub const Swap = swap;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` other: QNetworkDatagram `
    ///
    pub fn swap(self: QNetworkDatagram, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkDatagram;
        qtc.QNetworkDatagram_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn clear(self: QNetworkDatagram) void {
        qtc.QNetworkDatagram_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn isValid(self: QNetworkDatagram) bool {
        return qtc.QNetworkDatagram_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn isNull(self: QNetworkDatagram) bool {
        return qtc.QNetworkDatagram_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `interfaceIndex` instead
    ///
    pub const InterfaceIndex = interfaceIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#interfaceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn interfaceIndex(self: QNetworkDatagram) u32 {
        return qtc.QNetworkDatagram_InterfaceIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInterfaceIndex` instead
    ///
    pub const SetInterfaceIndex = setInterfaceIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setInterfaceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` index: u32 `
    ///
    pub fn setInterfaceIndex(self: QNetworkDatagram, index: u32) void {
        qtc.QNetworkDatagram_SetInterfaceIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### DEPRECATED: Use `senderAddress` instead
    ///
    pub const SenderAddress = senderAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn senderAddress(self: QNetworkDatagram) QHostAddress {
        return .{ .ptr = qtc.QNetworkDatagram_SenderAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destinationAddress` instead
    ///
    pub const DestinationAddress = destinationAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn destinationAddress(self: QNetworkDatagram) QHostAddress {
        return .{ .ptr = qtc.QNetworkDatagram_DestinationAddress(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `senderPort` instead
    ///
    pub const SenderPort = senderPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn senderPort(self: QNetworkDatagram) i32 {
        return qtc.QNetworkDatagram_SenderPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `destinationPort` instead
    ///
    pub const DestinationPort = destinationPort;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn destinationPort(self: QNetworkDatagram) i32 {
        return qtc.QNetworkDatagram_DestinationPort(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSender` instead
    ///
    pub const SetSender = setSender;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn setSender(self: QNetworkDatagram, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QNetworkDatagram_SetSender(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### DEPRECATED: Use `setDestination` instead
    ///
    pub const SetDestination = setDestination;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setDestination)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn setDestination(self: QNetworkDatagram, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QNetworkDatagram_SetDestination(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `hopLimit` instead
    ///
    pub const HopLimit = hopLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#hopLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn hopLimit(self: QNetworkDatagram) i32 {
        return qtc.QNetworkDatagram_HopLimit(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHopLimit` instead
    ///
    pub const SetHopLimit = setHopLimit;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setHopLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` count: i32 `
    ///
    pub fn setHopLimit(self: QNetworkDatagram, count: i32) void {
        qtc.QNetworkDatagram_SetHopLimit(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn data(self: QNetworkDatagram, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkDatagram_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QNetworkDatagram.data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` _data: []u8 `
    ///
    pub fn setData(self: QNetworkDatagram, _data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = _data.len,
            .data = _data.ptr,
        };
        qtc.QNetworkDatagram_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### DEPRECATED: Use `makeReply` instead
    ///
    pub const MakeReply = makeReply;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#makeReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` payload: []u8 `
    ///
    pub fn makeReply(self: QNetworkDatagram, payload: []u8) QNetworkDatagram {
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        return .{ .ptr = qtc.QNetworkDatagram_MakeReply(@ptrCast(self.ptr), payload_str) };
    }

    /// ### DEPRECATED: Use `setSender2` instead
    ///
    pub const SetSender2 = setSender2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` address: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn setSender2(self: QNetworkDatagram, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QNetworkDatagram_SetSender2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#dtor.QNetworkDatagram)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn delete(self: QNetworkDatagram) void {
        qtc.QNetworkDatagram_Delete(@ptrCast(self.ptr));
    }
};
