const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html
pub const accounts__application = struct {
    /// New constructs a new Accounts::Application object.
    ///
    ///
    pub fn New() QtC.Accounts__Application {
        return qtc.Accounts__Application_new();
    }

    /// New2 constructs a new Accounts::Application object.
    ///
    /// ``` other: QtC.Accounts__Application ```
    pub fn New2(other: ?*anyopaque) QtC.Accounts__Application {
        return qtc.Accounts__Application_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application, other: QtC.Accounts__Application ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Accounts__Application_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Accounts__Application_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Application_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::application.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application, allocator: std.mem.Allocator ```
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Application_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::application.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Application_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::application.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Application_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::application.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application, allocator: std.mem.Allocator ```
    pub fn DesktopFilePath(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Application_DesktopFilePath(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::application.DesktopFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application, allocator: std.mem.Allocator ```
    pub fn TrCatalog(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Application_TrCatalog(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::application.TrCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application, service: QtC.Accounts__Service ```
    pub fn SupportsService(self: ?*anyopaque, service: ?*anyopaque) bool {
        return qtc.Accounts__Application_SupportsService(@ptrCast(self), @ptrCast(service));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ``` self: QtC.Accounts__Application, service: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn ServiceUsage(self: ?*anyopaque, service: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Application_ServiceUsage(@ptrCast(self), @ptrCast(service));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::application.ServiceUsage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Accounts__Application ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Accounts__Application_Delete(@ptrCast(self));
    }
};
