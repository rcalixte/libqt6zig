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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KBookmarkOwner object in C++ memory
    ///
    pub fn new() KBookmarkOwner {
        return .{ .ptr = qtc.KBookmarkOwner_new() };
    }

    /// ### DEPRECATED: Use `currentTitle` instead
    ///
    pub const CurrentTitle = currentTitle;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentTitle(self: KBookmarkOwner, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner_CurrentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkOwner.currentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onCurrentTitle` instead
    ///
    pub const OnCurrentTitle = onCurrentTitle;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentTitle)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onCurrentTitle(self: KBookmarkOwner, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KBookmarkOwner_OnCurrentTitle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentTitle` instead
    ///
    pub const SuperCurrentTitle = superCurrentTitle;

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
    pub fn superCurrentTitle(self: KBookmarkOwner, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner_SuperCurrentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkOwner.currentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `currentUrl` instead
    ///
    pub const CurrentUrl = currentUrl;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn currentUrl(self: KBookmarkOwner) QUrl {
        return .{ .ptr = qtc.KBookmarkOwner_CurrentUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCurrentUrl` instead
    ///
    pub const OnCurrentUrl = onCurrentUrl;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCurrentUrl(self: KBookmarkOwner, callback: *const fn () callconv(.c) QUrl) void {
        qtc.KBookmarkOwner_OnCurrentUrl(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentUrl` instead
    ///
    pub const SuperCurrentUrl = superCurrentUrl;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentUrl)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn superCurrentUrl(self: KBookmarkOwner) QUrl {
        return .{ .ptr = qtc.KBookmarkOwner_SuperCurrentUrl(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentIcon` instead
    ///
    pub const CurrentIcon = currentIcon;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentIcon(self: KBookmarkOwner, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner_CurrentIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkOwner.currentIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onCurrentIcon` instead
    ///
    pub const OnCurrentIcon = onCurrentIcon;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentIcon)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn onCurrentIcon(self: KBookmarkOwner, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KBookmarkOwner_OnCurrentIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentIcon` instead
    ///
    pub const SuperCurrentIcon = superCurrentIcon;

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
    pub fn superCurrentIcon(self: KBookmarkOwner, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner_SuperCurrentIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkOwner.currentIcon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `supportsTabs` instead
    ///
    pub const SupportsTabs = supportsTabs;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn supportsTabs(self: KBookmarkOwner) bool {
        return qtc.KBookmarkOwner_SupportsTabs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportsTabs` instead
    ///
    pub const OnSupportsTabs = onSupportsTabs;

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
    pub fn onSupportsTabs(self: KBookmarkOwner, callback: *const fn () callconv(.c) bool) void {
        qtc.KBookmarkOwner_OnSupportsTabs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportsTabs` instead
    ///
    pub const SuperSupportsTabs = superSupportsTabs;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#supportsTabs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn superSupportsTabs(self: KBookmarkOwner) bool {
        return qtc.KBookmarkOwner_SuperSupportsTabs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentBookmarkList` instead
    ///
    pub const CurrentBookmarkList = currentBookmarkList;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#currentBookmarkList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn currentBookmarkList(self: KBookmarkOwner, allocator: std.mem.Allocator) []KBookmarkOwner__FutureBookmark {
        const _arr: qtc.libqt_list = qtc.KBookmarkOwner_CurrentBookmarkList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KBookmarkOwner__FutureBookmark, _arr.len) catch @panic("KBookmarkOwner.currentBookmarkList: Memory allocation failed");
        const _data_val: [*]QtC.KBookmarkOwner__FutureBookmark = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onCurrentBookmarkList` instead
    ///
    pub const OnCurrentBookmarkList = onCurrentBookmarkList;

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
    pub fn onCurrentBookmarkList(self: KBookmarkOwner, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KBookmarkOwner_OnCurrentBookmarkList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCurrentBookmarkList` instead
    ///
    pub const SuperCurrentBookmarkList = superCurrentBookmarkList;

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
    pub fn superCurrentBookmarkList(self: KBookmarkOwner, allocator: std.mem.Allocator) []KBookmarkOwner__FutureBookmark {
        const _arr: qtc.libqt_list = qtc.KBookmarkOwner_SuperCurrentBookmarkList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(KBookmarkOwner__FutureBookmark, _arr.len) catch @panic("KBookmarkOwner.currentBookmarkList: Memory allocation failed");
        const _data_val: [*]QtC.KBookmarkOwner__FutureBookmark = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `enableOption` instead
    ///
    pub const EnableOption = enableOption;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#enableOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` option: kbookmarkowner_enums.BookmarkOption `
    ///
    pub fn enableOption(self: KBookmarkOwner, option: i32) bool {
        return qtc.KBookmarkOwner_EnableOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### DEPRECATED: Use `onEnableOption` instead
    ///
    pub const OnEnableOption = onEnableOption;

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
    pub fn onEnableOption(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, i32) callconv(.c) bool) void {
        qtc.KBookmarkOwner_OnEnableOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnableOption` instead
    ///
    pub const SuperEnableOption = superEnableOption;

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
    pub fn superEnableOption(self: KBookmarkOwner, option: i32) bool {
        return qtc.KBookmarkOwner_SuperEnableOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### DEPRECATED: Use `openBookmark` instead
    ///
    pub const OpenBookmark = openBookmark;

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
    pub fn openBookmark(self: KBookmarkOwner, bm: anytype, mb: i32, km: i32) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_OpenBookmark(@ptrCast(self.ptr), @ptrCast(bm.ptr), @bitCast(mb), @bitCast(km));
    }

    /// ### DEPRECATED: Use `onOpenBookmark` instead
    ///
    pub const OnOpenBookmark = onOpenBookmark;

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
    pub fn onOpenBookmark(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, KBookmark, i32, i32) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenBookmark(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpenBookmark` instead
    ///
    pub const SuperOpenBookmark = superOpenBookmark;

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
    pub fn superOpenBookmark(self: KBookmarkOwner, bm: anytype, mb: i32, km: i32) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_SuperOpenBookmark(@ptrCast(self.ptr), @ptrCast(bm.ptr), @bitCast(mb), @bitCast(km));
    }

    /// ### DEPRECATED: Use `openFolderinTabs` instead
    ///
    pub const OpenFolderinTabs = openFolderinTabs;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openFolderinTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmarkGroup `
    ///
    pub fn openFolderinTabs(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmarkGroup;
        qtc.KBookmarkOwner_OpenFolderinTabs(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### DEPRECATED: Use `onOpenFolderinTabs` instead
    ///
    pub const OnOpenFolderinTabs = onOpenFolderinTabs;

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
    pub fn onOpenFolderinTabs(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, KBookmarkGroup) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenFolderinTabs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpenFolderinTabs` instead
    ///
    pub const SuperOpenFolderinTabs = superOpenFolderinTabs;

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
    pub fn superOpenFolderinTabs(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmarkGroup;
        qtc.KBookmarkOwner_SuperOpenFolderinTabs(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### DEPRECATED: Use `openInNewTab` instead
    ///
    pub const OpenInNewTab = openInNewTab;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewTab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn openInNewTab(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_OpenInNewTab(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### DEPRECATED: Use `onOpenInNewTab` instead
    ///
    pub const OnOpenInNewTab = onOpenInNewTab;

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
    pub fn onOpenInNewTab(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, KBookmark) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenInNewTab(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpenInNewTab` instead
    ///
    pub const SuperOpenInNewTab = superOpenInNewTab;

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
    pub fn superOpenInNewTab(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_SuperOpenInNewTab(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### DEPRECATED: Use `openInNewWindow` instead
    ///
    pub const OpenInNewWindow = openInNewWindow;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#openInNewWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn openInNewWindow(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_OpenInNewWindow(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### DEPRECATED: Use `onOpenInNewWindow` instead
    ///
    pub const OnOpenInNewWindow = onOpenInNewWindow;

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
    pub fn onOpenInNewWindow(self: KBookmarkOwner, callback: *const fn (KBookmarkOwner, KBookmark) callconv(.c) void) void {
        qtc.KBookmarkOwner_OnOpenInNewWindow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOpenInNewWindow` instead
    ///
    pub const SuperOpenInNewWindow = superOpenInNewWindow;

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
    pub fn superOpenInNewWindow(self: KBookmarkOwner, bm: anytype) void {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        qtc.KBookmarkOwner_SuperOpenInNewWindow(@ptrCast(self.ptr), @ptrCast(bm.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner.html#dtor.KBookmarkOwner)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmarkOwner `
    ///
    pub fn delete(self: KBookmarkOwner) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KBookmarkOwner::FutureBookmark object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _title: []const u8 `
    ///
    /// ` _url: QUrl `
    ///
    /// ` _icon: []const u8 `
    ///
    pub fn new(_title: []const u8, _url: anytype, _icon: []const u8) KBookmarkOwner__FutureBookmark {
        const title_str = qtc.libqt_string{
            .len = _title.len,
            .data = _title.ptr,
        };
        comptime _ = @TypeOf(_url)._is_QUrl;
        const icon_str = qtc.libqt_string{
            .len = _icon.len,
            .data = _icon.ptr,
        };
        return .{ .ptr = qtc.KBookmarkOwner__FutureBookmark_new(title_str, @ptrCast(_url.ptr), icon_str) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KBookmarkOwner::FutureBookmark object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: KBookmarkOwner__FutureBookmark `
    ///
    pub fn new2(other: anytype) KBookmarkOwner__FutureBookmark {
        comptime _ = @TypeOf(other)._is_KBookmarkOwner__FutureBookmark;
        return .{ .ptr = qtc.KBookmarkOwner__FutureBookmark_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    /// ` other: KBookmarkOwner__FutureBookmark `
    ///
    pub fn operatorAssign(self: KBookmarkOwner__FutureBookmark, other: anytype) void {
        comptime _ = @TypeOf(other)._is_KBookmarkOwner__FutureBookmark;
        qtc.KBookmarkOwner__FutureBookmark_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `title` instead
    ///
    pub const Title = title;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn title(self: KBookmarkOwner__FutureBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner__FutureBookmark_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkOwner__FutureBookmark.title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    pub fn url(self: KBookmarkOwner__FutureBookmark) QUrl {
        return .{ .ptr = qtc.KBookmarkOwner__FutureBookmark_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkowner-futurebookmark.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: KBookmarkOwner__FutureBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkOwner__FutureBookmark_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkOwner__FutureBookmark.icon: Memory allocation failed");
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
    /// ` self: KBookmarkOwner__FutureBookmark `
    ///
    pub fn delete(self: KBookmarkOwner__FutureBookmark) void {
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
