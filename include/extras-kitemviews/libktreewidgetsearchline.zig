const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QCompleter = @import("libqt6").QCompleter;
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
const QStyleOptionFrame = @import("libqt6").QStyleOptionFrame;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QTreeWidget = @import("libqt6").QTreeWidget;
const QTreeWidgetItem = @import("libqt6").QTreeWidgetItem;
const QValidator = @import("libqt6").QValidator;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qlineedit_enums = @import("../libqlineedit.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html)
pub const KTreeWidgetSearchLine = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KTreeWidgetSearchLine,

    pub const _is_KTreeWidgetSearchLine = {};
    pub const _is_QLineEdit = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KTreeWidgetSearchLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KTreeWidgetSearchLine {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KTreeWidgetSearchLine_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KTreeWidgetSearchLine object.
    ///
    pub fn New2() KTreeWidgetSearchLine {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_new2() };
    }

    /// New3 constructs a new KTreeWidgetSearchLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` treeWidgets: []QTreeWidget `
    ///
    pub fn New3(parent: anytype, treeWidgets: []QTreeWidget) KTreeWidgetSearchLine {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const treeWidgets_list = qtc.libqt_list{
            .len = treeWidgets.len,
            .data = @ptrCast(treeWidgets.ptr),
        };
        return .{ .ptr = qtc.KTreeWidgetSearchLine_new3(@ptrCast(parent.ptr), treeWidgets_list) };
    }

    /// New4 constructs a new KTreeWidgetSearchLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` treeWidget: QTreeWidget `
    ///
    pub fn New4(parent: anytype, treeWidget: anytype) KTreeWidgetSearchLine {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(treeWidget)._is_QTreeWidget;
        return .{ .ptr = qtc.KTreeWidgetSearchLine_new4(@ptrCast(parent.ptr), @ptrCast(treeWidget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn MetaObject(self: KTreeWidgetSearchLine) QMetaObject {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTreeWidgetSearchLine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperMetaObject(self: KTreeWidgetSearchLine) QMetaObject {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KTreeWidgetSearchLine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTreeWidgetSearchLine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTreeWidgetSearchLine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KTreeWidgetSearchLine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTreeWidgetSearchLine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KTreeWidgetSearchLine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTreeWidgetSearchLine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KTreeWidgetSearchLine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTreeWidgetSearchLine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#caseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn CaseSensitivity(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_CaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#searchColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchColumns(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KTreeWidgetSearchLine_SearchColumns(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("ktreewidgetsearchline.SearchColumns: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#keepParentsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn KeepParentsVisible(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_KeepParentsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#treeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn TreeWidget(self: KTreeWidgetSearchLine) QTreeWidget {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_TreeWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#treeWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TreeWidgets(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []QTreeWidget {
        const _arr: qtc.libqt_list = qtc.KTreeWidgetSearchLine_TreeWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidget, _arr.len) catch @panic("ktreewidgetsearchline.TreeWidgets: Memory allocation failed");
        const _data: [*]QtC.QTreeWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#hiddenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QTreeWidgetItem `
    ///
    /// ` param2: bool `
    ///
    pub fn HiddenChanged(self: KTreeWidgetSearchLine, param1: anytype, param2: bool) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidgetItem;
        qtc.KTreeWidgetSearchLine_HiddenChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr), param2);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#hiddenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QTreeWidgetItem, param2: bool) callconv(.c) void `
    ///
    pub fn OnHiddenChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidgetItem, bool) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_Connect_HiddenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#searchUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` searchString: []const u8 `
    ///
    pub fn SearchUpdated(self: KTreeWidgetSearchLine, searchString: []const u8) void {
        const searchString_str = qtc.libqt_string{
            .len = searchString.len,
            .data = searchString.ptr,
        };
        qtc.KTreeWidgetSearchLine_SearchUpdated(@ptrCast(self.ptr), searchString_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#searchUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, searchString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSearchUpdated(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_Connect_SearchUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#caseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` caseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn CaseSensitivityChanged(self: KTreeWidgetSearchLine, caseSensitivity: i32) void {
        qtc.KTreeWidgetSearchLine_CaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(caseSensitivity));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#caseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, caseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn OnCaseSensitivityChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_Connect_CaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#keepParentsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` keepParentsVisible: bool `
    ///
    pub fn KeepParentsVisibleChanged(self: KTreeWidgetSearchLine, keepParentsVisible: bool) void {
        qtc.KTreeWidgetSearchLine_KeepParentsVisibleChanged(@ptrCast(self.ptr), keepParentsVisible);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#keepParentsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, keepParentsVisible: bool) callconv(.c) void `
    ///
    pub fn OnKeepParentsVisibleChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, bool) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_Connect_KeepParentsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#addTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` treeWidget: QTreeWidget `
    ///
    pub fn AddTreeWidget(self: KTreeWidgetSearchLine, treeWidget: anytype) void {
        comptime _ = @TypeOf(treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_AddTreeWidget(@ptrCast(self.ptr), @ptrCast(treeWidget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#removeTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` treeWidget: QTreeWidget `
    ///
    pub fn RemoveTreeWidget(self: KTreeWidgetSearchLine, treeWidget: anytype) void {
        comptime _ = @TypeOf(treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_RemoveTreeWidget(@ptrCast(self.ptr), @ptrCast(treeWidget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn UpdateSearch(self: KTreeWidgetSearchLine, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.KTreeWidgetSearchLine_UpdateSearch(@ptrCast(self.ptr), pattern_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, pattern: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnUpdateSearch(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnUpdateSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateSearch` instead
    ///
    pub const QBaseUpdateSearch = SuperUpdateSearch;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SuperUpdateSearch(self: KTreeWidgetSearchLine, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.KTreeWidgetSearchLine_SuperUpdateSearch(@ptrCast(self.ptr), pattern_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` caseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: KTreeWidgetSearchLine, caseSensitivity: i32) void {
        qtc.KTreeWidgetSearchLine_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(caseSensitivity));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setKeepParentsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` value: bool `
    ///
    pub fn SetKeepParentsVisible(self: KTreeWidgetSearchLine, value: bool) void {
        qtc.KTreeWidgetSearchLine_SetKeepParentsVisible(@ptrCast(self.ptr), value);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setSearchColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` columns: []i32 `
    ///
    pub fn SetSearchColumns(self: KTreeWidgetSearchLine, columns: []i32) void {
        const columns_list = qtc.libqt_list{
            .len = columns.len,
            .data = columns.ptr,
        };
        qtc.KTreeWidgetSearchLine_SetSearchColumns(@ptrCast(self.ptr), columns_list);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` treeWidget: QTreeWidget `
    ///
    pub fn SetTreeWidget(self: KTreeWidgetSearchLine, treeWidget: anytype) void {
        comptime _ = @TypeOf(treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_SetTreeWidget(@ptrCast(self.ptr), @ptrCast(treeWidget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setTreeWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` treeWidgets: []QTreeWidget `
    ///
    pub fn SetTreeWidgets(self: KTreeWidgetSearchLine, treeWidgets: []QTreeWidget) void {
        const treeWidgets_list = qtc.libqt_list{
            .len = treeWidgets.len,
            .data = @ptrCast(treeWidgets.ptr),
        };
        qtc.KTreeWidgetSearchLine_SetTreeWidgets(@ptrCast(self.ptr), treeWidgets_list);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#itemMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn ItemMatches(self: KTreeWidgetSearchLine, item: anytype, pattern: []const u8) bool {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return qtc.KTreeWidgetSearchLine_ItemMatches(@ptrCast(self.ptr), @ptrCast(item.ptr), pattern_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#itemMatches)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, item: QTreeWidgetItem, pattern: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnItemMatches(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidgetItem, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnItemMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemMatches` instead
    ///
    pub const QBaseItemMatches = SuperItemMatches;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#itemMatches)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn SuperItemMatches(self: KTreeWidgetSearchLine, item: anytype, pattern: []const u8) bool {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return qtc.KTreeWidgetSearchLine_SuperItemMatches(@ptrCast(self.ptr), @ptrCast(item.ptr), pattern_str);
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KTreeWidgetSearchLine_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QContextMenuEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KTreeWidgetSearchLine_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` treeWidget: QTreeWidget `
    ///
    pub fn UpdateSearch2(self: KTreeWidgetSearchLine, treeWidget: anytype) void {
        comptime _ = @TypeOf(treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_UpdateSearch2(@ptrCast(self.ptr), @ptrCast(treeWidget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, treeWidget: QTreeWidget) callconv(.c) void `
    ///
    pub fn OnUpdateSearch2(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidget) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnUpdateSearch2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateSearch2` instead
    ///
    pub const QBaseUpdateSearch2 = SuperUpdateSearch2;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` treeWidget: QTreeWidget `
    ///
    pub fn SuperUpdateSearch2(self: KTreeWidgetSearchLine, treeWidget: anytype) void {
        comptime _ = @TypeOf(treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_SuperUpdateSearch2(@ptrCast(self.ptr), @ptrCast(treeWidget.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#connectTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QTreeWidget `
    ///
    pub fn ConnectTreeWidget(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_ConnectTreeWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#connectTreeWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QTreeWidget) callconv(.c) void `
    ///
    pub fn OnConnectTreeWidget(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidget) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnConnectTreeWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperConnectTreeWidget` instead
    ///
    pub const QBaseConnectTreeWidget = SuperConnectTreeWidget;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#connectTreeWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QTreeWidget `
    ///
    pub fn SuperConnectTreeWidget(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_SuperConnectTreeWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#disconnectTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QTreeWidget `
    ///
    pub fn DisconnectTreeWidget(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_DisconnectTreeWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#disconnectTreeWidget)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QTreeWidget) callconv(.c) void `
    ///
    pub fn OnDisconnectTreeWidget(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidget) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDisconnectTreeWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDisconnectTreeWidget` instead
    ///
    pub const QBaseDisconnectTreeWidget = SuperDisconnectTreeWidget;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#disconnectTreeWidget)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QTreeWidget `
    ///
    pub fn SuperDisconnectTreeWidget(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_SuperDisconnectTreeWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#canChooseColumnsCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn CanChooseColumnsCheck(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_CanChooseColumnsCheck(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#canChooseColumnsCheck)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnCanChooseColumnsCheck(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnCanChooseColumnsCheck(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanChooseColumnsCheck` instead
    ///
    pub const QBaseCanChooseColumnsCheck = SuperCanChooseColumnsCheck;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#canChooseColumnsCheck)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperCanChooseColumnsCheck(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_SuperCanChooseColumnsCheck(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KTreeWidgetSearchLine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTreeWidgetSearchLine_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEvent) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KTreeWidgetSearchLine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTreeWidgetSearchLine_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#displayText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayText(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_DisplayText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.DisplayText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceholderText(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` placeholderText: []const u8 `
    ///
    pub fn SetPlaceholderText(self: KTreeWidgetSearchLine, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QLineEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn MaxLength(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_MaxLength(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` maxLength: i32 `
    ///
    pub fn SetMaxLength(self: KTreeWidgetSearchLine, maxLength: i32) void {
        qtc.QLineEdit_SetMaxLength(@ptrCast(self.ptr), @bitCast(maxLength));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: KTreeWidgetSearchLine, frame: bool) void {
        qtc.QLineEdit_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn HasFrame(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` enable: bool `
    ///
    pub fn SetClearButtonEnabled(self: KTreeWidgetSearchLine, enable: bool) void {
        qtc.QLineEdit_SetClearButtonEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsClearButtonEnabled(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsClearButtonEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qlineedit_enums.EchoMode `
    ///
    pub fn EchoMode(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_EchoMode(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` echoMode: qlineedit_enums.EchoMode `
    ///
    pub fn SetEchoMode(self: KTreeWidgetSearchLine, echoMode: i32) void {
        qtc.QLineEdit_SetEchoMode(@ptrCast(self.ptr), @bitCast(echoMode));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsReadOnly(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` readOnly: bool `
    ///
    pub fn SetReadOnly(self: KTreeWidgetSearchLine, readOnly: bool) void {
        qtc.QLineEdit_SetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` validator: QValidator `
    ///
    pub fn SetValidator(self: KTreeWidgetSearchLine, validator: anytype) void {
        comptime _ = @TypeOf(validator)._is_QValidator;
        qtc.QLineEdit_SetValidator(@ptrCast(self.ptr), @ptrCast(validator.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#validator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Validator(self: KTreeWidgetSearchLine) QValidator {
        return .{ .ptr = qtc.QLineEdit_Validator(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` completer: QCompleter `
    ///
    pub fn SetCompleter(self: KTreeWidgetSearchLine, completer: anytype) void {
        comptime _ = @TypeOf(completer)._is_QCompleter;
        qtc.QLineEdit_SetCompleter(@ptrCast(self.ptr), @ptrCast(completer.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#completer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Completer(self: KTreeWidgetSearchLine) QCompleter {
        return .{ .ptr = qtc.QLineEdit_Completer(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn CursorPosition(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_CursorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` cursorPosition: i32 `
    ///
    pub fn SetCursorPosition(self: KTreeWidgetSearchLine, cursorPosition: i32) void {
        qtc.QLineEdit_SetCursorPosition(@ptrCast(self.ptr), @bitCast(cursorPosition));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CursorPositionAt(self: KTreeWidgetSearchLine, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.QLineEdit_CursorPositionAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` flag: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: KTreeWidgetSearchLine, flag: i32) void {
        qtc.QLineEdit_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorForward(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorForward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorBackward(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorBackward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorWordForward(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorWordForward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorWordBackward(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorWordBackward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#backspace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Backspace(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Backspace(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#del)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Del(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Del(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#home)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn Home(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_Home(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn End(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_End(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsModified(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsModified(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` modified: bool `
    ///
    pub fn SetModified(self: KTreeWidgetSearchLine, modified: bool) void {
        qtc.QLineEdit_SetModified(@ptrCast(self.ptr), modified);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    pub fn SetSelection(self: KTreeWidgetSearchLine, param1: i32, param2: i32) void {
        qtc.QLineEdit_SetSelection(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn HasSelectedText(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_HasSelectedText(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedText(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SelectionStart(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_SelectionStart(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SelectionEnd(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_SelectionEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SelectionLength(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_SelectionLength(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsUndoAvailable(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsRedoAvailable(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsRedoAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` b: bool `
    ///
    pub fn SetDragEnabled(self: KTreeWidgetSearchLine, b: bool) void {
        qtc.QLineEdit_SetDragEnabled(@ptrCast(self.ptr), b);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn DragEnabled(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_DragEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` style: qnamespace_enums.CursorMoveStyle `
    ///
    pub fn SetCursorMoveStyle(self: KTreeWidgetSearchLine, style: i32) void {
        qtc.QLineEdit_SetCursorMoveStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CursorMoveStyle `
    ///
    pub fn CursorMoveStyle(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_CursorMoveStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputMask(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_InputMask(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.InputMask: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` inputMask: []const u8 `
    ///
    pub fn SetInputMask(self: KTreeWidgetSearchLine, inputMask: []const u8) void {
        const inputMask_str = qtc.libqt_string{
            .len = inputMask.len,
            .data = inputMask.ptr,
        };
        qtc.QLineEdit_SetInputMask(@ptrCast(self.ptr), inputMask_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn HasAcceptableInput(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetTextMargins(self: KTreeWidgetSearchLine, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLineEdit_SetTextMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetTextMargins2(self: KTreeWidgetSearchLine, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLineEdit_SetTextMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn TextMargins(self: KTreeWidgetSearchLine) QMargins {
        return .{ .ptr = qtc.QLineEdit_TextMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` action: QAction `
    ///
    /// ` position: qlineedit_enums.ActionPosition `
    ///
    pub fn AddAction(self: KTreeWidgetSearchLine, action: anytype, position: i32) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QLineEdit_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr), @bitCast(position));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    /// ` position: qlineedit_enums.ActionPosition `
    ///
    pub fn AddAction2(self: KTreeWidgetSearchLine, icon: anytype, position: i32) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        return .{ .ptr = qtc.QLineEdit_AddAction2(@ptrCast(self.ptr), @ptrCast(icon.ptr), @bitCast(position)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KTreeWidgetSearchLine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QLineEdit_SetText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Clear(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SelectAll(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Undo(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Undo(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Redo(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Redo(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Cut(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Cut(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Copy(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Copy(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Paste(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Paste(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#deselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Deselect(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Deselect(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Insert(self: KTreeWidgetSearchLine, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_Insert(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn CreateStandardContextMenu(self: KTreeWidgetSearchLine) QMenu {
        return .{ .ptr = qtc.QLineEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextChanged(self: KTreeWidgetSearchLine, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_TextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextEdited(self: KTreeWidgetSearchLine, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_TextEdited(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextEdited(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextEdited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    pub fn CursorPositionChanged(self: KTreeWidgetSearchLine, param1: i32, param2: i32) void {
        qtc.QLineEdit_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: i32, param2: i32) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32, i32) callconv(.c) void) void {
        qtc.QLineEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ReturnPressed(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_ReturnPressed(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnReturnPressed(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_ReturnPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn EditingFinished(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_EditingFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SelectionChanged(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn InputRejected(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_InputRejected(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnInputRejected(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_InputRejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn InputMethodQuery2(self: KTreeWidgetSearchLine, property: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QLineEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(property), @ptrCast(argument.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    /// ` steps: i32 `
    ///
    pub fn CursorForward2(self: KTreeWidgetSearchLine, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorForward2(@ptrCast(self.ptr), mark, @bitCast(steps));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    /// ` steps: i32 `
    ///
    pub fn CursorBackward2(self: KTreeWidgetSearchLine, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorBackward2(@ptrCast(self.ptr), mark, @bitCast(steps));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn WinId(self: KTreeWidgetSearchLine) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn CreateWinId(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn InternalWinId(self: KTreeWidgetSearchLine) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn EffectiveWinId(self: KTreeWidgetSearchLine) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Style(self: KTreeWidgetSearchLine) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KTreeWidgetSearchLine, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsTopLevel(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsWindow(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsModal(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KTreeWidgetSearchLine, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsEnabled(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KTreeWidgetSearchLine, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KTreeWidgetSearchLine, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KTreeWidgetSearchLine, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KTreeWidgetSearchLine, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn FrameGeometry(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Geometry(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn NormalGeometry(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn X(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Y(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Pos(self: KTreeWidgetSearchLine) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn FrameSize(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Size(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Width(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Height(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Rect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ChildrenRect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ChildrenRegion(self: KTreeWidgetSearchLine) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn MinimumSize(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn MaximumSize(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn MinimumWidth(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn MinimumHeight(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn MaximumWidth(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn MaximumHeight(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KTreeWidgetSearchLine, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KTreeWidgetSearchLine, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KTreeWidgetSearchLine, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KTreeWidgetSearchLine, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KTreeWidgetSearchLine, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KTreeWidgetSearchLine, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KTreeWidgetSearchLine, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KTreeWidgetSearchLine, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SizeIncrement(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KTreeWidgetSearchLine, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KTreeWidgetSearchLine, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn BaseSize(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KTreeWidgetSearchLine, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KTreeWidgetSearchLine, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KTreeWidgetSearchLine, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KTreeWidgetSearchLine, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KTreeWidgetSearchLine, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KTreeWidgetSearchLine, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KTreeWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KTreeWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KTreeWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KTreeWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KTreeWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KTreeWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KTreeWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KTreeWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KTreeWidgetSearchLine, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KTreeWidgetSearchLine, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KTreeWidgetSearchLine, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KTreeWidgetSearchLine, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Window(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn NativeParentWidget(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn TopLevelWidget(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Palette(self: KTreeWidgetSearchLine) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KTreeWidgetSearchLine, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KTreeWidgetSearchLine, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KTreeWidgetSearchLine, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Font(self: KTreeWidgetSearchLine) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KTreeWidgetSearchLine, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn FontMetrics(self: KTreeWidgetSearchLine) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn FontInfo(self: KTreeWidgetSearchLine) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Cursor(self: KTreeWidgetSearchLine) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KTreeWidgetSearchLine, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn UnsetCursor(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KTreeWidgetSearchLine, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn HasMouseTracking(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn UnderMouse(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KTreeWidgetSearchLine, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn HasTabletTracking(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KTreeWidgetSearchLine, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KTreeWidgetSearchLine, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Mask(self: KTreeWidgetSearchLine) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ClearMask(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KTreeWidgetSearchLine, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KTreeWidgetSearchLine, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Grab(self: KTreeWidgetSearchLine) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn GraphicsEffect(self: KTreeWidgetSearchLine) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KTreeWidgetSearchLine, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KTreeWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KTreeWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KTreeWidgetSearchLine, windowTitle: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KTreeWidgetSearchLine, styleSheet: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KTreeWidgetSearchLine, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn WindowIcon(self: KTreeWidgetSearchLine) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KTreeWidgetSearchLine, windowIconText: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KTreeWidgetSearchLine, windowRole: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KTreeWidgetSearchLine, filePath: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KTreeWidgetSearchLine, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn WindowOpacity(self: KTreeWidgetSearchLine) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsWindowModified(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KTreeWidgetSearchLine, toolTip: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KTreeWidgetSearchLine, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ToolTipDuration(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KTreeWidgetSearchLine, statusTip: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KTreeWidgetSearchLine, whatsThis: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KTreeWidgetSearchLine, name: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KTreeWidgetSearchLine, description: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KTreeWidgetSearchLine, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn UnsetLayoutDirection(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KTreeWidgetSearchLine, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Locale(self: KTreeWidgetSearchLine) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn UnsetLocale(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsRightToLeft(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsLeftToRight(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SetFocus(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsActiveWindow(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ActivateWindow(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ClearFocus(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KTreeWidgetSearchLine, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KTreeWidgetSearchLine, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn HasFocus(self: KTreeWidgetSearchLine) bool {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KTreeWidgetSearchLine, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn FocusProxy(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KTreeWidgetSearchLine, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn GrabMouse(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ReleaseMouse(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn GrabKeyboard(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ReleaseKeyboard(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KTreeWidgetSearchLine, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KTreeWidgetSearchLine, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KTreeWidgetSearchLine, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KTreeWidgetSearchLine, id: i32) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn UpdatesEnabled(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KTreeWidgetSearchLine, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn GraphicsProxyWidget(self: KTreeWidgetSearchLine) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Update(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Repaint(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KTreeWidgetSearchLine, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KTreeWidgetSearchLine, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KTreeWidgetSearchLine, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Show(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Hide(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ShowMinimized(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ShowMaximized(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ShowFullScreen(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ShowNormal(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Close(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Raise(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Lower(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KTreeWidgetSearchLine, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KTreeWidgetSearchLine, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KTreeWidgetSearchLine, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KTreeWidgetSearchLine, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("ktreewidgetsearchline.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KTreeWidgetSearchLine, geometry: []u8) bool {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn AdjustSize(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsVisible(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KTreeWidgetSearchLine, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsHidden(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsMinimized(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsMaximized(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsFullScreen(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KTreeWidgetSearchLine, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KTreeWidgetSearchLine, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SizePolicy(self: KTreeWidgetSearchLine) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KTreeWidgetSearchLine, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KTreeWidgetSearchLine, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn VisibleRegion(self: KTreeWidgetSearchLine) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KTreeWidgetSearchLine, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KTreeWidgetSearchLine, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ContentsMargins(self: KTreeWidgetSearchLine) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ContentsRect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Layout(self: KTreeWidgetSearchLine) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KTreeWidgetSearchLine, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn UpdateGeometry(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KTreeWidgetSearchLine, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KTreeWidgetSearchLine, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KTreeWidgetSearchLine, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KTreeWidgetSearchLine, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn FocusWidget(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn NextInFocusChain(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn PreviousInFocusChain(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn AcceptDrops(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KTreeWidgetSearchLine, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KTreeWidgetSearchLine, actions: []QAction) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KTreeWidgetSearchLine, before: anytype, actions: []QAction) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KTreeWidgetSearchLine, before: anytype, action: anytype) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KTreeWidgetSearchLine, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("ktreewidgetsearchline.Actions: Memory allocation failed");
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KTreeWidgetSearchLine, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KTreeWidgetSearchLine, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KTreeWidgetSearchLine, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ParentWidget(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KTreeWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KTreeWidgetSearchLine, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KTreeWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KTreeWidgetSearchLine) i32 {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KTreeWidgetSearchLine, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KTreeWidgetSearchLine, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KTreeWidgetSearchLine, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KTreeWidgetSearchLine, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KTreeWidgetSearchLine, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn EnsurePolished(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KTreeWidgetSearchLine, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn AutoFillBackground(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KTreeWidgetSearchLine, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn BackingStore(self: KTreeWidgetSearchLine) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn WindowHandle(self: KTreeWidgetSearchLine) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Screen(self: KTreeWidgetSearchLine) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KTreeWidgetSearchLine, screen: anytype) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KTreeWidgetSearchLine, title: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KTreeWidgetSearchLine, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KTreeWidgetSearchLine, iconText: []const u8) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KTreeWidgetSearchLine, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KTreeWidgetSearchLine, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KTreeWidgetSearchLine, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KTreeWidgetSearchLine, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KTreeWidgetSearchLine, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KTreeWidgetSearchLine, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KTreeWidgetSearchLine, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KTreeWidgetSearchLine, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KTreeWidgetSearchLine, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KTreeWidgetSearchLine, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KTreeWidgetSearchLine, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KTreeWidgetSearchLine, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KTreeWidgetSearchLine, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KTreeWidgetSearchLine, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KTreeWidgetSearchLine, param1: i32, on: bool) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ktreewidgetsearchline.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KTreeWidgetSearchLine, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsWidgetType(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsWindowType(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn IsQuickItemType(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SignalsBlocked(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KTreeWidgetSearchLine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Thread(self: KTreeWidgetSearchLine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KTreeWidgetSearchLine, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KTreeWidgetSearchLine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KTreeWidgetSearchLine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KTreeWidgetSearchLine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KTreeWidgetSearchLine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ktreewidgetsearchline.Children: Memory allocation failed");
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KTreeWidgetSearchLine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KTreeWidgetSearchLine, obj: anytype) void {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KTreeWidgetSearchLine, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Disconnect3(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KTreeWidgetSearchLine, receiver: anytype) bool {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn DumpObjectTree(self: KTreeWidgetSearchLine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn DumpObjectInfo(self: KTreeWidgetSearchLine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KTreeWidgetSearchLine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KTreeWidgetSearchLine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ktreewidgetsearchline.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ktreewidgetsearchline.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn BindingStorage(self: KTreeWidgetSearchLine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn BindingStorage2(self: KTreeWidgetSearchLine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Destroyed(self: KTreeWidgetSearchLine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Parent(self: KTreeWidgetSearchLine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KTreeWidgetSearchLine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn DeleteLater(self: KTreeWidgetSearchLine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KTreeWidgetSearchLine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KTreeWidgetSearchLine, time: i64, timerType: i32) i32 {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KTreeWidgetSearchLine, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KTreeWidgetSearchLine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KTreeWidgetSearchLine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KTreeWidgetSearchLine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KTreeWidgetSearchLine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn PaintingActive(self: KTreeWidgetSearchLine) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn WidthMM(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn HeightMM(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn LogicalDpiX(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn LogicalDpiY(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn PhysicalDpiX(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn PhysicalDpiY(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn DevicePixelRatio(self: KTreeWidgetSearchLine) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn DevicePixelRatioF(self: KTreeWidgetSearchLine) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ColorCount(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Depth(self: KTreeWidgetSearchLine) i32 {
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

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SizeHint(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperSizeHint(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QSize) void {
        qtc.KTreeWidgetSearchLine_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn MinimumSizeHint(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperMinimumSizeHint(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QSize) void {
        qtc.KTreeWidgetSearchLine_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KTreeWidgetSearchLine_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KTreeWidgetSearchLine_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QKeyEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KTreeWidgetSearchLine_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KTreeWidgetSearchLine_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QKeyEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KTreeWidgetSearchLine_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KTreeWidgetSearchLine_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QFocusEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KTreeWidgetSearchLine_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KTreeWidgetSearchLine_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QFocusEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn PaintEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KTreeWidgetSearchLine_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KTreeWidgetSearchLine_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QPaintEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.KTreeWidgetSearchLine_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.KTreeWidgetSearchLine_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QDragEnterEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KTreeWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.KTreeWidgetSearchLine_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KTreeWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.KTreeWidgetSearchLine_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QDragMoveEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KTreeWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.KTreeWidgetSearchLine_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KTreeWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.KTreeWidgetSearchLine_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn DropEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.KTreeWidgetSearchLine_DropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.KTreeWidgetSearchLine_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QDropEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KTreeWidgetSearchLine_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KTreeWidgetSearchLine_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KTreeWidgetSearchLine_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KTreeWidgetSearchLine_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QInputMethodEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: KTreeWidgetSearchLine, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KTreeWidgetSearchLine_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: KTreeWidgetSearchLine, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KTreeWidgetSearchLine_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QStyleOptionFrame) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KTreeWidgetSearchLine, param1: i32) QVariant {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KTreeWidgetSearchLine, param1: i32) QVariant {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32) callconv(.c) QVariant) void {
        qtc.KTreeWidgetSearchLine_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn TimerEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KTreeWidgetSearchLine_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KTreeWidgetSearchLine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTimerEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn DevType(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_DevType(@ptrCast(self.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperDevType(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KTreeWidgetSearchLine, visible: bool) void {
        qtc.KTreeWidgetSearchLine_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KTreeWidgetSearchLine, visible: bool) void {
        qtc.KTreeWidgetSearchLine_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, bool) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KTreeWidgetSearchLine, param1: i32) i32 {
        return qtc.KTreeWidgetSearchLine_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KTreeWidgetSearchLine, param1: i32) i32 {
        return qtc.KTreeWidgetSearchLine_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32) callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn HasHeightForWidth(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperHasHeightForWidth(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn PaintEngine(self: KTreeWidgetSearchLine) QPaintEngine {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperPaintEngine(self: KTreeWidgetSearchLine) QPaintEngine {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KTreeWidgetSearchLine_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KTreeWidgetSearchLine_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KTreeWidgetSearchLine_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QWheelEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KTreeWidgetSearchLine_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEnterEvent` instead
    ///
    pub const QBaseEnterEvent = SuperEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KTreeWidgetSearchLine_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEnterEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTreeWidgetSearchLine_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTreeWidgetSearchLine_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KTreeWidgetSearchLine_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KTreeWidgetSearchLine_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMoveEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KTreeWidgetSearchLine_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KTreeWidgetSearchLine_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QResizeEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KTreeWidgetSearchLine_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KTreeWidgetSearchLine_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QCloseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KTreeWidgetSearchLine_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KTreeWidgetSearchLine_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTabletEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KTreeWidgetSearchLine_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperActionEvent` instead
    ///
    pub const QBaseActionEvent = SuperActionEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KTreeWidgetSearchLine_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QActionEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KTreeWidgetSearchLine_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KTreeWidgetSearchLine_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QShowEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KTreeWidgetSearchLine_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KTreeWidgetSearchLine_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QHideEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KTreeWidgetSearchLine, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTreeWidgetSearchLine_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KTreeWidgetSearchLine, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTreeWidgetSearchLine_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KTreeWidgetSearchLine, param1: i32) i32 {
        return qtc.KTreeWidgetSearchLine_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KTreeWidgetSearchLine, param1: i32) i32 {
        return qtc.KTreeWidgetSearchLine_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32) callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KTreeWidgetSearchLine, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KTreeWidgetSearchLine_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KTreeWidgetSearchLine, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KTreeWidgetSearchLine_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QPainter) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KTreeWidgetSearchLine, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KTreeWidgetSearchLine_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KTreeWidgetSearchLine, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KTreeWidgetSearchLine_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SharedPainter(self: KTreeWidgetSearchLine) QPainter {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperSharedPainter(self: KTreeWidgetSearchLine) QPainter {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KTreeWidgetSearchLine_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KTreeWidgetSearchLine, next: bool) bool {
        return qtc.KTreeWidgetSearchLine_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KTreeWidgetSearchLine, next: bool) bool {
        return qtc.KTreeWidgetSearchLine_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, bool) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KTreeWidgetSearchLine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTreeWidgetSearchLine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KTreeWidgetSearchLine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KTreeWidgetSearchLine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTreeWidgetSearchLine_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KTreeWidgetSearchLine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QChildEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTreeWidgetSearchLine_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KTreeWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KTreeWidgetSearchLine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KTreeWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTreeWidgetSearchLine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KTreeWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTreeWidgetSearchLine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMetaMethod) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KTreeWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTreeWidgetSearchLine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KTreeWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTreeWidgetSearchLine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMetaMethod) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn CursorRect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_CursorRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCursorRect` instead
    ///
    pub const QBaseCursorRect = SuperCursorRect;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperCursorRect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperCursorRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnCursorRect(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QRect) void {
        qtc.KTreeWidgetSearchLine_OnCursorRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn UpdateMicroFocus(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperUpdateMicroFocus(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Create(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_Create(@ptrCast(self.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperCreate(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Destroy(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperDestroy(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn FocusNextChild(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperFocusNextChild(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn FocusPreviousChild(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperFocusPreviousChild(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Sender(self: KTreeWidgetSearchLine) QObject {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperSender(self: KTreeWidgetSearchLine) QObject {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTreeWidgetSearchLine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SenderSignalIndex(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn SuperSenderSignalIndex(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KTreeWidgetSearchLine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTreeWidgetSearchLine_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KTreeWidgetSearchLine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTreeWidgetSearchLine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KTreeWidgetSearchLine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTreeWidgetSearchLine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KTreeWidgetSearchLine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTreeWidgetSearchLine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMetaMethod) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KTreeWidgetSearchLine, metricA: i32, metricB: i32) f64 {
        return qtc.KTreeWidgetSearchLine_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KTreeWidgetSearchLine, metricA: i32, metricB: i32) f64 {
        return qtc.KTreeWidgetSearchLine_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32, i32) callconv(.c) f64) void {
        qtc.KTreeWidgetSearchLine_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#dtor.KTreeWidgetSearchLine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn Delete(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_Delete(@ptrCast(self.ptr));
    }
};
