const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
const set_constu8 = std.StringHashMapUnmanaged(void);

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html
pub const accounts__servicetype = struct {
    /// New constructs a new Accounts::ServiceType object.
    ///
    ///
    pub fn New() QtC.Accounts__ServiceType {
        return qtc.Accounts__ServiceType_new();
    }

    /// New2 constructs a new Accounts::ServiceType object.
    ///
    /// ``` other: QtC.Accounts__ServiceType ```
    pub fn New2(other: ?*anyopaque) QtC.Accounts__ServiceType {
        return qtc.Accounts__ServiceType_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType, other: QtC.Accounts__ServiceType ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Accounts__ServiceType_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Accounts__ServiceType_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__ServiceType_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::servicetype.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__ServiceType_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::servicetype.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType, allocator: std.mem.Allocator ```
    pub fn DisplayName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__ServiceType_DisplayName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::servicetype.DisplayName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType, allocator: std.mem.Allocator ```
    pub fn TrCatalog(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__ServiceType_TrCatalog(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::servicetype.TrCatalog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType, allocator: std.mem.Allocator ```
    pub fn IconName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Accounts__ServiceType_IconName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("accounts::servicetype.IconName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType, tag: []const u8 ```
    pub fn HasTag(self: ?*anyopaque, tag: []const u8) bool {
        const tag_str = qtc.libqt_string{
            .len = tag.len,
            .data = tag.ptr,
        };
        return qtc.Accounts__ServiceType_HasTag(@ptrCast(self), tag_str);
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType, allocator: std.mem.Allocator ```
    pub fn Tags(self: ?*anyopaque, allocator: std.mem.Allocator) set_constu8 {
        const _set: qtc.libqt_list = qtc.Accounts__ServiceType_Tags(@ptrCast(self));
        var _ret: set_constu8 = .empty;
        const _data: [*]qtc.libqt_string = @ptrCast(@alignCast(_set.data));
        for (0.._set.len) |i| {
            _ret.put(allocator, _data[i].data[0.._data[i].len], {}) catch @panic("accounts::servicetype.Tags: Set insertion failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// ``` self: QtC.Accounts__ServiceType ```
    pub fn DomDocument(self: ?*anyopaque) QtC.QDomDocument {
        return qtc.Accounts__ServiceType_DomDocument(@ptrCast(self));
    }

    /// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1ServiceType.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Accounts__ServiceType ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Accounts__ServiceType_Delete(@ptrCast(self));
    }
};
