const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Accounts__Service = @import("libqt6").Accounts__Service;
const std = @import("std");

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
pub const Accounts__Application = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Accounts__Application,

    pub const _is_Accounts__Application = {};

    /// New constructs a new Accounts::Application object.
    ///
    pub fn New() Accounts__Application {
        return .{ .ptr = qtc.Accounts__Application_new() };
    }

    /// New2 constructs a new Accounts::Application object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Accounts__Application `
    ///
    pub fn New2(other: anytype) Accounts__Application {
        comptime _ = @TypeOf(other)._is_Accounts__Application;
        return .{ .ptr = qtc.Accounts__Application_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` other: Accounts__Application `
    ///
    pub fn OperatorAssign(self: Accounts__Application, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Accounts__Application;
        qtc.Accounts__Application_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    pub fn IsValid(self: Accounts__Application) bool {
        return qtc.Accounts__Application_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__application.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__application.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__application.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__application.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DesktopFilePath(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_DesktopFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__application.DesktopFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TrCatalog(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_TrCatalog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__application.TrCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` service: Accounts__Service `
    ///
    pub fn SupportsService(self: Accounts__Application, service: anytype) bool {
        comptime _ = @TypeOf(service)._is_Accounts__Service;
        return qtc.Accounts__Application_SupportsService(@ptrCast(self.ptr), @ptrCast(service.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` service: Accounts__Service `
    ///
    pub fn ServiceUsage(self: Accounts__Application, allocator: std.mem.Allocator, service: anytype) []const u8 {
        comptime _ = @TypeOf(service)._is_Accounts__Service;
        var _str = qtc.Accounts__Application_ServiceUsage(@ptrCast(self.ptr), @ptrCast(service.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__application.ServiceUsage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Application `
    ///
    pub fn Delete(self: Accounts__Application) void {
        qtc.Accounts__Application_Delete(@ptrCast(self.ptr));
    }
};
