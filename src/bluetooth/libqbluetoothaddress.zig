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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QBluetoothAddress object in C++ memory
    ///
    pub fn new() QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothAddress_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QBluetoothAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` address: u64 `
    ///
    pub fn new2(address: u64) QBluetoothAddress {
        return .{ .ptr = qtc.QBluetoothAddress_new2(@bitCast(address)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QBluetoothAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    pub fn new3(address: []const u8) QBluetoothAddress {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        return .{ .ptr = qtc.QBluetoothAddress_new3(address_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QBluetoothAddress object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QBluetoothAddress `
    ///
    pub fn new4(other: anytype) QBluetoothAddress {
        comptime _ = @TypeOf(other)._is_QBluetoothAddress;
        return .{ .ptr = qtc.QBluetoothAddress_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    /// ` other: QBluetoothAddress `
    ///
    pub fn operatorAssign(self: QBluetoothAddress, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QBluetoothAddress;
        qtc.QBluetoothAddress_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    pub fn isNull(self: QBluetoothAddress) bool {
        return qtc.QBluetoothAddress_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    pub fn clear(self: QBluetoothAddress) void {
        qtc.QBluetoothAddress_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toUInt64` instead
    ///
    pub const ToUInt64 = toUInt64;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#toUInt64)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    pub fn toUInt64(self: QBluetoothAddress) u64 {
        return qtc.QBluetoothAddress_ToUInt64(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `toString` instead
    ///
    pub const ToString = toString;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#toString)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QBluetoothAddress `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toString(self: QBluetoothAddress, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QBluetoothAddress_ToString(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QBluetoothAddress.toString: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#dtor.QBluetoothAddress)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QBluetoothAddress `
    ///
    pub fn delete(self: QBluetoothAddress) void {
        qtc.QBluetoothAddress_Delete(@ptrCast(self.ptr));
    }
};
