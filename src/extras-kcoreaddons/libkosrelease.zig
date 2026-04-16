const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kosrelease.html)
pub const KOSRelease = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kosrelease.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KOSRelease,

    pub const _is_KOSRelease = {};

    /// New constructs a new KOSRelease object.
    ///
    pub fn New() KOSRelease {
        return .{ .ptr = qtc.KOSRelease_new() };
    }

    /// New2 constructs a new KOSRelease object.
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn New2(filePath: []const u8) KOSRelease {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        return .{ .ptr = qtc.KOSRelease_new2(filePath_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#idLike)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn IdLike(self: KOSRelease, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KOSRelease_IdLike(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#versionCodename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VersionCodename(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_VersionCodename(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.VersionCodename: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#versionId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VersionId(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_VersionId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.VersionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#prettyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrettyName(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_PrettyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.PrettyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#ansiColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AnsiColor(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_AnsiColor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.AnsiColor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#cpeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CpeName(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_CpeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.CpeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#homeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HomeUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_HomeUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.HomeUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#documentationUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentationUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_DocumentationUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.DocumentationUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#supportUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_SupportUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.SupportUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#bugReportUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BugReportUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_BugReportUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.BugReportUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#privacyPolicyUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PrivacyPolicyUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_PrivacyPolicyUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.PrivacyPolicyUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#buildId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn BuildId(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_BuildId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.BuildId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#variant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Variant(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Variant(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Variant: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#variantId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn VariantId(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_VariantId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.VariantId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#logo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Logo(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Logo(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.Logo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#extraKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtraKeys(self: KOSRelease, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KOSRelease_ExtraKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#extraValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn ExtraValue(self: KOSRelease, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KOSRelease_ExtraValue(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kosrelease.ExtraValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#dtor.KOSRelease)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KOSRelease `
    ///
    pub fn Delete(self: KOSRelease) void {
        qtc.KOSRelease_Delete(@ptrCast(self.ptr));
    }
};
