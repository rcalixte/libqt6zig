const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// https://api.kde.org/kbookmarkmenu.html
pub const kbookmarkmenu = struct {
    /// New constructs a new KBookmarkMenu object.
    ///
    /// ``` manager: QtC.KBookmarkManager, owner: QtC.KBookmarkOwner, parentMenu: QtC.QMenu ```
    pub fn New(manager: ?*anyopaque, owner: ?*anyopaque, parentMenu: ?*anyopaque) QtC.KBookmarkMenu {
        return qtc.KBookmarkMenu_new(@ptrCast(manager), @ptrCast(owner), @ptrCast(parentMenu));
    }

    /// New2 constructs a new KBookmarkMenu object.
    ///
    /// ``` mgr: QtC.KBookmarkManager, owner: QtC.KBookmarkOwner, parentMenu: QtC.QMenu, parentAddress: []const u8 ```
    pub fn New2(mgr: ?*anyopaque, owner: ?*anyopaque, parentMenu: ?*anyopaque, parentAddress: []const u8) QtC.KBookmarkMenu {
        const parentAddress_str = qtc.libqt_string{
            .len = parentAddress.len,
            .data = parentAddress.ptr,
        };

        return qtc.KBookmarkMenu_new2(@ptrCast(mgr), @ptrCast(owner), @ptrCast(parentMenu), parentAddress_str);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KBookmarkMenu_MetaObject(@ptrCast(self));
    }

    /// ``` self: QtC.KBookmarkMenu, param1: []const u8 ```
    pub fn Metacast(self: ?*anyopaque, param1: []const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KBookmarkMenu_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// ``` self: QtC.KBookmarkMenu, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KBookmarkMenu_Metacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque) callconv(.c) i32 ```
    pub fn OnMetacall(self: ?*anyopaque, slot: fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) i32) void {
        qtc.KBookmarkMenu_OnMetacall(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu, param1: qobjectdefs_enums.Call, param2: i32, param3: ?*anyopaque ```
    pub fn QBaseMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: ?*anyopaque) i32 {
        return qtc.KBookmarkMenu_QBaseMetacall(@ptrCast(self), @intCast(param1), @intCast(param2), param3);
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const _str = qtc.KBookmarkMenu_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#ensureUpToDate)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn EnsureUpToDate(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_EnsureUpToDate(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addBookmarkAction)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn AddBookmarkAction(self: ?*anyopaque) QtC.QAction {
        return qtc.KBookmarkMenu_AddBookmarkAction(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#bookmarkTabsAsFolderAction)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn BookmarkTabsAsFolderAction(self: ?*anyopaque) QtC.QAction {
        return qtc.KBookmarkMenu_BookmarkTabsAsFolderAction(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#newBookmarkFolderAction)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn NewBookmarkFolderAction(self: ?*anyopaque) QtC.QAction {
        return qtc.KBookmarkMenu_NewBookmarkFolderAction(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#editBookmarksAction)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn EditBookmarksAction(self: ?*anyopaque) QtC.QAction {
        return qtc.KBookmarkMenu_EditBookmarksAction(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#setBrowserMode)
    ///
    /// ``` self: QtC.KBookmarkMenu, browserMode: bool ```
    pub fn SetBrowserMode(self: ?*anyopaque, browserMode: bool) void {
        qtc.KBookmarkMenu_SetBrowserMode(@ptrCast(self), browserMode);
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#browserMode)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn BrowserMode(self: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_BrowserMode(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotBookmarksChanged)
    ///
    /// ``` self: QtC.KBookmarkMenu, param1: []const u8 ```
    pub fn SlotBookmarksChanged(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KBookmarkMenu_SlotBookmarksChanged(@ptrCast(self), param1_str);
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotAboutToShow)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn SlotAboutToShow(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_SlotAboutToShow(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotAboutToShow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnSlotAboutToShow(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotAboutToShow(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotAboutToShow)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseSlotAboutToShow(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseSlotAboutToShow(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotAddBookmarksList)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn SlotAddBookmarksList(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_SlotAddBookmarksList(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotAddBookmarksList)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnSlotAddBookmarksList(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotAddBookmarksList(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotAddBookmarksList)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseSlotAddBookmarksList(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseSlotAddBookmarksList(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotAddBookmark)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn SlotAddBookmark(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_SlotAddBookmark(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotAddBookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnSlotAddBookmark(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotAddBookmark(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotAddBookmark)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseSlotAddBookmark(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseSlotAddBookmark(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotNewFolder)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn SlotNewFolder(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_SlotNewFolder(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotNewFolder)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnSlotNewFolder(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotNewFolder(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotNewFolder)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseSlotNewFolder(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseSlotNewFolder(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotOpenFolderInTabs)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn SlotOpenFolderInTabs(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_SlotOpenFolderInTabs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotOpenFolderInTabs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnSlotOpenFolderInTabs(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotOpenFolderInTabs(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#slotOpenFolderInTabs)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseSlotOpenFolderInTabs(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseSlotOpenFolderInTabs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#clear)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn Clear(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_Clear(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnClear(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnClear(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseClear(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseClear(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#refill)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn Refill(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_Refill(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#refill)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnRefill(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnRefill(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#refill)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseRefill(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseRefill(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#actionForBookmark)
    ///
    /// ``` self: QtC.KBookmarkMenu, bm: QtC.KBookmark ```
    pub fn ActionForBookmark(self: ?*anyopaque, bm: ?*anyopaque) QtC.QAction {
        return qtc.KBookmarkMenu_ActionForBookmark(@ptrCast(self), @ptrCast(bm));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#actionForBookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, bm: QtC.KBookmark) callconv(.c) QtC.QAction ```
    pub fn OnActionForBookmark(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QAction) void {
        qtc.KBookmarkMenu_OnActionForBookmark(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#actionForBookmark)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu, bm: QtC.KBookmark ```
    pub fn QBaseActionForBookmark(self: ?*anyopaque, bm: ?*anyopaque) QtC.QAction {
        return qtc.KBookmarkMenu_QBaseActionForBookmark(@ptrCast(self), @ptrCast(bm));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#contextMenu)
    ///
    /// ``` self: QtC.KBookmarkMenu, action: QtC.QAction ```
    pub fn ContextMenu(self: ?*anyopaque, action: ?*anyopaque) QtC.QMenu {
        return qtc.KBookmarkMenu_ContextMenu(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#contextMenu)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, action: QtC.QAction) callconv(.c) QtC.QMenu ```
    pub fn OnContextMenu(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QMenu) void {
        qtc.KBookmarkMenu_OnContextMenu(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#contextMenu)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu, action: QtC.QAction ```
    pub fn QBaseContextMenu(self: ?*anyopaque, action: ?*anyopaque) QtC.QMenu {
        return qtc.KBookmarkMenu_QBaseContextMenu(@ptrCast(self), @ptrCast(action));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addActions)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn AddActions(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_AddActions(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnAddActions(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddActions(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addActions)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseAddActions(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseAddActions(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#fillBookmarks)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn FillBookmarks(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_FillBookmarks(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#fillBookmarks)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnFillBookmarks(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnFillBookmarks(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#fillBookmarks)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseFillBookmarks(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseFillBookmarks(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addAddBookmark)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn AddAddBookmark(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_AddAddBookmark(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addAddBookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnAddAddBookmark(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddAddBookmark(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addAddBookmark)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseAddAddBookmark(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseAddAddBookmark(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addAddBookmarksList)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn AddAddBookmarksList(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_AddAddBookmarksList(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addAddBookmarksList)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnAddAddBookmarksList(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddAddBookmarksList(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addAddBookmarksList)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseAddAddBookmarksList(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseAddAddBookmarksList(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addEditBookmarks)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn AddEditBookmarks(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_AddEditBookmarks(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addEditBookmarks)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnAddEditBookmarks(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddEditBookmarks(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addEditBookmarks)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseAddEditBookmarks(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseAddEditBookmarks(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addNewFolder)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn AddNewFolder(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_AddNewFolder(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addNewFolder)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnAddNewFolder(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddNewFolder(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addNewFolder)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseAddNewFolder(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseAddNewFolder(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addOpenInTabs)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn AddOpenInTabs(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_AddOpenInTabs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addOpenInTabs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) void ```
    pub fn OnAddOpenInTabs(self: ?*anyopaque, slot: fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddOpenInTabs(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#addOpenInTabs)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseAddOpenInTabs(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseAddOpenInTabs(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#isRoot)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn IsRoot(self: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_IsRoot(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#isRoot)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) bool ```
    pub fn OnIsRoot(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnIsRoot(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#isRoot)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseIsRoot(self: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_QBaseIsRoot(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#isDirty)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn IsDirty(self: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_IsDirty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#isDirty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) bool ```
    pub fn OnIsDirty(self: ?*anyopaque, slot: fn () callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnIsDirty(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#isDirty)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseIsDirty(self: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_QBaseIsDirty(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#parentAddress)
    ///
    /// ``` self: QtC.KBookmarkMenu, allocator: std.mem.Allocator ```
    pub fn ParentAddress(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmarkMenu_ParentAddress(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.ParentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#parentAddress)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) [*:0]const u8 ```
    pub fn OnParentAddress(self: ?*anyopaque, slot: fn () callconv(.c) [*:0]const u8) void {
        qtc.KBookmarkMenu_OnParentAddress(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#parentAddress)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu, allocator: std.mem.Allocator ```
    pub fn QBaseParentAddress(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.KBookmarkMenu_QBaseParentAddress(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.ParentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#manager)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn Manager(self: ?*anyopaque) QtC.KBookmarkManager {
        return qtc.KBookmarkMenu_Manager(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#manager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) QtC.KBookmarkManager ```
    pub fn OnManager(self: ?*anyopaque, slot: fn () callconv(.c) QtC.KBookmarkManager) void {
        qtc.KBookmarkMenu_OnManager(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#manager)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseManager(self: ?*anyopaque) QtC.KBookmarkManager {
        return qtc.KBookmarkMenu_QBaseManager(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#owner)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn Owner(self: ?*anyopaque) QtC.KBookmarkOwner {
        return qtc.KBookmarkMenu_Owner(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#owner)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) QtC.KBookmarkOwner ```
    pub fn OnOwner(self: ?*anyopaque, slot: fn () callconv(.c) QtC.KBookmarkOwner) void {
        qtc.KBookmarkMenu_OnOwner(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#owner)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseOwner(self: ?*anyopaque) QtC.KBookmarkOwner {
        return qtc.KBookmarkMenu_QBaseOwner(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#parentMenu)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn ParentMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KBookmarkMenu_ParentMenu(@ptrCast(self));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#parentMenu)
    ///
    /// Allows for overriding the related default method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) QtC.QMenu ```
    pub fn OnParentMenu(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QMenu) void {
        qtc.KBookmarkMenu_OnParentMenu(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#parentMenu)
    ///
    /// Base class method implementation
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseParentMenu(self: ?*anyopaque) QtC.QMenu {
        return qtc.KBookmarkMenu_QBaseParentMenu(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, allocator: std.mem.Allocator ```
    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KBookmarkMenu_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ``` s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator ```
    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        const _str = qtc.KBookmarkMenu_Tr3(s_Cstring, c_Cstring, @intCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ``` self: QtC.KBookmarkMenu, allocator: std.mem.Allocator ```
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ``` self: QtC.KBookmarkMenu, name: []const u8 ```
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self), name_str);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ``` self: QtC.KBookmarkMenu, b: bool ```
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KBookmarkMenu, thread: QtC.QThread ```
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KBookmarkMenu, interval: i32 ```
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @intCast(interval));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KBookmarkMenu, id: i32 ```
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ``` self: QtC.KBookmarkMenu, id: qnamespace_enums.TimerId ```
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @intCast(id));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ``` self: QtC.KBookmarkMenu, allocator: std.mem.Allocator ```
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kbookmarkmenu.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ``` self: QtC.KBookmarkMenu, parent: QtC.QObject ```
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ``` self: QtC.KBookmarkMenu, filterObj: QtC.QObject ```
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ``` self: QtC.KBookmarkMenu, obj: QtC.QObject ```
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod ```
    pub fn Connect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KBookmarkMenu, sender: QtC.QObject, signal: []const u8, member: []const u8 ```
    pub fn Connect2(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect2(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, member: QtC.QMetaMethod ```
    pub fn Disconnect(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ``` param1: QtC.QMetaObject__Connection ```
    pub fn Disconnect2(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ``` self: QtC.KBookmarkMenu, name: []const u8, value: QtC.QVariant ```
    pub fn SetProperty(self: ?*anyopaque, name: []const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ``` self: QtC.KBookmarkMenu, name: []const u8 ```
    pub fn Property(self: ?*anyopaque, name: []const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ``` self: QtC.KBookmarkMenu, allocator: std.mem.Allocator ```
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        const _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kbookmarkmenu.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kbookmarkmenu.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu) callconv(.c) void ```
    pub fn OnDestroyed(self: ?*anyopaque, slot: fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn Parent(self: ?*anyopaque) QtC.QObject {
        return qtc.QObject_Parent(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ``` self: QtC.KBookmarkMenu, classname: []const u8 ```
    pub fn Inherits(self: ?*anyopaque, classname: []const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ``` self: QtC.KBookmarkMenu, thread: QtC.QThread, param2: QtC.Disambiguated_t ```
    pub fn MoveToThread2(self: ?*anyopaque, thread: ?*anyopaque, param2: QtC.Disambiguated_t) bool {
        return qtc.QObject_MoveToThread2(@ptrCast(self), @ptrCast(thread), @ptrCast(param2));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ``` self: QtC.KBookmarkMenu, interval: i32, timerType: qnamespace_enums.TimerType ```
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @intCast(interval), @intCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` sender: QtC.QObject, signal: QtC.QMetaMethod, receiver: QtC.QObject, method: QtC.QMetaMethod, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect5(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect5(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ``` self: QtC.KBookmarkMenu, sender: QtC.QObject, signal: []const u8, member: []const u8, typeVal: qnamespace_enums.ConnectionType ```
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: []const u8, member: []const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @intCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KBookmarkMenu, param1: QtC.QObject ```
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, param1: QtC.QObject) callconv(.c) void ```
    pub fn OnDestroyed1(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, event: QtC.QEvent ```
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, event: QtC.QEvent ```
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, watched: QtC.QObject, event: QtC.QEvent ```
    pub fn QBaseEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_QBaseEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool ```
    pub fn OnEventFilter(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnEventFilter(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, event: QtC.QTimerEvent ```
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KBookmarkMenu_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, event: QtC.QTimerEvent ```
    pub fn QBaseTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, event: QtC.QTimerEvent) callconv(.c) void ```
    pub fn OnTimerEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnTimerEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, event: QtC.QChildEvent ```
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KBookmarkMenu_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, event: QtC.QChildEvent ```
    pub fn QBaseChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, event: QtC.QChildEvent) callconv(.c) void ```
    pub fn OnChildEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnChildEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, event: QtC.QEvent ```
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KBookmarkMenu_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, event: QtC.QEvent ```
    pub fn QBaseCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, event: QtC.QEvent) callconv(.c) void ```
    pub fn OnCustomEvent(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnCustomEvent(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, signal: QtC.QMetaMethod ```
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KBookmarkMenu_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, signal: QtC.QMetaMethod ```
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnConnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnConnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, signal: QtC.QMetaMethod ```
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KBookmarkMenu_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, signal: QtC.QMetaMethod ```
    pub fn QBaseDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KBookmarkMenu_QBaseDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, signal: QtC.QMetaMethod) callconv(.c) void ```
    pub fn OnDisconnectNotify(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnDisconnectNotify(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KBookmarkMenu_Sender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KBookmarkMenu_QBaseSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) QtC.QObject ```
    pub fn OnSender(self: ?*anyopaque, slot: fn () callconv(.c) QtC.QObject) void {
        qtc.KBookmarkMenu_OnSender(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KBookmarkMenu_SenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QBaseSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KBookmarkMenu_QBaseSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn () callconv(.c) i32 ```
    pub fn OnSenderSignalIndex(self: ?*anyopaque, slot: fn () callconv(.c) i32) void {
        qtc.KBookmarkMenu_OnSenderSignalIndex(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, signal: []const u8 ```
    pub fn Receivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBookmarkMenu_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, signal: []const u8 ```
    pub fn QBaseReceivers(self: ?*anyopaque, signal: []const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBookmarkMenu_QBaseReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, signal: [*:0]const u8) callconv(.c) i32 ```
    pub fn OnReceivers(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KBookmarkMenu_OnReceivers(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, signal: QtC.QMetaMethod ```
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, signal: QtC.QMetaMethod ```
    pub fn QBaseIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KBookmarkMenu_QBaseIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, signal: QtC.QMetaMethod) callconv(.c) bool ```
    pub fn OnIsSignalConnected(self: ?*anyopaque, slot: fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnIsSignalConnected(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// Inherited from QObject
    ///
    /// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ``` self: QtC.KBookmarkMenu, slot: fn (self: QtC.KBookmarkMenu, objectName: [*:0]const u8) callconv(.c) void ```
    pub fn OnObjectNameChanged(self: ?*anyopaque, slot: fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @as(isize, @bitCast(@intFromPtr(&slot))));
    }

    /// [Qt documentation](https://api.kde.org/kbookmarkmenu.html#dtor.KBookmarkMenu)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.KBookmarkMenu ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.KBookmarkMenu_Delete(@ptrCast(self));
    }
};
