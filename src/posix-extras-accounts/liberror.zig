const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const error_enums = enums;
const std = @import("std");

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html
pub const accounts__error = struct {
    /// New constructs a new Accounts::Error object.
    ///
    ///
    pub fn New() QtC.Accounts__Error {
        return qtc.Accounts__Error_new();
    }

    /// New2 constructs a new Accounts::Error object.
    ///
    /// ``` src: QtC.Accounts__Error ```
    pub fn New2(src: ?*anyopaque) QtC.Accounts__Error {
        return qtc.Accounts__Error_new2(@ptrCast(src));
    }

    /// New3 constructs a new Accounts::Error object.
    ///
    /// ``` typeVal: error_enums.ErrorType ```
    pub fn New3(typeVal: i32) QtC.Accounts__Error {
        return qtc.Accounts__Error_new3(@intCast(typeVal));
    }

    /// New4 constructs a new Accounts::Error object.
    ///
    /// ``` typeVal: error_enums.ErrorType, message: []const u8 ```
    pub fn New4(typeVal: i32, message: []const u8) QtC.Accounts__Error {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };

        return qtc.Accounts__Error_new4(@intCast(typeVal), message_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// ``` self: QtC.Accounts__Error, src: QtC.Accounts__Error ```
    pub fn OperatorAssign(self: ?*anyopaque, src: ?*anyopaque) void {
        qtc.Accounts__Error_OperatorAssign(@ptrCast(self), @ptrCast(src));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// ``` self: QtC.Accounts__Error ```
    ///
    /// Returns: ``` error_enums.ErrorType ```
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Accounts__Error_Type(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// ``` self: QtC.Accounts__Error, allocator: std.mem.Allocator ```
    pub fn Message(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Error_Message(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::error.Message: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Accounts__Error ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Accounts__Error_Delete(@ptrCast(self));
    }
};

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Error.html
pub const enums = struct {
    pub const ErrorType = enum {
        pub const NoError: i32 = 0;
        pub const Unknown: i32 = 1;
        pub const Database: i32 = 2;
        pub const Deleted: i32 = 3;
        pub const DatabaseLocked: i32 = 4;
        pub const AccountNotFound: i32 = 5;
    };
};
