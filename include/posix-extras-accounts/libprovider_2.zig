const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDomDocument = @import("libqt6").QDomDocument;
const std = @import("std");
const Set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
pub const Accounts__Provider = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Accounts__Provider,

    pub const _is_Accounts__Provider = {};

    /// New constructs a new Accounts::Provider object.
    ///
    pub fn New() Accounts__Provider {
        return .{ .ptr = qtc.Accounts__Provider_new() };
    }

    /// New2 constructs a new Accounts::Provider object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Accounts__Provider `
    ///
    pub fn New2(other: anytype) Accounts__Provider {
        comptime _ = @TypeOf(other)._is_Accounts__Provider;
        return .{ .ptr = qtc.Accounts__Provider_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` other: Accounts__Provider `
    ///
    pub fn OperatorAssign(self: Accounts__Provider, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Accounts__Provider;
        qtc.Accounts__Provider_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    pub fn IsValid(self: Accounts__Provider) bool {
        return qtc.Accounts__Provider_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__provider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__provider.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__provider.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginName(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_PluginName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__provider.PluginName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TrCatalog(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_TrCatalog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__provider.TrCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__provider.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DomainsRegExp(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_DomainsRegExp(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts__provider.DomainsRegExp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    pub fn IsSingleAccount(self: Accounts__Provider) bool {
        return qtc.Accounts__Provider_IsSingleAccount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn HasTag(self: Accounts__Provider, tag: []const u8) bool {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        return qtc.Accounts__Provider_HasTag(@ptrCast(self.ptr), tag_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tags(self: Accounts__Provider, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.Accounts__Provider_Tags(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("accounts__provider.Tags: Set insertion failed");
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    pub fn DomDocument(self: Accounts__Provider) QDomDocument {
        return .{ .ptr = qtc.Accounts__Provider_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Provider `
    ///
    pub fn Delete(self: Accounts__Provider) void {
        qtc.Accounts__Provider_Delete(@ptrCast(self.ptr));
    }
};
