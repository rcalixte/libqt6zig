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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::AccountBalance object in C++ memory
    ///
    pub fn new() Attica__AccountBalance {
        return .{ .ptr = qtc.Attica__AccountBalance_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::AccountBalance object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__AccountBalance `
    ///
    pub fn new2(other: anytype) Attica__AccountBalance {
        comptime _ = @TypeOf(other)._is_Attica__AccountBalance;
        return .{ .ptr = qtc.Attica__AccountBalance_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` other: Attica__AccountBalance `
    ///
    pub fn operatorAssign(self: Attica__AccountBalance, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__AccountBalance;
        qtc.Attica__AccountBalance_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setCurrency` instead
    ///
    pub const SetCurrency = setCurrency;

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#setCurrency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` _currency: []const u8 `
    ///
    pub fn setCurrency(self: Attica__AccountBalance, _currency: []const u8) void {
        const currency_str = qtc.libqt_string{
            .len = _currency.len,
            .data = _currency.ptr,
        };
        qtc.Attica__AccountBalance_SetCurrency(@ptrCast(self.ptr), currency_str);
    }

    /// ### DEPRECATED: Use `currency` instead
    ///
    pub const Currency = currency;

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#currency)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currency(self: Attica__AccountBalance, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__AccountBalance_Currency(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__AccountBalance.currency: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setBalance` instead
    ///
    pub const SetBalance = setBalance;

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#setBalance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setBalance(self: Attica__AccountBalance, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__AccountBalance_SetBalance(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `balance` instead
    ///
    pub const Balance = balance;

    /// ### [Upstream resources](https://api.kde.org/attica-accountbalance.html#balance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__AccountBalance `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn balance(self: Attica__AccountBalance, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__AccountBalance_Balance(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__AccountBalance.balance: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__AccountBalance `
    ///
    pub fn delete(self: Attica__AccountBalance) void {
        qtc.Attica__AccountBalance_Delete(@ptrCast(self.ptr));
    }
};
