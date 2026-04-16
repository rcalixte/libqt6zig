const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDateTime = @import("libqt6").QDateTime;
const QUrl = @import("libqt6").QUrl;
const krecentdocument_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/krecentdocument.html)
pub const KRecentDocument = extern struct {
    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRecentDocument,

    pub const _is_KRecentDocument = {};

    /// New constructs a new KRecentDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KRecentDocument `
    ///
    pub fn New(other: anytype) KRecentDocument {
        comptime _ = @TypeOf(other)._is_KRecentDocument;
        return .{ .ptr = qtc.KRecentDocument_new(@ptrCast(other.ptr)) };
    }

    /// New2 constructs a new KRecentDocument object and invalidates the source KRecentDocument object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KRecentDocument `
    ///
    pub fn New2(other: anytype) KRecentDocument {
        comptime _ = @TypeOf(other)._is_KRecentDocument;
        return .{ .ptr = qtc.KRecentDocument_new2(@ptrCast(other.ptr)) };
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentDocument `
    ///
    /// ` other: KRecentDocument `
    ///
    pub fn CopyAssign(self: KRecentDocument, other: KRecentDocument) void {
        qtc.KRecentDocument_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentDocument `
    ///
    /// ` other: KRecentDocument `
    ///
    pub fn MoveAssign(self: KRecentDocument, other: KRecentDocument) void {
        qtc.KRecentDocument_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#recentUrls)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RecentUrls(allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KRecentDocument_RecentUrls();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("krecentdocument.RecentUrls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn Add(url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KRecentDocument_Add(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` groups: []krecentdocument_enums.RecentDocumentGroup `
    ///
    pub fn Add2(url: anytype, groups: []i32) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        const groups_list = qtc.libqt_list{
            .len = groups.len,
            .data = groups.ptr,
        };
        qtc.KRecentDocument_Add2(@ptrCast(url.ptr), groups_list);
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` desktopEntryName: []const u8 `
    ///
    pub fn Add3(url: anytype, desktopEntryName: []const u8) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        qtc.KRecentDocument_Add3(@ptrCast(url.ptr), desktopEntryName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#add)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    /// ` desktopEntryName: []const u8 `
    ///
    /// ` groups: []krecentdocument_enums.RecentDocumentGroup `
    ///
    pub fn Add4(url: anytype, desktopEntryName: []const u8, groups: []i32) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        const groups_list = qtc.libqt_list{
            .len = groups.len,
            .data = groups.ptr,
        };
        qtc.KRecentDocument_Add4(@ptrCast(url.ptr), desktopEntryName_str, groups_list);
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#removeFile)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QUrl `
    ///
    pub fn RemoveFile(url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KRecentDocument_RemoveFile(@ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#removeApplication)
    ///
    /// ## Parameter(s):
    ///
    /// ` desktopEntryName: []const u8 `
    ///
    pub fn RemoveApplication(desktopEntryName: []const u8) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        qtc.KRecentDocument_RemoveApplication(desktopEntryName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#removeBookmarksModifiedSince)
    ///
    /// ## Parameter(s):
    ///
    /// ` since: QDateTime `
    ///
    pub fn RemoveBookmarksModifiedSince(since: anytype) void {
        comptime _ = @TypeOf(since)._is_QDateTime;
        qtc.KRecentDocument_RemoveBookmarksModifiedSince(@ptrCast(since.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#clear)
    ///
    pub fn Clear() void {
        qtc.KRecentDocument_Clear();
    }

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#maximumItems)
    ///
    pub fn MaximumItems() i32 {
        return qtc.KRecentDocument_MaximumItems();
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/krecentdocument.html#dtor.KRecentDocument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KRecentDocument `
    ///
    pub fn Delete(self: KRecentDocument) void {
        qtc.KRecentDocument_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/krecentdocument.html#public-types)
pub const enums = struct {
    pub const RecentDocumentGroup = enum(i32) {
        pub const Development: i32 = 0;
        pub const Office: i32 = 1;
        pub const Database: i32 = 2;
        pub const Email: i32 = 3;
        pub const Presentation: i32 = 4;
        pub const Spreadsheet: i32 = 5;
        pub const WordProcessor: i32 = 6;
        pub const Graphics: i32 = 7;
        pub const TextEditor: i32 = 8;
        pub const Viewer: i32 = 9;
        pub const Archive: i32 = 10;
        pub const Multimedia: i32 = 11;
        pub const Audio: i32 = 12;
        pub const Video: i32 = 13;
        pub const Photo: i32 = 14;
        pub const Application: i32 = 15;
    };
};
