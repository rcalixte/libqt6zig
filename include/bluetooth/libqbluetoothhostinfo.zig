const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QBluetoothAddress = @import("libqt6").QBluetoothAddress;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html)
pub const QBluetoothHostInfo = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothHostInfo,

    pub const _is_QBluetoothHostInfo = {};

    /// New constructs a new QBluetoothHostInfo object.
    ///
    pub fn New() QBluetoothHostInfo {
        return .{ .ptr = qtc.QBluetoothHostInfo_new() };
    }

    /// New2 constructs a new QBluetoothHostInfo object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBluetoothHostInfo `
    ///
    pub fn New2(other: anytype) QBluetoothHostInfo {
        comptime _ = @TypeOf(other)._is_QBluetoothHostInfo;
        return .{ .ptr = qtc.QBluetoothHostInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    /// ` other: QBluetoothHostInfo `
    ///
    pub fn OperatorAssign(self: QBluetoothHostInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothHostInfo;
        qtc.QBluetoothHostInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    pub fn Address(self: QBluetoothHostInfo) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothHostInfo_Address(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    /// ` address: QBluetoothAddress `
    ///
    pub fn SetAddress(self: QBluetoothHostInfo, address: anytype) void {
        comptime _ = @TypeOf(address)._is_QBluetoothAddress;
        qtc.QBluetoothHostInfo_SetAddress(@ptrCast(self.ptr), @ptrCast(address.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: QBluetoothHostInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothHostInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothhostinfo.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: QBluetoothHostInfo, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QBluetoothHostInfo_SetName(@ptrCast(self.ptr), name_str);
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
    /// ` self: QBluetoothHostInfo `
    ///
    pub fn Delete(self: QBluetoothHostInfo) void {
        qtc.QBluetoothHostInfo_Delete(@ptrCast(self.ptr));
    }
};
