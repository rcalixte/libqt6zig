const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html)
pub const qnetworkdatagram = struct {
    /// New constructs a new QNetworkDatagram object.
    ///
    pub fn New() QtC.QNetworkDatagram {
        return qtc.QNetworkDatagram_new();
    }

    /// New2 constructs a new QNetworkDatagram object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn New2(data: []u8) QtC.QNetworkDatagram {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QNetworkDatagram_new2(data_str);
    }

    /// New3 constructs a new QNetworkDatagram object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QNetworkDatagram `
    ///
    pub fn New3(other: ?*anyopaque) QtC.QNetworkDatagram {
        return qtc.QNetworkDatagram_new3(@ptrCast(other));
    }

    /// New4 constructs a new QNetworkDatagram object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` destinationAddress: QtC.QHostAddress `
    ///
    pub fn New4(data: []u8, destinationAddress: ?*anyopaque) QtC.QNetworkDatagram {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QNetworkDatagram_new4(data_str, @ptrCast(destinationAddress));
    }

    /// New5 constructs a new QNetworkDatagram object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` destinationAddress: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn New5(data: []u8, destinationAddress: ?*anyopaque, port: u16) QtC.QNetworkDatagram {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QNetworkDatagram_new5(data_str, @ptrCast(destinationAddress), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` other: QtC.QNetworkDatagram `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkDatagram_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` other: QtC.QNetworkDatagram `
    ///
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkDatagram_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QNetworkDatagram_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QNetworkDatagram_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QNetworkDatagram_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#interfaceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn InterfaceIndex(self: ?*anyopaque) u32 {
        return qtc.QNetworkDatagram_InterfaceIndex(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setInterfaceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` index: u32 `
    ///
    pub fn SetInterfaceIndex(self: ?*anyopaque, index: u32) void {
        qtc.QNetworkDatagram_SetInterfaceIndex(@ptrCast(self), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn SenderAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QNetworkDatagram_SenderAddress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn DestinationAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QNetworkDatagram_DestinationAddress(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn SenderPort(self: ?*anyopaque) i32 {
        return qtc.QNetworkDatagram_SenderPort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn DestinationPort(self: ?*anyopaque) i32 {
        return qtc.QNetworkDatagram_DestinationPort(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    pub fn SetSender(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QNetworkDatagram_SetSender(@ptrCast(self), @ptrCast(address));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setDestination)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn SetDestination(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QNetworkDatagram_SetDestination(@ptrCast(self), @ptrCast(address), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#hopLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn HopLimit(self: ?*anyopaque) i32 {
        return qtc.QNetworkDatagram_HopLimit(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setHopLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` count: i32 `
    ///
    pub fn SetHopLimit(self: ?*anyopaque, count: i32) void {
        qtc.QNetworkDatagram_SetHopLimit(@ptrCast(self), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkDatagram_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkdatagram.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QNetworkDatagram_SetData(@ptrCast(self), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#makeReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` payload: []u8 `
    ///
    pub fn MakeReply(self: ?*anyopaque, payload: []u8) QtC.QNetworkDatagram {
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        return qtc.QNetworkDatagram_MakeReply(@ptrCast(self), payload_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    /// ` address: QtC.QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn SetSender2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QNetworkDatagram_SetSender2(@ptrCast(self), @ptrCast(address), @bitCast(port));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#dtor.QNetworkDatagram)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QNetworkDatagram `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QNetworkDatagram_Delete(@ptrCast(self));
    }
};
