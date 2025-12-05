const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
pub const accounts__provider = struct {
    /// New constructs a new Accounts::Provider object.
    ///
    pub fn New() QtC.Accounts__Provider {
        return qtc.Accounts__Provider_new();
    }

    /// New2 constructs a new Accounts::Provider object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QtC.Accounts__Provider `
    ///
    pub fn New2(other: ?*anyopaque) QtC.Accounts__Provider {
        return qtc.Accounts__Provider_new2(@ptrCast(other));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` other: QtC.Accounts__Provider `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Accounts__Provider_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Accounts__Provider_IsValid(@ptrCast(self));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Provider_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::provider.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Provider_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::provider.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Provider_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::provider.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PluginName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Provider_PluginName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::provider.PluginName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TrCatalog(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Provider_TrCatalog(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::provider.TrCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Provider_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::provider.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DomainsRegExp(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Provider_DomainsRegExp(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::provider.DomainsRegExp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    pub fn IsSingleAccount(self: ?*anyopaque) bool {
        return qtc.Accounts__Provider_IsSingleAccount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn HasTag(self: ?*anyopaque, tag: []const u8) bool {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        return qtc.Accounts__Provider_HasTag(@ptrCast(self), tag_str);
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tags(self: ?*anyopaque, allocator: std.mem.Allocator) set_constu8 {
        const _set: qtc.libqt_list = qtc.Accounts__Provider_Tags(@ptrCast(self));
        var _ret: set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i| {
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("accounts::provider.Tags: Set insertion failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.Accounts__Provider_DomDocument(@ptrCast(self));
    }

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.Accounts__Provider `
    ///
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Accounts__Provider_Delete(@ptrCast(self));
    }
};
