const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDomDocument = @import("libqt6").QDomDocument;
const std = @import("std");
const Set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
pub const Accounts__Service = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Accounts__Service,

    pub const _is_Accounts__Service = {};

    /// New constructs a new Accounts::Service object.
    ///
    pub fn New() Accounts__Service {
        return .{ .ptr = qtc.Accounts__Service_new() };
    }

    /// New2 constructs a new Accounts::Service object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Accounts__Service `
    ///
    pub fn New2(other: anytype) Accounts__Service {
        comptime _ = @TypeOf(other)._is_Accounts__Service;
        return .{ .ptr = qtc.Accounts__Service_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` other: Accounts__Service `
    ///
    pub fn OperatorAssign(self: Accounts__Service, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Accounts__Service;
        qtc.Accounts__Service_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    pub fn IsValid(self: Accounts__Service) bool {
        return qtc.Accounts__Service_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__service.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__service.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__service.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TrCatalog(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_TrCatalog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__service.TrCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ServiceType(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_ServiceType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__service.ServiceType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Provider(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_Provider(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__service.Provider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__service.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn HasTag(self: Accounts__Service, tag: []const u8) bool {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        return qtc.Accounts__Service_HasTag(@ptrCast(self.ptr), tag_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tags(self: Accounts__Service, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.Accounts__Service_Tags(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("accounts__service.Tags: Set insertion failed");
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    pub fn DomDocument(self: Accounts__Service) QDomDocument {
        return .{ .ptr = qtc.Accounts__Service_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Service `
    ///
    pub fn Delete(self: Accounts__Service) void {
        qtc.Accounts__Service_Delete(@ptrCast(self.ptr));
    }
};
