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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Accounts::Application object in C++ memory
    ///
    pub fn new() Accounts__Application {
        return .{ .ptr = qtc.Accounts__Application_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Accounts::Application object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Accounts__Application `
    ///
    pub fn new2(other: anytype) Accounts__Application {
        comptime _ = @TypeOf(other)._is_Accounts__Application;
        return .{ .ptr = qtc.Accounts__Application_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` other: Accounts__Application `
    ///
    pub fn operatorAssign(self: Accounts__Application, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Accounts__Application;
        qtc.Accounts__Application_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    pub fn isValid(self: Accounts__Application) bool {
        return qtc.Accounts__Application_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Application.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Application.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Application.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Application.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `desktopFilePath` instead
    ///
    pub const DesktopFilePath = desktopFilePath;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn desktopFilePath(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_DesktopFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Application.desktopFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `trCatalog` instead
    ///
    pub const TrCatalog = trCatalog;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn trCatalog(self: Accounts__Application, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Application_TrCatalog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Application.trCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportsService` instead
    ///
    pub const SupportsService = supportsService;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Application `
    ///
    /// ` service: Accounts__Service `
    ///
    pub fn supportsService(self: Accounts__Application, service: anytype) bool {
        comptime _ = @TypeOf(service)._is_Accounts__Service;
        return qtc.Accounts__Application_SupportsService(@ptrCast(self.ptr), @ptrCast(service.ptr));
    }

    /// ### DEPRECATED: Use `serviceUsage` instead
    ///
    pub const ServiceUsage = serviceUsage;

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
    pub fn serviceUsage(self: Accounts__Application, allocator: std.mem.Allocator, service: anytype) []const u8 {
        comptime _ = @TypeOf(service)._is_Accounts__Service;
        var _str = qtc.Accounts__Application_ServiceUsage(@ptrCast(self.ptr), @ptrCast(service.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Application.serviceUsage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Application.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Application `
    ///
    pub fn delete(self: Accounts__Application) void {
        qtc.Accounts__Application_Delete(@ptrCast(self.ptr));
    }
};
