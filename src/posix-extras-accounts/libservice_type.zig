const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDomDocument = @import("libqt6").QDomDocument;
const std = @import("std");
const Set_constu8 = std.StringHashMapUnmanaged(void);

/// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
pub const Accounts__ServiceType = extern struct {
    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Accounts__ServiceType,

    pub const _is_Accounts__ServiceType = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Accounts::ServiceType object in C++ memory
    ///
    pub fn new() Accounts__ServiceType {
        return .{ .ptr = qtc.Accounts__ServiceType_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Accounts::ServiceType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Accounts__ServiceType `
    ///
    pub fn new2(other: anytype) Accounts__ServiceType {
        comptime _ = @TypeOf(other)._is_Accounts__ServiceType;
        return .{ .ptr = qtc.Accounts__ServiceType_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    /// ` other: Accounts__ServiceType `
    ///
    pub fn operatorAssign(self: Accounts__ServiceType, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Accounts__ServiceType;
        qtc.Accounts__ServiceType_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    pub fn isValid(self: Accounts__ServiceType) bool {
        return qtc.Accounts__ServiceType_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Accounts__ServiceType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__ServiceType_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__ServiceType.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Accounts__ServiceType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__ServiceType_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__ServiceType.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: Accounts__ServiceType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__ServiceType_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__ServiceType.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `trCatalog` instead
    ///
    pub const TrCatalog = trCatalog;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn trCatalog(self: Accounts__ServiceType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__ServiceType_TrCatalog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__ServiceType.trCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: Accounts__ServiceType, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__ServiceType_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__ServiceType.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasTag` instead
    ///
    pub const HasTag = hasTag;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn hasTag(self: Accounts__ServiceType, tag: []const u8) bool {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        return qtc.Accounts__ServiceType_HasTag(@ptrCast(self.ptr), tag_str);
    }

    /// ### DEPRECATED: Use `tags` instead
    ///
    pub const Tags = tags;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tags(self: Accounts__ServiceType, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.Accounts__ServiceType_Tags(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("Accounts__ServiceType.tags: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `domDocument` instead
    ///
    pub const DomDocument = domDocument;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__ServiceType `
    ///
    pub fn domDocument(self: Accounts__ServiceType) QDomDocument {
        return .{ .ptr = qtc.Accounts__ServiceType_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__ServiceType `
    ///
    pub fn delete(self: Accounts__ServiceType) void {
        qtc.Accounts__ServiceType_Delete(@ptrCast(self.ptr));
    }
};
