const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KBookmark = @import("libqt6").KBookmark;
const KBookmarkGroup = @import("libqt6").KBookmarkGroup;
const QUrl = @import("libqt6").QUrl;
const kbookmarkowner_enums = enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html)
pub const KBookmarkOwner = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBookmarkOwner,

    pub const _is_KBookmarkOwner = {};

    /// New constructs a new KBookmarkOwner object.
    ///
    pub fn New() KBookmarkOwner {
        return .{ .ptr = qtc.KBookmarkOwner_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentTitle(self: KBookmarkOwner, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner_CurrentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner.CurrentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnCurrentTitle(self: KBookmarkOwner, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KBookmarkOwner_OnCurrentTitle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentTitle` instead
    ///
    pub const QBaseCurrentTitle = SuperCurrentTitle;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperCurrentTitle(self: KBookmarkOwner, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner_SuperCurrentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner.CurrentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn CurrentUrl(self: KBookmarkOwner) QUrl {
        return .{ .ptr = qtc.KBookmarkOwner_CurrentUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn () callconv(.c) QUrl `
    ///
    pub fn OnCurrentUrl(self: KBookmarkOwner, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KBookmarkOwner_OnCurrentUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentUrl` instead
    ///
    pub const QBaseCurrentUrl = SuperCurrentUrl;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn SuperCurrentUrl(self: KBookmarkOwner) QUrl {
        return .{ .ptr = qtc.KBookmarkOwner_SuperCurrentUrl(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentIcon(self: KBookmarkOwner, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner_CurrentIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner.CurrentIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnCurrentIcon(self: KBookmarkOwner, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KBookmarkOwner_OnCurrentIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentIcon` instead
    ///
    pub const QBaseCurrentIcon = SuperCurrentIcon;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperCurrentIcon(self: KBookmarkOwner, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner_SuperCurrentIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner.CurrentIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn SupportsTabs(self: KBookmarkOwner) bool {
        return qtc.KBookmarkOwner_SupportsTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSupportsTabs(self: KBookmarkOwner, callback: *const fn () callconv(.c) bool) void {
        qtc.KBookmarkOwner_OnSupportsTabs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportsTabs` instead
    ///
    pub const QBaseSupportsTabs = SuperSupportsTabs;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn SuperSupportsTabs(self: KBookmarkOwner) bool {
        return qtc.KBookmarkOwner_SuperSupportsTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CurrentBookmarkList(self: KBookmarkOwner, allocator: std.mem.Allocator) []KBookmarkOwner__FutureBookmark {
        const _arr: qtc.libqt_list = qtc.KBookmarkOwner_CurrentBookmarkList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KBookmarkOwner__FutureBookmark, _arr.len) catch @panic("kbookmarkowner.CurrentBookmarkList: Memory allocation failed");
        const _data: [*]QtC.KBookmarkOwner__FutureBookmark = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []KBookmarkOwner__FutureBookmark `
    ///
    pub fn OnCurrentBookmarkList(self: KBookmarkOwner, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KBookmarkOwner_OnCurrentBookmarkList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCurrentBookmarkList` instead
    ///
    pub const QBaseCurrentBookmarkList = SuperCurrentBookmarkList;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperCurrentBookmarkList(self: KBookmarkOwner, allocator: std.mem.Allocator) []KBookmarkOwner__FutureBookmark {
        const _arr: qtc.libqt_list = qtc.KBookmarkOwner_SuperCurrentBookmarkList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KBookmarkOwner__FutureBookmark, _arr.len) catch @panic("kbookmarkowner.CurrentBookmarkList: Memory allocation failed");
        const _data: [*]QtC.KBookmarkOwner__FutureBookmark = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` option: kbookmarkowner_enums.BookmarkOption `
    ///
    pub fn EnableOption(self: KBookmarkOwner, option: i32) bool {
        return qtc.KBookmarkOwner_EnableOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn (self: KBookmarkOwner, option: kbookmarkowner_enums.BookmarkOption) callconv(.c) bool `
    ///
    pub fn OnEnableOption(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, i32) callconv(.c) bool) void {
        qtc.KBookmarkOwner_OnEnableOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEnableOption` instead
    ///
    pub const QBaseEnableOption = SuperEnableOption;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` option: kbookmarkowner_enums.BookmarkOption `
    ///
    pub fn SuperEnableOption(self: KBookmarkOwner, option: i32) bool {
        return qtc.KBookmarkOwner_SuperEnableOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmark `
    ///
    /// ` mb: flag of qnamespace_enums.MouseButton `
    ///
    /// ` km: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn OpenBookmark(self: KBookmarkOwner, bm: anytype, mb: i32, km: i32) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_OpenBookmark(@ptrCast(self.ptr), @ptrCast(bm.ptr), @bitCast(mb), @bitCast(km));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openBookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn (self: KBookmarkOwner, bm: KBookmark, mb: flag of qnamespace_enums.MouseButton, km: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void `
    ///
    pub fn OnOpenBookmark(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, KBookmark, i32, i32) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenBookmark(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpenBookmark` instead
    ///
    pub const QBaseOpenBookmark = SuperOpenBookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openBookmark)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmark `
    ///
    /// ` mb: flag of qnamespace_enums.MouseButton `
    ///
    /// ` km: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SuperOpenBookmark(self: KBookmarkOwner, bm: anytype, mb: i32, km: i32) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_SuperOpenBookmark(@ptrCast(self.ptr), @ptrCast(bm.ptr), @bitCast(mb), @bitCast(km));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmarkGroup `
    ///
    pub fn OpenFolderinTabs(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmarkGroup;
        qtc.KBookmarkOwner_OpenFolderinTabs(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn (self: KBookmarkOwner, bm: KBookmarkGroup) callconv(.c) void `
    ///
    pub fn OnOpenFolderinTabs(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, KBookmarkGroup) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenFolderinTabs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpenFolderinTabs` instead
    ///
    pub const QBaseOpenFolderinTabs = SuperOpenFolderinTabs;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmarkGroup `
    ///
    pub fn SuperOpenFolderinTabs(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmarkGroup;
        qtc.KBookmarkOwner_SuperOpenFolderinTabs(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn OpenInNewTab(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_OpenInNewTab(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn (self: KBookmarkOwner, bm: KBookmark) callconv(.c) void `
    ///
    pub fn OnOpenInNewTab(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, KBookmark) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenInNewTab(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpenInNewTab` instead
    ///
    pub const QBaseOpenInNewTab = SuperOpenInNewTab;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn SuperOpenInNewTab(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_SuperOpenInNewTab(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn OpenInNewWindow(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_OpenInNewWindow(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn (self: KBookmarkOwner, bm: KBookmark) callconv(.c) void `
    ///
    pub fn OnOpenInNewWindow(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, KBookmark) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenInNewWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOpenInNewWindow` instead
    ///
    pub const QBaseOpenInNewWindow = SuperOpenInNewWindow;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn SuperOpenInNewWindow(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_SuperOpenInNewWindow(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#dtor.KBookmarkOwner)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn Delete(self: KBookmarkOwner) void {
        qtc.KBookmarkOwner_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html)
pub const KBookmarkOwner__FutureBookmark = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBookmarkOwner__FutureBookmark,

    pub const _is_KBookmarkOwner__FutureBookmark = {};

    /// New constructs a new KBookmarkOwner::FutureBookmark object.
    ///
    /// ## Parameter(s):
    ///
    /// ` title: []const u8 `
    ///
    /// ` url: QUrl `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn New(title: []const u8, url: anytype, icon: []const u8) KBookmarkOwner__FutureBookmark {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        return .{ .ptr = qtc.KBookmarkOwner__FutureBookmark_new(title_str, @ptrCast(url.ptr), icon_str) };
    }

    /// New2 constructs a new KBookmarkOwner::FutureBookmark object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KBookmarkOwner__FutureBookmark `
    ///
    pub fn New2(other: anytype) KBookmarkOwner__FutureBookmark {
        comptime _ = @TypeOf(other)._is_KBookmarkOwner__FutureBookmark;
        return .{ .ptr = qtc.KBookmarkOwner__FutureBookmark_new2(@ptrCast(other.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    /// ` other: KBookmarkOwner__FutureBookmark `
    ///
    pub fn OperatorAssign(self: KBookmarkOwner__FutureBookmark, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KBookmarkOwner__FutureBookmark;
        qtc.KBookmarkOwner__FutureBookmark_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: KBookmarkOwner__FutureBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner__FutureBookmark_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner__futurebookmark.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    pub fn Url(self: KBookmarkOwner__FutureBookmark) QUrl {
        return .{ .ptr = qtc.KBookmarkOwner__FutureBookmark_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: KBookmarkOwner__FutureBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner__FutureBookmark_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkowner__futurebookmark.Icon: Memory allocation failed");
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
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    pub fn Delete(self: KBookmarkOwner__FutureBookmark) void {
        qtc.KBookmarkOwner__FutureBookmark_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#public-types)
pub const enums = struct {
    pub const BookmarkOption = enum(i32) {
        pub const ShowAddBookmark: i32 = 0;
        pub const ShowEditBookmark: i32 = 1;
    };
};
