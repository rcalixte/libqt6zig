const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html)
pub const QBluetoothAddress = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QBluetoothAddress,

    pub const _is_QBluetoothAddress = {};

    /// New constructs a new QBluetoothAddress object.
    ///
    pub fn New() QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothAddress_new() };
    }

    /// New2 constructs a new QBluetoothAddress object.
    ///
    /// ## Parameter(s):
    ///
    /// ` address: u64 `
    ///
    pub fn New2(address: u64) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothAddress_new2(@bitCast(address)) };
    }

    /// New3 constructs a new QBluetoothAddress object.
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    pub fn New3(address: []const u8) QBluetoothAddress {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        return .{ .ptr = qtc.QBluetoothAddress_new3(address_str) };
    }

    /// New4 constructs a new QBluetoothAddress object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBluetoothAddress `
    ///
    pub fn New4(other: anytype) QBluetoothAddress {
        comptime _ = @TypeOf(other)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QBluetoothAddress_new4(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    /// ` other: QBluetoothAddress `
    ///
    pub fn OperatorAssign(self: QBluetoothAddress, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothAddress;
        qtc.QBluetoothAddress_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    pub fn IsNull(self: QBluetoothAddress) bool {
        return qtc.QBluetoothAddress_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    pub fn Clear(self: QBluetoothAddress) void {
        qtc.QBluetoothAddress_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#toUInt64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    pub fn ToUInt64(self: QBluetoothAddress) u64 {
        return qtc.QBluetoothAddress_ToUInt64(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: QBluetoothAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothAddress_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qbluetoothaddress.ToString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#dtor.QBluetoothAddress)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothAddress `
    ///
    pub fn Delete(self: QBluetoothAddress) void {
        qtc.QBluetoothAddress_Delete(@ptrCast(self.ptr));
    }
};
