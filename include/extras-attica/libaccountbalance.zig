const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api.kde.org/attica-accountbalance.html
pub const attica__accountbalance = struct {
    /// New constructs a new Attica::AccountBalance object.
    ///
    ///
    pub fn New() QtC.Attica__AccountBalance {
        return qtc.Attica__AccountBalance_new();
    }

    /// New2 constructs a new Attica::AccountBalance object.
    ///
    /// ``` other: QtC.Attica__AccountBalance ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__AccountBalance {
        return qtc.Attica__AccountBalance_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-accountbalance.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__AccountBalance, other: QtC.Attica__AccountBalance ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__AccountBalance_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-accountbalance.html#setCurrency)
    ///
    /// ``` self: QtC.Attica__AccountBalance, currency: []const u8 ```
    pub fn SetCurrency(self: ?*anyopaque, currency: []const u8) void {
        const currency_str = qtc.libqt_string{
            .len = currency.len,
            .data = currency.ptr,
        };
        qtc.Attica__AccountBalance_SetCurrency(@ptrCast(self), currency_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-accountbalance.html#currency)
    ///
    /// ``` self: QtC.Attica__AccountBalance, allocator: std.mem.Allocator ```
    pub fn Currency(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__AccountBalance_Currency(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::accountbalance.Currency: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-accountbalance.html#setBalance)
    ///
    /// ``` self: QtC.Attica__AccountBalance, name: []const u8 ```
    pub fn SetBalance(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__AccountBalance_SetBalance(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-accountbalance.html#balance)
    ///
    /// ``` self: QtC.Attica__AccountBalance, allocator: std.mem.Allocator ```
    pub fn Balance(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__AccountBalance_Balance(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::accountbalance.Balance: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__AccountBalance ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__AccountBalance_Delete(@ptrCast(self));
    }
};
