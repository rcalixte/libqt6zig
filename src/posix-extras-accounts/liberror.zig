const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const error_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
pub const Accounts__Error = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Accounts__Error,

    pub const _is_Accounts__Error = {};

    /// New constructs a new Accounts::Error object.
    ///
    pub fn New() Accounts__Error {
        return .{ .ptr = qtc.Accounts__Error_new() };
    }

    /// New2 constructs a new Accounts::Error object.
    ///
    /// ## Parameter(s):
    ///
    /// ` src: Accounts__Error `
    ///
    pub fn New2(src: anytype) Accounts__Error {
        comptime _ = @TypeOf(src)._is_Accounts__Error;
        return .{ .ptr = qtc.Accounts__Error_new2(@ptrCast(src.ptr)) };
    }

    /// New3 constructs a new Accounts::Error object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: error_enums.ErrorType `
    ///
    pub fn New3(typeVal: i32) Accounts__Error {
        return .{ .ptr = qtc.Accounts__Error_new3(@bitCast(typeVal)) };
    }

    /// New4 constructs a new Accounts::Error object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: error_enums.ErrorType `
    ///
    /// ` message: []const u8 `
    ///
    pub fn New4(typeVal: i32, message: []const u8) Accounts__Error {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        return .{ .ptr = qtc.Accounts__Error_new4(@bitCast(typeVal), message_str) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Error `
    ///
    /// ` src: Accounts__Error `
    ///
    pub fn OperatorAssign(self: Accounts__Error, src: anytype) void {
        comptime _ = @TypeOf(src)._is_Accounts__Error;
        qtc.Accounts__Error_OperatorAssign(@ptrCast(self.ptr), @ptrCast(src.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Error `
    ///
    /// ## Returns:
    ///
    /// ` error_enums.ErrorType `
    ///
    pub fn Type(self: Accounts__Error) i32 {
        return qtc.Accounts__Error_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Error `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Message(self: Accounts__Error, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Error_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__error.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Error `
    ///
    pub fn Delete(self: Accounts__Error) void {
        qtc.Accounts__Error_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
pub const enums = struct {
    pub const ErrorType = enum(i32) {
        pub const NoError: i32 = 0;
        pub const Unknown: i32 = 1;
        pub const Database: i32 = 2;
        pub const Deleted: i32 = 3;
        pub const DatabaseLocked: i32 = 4;
        pub const AccountNotFound: i32 = 5;
    };
};
