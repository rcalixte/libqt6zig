const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kbookmarkowner_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const std = @import("std");

/// https://api.kde.org/kbookmarkowner.html
pub const kbookmarkowner = struct {
    /// New constructs a new KBookmarkOwner object.
    ///
    ///
    pub fn New() QtC.KBookmarkOwner {
        return qtc.KBookmarkOwner_new();
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentTitle)
    ///
    /// ``` self: QtC.KBookmarkOwner, allocator: std.mem.Allocator ```
    pub fn CurrentTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmarkOwner_CurrentTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner.CurrentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentTitle)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnCurrentTitle(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KBookmarkOwner_OnCurrentTitle(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentTitle)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner, allocator: std.mem.Allocator ```
    pub fn QBaseCurrentTitle(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmarkOwner_QBaseCurrentTitle(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner.CurrentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentUrl)
    ///
    /// ``` self: QtC.KBookmarkOwner ```
    pub fn CurrentUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KBookmarkOwner_CurrentUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn () callconv(.c) QtC.QUrl ```
    pub fn OnCurrentUrl(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QUrl) void {
        qtc.KBookmarkOwner_OnCurrentUrl(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentUrl)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner ```
    pub fn QBaseCurrentUrl(self: ?*anyopaque) QtC.QUrl {
        return qtc.KBookmarkOwner_QBaseCurrentUrl(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentIcon)
    ///
    /// ``` self: QtC.KBookmarkOwner, allocator: std.mem.Allocator ```
    pub fn CurrentIcon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmarkOwner_CurrentIcon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner.CurrentIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn () callconv(.c) [*:0]const u8 ```
    pub fn OnCurrentIcon(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KBookmarkOwner_OnCurrentIcon(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentIcon)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner, allocator: std.mem.Allocator ```
    pub fn QBaseCurrentIcon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmarkOwner_QBaseCurrentIcon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner.CurrentIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#supportsTabs)
    ///
    /// ``` self: QtC.KBookmarkOwner ```
    pub fn SupportsTabs(self: ?*anyopaque) bool {
        return qtc.KBookmarkOwner_SupportsTabs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#supportsTabs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn () callconv(.c) bool ```
    pub fn OnSupportsTabs(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KBookmarkOwner_OnSupportsTabs(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#supportsTabs)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner ```
    pub fn QBaseSupportsTabs(self: ?*anyopaque) bool {
        return qtc.KBookmarkOwner_QBaseSupportsTabs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
    ///
    /// ``` self: QtC.KBookmarkOwner, allocator: std.mem.Allocator ```
    pub fn CurrentBookmarkList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KBookmarkOwner__FutureBookmark {
        const _arr: qtc.libqt_list = qtc.KBookmarkOwner_CurrentBookmarkList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KBookmarkOwner__FutureBookmark, _arr.len) catch @panic("kbookmarkowner.CurrentBookmarkList: Memory allocation failed");
        const _data: [*]QtC.KBookmarkOwner__FutureBookmark = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn () callconv(.c) [*:null]QtC.KBookmarkOwner__FutureBookmark ```
    pub fn OnCurrentBookmarkList(self: ?*anyopaque, callback: *const fn () callconv(.c) [*:null]QtC.KBookmarkOwner__FutureBookmark) void {
        qtc.KBookmarkOwner_OnCurrentBookmarkList(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner, allocator: std.mem.Allocator ```
    pub fn QBaseCurrentBookmarkList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.KBookmarkOwner__FutureBookmark {
        const _arr: qtc.libqt_list = qtc.KBookmarkOwner_QBaseCurrentBookmarkList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.KBookmarkOwner__FutureBookmark, _arr.len) catch @panic("kbookmarkowner.CurrentBookmarkList: Memory allocation failed");
        const _data: [*]QtC.KBookmarkOwner__FutureBookmark = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#enableOption)
    ///
    /// ``` self: QtC.KBookmarkOwner, option: kbookmarkowner_enums.BookmarkOption ```
    pub fn EnableOption(self: ?*anyopaque, option: i32) bool {
        return qtc.KBookmarkOwner_EnableOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#enableOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn (self: QtC.KBookmarkOwner, option: kbookmarkowner_enums.BookmarkOption) callconv(.c) bool ```
    pub fn OnEnableOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KBookmarkOwner_OnEnableOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#enableOption)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner, option: kbookmarkowner_enums.BookmarkOption ```
    pub fn QBaseEnableOption(self: ?*anyopaque, option: i32) bool {
        return qtc.KBookmarkOwner_QBaseEnableOption(@ptrCast(self), @intCast(option));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openBookmark)
    ///
    /// ``` self: QtC.KBookmarkOwner, bm: QtC.KBookmark, mb: flag of qnamespace_enums.MouseButton, km: flag of qnamespace_enums.KeyboardModifier ```
    pub fn OpenBookmark(self: ?*anyopaque, bm: ?*anyopaque, mb: i64, km: i64) void {
        qtc.KBookmarkOwner_OpenBookmark(@ptrCast(self), @ptrCast(bm), @intCast(mb), @intCast(km));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openBookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn (self: QtC.KBookmarkOwner, bm: QtC.KBookmark, mb: flag of qnamespace_enums.MouseButton, km: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void ```
    pub fn OnOpenBookmark(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i64, i64) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenBookmark(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openBookmark)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner, bm: QtC.KBookmark, mb: flag of qnamespace_enums.MouseButton, km: flag of qnamespace_enums.KeyboardModifier ```
    pub fn QBaseOpenBookmark(self: ?*anyopaque, bm: ?*anyopaque, mb: i64, km: i64) void {
        qtc.KBookmarkOwner_QBaseOpenBookmark(@ptrCast(self), @ptrCast(bm), @intCast(mb), @intCast(km));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
    ///
    /// ``` self: QtC.KBookmarkOwner, bm: QtC.KBookmarkGroup ```
    pub fn OpenFolderinTabs(self: ?*anyopaque, bm: ?*anyopaque) void {
        qtc.KBookmarkOwner_OpenFolderinTabs(@ptrCast(self), @ptrCast(bm));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn (self: QtC.KBookmarkOwner, bm: QtC.KBookmarkGroup) callconv(.c) void ```
    pub fn OnOpenFolderinTabs(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenFolderinTabs(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner, bm: QtC.KBookmarkGroup ```
    pub fn QBaseOpenFolderinTabs(self: ?*anyopaque, bm: ?*anyopaque) void {
        qtc.KBookmarkOwner_QBaseOpenFolderinTabs(@ptrCast(self), @ptrCast(bm));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openInNewTab)
    ///
    /// ``` self: QtC.KBookmarkOwner, bm: QtC.KBookmark ```
    pub fn OpenInNewTab(self: ?*anyopaque, bm: ?*anyopaque) void {
        qtc.KBookmarkOwner_OpenInNewTab(@ptrCast(self), @ptrCast(bm));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openInNewTab)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn (self: QtC.KBookmarkOwner, bm: QtC.KBookmark) callconv(.c) void ```
    pub fn OnOpenInNewTab(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenInNewTab(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openInNewTab)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner, bm: QtC.KBookmark ```
    pub fn QBaseOpenInNewTab(self: ?*anyopaque, bm: ?*anyopaque) void {
        qtc.KBookmarkOwner_QBaseOpenInNewTab(@ptrCast(self), @ptrCast(bm));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
    ///
    /// ``` self: QtC.KBookmarkOwner, bm: QtC.KBookmark ```
    pub fn OpenInNewWindow(self: ?*anyopaque, bm: ?*anyopaque) void {
        qtc.KBookmarkOwner_OpenInNewWindow(@ptrCast(self), @ptrCast(bm));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkOwner, callback: *const fn (self: QtC.KBookmarkOwner, bm: QtC.KBookmark) callconv(.c) void ```
    pub fn OnOpenInNewWindow(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenInNewWindow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkOwner, bm: QtC.KBookmark ```
    pub fn QBaseOpenInNewWindow(self: ?*anyopaque, bm: ?*anyopaque) void {
        qtc.KBookmarkOwner_QBaseOpenInNewWindow(@ptrCast(self), @ptrCast(bm));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner.html#dtor.KBookmarkOwner)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KBookmarkOwner ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KBookmarkOwner_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kbookmarkowner-futurebookmark.html
pub const kbookmarkowner__futurebookmark = struct {
    /// New constructs a new KBookmarkOwner::FutureBookmark object.
    ///
    /// ``` title: []const u8, url: QtC.QUrl, icon: []const u8 ```
    pub fn New(title: []const u8, url: ?*anyopaque, icon: []const u8) QtC.KBookmarkOwner__FutureBookmark {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };

        return qtc.KBookmarkOwner__FutureBookmark_new(title_str, @ptrCast(url), icon_str);
    }

    /// New2 constructs a new KBookmarkOwner::FutureBookmark object.
    ///
    /// ``` other: QtC.KBookmarkOwner__FutureBookmark ```
    pub fn New2(other: ?*anyopaque) QtC.KBookmarkOwner__FutureBookmark {
        return qtc.KBookmarkOwner__FutureBookmark_new2(@ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner-futurebookmark.html#operator-eq)
    ///
    /// ``` self: QtC.KBookmarkOwner__FutureBookmark, other: QtC.KBookmarkOwner__FutureBookmark ```
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.KBookmarkOwner__FutureBookmark_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner-futurebookmark.html#title)
    ///
    /// ``` self: QtC.KBookmarkOwner__FutureBookmark, allocator: std.mem.Allocator ```
    pub fn Title(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmarkOwner__FutureBookmark_Title(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner::futurebookmark.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner-futurebookmark.html#url)
    ///
    /// ``` self: QtC.KBookmarkOwner__FutureBookmark ```
    pub fn Url(self: ?*anyopaque) QtC.QUrl {
        return qtc.KBookmarkOwner__FutureBookmark_Url(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkowner-futurebookmark.html#icon)
    ///
    /// ``` self: QtC.KBookmarkOwner__FutureBookmark, allocator: std.mem.Allocator ```
    pub fn Icon(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmarkOwner__FutureBookmark_Icon(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner::futurebookmark.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KBookmarkOwner__FutureBookmark ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KBookmarkOwner__FutureBookmark_Delete(@ptrCast(self));
    }
};

/// https://api.kde.org/kbookmarkowner.html#types
pub const enums = struct {
    pub const BookmarkOption = enum {
        pub const ShowAddBookmark: i32 = 0;
        pub const ShowEditBookmark: i32 = 1;
    };
};
