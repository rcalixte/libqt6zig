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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new Attica::Content object in C++ memory
    ///
    pub fn new() Attica__Content {
        return .{ .ptr = qtc.Attica__Content_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new Attica::Content object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: Attica__Content `
    ///
    pub fn new2(other: anytype) Attica__Content {
        comptime _ = @TypeOf(other)._is_Attica__Content;
        return .{ .ptr = qtc.Attica__Content_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` other: Attica__Content `
    ///
    pub fn operatorAssign(self: Attica__Content, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Attica__Content;
        qtc.Attica__Content_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `setId` instead
    ///
    pub const SetId = setId;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` _id: []const u8 `
    ///
    pub fn setId(self: Attica__Content, _id: []const u8) void {
        const id_str = qtc.libqt_string{
            .len = _id.len,
            .data = _id.ptr,
        };
        qtc.Attica__Content_SetId(@ptrCast(self.ptr), id_str);
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn id(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Id(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.id: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setName` instead
    ///
    pub const SetName = setName;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` _name: []const u8 `
    ///
    pub fn setName(self: Attica__Content, _name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        qtc.Attica__Content_SetName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn name(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Name(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.name: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setRating` instead
    ///
    pub const SetRating = setRating;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setRating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` _rating: i32 `
    ///
    pub fn setRating(self: Attica__Content, _rating: i32) void {
        qtc.Attica__Content_SetRating(@ptrCast(self.ptr), @bitCast(_rating));
    }

    /// ### DEPRECATED: Use `rating` instead
    ///
    pub const Rating = rating;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#rating)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn rating(self: Attica__Content) i32 {
        return qtc.Attica__Content_Rating(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDownloads` instead
    ///
    pub const SetDownloads = setDownloads;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setDownloads)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` _downloads: i32 `
    ///
    pub fn setDownloads(self: Attica__Content, _downloads: i32) void {
        qtc.Attica__Content_SetDownloads(@ptrCast(self.ptr), @bitCast(_downloads));
    }

    /// ### DEPRECATED: Use `downloads` instead
    ///
    pub const Downloads = downloads;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#downloads)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn downloads(self: Attica__Content) i32 {
        return qtc.Attica__Content_Downloads(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setNumberOfComments` instead
    ///
    pub const SetNumberOfComments = setNumberOfComments;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setNumberOfComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` numComments: i32 `
    ///
    pub fn setNumberOfComments(self: Attica__Content, numComments: i32) void {
        qtc.Attica__Content_SetNumberOfComments(@ptrCast(self.ptr), @bitCast(numComments));
    }

    /// ### DEPRECATED: Use `numberOfComments` instead
    ///
    pub const NumberOfComments = numberOfComments;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#numberOfComments)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn numberOfComments(self: Attica__Content) i32 {
        return qtc.Attica__Content_NumberOfComments(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCreated` instead
    ///
    pub const SetCreated = setCreated;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setCreated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` _created: QDateTime `
    ///
    pub fn setCreated(self: Attica__Content, _created: anytype) void {
        comptime _ = @TypeOf(_created)._is_QDateTime;
        qtc.Attica__Content_SetCreated(@ptrCast(self.ptr), @ptrCast(_created.ptr));
    }

    /// ### DEPRECATED: Use `created` instead
    ///
    pub const Created = created;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#created)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn created(self: Attica__Content) QDateTime {
        return .{ .ptr = qtc.Attica__Content_Created(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUpdated` instead
    ///
    pub const SetUpdated = setUpdated;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` _updated: QDateTime `
    ///
    pub fn setUpdated(self: Attica__Content, _updated: anytype) void {
        comptime _ = @TypeOf(_updated)._is_QDateTime;
        qtc.Attica__Content_SetUpdated(@ptrCast(self.ptr), @ptrCast(_updated.ptr));
    }

    /// ### DEPRECATED: Use `updated` instead
    ///
    pub const Updated = updated;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#updated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn updated(self: Attica__Content) QDateTime {
        return .{ .ptr = qtc.Attica__Content_Updated(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `summary` instead
    ///
    pub const Summary = summary;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#summary)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn summary(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Summary(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.summary: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `detailpage` instead
    ///
    pub const Detailpage = detailpage;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#detailpage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn detailpage(self: Attica__Content) QUrl {
        return .{ .ptr = qtc.Attica__Content_Detailpage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `changelog` instead
    ///
    pub const Changelog = changelog;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#changelog)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn changelog(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Changelog(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.changelog: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `version` instead
    ///
    pub const Version = version;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#version)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn version(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Version(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.version: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `depend` instead
    ///
    pub const Depend = depend;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#depend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn depend(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Depend(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.depend: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `downloadUrlDescription` instead
    ///
    pub const DownloadUrlDescription = downloadUrlDescription;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#downloadUrlDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` number: i32 `
    ///
    pub fn downloadUrlDescription(self: Attica__Content, number: i32) Attica__DownloadDescription {
        return .{ .ptr = qtc.Attica__Content_DownloadUrlDescription(@ptrCast(self.ptr), @bitCast(number)) };
    }

    /// ### DEPRECATED: Use `downloadUrlDescriptions` instead
    ///
    pub const DownloadUrlDescriptions = downloadUrlDescriptions;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#downloadUrlDescriptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn downloadUrlDescriptions(self: Attica__Content, allocator: std.mem.Allocator) []Attica__DownloadDescription {
        const _arr: qtc.libqt_list = qtc.Attica__Content_DownloadUrlDescriptions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__DownloadDescription, _arr.len) catch @panic("Attica__Content.downloadUrlDescriptions: Memory allocation failed");
        const _data_val: [*]QtC.Attica__DownloadDescription = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `homePageEntry` instead
    ///
    pub const HomePageEntry = homePageEntry;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#homePageEntry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` number: i32 `
    ///
    pub fn homePageEntry(self: Attica__Content, number: i32) Attica__HomePageEntry {
        return .{ .ptr = qtc.Attica__Content_HomePageEntry(@ptrCast(self.ptr), @bitCast(number)) };
    }

    /// ### DEPRECATED: Use `homePageEntries` instead
    ///
    pub const HomePageEntries = homePageEntries;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#homePageEntries)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn homePageEntries(self: Attica__Content, allocator: std.mem.Allocator) []Attica__HomePageEntry {
        const _arr: qtc.libqt_list = qtc.Attica__Content_HomePageEntries(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__HomePageEntry, _arr.len) catch @panic("Attica__Content.homePageEntries: Memory allocation failed");
        const _data_val: [*]QtC.Attica__HomePageEntry = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `previewPicture` instead
    ///
    pub const PreviewPicture = previewPicture;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#previewPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn previewPicture(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_PreviewPicture(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.previewPicture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `smallPreviewPicture` instead
    ///
    pub const SmallPreviewPicture = smallPreviewPicture;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#smallPreviewPicture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn smallPreviewPicture(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_SmallPreviewPicture(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.smallPreviewPicture: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `license` instead
    ///
    pub const License = license;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#license)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn license(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_License(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.license: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `licenseName` instead
    ///
    pub const LicenseName = licenseName;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#licenseName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn licenseName(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_LicenseName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.licenseName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `author` instead
    ///
    pub const Author = author;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#author)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn author(self: Attica__Content, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.Attica__Content_Author(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.author: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `icons` instead
    ///
    pub const Icons = icons;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#icons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icons(self: Attica__Content, allocator: std.mem.Allocator) []Attica__Icon {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Icons(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Icon, _arr.len) catch @panic("Attica__Content.icons: Memory allocation failed");
        const _data_val: [*]QtC.Attica__Icon = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `icons2` instead
    ///
    pub const Icons2 = icons2;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#icons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icons2(self: Attica__Content, allocator: std.mem.Allocator) []Attica__Icon {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Icons2(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(Attica__Icon, _arr.len) catch @panic("Attica__Content.icons2: Memory allocation failed");
        const _data_val: [*]QtC.Attica__Icon = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcons` instead
    ///
    pub const SetIcons = setIcons;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setIcons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` _icons: []Attica__Icon `
    ///
    pub fn setIcons(self: Attica__Content, _icons: []Attica__Icon) void {
        const icons_list = qtc.libqt_list{
            .len = _icons.len,
            .data = @ptrCast(_icons.ptr),
        };
        qtc.Attica__Content_SetIcons(@ptrCast(self.ptr), icons_list);
    }

    /// ### DEPRECATED: Use `videos` instead
    ///
    pub const Videos = videos;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#videos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn videos(self: Attica__Content, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Videos(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("Attica__Content.videos: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setVideos` instead
    ///
    pub const SetVideos = setVideos;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setVideos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` _videos: []QUrl `
    ///
    pub fn setVideos(self: Attica__Content, _videos: []QUrl) void {
        const videos_list = qtc.libqt_list{
            .len = _videos.len,
            .data = @ptrCast(_videos.ptr),
        };
        qtc.Attica__Content_SetVideos(@ptrCast(self.ptr), videos_list);
    }

    /// ### DEPRECATED: Use `tags` instead
    ///
    pub const Tags = tags;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#tags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn tags(self: Attica__Content, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.Attica__Content_Tags(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("Attica__Content.tags: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("Attica__Content.tags: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `setTags` instead
    ///
    pub const SetTags = setTags;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#setTags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _tags: []const []const u8 `
    ///
    pub fn setTags(self: Attica__Content, allocator: std.mem.Allocator, _tags: []const []const u8) void {
        const tags_arr = allocator.alloc(qtc.libqt_string, _tags.len) catch @panic("Attica__Content.setTags: Memory allocation failed");
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
        qtc.Attica__Content_SetTags(@ptrCast(self.ptr), tags_list);
    }

    /// ### DEPRECATED: Use `addAttribute` instead
    ///
    pub const AddAttribute = addAttribute;

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
    pub fn addAttribute(self: Attica__Content, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `attribute` instead
    ///
    pub const Attribute = attribute;

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
    pub fn attribute(self: Attica__Content, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.Attica__Content_Attribute(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.attribute: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `attributes` instead
    ///
    pub const Attributes = attributes;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#attributes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn attributes(self: Attica__Content, allocator: std.mem.Allocator) ArrayMap_constu8_constu8 {
        const _map: qtc.libqt_map = qtc.Attica__Content_Attributes(@ptrCast(self.ptr));
        var _ret: ArrayMap_constu8_constu8 = .empty;
        _ret.ensureTotalCapacity(allocator, @intCast(_map.len)) catch @panic("Attica__Content.attributes: Total capacity allocation failed");
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
            const _entry_slice = allocator.alloc(u8, _key.len) catch @panic("Attica__Content.attributes: Memory allocation failed");
            @memcpy(_entry_slice, _key.data);
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("Attica__Content.attributes: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.putAssumeCapacity(_entry_slice, _value_slice);
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://api.kde.org/attica-content.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Attica__Content `
    ///
    pub fn isValid(self: Attica__Content) bool {
        return qtc.Attica__Content_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `previewPicture1` instead
    ///
    pub const PreviewPicture1 = previewPicture1;

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
    pub fn previewPicture1(self: Attica__Content, allocator: std.mem.Allocator, number: []const u8) []const u8 {
        const number_str = qtc.libqt_string{
            .len = number.len,
            .data = number.ptr,
        };
        var _str = qtc.Attica__Content_PreviewPicture1(@ptrCast(self.ptr), number_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.previewPicture1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `smallPreviewPicture1` instead
    ///
    pub const SmallPreviewPicture1 = smallPreviewPicture1;

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
    pub fn smallPreviewPicture1(self: Attica__Content, allocator: std.mem.Allocator, number: []const u8) []const u8 {
        const number_str = qtc.libqt_string{
            .len = number.len,
            .data = number.ptr,
        };
        var _str = qtc.Attica__Content_SmallPreviewPicture1(@ptrCast(self.ptr), number_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("Attica__Content.smallPreviewPicture1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: Attica__Content `
    ///
    pub fn delete(self: Attica__Content) void {
        qtc.Attica__Content_Delete(@ptrCast(self.ptr));
    }
};
