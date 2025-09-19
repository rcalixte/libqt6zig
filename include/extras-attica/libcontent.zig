const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const std = @import("std");
pub const map_constu8_constu8 = std.StringHashMapUnmanaged([]const u8);

/// https://api.kde.org/attica-content.html
pub const attica__content = struct {
    /// New constructs a new Attica::Content object.
    ///
    ///
    pub fn New() QtC.Attica__Content {
        return qtc.Attica__Content_new();
    }

    /// New2 constructs a new Attica::Content object.
    ///
    /// ``` other: QtC.Attica__Content ```
    pub fn New2(other: ?*anyopaque) QtC.Attica__Content {
        return qtc.Attica__Content_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#operator-eq)
    ///
    /// ``` self: QtC.Attica__Content, other: QtC.Attica__Content ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Attica__Content_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setId)
    ///
    /// ``` self: QtC.Attica__Content, id: []const u8 ```
    pub fn SetId(self: ?*anyopaque, id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = id.len,
            .data = id.ptr,
        };
        qtc.Attica__Content_SetId(@ptrCast(self), id_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#id)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Id(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_Id(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.Id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setName)
    ///
    /// ``` self: QtC.Attica__Content, name: []const u8 ```
    pub fn SetName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.Attica__Content_SetName(@ptrCast(self), name_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#name)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Name(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_Name(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.Name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setRating)
    ///
    /// ``` self: QtC.Attica__Content, rating: i32 ```
    pub fn SetRating(self: ?*anyopaque, rating: i32) void {
        qtc.Attica__Content_SetRating(@ptrCast(self), @intCast(rating));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#rating)
    ///
    /// ``` self: QtC.Attica__Content ```
    pub fn Rating(self: ?*anyopaque) i32 {
        return qtc.Attica__Content_Rating(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setDownloads)
    ///
    /// ``` self: QtC.Attica__Content, downloads: i32 ```
    pub fn SetDownloads(self: ?*anyopaque, downloads: i32) void {
        qtc.Attica__Content_SetDownloads(@ptrCast(self), @intCast(downloads));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#downloads)
    ///
    /// ``` self: QtC.Attica__Content ```
    pub fn Downloads(self: ?*anyopaque) i32 {
        return qtc.Attica__Content_Downloads(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setNumberOfComments)
    ///
    /// ``` self: QtC.Attica__Content, numComments: i32 ```
    pub fn SetNumberOfComments(self: ?*anyopaque, numComments: i32) void {
        qtc.Attica__Content_SetNumberOfComments(@ptrCast(self), @intCast(numComments));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#numberOfComments)
    ///
    /// ``` self: QtC.Attica__Content ```
    pub fn NumberOfComments(self: ?*anyopaque) i32 {
        return qtc.Attica__Content_NumberOfComments(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setCreated)
    ///
    /// ``` self: QtC.Attica__Content, created: QtC.QDateTime ```
    pub fn SetCreated(self: ?*anyopaque, created: ?*anyopaque) void {
        qtc.Attica__Content_SetCreated(@ptrCast(self), @ptrCast(created));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#created)
    ///
    /// ``` self: QtC.Attica__Content ```
    pub fn Created(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Attica__Content_Created(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setUpdated)
    ///
    /// ``` self: QtC.Attica__Content, updated: QtC.QDateTime ```
    pub fn SetUpdated(self: ?*anyopaque, updated: ?*anyopaque) void {
        qtc.Attica__Content_SetUpdated(@ptrCast(self), @ptrCast(updated));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#updated)
    ///
    /// ``` self: QtC.Attica__Content ```
    pub fn Updated(self: ?*anyopaque) QtC.QDateTime {
        return qtc.Attica__Content_Updated(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#summary)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Summary(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_Summary(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.Summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#description)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Description(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_Description(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#detailpage)
    ///
    /// ``` self: QtC.Attica__Content ```
    pub fn Detailpage(self: ?*anyopaque) QtC.QUrl {
        return qtc.Attica__Content_Detailpage(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#changelog)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Changelog(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_Changelog(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.Changelog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#version)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Version(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_Version(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.Version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#depend)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Depend(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_Depend(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.Depend: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#downloadUrlDescription)
    ///
    /// ``` self: QtC.Attica__Content, number: i32 ```
    pub fn DownloadUrlDescription(self: ?*anyopaque, number: i32) QtC.Attica__DownloadDescription {
        return qtc.Attica__Content_DownloadUrlDescription(@ptrCast(self), @intCast(number));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#downloadUrlDescriptions)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn DownloadUrlDescriptions(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__DownloadDescription {
        const _arr: qtc.libqt_list = qtc.Attica__Content_DownloadUrlDescriptions(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__DownloadDescription, _arr.len) catch @panic("attica::content.DownloadUrlDescriptions: Memory allocation failed");
        const _data: [*]QtC.Attica__DownloadDescription = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#homePageEntry)
    ///
    /// ``` self: QtC.Attica__Content, number: i32 ```
    pub fn HomePageEntry(self: ?*anyopaque, number: i32) QtC.Attica__HomePageEntry {
        return qtc.Attica__Content_HomePageEntry(@ptrCast(self), @intCast(number));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#homePageEntries)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn HomePageEntries(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__HomePageEntry {
        const _arr: qtc.libqt_list = qtc.Attica__Content_HomePageEntries(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__HomePageEntry, _arr.len) catch @panic("attica::content.HomePageEntries: Memory allocation failed");
        const _data: [*]QtC.Attica__HomePageEntry = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#previewPicture)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn PreviewPicture(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_PreviewPicture(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.PreviewPicture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#smallPreviewPicture)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn SmallPreviewPicture(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_SmallPreviewPicture(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.SmallPreviewPicture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#license)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn License(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_License(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.License: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#licenseName)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn LicenseName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_LicenseName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.LicenseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#author)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Author(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.Attica__Content_Author(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.Author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#icons)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Icons(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__Icon {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Icons(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__Icon, _arr.len) catch @panic("attica::content.Icons: Memory allocation failed");
        const _data: [*]QtC.Attica__Icon = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#icons)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Icons2(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.Attica__Icon {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Icons2(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.Attica__Icon, _arr.len) catch @panic("attica::content.Icons2: Memory allocation failed");
        const _data: [*]QtC.Attica__Icon = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setIcons)
    ///
    /// ``` self: QtC.Attica__Content, icons: []QtC.Attica__Icon ```
    pub fn SetIcons(self: ?*anyopaque, icons: []QtC.Attica__Icon) void {
        const icons_list = qtc.libqt_list{
            .len = icons.len,
            .data = @ptrCast(icons.ptr),
        };
        qtc.Attica__Content_SetIcons(@ptrCast(self), icons_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#videos)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Videos(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Videos(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("attica::content.Videos: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setVideos)
    ///
    /// ``` self: QtC.Attica__Content, videos: []QtC.QUrl ```
    pub fn SetVideos(self: ?*anyopaque, videos: []QtC.QUrl) void {
        const videos_list = qtc.libqt_list{
            .len = videos.len,
            .data = @ptrCast(videos.ptr),
        };
        qtc.Attica__Content_SetVideos(@ptrCast(self), videos_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#tags)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Tags(self: ?*anyopaque, allocator: std.mem.Allocator) [][]const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Tags(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("attica::content.Tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("attica::content.Tags: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#setTags)
    ///
    /// ``` self: QtC.Attica__Content, tags: [][]const u8, allocator: std.mem.Allocator ```
    pub fn SetTags(self: ?*anyopaque, tags: [][]const u8, allocator: std.mem.Allocator) void {
        var tags_arr = allocator.alloc(qtc.libqt_string, tags.len) catch @panic("attica::content.SetTags: Memory allocation failed");
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
        qtc.Attica__Content_SetTags(@ptrCast(self), tags_list);
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#addAttribute)
    ///
    /// ``` self: QtC.Attica__Content, key: []const u8, value: []const u8 ```
    pub fn AddAttribute(self: ?*anyopaque, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.Attica__Content_AddAttribute(@ptrCast(self), key_str, value_str);
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#attribute)
    ///
    /// ``` self: QtC.Attica__Content, key: []const u8, allocator: std.mem.Allocator ```
    pub fn Attribute(self: ?*anyopaque, key: []const u8, allocator: std.mem.Allocator) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const _str = qtc.Attica__Content_Attribute(@ptrCast(self), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.Attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#attributes)
    ///
    /// ``` self: QtC.Attica__Content, allocator: std.mem.Allocator ```
    pub fn Attributes(self: ?*anyopaque, allocator: std.mem.Allocator) map_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Content_Attributes(@ptrCast(self));
        var _ret: map_constu8_constu8 = .empty;
        defer {
            const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
            for (0.._map.len) |i| {
                qtc.libqt_free(_keys[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.keys));
        const _values: [*][]const u8 = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _entry_slice = std.mem.span(_key.data);
            const _value = _values[i];
            _ret.put(allocator, _entry_slice, _value) catch @panic("attica::content.Attributes: Memory allocation failed");
        }
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#isValid)
    ///
    /// ``` self: QtC.Attica__Content ```
    pub fn IsValid(self: ?*anyopaque) bool {
        return qtc.Attica__Content_IsValid(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#previewPicture)
    ///
    /// ``` self: QtC.Attica__Content, number: []const u8, allocator: std.mem.Allocator ```
    pub fn PreviewPicture1(self: ?*anyopaque, number: []const u8, allocator: std.mem.Allocator) []const u8 {
        const number_str = qtc.libqt_string{
            .len = number.len,
            .data = number.ptr,
        };
        const _str = qtc.Attica__Content_PreviewPicture1(@ptrCast(self), number_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.PreviewPicture1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/attica-content.html#smallPreviewPicture)
    ///
    /// ``` self: QtC.Attica__Content, number: []const u8, allocator: std.mem.Allocator ```
    pub fn SmallPreviewPicture1(self: ?*anyopaque, number: []const u8, allocator: std.mem.Allocator) []const u8 {
        const number_str = qtc.libqt_string{
            .len = number.len,
            .data = number.ptr,
        };
        const _str = qtc.Attica__Content_SmallPreviewPicture1(@ptrCast(self), number_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("attica::content.SmallPreviewPicture1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.Attica__Content ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.Attica__Content_Delete(@ptrCast(self));
    }
};
