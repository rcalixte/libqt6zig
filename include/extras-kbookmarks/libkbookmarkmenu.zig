const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KBookmark = @import("libqt6").KBookmark;
const KBookmarkManager = @import("libqt6").KBookmarkManager;
const KBookmarkOwner = @import("libqt6").KBookmarkOwner;
const QAction = @import("libqt6").QAction;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QChildEvent = @import("libqt6").QChildEvent;
const QEvent = @import("libqt6").QEvent;
const QMenu = @import("libqt6").QMenu;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QObject = @import("libqt6").QObject;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html)
pub const KBookmarkMenu = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBookmarkMenu,

    pub const _is_KBookmarkMenu = {};
    pub const _is_QObject = {};

    /// New constructs a new KBookmarkMenu object.
    ///
    /// ## Parameter(s):
    ///
    /// ` manager: KBookmarkManager `
    ///
    /// ` owner: KBookmarkOwner `
    ///
    /// ` parentMenu: QMenu `
    ///
    pub fn New(manager: anytype, owner: anytype, parentMenu: anytype) KBookmarkMenu {
        comptime _ = @TypeOf(manager)._is_KBookmarkManager;
        comptime _ = @TypeOf(owner)._is_KBookmarkOwner;
        comptime _ = @TypeOf(parentMenu)._is_QMenu;
        return .{ .ptr = qtc.KBookmarkMenu_new(@ptrCast(manager.ptr), @ptrCast(owner.ptr), @ptrCast(parentMenu.ptr)) };
    }

    /// New2 constructs a new KBookmarkMenu object.
    ///
    /// ## Parameter(s):
    ///
    /// ` mgr: KBookmarkManager `
    ///
    /// ` owner: KBookmarkOwner `
    ///
    /// ` parentMenu: QMenu `
    ///
    /// ` parentAddress: []const u8 `
    ///
    pub fn New2(mgr: anytype, owner: anytype, parentMenu: anytype, parentAddress: []const u8) KBookmarkMenu {
        comptime _ = @TypeOf(mgr)._is_KBookmarkManager;
        comptime _ = @TypeOf(owner)._is_KBookmarkOwner;
        comptime _ = @TypeOf(parentMenu)._is_QMenu;
        const parentAddress_str = qtc.libqt_string{
            .len = parentAddress.len,
            .data = parentAddress.ptr,
        };
        return .{ .ptr = qtc.KBookmarkMenu_new2(@ptrCast(mgr.ptr), @ptrCast(owner.ptr), @ptrCast(parentMenu.ptr), parentAddress_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn MetaObject(self: KBookmarkMenu) QMetaObject {
        return .{ .ptr = qtc.KBookmarkMenu_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KBookmarkMenu, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KBookmarkMenu_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperMetaObject(self: KBookmarkMenu) QMetaObject {
        return .{ .ptr = qtc.KBookmarkMenu_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KBookmarkMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KBookmarkMenu_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KBookmarkMenu_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KBookmarkMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KBookmarkMenu_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KBookmarkMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KBookmarkMenu_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KBookmarkMenu_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KBookmarkMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KBookmarkMenu_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn Tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#ensureUpToDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn EnsureUpToDate(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_EnsureUpToDate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addBookmarkAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn AddBookmarkAction(self: KBookmarkMenu) QAction {
        return .{ .ptr = qtc.KBookmarkMenu_AddBookmarkAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#bookmarkTabsAsFolderAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn BookmarkTabsAsFolderAction(self: KBookmarkMenu) QAction {
        return .{ .ptr = qtc.KBookmarkMenu_BookmarkTabsAsFolderAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#newBookmarkFolderAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn NewBookmarkFolderAction(self: KBookmarkMenu) QAction {
        return .{ .ptr = qtc.KBookmarkMenu_NewBookmarkFolderAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#editBookmarksAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn EditBookmarksAction(self: KBookmarkMenu) QAction {
        return .{ .ptr = qtc.KBookmarkMenu_EditBookmarksAction(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#setBrowserMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` browserMode: bool `
    ///
    pub fn SetBrowserMode(self: KBookmarkMenu, browserMode: bool) void {
        qtc.KBookmarkMenu_SetBrowserMode(@ptrCast(self.ptr), browserMode);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#browserMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn BrowserMode(self: KBookmarkMenu) bool {
        return qtc.KBookmarkMenu_BrowserMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotBookmarksChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn SlotBookmarksChanged(self: KBookmarkMenu, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.KBookmarkMenu_SlotBookmarksChanged(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAboutToShow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SlotAboutToShow(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SlotAboutToShow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAboutToShow)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotAboutToShow(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotAboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotAboutToShow` instead
    ///
    pub const QBaseSlotAboutToShow = SuperSlotAboutToShow;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAboutToShow)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperSlotAboutToShow(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperSlotAboutToShow(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmarksList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SlotAddBookmarksList(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SlotAddBookmarksList(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmarksList)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotAddBookmarksList(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotAddBookmarksList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotAddBookmarksList` instead
    ///
    pub const QBaseSlotAddBookmarksList = SuperSlotAddBookmarksList;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmarksList)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperSlotAddBookmarksList(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperSlotAddBookmarksList(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SlotAddBookmark(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SlotAddBookmark(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotAddBookmark(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotAddBookmark(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotAddBookmark` instead
    ///
    pub const QBaseSlotAddBookmark = SuperSlotAddBookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotAddBookmark)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperSlotAddBookmark(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperSlotAddBookmark(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotNewFolder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SlotNewFolder(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SlotNewFolder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotNewFolder)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotNewFolder(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotNewFolder(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotNewFolder` instead
    ///
    pub const QBaseSlotNewFolder = SuperSlotNewFolder;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotNewFolder)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperSlotNewFolder(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperSlotNewFolder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotOpenFolderInTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SlotOpenFolderInTabs(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SlotOpenFolderInTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotOpenFolderInTabs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSlotOpenFolderInTabs(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnSlotOpenFolderInTabs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotOpenFolderInTabs` instead
    ///
    pub const QBaseSlotOpenFolderInTabs = SuperSlotOpenFolderInTabs;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#slotOpenFolderInTabs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperSlotOpenFolderInTabs(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperSlotOpenFolderInTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Clear(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperClear(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperClear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#refill)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Refill(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_Refill(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#refill)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRefill(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnRefill(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRefill` instead
    ///
    pub const QBaseRefill = SuperRefill;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#refill)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperRefill(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperRefill(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#actionForBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn ActionForBookmark(self: KBookmarkMenu, bm: anytype) QAction {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkMenu_ActionForBookmark(@ptrCast(self.ptr), @ptrCast(bm.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#actionForBookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, bm: KBookmark) callconv(.c) QAction `
    ///
    pub fn OnActionForBookmark(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, KBookmark) callconv(.c) QAction) void {
        qtc.KBookmarkMenu_OnActionForBookmark(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperActionForBookmark` instead
    ///
    pub const QBaseActionForBookmark = SuperActionForBookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#actionForBookmark)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn SuperActionForBookmark(self: KBookmarkMenu, bm: anytype) QAction {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkMenu_SuperActionForBookmark(@ptrCast(self.ptr), @ptrCast(bm.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#contextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn ContextMenu(self: KBookmarkMenu, action: anytype) QMenu {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.KBookmarkMenu_ContextMenu(@ptrCast(self.ptr), @ptrCast(action.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#contextMenu)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, action: QAction) callconv(.c) QMenu `
    ///
    pub fn OnContextMenu(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QAction) callconv(.c) QMenu) void {
        qtc.KBookmarkMenu_OnContextMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenu` instead
    ///
    pub const QBaseContextMenu = SuperContextMenu;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#contextMenu)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperContextMenu(self: KBookmarkMenu, action: anytype) QMenu {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.KBookmarkMenu_SuperContextMenu(@ptrCast(self.ptr), @ptrCast(action.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn AddActions(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_AddActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddActions(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddActions` instead
    ///
    pub const QBaseAddActions = SuperAddActions;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperAddActions(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperAddActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#fillBookmarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn FillBookmarks(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_FillBookmarks(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#fillBookmarks)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnFillBookmarks(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnFillBookmarks(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFillBookmarks` instead
    ///
    pub const QBaseFillBookmarks = SuperFillBookmarks;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#fillBookmarks)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperFillBookmarks(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperFillBookmarks(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn AddAddBookmark(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_AddAddBookmark(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddAddBookmark(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddAddBookmark(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddAddBookmark` instead
    ///
    pub const QBaseAddAddBookmark = SuperAddAddBookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmark)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperAddAddBookmark(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperAddAddBookmark(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmarksList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn AddAddBookmarksList(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_AddAddBookmarksList(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmarksList)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddAddBookmarksList(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddAddBookmarksList(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddAddBookmarksList` instead
    ///
    pub const QBaseAddAddBookmarksList = SuperAddAddBookmarksList;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addAddBookmarksList)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperAddAddBookmarksList(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperAddAddBookmarksList(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addEditBookmarks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn AddEditBookmarks(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_AddEditBookmarks(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addEditBookmarks)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddEditBookmarks(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddEditBookmarks(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddEditBookmarks` instead
    ///
    pub const QBaseAddEditBookmarks = SuperAddEditBookmarks;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addEditBookmarks)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperAddEditBookmarks(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperAddEditBookmarks(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addNewFolder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn AddNewFolder(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_AddNewFolder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addNewFolder)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddNewFolder(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddNewFolder(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddNewFolder` instead
    ///
    pub const QBaseAddNewFolder = SuperAddNewFolder;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addNewFolder)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperAddNewFolder(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperAddNewFolder(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addOpenInTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn AddOpenInTabs(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_AddOpenInTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addOpenInTabs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddOpenInTabs(self: KBookmarkMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkMenu_OnAddOpenInTabs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddOpenInTabs` instead
    ///
    pub const QBaseAddOpenInTabs = SuperAddOpenInTabs;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#addOpenInTabs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperAddOpenInTabs(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_SuperAddOpenInTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isRoot)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn IsRoot(self: KBookmarkMenu) bool {
        return qtc.KBookmarkMenu_IsRoot(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isRoot)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsRoot(self: KBookmarkMenu, callback: *const fn () callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnIsRoot(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsRoot` instead
    ///
    pub const QBaseIsRoot = SuperIsRoot;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isRoot)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperIsRoot(self: KBookmarkMenu) bool {
        return qtc.KBookmarkMenu_SuperIsRoot(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isDirty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn IsDirty(self: KBookmarkMenu) bool {
        return qtc.KBookmarkMenu_IsDirty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isDirty)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnIsDirty(self: KBookmarkMenu, callback: *const fn () callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnIsDirty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsDirty` instead
    ///
    pub const QBaseIsDirty = SuperIsDirty;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#isDirty)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperIsDirty(self: KBookmarkMenu) bool {
        return qtc.KBookmarkMenu_SuperIsDirty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ParentAddress(self: KBookmarkMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkMenu_ParentAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.ParentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentAddress)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnParentAddress(self: KBookmarkMenu, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.KBookmarkMenu_OnParentAddress(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParentAddress` instead
    ///
    pub const QBaseParentAddress = SuperParentAddress;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentAddress)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperParentAddress(self: KBookmarkMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmarkMenu_SuperParentAddress(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.ParentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Manager(self: KBookmarkMenu) KBookmarkManager {
        return .{ .ptr = qtc.KBookmarkMenu_Manager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#manager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) KBookmarkManager `
    ///
    pub fn OnManager(self: KBookmarkMenu, callback: *const fn () callconv(.c) KBookmarkManager) void {
        qtc.KBookmarkMenu_OnManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperManager` instead
    ///
    pub const QBaseManager = SuperManager;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#manager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperManager(self: KBookmarkMenu) KBookmarkManager {
        return .{ .ptr = qtc.KBookmarkMenu_SuperManager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#owner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Owner(self: KBookmarkMenu) KBookmarkOwner {
        return .{ .ptr = qtc.KBookmarkMenu_Owner(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#owner)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) KBookmarkOwner `
    ///
    pub fn OnOwner(self: KBookmarkMenu, callback: *const fn () callconv(.c) KBookmarkOwner) void {
        qtc.KBookmarkMenu_OnOwner(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOwner` instead
    ///
    pub const QBaseOwner = SuperOwner;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#owner)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperOwner(self: KBookmarkMenu) KBookmarkOwner {
        return .{ .ptr = qtc.KBookmarkMenu_SuperOwner(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn ParentMenu(self: KBookmarkMenu) QMenu {
        return .{ .ptr = qtc.KBookmarkMenu_ParentMenu(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentMenu)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn () callconv(.c) QMenu `
    ///
    pub fn OnParentMenu(self: KBookmarkMenu, callback: *const fn () callconv(.c) QMenu) void {
        qtc.KBookmarkMenu_OnParentMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParentMenu` instead
    ///
    pub const QBaseParentMenu = SuperParentMenu;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#parentMenu)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperParentMenu(self: KBookmarkMenu) QMenu {
        return .{ .ptr = qtc.KBookmarkMenu_SuperParentMenu(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    pub fn Tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    pub fn Tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KBookmarkMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkmenu.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KBookmarkMenu, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn IsWidgetType(self: KBookmarkMenu) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn IsWindowType(self: KBookmarkMenu) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn IsQuickItemType(self: KBookmarkMenu) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SignalsBlocked(self: KBookmarkMenu) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KBookmarkMenu, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Thread(self: KBookmarkMenu) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KBookmarkMenu, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KBookmarkMenu, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KBookmarkMenu, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KBookmarkMenu, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KBookmarkMenu, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KBookmarkMenu, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kbookmarkmenu.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: KBookmarkMenu, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KBookmarkMenu, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KBookmarkMenu, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn Connect2(sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KBookmarkMenu, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn Disconnect2(sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Disconnect3(self: KBookmarkMenu) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KBookmarkMenu, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn DumpObjectTree(self: KBookmarkMenu) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn DumpObjectInfo(self: KBookmarkMenu) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KBookmarkMenu, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KBookmarkMenu, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KBookmarkMenu, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn BindingStorage(self: KBookmarkMenu) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn BindingStorage2(self: KBookmarkMenu) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Destroyed(self: KBookmarkMenu) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkMenu) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Parent(self: KBookmarkMenu) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KBookmarkMenu, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn DeleteLater(self: KBookmarkMenu) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KBookmarkMenu, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KBookmarkMenu, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KBookmarkMenu, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KBookmarkMenu, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KBookmarkMenu, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KBookmarkMenu, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KBookmarkMenu, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KBookmarkMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KBookmarkMenu, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBookmarkMenu_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KBookmarkMenu, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBookmarkMenu_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QEvent) callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KBookmarkMenu, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBookmarkMenu_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KBookmarkMenu, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBookmarkMenu_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QObject, QEvent) callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KBookmarkMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KBookmarkMenu_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KBookmarkMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KBookmarkMenu_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QTimerEvent) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KBookmarkMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KBookmarkMenu_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KBookmarkMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KBookmarkMenu_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QChildEvent) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KBookmarkMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KBookmarkMenu_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KBookmarkMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KBookmarkMenu_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QEvent) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KBookmarkMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBookmarkMenu_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KBookmarkMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBookmarkMenu_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KBookmarkMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBookmarkMenu_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KBookmarkMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBookmarkMenu_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KBookmarkMenu_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Sender(self: KBookmarkMenu) QObject {
        return .{ .ptr = qtc.KBookmarkMenu_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperSender(self: KBookmarkMenu) QObject {
        return .{ .ptr = qtc.KBookmarkMenu_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KBookmarkMenu, callback: *const fn () callconv(.c) QObject) void {
        qtc.KBookmarkMenu_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SenderSignalIndex(self: KBookmarkMenu) i32 {
        return qtc.KBookmarkMenu_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn SuperSenderSignalIndex(self: KBookmarkMenu) i32 {
        return qtc.KBookmarkMenu_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KBookmarkMenu, callback: *const fn () callconv(.c) i32) void {
        qtc.KBookmarkMenu_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KBookmarkMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBookmarkMenu_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KBookmarkMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBookmarkMenu_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, [*:0]const u8) callconv(.c) i32) void {
        qtc.KBookmarkMenu_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KBookmarkMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KBookmarkMenu_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KBookmarkMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KBookmarkMenu_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, QMetaMethod) callconv(.c) bool) void {
        qtc.KBookmarkMenu_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkMenu, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KBookmarkMenu, callback: *const fn (KBookmarkMenu, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkmenu.html#dtor.KBookmarkMenu)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmarkMenu `
    ///
    pub fn Delete(self: KBookmarkMenu) void {
        qtc.KBookmarkMenu_Delete(@ptrCast(self.ptr));
    }
};
