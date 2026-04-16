const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KBookmark = @import("libqt6").KBookmark;
const KBookmarkManager = @import("libqt6").KBookmarkManager;
const KBookmarkOwner = @import("libqt6").KBookmarkOwner;
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QContextMenuEvent = @import("libqt6").QContextMenuEvent;
const QCursor = @import("libqt6").QCursor;
const QDragEnterEvent = @import("libqt6").QDragEnterEvent;
const QDragLeaveEvent = @import("libqt6").QDragLeaveEvent;
const QDragMoveEvent = @import("libqt6").QDragMoveEvent;
const QDropEvent = @import("libqt6").QDropEvent;
const QEnterEvent = @import("libqt6").QEnterEvent;
const QEvent = @import("libqt6").QEvent;
const QFocusEvent = @import("libqt6").QFocusEvent;
const QFont = @import("libqt6").QFont;
const QFontInfo = @import("libqt6").QFontInfo;
const QFontMetrics = @import("libqt6").QFontMetrics;
const QGraphicsEffect = @import("libqt6").QGraphicsEffect;
const QGraphicsProxyWidget = @import("libqt6").QGraphicsProxyWidget;
const QHideEvent = @import("libqt6").QHideEvent;
const QIcon = @import("libqt6").QIcon;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMenu = @import("libqt6").QMenu;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QMoveEvent = @import("libqt6").QMoveEvent;
const QObject = @import("libqt6").QObject;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPaintEvent = @import("libqt6").QPaintEvent;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionMenuItem = @import("libqt6").QStyleOptionMenuItem;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html)
pub const KBookmarkContextMenu = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBookmarkContextMenu,

    pub const _is_KBookmarkContextMenu = {};
    pub const _is_QMenu = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KBookmarkContextMenu object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bm: KBookmark `
    ///
    /// ` manager: KBookmarkManager `
    ///
    /// ` owner: KBookmarkOwner `
    ///
    pub fn New(bm: anytype, manager: anytype, owner: anytype) KBookmarkContextMenu {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        comptime _ = @TypeOf(manager)._is_KBookmarkManager;
        comptime _ = @TypeOf(owner)._is_KBookmarkOwner;
        return .{ .ptr = qtc.KBookmarkContextMenu_new(@ptrCast(bm.ptr), @ptrCast(manager.ptr), @ptrCast(owner.ptr)) };
    }

    /// New2 constructs a new KBookmarkContextMenu object.
    ///
    /// ## Parameter(s):
    ///
    /// ` bm: KBookmark `
    ///
    /// ` manager: KBookmarkManager `
    ///
    /// ` owner: KBookmarkOwner `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New2(bm: anytype, manager: anytype, owner: anytype, parent: anytype) KBookmarkContextMenu {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        comptime _ = @TypeOf(manager)._is_KBookmarkManager;
        comptime _ = @TypeOf(owner)._is_KBookmarkOwner;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KBookmarkContextMenu_new2(@ptrCast(bm.ptr), @ptrCast(manager.ptr), @ptrCast(owner.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn MetaObject(self: KBookmarkContextMenu) QMetaObject {
        return .{ .ptr = qtc.KBookmarkContextMenu_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KBookmarkContextMenu_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperMetaObject(self: KBookmarkContextMenu) QMetaObject {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KBookmarkContextMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KBookmarkContextMenu_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KBookmarkContextMenu_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KBookmarkContextMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KBookmarkContextMenu_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KBookmarkContextMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KBookmarkContextMenu_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KBookmarkContextMenu_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KBookmarkContextMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KBookmarkContextMenu_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AddActions(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_AddActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddActions(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnAddActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddActions` instead
    ///
    pub const QBaseAddActions = SuperAddActions;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperAddActions(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SuperAddActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#setBrowserMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` browserMode: bool `
    ///
    pub fn SetBrowserMode(self: KBookmarkContextMenu, browserMode: bool) void {
        qtc.KBookmarkContextMenu_SetBrowserMode(@ptrCast(self.ptr), browserMode);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#browserMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn BrowserMode(self: KBookmarkContextMenu) bool {
        return qtc.KBookmarkContextMenu_BrowserMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotEditAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SlotEditAt(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SlotEditAt(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SlotProperties(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SlotProperties(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotInsert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SlotInsert(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SlotInsert(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotRemove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SlotRemove(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SlotRemove(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotCopyLocation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SlotCopyLocation(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SlotCopyLocation(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#slotOpenFolderInTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SlotOpenFolderInTabs(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SlotOpenFolderInTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AddBookmark(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_AddBookmark(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addBookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddBookmark(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnAddBookmark(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddBookmark` instead
    ///
    pub const QBaseAddBookmark = SuperAddBookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addBookmark)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperAddBookmark(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SuperAddBookmark(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addFolderActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AddFolderActions(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_AddFolderActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addFolderActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddFolderActions(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnAddFolderActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddFolderActions` instead
    ///
    pub const QBaseAddFolderActions = SuperAddFolderActions;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addFolderActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperAddFolderActions(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SuperAddFolderActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addProperties)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AddProperties(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_AddProperties(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addProperties)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddProperties(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnAddProperties(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddProperties` instead
    ///
    pub const QBaseAddProperties = SuperAddProperties;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addProperties)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperAddProperties(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SuperAddProperties(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addBookmarkActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AddBookmarkActions(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_AddBookmarkActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addBookmarkActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddBookmarkActions(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnAddBookmarkActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddBookmarkActions` instead
    ///
    pub const QBaseAddBookmarkActions = SuperAddBookmarkActions;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addBookmarkActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperAddBookmarkActions(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SuperAddBookmarkActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addOpenFolderInTabs)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AddOpenFolderInTabs(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_AddOpenFolderInTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addOpenFolderInTabs)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAddOpenFolderInTabs(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnAddOpenFolderInTabs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddOpenFolderInTabs` instead
    ///
    pub const QBaseAddOpenFolderInTabs = SuperAddOpenFolderInTabs;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#addOpenFolderInTabs)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperAddOpenFolderInTabs(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SuperAddOpenFolderInTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#manager)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Manager(self: KBookmarkContextMenu) KBookmarkManager {
        return .{ .ptr = qtc.KBookmarkContextMenu_Manager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#manager)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) KBookmarkManager `
    ///
    pub fn OnManager(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) KBookmarkManager) void {
        qtc.KBookmarkContextMenu_OnManager(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperManager` instead
    ///
    pub const QBaseManager = SuperManager;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#manager)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperManager(self: KBookmarkContextMenu) KBookmarkManager {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperManager(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#owner)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Owner(self: KBookmarkContextMenu) KBookmarkOwner {
        return .{ .ptr = qtc.KBookmarkContextMenu_Owner(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#owner)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) KBookmarkOwner `
    ///
    pub fn OnOwner(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) KBookmarkOwner) void {
        qtc.KBookmarkContextMenu_OnOwner(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOwner` instead
    ///
    pub const QBaseOwner = SuperOwner;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#owner)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperOwner(self: KBookmarkContextMenu) KBookmarkOwner {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperOwner(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#bookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Bookmark(self: KBookmarkContextMenu) KBookmark {
        return .{ .ptr = qtc.KBookmarkContextMenu_Bookmark(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#bookmark)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn () callconv(.c) KBookmark `
    ///
    pub fn OnBookmark(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) KBookmark) void {
        qtc.KBookmarkContextMenu_OnBookmark(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBookmark` instead
    ///
    pub const QBaseBookmark = SuperBookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#bookmark)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperBookmark(self: KBookmarkContextMenu) KBookmark {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperBookmark(@ptrCast(self.ptr)) };
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` menu: QMenu `
    ///
    pub fn AddMenu(self: KBookmarkContextMenu, menu: anytype) QAction {
        comptime _ = @TypeOf(menu)._is_QMenu;
        return .{ .ptr = qtc.QMenu_AddMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` title: []const u8 `
    ///
    pub fn AddMenu2(self: KBookmarkContextMenu, title: []const u8) QMenu {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.QMenu_AddMenu2(@ptrCast(self.ptr), title_str) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` icon: QIcon `
    ///
    /// ` title: []const u8 `
    ///
    pub fn AddMenu3(self: KBookmarkContextMenu, icon: anytype, title: []const u8) QMenu {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.QMenu_AddMenu3(@ptrCast(self.ptr), @ptrCast(icon.ptr), title_str) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AddSeparator(self: KBookmarkContextMenu) QAction {
        return .{ .ptr = qtc.QMenu_AddSeparator(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddSection(self: KBookmarkContextMenu, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QMenu_AddSection(@ptrCast(self.ptr), text_str) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddSection2(self: KBookmarkContextMenu, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QMenu_AddSection2(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` menu: QMenu `
    ///
    pub fn InsertMenu(self: KBookmarkContextMenu, before: anytype, menu: anytype) QAction {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(menu)._is_QMenu;
        return .{ .ptr = qtc.QMenu_InsertMenu(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(menu.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` before: QAction `
    ///
    pub fn InsertSeparator(self: KBookmarkContextMenu, before: anytype) QAction {
        comptime _ = @TypeOf(before)._is_QAction;
        return .{ .ptr = qtc.QMenu_InsertSeparator(@ptrCast(self.ptr), @ptrCast(before.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertSection(self: KBookmarkContextMenu, before: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(before)._is_QAction;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QMenu_InsertSection(@ptrCast(self.ptr), @ptrCast(before.ptr), text_str) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertSection2(self: KBookmarkContextMenu, before: anytype, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QMenu_InsertSection2(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isEmpty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsEmpty(self: KBookmarkContextMenu) bool {
        return qtc.QMenu_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Clear(self: KBookmarkContextMenu) void {
        qtc.QMenu_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setTearOffEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` tearOffEnabled: bool `
    ///
    pub fn SetTearOffEnabled(self: KBookmarkContextMenu, tearOffEnabled: bool) void {
        qtc.QMenu_SetTearOffEnabled(@ptrCast(self.ptr), tearOffEnabled);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isTearOffEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsTearOffEnabled(self: KBookmarkContextMenu) bool {
        return qtc.QMenu_IsTearOffEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isTearOffMenuVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsTearOffMenuVisible(self: KBookmarkContextMenu) bool {
        return qtc.QMenu_IsTearOffMenuVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ShowTearOffMenu(self: KBookmarkContextMenu) void {
        qtc.QMenu_ShowTearOffMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn ShowTearOffMenu2(self: KBookmarkContextMenu, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QMenu_ShowTearOffMenu2(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideTearOffMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn HideTearOffMenu(self: KBookmarkContextMenu) void {
        qtc.QMenu_HideTearOffMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setDefaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` defaultAction: QAction `
    ///
    pub fn SetDefaultAction(self: KBookmarkContextMenu, defaultAction: anytype) void {
        comptime _ = @TypeOf(defaultAction)._is_QAction;
        qtc.QMenu_SetDefaultAction(@ptrCast(self.ptr), @ptrCast(defaultAction.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#defaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn DefaultAction(self: KBookmarkContextMenu) QAction {
        return .{ .ptr = qtc.QMenu_DefaultAction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setActiveAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` act: QAction `
    ///
    pub fn SetActiveAction(self: KBookmarkContextMenu, act: anytype) void {
        comptime _ = @TypeOf(act)._is_QAction;
        qtc.QMenu_SetActiveAction(@ptrCast(self.ptr), @ptrCast(act.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#activeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ActiveAction(self: KBookmarkContextMenu) QAction {
        return .{ .ptr = qtc.QMenu_ActiveAction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#popup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn Popup(self: KBookmarkContextMenu, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QMenu_Popup(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Exec(self: KBookmarkContextMenu) QAction {
        return .{ .ptr = qtc.QMenu_Exec(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn Exec2(self: KBookmarkContextMenu, pos: anytype) QAction {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QMenu_Exec2(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` actions: []QAction `
    ///
    /// ` pos: QPoint `
    ///
    pub fn Exec3(actions: []QAction, pos: anytype) QAction {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QMenu_Exec3(actions_list, @ptrCast(pos.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QAction `
    ///
    pub fn ActionGeometry(self: KBookmarkContextMenu, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QAction;
        return .{ .ptr = qtc.QMenu_ActionGeometry(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn ActionAt(self: KBookmarkContextMenu, param1: anytype) QAction {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QMenu_ActionAt(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#menuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn MenuAction(self: KBookmarkContextMenu) QAction {
        return .{ .ptr = qtc.QMenu_MenuAction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#menuInAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` action: QAction `
    ///
    pub fn MenuInAction(action: anytype) QMenu {
        comptime _ = @TypeOf(action)._is_QAction;
        return .{ .ptr = qtc.QMenu_MenuInAction(@ptrCast(action.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#title)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMenu_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: KBookmarkContextMenu, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QMenu_SetTitle(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Icon(self: KBookmarkContextMenu) QIcon {
        return .{ .ptr = qtc.QMenu_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: KBookmarkContextMenu, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QMenu_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setNoReplayFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetNoReplayFor(self: KBookmarkContextMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QMenu_SetNoReplayFor(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#separatorsCollapsible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SeparatorsCollapsible(self: KBookmarkContextMenu) bool {
        return qtc.QMenu_SeparatorsCollapsible(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setSeparatorsCollapsible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` collapse: bool `
    ///
    pub fn SetSeparatorsCollapsible(self: KBookmarkContextMenu, collapse: bool) void {
        qtc.QMenu_SetSeparatorsCollapsible(@ptrCast(self.ptr), collapse);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#toolTipsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ToolTipsVisible(self: KBookmarkContextMenu) bool {
        return qtc.QMenu_ToolTipsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setToolTipsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn SetToolTipsVisible(self: KBookmarkContextMenu, visible: bool) void {
        qtc.QMenu_SetToolTipsVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AboutToShow(self: KBookmarkContextMenu) void {
        qtc.QMenu_AboutToShow(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu) callconv(.c) void `
    ///
    pub fn OnAboutToShow(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu) callconv(.c) void) void {
        qtc.QMenu_Connect_AboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AboutToHide(self: KBookmarkContextMenu) void {
        qtc.QMenu_AboutToHide(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu) callconv(.c) void `
    ///
    pub fn OnAboutToHide(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu) callconv(.c) void) void {
        qtc.QMenu_Connect_AboutToHide(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn Triggered(self: KBookmarkContextMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QMenu_Triggered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, action: QAction) callconv(.c) void `
    ///
    pub fn OnTriggered(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QAction) callconv(.c) void) void {
        qtc.QMenu_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn Hovered(self: KBookmarkContextMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QMenu_Hovered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, action: QAction) callconv(.c) void `
    ///
    pub fn OnHovered(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QAction) callconv(.c) void) void {
        qtc.QMenu_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#popup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` pos: QPoint `
    ///
    /// ` at: QAction `
    ///
    pub fn Popup2(self: KBookmarkContextMenu, pos: anytype, at: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(at)._is_QAction;
        qtc.QMenu_Popup2(@ptrCast(self.ptr), @ptrCast(pos.ptr), @ptrCast(at.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` pos: QPoint `
    ///
    /// ` at: QAction `
    ///
    pub fn Exec22(self: KBookmarkContextMenu, pos: anytype, at: anytype) QAction {
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(at)._is_QAction;
        return .{ .ptr = qtc.QMenu_Exec22(@ptrCast(self.ptr), @ptrCast(pos.ptr), @ptrCast(at.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` actions: []QAction `
    ///
    /// ` pos: QPoint `
    ///
    /// ` at: QAction `
    ///
    pub fn Exec32(actions: []QAction, pos: anytype, at: anytype) QAction {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(at)._is_QAction;
        return .{ .ptr = qtc.QMenu_Exec32(actions_list, @ptrCast(pos.ptr), @ptrCast(at.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` actions: []QAction `
    ///
    /// ` pos: QPoint `
    ///
    /// ` at: QAction `
    ///
    /// ` parent: QWidget `
    ///
    pub fn Exec4(actions: []QAction, pos: anytype, at: anytype, parent: anytype) QAction {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        comptime _ = @TypeOf(pos)._is_QPoint;
        comptime _ = @TypeOf(at)._is_QAction;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QMenu_Exec4(actions_list, @ptrCast(pos.ptr), @ptrCast(at.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn WinId(self: KBookmarkContextMenu) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn CreateWinId(self: KBookmarkContextMenu) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn InternalWinId(self: KBookmarkContextMenu) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn EffectiveWinId(self: KBookmarkContextMenu) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Style(self: KBookmarkContextMenu) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KBookmarkContextMenu, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsTopLevel(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsWindow(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsModal(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KBookmarkContextMenu, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsEnabled(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KBookmarkContextMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KBookmarkContextMenu, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KBookmarkContextMenu, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KBookmarkContextMenu, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn FrameGeometry(self: KBookmarkContextMenu) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Geometry(self: KBookmarkContextMenu) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn NormalGeometry(self: KBookmarkContextMenu) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn X(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Y(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Pos(self: KBookmarkContextMenu) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn FrameSize(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Size(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Width(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Height(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Rect(self: KBookmarkContextMenu) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ChildrenRect(self: KBookmarkContextMenu) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ChildrenRegion(self: KBookmarkContextMenu) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn MinimumSize(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn MaximumSize(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn MinimumWidth(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn MinimumHeight(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn MaximumWidth(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn MaximumHeight(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KBookmarkContextMenu, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KBookmarkContextMenu, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KBookmarkContextMenu, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KBookmarkContextMenu, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KBookmarkContextMenu, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KBookmarkContextMenu, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KBookmarkContextMenu, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KBookmarkContextMenu, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SizeIncrement(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KBookmarkContextMenu, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KBookmarkContextMenu, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn BaseSize(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KBookmarkContextMenu, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KBookmarkContextMenu, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KBookmarkContextMenu, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KBookmarkContextMenu, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KBookmarkContextMenu, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KBookmarkContextMenu, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KBookmarkContextMenu, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KBookmarkContextMenu, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KBookmarkContextMenu, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KBookmarkContextMenu, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KBookmarkContextMenu, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KBookmarkContextMenu, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KBookmarkContextMenu, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KBookmarkContextMenu, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KBookmarkContextMenu, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapTo(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KBookmarkContextMenu, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapTo2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KBookmarkContextMenu, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFrom(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KBookmarkContextMenu, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFrom2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Window(self: KBookmarkContextMenu) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn NativeParentWidget(self: KBookmarkContextMenu) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn TopLevelWidget(self: KBookmarkContextMenu) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Palette(self: KBookmarkContextMenu) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KBookmarkContextMenu, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KBookmarkContextMenu, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KBookmarkContextMenu, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Font(self: KBookmarkContextMenu) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KBookmarkContextMenu, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn FontMetrics(self: KBookmarkContextMenu) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn FontInfo(self: KBookmarkContextMenu) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Cursor(self: KBookmarkContextMenu) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KBookmarkContextMenu, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn UnsetCursor(self: KBookmarkContextMenu) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KBookmarkContextMenu, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn HasMouseTracking(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn UnderMouse(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KBookmarkContextMenu, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn HasTabletTracking(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KBookmarkContextMenu, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KBookmarkContextMenu, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Mask(self: KBookmarkContextMenu) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ClearMask(self: KBookmarkContextMenu) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KBookmarkContextMenu, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KBookmarkContextMenu, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Grab(self: KBookmarkContextMenu) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn GraphicsEffect(self: KBookmarkContextMenu) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KBookmarkContextMenu, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KBookmarkContextMenu, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KBookmarkContextMenu, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KBookmarkContextMenu, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self.ptr), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KBookmarkContextMenu, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self.ptr), styleSheet_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KBookmarkContextMenu, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn WindowIcon(self: KBookmarkContextMenu) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KBookmarkContextMenu, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self.ptr), windowIconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KBookmarkContextMenu, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self.ptr), windowRole_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KBookmarkContextMenu, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KBookmarkContextMenu, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn WindowOpacity(self: KBookmarkContextMenu) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsWindowModified(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KBookmarkContextMenu, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KBookmarkContextMenu, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ToolTipDuration(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KBookmarkContextMenu, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KBookmarkContextMenu, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KBookmarkContextMenu, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KBookmarkContextMenu, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self.ptr), description_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KBookmarkContextMenu, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn UnsetLayoutDirection(self: KBookmarkContextMenu) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KBookmarkContextMenu, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Locale(self: KBookmarkContextMenu) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn UnsetLocale(self: KBookmarkContextMenu) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsRightToLeft(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsLeftToRight(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SetFocus(self: KBookmarkContextMenu) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsActiveWindow(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ActivateWindow(self: KBookmarkContextMenu) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ClearFocus(self: KBookmarkContextMenu) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KBookmarkContextMenu, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KBookmarkContextMenu, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn HasFocus(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QWidget `
    ///
    pub fn SetTabOrder(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.QWidget_SetTabOrder(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KBookmarkContextMenu, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn FocusProxy(self: KBookmarkContextMenu) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KBookmarkContextMenu, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn GrabMouse(self: KBookmarkContextMenu) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ReleaseMouse(self: KBookmarkContextMenu) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn GrabKeyboard(self: KBookmarkContextMenu) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ReleaseKeyboard(self: KBookmarkContextMenu) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KBookmarkContextMenu, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KBookmarkContextMenu, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KBookmarkContextMenu, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KBookmarkContextMenu, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn MouseGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_MouseGrabber() };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn KeyboardGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_KeyboardGrabber() };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn UpdatesEnabled(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KBookmarkContextMenu, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn GraphicsProxyWidget(self: KBookmarkContextMenu) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Update(self: KBookmarkContextMenu) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Repaint(self: KBookmarkContextMenu) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KBookmarkContextMenu, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KBookmarkContextMenu, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KBookmarkContextMenu, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Show(self: KBookmarkContextMenu) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Hide(self: KBookmarkContextMenu) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ShowMinimized(self: KBookmarkContextMenu) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ShowMaximized(self: KBookmarkContextMenu) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ShowFullScreen(self: KBookmarkContextMenu) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ShowNormal(self: KBookmarkContextMenu) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Close(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Raise(self: KBookmarkContextMenu) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Lower(self: KBookmarkContextMenu) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KBookmarkContextMenu, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KBookmarkContextMenu, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KBookmarkContextMenu, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KBookmarkContextMenu, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kbookmarkcontextmenu.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KBookmarkContextMenu, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self.ptr), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AdjustSize(self: KBookmarkContextMenu) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsVisible(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KBookmarkContextMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsHidden(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsMinimized(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsMaximized(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsFullScreen(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KBookmarkContextMenu, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KBookmarkContextMenu, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SizePolicy(self: KBookmarkContextMenu) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KBookmarkContextMenu, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KBookmarkContextMenu, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn VisibleRegion(self: KBookmarkContextMenu) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KBookmarkContextMenu, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KBookmarkContextMenu, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ContentsMargins(self: KBookmarkContextMenu) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ContentsRect(self: KBookmarkContextMenu) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Layout(self: KBookmarkContextMenu) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KBookmarkContextMenu, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn UpdateGeometry(self: KBookmarkContextMenu) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KBookmarkContextMenu, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KBookmarkContextMenu, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KBookmarkContextMenu, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KBookmarkContextMenu, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn FocusWidget(self: KBookmarkContextMenu) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn NextInFocusChain(self: KBookmarkContextMenu) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn PreviousInFocusChain(self: KBookmarkContextMenu) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AcceptDrops(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KBookmarkContextMenu, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KBookmarkContextMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KBookmarkContextMenu, before: anytype, actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KBookmarkContextMenu, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KBookmarkContextMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kbookmarkcontextmenu.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KBookmarkContextMenu, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KBookmarkContextMenu, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KBookmarkContextMenu, text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction4(@ptrCast(self.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KBookmarkContextMenu, icon: anytype, text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ParentWidget(self: KBookmarkContextMenu) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KBookmarkContextMenu, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KBookmarkContextMenu, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KBookmarkContextMenu, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    pub fn Find(param1: usize) QWidget {
        return .{ .ptr = qtc.QWidget_Find(@bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KBookmarkContextMenu, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KBookmarkContextMenu, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KBookmarkContextMenu, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KBookmarkContextMenu, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KBookmarkContextMenu, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn EnsurePolished(self: KBookmarkContextMenu) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KBookmarkContextMenu, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn AutoFillBackground(self: KBookmarkContextMenu) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KBookmarkContextMenu, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn BackingStore(self: KBookmarkContextMenu) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn WindowHandle(self: KBookmarkContextMenu) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Screen(self: KBookmarkContextMenu) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KBookmarkContextMenu, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QWidget_SetScreen(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    pub fn CreateWindowContainer(window: anytype) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer(@ptrCast(window.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KBookmarkContextMenu, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KBookmarkContextMenu, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KBookmarkContextMenu, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self.ptr), iconText_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KBookmarkContextMenu, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KBookmarkContextMenu) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KBookmarkContextMenu, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KBookmarkContextMenu, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KBookmarkContextMenu, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KBookmarkContextMenu, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KBookmarkContextMenu, painter: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render23(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KBookmarkContextMenu, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KBookmarkContextMenu, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KBookmarkContextMenu, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KBookmarkContextMenu, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KBookmarkContextMenu, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KBookmarkContextMenu, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KBookmarkContextMenu, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KBookmarkContextMenu, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KBookmarkContextMenu, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWindowContainer2(window: anytype, parent: anytype) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer2(@ptrCast(window.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn CreateWindowContainer3(window: anytype, parent: anytype, flags: i32) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer3(@ptrCast(window.ptr), @ptrCast(parent.ptr), @bitCast(flags)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkcontextmenu.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KBookmarkContextMenu, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsWidgetType(self: KBookmarkContextMenu) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsWindowType(self: KBookmarkContextMenu) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn IsQuickItemType(self: KBookmarkContextMenu) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SignalsBlocked(self: KBookmarkContextMenu) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KBookmarkContextMenu, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Thread(self: KBookmarkContextMenu) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KBookmarkContextMenu, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KBookmarkContextMenu, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KBookmarkContextMenu, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KBookmarkContextMenu, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KBookmarkContextMenu, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KBookmarkContextMenu, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kbookmarkcontextmenu.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KBookmarkContextMenu, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KBookmarkContextMenu, obj: anytype) void {
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KBookmarkContextMenu, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Disconnect3(self: KBookmarkContextMenu) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KBookmarkContextMenu, receiver: anytype) bool {
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
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn DumpObjectTree(self: KBookmarkContextMenu) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn DumpObjectInfo(self: KBookmarkContextMenu) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KBookmarkContextMenu, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KBookmarkContextMenu, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KBookmarkContextMenu, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kbookmarkcontextmenu.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kbookmarkcontextmenu.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn BindingStorage(self: KBookmarkContextMenu) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn BindingStorage2(self: KBookmarkContextMenu) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Destroyed(self: KBookmarkContextMenu) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Parent(self: KBookmarkContextMenu) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KBookmarkContextMenu, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn DeleteLater(self: KBookmarkContextMenu) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KBookmarkContextMenu, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KBookmarkContextMenu, time: i64, timerType: i32) i32 {
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KBookmarkContextMenu, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KBookmarkContextMenu, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KBookmarkContextMenu, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KBookmarkContextMenu, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KBookmarkContextMenu, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn PaintingActive(self: KBookmarkContextMenu) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn WidthMM(self: KBookmarkContextMenu) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn HeightMM(self: KBookmarkContextMenu) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn LogicalDpiX(self: KBookmarkContextMenu) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn LogicalDpiY(self: KBookmarkContextMenu) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn PhysicalDpiX(self: KBookmarkContextMenu) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn PhysicalDpiY(self: KBookmarkContextMenu) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn DevicePixelRatio(self: KBookmarkContextMenu) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn DevicePixelRatioF(self: KBookmarkContextMenu) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ColorCount(self: KBookmarkContextMenu) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Depth(self: KBookmarkContextMenu) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SizeHint(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.KBookmarkContextMenu_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperSizeHint(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) QSize) void {
        qtc.KBookmarkContextMenu_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KBookmarkContextMenu_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KBookmarkContextMenu_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KBookmarkContextMenu_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KBookmarkContextMenu_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QKeyEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KBookmarkContextMenu_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KBookmarkContextMenu_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QMouseEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KBookmarkContextMenu_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KBookmarkContextMenu_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QMouseEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KBookmarkContextMenu_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KBookmarkContextMenu_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QMouseEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn WheelEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.KBookmarkContextMenu_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.KBookmarkContextMenu_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QWheelEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QEnterEvent `
    ///
    pub fn EnterEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEnterEvent;
        qtc.KBookmarkContextMenu_EnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperEnterEvent` instead
    ///
    pub const QBaseEnterEvent = SuperEnterEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEnterEvent;
        qtc.KBookmarkContextMenu_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QEnterEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn LeaveEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KBookmarkContextMenu_LeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KBookmarkContextMenu_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn HideEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.KBookmarkContextMenu_HideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.KBookmarkContextMenu_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QHideEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn PaintEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KBookmarkContextMenu_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KBookmarkContextMenu_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QPaintEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QActionEvent `
    ///
    pub fn ActionEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QActionEvent;
        qtc.KBookmarkContextMenu_ActionEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperActionEvent` instead
    ///
    pub const QBaseActionEvent = SuperActionEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QActionEvent;
        qtc.KBookmarkContextMenu_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QActionEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn TimerEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KBookmarkContextMenu_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KBookmarkContextMenu_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QTimerEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn Event(self: KBookmarkContextMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KBookmarkContextMenu_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperEvent(self: KBookmarkContextMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KBookmarkContextMenu_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QEvent) callconv(.c) bool) void {
        qtc.KBookmarkContextMenu_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KBookmarkContextMenu, next: bool) bool {
        return qtc.KBookmarkContextMenu_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KBookmarkContextMenu, next: bool) bool {
        return qtc.KBookmarkContextMenu_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, bool) callconv(.c) bool) void {
        qtc.KBookmarkContextMenu_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` option: QStyleOptionMenuItem `
    ///
    /// ` action: QAction `
    ///
    pub fn InitStyleOption(self: KBookmarkContextMenu, option: anytype, action: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionMenuItem;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KBookmarkContextMenu_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` option: QStyleOptionMenuItem `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperInitStyleOption(self: KBookmarkContextMenu, option: anytype, action: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionMenuItem;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KBookmarkContextMenu_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, option: QStyleOptionMenuItem, action: QAction) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QStyleOptionMenuItem, QAction) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn DevType(self: KBookmarkContextMenu) i32 {
        return qtc.KBookmarkContextMenu_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperDevType(self: KBookmarkContextMenu) i32 {
        return qtc.KBookmarkContextMenu_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) i32) void {
        qtc.KBookmarkContextMenu_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KBookmarkContextMenu, visible: bool) void {
        qtc.KBookmarkContextMenu_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KBookmarkContextMenu, visible: bool) void {
        qtc.KBookmarkContextMenu_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, bool) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn MinimumSizeHint(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.KBookmarkContextMenu_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperMinimumSizeHint(self: KBookmarkContextMenu) QSize {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) QSize) void {
        qtc.KBookmarkContextMenu_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KBookmarkContextMenu, param1: i32) i32 {
        return qtc.KBookmarkContextMenu_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KBookmarkContextMenu, param1: i32) i32 {
        return qtc.KBookmarkContextMenu_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, i32) callconv(.c) i32) void {
        qtc.KBookmarkContextMenu_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn HasHeightForWidth(self: KBookmarkContextMenu) bool {
        return qtc.KBookmarkContextMenu_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperHasHeightForWidth(self: KBookmarkContextMenu) bool {
        return qtc.KBookmarkContextMenu_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) bool) void {
        qtc.KBookmarkContextMenu_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn PaintEngine(self: KBookmarkContextMenu) QPaintEngine {
        return .{ .ptr = qtc.KBookmarkContextMenu_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperPaintEngine(self: KBookmarkContextMenu) QPaintEngine {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KBookmarkContextMenu_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KBookmarkContextMenu_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KBookmarkContextMenu_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QMouseEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KBookmarkContextMenu_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KBookmarkContextMenu_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QKeyEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KBookmarkContextMenu_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KBookmarkContextMenu_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QFocusEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KBookmarkContextMenu_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KBookmarkContextMenu_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QFocusEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KBookmarkContextMenu_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KBookmarkContextMenu_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QMoveEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KBookmarkContextMenu_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KBookmarkContextMenu_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QResizeEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KBookmarkContextMenu_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KBookmarkContextMenu_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QCloseEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KBookmarkContextMenu_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KBookmarkContextMenu_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QContextMenuEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KBookmarkContextMenu_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTabletEvent` instead
    ///
    pub const QBaseTabletEvent = SuperTabletEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KBookmarkContextMenu_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QTabletEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KBookmarkContextMenu_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KBookmarkContextMenu_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QDragEnterEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KBookmarkContextMenu_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KBookmarkContextMenu_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QDragMoveEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KBookmarkContextMenu_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KBookmarkContextMenu_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KBookmarkContextMenu_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KBookmarkContextMenu_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QDropEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KBookmarkContextMenu_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KBookmarkContextMenu_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QShowEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KBookmarkContextMenu, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KBookmarkContextMenu_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `SuperNativeEvent` instead
    ///
    pub const QBaseNativeEvent = SuperNativeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KBookmarkContextMenu, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KBookmarkContextMenu_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KBookmarkContextMenu_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KBookmarkContextMenu, param1: i32) i32 {
        return qtc.KBookmarkContextMenu_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KBookmarkContextMenu, param1: i32) i32 {
        return qtc.KBookmarkContextMenu_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, i32) callconv(.c) i32) void {
        qtc.KBookmarkContextMenu_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KBookmarkContextMenu, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KBookmarkContextMenu_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KBookmarkContextMenu, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KBookmarkContextMenu_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QPainter) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KBookmarkContextMenu, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KBookmarkContextMenu_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KBookmarkContextMenu, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KBookmarkContextMenu_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SharedPainter(self: KBookmarkContextMenu) QPainter {
        return .{ .ptr = qtc.KBookmarkContextMenu_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperSharedPainter(self: KBookmarkContextMenu) QPainter {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KBookmarkContextMenu_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KBookmarkContextMenu_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KBookmarkContextMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KBookmarkContextMenu_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QInputMethodEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KBookmarkContextMenu, param1: i32) QVariant {
        return .{ .ptr = qtc.KBookmarkContextMenu_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KBookmarkContextMenu, param1: i32) QVariant {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, i32) callconv(.c) QVariant) void {
        qtc.KBookmarkContextMenu_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KBookmarkContextMenu, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBookmarkContextMenu_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KBookmarkContextMenu, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KBookmarkContextMenu_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QObject, QEvent) callconv(.c) bool) void {
        qtc.KBookmarkContextMenu_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KBookmarkContextMenu_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KBookmarkContextMenu_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QChildEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KBookmarkContextMenu_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KBookmarkContextMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KBookmarkContextMenu_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QEvent) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KBookmarkContextMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBookmarkContextMenu_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KBookmarkContextMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBookmarkContextMenu_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KBookmarkContextMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBookmarkContextMenu_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KBookmarkContextMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KBookmarkContextMenu_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn ColumnCount(self: KBookmarkContextMenu) i32 {
        return qtc.KBookmarkContextMenu_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperColumnCount` instead
    ///
    pub const QBaseColumnCount = SuperColumnCount;

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperColumnCount(self: KBookmarkContextMenu) i32 {
        return qtc.KBookmarkContextMenu_SuperColumnCount(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnColumnCount(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) i32) void {
        qtc.KBookmarkContextMenu_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn UpdateMicroFocus(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateMicroFocus` instead
    ///
    pub const QBaseUpdateMicroFocus = SuperUpdateMicroFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperUpdateMicroFocus(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Create(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperCreate(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Destroy(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDestroy` instead
    ///
    pub const QBaseDestroy = SuperDestroy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperDestroy(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KBookmarkContextMenu_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn FocusNextChild(self: KBookmarkContextMenu) bool {
        return qtc.KBookmarkContextMenu_FocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusNextChild` instead
    ///
    pub const QBaseFocusNextChild = SuperFocusNextChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperFocusNextChild(self: KBookmarkContextMenu) bool {
        return qtc.KBookmarkContextMenu_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) bool) void {
        qtc.KBookmarkContextMenu_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn FocusPreviousChild(self: KBookmarkContextMenu) bool {
        return qtc.KBookmarkContextMenu_FocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusPreviousChild` instead
    ///
    pub const QBaseFocusPreviousChild = SuperFocusPreviousChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperFocusPreviousChild(self: KBookmarkContextMenu) bool {
        return qtc.KBookmarkContextMenu_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) bool) void {
        qtc.KBookmarkContextMenu_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Sender(self: KBookmarkContextMenu) QObject {
        return .{ .ptr = qtc.KBookmarkContextMenu_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperSender(self: KBookmarkContextMenu) QObject {
        return .{ .ptr = qtc.KBookmarkContextMenu_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) QObject) void {
        qtc.KBookmarkContextMenu_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SenderSignalIndex(self: KBookmarkContextMenu) i32 {
        return qtc.KBookmarkContextMenu_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn SuperSenderSignalIndex(self: KBookmarkContextMenu) i32 {
        return qtc.KBookmarkContextMenu_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KBookmarkContextMenu, callback: *const fn () callconv(.c) i32) void {
        qtc.KBookmarkContextMenu_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KBookmarkContextMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBookmarkContextMenu_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KBookmarkContextMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KBookmarkContextMenu_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, [*:0]const u8) callconv(.c) i32) void {
        qtc.KBookmarkContextMenu_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KBookmarkContextMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KBookmarkContextMenu_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KBookmarkContextMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KBookmarkContextMenu_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, QMetaMethod) callconv(.c) bool) void {
        qtc.KBookmarkContextMenu_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KBookmarkContextMenu, metricA: i32, metricB: i32) f64 {
        return qtc.KBookmarkContextMenu_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `SuperGetDecodedMetricF` instead
    ///
    pub const QBaseGetDecodedMetricF = SuperGetDecodedMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KBookmarkContextMenu, metricA: i32, metricB: i32) f64 {
        return qtc.KBookmarkContextMenu_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu`
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, i32, i32) callconv(.c) f64) void {
        qtc.KBookmarkContextMenu_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    /// ` callback: *const fn (self: KBookmarkContextMenu, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KBookmarkContextMenu, callback: *const fn (KBookmarkContextMenu, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkcontextmenu.html#dtor.KBookmarkContextMenu)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmarkContextMenu `
    ///
    pub fn Delete(self: KBookmarkContextMenu) void {
        qtc.KBookmarkContextMenu_Delete(@ptrCast(self.ptr));
    }
};
