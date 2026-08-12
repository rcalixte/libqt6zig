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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KOSRelease object in C++ memory
    ///
    pub fn new() KOSRelease {
        return .{ .ptr = qtc.KOSRelease_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KOSRelease object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn new2(filePath: []const u8) KOSRelease {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        return .{ .ptr = qtc.KOSRelease_new2(filePath_str) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `idLike` instead
    ///
    pub const IdLike = idLike;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#idLike)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn idLike(self: KOSRelease, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KOSRelease_IdLike(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KOSRelease.idLike: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KOSRelease.idLike: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `versionCodename` instead
    ///
    pub const VersionCodename = versionCodename;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#versionCodename)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn versionCodename(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_VersionCodename(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.versionCodename: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `versionId` instead
    ///
    pub const VersionId = versionId;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#versionId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn versionId(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_VersionId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.versionId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `prettyName` instead
    ///
    pub const PrettyName = prettyName;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#prettyName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn prettyName(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_PrettyName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.prettyName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `ansiColor` instead
    ///
    pub const AnsiColor = ansiColor;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#ansiColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ansiColor(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_AnsiColor(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.ansiColor: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `cpeName` instead
    ///
    pub const CpeName = cpeName;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#cpeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn cpeName(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_CpeName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.cpeName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `homeUrl` instead
    ///
    pub const HomeUrl = homeUrl;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#homeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn homeUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_HomeUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.homeUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `documentationUrl` instead
    ///
    pub const DocumentationUrl = documentationUrl;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#documentationUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentationUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_DocumentationUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.documentationUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportUrl` instead
    ///
    pub const SupportUrl = supportUrl;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#supportUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn supportUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_SupportUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.supportUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bugReportUrl` instead
    ///
    pub const BugReportUrl = bugReportUrl;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#bugReportUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn bugReportUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_BugReportUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.bugReportUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `privacyPolicyUrl` instead
    ///
    pub const PrivacyPolicyUrl = privacyPolicyUrl;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#privacyPolicyUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn privacyPolicyUrl(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_PrivacyPolicyUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.privacyPolicyUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `buildId` instead
    ///
    pub const BuildId = buildId;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#buildId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn buildId(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_BuildId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.buildId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `variant` instead
    ///
    pub const Variant = variant;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#variant)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn variant(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Variant(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.variant: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `variantId` instead
    ///
    pub const VariantId = variantId;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#variantId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn variantId(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_VariantId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.variantId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `logo` instead
    ///
    pub const Logo = logo;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#logo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn logo(self: KOSRelease, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KOSRelease_Logo(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.logo: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `extraKeys` instead
    ///
    pub const ExtraKeys = extraKeys;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#extraKeys)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KOSRelease `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extraKeys(self: KOSRelease, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KOSRelease_ExtraKeys(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KOSRelease.extraKeys: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KOSRelease.extraKeys: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `extraValue` instead
    ///
    pub const ExtraValue = extraValue;

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
    pub fn extraValue(self: KOSRelease, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KOSRelease_ExtraValue(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KOSRelease.extraValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kosrelease.html#dtor.KOSRelease)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KOSRelease `
    ///
    pub fn delete(self: KOSRelease) void {
        qtc.KOSRelease_Delete(@ptrCast(self.ptr));
    }
};
