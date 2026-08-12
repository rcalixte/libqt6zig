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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Accounts::Service object in C++ memory
    ///
    pub fn new() Accounts__Service {
        return .{ .ptr = qtc.Accounts__Service_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Accounts::Service object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Accounts__Service `
    ///
    pub fn new2(other: anytype) Accounts__Service {
        comptime _ = @TypeOf(other)._is_Accounts__Service;
        return .{ .ptr = qtc.Accounts__Service_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` other: Accounts__Service `
    ///
    pub fn operatorAssign(self: Accounts__Service, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Accounts__Service;
        qtc.Accounts__Service_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    pub fn isValid(self: Accounts__Service) bool {
        return qtc.Accounts__Service_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Service.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Service.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayName` instead
    ///
    pub const DisplayName = displayName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn displayName(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_DisplayName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Service.displayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `trCatalog` instead
    ///
    pub const TrCatalog = trCatalog;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn trCatalog(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_TrCatalog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Service.trCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `serviceType` instead
    ///
    pub const ServiceType = serviceType;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn serviceType(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_ServiceType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Service.serviceType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `provider` instead
    ///
    pub const Provider = provider;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn provider(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_Provider(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Service.provider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `iconName` instead
    ///
    pub const IconName = iconName;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn iconName(self: Accounts__Service, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Accounts__Service_IconName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Accounts__Service.iconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `hasTag` instead
    ///
    pub const HasTag = hasTag;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` tag: []const u8 `
    ///
    pub fn hasTag(self: Accounts__Service, tag: []const u8) bool {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        return qtc.Accounts__Service_HasTag(@ptrCast(self.ptr), tag_str);
    }

    /// ### DEPRECATED: Use `tags` instead
    ///
    pub const Tags = tags;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tags(self: Accounts__Service, allocator: std.mem.Allocator) Set_constu8 {
        const _set: qtc.libqt_list = qtc.Accounts__Service_Tags(@ptrCast(self.ptr));
        var _ret: Set_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_set.len)) catch @panic("Accounts__Service.tags: Total capacity allocation failed");
        const _data_val: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i|
            _ret.putAssumeCapacity(_data_val[i].data[0.._data_val[i].len], {});
        return _ret;
    }

    /// ### DEPRECATED: Use `domDocument` instead
    ///
    pub const DomDocument = domDocument;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Accounts__Service `
    ///
    pub fn domDocument(self: Accounts__Service) QDomDocument {
        return .{ .ptr = qtc.Accounts__Service_DomDocument(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Accounts__Service `
    ///
    pub fn delete(self: Accounts__Service) void {
        qtc.Accounts__Service_Delete(@ptrCast(self.ptr));
    }
};
