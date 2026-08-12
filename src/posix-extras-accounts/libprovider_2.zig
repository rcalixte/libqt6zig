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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Accounts::Provider object in C++ memory
    ///
    pub fn new() Accounts__Provider {
        return .{ .ptr = qtc.Accounts__Provider_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Accounts::Provider object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Accounts__Provider `
    ///
    pub fn new2(other: anytype) Accounts__Provider {
        comptime _ = @TypeOf(other)._is_Accounts__Provider;
        return .{ .ptr = qtc.Accounts__Provider_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` other: Accounts__Provider `
    ///
    pub fn operatorAssign(self: Accounts__Provider, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Accounts__Provider;
        qtc.Accounts__Provider_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    pub fn isValid(self: Accounts__Provider) bool {
        return qtc.Accounts__Provider_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Provider.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Provider.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Provider.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pluginName` instead
    ///
    pub const PluginName = pluginName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn pluginName(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_PluginName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Provider.pluginName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `trCatalog` instead
    ///
    pub const TrCatalog = trCatalog;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn trCatalog(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_TrCatalog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Provider.trCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Provider.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `domainsRegExp` instead
    ///
    pub const DomainsRegExp = domainsRegExp;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn domainsRegExp(self: Accounts__Provider, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Provider_DomainsRegExp(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Provider.domainsRegExp: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isSingleAccount` instead
    ///
    pub const IsSingleAccount = isSingleAccount;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    pub fn isSingleAccount(self: Accounts__Provider) bool {
        return qtc.Accounts__Provider_IsSingleAccount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasTag` instead
    ///
    pub const HasTag = hasTag;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn hasTag(self: Accounts__Provider, tag: []const u8) bool {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        return qtc.Accounts__Provider_HasTag(@ptrCast(self.ptr), tag_str);
    }

    /// ### DEPRECATED: Use `tags` instead
    ///
    pub const Tags = tags;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tags(self: Accounts__Provider, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.Accounts__Provider_Tags(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("Accounts__Provider.tags: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `domDocument` instead
    ///
    pub const DomDocument = domDocument;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Provider `
    ///
    pub fn domDocument(self: Accounts__Provider) QDomDocument {
        return .{ .ptr = qtc.Accounts__Provider_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Provider.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Provider `
    ///
    pub fn delete(self: Accounts__Provider) void {
        qtc.Accounts__Provider_Delete(@ptrCast(self.ptr));
    }
};
