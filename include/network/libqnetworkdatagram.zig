const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://doc.qt.io/qt-6/qnetworkdatagram.html
pub const qnetworkdatagram = struct {
    /// New constructs a new QNetworkDatagram object.
    ///
    ///
    pub fn New() QtC.QNetworkDatagram {
        return qtc.QNetworkDatagram_new();
    }

    /// New2 constructs a new QNetworkDatagram object.
    ///
    /// ``` data: []u8 ```
    pub fn New2(data: []u8) QtC.QNetworkDatagram {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QNetworkDatagram_new2(data_str);
    }

    /// New3 constructs a new QNetworkDatagram object.
    ///
    /// ``` other: QtC.QNetworkDatagram ```
    pub fn New3(other: ?*anyopaque) QtC.QNetworkDatagram {
        return qtc.QNetworkDatagram_new3(@ptrCast(other));
    }

    /// New4 constructs a new QNetworkDatagram object.
    ///
    /// ``` data: []u8, destinationAddress: QtC.QHostAddress ```
    pub fn New4(data: []u8, destinationAddress: ?*anyopaque) QtC.QNetworkDatagram {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QNetworkDatagram_new4(data_str, @ptrCast(destinationAddress));
    }

    /// New5 constructs a new QNetworkDatagram object.
    ///
    /// ``` data: []u8, destinationAddress: QtC.QHostAddress, port: u16 ```
    pub fn New5(data: []u8, destinationAddress: ?*anyopaque, port: u16) QtC.QNetworkDatagram {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };

        return qtc.QNetworkDatagram_new5(data_str, @ptrCast(destinationAddress), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#operator=)
    ///
    /// ``` self: QtC.QNetworkDatagram, other: QtC.QNetworkDatagram ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkDatagram_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#swap)
    ///
    /// ``` self: QtC.QNetworkDatagram, other: QtC.QNetworkDatagram ```
    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QNetworkDatagram_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#clear)
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QNetworkDatagram_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#isValid)
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.QNetworkDatagram_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#isNull)
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QNetworkDatagram_IsNull(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#interfaceIndex)
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn InterfaceIndex(self: ?*anyopaque) u32 {
        return qtc.QNetworkDatagram_InterfaceIndex(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setInterfaceIndex)
    ///
    /// ``` self: QtC.QNetworkDatagram, index: u32 ```
    pub fn SetInterfaceIndex(self: ?*anyopaque, index: u32) void {
        qtc.QNetworkDatagram_SetInterfaceIndex(@ptrCast(self), @intCast(index));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderAddress)
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn SenderAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QNetworkDatagram_SenderAddress(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationAddress)
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn DestinationAddress(self: ?*anyopaque) QtC.QHostAddress {
        return qtc.QNetworkDatagram_DestinationAddress(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderPort)
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn SenderPort(self: ?*anyopaque) i32 {
        return qtc.QNetworkDatagram_SenderPort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationPort)
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn DestinationPort(self: ?*anyopaque) i32 {
        return qtc.QNetworkDatagram_DestinationPort(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
    ///
    /// ``` self: QtC.QNetworkDatagram, address: QtC.QHostAddress ```
    pub fn SetSender(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QNetworkDatagram_SetSender(@ptrCast(self), @ptrCast(address));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setDestination)
    ///
    /// ``` self: QtC.QNetworkDatagram, address: QtC.QHostAddress, port: u16 ```
    pub fn SetDestination(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QNetworkDatagram_SetDestination(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#hopLimit)
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn HopLimit(self: ?*anyopaque) i32 {
        return qtc.QNetworkDatagram_HopLimit(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setHopLimit)
    ///
    /// ``` self: QtC.QNetworkDatagram, count: i32 ```
    pub fn SetHopLimit(self: ?*anyopaque, count: i32) void {
        qtc.QNetworkDatagram_SetHopLimit(@ptrCast(self), @intCast(count));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#data)
    ///
    /// ``` self: QtC.QNetworkDatagram, allocator: std.mem.Allocator ```
    pub fn Data(self: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.struct_libqt_string = qtc.QNetworkDatagram_Data(@ptrCast(self));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkdatagram.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setData)
    ///
    /// ``` self: QtC.QNetworkDatagram, data: []u8 ```
    pub fn SetData(self: ?*anyopaque, data: []u8) void {
        const data_str = qtc.struct_libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QNetworkDatagram_SetData(@ptrCast(self), data_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#makeReply)
    ///
    /// ``` self: QtC.QNetworkDatagram, payload: []u8 ```
    pub fn MakeReply(self: ?*anyopaque, payload: []u8) QtC.QNetworkDatagram {
        const payload_str = qtc.struct_libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        return qtc.QNetworkDatagram_MakeReply(@ptrCast(self), payload_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
    ///
    /// ``` self: QtC.QNetworkDatagram, address: QtC.QHostAddress, port: u16 ```
    pub fn SetSender2(self: ?*anyopaque, address: ?*anyopaque, port: u16) void {
        qtc.QNetworkDatagram_SetSender2(@ptrCast(self), @ptrCast(address), @intCast(port));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#dtor.QNetworkDatagram)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QNetworkDatagram ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QNetworkDatagram_Delete(@ptrCast(self));
    }
};
