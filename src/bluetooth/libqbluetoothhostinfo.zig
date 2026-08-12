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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothHostInfo object in C++ memory
    ///
    pub fn new() QBluetoothHostInfo {
        return .{ .ptr = qtc.QBluetoothHostInfo_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothHostInfo object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBluetoothHostInfo `
    ///
    pub fn new2(other: anytype) QBluetoothHostInfo {
        comptime _ = @TypeOf(other)._is_QBluetoothHostInfo;
        return .{ .ptr = qtc.QBluetoothHostInfo_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    /// ` other: QBluetoothHostInfo `
    ///
    pub fn operatorAssign(self: QBluetoothHostInfo, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothHostInfo;
        qtc.QBluetoothHostInfo_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `address` instead
    ///
    pub const Address = address;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    pub fn address(self: QBluetoothHostInfo) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothHostInfo_Address(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAddress` instead
    ///
    pub const SetAddress = setAddress;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#setAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    /// ` _address: QBluetoothAddress `
    ///
    pub fn setAddress(self: QBluetoothHostInfo, _address: anytype) void {
        comptime _ = @TypeOf(_address)._is_QBluetoothAddress;
        qtc.QBluetoothHostInfo_SetAddress(@ptrCast(self.ptr), @ptrCast(_address.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: QBluetoothHostInfo, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothHostInfo_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothHostInfo.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: QBluetoothHostInfo, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.QBluetoothHostInfo_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#dtor.QBluetoothHostInfo)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothHostInfo `
    ///
    pub fn delete(self: QBluetoothHostInfo) void {
        qtc.QBluetoothHostInfo_Delete(@ptrCast(self.ptr));
    }
};
