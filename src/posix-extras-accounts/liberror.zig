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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Accounts::Error object in C++ memory
    ///
    pub fn new() Accounts__Error {
        return .{ .ptr = qtc.Accounts__Error_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Accounts::Error object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` src: Accounts__Error `
    ///
    pub fn new2(src: anytype) Accounts__Error {
        comptime _ = @TypeOf(src)._is_Accounts__Error;
        return .{ .ptr = qtc.Accounts__Error_new2(@ptrCast(src.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new Accounts::Error object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: error_enums.ErrorType `
    ///
    pub fn new3(typeVal: i32) Accounts__Error {
        return .{ .ptr = qtc.Accounts__Error_new3(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new Accounts::Error object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: error_enums.ErrorType `
    ///
    /// ` _message: []const u8 `
    ///
    pub fn new4(typeVal: i32, _message: []const u8) Accounts__Error {
        const message_str = qtc.libqt_string{
            .len = _message.len,
            .data = _message.ptr,
        };
        return .{ .ptr = qtc.Accounts__Error_new4(@bitCast(typeVal), message_str) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Error `
    ///
    /// ` src: Accounts__Error `
    ///
    pub fn operatorAssign(self: Accounts__Error, src: anytype) void {
        comptime _ = @TypeOf(src)._is_Accounts__Error;
        qtc.Accounts__Error_OperatorAssign(@ptrCast(self.ptr), @ptrCast(src.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

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
    pub fn type0(self: Accounts__Error) i32 {
        return qtc.Accounts__Error_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `message` instead
    ///
    pub const Message = message;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Error `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn message(self: Accounts__Error, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Error_Message(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Error.message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Error `
    ///
    pub fn delete(self: Accounts__Error) void {
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
