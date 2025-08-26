const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// https://api-staging.kde.org/kosrelease.html
pub const kosrelease = struct {
    /// New constructs a new KOSRelease object.
    ///
    ///
    pub fn New() QtC.KOSRelease {
        return qtc.KOSRelease_new();
    }

    /// New2 constructs a new KOSRelease object.
    ///
    /// ``` filePath: []const u8 ```
    pub fn New2(filePath: []const u8) QtC.KOSRelease {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };

        return qtc.KOSRelease_new2(filePath_str);
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#name)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#version)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#id)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#idLike)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn IdLike(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KOSRelease_IdLike(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kosrelease.IdLike: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kosrelease.IdLike: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#versionCodename)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn VersionCodename(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_VersionCodename(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.VersionCodename: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#versionId)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn VersionId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_VersionId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.VersionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#prettyName)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn PrettyName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_PrettyName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.PrettyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#ansiColor)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn AnsiColor(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_AnsiColor(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.AnsiColor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#cpeName)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn CpeName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_CpeName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.CpeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#homeUrl)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn HomeUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_HomeUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.HomeUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#documentationUrl)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn DocumentationUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_DocumentationUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.DocumentationUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#supportUrl)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn SupportUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_SupportUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.SupportUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#bugReportUrl)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn BugReportUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_BugReportUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.BugReportUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#privacyPolicyUrl)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn PrivacyPolicyUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_PrivacyPolicyUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.PrivacyPolicyUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#buildId)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn BuildId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_BuildId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.BuildId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#variant)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn Variant(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_Variant(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Variant: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#variantId)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn VariantId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_VariantId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.VariantId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#logo)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn Logo(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KOSRelease_Logo(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Logo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#extraKeys)
    ///
    /// ``` self: QtC.KOSRelease, allocator: std.mem.Allocator ```
    pub fn ExtraKeys(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KOSRelease_ExtraKeys(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kosrelease.ExtraKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kosrelease.ExtraKeys: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#extraValue)
    ///
    /// ``` self: QtC.KOSRelease, key: []const u8, allocator: std.mem.Allocator ```
    pub fn ExtraValue(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.KOSRelease_ExtraValue(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.ExtraValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api-staging.kde.org/kosrelease.html#dtor.KOSRelease)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KOSRelease ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KOSRelease_Delete(@ptrCast(self));
    }
};
