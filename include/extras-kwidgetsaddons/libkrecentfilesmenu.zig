const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
const QUrl = @import("libqt6").QUrl;
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

/// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html)
pub const KRecentFilesMenu = extern struct {
    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KRecentFilesMenu,

    pub const _is_KRecentFilesMenu = {};
    pub const _is_QMenu = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KRecentFilesMenu object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KRecentFilesMenu {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KRecentFilesMenu_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KRecentFilesMenu object.
    ///
    /// ## Parameter(s):
    ///
    /// ` title: []const u8 `
    ///
    pub fn New2(title: []const u8) KRecentFilesMenu {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        return .{ .ptr = qtc.KRecentFilesMenu_new2(title_str) };
    }

    /// New3 constructs a new KRecentFilesMenu object.
    ///
    pub fn New3() KRecentFilesMenu {
        return .{ .ptr = qtc.KRecentFilesMenu_new3() };
    }

    /// New4 constructs a new KRecentFilesMenu object.
    ///
    /// ## Parameter(s):
    ///
    /// ` title: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(title: []const u8, parent: anytype) KRecentFilesMenu {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KRecentFilesMenu_new4(title_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MetaObject(self: KRecentFilesMenu) QMetaObject {
        return .{ .ptr = qtc.KRecentFilesMenu_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KRecentFilesMenu, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KRecentFilesMenu_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperMetaObject(self: KRecentFilesMenu) QMetaObject {
        return .{ .ptr = qtc.KRecentFilesMenu_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KRecentFilesMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KRecentFilesMenu_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KRecentFilesMenu_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KRecentFilesMenu, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KRecentFilesMenu_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KRecentFilesMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KRecentFilesMenu_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KRecentFilesMenu_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KRecentFilesMenu, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KRecentFilesMenu_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Group(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KRecentFilesMenu_Group(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.Group: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#setGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` group: []const u8 `
    ///
    pub fn SetGroup(self: KRecentFilesMenu, group: []const u8) void {
        const group_str = qtc.libqt_string{
            .len = group.len,
            .data = group.ptr,
        };
        qtc.KRecentFilesMenu_SetGroup(@ptrCast(self.ptr), group_str);
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#addUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn AddUrl(self: KRecentFilesMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KRecentFilesMenu_AddUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#removeUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn RemoveUrl(self: KRecentFilesMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KRecentFilesMenu_RemoveUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#maximumItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MaximumItems(self: KRecentFilesMenu) i32 {
        return qtc.KRecentFilesMenu_MaximumItems(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#setMaximumItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` maximumItems: usize `
    ///
    pub fn SetMaximumItems(self: KRecentFilesMenu, maximumItems: usize) void {
        qtc.KRecentFilesMenu_SetMaximumItems(@ptrCast(self.ptr), @bitCast(maximumItems));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#recentFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RecentFiles(self: KRecentFilesMenu, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KRecentFilesMenu_RecentFiles(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("krecentfilesmenu.RecentFiles: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#clearRecentFiles)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ClearRecentFiles(self: KRecentFilesMenu) void {
        qtc.KRecentFilesMenu_ClearRecentFiles(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#urlTriggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` url: QUrl `
    ///
    pub fn UrlTriggered(self: KRecentFilesMenu, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KRecentFilesMenu_UrlTriggered(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#urlTriggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, url: QUrl) callconv(.c) void `
    ///
    pub fn OnUrlTriggered(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QUrl) callconv(.c) void) void {
        qtc.KRecentFilesMenu_Connect_UrlTriggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#recentFilesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn RecentFilesChanged(self: KRecentFilesMenu) void {
        qtc.KRecentFilesMenu_RecentFilesChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#recentFilesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu) callconv(.c) void `
    ///
    pub fn OnRecentFilesChanged(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu) callconv(.c) void) void {
        qtc.KRecentFilesMenu_Connect_RecentFilesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#addUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` url: QUrl `
    ///
    /// ` name: []const u8 `
    ///
    pub fn AddUrl2(self: KRecentFilesMenu, url: anytype, name: []const u8) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.KRecentFilesMenu_AddUrl2(@ptrCast(self.ptr), @ptrCast(url.ptr), name_str);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` menu: QMenu `
    ///
    pub fn AddMenu(self: KRecentFilesMenu, menu: anytype) QAction {
        comptime _ = @TypeOf(menu)._is_QMenu;
        return .{ .ptr = qtc.QMenu_AddMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` title: []const u8 `
    ///
    pub fn AddMenu2(self: KRecentFilesMenu, title: []const u8) QMenu {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` icon: QIcon `
    ///
    /// ` title: []const u8 `
    ///
    pub fn AddMenu3(self: KRecentFilesMenu, icon: anytype, title: []const u8) QMenu {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn AddSeparator(self: KRecentFilesMenu) QAction {
        return .{ .ptr = qtc.QMenu_AddSeparator(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#addSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddSection(self: KRecentFilesMenu, text: []const u8) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddSection2(self: KRecentFilesMenu, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` menu: QMenu `
    ///
    pub fn InsertMenu(self: KRecentFilesMenu, before: anytype, menu: anytype) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` before: QAction `
    ///
    pub fn InsertSeparator(self: KRecentFilesMenu, before: anytype) QAction {
        comptime _ = @TypeOf(before)._is_QAction;
        return .{ .ptr = qtc.QMenu_InsertSeparator(@ptrCast(self.ptr), @ptrCast(before.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#insertSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertSection(self: KRecentFilesMenu, before: anytype, text: []const u8) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertSection2(self: KRecentFilesMenu, before: anytype, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsEmpty(self: KRecentFilesMenu) bool {
        return qtc.QMenu_IsEmpty(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Clear(self: KRecentFilesMenu) void {
        qtc.QMenu_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setTearOffEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` tearOffEnabled: bool `
    ///
    pub fn SetTearOffEnabled(self: KRecentFilesMenu, tearOffEnabled: bool) void {
        qtc.QMenu_SetTearOffEnabled(@ptrCast(self.ptr), tearOffEnabled);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isTearOffEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsTearOffEnabled(self: KRecentFilesMenu) bool {
        return qtc.QMenu_IsTearOffEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#isTearOffMenuVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsTearOffMenuVisible(self: KRecentFilesMenu) bool {
        return qtc.QMenu_IsTearOffMenuVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ShowTearOffMenu(self: KRecentFilesMenu) void {
        qtc.QMenu_ShowTearOffMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#showTearOffMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn ShowTearOffMenu2(self: KRecentFilesMenu, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QMenu_ShowTearOffMenu2(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideTearOffMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn HideTearOffMenu(self: KRecentFilesMenu) void {
        qtc.QMenu_HideTearOffMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setDefaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` defaultAction: QAction `
    ///
    pub fn SetDefaultAction(self: KRecentFilesMenu, defaultAction: anytype) void {
        comptime _ = @TypeOf(defaultAction)._is_QAction;
        qtc.QMenu_SetDefaultAction(@ptrCast(self.ptr), @ptrCast(defaultAction.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#defaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn DefaultAction(self: KRecentFilesMenu) QAction {
        return .{ .ptr = qtc.QMenu_DefaultAction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setActiveAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` act: QAction `
    ///
    pub fn SetActiveAction(self: KRecentFilesMenu, act: anytype) void {
        comptime _ = @TypeOf(act)._is_QAction;
        qtc.QMenu_SetActiveAction(@ptrCast(self.ptr), @ptrCast(act.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#activeAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ActiveAction(self: KRecentFilesMenu) QAction {
        return .{ .ptr = qtc.QMenu_ActiveAction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#popup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn Popup(self: KRecentFilesMenu, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QMenu_Popup(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Exec(self: KRecentFilesMenu) QAction {
        return .{ .ptr = qtc.QMenu_Exec(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#exec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn Exec2(self: KRecentFilesMenu, pos: anytype) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QAction `
    ///
    pub fn ActionGeometry(self: KRecentFilesMenu, param1: anytype) QRect {
        comptime _ = @TypeOf(param1)._is_QAction;
        return .{ .ptr = qtc.QMenu_ActionGeometry(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn ActionAt(self: KRecentFilesMenu, param1: anytype) QAction {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QMenu_ActionAt(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#menuAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MenuAction(self: KRecentFilesMenu) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMenu_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetTitle(self: KRecentFilesMenu, title: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Icon(self: KRecentFilesMenu) QIcon {
        return .{ .ptr = qtc.QMenu_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: KRecentFilesMenu, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QMenu_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setNoReplayFor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetNoReplayFor(self: KRecentFilesMenu, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QMenu_SetNoReplayFor(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#separatorsCollapsible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SeparatorsCollapsible(self: KRecentFilesMenu) bool {
        return qtc.QMenu_SeparatorsCollapsible(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setSeparatorsCollapsible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` collapse: bool `
    ///
    pub fn SetSeparatorsCollapsible(self: KRecentFilesMenu, collapse: bool) void {
        qtc.QMenu_SetSeparatorsCollapsible(@ptrCast(self.ptr), collapse);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#toolTipsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ToolTipsVisible(self: KRecentFilesMenu) bool {
        return qtc.QMenu_ToolTipsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#setToolTipsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn SetToolTipsVisible(self: KRecentFilesMenu, visible: bool) void {
        qtc.QMenu_SetToolTipsVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn AboutToShow(self: KRecentFilesMenu) void {
        qtc.QMenu_AboutToShow(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToShow)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu) callconv(.c) void `
    ///
    pub fn OnAboutToShow(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu) callconv(.c) void) void {
        qtc.QMenu_Connect_AboutToShow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn AboutToHide(self: KRecentFilesMenu) void {
        qtc.QMenu_AboutToHide(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#aboutToHide)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu) callconv(.c) void `
    ///
    pub fn OnAboutToHide(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu) callconv(.c) void) void {
        qtc.QMenu_Connect_AboutToHide(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn Triggered(self: KRecentFilesMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QMenu_Triggered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, action: QAction) callconv(.c) void `
    ///
    pub fn OnTriggered(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QAction) callconv(.c) void) void {
        qtc.QMenu_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hovered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn Hovered(self: KRecentFilesMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QMenu_Hovered(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hovered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, action: QAction) callconv(.c) void `
    ///
    pub fn OnHovered(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QAction) callconv(.c) void) void {
        qtc.QMenu_Connect_Hovered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#popup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` pos: QPoint `
    ///
    /// ` at: QAction `
    ///
    pub fn Popup2(self: KRecentFilesMenu, pos: anytype, at: anytype) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` pos: QPoint `
    ///
    /// ` at: QAction `
    ///
    pub fn Exec22(self: KRecentFilesMenu, pos: anytype, at: anytype) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn WinId(self: KRecentFilesMenu) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn CreateWinId(self: KRecentFilesMenu) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn InternalWinId(self: KRecentFilesMenu) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn EffectiveWinId(self: KRecentFilesMenu) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Style(self: KRecentFilesMenu) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KRecentFilesMenu, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsTopLevel(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsWindow(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsModal(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KRecentFilesMenu, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsEnabled(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KRecentFilesMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KRecentFilesMenu, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KRecentFilesMenu, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KRecentFilesMenu, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn FrameGeometry(self: KRecentFilesMenu) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Geometry(self: KRecentFilesMenu) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn NormalGeometry(self: KRecentFilesMenu) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn X(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Y(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Pos(self: KRecentFilesMenu) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn FrameSize(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Size(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Width(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Height(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Rect(self: KRecentFilesMenu) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ChildrenRect(self: KRecentFilesMenu) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ChildrenRegion(self: KRecentFilesMenu) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MinimumSize(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MaximumSize(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MinimumWidth(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MinimumHeight(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MaximumWidth(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MaximumHeight(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KRecentFilesMenu, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KRecentFilesMenu, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KRecentFilesMenu, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KRecentFilesMenu, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KRecentFilesMenu, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KRecentFilesMenu, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KRecentFilesMenu, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KRecentFilesMenu, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SizeIncrement(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KRecentFilesMenu, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KRecentFilesMenu, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn BaseSize(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KRecentFilesMenu, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KRecentFilesMenu, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KRecentFilesMenu, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KRecentFilesMenu, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KRecentFilesMenu, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KRecentFilesMenu, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KRecentFilesMenu, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KRecentFilesMenu, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KRecentFilesMenu, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KRecentFilesMenu, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KRecentFilesMenu, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KRecentFilesMenu, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KRecentFilesMenu, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KRecentFilesMenu, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KRecentFilesMenu, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KRecentFilesMenu, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KRecentFilesMenu, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KRecentFilesMenu, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Window(self: KRecentFilesMenu) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn NativeParentWidget(self: KRecentFilesMenu) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn TopLevelWidget(self: KRecentFilesMenu) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Palette(self: KRecentFilesMenu) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KRecentFilesMenu, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KRecentFilesMenu, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KRecentFilesMenu, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Font(self: KRecentFilesMenu) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KRecentFilesMenu, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn FontMetrics(self: KRecentFilesMenu) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn FontInfo(self: KRecentFilesMenu) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Cursor(self: KRecentFilesMenu) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KRecentFilesMenu, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn UnsetCursor(self: KRecentFilesMenu) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KRecentFilesMenu, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn HasMouseTracking(self: KRecentFilesMenu) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn UnderMouse(self: KRecentFilesMenu) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KRecentFilesMenu, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn HasTabletTracking(self: KRecentFilesMenu) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KRecentFilesMenu, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KRecentFilesMenu, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Mask(self: KRecentFilesMenu) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ClearMask(self: KRecentFilesMenu) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KRecentFilesMenu, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KRecentFilesMenu, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Grab(self: KRecentFilesMenu) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn GraphicsEffect(self: KRecentFilesMenu) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KRecentFilesMenu, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KRecentFilesMenu, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KRecentFilesMenu, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KRecentFilesMenu, windowTitle: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KRecentFilesMenu, styleSheet: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KRecentFilesMenu, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn WindowIcon(self: KRecentFilesMenu) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KRecentFilesMenu, windowIconText: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KRecentFilesMenu, windowRole: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KRecentFilesMenu, filePath: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KRecentFilesMenu, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn WindowOpacity(self: KRecentFilesMenu) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsWindowModified(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KRecentFilesMenu, toolTip: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KRecentFilesMenu, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ToolTipDuration(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KRecentFilesMenu, statusTip: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KRecentFilesMenu, whatsThis: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KRecentFilesMenu, name: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KRecentFilesMenu, description: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KRecentFilesMenu, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn UnsetLayoutDirection(self: KRecentFilesMenu) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KRecentFilesMenu, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Locale(self: KRecentFilesMenu) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn UnsetLocale(self: KRecentFilesMenu) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsRightToLeft(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsLeftToRight(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SetFocus(self: KRecentFilesMenu) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsActiveWindow(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ActivateWindow(self: KRecentFilesMenu) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ClearFocus(self: KRecentFilesMenu) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KRecentFilesMenu, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KRecentFilesMenu, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn HasFocus(self: KRecentFilesMenu) bool {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KRecentFilesMenu, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn FocusProxy(self: KRecentFilesMenu) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KRecentFilesMenu, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn GrabMouse(self: KRecentFilesMenu) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ReleaseMouse(self: KRecentFilesMenu) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn GrabKeyboard(self: KRecentFilesMenu) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ReleaseKeyboard(self: KRecentFilesMenu) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KRecentFilesMenu, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KRecentFilesMenu, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KRecentFilesMenu, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KRecentFilesMenu, id: i32) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn UpdatesEnabled(self: KRecentFilesMenu) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KRecentFilesMenu, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn GraphicsProxyWidget(self: KRecentFilesMenu) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Update(self: KRecentFilesMenu) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Repaint(self: KRecentFilesMenu) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KRecentFilesMenu, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KRecentFilesMenu, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KRecentFilesMenu, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Show(self: KRecentFilesMenu) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Hide(self: KRecentFilesMenu) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ShowMinimized(self: KRecentFilesMenu) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ShowMaximized(self: KRecentFilesMenu) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ShowFullScreen(self: KRecentFilesMenu) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ShowNormal(self: KRecentFilesMenu) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Close(self: KRecentFilesMenu) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Raise(self: KRecentFilesMenu) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Lower(self: KRecentFilesMenu) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KRecentFilesMenu, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KRecentFilesMenu, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KRecentFilesMenu, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KRecentFilesMenu, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KRecentFilesMenu, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("krecentfilesmenu.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KRecentFilesMenu, geometry: []u8) bool {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn AdjustSize(self: KRecentFilesMenu) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsVisible(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KRecentFilesMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsHidden(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsMinimized(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsMaximized(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsFullScreen(self: KRecentFilesMenu) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KRecentFilesMenu, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KRecentFilesMenu, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SizePolicy(self: KRecentFilesMenu) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KRecentFilesMenu, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KRecentFilesMenu, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn VisibleRegion(self: KRecentFilesMenu) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KRecentFilesMenu, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KRecentFilesMenu, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ContentsMargins(self: KRecentFilesMenu) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ContentsRect(self: KRecentFilesMenu) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Layout(self: KRecentFilesMenu) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KRecentFilesMenu, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn UpdateGeometry(self: KRecentFilesMenu) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KRecentFilesMenu, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KRecentFilesMenu, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KRecentFilesMenu, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KRecentFilesMenu, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn FocusWidget(self: KRecentFilesMenu) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn NextInFocusChain(self: KRecentFilesMenu) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn PreviousInFocusChain(self: KRecentFilesMenu) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn AcceptDrops(self: KRecentFilesMenu) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KRecentFilesMenu, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KRecentFilesMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KRecentFilesMenu, actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KRecentFilesMenu, before: anytype, actions: []QAction) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KRecentFilesMenu, before: anytype, action: anytype) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KRecentFilesMenu, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KRecentFilesMenu, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("krecentfilesmenu.Actions: Memory allocation failed");
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KRecentFilesMenu, text: []const u8) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KRecentFilesMenu, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KRecentFilesMenu, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KRecentFilesMenu, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ParentWidget(self: KRecentFilesMenu) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KRecentFilesMenu, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KRecentFilesMenu, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KRecentFilesMenu, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KRecentFilesMenu) i32 {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KRecentFilesMenu, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KRecentFilesMenu, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KRecentFilesMenu, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KRecentFilesMenu, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KRecentFilesMenu, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn EnsurePolished(self: KRecentFilesMenu) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KRecentFilesMenu, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn AutoFillBackground(self: KRecentFilesMenu) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KRecentFilesMenu, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn BackingStore(self: KRecentFilesMenu) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn WindowHandle(self: KRecentFilesMenu) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Screen(self: KRecentFilesMenu) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KRecentFilesMenu, screen: anytype) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KRecentFilesMenu, title: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KRecentFilesMenu, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KRecentFilesMenu, iconText: []const u8) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KRecentFilesMenu, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KRecentFilesMenu) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KRecentFilesMenu, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KRecentFilesMenu, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KRecentFilesMenu, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KRecentFilesMenu, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KRecentFilesMenu, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KRecentFilesMenu, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KRecentFilesMenu, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KRecentFilesMenu, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KRecentFilesMenu, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KRecentFilesMenu, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KRecentFilesMenu, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KRecentFilesMenu, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KRecentFilesMenu, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KRecentFilesMenu, param1: i32, on: bool) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KRecentFilesMenu, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("krecentfilesmenu.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KRecentFilesMenu, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsWidgetType(self: KRecentFilesMenu) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsWindowType(self: KRecentFilesMenu) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn IsQuickItemType(self: KRecentFilesMenu) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SignalsBlocked(self: KRecentFilesMenu) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KRecentFilesMenu, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Thread(self: KRecentFilesMenu) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KRecentFilesMenu, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KRecentFilesMenu, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KRecentFilesMenu, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KRecentFilesMenu, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KRecentFilesMenu, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KRecentFilesMenu, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("krecentfilesmenu.Children: Memory allocation failed");
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KRecentFilesMenu, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KRecentFilesMenu, obj: anytype) void {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KRecentFilesMenu, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Disconnect3(self: KRecentFilesMenu) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KRecentFilesMenu, receiver: anytype) bool {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn DumpObjectTree(self: KRecentFilesMenu) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn DumpObjectInfo(self: KRecentFilesMenu) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KRecentFilesMenu, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KRecentFilesMenu, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KRecentFilesMenu, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("krecentfilesmenu.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("krecentfilesmenu.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn BindingStorage(self: KRecentFilesMenu) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn BindingStorage2(self: KRecentFilesMenu) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Destroyed(self: KRecentFilesMenu) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Parent(self: KRecentFilesMenu) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KRecentFilesMenu, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn DeleteLater(self: KRecentFilesMenu) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KRecentFilesMenu, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KRecentFilesMenu, time: i64, timerType: i32) i32 {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KRecentFilesMenu, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KRecentFilesMenu, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KRecentFilesMenu, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KRecentFilesMenu, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KRecentFilesMenu, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn PaintingActive(self: KRecentFilesMenu) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn WidthMM(self: KRecentFilesMenu) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn HeightMM(self: KRecentFilesMenu) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn LogicalDpiX(self: KRecentFilesMenu) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn LogicalDpiY(self: KRecentFilesMenu) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn PhysicalDpiX(self: KRecentFilesMenu) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn PhysicalDpiY(self: KRecentFilesMenu) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn DevicePixelRatio(self: KRecentFilesMenu) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn DevicePixelRatioF(self: KRecentFilesMenu) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ColorCount(self: KRecentFilesMenu) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Depth(self: KRecentFilesMenu) i32 {
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SizeHint(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.KRecentFilesMenu_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperSizeHint(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.KRecentFilesMenu_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KRecentFilesMenu, callback: *const fn () callconv(.c) QSize) void {
        qtc.KRecentFilesMenu_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KRecentFilesMenu_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KRecentFilesMenu_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KRecentFilesMenu_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KRecentFilesMenu_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QKeyEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KRecentFilesMenu_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KRecentFilesMenu_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QMouseEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KRecentFilesMenu_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KRecentFilesMenu_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QMouseEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KRecentFilesMenu_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KRecentFilesMenu_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QMouseEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn WheelEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.KRecentFilesMenu_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.KRecentFilesMenu_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QWheelEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QEnterEvent `
    ///
    pub fn EnterEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEnterEvent;
        qtc.KRecentFilesMenu_EnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEnterEvent;
        qtc.KRecentFilesMenu_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QEnterEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn LeaveEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KRecentFilesMenu_LeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KRecentFilesMenu_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn HideEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.KRecentFilesMenu_HideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QHideEvent;
        qtc.KRecentFilesMenu_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QHideEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn PaintEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KRecentFilesMenu_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KRecentFilesMenu_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QPaintEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QActionEvent `
    ///
    pub fn ActionEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QActionEvent;
        qtc.KRecentFilesMenu_ActionEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QActionEvent;
        qtc.KRecentFilesMenu_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QActionEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn TimerEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KRecentFilesMenu_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KRecentFilesMenu_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QTimerEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn Event(self: KRecentFilesMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KRecentFilesMenu_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperEvent(self: KRecentFilesMenu, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.KRecentFilesMenu_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QEvent) callconv(.c) bool) void {
        qtc.KRecentFilesMenu_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KRecentFilesMenu, next: bool) bool {
        return qtc.KRecentFilesMenu_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KRecentFilesMenu, next: bool) bool {
        return qtc.KRecentFilesMenu_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, bool) callconv(.c) bool) void {
        qtc.KRecentFilesMenu_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` option: QStyleOptionMenuItem `
    ///
    /// ` action: QAction `
    ///
    pub fn InitStyleOption(self: KRecentFilesMenu, option: anytype, action: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionMenuItem;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KRecentFilesMenu_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(action.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` option: QStyleOptionMenuItem `
    ///
    /// ` action: QAction `
    ///
    pub fn SuperInitStyleOption(self: KRecentFilesMenu, option: anytype, action: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionMenuItem;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.KRecentFilesMenu_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, option: QStyleOptionMenuItem, action: QAction) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QStyleOptionMenuItem, QAction) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn DevType(self: KRecentFilesMenu) i32 {
        return qtc.KRecentFilesMenu_DevType(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperDevType(self: KRecentFilesMenu) i32 {
        return qtc.KRecentFilesMenu_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KRecentFilesMenu, callback: *const fn () callconv(.c) i32) void {
        qtc.KRecentFilesMenu_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KRecentFilesMenu, visible: bool) void {
        qtc.KRecentFilesMenu_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KRecentFilesMenu, visible: bool) void {
        qtc.KRecentFilesMenu_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, bool) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn MinimumSizeHint(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.KRecentFilesMenu_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperMinimumSizeHint(self: KRecentFilesMenu) QSize {
        return .{ .ptr = qtc.KRecentFilesMenu_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KRecentFilesMenu, callback: *const fn () callconv(.c) QSize) void {
        qtc.KRecentFilesMenu_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KRecentFilesMenu, param1: i32) i32 {
        return qtc.KRecentFilesMenu_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KRecentFilesMenu, param1: i32) i32 {
        return qtc.KRecentFilesMenu_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, i32) callconv(.c) i32) void {
        qtc.KRecentFilesMenu_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn HasHeightForWidth(self: KRecentFilesMenu) bool {
        return qtc.KRecentFilesMenu_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperHasHeightForWidth(self: KRecentFilesMenu) bool {
        return qtc.KRecentFilesMenu_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KRecentFilesMenu, callback: *const fn () callconv(.c) bool) void {
        qtc.KRecentFilesMenu_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn PaintEngine(self: KRecentFilesMenu) QPaintEngine {
        return .{ .ptr = qtc.KRecentFilesMenu_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperPaintEngine(self: KRecentFilesMenu) QPaintEngine {
        return .{ .ptr = qtc.KRecentFilesMenu_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KRecentFilesMenu, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KRecentFilesMenu_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KRecentFilesMenu_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KRecentFilesMenu_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QMouseEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KRecentFilesMenu_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KRecentFilesMenu_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QKeyEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KRecentFilesMenu_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KRecentFilesMenu_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QFocusEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KRecentFilesMenu_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KRecentFilesMenu_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QFocusEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KRecentFilesMenu_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KRecentFilesMenu_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QMoveEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KRecentFilesMenu_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KRecentFilesMenu_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QResizeEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KRecentFilesMenu_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KRecentFilesMenu_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QCloseEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KRecentFilesMenu_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KRecentFilesMenu_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QContextMenuEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KRecentFilesMenu_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KRecentFilesMenu_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QTabletEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KRecentFilesMenu_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KRecentFilesMenu_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QDragEnterEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KRecentFilesMenu_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KRecentFilesMenu_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QDragMoveEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KRecentFilesMenu_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KRecentFilesMenu_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KRecentFilesMenu_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KRecentFilesMenu_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QDropEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KRecentFilesMenu_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KRecentFilesMenu_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QShowEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KRecentFilesMenu, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KRecentFilesMenu_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KRecentFilesMenu, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KRecentFilesMenu_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KRecentFilesMenu_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KRecentFilesMenu, param1: i32) i32 {
        return qtc.KRecentFilesMenu_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KRecentFilesMenu, param1: i32) i32 {
        return qtc.KRecentFilesMenu_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, i32) callconv(.c) i32) void {
        qtc.KRecentFilesMenu_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KRecentFilesMenu, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KRecentFilesMenu_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KRecentFilesMenu, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KRecentFilesMenu_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QPainter) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KRecentFilesMenu, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KRecentFilesMenu_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KRecentFilesMenu, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KRecentFilesMenu_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KRecentFilesMenu_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SharedPainter(self: KRecentFilesMenu) QPainter {
        return .{ .ptr = qtc.KRecentFilesMenu_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperSharedPainter(self: KRecentFilesMenu) QPainter {
        return .{ .ptr = qtc.KRecentFilesMenu_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KRecentFilesMenu, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KRecentFilesMenu_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KRecentFilesMenu_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KRecentFilesMenu, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KRecentFilesMenu_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QInputMethodEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KRecentFilesMenu, param1: i32) QVariant {
        return .{ .ptr = qtc.KRecentFilesMenu_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KRecentFilesMenu, param1: i32) QVariant {
        return .{ .ptr = qtc.KRecentFilesMenu_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, i32) callconv(.c) QVariant) void {
        qtc.KRecentFilesMenu_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KRecentFilesMenu, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KRecentFilesMenu_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KRecentFilesMenu, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KRecentFilesMenu_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QObject, QEvent) callconv(.c) bool) void {
        qtc.KRecentFilesMenu_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KRecentFilesMenu_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KRecentFilesMenu_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QChildEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KRecentFilesMenu_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KRecentFilesMenu, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KRecentFilesMenu_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QEvent) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KRecentFilesMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRecentFilesMenu_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KRecentFilesMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRecentFilesMenu_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KRecentFilesMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRecentFilesMenu_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KRecentFilesMenu, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KRecentFilesMenu_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QMetaMethod) callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn ColumnCount(self: KRecentFilesMenu) i32 {
        return qtc.KRecentFilesMenu_ColumnCount(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperColumnCount(self: KRecentFilesMenu) i32 {
        return qtc.KRecentFilesMenu_SuperColumnCount(@ptrCast(self.ptr));
    }

    /// Inherited from QMenu
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmenu.html#columnCount)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnColumnCount(self: KRecentFilesMenu, callback: *const fn () callconv(.c) i32) void {
        qtc.KRecentFilesMenu_OnColumnCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn UpdateMicroFocus(self: KRecentFilesMenu) void {
        qtc.KRecentFilesMenu_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperUpdateMicroFocus(self: KRecentFilesMenu) void {
        qtc.KRecentFilesMenu_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KRecentFilesMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Create(self: KRecentFilesMenu) void {
        qtc.KRecentFilesMenu_Create(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperCreate(self: KRecentFilesMenu) void {
        qtc.KRecentFilesMenu_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KRecentFilesMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Destroy(self: KRecentFilesMenu) void {
        qtc.KRecentFilesMenu_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperDestroy(self: KRecentFilesMenu) void {
        qtc.KRecentFilesMenu_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KRecentFilesMenu, callback: *const fn () callconv(.c) void) void {
        qtc.KRecentFilesMenu_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn FocusNextChild(self: KRecentFilesMenu) bool {
        return qtc.KRecentFilesMenu_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperFocusNextChild(self: KRecentFilesMenu) bool {
        return qtc.KRecentFilesMenu_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KRecentFilesMenu, callback: *const fn () callconv(.c) bool) void {
        qtc.KRecentFilesMenu_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn FocusPreviousChild(self: KRecentFilesMenu) bool {
        return qtc.KRecentFilesMenu_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperFocusPreviousChild(self: KRecentFilesMenu) bool {
        return qtc.KRecentFilesMenu_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KRecentFilesMenu, callback: *const fn () callconv(.c) bool) void {
        qtc.KRecentFilesMenu_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Sender(self: KRecentFilesMenu) QObject {
        return .{ .ptr = qtc.KRecentFilesMenu_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperSender(self: KRecentFilesMenu) QObject {
        return .{ .ptr = qtc.KRecentFilesMenu_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KRecentFilesMenu, callback: *const fn () callconv(.c) QObject) void {
        qtc.KRecentFilesMenu_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SenderSignalIndex(self: KRecentFilesMenu) i32 {
        return qtc.KRecentFilesMenu_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    pub fn SuperSenderSignalIndex(self: KRecentFilesMenu) i32 {
        return qtc.KRecentFilesMenu_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KRecentFilesMenu, callback: *const fn () callconv(.c) i32) void {
        qtc.KRecentFilesMenu_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KRecentFilesMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRecentFilesMenu_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KRecentFilesMenu, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KRecentFilesMenu_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, [*:0]const u8) callconv(.c) i32) void {
        qtc.KRecentFilesMenu_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KRecentFilesMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KRecentFilesMenu_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KRecentFilesMenu, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KRecentFilesMenu_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, QMetaMethod) callconv(.c) bool) void {
        qtc.KRecentFilesMenu_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KRecentFilesMenu, metricA: i32, metricB: i32) f64 {
        return qtc.KRecentFilesMenu_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KRecentFilesMenu `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KRecentFilesMenu, metricA: i32, metricB: i32) f64 {
        return qtc.KRecentFilesMenu_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu`
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, i32, i32) callconv(.c) f64) void {
        qtc.KRecentFilesMenu_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    /// ` callback: *const fn (self: KRecentFilesMenu, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KRecentFilesMenu, callback: *const fn (KRecentFilesMenu, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/krecentfilesmenu.html#dtor.KRecentFilesMenu)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KRecentFilesMenu `
    ///
    pub fn Delete(self: KRecentFilesMenu) void {
        qtc.KRecentFilesMenu_Delete(@ptrCast(self.ptr));
    }
};
