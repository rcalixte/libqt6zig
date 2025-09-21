const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const entry_enums = enums;
const std = @import("std");

/// https://api.kde.org/knscore.html
pub const knscore = struct {
    /// [Qt documentation](https://api.kde.org/knscore.html#replaceBBCode)
    ///
    /// ``` param1: []const u8, allocator: std.mem.Allocator ```
    pub fn ReplaceBBCode(param1: []const u8, allocator: std.mem.Allocator) []const u8 {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        const _str = qtc.KNSCore_ReplaceBBCode(param1_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore.ReplaceBBCode: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore.html#qHash)
    ///
    /// ``` param1: QtC.KNSCore__Entry, param2: u64 ```
    pub fn QHash(param1: ?*anyopaque, param2: u64) u64 {
        return qtc.KNSCore_QHash(@ptrCast(param1), @intCast(param2));
    }
};

/// https://api.kde.org/knscore-entry.html
pub const knscore__entry = struct {
    /// New constructs a new KNSCore::Entry object.
    ///
    ///
    pub fn New() QtC.KNSCore__Entry {
        return qtc.KNSCore__Entry_new();
    }

    /// New2 constructs a new KNSCore::Entry object.
    ///
    /// ``` other: QtC.KNSCore__Entry ```
    pub fn New2(other: ?*anyopaque) QtC.KNSCore__Entry {
        return qtc.KNSCore__Entry_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#operator-eq)
    ///
    /// ``` self: QtC.KNSCore__Entry, other: QtC.KNSCore__Entry ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KNSCore__Entry_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#operator-eq-eq)
    ///
    /// ``` self: QtC.KNSCore__Entry, other: QtC.KNSCore__Entry ```
    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KNSCore__Entry_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#operator-lt)
    ///
    /// ``` self: QtC.KNSCore__Entry, other: QtC.KNSCore__Entry ```
    pub fn OperatorLesser(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.KNSCore__Entry_OperatorLesser(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#isValid)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.KNSCore__Entry_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setName)
    ///
    /// ``` self: QtC.KNSCore__Entry, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Entry_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#name)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setUniqueId)
    ///
    /// ``` self: QtC.KNSCore__Entry, id: []const u8 ```
    pub fn SetUniqueId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Entry_SetUniqueId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#uniqueId)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn UniqueId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_UniqueId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.UniqueId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setCategory)
    ///
    /// ``` self: QtC.KNSCore__Entry, category: []const u8 ```
    pub fn SetCategory(self: ?*anyopaque, category: []const u8) void {
        const category_str = qtc.libqt_string{
            .len = category.len,
            .data = category.ptr,
        };
        qtc.KNSCore__Entry_SetCategory(@ptrCast(self), category_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#category)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn Category(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_Category(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.Category: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setHomepage)
    ///
    /// ``` self: QtC.KNSCore__Entry, page: QtC.QUrl ```
    pub fn SetHomepage(self: ?*anyopaque, page: ?*anyopaque) void {
        qtc.KNSCore__Entry_SetHomepage(@ptrCast(self), @ptrCast(page));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#homepage)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn Homepage(self: ?*anyopaque) QtC.QUrl {
        return qtc.KNSCore__Entry_Homepage(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setAuthor)
    ///
    /// ``` self: QtC.KNSCore__Entry, author: QtC.KNSCore__Author ```
    pub fn SetAuthor(self: ?*anyopaque, author: ?*anyopaque) void {
        qtc.KNSCore__Entry_SetAuthor(@ptrCast(self), @ptrCast(author));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#author)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn Author(self: ?*anyopaque) QtC.KNSCore__Author {
        return qtc.KNSCore__Entry_Author(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setLicense)
    ///
    /// ``` self: QtC.KNSCore__Entry, license: []const u8 ```
    pub fn SetLicense(self: ?*anyopaque, license: []const u8) void {
        const license_str = qtc.libqt_string{
            .len = license.len,
            .data = license.ptr,
        };
        qtc.KNSCore__Entry_SetLicense(@ptrCast(self), license_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#license)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn License(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_License(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setSummary)
    ///
    /// ``` self: QtC.KNSCore__Entry, summary: []const u8 ```
    pub fn SetSummary(self: ?*anyopaque, summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.KNSCore__Entry_SetSummary(@ptrCast(self), summary_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#shortSummary)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn ShortSummary(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_ShortSummary(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.ShortSummary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setShortSummary)
    ///
    /// ``` self: QtC.KNSCore__Entry, summary: []const u8 ```
    pub fn SetShortSummary(self: ?*anyopaque, summary: []const u8) void {
        const summary_str = qtc.libqt_string{
            .len = summary.len,
            .data = summary.ptr,
        };
        qtc.KNSCore__Entry_SetShortSummary(@ptrCast(self), summary_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#summary)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn Summary(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_Summary(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.Summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setChangelog)
    ///
    /// ``` self: QtC.KNSCore__Entry, changelog: []const u8 ```
    pub fn SetChangelog(self: ?*anyopaque, changelog: []const u8) void {
        const changelog_str = qtc.libqt_string{
            .len = changelog.len,
            .data = changelog.ptr,
        };
        qtc.KNSCore__Entry_SetChangelog(@ptrCast(self), changelog_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#changelog)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn Changelog(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_Changelog(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.Changelog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setVersion)
    ///
    /// ``` self: QtC.KNSCore__Entry, version: []const u8 ```
    pub fn SetVersion(self: ?*anyopaque, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.KNSCore__Entry_SetVersion(@ptrCast(self), version_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#version)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setReleaseDate)
    ///
    /// ``` self: QtC.KNSCore__Entry, releasedate: QtC.QDate ```
    pub fn SetReleaseDate(self: ?*anyopaque, releasedate: ?*anyopaque) void {
        qtc.KNSCore__Entry_SetReleaseDate(@ptrCast(self), @ptrCast(releasedate));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#releaseDate)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn ReleaseDate(self: ?*anyopaque) QtC.QDate {
        return qtc.KNSCore__Entry_ReleaseDate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setUpdateVersion)
    ///
    /// ``` self: QtC.KNSCore__Entry, version: []const u8 ```
    pub fn SetUpdateVersion(self: ?*anyopaque, version: []const u8) void {
        const version_str = qtc.libqt_string{
            .len = version.len,
            .data = version.ptr,
        };
        qtc.KNSCore__Entry_SetUpdateVersion(@ptrCast(self), version_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#updateVersion)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn UpdateVersion(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_UpdateVersion(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.UpdateVersion: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setUpdateReleaseDate)
    ///
    /// ``` self: QtC.KNSCore__Entry, releasedate: QtC.QDate ```
    pub fn SetUpdateReleaseDate(self: ?*anyopaque, releasedate: ?*anyopaque) void {
        qtc.KNSCore__Entry_SetUpdateReleaseDate(@ptrCast(self), @ptrCast(releasedate));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#updateReleaseDate)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn UpdateReleaseDate(self: ?*anyopaque) QtC.QDate {
        return qtc.KNSCore__Entry_UpdateReleaseDate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setPayload)
    ///
    /// ``` self: QtC.KNSCore__Entry, url: []const u8 ```
    pub fn SetPayload(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KNSCore__Entry_SetPayload(@ptrCast(self), url_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#payload)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn Payload(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_Payload(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.Payload: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setPreviewUrl)
    ///
    /// ``` self: QtC.KNSCore__Entry, url: []const u8 ```
    pub fn SetPreviewUrl(self: ?*anyopaque, url: []const u8) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KNSCore__Entry_SetPreviewUrl(@ptrCast(self), url_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#previewUrl)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn PreviewUrl(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_PreviewUrl(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.PreviewUrl: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#previewImage)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn PreviewImage(self: ?*anyopaque) QtC.QImage {
        return qtc.KNSCore__Entry_PreviewImage(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setPreviewImage)
    ///
    /// ``` self: QtC.KNSCore__Entry, image: QtC.QImage ```
    pub fn SetPreviewImage(self: ?*anyopaque, image: ?*anyopaque) void {
        qtc.KNSCore__Entry_SetPreviewImage(@ptrCast(self), @ptrCast(image));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setInstalledFiles)
    ///
    /// ``` self: QtC.KNSCore__Entry, files: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetInstalledFiles(self: ?*anyopaque, files: [][]const u8, allocator: std.mem.Allocator) void {
        var files_arr = allocator.alloc(qtc.libqt_string, files.len) catch @panic("knscore::entry.SetInstalledFiles: Memory allocation failed");
        defer allocator.free(files_arr);
        for (files, 0..files.len) |item, i| {
            files_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const files_list = qtc.libqt_list{
            .len = files.len,
            .data = files_arr.ptr,
        };
        qtc.KNSCore__Entry_SetInstalledFiles(@ptrCast(self), files_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#installedFiles)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn InstalledFiles(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_InstalledFiles(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore::entry.InstalledFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::entry.InstalledFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#uninstalledFiles)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn UninstalledFiles(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_UninstalledFiles(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore::entry.UninstalledFiles: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::entry.UninstalledFiles: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setRating)
    ///
    /// ``` self: QtC.KNSCore__Entry, rating: i32 ```
    pub fn SetRating(self: ?*anyopaque, rating: i32) void {
        qtc.KNSCore__Entry_SetRating(@ptrCast(self), @intCast(rating));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#rating)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn Rating(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry_Rating(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setNumberOfComments)
    ///
    /// ``` self: QtC.KNSCore__Entry, comments: i32 ```
    pub fn SetNumberOfComments(self: ?*anyopaque, comments: i32) void {
        qtc.KNSCore__Entry_SetNumberOfComments(@ptrCast(self), @intCast(comments));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#numberOfComments)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn NumberOfComments(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry_NumberOfComments(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setDownloadCount)
    ///
    /// ``` self: QtC.KNSCore__Entry, downloads: i32 ```
    pub fn SetDownloadCount(self: ?*anyopaque, downloads: i32) void {
        qtc.KNSCore__Entry_SetDownloadCount(@ptrCast(self), @intCast(downloads));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#downloadCount)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn DownloadCount(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry_DownloadCount(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#numberFans)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn NumberFans(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry_NumberFans(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setNumberFans)
    ///
    /// ``` self: QtC.KNSCore__Entry, fans: i32 ```
    pub fn SetNumberFans(self: ?*anyopaque, fans: i32) void {
        qtc.KNSCore__Entry_SetNumberFans(@ptrCast(self), @intCast(fans));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#numberKnowledgebaseEntries)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn NumberKnowledgebaseEntries(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry_NumberKnowledgebaseEntries(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setNumberKnowledgebaseEntries)
    ///
    /// ``` self: QtC.KNSCore__Entry, num: i32 ```
    pub fn SetNumberKnowledgebaseEntries(self: ?*anyopaque, num: i32) void {
        qtc.KNSCore__Entry_SetNumberKnowledgebaseEntries(@ptrCast(self), @intCast(num));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#knowledgebaseLink)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn KnowledgebaseLink(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_KnowledgebaseLink(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.KnowledgebaseLink: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setKnowledgebaseLink)
    ///
    /// ``` self: QtC.KNSCore__Entry, link: []const u8 ```
    pub fn SetKnowledgebaseLink(self: ?*anyopaque, link: []const u8) void {
        const link_str = qtc.libqt_string{
            .len = link.len,
            .data = link.ptr,
        };
        qtc.KNSCore__Entry_SetKnowledgebaseLink(@ptrCast(self), link_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#downloadLinkCount)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn DownloadLinkCount(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry_DownloadLinkCount(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#downloadLinkInformationList)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn DownloadLinkInformationList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KNSCore__Entry__DownloadLinkInformation {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_DownloadLinkInformationList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KNSCore__Entry__DownloadLinkInformation, _arr.len) catch @panic("knscore::entry.DownloadLinkInformationList: Memory allocation failed");
        const _data: [*]QtC.KNSCore__Entry__DownloadLinkInformation = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#appendDownloadLinkInformation)
    ///
    /// ``` self: QtC.KNSCore__Entry, info: QtC.KNSCore__Entry__DownloadLinkInformation ```
    pub fn AppendDownloadLinkInformation(self: ?*anyopaque, info: ?*anyopaque) void {
        qtc.KNSCore__Entry_AppendDownloadLinkInformation(@ptrCast(self), @ptrCast(info));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#clearDownloadLinkInformation)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn ClearDownloadLinkInformation(self: ?*anyopaque) void {
        qtc.KNSCore__Entry_ClearDownloadLinkInformation(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#donationLink)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn DonationLink(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_DonationLink(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.DonationLink: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setDonationLink)
    ///
    /// ``` self: QtC.KNSCore__Entry, link: []const u8 ```
    pub fn SetDonationLink(self: ?*anyopaque, link: []const u8) void {
        const link_str = qtc.libqt_string{
            .len = link.len,
            .data = link.ptr,
        };
        qtc.KNSCore__Entry_SetDonationLink(@ptrCast(self), link_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#tags)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn Tags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.KNSCore__Entry_Tags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("knscore::entry.Tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("knscore::entry.Tags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setTags)
    ///
    /// ``` self: QtC.KNSCore__Entry, tags: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetTags(self: ?*anyopaque, tags: [][]const u8, allocator: std.mem.Allocator) void {
        var tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("knscore::entry.SetTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (tags, 0..tags.len) |item, i| {
            tags_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const tags_list = qtc.libqt_list{
            .len = tags.len,
            .data = tags_arr.ptr,
        };
        qtc.KNSCore__Entry_SetTags(@ptrCast(self), tags_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#providerId)
    ///
    /// ``` self: QtC.KNSCore__Entry, allocator: std.mem.Allocator ```
    pub fn ProviderId(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_ProviderId(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.ProviderId: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setProviderId)
    ///
    /// ``` self: QtC.KNSCore__Entry, id: []const u8 ```
    pub fn SetProviderId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.KNSCore__Entry_SetProviderId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setSource)
    ///
    /// ``` self: QtC.KNSCore__Entry, source: entry_enums.Source ```
    pub fn SetSource(self: ?*anyopaque, source: i32) void {
        qtc.KNSCore__Entry_SetSource(@ptrCast(self), @intCast(source));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#source)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    ///
    /// Returns: ``` entry_enums.Source ```
    pub fn Source(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry_Source(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setEntryType)
    ///
    /// ``` self: QtC.KNSCore__Entry, typeVal: entry_enums.EntryType ```
    pub fn SetEntryType(self: ?*anyopaque, typeVal: i32) void {
        qtc.KNSCore__Entry_SetEntryType(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#entryType)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    ///
    /// Returns: ``` entry_enums.EntryType ```
    pub fn EntryType(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry_EntryType(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setEntryXML)
    ///
    /// ``` self: QtC.KNSCore__Entry, reader: QtC.QXmlStreamReader ```
    pub fn SetEntryXML(self: ?*anyopaque, reader: ?*anyopaque) bool {
        return qtc.KNSCore__Entry_SetEntryXML(@ptrCast(self), @ptrCast(reader));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setStatus)
    ///
    /// ``` self: QtC.KNSCore__Entry, status: entry_enums.Status ```
    pub fn SetStatus(self: ?*anyopaque, status: i32) void {
        qtc.KNSCore__Entry_SetStatus(@ptrCast(self), @intCast(status));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#status)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    ///
    /// Returns: ``` entry_enums.Status ```
    pub fn Status(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry_Status(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setEntryDeleted)
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn SetEntryDeleted(self: ?*anyopaque) void {
        qtc.KNSCore__Entry_SetEntryDeleted(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setPreviewUrl)
    ///
    /// ``` self: QtC.KNSCore__Entry, url: []const u8, typeVal: entry_enums.PreviewType ```
    pub fn SetPreviewUrl2(self: ?*anyopaque, url: []const u8, typeVal: i32) void {
        const url_str = qtc.libqt_string{
            .len = url.len,
            .data = url.ptr,
        };
        qtc.KNSCore__Entry_SetPreviewUrl2(@ptrCast(self), url_str, @intCast(typeVal));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#previewUrl)
    ///
    /// ``` self: QtC.KNSCore__Entry, typeVal: entry_enums.PreviewType, allocator: std.mem.Allocator ```
    pub fn PreviewUrl1(self: ?*anyopaque, typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KNSCore__Entry_PreviewUrl1(@ptrCast(self), @intCast(typeVal));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("knscore::entry.PreviewUrl1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#previewImage)
    ///
    /// ``` self: QtC.KNSCore__Entry, typeVal: entry_enums.PreviewType ```
    pub fn PreviewImage1(self: ?*anyopaque, typeVal: i32) QtC.QImage {
        return qtc.KNSCore__Entry_PreviewImage1(@ptrCast(self), @intCast(typeVal));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry.html#setPreviewImage)
    ///
    /// ``` self: QtC.KNSCore__Entry, image: QtC.QImage, typeVal: entry_enums.PreviewType ```
    pub fn SetPreviewImage2(self: ?*anyopaque, image: ?*anyopaque, typeVal: i32) void {
        qtc.KNSCore__Entry_SetPreviewImage2(@ptrCast(self), @ptrCast(image), @intCast(typeVal));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNSCore__Entry ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNSCore__Entry_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/knscore-entry-downloadlinkinformation.html
pub const knscore__entry__downloadlinkinformation = struct {
    /// New constructs a new KNSCore::Entry::DownloadLinkInformation object.
    ///
    /// ``` param1: QtC.KNSCore__Entry__DownloadLinkInformation ```
    pub fn New(param1: ?*anyopaque) QtC.KNSCore__Entry__DownloadLinkInformation {
        return qtc.KNSCore__Entry__DownloadLinkInformation_new(@ptrCast(param1));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#name-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.KNSCore__Entry__DownloadLinkInformation_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&name_str);
        const name_ret = allocator.alloc(u8, name_str.len) catch @panic("knscore::entry::downloadlinkinformation.Name: Memory allocation failed");
        @memcpy(name_ret, name_str.data[0..name_str.len]);
        return name_ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#name-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#priceAmount-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator ```
    pub fn PriceAmount(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const priceAmount_str = qtc.KNSCore__Entry__DownloadLinkInformation_PriceAmount(@ptrCast(self));
        defer qtc.libqt_string_free(&priceAmount_str);
        const priceAmount_ret = allocator.alloc(u8, priceAmount_str.len) catch @panic("knscore::entry::downloadlinkinformation.PriceAmount: Memory allocation failed");
        @memcpy(priceAmount_ret, priceAmount_str.data[0..priceAmount_str.len]);
        return priceAmount_ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#priceAmount-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, priceAmount: []const u8 ```
    pub fn SetPriceAmount(self: ?*anyopaque, priceAmount: []const u8) void {
        const priceAmount_str = qtc.libqt_string{
            .len = priceAmount.len,
            .data = priceAmount.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetPriceAmount(@ptrCast(self), priceAmount_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#distributionType-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator ```
    pub fn DistributionType(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const distributionType_str = qtc.KNSCore__Entry__DownloadLinkInformation_DistributionType(@ptrCast(self));
        defer qtc.libqt_string_free(&distributionType_str);
        const distributionType_ret = allocator.alloc(u8, distributionType_str.len) catch @panic("knscore::entry::downloadlinkinformation.DistributionType: Memory allocation failed");
        @memcpy(distributionType_ret, distributionType_str.data[0..distributionType_str.len]);
        return distributionType_ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#distributionType-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, distributionType: []const u8 ```
    pub fn SetDistributionType(self: ?*anyopaque, distributionType: []const u8) void {
        const distributionType_str = qtc.libqt_string{
            .len = distributionType.len,
            .data = distributionType.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetDistributionType(@ptrCast(self), distributionType_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#descriptionLink-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator ```
    pub fn DescriptionLink(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const descriptionLink_str = qtc.KNSCore__Entry__DownloadLinkInformation_DescriptionLink(@ptrCast(self));
        defer qtc.libqt_string_free(&descriptionLink_str);
        const descriptionLink_ret = allocator.alloc(u8, descriptionLink_str.len) catch @panic("knscore::entry::downloadlinkinformation.DescriptionLink: Memory allocation failed");
        @memcpy(descriptionLink_ret, descriptionLink_str.data[0..descriptionLink_str.len]);
        return descriptionLink_ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#descriptionLink-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, descriptionLink: []const u8 ```
    pub fn SetDescriptionLink(self: ?*anyopaque, descriptionLink: []const u8) void {
        const descriptionLink_str = qtc.libqt_string{
            .len = descriptionLink.len,
            .data = descriptionLink.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetDescriptionLink(@ptrCast(self), descriptionLink_str);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#id-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation ```
    pub fn Id(self: ?*anyopaque) i32 {
        return qtc.KNSCore__Entry__DownloadLinkInformation_Id(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#id-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, id: i32 ```
    pub fn SetId(self: ?*anyopaque, id: i32) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_SetId(@ptrCast(self), @intCast(id));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#isDownloadtypeLink-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation ```
    pub fn IsDownloadtypeLink(self: ?*anyopaque) bool {
        return qtc.KNSCore__Entry__DownloadLinkInformation_IsDownloadtypeLink(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#isDownloadtypeLink-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, isDownloadtypeLink: bool ```
    pub fn SetIsDownloadtypeLink(self: ?*anyopaque, isDownloadtypeLink: bool) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_SetIsDownloadtypeLink(@ptrCast(self), isDownloadtypeLink);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#size-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation ```
    pub fn Size(self: ?*anyopaque) u64 {
        return qtc.KNSCore__Entry__DownloadLinkInformation_Size(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#size-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, size: u64 ```
    pub fn SetSize(self: ?*anyopaque, size: u64) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_SetSize(@ptrCast(self), @intCast(size));
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#tags-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, allocator: std.mem.Allocator ```
    pub fn Tags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const tags_arr: qtc.libqt_list = qtc.KNSCore__Entry__DownloadLinkInformation_Tags(@ptrCast(self));
        const tags_str: [*]qtc.libqt_string = @ptrCast(@alignCast(tags_arr.data));
        defer {
            for (0..tags_arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&tags_str[i]));
            }
            qtc.libqt_free(tags_arr.data);
        }
        const tags_ret = allocator.alloc([]const u8, tags_arr.len) catch @panic("knscore::entry::downloadlinkinformation.Tags: Memory allocation failed");
        for (0..tags_arr.len) |i| {
            const tags_data = tags_str[i];
            const tags_buf = allocator.alloc(u8, tags_data.len) catch @panic("knscore::entry::downloadlinkinformation.Tags: Memory allocation failed");
            @memcpy(tags_buf, tags_data.data[0..tags_data.len]);
            tags_ret[i] = tags_buf;
        }
        return tags_ret;
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#tags-var)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, tags: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetTags(self: ?*anyopaque, tags: [][]const u8, allocator: std.mem.Allocator) void {
        var tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("knscore::entry::downloadlinkinformation.SetTags: Memory allocation failed");
        defer allocator.free(tags_arr);
        for (tags, 0..tags.len) |item, i| {
            tags_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const tags_list = qtc.libqt_list{
            .len = tags.len,
            .data = tags_arr.ptr,
        };
        qtc.KNSCore__Entry__DownloadLinkInformation_SetTags(@ptrCast(self), tags_list);
    }

    /// [Qt documentation](https://api.kde.org/knscore-entry-downloadlinkinformation.html#operator-eq)
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation, param1: QtC.KNSCore__Entry__DownloadLinkInformation ```
    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KNSCore__Entry__DownloadLinkInformation ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KNSCore__Entry__DownloadLinkInformation_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/knscore-entry.html#types
pub const enums = struct {
    pub const Status = enum {
        pub const Invalid: i32 = 0;
        pub const Downloadable: i32 = 1;
        pub const Installed: i32 = 2;
        pub const Updateable: i32 = 3;
        pub const Deleted: i32 = 4;
        pub const Installing: i32 = 5;
        pub const Updating: i32 = 6;
    };

    pub const Source = enum {
        pub const Cache: i32 = 0;
        pub const Online: i32 = 1;
        pub const Registry: i32 = 2;
    };

    pub const PreviewType = enum {
        pub const PreviewSmall1: i32 = 0;
        pub const PreviewSmall2: i32 = 1;
        pub const PreviewSmall3: i32 = 2;
        pub const PreviewBig1: i32 = 3;
        pub const PreviewBig2: i32 = 4;
        pub const PreviewBig3: i32 = 5;
    };

    pub const EntryEvent = enum {
        pub const UnknownEvent: i32 = 0;
        pub const StatusChangedEvent: i32 = 1;
        pub const AdoptedEvent: i32 = 2;
        pub const DetailsLoadedEvent: i32 = 3;
    };

    pub const EntryType = enum {
        pub const CatalogEntry: i32 = 0;
        pub const GroupEntry: i32 = 1;
    };
};
