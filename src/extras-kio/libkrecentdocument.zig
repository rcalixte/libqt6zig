const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const krecentdocument_enums = enums;
const std = @import("std");

/// https://api.kde.org/krecentdocument.html
pub const krecentdocument = struct {
    /// New constructs a new KRecentDocument object.
    ///
    /// ``` other: QtC.KRecentDocument ```
    pub fn New(other: ?*anyopaque) QtC.KRecentDocument {
        return qtc.KRecentDocument_new(@ptrCast(other));
    }

    /// New2 constructs a new KRecentDocument object and invalidates the source KRecentDocument object.
    ///
    /// ``` other: QtC.KRecentDocument ```
    pub fn New2(other: ?*anyopaque) QtC.KRecentDocument {
        return qtc.KRecentDocument_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.KRecentDocument, other: QtC.KRecentDocument ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KRecentDocument_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.KRecentDocument, other: QtC.KRecentDocument ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KRecentDocument_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#recentUrls)
    ///
    /// ``` allocator: std.mem.Allocator ```
    pub fn RecentUrls(allocator: std.mem.Allocator) []QtC.QUrl {
        const _arr: qtc.libqt_list = qtc.KRecentDocument_RecentUrls();
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QUrl, _arr.len) catch @panic("krecentdocument.RecentUrls: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#add)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn Add(url: ?*anyopaque) void {
        qtc.KRecentDocument_Add(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#add)
    ///
    /// ``` url: QtC.QUrl, groups: []krecentdocument_enums.RecentDocumentGroup ```
    pub fn Add2(url: ?*anyopaque, groups: []i32) void {
        const groups_list = qtc.libqt_list{
            .len = groups.len,
            .data = groups.ptr,
        };
        qtc.KRecentDocument_Add2(@ptrCast(url), groups_list);
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#add)
    ///
    /// ``` url: QtC.QUrl, desktopEntryName: []const u8 ```
    pub fn Add3(url: ?*anyopaque, desktopEntryName: []const u8) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        qtc.KRecentDocument_Add3(@ptrCast(url), desktopEntryName_str);
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#add)
    ///
    /// ``` url: QtC.QUrl, desktopEntryName: []const u8, groups: []krecentdocument_enums.RecentDocumentGroup ```
    pub fn Add4(url: ?*anyopaque, desktopEntryName: []const u8, groups: []i32) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        const groups_list = qtc.libqt_list{
            .len = groups.len,
            .data = groups.ptr,
        };
        qtc.KRecentDocument_Add4(@ptrCast(url), desktopEntryName_str, groups_list);
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#clearEntriesOldestEntries)
    ///
    /// ``` maxEntries: i32 ```
    pub fn ClearEntriesOldestEntries(maxEntries: i32) bool {
        return qtc.KRecentDocument_ClearEntriesOldestEntries(@intCast(maxEntries));
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#removeFile)
    ///
    /// ``` url: QtC.QUrl ```
    pub fn RemoveFile(url: ?*anyopaque) void {
        qtc.KRecentDocument_RemoveFile(@ptrCast(url));
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#removeApplication)
    ///
    /// ``` desktopEntryName: []const u8 ```
    pub fn RemoveApplication(desktopEntryName: []const u8) void {
        const desktopEntryName_str = qtc.libqt_string{
            .len = desktopEntryName.len,
            .data = desktopEntryName.ptr,
        };
        qtc.KRecentDocument_RemoveApplication(desktopEntryName_str);
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#removeBookmarksModifiedSince)
    ///
    /// ``` since: QtC.QDateTime ```
    pub fn RemoveBookmarksModifiedSince(since: ?*anyopaque) void {
        qtc.KRecentDocument_RemoveBookmarksModifiedSince(@ptrCast(since));
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#clear)
    ///
    ///
    pub fn Clear() void {
        qtc.KRecentDocument_Clear();
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#maximumItems)
    ///
    ///
    pub fn MaximumItems() i32 {
        return qtc.KRecentDocument_MaximumItems();
    }

    /// [Qt documentation](https://api.kde.org/krecentdocument.html#dtor.KRecentDocument)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KRecentDocument ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KRecentDocument_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/krecentdocument.html#types
pub const enums = struct {
    pub const RecentDocumentGroup = enum {
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
