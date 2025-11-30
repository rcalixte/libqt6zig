const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const set_constu8 = std.StringHashMapUnmanaged(void);

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html
pub const accounts__service = struct {
    /// New constructs a new Accounts::Service object.
    ///
    ///
    pub fn New() QtC.Accounts__Service {
        return qtc.Accounts__Service_new();
    }

    /// New2 constructs a new Accounts::Service object.
    ///
    /// ``` other: QtC.Accounts__Service ```
    pub fn New2(other: ?*anyopaque) QtC.Accounts__Service {
        return qtc.Accounts__Service_new2(@ptrCast(other));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, other: QtC.Accounts__Service ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Accounts__Service_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Accounts__Service_IsValid(@ptrCast(self));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Service_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::service.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Service_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::service.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Service_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::service.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn TrCatalog(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Service_TrCatalog(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::service.TrCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn ServiceType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Service_ServiceType(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::service.ServiceType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn Provider(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Service_Provider(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::service.Provider: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__Service_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::service.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, tag: []const u8 ```
    pub fn HasTag(self: ?*anyopaque, tag: []const u8) bool {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        return qtc.Accounts__Service_HasTag(@ptrCast(self), tag_str);
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service, allocator: std.mem.Allocator ```
    pub fn Tags(self: ?*anyopaque, allocator: std.mem.Allocator) set_constu8 {
        const _set: qtc.libqt_list = qtc.Accounts__Service_Tags(@ptrCast(self));
        var _ret: set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i| {
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("accounts::service.Tags: Set insertion failed");
        }
        return _ret;
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// ``` self: QtC.Accounts__Service ```
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.Accounts__Service_DomDocument(@ptrCast(self));
    }

    /// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Service.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Accounts__Service ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Accounts__Service_Delete(@ptrCast(self));
    }
};
