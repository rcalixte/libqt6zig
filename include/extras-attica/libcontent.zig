const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const Attica__DownloadDescription = @import("libqt6").Attica__DownloadDescription;
const Attica__HomePageEntry = @import("libqt6").Attica__HomePageEntry;
const Attica__Icon = @import("libqt6").Attica__Icon;
const QDateTime = @import("libqt6").QDateTime;
const QUrl = @import("libqt6").QUrl;
const std = @import("std");
const ArrayMap_constu8_constu8 = std.array_hash_map.String([]const u8);

/// ### [Upstream resources](https://api.kde.org/attica-content.html)
pub const Attica__Content = extern struct {
    /// ### [Upstream resources](https://api.kde.org/attica-content.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Attica__Content,

    pub const _is_Attica__Content = {};

    /// New constructs a new Attica::Content object.
    ///
    pub fn New() Attica__Content {
        return .{ .ptr = qtc.Attica__Content_new() };
    }

    /// New2 constructs a new Attica::Content object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Content `
    ///
    pub fn New2(other: anytype) Attica__Content {
        comptime _ = @TypeOf(other)._is_Attica__Content;
        return .{ .ptr = qtc.Attica__Content_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` other: Attica__Content `
    ///
    pub fn OperatorAssign(self: Attica__Content, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Content;
        qtc.Attica__Content_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` id: []const u8 `
    ///
    pub fn SetId(self: Attica__Content, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Content_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Id(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetName(self: Attica__Content, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Content_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Name(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` rating: i32 `
    ///
    pub fn SetRating(self: Attica__Content, rating: i32) void {
        qtc.Attica__Content_SetRating(@ptrCast(self.ptr), @bitCast(rating));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#rating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn Rating(self: Attica__Content) i32 {
        return qtc.Attica__Content_Rating(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setDownloads)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` downloads: i32 `
    ///
    pub fn SetDownloads(self: Attica__Content, downloads: i32) void {
        qtc.Attica__Content_SetDownloads(@ptrCast(self.ptr), @bitCast(downloads));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#downloads)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn Downloads(self: Attica__Content) i32 {
        return qtc.Attica__Content_Downloads(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setNumberOfComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` numComments: i32 `
    ///
    pub fn SetNumberOfComments(self: Attica__Content, numComments: i32) void {
        qtc.Attica__Content_SetNumberOfComments(@ptrCast(self.ptr), @bitCast(numComments));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#numberOfComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn NumberOfComments(self: Attica__Content) i32 {
        return qtc.Attica__Content_NumberOfComments(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` created: QDateTime `
    ///
    pub fn SetCreated(self: Attica__Content, created: anytype) void {
        comptime _ = @TypeOf(created)._is_QDateTime;
        qtc.Attica__Content_SetCreated(@ptrCast(self.ptr), @ptrCast(created.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#created)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn Created(self: Attica__Content) QDateTime {
        return .{ .ptr = qtc.Attica__Content_Created(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` updated: QDateTime `
    ///
    pub fn SetUpdated(self: Attica__Content, updated: anytype) void {
        comptime _ = @TypeOf(updated)._is_QDateTime;
        qtc.Attica__Content_SetUpdated(@ptrCast(self.ptr), @ptrCast(updated.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#updated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn Updated(self: Attica__Content) QDateTime {
        return .{ .ptr = qtc.Attica__Content_Updated(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#summary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Summary(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Summary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.Summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#detailpage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn Detailpage(self: Attica__Content) QUrl {
        return .{ .ptr = qtc.Attica__Content_Detailpage(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#changelog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Changelog(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Changelog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.Changelog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Version(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#depend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Depend(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Depend(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.Depend: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#downloadUrlDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` number: i32 `
    ///
    pub fn DownloadUrlDescription(self: Attica__Content, number: i32) Attica__DownloadDescription {
        return .{ .ptr = qtc.Attica__Content_DownloadUrlDescription(@ptrCast(self.ptr), @bitCast(number)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#downloadUrlDescriptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DownloadUrlDescriptions(self: Attica__Content, allocator: std.mem.Allocator) []Attica__DownloadDescription {
        const _arr: qtc.libqt_list = qtc.Attica__Content_DownloadUrlDescriptions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__DownloadDescription, _arr.len) catch @panic("attica__content.DownloadUrlDescriptions: Memory allocation failed");
        const _data: [*]QtC.Attica__DownloadDescription = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#homePageEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` number: i32 `
    ///
    pub fn HomePageEntry(self: Attica__Content, number: i32) Attica__HomePageEntry {
        return .{ .ptr = qtc.Attica__Content_HomePageEntry(@ptrCast(self.ptr), @bitCast(number)) };
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#homePageEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn HomePageEntries(self: Attica__Content, allocator: std.mem.Allocator) []Attica__HomePageEntry {
        const _arr: qtc.libqt_list = qtc.Attica__Content_HomePageEntries(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__HomePageEntry, _arr.len) catch @panic("attica__content.HomePageEntries: Memory allocation failed");
        const _data: [*]QtC.Attica__HomePageEntry = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#previewPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PreviewPicture(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_PreviewPicture(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.PreviewPicture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#smallPreviewPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SmallPreviewPicture(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_SmallPreviewPicture(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.SmallPreviewPicture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn License(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#licenseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn LicenseName(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_LicenseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.LicenseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#author)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Author(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#icons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icons(self: Attica__Content, allocator: std.mem.Allocator) []Attica__Icon {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Icons(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Icon, _arr.len) catch @panic("attica__content.Icons: Memory allocation failed");
        const _data: [*]QtC.Attica__Icon = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#icons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icons2(self: Attica__Content, allocator: std.mem.Allocator) []Attica__Icon {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Icons2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Icon, _arr.len) catch @panic("attica__content.Icons2: Memory allocation failed");
        const _data: [*]QtC.Attica__Icon = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` icons: []Attica__Icon `
    ///
    pub fn SetIcons(self: Attica__Content, icons: []Attica__Icon) void {
        const icons_list = qtc.libqt_list{
            .len = icons.len,
            .data = @ptrCast(icons.ptr),
        };
        qtc.Attica__Content_SetIcons(@ptrCast(self.ptr), icons_list);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#videos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Videos(self: Attica__Content, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Videos(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("attica__content.Videos: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setVideos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` videos: []QUrl `
    ///
    pub fn SetVideos(self: Attica__Content, videos: []QUrl) void {
        const videos_list = qtc.libqt_list{
            .len = videos.len,
            .data = @ptrCast(videos.ptr),
        };
        qtc.Attica__Content_SetVideos(@ptrCast(self.ptr), videos_list);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#tags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tags(self: Attica__Content, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Tags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica__content.Tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica__content.Tags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` tags: []const []const u8 `
    ///
    pub fn SetTags(self: Attica__Content, allocator: std.mem.Allocator, tags: []const []const u8) void {
        const tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("attica__content.SetTags: Memory allocation failed");
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
        qtc.Attica__Content_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#addAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn AddAttribute(self: Attica__Content, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__Content_AddAttribute(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#attribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Attribute(self: Attica__Content, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__Content_Attribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.Attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Attributes(self: Attica__Content, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Content_Attributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("attica__content.Attributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("attica__content.Attributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _entry_slice, _value_slice) catch @panic("attica__content.Attributes: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn IsValid(self: Attica__Content) bool {
        return qtc.Attica__Content_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#previewPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` number: []const u8 `
    ///
    pub fn PreviewPicture1(self: Attica__Content, allocator: std.mem.Allocator, number: []const u8) []const u8 {
        const number_str = qtc.libqt_string{
            .len = number.len,
            .data = number.ptr,
        };
        var _str = qtc.Attica__Content_PreviewPicture1(@ptrCast(self.ptr), number_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.PreviewPicture1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#smallPreviewPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` number: []const u8 `
    ///
    pub fn SmallPreviewPicture1(self: Attica__Content, allocator: std.mem.Allocator, number: []const u8) []const u8 {
        const number_str = qtc.libqt_string{
            .len = number.len,
            .data = number.ptr,
        };
        var _str = qtc.Attica__Content_SmallPreviewPicture1(@ptrCast(self.ptr), number_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica__content.SmallPreviewPicture1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Content `
    ///
    pub fn Delete(self: Attica__Content) void {
        qtc.Attica__Content_Delete(@ptrCast(self.ptr));
    }
};
