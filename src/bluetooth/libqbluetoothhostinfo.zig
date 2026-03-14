const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html)
pub const qbluetoothhostinfo = struct {
    /// New constructs a new QBluetoothHostInfo object.
    ///
    pub fn New() QtC.QBluetoothHostInfo {
        return qtc.QBluetoothHostInfo_new();
    }

    /// New2 constructs a new QBluetoothHostInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QBluetoothHostInfo `
    ///
    pub fn New2(other: ?*anyopaque) QtC.QBluetoothHostInfo {
        return qtc.QBluetoothHostInfo_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothHostInfo `
    ///
    /// ` other: QtC.QBluetoothHostInfo `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothHostInfo_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothHostInfo `
    ///
    pub fn Address(self: ?*anyopaque) QtC.QBluetoothAddress {
        return qtc.QBluetoothHostInfo_Address(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothHostInfo `
    ///
    /// ` address: QtC.QBluetoothAddress `
    ///
    pub fn SetAddress(self: ?*anyopaque, address: ?*anyopaque) void {
        qtc.QBluetoothHostInfo_SetAddress(@ptrCast(self), @ptrCast(address));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothHostInfo_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothhostinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothHostInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QBluetoothHostInfo_SetName(@ptrCast(self), name_str);
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#dtor.QBluetoothHostInfo)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QBluetoothHostInfo `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBluetoothHostInfo_Delete(@ptrCast(self));
    }
};
