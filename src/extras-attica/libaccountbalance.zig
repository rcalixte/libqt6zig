const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html)
pub const Attica__AccountBalance = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__AccountBalance,

    pub const _is_Attica__AccountBalance = {};

    /// New constructs a new Attica::AccountBalance object.
    ///
    pub fn New() Attica__AccountBalance {
        return .{ .ptr = qtc.Attica__AccountBalance_new() };
    }

    /// New2 constructs a new Attica::AccountBalance object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__AccountBalance `
    ///
    pub fn New2(other: anytype) Attica__AccountBalance {
        comptime _ = @TypeOf(other)._is_Attica__AccountBalance;
        return .{ .ptr = qtc.Attica__AccountBalance_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` other: Attica__AccountBalance `
    ///
    pub fn OperatorAssign(self: Attica__AccountBalance, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__AccountBalance;
        qtc.Attica__AccountBalance_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#setCurrency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` currency: []const u8 `
    ///
    pub fn SetCurrency(self: Attica__AccountBalance, currency: []const u8) void {
        const currency_str = qtc.libqt_string{
            .len = currency.len,
            .data = currency.ptr,
        };
        qtc.Attica__AccountBalance_SetCurrency(@ptrCast(self.ptr), currency_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#currency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Currency(self: Attica__AccountBalance, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__AccountBalance_Currency(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__accountbalance.Currency: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#setBalance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetBalance(self: Attica__AccountBalance, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__AccountBalance_SetBalance(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#balance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Balance(self: Attica__AccountBalance, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__AccountBalance_Balance(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__accountbalance.Balance: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__AccountBalance `
    ///
    pub fn Delete(self: Attica__AccountBalance) void {
        qtc.Attica__AccountBalance_Delete(@ptrCast(self.ptr));
    }
};
