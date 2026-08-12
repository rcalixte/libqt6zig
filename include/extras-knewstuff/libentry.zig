const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KNSCore__Author = @import("libqt6").KNSCore__Author;
const QDate = @import("libqt6").QDate;
const QImage = @import("libqt6").QImage;
const QUrl = @import("libqt6").QUrl;
const QXmlStreamReader = @import("libqt6").QXmlStreamReader;
const entry_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/knscore.html)
pub const KNSCore = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore,

    pub const _is_KNSCore = {};

    /// ### DEPRECATED: Use `replaceBBCode` instead
    ///
    pub const ReplaceBBCode = replaceBBCode;

    /// ### [Upstream resources](https://api.kde.org/knscore.html#replaceBBCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` unformattedText: []const u8 `
    ///
    pub fn replaceBBCode(allocator: std.mem.Allocator, unformattedText: []const u8) []const u8 {
        const unformattedText_str = qtc.libqt_string{
            .len = unformattedText.len,
            .data = unformattedText.ptr,
        };
        var _str = qtc.KNSCore_ReplaceBBCode(unformattedText_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore.replaceBBCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `qHash` instead
    ///
    pub const QHash = qHash;

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` entry: KNSCore__Entry `
    ///
    /// ` seed: usize `
    ///
    pub fn qHash(entry: anytype, seed: usize) usize {
        comptime _ = @TypeOf(entry)._is_KNSCore__Entry;
        return qtc.KNSCore_QHash(@ptrCast(entry.ptr), @bitCast(seed));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-entry.html)
pub const KNSCore__Entry = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__Entry,

    pub const _is_KNSCore__Entry = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::Entry object in C++ memory
    ///
    pub fn new() KNSCore__Entry {
        return .{ .ptr = qtc.KNSCore__Entry_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNSCore::Entry object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KNSCore__Entry `
    ///
    pub fn new2(other: anytype) KNSCore__Entry {
        comptime _ = @TypeOf(other)._is_KNSCore__Entry;
        return .{ .ptr = qtc.KNSCore__Entry_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` other: KNSCore__Entry `
    ///
    pub fn operatorAssign(self: KNSCore__Entry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KNSCore__Entry;
        qtc.KNSCore__Entry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` other: KNSCore__Entry `
    ///
    pub fn operatorEqual(self: KNSCore__Entry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KNSCore__Entry;
        return qtc.KNSCore__Entry_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` other: KNSCore__Entry `
    ///
    pub fn operatorLesser(self: KNSCore__Entry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KNSCore__Entry;
        return qtc.KNSCore__Entry_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn isValid(self: KNSCore__Entry) bool {
        return qtc.KNSCore__Entry_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KNSCore__Entry, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KNSCore__Entry_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUniqueId` instead
    ///
    pub const SetUniqueId = setUniqueId;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setUniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` id: []const u8 `
    ///
    pub fn setUniqueId(self: KNSCore__Entry, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Entry_SetUniqueId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `uniqueId` instead
    ///
    pub const UniqueId = uniqueId;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uniqueId(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_UniqueId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.uniqueId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCategory` instead
    ///
    pub const SetCategory = setCategory;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _category: []const u8 `
    ///
    pub fn setCategory(self: KNSCore__Entry, _category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = _category.len,
            .data = _category.ptr,
        };
        qtc.KNSCore__Entry_SetCategory(@ptrCast(self.ptr), category_str);
    }

    /// ### DEPRECATED: Use `category` instead
    ///
    pub const Category = category;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn category(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setHomepage` instead
    ///
    pub const SetHomepage = setHomepage;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` page: QUrl `
    ///
    pub fn setHomepage(self: KNSCore__Entry, page: anytype) void {
        comptime _ = @TypeOf(page)._is_QUrl;
        qtc.KNSCore__Entry_SetHomepage(@ptrCast(self.ptr), @ptrCast(page.ptr));
    }

    /// ### DEPRECATED: Use `homepage` instead
    ///
    pub const Homepage = homepage;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn homepage(self: KNSCore__Entry) QUrl {
        return .{ .ptr = qtc.KNSCore__Entry_Homepage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setAuthor` instead
    ///
    pub const SetAuthor = setAuthor;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _author: KNSCore__Author `
    ///
    pub fn setAuthor(self: KNSCore__Entry, _author: anytype) void {
        comptime _ = @TypeOf(_author)._is_KNSCore__Author;
        qtc.KNSCore__Entry_SetAuthor(@ptrCast(self.ptr), @ptrCast(_author.ptr));
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#author)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn author(self: KNSCore__Entry) KNSCore__Author {
        return .{ .ptr = qtc.KNSCore__Entry_Author(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLicense` instead
    ///
    pub const SetLicense = setLicense;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _license: []const u8 `
    ///
    pub fn setLicense(self: KNSCore__Entry, _license: []const u8) void {
        const license_str = qtc.libqt_string{
            .len = _license.len,
            .data = _license.ptr,
        };
        qtc.KNSCore__Entry_SetLicense(@ptrCast(self.ptr), license_str);
    }

    /// ### DEPRECATED: Use `license` instead
    ///
    pub const License = license;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn license(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.license: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSummary` instead
    ///
    pub const SetSummary = setSummary;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setSummary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _summary: []const u8 `
    ///
    pub fn setSummary(self: KNSCore__Entry, _summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = _summary.len,
            .data = _summary.ptr,
        };
        qtc.KNSCore__Entry_SetSummary(@ptrCast(self.ptr), summary_str);
    }

    /// ### DEPRECATED: Use `shortSummary` instead
    ///
    pub const ShortSummary = shortSummary;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#shortSummary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn shortSummary(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_ShortSummary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.shortSummary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setShortSummary` instead
    ///
    pub const SetShortSummary = setShortSummary;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setShortSummary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _summary: []const u8 `
    ///
    pub fn setShortSummary(self: KNSCore__Entry, _summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = _summary.len,
            .data = _summary.ptr,
        };
        qtc.KNSCore__Entry_SetShortSummary(@ptrCast(self.ptr), summary_str);
    }

    /// ### DEPRECATED: Use `summary` instead
    ///
    pub const Summary = summary;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#summary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn summary(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Summary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setChangelog` instead
    ///
    pub const SetChangelog = setChangelog;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setChangelog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _changelog: []const u8 `
    ///
    pub fn setChangelog(self: KNSCore__Entry, _changelog: []const u8) void {
        const changelog_str = qtc.libqt_string{
            .len = _changelog.len,
            .data = _changelog.ptr,
        };
        qtc.KNSCore__Entry_SetChangelog(@ptrCast(self.ptr), changelog_str);
    }

    /// ### DEPRECATED: Use `changelog` instead
    ///
    pub const Changelog = changelog;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#changelog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn changelog(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Changelog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.changelog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setVersion` instead
    ///
    pub const SetVersion = setVersion;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _version: []const u8 `
    ///
    pub fn setVersion(self: KNSCore__Entry, _version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        qtc.KNSCore__Entry_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setReleaseDate` instead
    ///
    pub const SetReleaseDate = setReleaseDate;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setReleaseDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` releasedate: QDate `
    ///
    pub fn setReleaseDate(self: KNSCore__Entry, releasedate: anytype) void {
        comptime _ = @TypeOf(releasedate)._is_QDate;
        qtc.KNSCore__Entry_SetReleaseDate(@ptrCast(self.ptr), @ptrCast(releasedate.ptr));
    }

    /// ### DEPRECATED: Use `releaseDate` instead
    ///
    pub const ReleaseDate = releaseDate;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#releaseDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn releaseDate(self: KNSCore__Entry) QDate {
        return .{ .ptr = qtc.KNSCore__Entry_ReleaseDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUpdateVersion` instead
    ///
    pub const SetUpdateVersion = setUpdateVersion;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setUpdateVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _version: []const u8 `
    ///
    pub fn setUpdateVersion(self: KNSCore__Entry, _version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = _version.len,
            .data = _version.ptr,
        };
        qtc.KNSCore__Entry_SetUpdateVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### DEPRECATED: Use `updateVersion` instead
    ///
    pub const UpdateVersion = updateVersion;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#updateVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn updateVersion(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_UpdateVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.updateVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setUpdateReleaseDate` instead
    ///
    pub const SetUpdateReleaseDate = setUpdateReleaseDate;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setUpdateReleaseDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` releasedate: QDate `
    ///
    pub fn setUpdateReleaseDate(self: KNSCore__Entry, releasedate: anytype) void {
        comptime _ = @TypeOf(releasedate)._is_QDate;
        qtc.KNSCore__Entry_SetUpdateReleaseDate(@ptrCast(self.ptr), @ptrCast(releasedate.ptr));
    }

    /// ### DEPRECATED: Use `updateReleaseDate` instead
    ///
    pub const UpdateReleaseDate = updateReleaseDate;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#updateReleaseDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn updateReleaseDate(self: KNSCore__Entry) QDate {
        return .{ .ptr = qtc.KNSCore__Entry_UpdateReleaseDate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPayload` instead
    ///
    pub const SetPayload = setPayload;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setPayload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` url: []const u8 `
    ///
    pub fn setPayload(self: KNSCore__Entry, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KNSCore__Entry_SetPayload(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `payload` instead
    ///
    pub const Payload = payload;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#payload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn payload(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Payload(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.payload: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPreviewUrl` instead
    ///
    pub const SetPreviewUrl = setPreviewUrl;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setPreviewUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` url: []const u8 `
    ///
    pub fn setPreviewUrl(self: KNSCore__Entry, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KNSCore__Entry_SetPreviewUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### DEPRECATED: Use `previewUrl` instead
    ///
    pub const PreviewUrl = previewUrl;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#previewUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn previewUrl(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_PreviewUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.previewUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `previewImage` instead
    ///
    pub const PreviewImage = previewImage;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#previewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn previewImage(self: KNSCore__Entry) QImage {
        return .{ .ptr = qtc.KNSCore__Entry_PreviewImage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPreviewImage` instead
    ///
    pub const SetPreviewImage = setPreviewImage;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setPreviewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` image: QImage `
    ///
    pub fn setPreviewImage(self: KNSCore__Entry, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KNSCore__Entry_SetPreviewImage(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

    /// ### DEPRECATED: Use `setInstalledFiles` instead
    ///
    pub const SetInstalledFiles = setInstalledFiles;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setInstalledFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` files: []const []const u8 `
    ///
    pub fn setInstalledFiles(self: KNSCore__Entry, allocator: std.mem.Allocator, files: []const []const u8) void {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("KNSCore__Entry.setInstalledFiles: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |str_item, i|
            files_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        qtc.KNSCore__Entry_SetInstalledFiles(@ptrCast(self.ptr), files_list);
    }

    /// ### DEPRECATED: Use `installedFiles` instead
    ///
    pub const InstalledFiles = installedFiles;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#installedFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn installedFiles(self: KNSCore__Entry, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_InstalledFiles(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__Entry.installedFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__Entry.installedFiles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `uninstalledFiles` instead
    ///
    pub const UninstalledFiles = uninstalledFiles;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#uninstalledFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn uninstalledFiles(self: KNSCore__Entry, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_UninstalledFiles(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__Entry.uninstalledFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__Entry.uninstalledFiles: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setRating` instead
    ///
    pub const SetRating = setRating;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _rating: i32 `
    ///
    pub fn setRating(self: KNSCore__Entry, _rating: i32) void {
        qtc.KNSCore__Entry_SetRating(@ptrCast(self.ptr), @bitCast(_rating));
    }

    /// ### DEPRECATED: Use `rating` instead
    ///
    pub const Rating = rating;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#rating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn rating(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_Rating(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNumberOfComments` instead
    ///
    pub const SetNumberOfComments = setNumberOfComments;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setNumberOfComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` comments: i32 `
    ///
    pub fn setNumberOfComments(self: KNSCore__Entry, comments: i32) void {
        qtc.KNSCore__Entry_SetNumberOfComments(@ptrCast(self.ptr), @bitCast(comments));
    }

    /// ### DEPRECATED: Use `numberOfComments` instead
    ///
    pub const NumberOfComments = numberOfComments;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#numberOfComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn numberOfComments(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_NumberOfComments(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDownloadCount` instead
    ///
    pub const SetDownloadCount = setDownloadCount;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setDownloadCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` downloads: i32 `
    ///
    pub fn setDownloadCount(self: KNSCore__Entry, downloads: i32) void {
        qtc.KNSCore__Entry_SetDownloadCount(@ptrCast(self.ptr), @bitCast(downloads));
    }

    /// ### DEPRECATED: Use `downloadCount` instead
    ///
    pub const DownloadCount = downloadCount;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#downloadCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn downloadCount(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_DownloadCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `numberFans` instead
    ///
    pub const NumberFans = numberFans;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#numberFans)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn numberFans(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_NumberFans(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNumberFans` instead
    ///
    pub const SetNumberFans = setNumberFans;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setNumberFans)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` fans: i32 `
    ///
    pub fn setNumberFans(self: KNSCore__Entry, fans: i32) void {
        qtc.KNSCore__Entry_SetNumberFans(@ptrCast(self.ptr), @bitCast(fans));
    }

    /// ### DEPRECATED: Use `numberKnowledgebaseEntries` instead
    ///
    pub const NumberKnowledgebaseEntries = numberKnowledgebaseEntries;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#numberKnowledgebaseEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn numberKnowledgebaseEntries(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_NumberKnowledgebaseEntries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNumberKnowledgebaseEntries` instead
    ///
    pub const SetNumberKnowledgebaseEntries = setNumberKnowledgebaseEntries;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setNumberKnowledgebaseEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` num: i32 `
    ///
    pub fn setNumberKnowledgebaseEntries(self: KNSCore__Entry, num: i32) void {
        qtc.KNSCore__Entry_SetNumberKnowledgebaseEntries(@ptrCast(self.ptr), @bitCast(num));
    }

    /// ### DEPRECATED: Use `knowledgebaseLink` instead
    ///
    pub const KnowledgebaseLink = knowledgebaseLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#knowledgebaseLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn knowledgebaseLink(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_KnowledgebaseLink(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.knowledgebaseLink: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setKnowledgebaseLink` instead
    ///
    pub const SetKnowledgebaseLink = setKnowledgebaseLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setKnowledgebaseLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` link: []const u8 `
    ///
    pub fn setKnowledgebaseLink(self: KNSCore__Entry, link: []const u8) void {
        const link_str = qtc.libqt_string{
            .len = link.len,
            .data = link.ptr,
        };
        qtc.KNSCore__Entry_SetKnowledgebaseLink(@ptrCast(self.ptr), link_str);
    }

    /// ### DEPRECATED: Use `downloadLinkCount` instead
    ///
    pub const DownloadLinkCount = downloadLinkCount;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#downloadLinkCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn downloadLinkCount(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_DownloadLinkCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `downloadLinkInformationList` instead
    ///
    pub const DownloadLinkInformationList = downloadLinkInformationList;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#downloadLinkInformationList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadLinkInformationList(self: KNSCore__Entry, allocator: std.mem.Allocator) []KNSCore__Entry__DownloadLinkInformation {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_DownloadLinkInformationList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__Entry__DownloadLinkInformation, _arr.len) catch @panic("KNSCore__Entry.downloadLinkInformationList: Memory allocation failed");
        const _data_val: [*]QtC.KNSCore__Entry__DownloadLinkInformation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `appendDownloadLinkInformation` instead
    ///
    pub const AppendDownloadLinkInformation = appendDownloadLinkInformation;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#appendDownloadLinkInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` info: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn appendDownloadLinkInformation(self: KNSCore__Entry, info: anytype) void {
        comptime _ = @TypeOf(info)._is_KNSCore__Entry__DownloadLinkInformation;
        qtc.KNSCore__Entry_AppendDownloadLinkInformation(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### DEPRECATED: Use `clearDownloadLinkInformation` instead
    ///
    pub const ClearDownloadLinkInformation = clearDownloadLinkInformation;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#clearDownloadLinkInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn clearDownloadLinkInformation(self: KNSCore__Entry) void {
        qtc.KNSCore__Entry_ClearDownloadLinkInformation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `donationLink` instead
    ///
    pub const DonationLink = donationLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#donationLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn donationLink(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_DonationLink(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.donationLink: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDonationLink` instead
    ///
    pub const SetDonationLink = setDonationLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setDonationLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` link: []const u8 `
    ///
    pub fn setDonationLink(self: KNSCore__Entry, link: []const u8) void {
        const link_str = qtc.libqt_string{
            .len = link.len,
            .data = link.ptr,
        };
        qtc.KNSCore__Entry_SetDonationLink(@ptrCast(self.ptr), link_str);
    }

    /// ### DEPRECATED: Use `tags` instead
    ///
    pub const Tags = tags;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#tags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tags(self: KNSCore__Entry, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_Tags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KNSCore__Entry.tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KNSCore__Entry.tags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setTags` instead
    ///
    pub const SetTags = setTags;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _tags: []const []const u8 `
    ///
    pub fn setTags(self: KNSCore__Entry, allocator: std.mem.Allocator, _tags: []const []const u8) void {
        const tags_arr = allocator.alloc(qtc.libqt_string, _tags.len) catch @panic("KNSCore__Entry.setTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (_tags, 0.._tags.len) |str_item, i|
            tags_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const tags_list = qtc.libqt_list{
            .len = _tags.len,
            .data = tags_arr.ptr,
        };
        qtc.KNSCore__Entry_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### DEPRECATED: Use `providerId` instead
    ///
    pub const ProviderId = providerId;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#providerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn providerId(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_ProviderId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.providerId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setProviderId` instead
    ///
    pub const SetProviderId = setProviderId;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setProviderId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` id: []const u8 `
    ///
    pub fn setProviderId(self: KNSCore__Entry, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Entry_SetProviderId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `setSource` instead
    ///
    pub const SetSource = setSource;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _source: entry_enums.Source `
    ///
    pub fn setSource(self: KNSCore__Entry, _source: i32) void {
        qtc.KNSCore__Entry_SetSource(@ptrCast(self.ptr), @bitCast(_source));
    }

    /// ### DEPRECATED: Use `source` instead
    ///
    pub const Source = source;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ## Returns:
    ///
    /// ` entry_enums.Source `
    ///
    pub fn source(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_Source(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEntryType` instead
    ///
    pub const SetEntryType = setEntryType;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setEntryType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` typeVal: entry_enums.EntryType `
    ///
    pub fn setEntryType(self: KNSCore__Entry, typeVal: i32) void {
        qtc.KNSCore__Entry_SetEntryType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `entryType` instead
    ///
    pub const EntryType = entryType;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#entryType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ## Returns:
    ///
    /// ` entry_enums.EntryType `
    ///
    pub fn entryType(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_EntryType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEntryXML` instead
    ///
    pub const SetEntryXML = setEntryXML;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setEntryXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` reader: QXmlStreamReader `
    ///
    pub fn setEntryXML(self: KNSCore__Entry, reader: anytype) bool {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        return qtc.KNSCore__Entry_SetEntryXML(@ptrCast(self.ptr), @ptrCast(reader.ptr));
    }

    /// ### DEPRECATED: Use `setStatus` instead
    ///
    pub const SetStatus = setStatus;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` _status: entry_enums.Status `
    ///
    pub fn setStatus(self: KNSCore__Entry, _status: i32) void {
        qtc.KNSCore__Entry_SetStatus(@ptrCast(self.ptr), @bitCast(_status));
    }

    /// ### DEPRECATED: Use `status` instead
    ///
    pub const Status = status;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#status)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ## Returns:
    ///
    /// ` entry_enums.Status `
    ///
    pub fn status(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_Status(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEntryDeleted` instead
    ///
    pub const SetEntryDeleted = setEntryDeleted;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setEntryDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn setEntryDeleted(self: KNSCore__Entry) void {
        qtc.KNSCore__Entry_SetEntryDeleted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setPreviewUrl2` instead
    ///
    pub const SetPreviewUrl2 = setPreviewUrl2;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setPreviewUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` url: []const u8 `
    ///
    /// ` typeVal: entry_enums.PreviewType `
    ///
    pub fn setPreviewUrl2(self: KNSCore__Entry, url: []const u8, typeVal: i32) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KNSCore__Entry_SetPreviewUrl2(@ptrCast(self.ptr), url_str, @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `previewUrl1` instead
    ///
    pub const PreviewUrl1 = previewUrl1;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#previewUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` typeVal: entry_enums.PreviewType `
    ///
    pub fn previewUrl1(self: KNSCore__Entry, allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.KNSCore__Entry_PreviewUrl1(@ptrCast(self.ptr), @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KNSCore__Entry.previewUrl1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `previewImage1` instead
    ///
    pub const PreviewImage1 = previewImage1;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#previewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` typeVal: entry_enums.PreviewType `
    ///
    pub fn previewImage1(self: KNSCore__Entry, typeVal: i32) QImage {
        return .{ .ptr = qtc.KNSCore__Entry_PreviewImage1(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `setPreviewImage2` instead
    ///
    pub const SetPreviewImage2 = setPreviewImage2;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setPreviewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` image: QImage `
    ///
    /// ` typeVal: entry_enums.PreviewType `
    ///
    pub fn setPreviewImage2(self: KNSCore__Entry, image: anytype, typeVal: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KNSCore__Entry_SetPreviewImage2(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn delete(self: KNSCore__Entry) void {
        qtc.KNSCore__Entry_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html)
pub const KNSCore__Entry__DownloadLinkInformation = extern struct {
    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KNSCore__Entry__DownloadLinkInformation,

    pub const _is_KNSCore__Entry__DownloadLinkInformation = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KNSCore::Entry::DownloadLinkInformation object in C++ memory
    ///
    pub fn new() KNSCore__Entry__DownloadLinkInformation {
        return .{ .ptr = qtc.KNSCore__Entry__DownloadLinkInformation_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KNSCore::Entry::DownloadLinkInformation object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn new2(param1: anytype) KNSCore__Entry__DownloadLinkInformation {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry__DownloadLinkInformation;
        return .{ .ptr = qtc.KNSCore__Entry__DownloadLinkInformation_new2(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KNSCore__Entry__DownloadLinkInformation_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("KNSCore__Entry__DownloadLinkInformation.name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: KNSCore__Entry__DownloadLinkInformation, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `priceAmount` instead
    ///
    pub const PriceAmount = priceAmount;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#priceAmount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn priceAmount(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const u8 {
        var priceAmount_str = qtc.KNSCore__Entry__DownloadLinkInformation_PriceAmount(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&priceAmount_str);
        const priceAmount_ret = allocator.alloc(u8, priceAmount_str.len) catch @panic("KNSCore__Entry__DownloadLinkInformation.priceAmount: Memory allocation failed");
        @memcpy(priceAmount_ret, priceAmount_str.data[0..priceAmount_str.len]);
        return priceAmount_ret;
    }

    /// ### DEPRECATED: Use `setPriceAmount` instead
    ///
    pub const SetPriceAmount = setPriceAmount;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#priceAmount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` _priceAmount: []const u8 `
    ///
    pub fn setPriceAmount(self: KNSCore__Entry__DownloadLinkInformation, _priceAmount: []const u8) void {
        const priceAmount_str = qtc.libqt_string{
            .len = _priceAmount.len,
            .data = _priceAmount.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetPriceAmount(@ptrCast(self.ptr), priceAmount_str);
    }

    /// ### DEPRECATED: Use `distributionType` instead
    ///
    pub const DistributionType = distributionType;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#distributionType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn distributionType(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const u8 {
        var distributionType_str = qtc.KNSCore__Entry__DownloadLinkInformation_DistributionType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&distributionType_str);
        const distributionType_ret = allocator.alloc(u8, distributionType_str.len) catch @panic("KNSCore__Entry__DownloadLinkInformation.distributionType: Memory allocation failed");
        @memcpy(distributionType_ret, distributionType_str.data[0..distributionType_str.len]);
        return distributionType_ret;
    }

    /// ### DEPRECATED: Use `setDistributionType` instead
    ///
    pub const SetDistributionType = setDistributionType;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#distributionType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` _distributionType: []const u8 `
    ///
    pub fn setDistributionType(self: KNSCore__Entry__DownloadLinkInformation, _distributionType: []const u8) void {
        const distributionType_str = qtc.libqt_string{
            .len = _distributionType.len,
            .data = _distributionType.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetDistributionType(@ptrCast(self.ptr), distributionType_str);
    }

    /// ### DEPRECATED: Use `descriptionLink` instead
    ///
    pub const DescriptionLink = descriptionLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#descriptionLink-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn descriptionLink(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const u8 {
        var descriptionLink_str = qtc.KNSCore__Entry__DownloadLinkInformation_DescriptionLink(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&descriptionLink_str);
        const descriptionLink_ret = allocator.alloc(u8, descriptionLink_str.len) catch @panic("KNSCore__Entry__DownloadLinkInformation.descriptionLink: Memory allocation failed");
        @memcpy(descriptionLink_ret, descriptionLink_str.data[0..descriptionLink_str.len]);
        return descriptionLink_ret;
    }

    /// ### DEPRECATED: Use `setDescriptionLink` instead
    ///
    pub const SetDescriptionLink = setDescriptionLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#descriptionLink-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` _descriptionLink: []const u8 `
    ///
    pub fn setDescriptionLink(self: KNSCore__Entry__DownloadLinkInformation, _descriptionLink: []const u8) void {
        const descriptionLink_str = qtc.libqt_string{
            .len = _descriptionLink.len,
            .data = _descriptionLink.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetDescriptionLink(@ptrCast(self.ptr), descriptionLink_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn id(self: KNSCore__Entry__DownloadLinkInformation) i32 {
        return qtc.KNSCore__Entry__DownloadLinkInformation_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` _id: i32 `
    ///
    pub fn setId(self: KNSCore__Entry__DownloadLinkInformation, _id: i32) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_SetId(@ptrCast(self.ptr), @bitCast(_id));
    }

    /// ### DEPRECATED: Use `isDownloadtypeLink` instead
    ///
    pub const IsDownloadtypeLink = isDownloadtypeLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#isDownloadtypeLink-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn isDownloadtypeLink(self: KNSCore__Entry__DownloadLinkInformation) bool {
        return qtc.KNSCore__Entry__DownloadLinkInformation_IsDownloadtypeLink(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIsDownloadtypeLink` instead
    ///
    pub const SetIsDownloadtypeLink = setIsDownloadtypeLink;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#isDownloadtypeLink-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` _isDownloadtypeLink: bool `
    ///
    pub fn setIsDownloadtypeLink(self: KNSCore__Entry__DownloadLinkInformation, _isDownloadtypeLink: bool) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_SetIsDownloadtypeLink(@ptrCast(self.ptr), _isDownloadtypeLink);
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn size(self: KNSCore__Entry__DownloadLinkInformation) u64 {
        return qtc.KNSCore__Entry__DownloadLinkInformation_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSize` instead
    ///
    pub const SetSize = setSize;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` _size: u64 `
    ///
    pub fn setSize(self: KNSCore__Entry__DownloadLinkInformation, _size: u64) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_SetSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `tags` instead
    ///
    pub const Tags = tags;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#tags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tags(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const []const u8 {
        const tags_arr: qtc.libqt_list = qtc.KNSCore__Entry__DownloadLinkInformation_Tags(@ptrCast(self.ptr));
        var tags_str: [*]qtc.libqt_string = @ptrCast(@alignCast(tags_arr.data));
        defer {
            for (0..tags_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&tags_str[i]));
            qtc.libqt_free(tags_arr.data);
        }
        const tags_ret = allocator.alloc([]const u8, tags_arr.len) catch @panic("KNSCore__Entry__DownloadLinkInformation.tags: Memory allocation failed");
        for (0..tags_arr.len) |i| {
            const tags_data_val = tags_str[i];
            const tags_buf = allocator.alloc(u8, tags_data_val.len) catch @panic("KNSCore__Entry__DownloadLinkInformation.tags: Memory allocation failed");
            @memcpy(tags_buf, tags_data_val.data[0..tags_data_val.len]);
            tags_ret[i] = tags_buf;
        }
        return tags_ret;
    }

    /// ### DEPRECATED: Use `setTags` instead
    ///
    pub const SetTags = setTags;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#tags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _tags: []const []const u8 `
    ///
    pub fn setTags(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator, _tags: []const []const u8) void {
        const tags_arr = allocator.alloc(qtc.libqt_string, _tags.len) catch @panic("KNSCore__Entry__DownloadLinkInformation.setTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (_tags, 0.._tags.len) |str_item, i|
            tags_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const tags_list = qtc.libqt_list{
            .len = _tags.len,
            .data = tags_arr.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` param1: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn operatorAssign(self: KNSCore__Entry__DownloadLinkInformation, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry__DownloadLinkInformation;
        qtc.KNSCore__Entry__DownloadLinkInformation_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn delete(self: KNSCore__Entry__DownloadLinkInformation) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/knscore-entry.html#public-types)
pub const enums = struct {
    pub const Status = enum(i32) {
        pub const Invalid: i32 = 0;
        pub const Downloadable: i32 = 1;
        pub const Installed: i32 = 2;
        pub const Updateable: i32 = 3;
        pub const Deleted: i32 = 4;
        pub const Installing: i32 = 5;
        pub const Updating: i32 = 6;
    };

    pub const Source = enum(i32) {
        pub const Cache: i32 = 0;
        pub const Online: i32 = 1;
        pub const Registry: i32 = 2;
    };

    pub const PreviewType = enum(i32) {
        pub const PreviewSmall1: i32 = 0;
        pub const PreviewSmall2: i32 = 1;
        pub const PreviewSmall3: i32 = 2;
        pub const PreviewBig1: i32 = 3;
        pub const PreviewBig2: i32 = 4;
        pub const PreviewBig3: i32 = 5;
    };

    pub const EntryEvent = enum(i32) {
        pub const UnknownEvent: i32 = 0;
        pub const StatusChangedEvent: i32 = 1;
        pub const AdoptedEvent: i32 = 2;
        pub const DetailsLoadedEvent: i32 = 3;
    };

    pub const EntryType = enum(i32) {
        pub const CatalogEntry: i32 = 0;
        pub const GroupEntry: i32 = 1;
    };
};
