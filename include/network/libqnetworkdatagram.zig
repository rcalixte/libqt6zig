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

    /// New constructs a new QNetworkDatagram object.
    ///
    pub fn New() QNetworkDatagram {
        return .{ .ptr = qtc.QNetworkDatagram_new() };
    }

    /// New2 constructs a new QNetworkDatagram object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    pub fn New2(data: []u8) QNetworkDatagram {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        return .{ .ptr = qtc.QNetworkDatagram_new2(data_str) };
    }

    /// New3 constructs a new QNetworkDatagram object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QNetworkDatagram `
    ///
    pub fn New3(other: anytype) QNetworkDatagram {
        comptime _ = @TypeOf(other)._is_QNetworkDatagram;
        return .{ .ptr = qtc.QNetworkDatagram_new3(@ptrCast(other.ptr)) };
    }

    /// New4 constructs a new QNetworkDatagram object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` destinationAddress: QHostAddress `
    ///
    pub fn New4(data: []u8, destinationAddress: anytype) QNetworkDatagram {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(destinationAddress)._is_QHostAddress;
        return .{ .ptr = qtc.QNetworkDatagram_new4(data_str, @ptrCast(destinationAddress.ptr)) };
    }

    /// New5 constructs a new QNetworkDatagram object.
    ///
    /// ## Parameter(s):
    ///
    /// ` data: []u8 `
    ///
    /// ` destinationAddress: QHostAddress `
    ///
    /// ` port: u16 `
    ///
    pub fn New5(data: []u8, destinationAddress: anytype, port: u16) QNetworkDatagram {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        comptime _ = @TypeOf(destinationAddress)._is_QHostAddress;
        return .{ .ptr = qtc.QNetworkDatagram_new5(data_str, @ptrCast(destinationAddress.ptr), @bitCast(port)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` other: QNetworkDatagram `
    ///
    pub fn OperatorAssign(self: QNetworkDatagram, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkDatagram;
        qtc.QNetworkDatagram_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#swap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` other: QNetworkDatagram `
    ///
    pub fn Swap(self: QNetworkDatagram, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QNetworkDatagram;
        qtc.QNetworkDatagram_Swap(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn Clear(self: QNetworkDatagram) void {
        qtc.QNetworkDatagram_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn IsValid(self: QNetworkDatagram) bool {
        return qtc.QNetworkDatagram_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn IsNull(self: QNetworkDatagram) bool {
        return qtc.QNetworkDatagram_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#interfaceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn InterfaceIndex(self: QNetworkDatagram) u32 {
        return qtc.QNetworkDatagram_InterfaceIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setInterfaceIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` index: u32 `
    ///
    pub fn SetInterfaceIndex(self: QNetworkDatagram, index: u32) void {
        qtc.QNetworkDatagram_SetInterfaceIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn SenderAddress(self: QNetworkDatagram) QHostAddress {
        return .{ .ptr = qtc.QNetworkDatagram_SenderAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn DestinationAddress(self: QNetworkDatagram) QHostAddress {
        return .{ .ptr = qtc.QNetworkDatagram_DestinationAddress(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn SenderPort(self: QNetworkDatagram) i32 {
        return qtc.QNetworkDatagram_SenderPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationPort)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn DestinationPort(self: QNetworkDatagram) i32 {
        return qtc.QNetworkDatagram_DestinationPort(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` address: QHostAddress `
    ///
    pub fn SetSender(self: QNetworkDatagram, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QNetworkDatagram_SetSender(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

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
    pub fn SetDestination(self: QNetworkDatagram, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QNetworkDatagram_SetDestination(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#hopLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    pub fn HopLimit(self: QNetworkDatagram) i32 {
        return qtc.QNetworkDatagram_HopLimit(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setHopLimit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` count: i32 `
    ///
    pub fn SetHopLimit(self: QNetworkDatagram, count: i32) void {
        qtc.QNetworkDatagram_SetHopLimit(@ptrCast(self.ptr), @bitCast(count));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Data(self: QNetworkDatagram, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QNetworkDatagram_Data(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qnetworkdatagram.Data: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` data: []u8 `
    ///
    pub fn SetData(self: QNetworkDatagram, data: []u8) void {
        const data_str = qtc.libqt_string{
            .len = data.len,
            .data = data.ptr,
        };
        qtc.QNetworkDatagram_SetData(@ptrCast(self.ptr), data_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#makeReply)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QNetworkDatagram `
    ///
    /// ` payload: []u8 `
    ///
    pub fn MakeReply(self: QNetworkDatagram, payload: []u8) QNetworkDatagram {
        const payload_str = qtc.libqt_string{
            .len = payload.len,
            .data = payload.ptr,
        };
        return .{ .ptr = qtc.QNetworkDatagram_MakeReply(@ptrCast(self.ptr), payload_str) };
    }

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
    pub fn SetSender2(self: QNetworkDatagram, address: anytype, port: u16) void {
        comptime _ = @TypeOf(address)._is_QHostAddress;
        qtc.QNetworkDatagram_SetSender2(@ptrCast(self.ptr), @ptrCast(address.ptr), @bitCast(port));
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
    /// ` self: QNetworkDatagram `
    ///
    pub fn Delete(self: QNetworkDatagram) void {
        qtc.QNetworkDatagram_Delete(@ptrCast(self.ptr));
    }
};
