const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html)
pub const qbluetoothaddress = struct {
    /// New constructs a new QBluetoothAddress object.
    ///
    pub fn New() QtC.QBluetoothAddress {
        return qtc.QBluetoothAddress_new();
    }

    /// New2 constructs a new QBluetoothAddress object.
    ///
    /// ## Parameter(s):
    ///
    /// ` address: u64 `
    ///
    pub fn New2(address: u64) QtC.QBluetoothAddress {
        return qtc.QBluetoothAddress_new2(@bitCast(address));
    }

    /// New3 constructs a new QBluetoothAddress object.
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    pub fn New3(address: []const u8) QtC.QBluetoothAddress {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };

        return qtc.QBluetoothAddress_new3(address_str);
    }

    /// New4 constructs a new QBluetoothAddress object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.QBluetoothAddress `
    ///
    pub fn New4(other: ?*anyopaque) QtC.QBluetoothAddress {
        return qtc.QBluetoothAddress_new4(@ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothAddress `
    ///
    /// ` other: QtC.QBluetoothAddress `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothAddress_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothAddress `
    ///
    pub fn IsNull(self: ?*anyopaque) bool {
        return qtc.QBluetoothAddress_IsNull(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothAddress `
    ///
    pub fn Clear(self: ?*anyopaque) void {
        qtc.QBluetoothAddress_Clear(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#toUInt64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothAddress `
    ///
    pub fn ToUInt64(self: ?*anyopaque) u64 {
        return qtc.QBluetoothAddress_ToUInt64(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QBluetoothAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToString(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothAddress_ToString(@ptrCast(self));
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
    /// ` self: QtC.QBluetoothAddress `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QBluetoothAddress_Delete(@ptrCast(self));
    }
};
