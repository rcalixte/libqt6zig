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

    /// ### [Upstream resources](https://api.kde.org/knscore.html#replaceBBCode)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn ReplaceBBCode(allocator: std.mem.Allocator, param1: []const u8) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        var _str = qtc.KNSCore_ReplaceBBCode(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore.ReplaceBBCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore.html#qHash)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__Entry `
    ///
    /// ` param2: usize `
    ///
    pub fn QHash(param1: anytype, param2: usize) usize {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry;
        return qtc.KNSCore_QHash(@ptrCast(param1.ptr), @bitCast(param2));
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

    /// New constructs a new KNSCore::Entry object.
    ///
    pub fn New() KNSCore__Entry {
        return .{ .ptr = qtc.KNSCore__Entry_new() };
    }

    /// New2 constructs a new KNSCore::Entry object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KNSCore__Entry `
    ///
    pub fn New2(other: anytype) KNSCore__Entry {
        comptime _ = @TypeOf(other)._is_KNSCore__Entry;
        return .{ .ptr = qtc.KNSCore__Entry_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` other: KNSCore__Entry `
    ///
    pub fn OperatorAssign(self: KNSCore__Entry, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KNSCore__Entry;
        qtc.KNSCore__Entry_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` other: KNSCore__Entry `
    ///
    pub fn OperatorEqual(self: KNSCore__Entry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KNSCore__Entry;
        return qtc.KNSCore__Entry_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` other: KNSCore__Entry `
    ///
    pub fn OperatorLesser(self: KNSCore__Entry, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_KNSCore__Entry;
        return qtc.KNSCore__Entry_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn IsValid(self: KNSCore__Entry) bool {
        return qtc.KNSCore__Entry_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KNSCore__Entry, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Entry_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setUniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetUniqueId(self: KNSCore__Entry, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Entry_SetUniqueId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#uniqueId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UniqueId(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_UniqueId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.UniqueId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setCategory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` category: []const u8 `
    ///
    pub fn SetCategory(self: KNSCore__Entry, category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        qtc.KNSCore__Entry_SetCategory(@ptrCast(self.ptr), category_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#category)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Category(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Category(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.Category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setHomepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` page: QUrl `
    ///
    pub fn SetHomepage(self: KNSCore__Entry, page: anytype) void {
        comptime _ = @TypeOf(page)._is_QUrl;
        qtc.KNSCore__Entry_SetHomepage(@ptrCast(self.ptr), @ptrCast(page.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#homepage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn Homepage(self: KNSCore__Entry) QUrl {
        return .{ .ptr = qtc.KNSCore__Entry_Homepage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setAuthor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` author: KNSCore__Author `
    ///
    pub fn SetAuthor(self: KNSCore__Entry, author: anytype) void {
        comptime _ = @TypeOf(author)._is_KNSCore__Author;
        qtc.KNSCore__Entry_SetAuthor(@ptrCast(self.ptr), @ptrCast(author.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#author)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn Author(self: KNSCore__Entry) KNSCore__Author {
        return .{ .ptr = qtc.KNSCore__Entry_Author(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setLicense)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` license: []const u8 `
    ///
    pub fn SetLicense(self: KNSCore__Entry, license: []const u8) void {
        const license_str = qtc.libqt_string{
            .len = license.len,
            .data = license.ptr,
        };
        qtc.KNSCore__Entry_SetLicense(@ptrCast(self.ptr), license_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn License(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setSummary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` summary: []const u8 `
    ///
    pub fn SetSummary(self: KNSCore__Entry, summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.KNSCore__Entry_SetSummary(@ptrCast(self.ptr), summary_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#shortSummary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ShortSummary(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_ShortSummary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.ShortSummary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setShortSummary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` summary: []const u8 `
    ///
    pub fn SetShortSummary(self: KNSCore__Entry, summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.KNSCore__Entry_SetShortSummary(@ptrCast(self.ptr), summary_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#summary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Summary(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Summary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.Summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setChangelog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` changelog: []const u8 `
    ///
    pub fn SetChangelog(self: KNSCore__Entry, changelog: []const u8) void {
        const changelog_str = qtc.libqt_string{
            .len = changelog.len,
            .data = changelog.ptr,
        };
        qtc.KNSCore__Entry_SetChangelog(@ptrCast(self.ptr), changelog_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#changelog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Changelog(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Changelog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.Changelog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetVersion(self: KNSCore__Entry, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.KNSCore__Entry_SetVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setReleaseDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` releasedate: QDate `
    ///
    pub fn SetReleaseDate(self: KNSCore__Entry, releasedate: anytype) void {
        comptime _ = @TypeOf(releasedate)._is_QDate;
        qtc.KNSCore__Entry_SetReleaseDate(@ptrCast(self.ptr), @ptrCast(releasedate.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#releaseDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn ReleaseDate(self: KNSCore__Entry) QDate {
        return .{ .ptr = qtc.KNSCore__Entry_ReleaseDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setUpdateVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` version: []const u8 `
    ///
    pub fn SetUpdateVersion(self: KNSCore__Entry, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.KNSCore__Entry_SetUpdateVersion(@ptrCast(self.ptr), version_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#updateVersion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UpdateVersion(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_UpdateVersion(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.UpdateVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setUpdateReleaseDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` releasedate: QDate `
    ///
    pub fn SetUpdateReleaseDate(self: KNSCore__Entry, releasedate: anytype) void {
        comptime _ = @TypeOf(releasedate)._is_QDate;
        qtc.KNSCore__Entry_SetUpdateReleaseDate(@ptrCast(self.ptr), @ptrCast(releasedate.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#updateReleaseDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn UpdateReleaseDate(self: KNSCore__Entry) QDate {
        return .{ .ptr = qtc.KNSCore__Entry_UpdateReleaseDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setPayload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetPayload(self: KNSCore__Entry, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KNSCore__Entry_SetPayload(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#payload)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Payload(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_Payload(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.Payload: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setPreviewUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` url: []const u8 `
    ///
    pub fn SetPreviewUrl(self: KNSCore__Entry, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KNSCore__Entry_SetPreviewUrl(@ptrCast(self.ptr), url_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#previewUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreviewUrl(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_PreviewUrl(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.PreviewUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#previewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn PreviewImage(self: KNSCore__Entry) QImage {
        return .{ .ptr = qtc.KNSCore__Entry_PreviewImage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setPreviewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` image: QImage `
    ///
    pub fn SetPreviewImage(self: KNSCore__Entry, image: anytype) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KNSCore__Entry_SetPreviewImage(@ptrCast(self.ptr), @ptrCast(image.ptr));
    }

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
    pub fn SetInstalledFiles(self: KNSCore__Entry, allocator: std.mem.Allocator, files: []const []const u8) void {
        const files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("knscore__entry.SetInstalledFiles: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i|
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        qtc.KNSCore__Entry_SetInstalledFiles(@ptrCast(self.ptr), files_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#installedFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InstalledFiles(self: KNSCore__Entry, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_InstalledFiles(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__entry.InstalledFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__entry.InstalledFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#uninstalledFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn UninstalledFiles(self: KNSCore__Entry, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_UninstalledFiles(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__entry.UninstalledFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__entry.UninstalledFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` rating: i32 `
    ///
    pub fn SetRating(self: KNSCore__Entry, rating: i32) void {
        qtc.KNSCore__Entry_SetRating(@ptrCast(self.ptr), @bitCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#rating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn Rating(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_Rating(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setNumberOfComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` comments: i32 `
    ///
    pub fn SetNumberOfComments(self: KNSCore__Entry, comments: i32) void {
        qtc.KNSCore__Entry_SetNumberOfComments(@ptrCast(self.ptr), @bitCast(comments));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#numberOfComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn NumberOfComments(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_NumberOfComments(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setDownloadCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` downloads: i32 `
    ///
    pub fn SetDownloadCount(self: KNSCore__Entry, downloads: i32) void {
        qtc.KNSCore__Entry_SetDownloadCount(@ptrCast(self.ptr), @bitCast(downloads));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#downloadCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn DownloadCount(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_DownloadCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#numberFans)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn NumberFans(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_NumberFans(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setNumberFans)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` fans: i32 `
    ///
    pub fn SetNumberFans(self: KNSCore__Entry, fans: i32) void {
        qtc.KNSCore__Entry_SetNumberFans(@ptrCast(self.ptr), @bitCast(fans));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#numberKnowledgebaseEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn NumberKnowledgebaseEntries(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_NumberKnowledgebaseEntries(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setNumberKnowledgebaseEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` num: i32 `
    ///
    pub fn SetNumberKnowledgebaseEntries(self: KNSCore__Entry, num: i32) void {
        qtc.KNSCore__Entry_SetNumberKnowledgebaseEntries(@ptrCast(self.ptr), @bitCast(num));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#knowledgebaseLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KnowledgebaseLink(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_KnowledgebaseLink(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.KnowledgebaseLink: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setKnowledgebaseLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` link: []const u8 `
    ///
    pub fn SetKnowledgebaseLink(self: KNSCore__Entry, link: []const u8) void {
        const link_str = qtc.libqt_string{
            .len = link.len,
            .data = link.ptr,
        };
        qtc.KNSCore__Entry_SetKnowledgebaseLink(@ptrCast(self.ptr), link_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#downloadLinkCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn DownloadLinkCount(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_DownloadLinkCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#downloadLinkInformationList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadLinkInformationList(self: KNSCore__Entry, allocator: std.mem.Allocator) []KNSCore__Entry__DownloadLinkInformation {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_DownloadLinkInformationList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KNSCore__Entry__DownloadLinkInformation, _arr.len) catch @panic("knscore__entry.DownloadLinkInformationList: Memory allocation failed");
        const _data: [*]QtC.KNSCore__Entry__DownloadLinkInformation = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#appendDownloadLinkInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` info: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn AppendDownloadLinkInformation(self: KNSCore__Entry, info: anytype) void {
        comptime _ = @TypeOf(info)._is_KNSCore__Entry__DownloadLinkInformation;
        qtc.KNSCore__Entry_AppendDownloadLinkInformation(@ptrCast(self.ptr), @ptrCast(info.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#clearDownloadLinkInformation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn ClearDownloadLinkInformation(self: KNSCore__Entry) void {
        qtc.KNSCore__Entry_ClearDownloadLinkInformation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#donationLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DonationLink(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_DonationLink(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.DonationLink: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setDonationLink)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` link: []const u8 `
    ///
    pub fn SetDonationLink(self: KNSCore__Entry, link: []const u8) void {
        const link_str = qtc.libqt_string{
            .len = link.len,
            .data = link.ptr,
        };
        qtc.KNSCore__Entry_SetDonationLink(@ptrCast(self.ptr), link_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#tags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tags(self: KNSCore__Entry, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_Tags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore__entry.Tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore__entry.Tags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tags: []const []const u8 `
    ///
    pub fn SetTags(self: KNSCore__Entry, allocator: std.mem.Allocator, tags: []const []const u8) void {
        const tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("knscore__entry.SetTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (tags, 0..tags.len) |item, i|
            tags_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const tags_list = qtc.libqt_list{
            .len = tags.len,
            .data = tags_arr.ptr,
        };
        qtc.KNSCore__Entry_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#providerId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ProviderId(self: KNSCore__Entry, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KNSCore__Entry_ProviderId(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.ProviderId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setProviderId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetProviderId(self: KNSCore__Entry, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Entry_SetProviderId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` source: entry_enums.Source `
    ///
    pub fn SetSource(self: KNSCore__Entry, source: i32) void {
        qtc.KNSCore__Entry_SetSource(@ptrCast(self.ptr), @bitCast(source));
    }

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
    pub fn Source(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_Source(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setEntryType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` typeVal: entry_enums.EntryType `
    ///
    pub fn SetEntryType(self: KNSCore__Entry, typeVal: i32) void {
        qtc.KNSCore__Entry_SetEntryType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn EntryType(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_EntryType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setEntryXML)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` reader: QXmlStreamReader `
    ///
    pub fn SetEntryXML(self: KNSCore__Entry, reader: anytype) bool {
        comptime _ = @TypeOf(reader)._is_QXmlStreamReader;
        return qtc.KNSCore__Entry_SetEntryXML(@ptrCast(self.ptr), @ptrCast(reader.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setStatus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` status: entry_enums.Status `
    ///
    pub fn SetStatus(self: KNSCore__Entry, status: i32) void {
        qtc.KNSCore__Entry_SetStatus(@ptrCast(self.ptr), @bitCast(status));
    }

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
    pub fn Status(self: KNSCore__Entry) i32 {
        return qtc.KNSCore__Entry_Status(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#setEntryDeleted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn SetEntryDeleted(self: KNSCore__Entry) void {
        qtc.KNSCore__Entry_SetEntryDeleted(@ptrCast(self.ptr));
    }

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
    pub fn SetPreviewUrl2(self: KNSCore__Entry, url: []const u8, typeVal: i32) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KNSCore__Entry_SetPreviewUrl2(@ptrCast(self.ptr), url_str, @bitCast(typeVal));
    }

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
    pub fn PreviewUrl1(self: KNSCore__Entry, allocator: std.mem.Allocator, typeVal: i32) []const u8 {
        var _str = qtc.KNSCore__Entry_PreviewUrl1(@ptrCast(self.ptr), @bitCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore__entry.PreviewUrl1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry.html#previewImage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry `
    ///
    /// ` typeVal: entry_enums.PreviewType `
    ///
    pub fn PreviewImage1(self: KNSCore__Entry, typeVal: i32) QImage {
        return .{ .ptr = qtc.KNSCore__Entry_PreviewImage1(@ptrCast(self.ptr), @bitCast(typeVal)) };
    }

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
    pub fn SetPreviewImage2(self: KNSCore__Entry, image: anytype, typeVal: i32) void {
        comptime _ = @TypeOf(image)._is_QImage;
        qtc.KNSCore__Entry_SetPreviewImage2(@ptrCast(self.ptr), @ptrCast(image.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Entry `
    ///
    pub fn Delete(self: KNSCore__Entry) void {
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

    /// New constructs a new KNSCore::Entry::DownloadLinkInformation object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn New(param1: anytype) KNSCore__Entry__DownloadLinkInformation {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry__DownloadLinkInformation;
        return .{ .ptr = qtc.KNSCore__Entry__DownloadLinkInformation_new(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const u8 {
        var name_str = qtc.KNSCore__Entry__DownloadLinkInformation_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("knscore__entry__downloadlinkinformation.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#name-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: KNSCore__Entry__DownloadLinkInformation, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#priceAmount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PriceAmount(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const u8 {
        var priceAmount_str = qtc.KNSCore__Entry__DownloadLinkInformation_PriceAmount(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&priceAmount_str);
        const priceAmount_ret = allocator.alloc(u8, priceAmount_str.len) catch @panic("knscore__entry__downloadlinkinformation.PriceAmount: Memory allocation failed");
        @memcpy(priceAmount_ret, priceAmount_str.data[0..priceAmount_str.len]);
        return priceAmount_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#priceAmount-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` priceAmount: []const u8 `
    ///
    pub fn SetPriceAmount(self: KNSCore__Entry__DownloadLinkInformation, priceAmount: []const u8) void {
        const priceAmount_str = qtc.libqt_string{
            .len = priceAmount.len,
            .data = priceAmount.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetPriceAmount(@ptrCast(self.ptr), priceAmount_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#distributionType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DistributionType(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const u8 {
        var distributionType_str = qtc.KNSCore__Entry__DownloadLinkInformation_DistributionType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&distributionType_str);
        const distributionType_ret = allocator.alloc(u8, distributionType_str.len) catch @panic("knscore__entry__downloadlinkinformation.DistributionType: Memory allocation failed");
        @memcpy(distributionType_ret, distributionType_str.data[0..distributionType_str.len]);
        return distributionType_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#distributionType-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` distributionType: []const u8 `
    ///
    pub fn SetDistributionType(self: KNSCore__Entry__DownloadLinkInformation, distributionType: []const u8) void {
        const distributionType_str = qtc.libqt_string{
            .len = distributionType.len,
            .data = distributionType.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetDistributionType(@ptrCast(self.ptr), distributionType_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#descriptionLink-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DescriptionLink(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const u8 {
        var descriptionLink_str = qtc.KNSCore__Entry__DownloadLinkInformation_DescriptionLink(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&descriptionLink_str);
        const descriptionLink_ret = allocator.alloc(u8, descriptionLink_str.len) catch @panic("knscore__entry__downloadlinkinformation.DescriptionLink: Memory allocation failed");
        @memcpy(descriptionLink_ret, descriptionLink_str.data[0..descriptionLink_str.len]);
        return descriptionLink_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#descriptionLink-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` descriptionLink: []const u8 `
    ///
    pub fn SetDescriptionLink(self: KNSCore__Entry__DownloadLinkInformation, descriptionLink: []const u8) void {
        const descriptionLink_str = qtc.libqt_string{
            .len = descriptionLink.len,
            .data = descriptionLink.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetDescriptionLink(@ptrCast(self.ptr), descriptionLink_str);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn Id(self: KNSCore__Entry__DownloadLinkInformation) i32 {
        return qtc.KNSCore__Entry__DownloadLinkInformation_Id(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#id-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` id: i32 `
    ///
    pub fn SetId(self: KNSCore__Entry__DownloadLinkInformation, id: i32) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_SetId(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#isDownloadtypeLink-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn IsDownloadtypeLink(self: KNSCore__Entry__DownloadLinkInformation) bool {
        return qtc.KNSCore__Entry__DownloadLinkInformation_IsDownloadtypeLink(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#isDownloadtypeLink-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` isDownloadtypeLink: bool `
    ///
    pub fn SetIsDownloadtypeLink(self: KNSCore__Entry__DownloadLinkInformation, isDownloadtypeLink: bool) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_SetIsDownloadtypeLink(@ptrCast(self.ptr), isDownloadtypeLink);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn Size(self: KNSCore__Entry__DownloadLinkInformation) u64 {
        return qtc.KNSCore__Entry__DownloadLinkInformation_Size(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#size-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` size: u64 `
    ///
    pub fn SetSize(self: KNSCore__Entry__DownloadLinkInformation, size: u64) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_SetSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#tags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tags(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator) []const []const u8 {
        const tags_arr: qtc.libqt_list = qtc.KNSCore__Entry__DownloadLinkInformation_Tags(@ptrCast(self.ptr));
        var tags_str: [*]qtc.libqt_string = @ptrCast(@alignCast(tags_arr.data));
        defer {
            for (0..tags_arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&tags_str[i]));
            qtc.libqt_free(tags_arr.data);
        }
        const tags_ret = allocator.alloc([]const u8, tags_arr.len) catch @panic("knscore__entry__downloadlinkinformation.Tags: Memory allocation failed");
        for (0..tags_arr.len) |i| {
            const tags_data = tags_str[i];
            const tags_buf = allocator.alloc(u8, tags_data.len) catch @panic("knscore__entry__downloadlinkinformation.Tags: Memory allocation failed");
            @memcpy(tags_buf, tags_data.data[0..tags_data.len]);
            tags_ret[i] = tags_buf;
        }
        return tags_ret;
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#tags-var)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tags: []const []const u8 `
    ///
    pub fn SetTags(self: KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator, tags: []const []const u8) void {
        const tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("knscore__entry__downloadlinkinformation.SetTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (tags, 0..tags.len) |item, i|
            tags_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const tags_list = qtc.libqt_list{
            .len = tags.len,
            .data = tags_arr.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### [Upstream resources](https://api.kde.org/knscore-entry-downloadlinkinformation.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    /// ` param1: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn OperatorAssign(self: KNSCore__Entry__DownloadLinkInformation, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_KNSCore__Entry__DownloadLinkInformation;
        qtc.KNSCore__Entry__DownloadLinkInformation_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KNSCore__Entry__DownloadLinkInformation `
    ///
    pub fn Delete(self: KNSCore__Entry__DownloadLinkInformation) void {
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
