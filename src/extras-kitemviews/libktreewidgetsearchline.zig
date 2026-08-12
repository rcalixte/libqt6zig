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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KTreeWidgetSearchLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) KTreeWidgetSearchLine {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.KTreeWidgetSearchLine_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KTreeWidgetSearchLine object in C++ memory
    ///
    pub fn new2() KTreeWidgetSearchLine {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KTreeWidgetSearchLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    /// ` _treeWidgets: []QTreeWidget `
    ///
    pub fn new3(_parent: anytype, _treeWidgets: []QTreeWidget) KTreeWidgetSearchLine {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        const treeWidgets_list = qtc.libqt_list{
            .len = _treeWidgets.len,
            .data = @ptrCast(_treeWidgets.ptr),
        };
        return .{ .ptr = qtc.KTreeWidgetSearchLine_new3(@ptrCast(_parent.ptr), treeWidgets_list) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new KTreeWidgetSearchLine object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    /// ` _treeWidget: QTreeWidget `
    ///
    pub fn new4(_parent: anytype, _treeWidget: anytype) KTreeWidgetSearchLine {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        comptime _ = @TypeOf(_treeWidget)._is_QTreeWidget;
        return .{ .ptr = qtc.KTreeWidgetSearchLine_new4(@ptrCast(_parent.ptr), @ptrCast(_treeWidget.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn metaObject(self: KTreeWidgetSearchLine) QMetaObject {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

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
    pub fn onMetaObject(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KTreeWidgetSearchLine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn superMetaObject(self: KTreeWidgetSearchLine) QMetaObject {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: KTreeWidgetSearchLine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTreeWidgetSearchLine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KTreeWidgetSearchLine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: KTreeWidgetSearchLine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KTreeWidgetSearchLine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: KTreeWidgetSearchLine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTreeWidgetSearchLine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: KTreeWidgetSearchLine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KTreeWidgetSearchLine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `tr` instead
    ///
    pub const Tr = tr;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` s: [:0]const u8 `
    ///
    pub fn tr(allocator: std.mem.Allocator, s: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `caseSensitivity` instead
    ///
    pub const CaseSensitivity = caseSensitivity;

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
    pub fn caseSensitivity(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_CaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `searchColumns` instead
    ///
    pub const SearchColumns = searchColumns;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#searchColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn searchColumns(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.KTreeWidgetSearchLine_SearchColumns(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("KTreeWidgetSearchLine.searchColumns: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `keepParentsVisible` instead
    ///
    pub const KeepParentsVisible = keepParentsVisible;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#keepParentsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn keepParentsVisible(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_KeepParentsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `treeWidget` instead
    ///
    pub const TreeWidget = treeWidget;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#treeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn treeWidget(self: KTreeWidgetSearchLine) QTreeWidget {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_TreeWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `treeWidgets` instead
    ///
    pub const TreeWidgets = treeWidgets;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#treeWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn treeWidgets(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []QTreeWidget {
        const _arr: qtc.libqt_list = qtc.KTreeWidgetSearchLine_TreeWidgets(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidget, _arr.len) catch @panic("KTreeWidgetSearchLine.treeWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QTreeWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `hiddenChanged` instead
    ///
    pub const HiddenChanged = hiddenChanged;

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
    pub fn hiddenChanged(self: KTreeWidgetSearchLine, param1: anytype, param2: bool) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidgetItem;
        qtc.KTreeWidgetSearchLine_HiddenChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr), param2);
    }

    /// ### DEPRECATED: Use `onHiddenChanged` instead
    ///
    pub const OnHiddenChanged = onHiddenChanged;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#hiddenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, param1: QTreeWidgetItem, param2: bool) callconv(.c) void `
    ///
    pub fn onHiddenChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidgetItem, bool) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_Connect_HiddenChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `searchUpdated` instead
    ///
    pub const SearchUpdated = searchUpdated;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#searchUpdated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` searchString: []const u8 `
    ///
    pub fn searchUpdated(self: KTreeWidgetSearchLine, searchString: []const u8) void {
        const searchString_str = qtc.libqt_string{
            .len = searchString.len,
            .data = searchString.ptr,
        };
        qtc.KTreeWidgetSearchLine_SearchUpdated(@ptrCast(self.ptr), searchString_str);
    }

    /// ### DEPRECATED: Use `onSearchUpdated` instead
    ///
    pub const OnSearchUpdated = onSearchUpdated;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#searchUpdated)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, searchString: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSearchUpdated(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_Connect_SearchUpdated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `caseSensitivityChanged` instead
    ///
    pub const CaseSensitivityChanged = caseSensitivityChanged;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#caseSensitivityChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _caseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn caseSensitivityChanged(self: KTreeWidgetSearchLine, _caseSensitivity: i32) void {
        qtc.KTreeWidgetSearchLine_CaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(_caseSensitivity));
    }

    /// ### DEPRECATED: Use `onCaseSensitivityChanged` instead
    ///
    pub const OnCaseSensitivityChanged = onCaseSensitivityChanged;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#caseSensitivityChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, caseSensitivity: qnamespace_enums.CaseSensitivity) callconv(.c) void `
    ///
    pub fn onCaseSensitivityChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_Connect_CaseSensitivityChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keepParentsVisibleChanged` instead
    ///
    pub const KeepParentsVisibleChanged = keepParentsVisibleChanged;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#keepParentsVisibleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _keepParentsVisible: bool `
    ///
    pub fn keepParentsVisibleChanged(self: KTreeWidgetSearchLine, _keepParentsVisible: bool) void {
        qtc.KTreeWidgetSearchLine_KeepParentsVisibleChanged(@ptrCast(self.ptr), _keepParentsVisible);
    }

    /// ### DEPRECATED: Use `onKeepParentsVisibleChanged` instead
    ///
    pub const OnKeepParentsVisibleChanged = onKeepParentsVisibleChanged;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#keepParentsVisibleChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KTreeWidgetSearchLine, keepParentsVisible: bool) callconv(.c) void `
    ///
    pub fn onKeepParentsVisibleChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, bool) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_Connect_KeepParentsVisibleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `addTreeWidget` instead
    ///
    pub const AddTreeWidget = addTreeWidget;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#addTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _treeWidget: QTreeWidget `
    ///
    pub fn addTreeWidget(self: KTreeWidgetSearchLine, _treeWidget: anytype) void {
        comptime _ = @TypeOf(_treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_AddTreeWidget(@ptrCast(self.ptr), @ptrCast(_treeWidget.ptr));
    }

    /// ### DEPRECATED: Use `removeTreeWidget` instead
    ///
    pub const RemoveTreeWidget = removeTreeWidget;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#removeTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _treeWidget: QTreeWidget `
    ///
    pub fn removeTreeWidget(self: KTreeWidgetSearchLine, _treeWidget: anytype) void {
        comptime _ = @TypeOf(_treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_RemoveTreeWidget(@ptrCast(self.ptr), @ptrCast(_treeWidget.ptr));
    }

    /// ### DEPRECATED: Use `updateSearch` instead
    ///
    pub const UpdateSearch = updateSearch;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` pattern: []const u8 `
    ///
    pub fn updateSearch(self: KTreeWidgetSearchLine, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.KTreeWidgetSearchLine_UpdateSearch(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `onUpdateSearch` instead
    ///
    pub const OnUpdateSearch = onUpdateSearch;

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
    pub fn onUpdateSearch(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnUpdateSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateSearch` instead
    ///
    pub const SuperUpdateSearch = superUpdateSearch;

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
    pub fn superUpdateSearch(self: KTreeWidgetSearchLine, pattern: []const u8) void {
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        qtc.KTreeWidgetSearchLine_SuperUpdateSearch(@ptrCast(self.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `setCaseSensitivity` instead
    ///
    pub const SetCaseSensitivity = setCaseSensitivity;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _caseSensitivity: qnamespace_enums.CaseSensitivity `
    ///
    pub fn setCaseSensitivity(self: KTreeWidgetSearchLine, _caseSensitivity: i32) void {
        qtc.KTreeWidgetSearchLine_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(_caseSensitivity));
    }

    /// ### DEPRECATED: Use `setKeepParentsVisible` instead
    ///
    pub const SetKeepParentsVisible = setKeepParentsVisible;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setKeepParentsVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` value: bool `
    ///
    pub fn setKeepParentsVisible(self: KTreeWidgetSearchLine, value: bool) void {
        qtc.KTreeWidgetSearchLine_SetKeepParentsVisible(@ptrCast(self.ptr), value);
    }

    /// ### DEPRECATED: Use `setSearchColumns` instead
    ///
    pub const SetSearchColumns = setSearchColumns;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setSearchColumns)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` columns: []i32 `
    ///
    pub fn setSearchColumns(self: KTreeWidgetSearchLine, columns: []i32) void {
        const columns_list = qtc.libqt_list{
            .len = columns.len,
            .data = columns.ptr,
        };
        qtc.KTreeWidgetSearchLine_SetSearchColumns(@ptrCast(self.ptr), columns_list);
    }

    /// ### DEPRECATED: Use `setTreeWidget` instead
    ///
    pub const SetTreeWidget = setTreeWidget;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _treeWidget: QTreeWidget `
    ///
    pub fn setTreeWidget(self: KTreeWidgetSearchLine, _treeWidget: anytype) void {
        comptime _ = @TypeOf(_treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_SetTreeWidget(@ptrCast(self.ptr), @ptrCast(_treeWidget.ptr));
    }

    /// ### DEPRECATED: Use `setTreeWidgets` instead
    ///
    pub const SetTreeWidgets = setTreeWidgets;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#setTreeWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _treeWidgets: []QTreeWidget `
    ///
    pub fn setTreeWidgets(self: KTreeWidgetSearchLine, _treeWidgets: []QTreeWidget) void {
        const treeWidgets_list = qtc.libqt_list{
            .len = _treeWidgets.len,
            .data = @ptrCast(_treeWidgets.ptr),
        };
        qtc.KTreeWidgetSearchLine_SetTreeWidgets(@ptrCast(self.ptr), treeWidgets_list);
    }

    /// ### DEPRECATED: Use `itemMatches` instead
    ///
    pub const ItemMatches = itemMatches;

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
    pub fn itemMatches(self: KTreeWidgetSearchLine, item: anytype, pattern: []const u8) bool {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return qtc.KTreeWidgetSearchLine_ItemMatches(@ptrCast(self.ptr), @ptrCast(item.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `onItemMatches` instead
    ///
    pub const OnItemMatches = onItemMatches;

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
    pub fn onItemMatches(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidgetItem, [*:0]const u8) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnItemMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superItemMatches` instead
    ///
    pub const SuperItemMatches = superItemMatches;

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
    pub fn superItemMatches(self: KTreeWidgetSearchLine, item: anytype, pattern: []const u8) bool {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        const pattern_str = qtc.libqt_string{
            .len = pattern.len,
            .data = pattern.ptr,
        };
        return qtc.KTreeWidgetSearchLine_SuperItemMatches(@ptrCast(self.ptr), @ptrCast(item.ptr), pattern_str);
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KTreeWidgetSearchLine_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

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
    pub fn onContextMenuEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QContextMenuEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

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
    pub fn superContextMenuEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KTreeWidgetSearchLine_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `updateSearch2` instead
    ///
    pub const UpdateSearch2 = updateSearch2;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _treeWidget: QTreeWidget `
    ///
    pub fn updateSearch2(self: KTreeWidgetSearchLine, _treeWidget: anytype) void {
        comptime _ = @TypeOf(_treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_UpdateSearch2(@ptrCast(self.ptr), @ptrCast(_treeWidget.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateSearch2` instead
    ///
    pub const OnUpdateSearch2 = onUpdateSearch2;

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
    pub fn onUpdateSearch2(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidget) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnUpdateSearch2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateSearch2` instead
    ///
    pub const SuperUpdateSearch2 = superUpdateSearch2;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#updateSearch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _treeWidget: QTreeWidget `
    ///
    pub fn superUpdateSearch2(self: KTreeWidgetSearchLine, _treeWidget: anytype) void {
        comptime _ = @TypeOf(_treeWidget)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_SuperUpdateSearch2(@ptrCast(self.ptr), @ptrCast(_treeWidget.ptr));
    }

    /// ### DEPRECATED: Use `connectTreeWidget` instead
    ///
    pub const ConnectTreeWidget = connectTreeWidget;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#connectTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QTreeWidget `
    ///
    pub fn connectTreeWidget(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_ConnectTreeWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onConnectTreeWidget` instead
    ///
    pub const OnConnectTreeWidget = onConnectTreeWidget;

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
    pub fn onConnectTreeWidget(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidget) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnConnectTreeWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superConnectTreeWidget` instead
    ///
    pub const SuperConnectTreeWidget = superConnectTreeWidget;

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
    pub fn superConnectTreeWidget(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_SuperConnectTreeWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `disconnectTreeWidget` instead
    ///
    pub const DisconnectTreeWidget = disconnectTreeWidget;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#disconnectTreeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` param1: QTreeWidget `
    ///
    pub fn disconnectTreeWidget(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_DisconnectTreeWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectTreeWidget` instead
    ///
    pub const OnDisconnectTreeWidget = onDisconnectTreeWidget;

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
    pub fn onDisconnectTreeWidget(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTreeWidget) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDisconnectTreeWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDisconnectTreeWidget` instead
    ///
    pub const SuperDisconnectTreeWidget = superDisconnectTreeWidget;

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
    pub fn superDisconnectTreeWidget(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTreeWidget;
        qtc.KTreeWidgetSearchLine_SuperDisconnectTreeWidget(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `canChooseColumnsCheck` instead
    ///
    pub const CanChooseColumnsCheck = canChooseColumnsCheck;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#canChooseColumnsCheck)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn canChooseColumnsCheck(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_CanChooseColumnsCheck(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCanChooseColumnsCheck` instead
    ///
    pub const OnCanChooseColumnsCheck = onCanChooseColumnsCheck;

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
    pub fn onCanChooseColumnsCheck(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnCanChooseColumnsCheck(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanChooseColumnsCheck` instead
    ///
    pub const SuperCanChooseColumnsCheck = superCanChooseColumnsCheck;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#canChooseColumnsCheck)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn superCanChooseColumnsCheck(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_SuperCanChooseColumnsCheck(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: KTreeWidgetSearchLine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTreeWidgetSearchLine_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEvent) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: KTreeWidgetSearchLine, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTreeWidgetSearchLine_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `tr2` instead
    ///
    pub const Tr2 = tr2;

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
    pub fn tr2(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `tr3` instead
    ///
    pub const Tr3 = tr3;

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
    pub fn tr3(allocator: std.mem.Allocator, s: [:0]const u8, c: [:0]const u8, n: i32) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

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
    pub fn text(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `displayText` instead
    ///
    pub const DisplayText = displayText;

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
    pub fn displayText(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_DisplayText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.displayText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `placeholderText` instead
    ///
    pub const PlaceholderText = placeholderText;

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
    pub fn placeholderText(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.placeholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setPlaceholderText` instead
    ///
    pub const SetPlaceholderText = setPlaceholderText;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _placeholderText: []const u8 `
    ///
    pub fn setPlaceholderText(self: KTreeWidgetSearchLine, _placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = _placeholderText.len,
            .data = _placeholderText.ptr,
        };
        qtc.QLineEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// ### DEPRECATED: Use `maxLength` instead
    ///
    pub const MaxLength = maxLength;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn maxLength(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_MaxLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMaxLength` instead
    ///
    pub const SetMaxLength = setMaxLength;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _maxLength: i32 `
    ///
    pub fn setMaxLength(self: KTreeWidgetSearchLine, _maxLength: i32) void {
        qtc.QLineEdit_SetMaxLength(@ptrCast(self.ptr), @bitCast(_maxLength));
    }

    /// ### DEPRECATED: Use `setFrame` instead
    ///
    pub const SetFrame = setFrame;

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
    pub fn setFrame(self: KTreeWidgetSearchLine, frame: bool) void {
        qtc.QLineEdit_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// ### DEPRECATED: Use `hasFrame` instead
    ///
    pub const HasFrame = hasFrame;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn hasFrame(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_HasFrame(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setClearButtonEnabled` instead
    ///
    pub const SetClearButtonEnabled = setClearButtonEnabled;

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
    pub fn setClearButtonEnabled(self: KTreeWidgetSearchLine, enable: bool) void {
        qtc.QLineEdit_SetClearButtonEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isClearButtonEnabled` instead
    ///
    pub const IsClearButtonEnabled = isClearButtonEnabled;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isClearButtonEnabled(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsClearButtonEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `echoMode` instead
    ///
    pub const EchoMode = echoMode;

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
    pub fn echoMode(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_EchoMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEchoMode` instead
    ///
    pub const SetEchoMode = setEchoMode;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _echoMode: qlineedit_enums.EchoMode `
    ///
    pub fn setEchoMode(self: KTreeWidgetSearchLine, _echoMode: i32) void {
        qtc.QLineEdit_SetEchoMode(@ptrCast(self.ptr), @bitCast(_echoMode));
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isReadOnly(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

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
    pub fn setReadOnly(self: KTreeWidgetSearchLine, readOnly: bool) void {
        qtc.QLineEdit_SetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// ### DEPRECATED: Use `setValidator` instead
    ///
    pub const SetValidator = setValidator;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _validator: QValidator `
    ///
    pub fn setValidator(self: KTreeWidgetSearchLine, _validator: anytype) void {
        comptime _ = @TypeOf(_validator)._is_QValidator;
        qtc.QLineEdit_SetValidator(@ptrCast(self.ptr), @ptrCast(_validator.ptr));
    }

    /// ### DEPRECATED: Use `validator` instead
    ///
    pub const Validator = validator;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#validator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn validator(self: KTreeWidgetSearchLine) QValidator {
        return .{ .ptr = qtc.QLineEdit_Validator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCompleter` instead
    ///
    pub const SetCompleter = setCompleter;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _completer: QCompleter `
    ///
    pub fn setCompleter(self: KTreeWidgetSearchLine, _completer: anytype) void {
        comptime _ = @TypeOf(_completer)._is_QCompleter;
        qtc.QLineEdit_SetCompleter(@ptrCast(self.ptr), @ptrCast(_completer.ptr));
    }

    /// ### DEPRECATED: Use `completer` instead
    ///
    pub const Completer = completer;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#completer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn completer(self: KTreeWidgetSearchLine) QCompleter {
        return .{ .ptr = qtc.QLineEdit_Completer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorPosition` instead
    ///
    pub const CursorPosition = cursorPosition;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn cursorPosition(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_CursorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _cursorPosition: i32 `
    ///
    pub fn setCursorPosition(self: KTreeWidgetSearchLine, _cursorPosition: i32) void {
        qtc.QLineEdit_SetCursorPosition(@ptrCast(self.ptr), @bitCast(_cursorPosition));
    }

    /// ### DEPRECATED: Use `cursorPositionAt` instead
    ///
    pub const CursorPositionAt = cursorPositionAt;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn cursorPositionAt(self: KTreeWidgetSearchLine, _pos: anytype) i32 {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        return qtc.QLineEdit_CursorPositionAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

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
    pub fn setAlignment(self: KTreeWidgetSearchLine, flag: i32) void {
        qtc.QLineEdit_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

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
    pub fn alignment(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cursorForward` instead
    ///
    pub const CursorForward = cursorForward;

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
    pub fn cursorForward(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorForward(@ptrCast(self.ptr), mark);
    }

    /// ### DEPRECATED: Use `cursorBackward` instead
    ///
    pub const CursorBackward = cursorBackward;

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
    pub fn cursorBackward(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorBackward(@ptrCast(self.ptr), mark);
    }

    /// ### DEPRECATED: Use `cursorWordForward` instead
    ///
    pub const CursorWordForward = cursorWordForward;

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
    pub fn cursorWordForward(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorWordForward(@ptrCast(self.ptr), mark);
    }

    /// ### DEPRECATED: Use `cursorWordBackward` instead
    ///
    pub const CursorWordBackward = cursorWordBackward;

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
    pub fn cursorWordBackward(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorWordBackward(@ptrCast(self.ptr), mark);
    }

    /// ### DEPRECATED: Use `backspace` instead
    ///
    pub const Backspace = backspace;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#backspace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn backspace(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Backspace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `del` instead
    ///
    pub const Del = del;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#del)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn del(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Del(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `home` instead
    ///
    pub const Home = home;

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
    pub fn home(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_Home(@ptrCast(self.ptr), mark);
    }

    /// ### DEPRECATED: Use `end` instead
    ///
    pub const End = end;

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
    pub fn end(self: KTreeWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_End(@ptrCast(self.ptr), mark);
    }

    /// ### DEPRECATED: Use `isModified` instead
    ///
    pub const IsModified = isModified;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isModified(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModified` instead
    ///
    pub const SetModified = setModified;

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
    pub fn setModified(self: KTreeWidgetSearchLine, modified: bool) void {
        qtc.QLineEdit_SetModified(@ptrCast(self.ptr), modified);
    }

    /// ### DEPRECATED: Use `setSelection` instead
    ///
    pub const SetSelection = setSelection;

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
    pub fn setSelection(self: KTreeWidgetSearchLine, param1: i32, param2: i32) void {
        qtc.QLineEdit_SetSelection(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `hasSelectedText` instead
    ///
    pub const HasSelectedText = hasSelectedText;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn hasSelectedText(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_HasSelectedText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectedText` instead
    ///
    pub const SelectedText = selectedText;

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
    pub fn selectedText(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.selectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `selectionStart` instead
    ///
    pub const SelectionStart = selectionStart;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn selectionStart(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_SelectionStart(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectionEnd` instead
    ///
    pub const SelectionEnd = selectionEnd;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn selectionEnd(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_SelectionEnd(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectionLength` instead
    ///
    pub const SelectionLength = selectionLength;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn selectionLength(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_SelectionLength(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndoAvailable` instead
    ///
    pub const IsUndoAvailable = isUndoAvailable;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isUndoAvailable(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRedoAvailable` instead
    ///
    pub const IsRedoAvailable = isRedoAvailable;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isRedoAvailable(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_IsRedoAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDragEnabled` instead
    ///
    pub const SetDragEnabled = setDragEnabled;

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
    pub fn setDragEnabled(self: KTreeWidgetSearchLine, b: bool) void {
        qtc.QLineEdit_SetDragEnabled(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `dragEnabled` instead
    ///
    pub const DragEnabled = dragEnabled;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn dragEnabled(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_DragEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorMoveStyle` instead
    ///
    pub const SetCursorMoveStyle = setCursorMoveStyle;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _style: qnamespace_enums.CursorMoveStyle `
    ///
    pub fn setCursorMoveStyle(self: KTreeWidgetSearchLine, _style: i32) void {
        qtc.QLineEdit_SetCursorMoveStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `cursorMoveStyle` instead
    ///
    pub const CursorMoveStyle = cursorMoveStyle;

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
    pub fn cursorMoveStyle(self: KTreeWidgetSearchLine) i32 {
        return qtc.QLineEdit_CursorMoveStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inputMask` instead
    ///
    pub const InputMask = inputMask;

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
    pub fn inputMask(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_InputMask(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.inputMask: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setInputMask` instead
    ///
    pub const SetInputMask = setInputMask;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _inputMask: []const u8 `
    ///
    pub fn setInputMask(self: KTreeWidgetSearchLine, _inputMask: []const u8) void {
        const inputMask_str = qtc.libqt_string{
            .len = _inputMask.len,
            .data = _inputMask.ptr,
        };
        qtc.QLineEdit_SetInputMask(@ptrCast(self.ptr), inputMask_str);
    }

    /// ### DEPRECATED: Use `hasAcceptableInput` instead
    ///
    pub const HasAcceptableInput = hasAcceptableInput;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn hasAcceptableInput(self: KTreeWidgetSearchLine) bool {
        return qtc.QLineEdit_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextMargins` instead
    ///
    pub const SetTextMargins = setTextMargins;

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
    pub fn setTextMargins(self: KTreeWidgetSearchLine, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLineEdit_SetTextMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setTextMargins2` instead
    ///
    pub const SetTextMargins2 = setTextMargins2;

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
    pub fn setTextMargins2(self: KTreeWidgetSearchLine, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLineEdit_SetTextMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `textMargins` instead
    ///
    pub const TextMargins = textMargins;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn textMargins(self: KTreeWidgetSearchLine) QMargins {
        return .{ .ptr = qtc.QLineEdit_TextMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addAction` instead
    ///
    pub const AddAction = addAction;

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
    pub fn addAction(self: KTreeWidgetSearchLine, action: anytype, position: i32) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QLineEdit_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `addAction2` instead
    ///
    pub const AddAction2 = addAction2;

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
    pub fn addAction2(self: KTreeWidgetSearchLine, icon: anytype, position: i32) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        return .{ .ptr = qtc.QLineEdit_AddAction2(@ptrCast(self.ptr), @ptrCast(icon.ptr), @bitCast(position)) };
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: KTreeWidgetSearchLine, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QLineEdit_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn clear(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn selectAll(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn undo(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn redo(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Redo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cut` instead
    ///
    pub const Cut = cut;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn cut(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Cut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn copy(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Copy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paste` instead
    ///
    pub const Paste = paste;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn paste(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Paste(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `deselect` instead
    ///
    pub const Deselect = deselect;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#deselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn deselect(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_Deselect(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

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
    pub fn insert(self: KTreeWidgetSearchLine, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_Insert(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `createStandardContextMenu` instead
    ///
    pub const CreateStandardContextMenu = createStandardContextMenu;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn createStandardContextMenu(self: KTreeWidgetSearchLine) QMenu {
        return .{ .ptr = qtc.QLineEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `textChanged` instead
    ///
    pub const TextChanged = textChanged;

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
    pub fn textChanged(self: KTreeWidgetSearchLine, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_TextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onTextChanged` instead
    ///
    pub const OnTextChanged = onTextChanged;

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
    pub fn onTextChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textEdited` instead
    ///
    pub const TextEdited = textEdited;

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
    pub fn textEdited(self: KTreeWidgetSearchLine, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_TextEdited(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onTextEdited` instead
    ///
    pub const OnTextEdited = onTextEdited;

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
    pub fn onTextEdited(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextEdited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorPositionChanged` instead
    ///
    pub const CursorPositionChanged = cursorPositionChanged;

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
    pub fn cursorPositionChanged(self: KTreeWidgetSearchLine, param1: i32, param2: i32) void {
        qtc.QLineEdit_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onCursorPositionChanged` instead
    ///
    pub const OnCursorPositionChanged = onCursorPositionChanged;

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
    pub fn onCursorPositionChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32, i32) callconv(.c) void) void {
        qtc.QLineEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `returnPressed` instead
    ///
    pub const ReturnPressed = returnPressed;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn returnPressed(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_ReturnPressed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReturnPressed` instead
    ///
    pub const OnReturnPressed = onReturnPressed;

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
    pub fn onReturnPressed(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_ReturnPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `editingFinished` instead
    ///
    pub const EditingFinished = editingFinished;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn editingFinished(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_EditingFinished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEditingFinished` instead
    ///
    pub const OnEditingFinished = onEditingFinished;

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
    pub fn onEditingFinished(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn selectionChanged(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

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
    pub fn onSelectionChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputRejected` instead
    ///
    pub const InputRejected = inputRejected;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn inputRejected(self: KTreeWidgetSearchLine) void {
        qtc.QLineEdit_InputRejected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onInputRejected` instead
    ///
    pub const OnInputRejected = onInputRejected;

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
    pub fn onInputRejected(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_InputRejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery2` instead
    ///
    pub const InputMethodQuery2 = inputMethodQuery2;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _property: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn inputMethodQuery2(self: KTreeWidgetSearchLine, _property: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QLineEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(_property), @ptrCast(argument.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorForward2` instead
    ///
    pub const CursorForward2 = cursorForward2;

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
    pub fn cursorForward2(self: KTreeWidgetSearchLine, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorForward2(@ptrCast(self.ptr), mark, @bitCast(steps));
    }

    /// ### DEPRECATED: Use `cursorBackward2` instead
    ///
    pub const CursorBackward2 = cursorBackward2;

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
    pub fn cursorBackward2(self: KTreeWidgetSearchLine, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorBackward2(@ptrCast(self.ptr), mark, @bitCast(steps));
    }

    /// ### DEPRECATED: Use `winId` instead
    ///
    pub const WinId = winId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn winId(self: KTreeWidgetSearchLine) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createWinId` instead
    ///
    pub const CreateWinId = createWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn createWinId(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `internalWinId` instead
    ///
    pub const InternalWinId = internalWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn internalWinId(self: KTreeWidgetSearchLine) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `effectiveWinId` instead
    ///
    pub const EffectiveWinId = effectiveWinId;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn effectiveWinId(self: KTreeWidgetSearchLine) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `style` instead
    ///
    pub const Style = style;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn style(self: KTreeWidgetSearchLine) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setStyle` instead
    ///
    pub const SetStyle = setStyle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: KTreeWidgetSearchLine, _style: anytype) void {
        comptime _ = @TypeOf(_style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `isTopLevel` instead
    ///
    pub const IsTopLevel = isTopLevel;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isTopLevel(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindow` instead
    ///
    pub const IsWindow = isWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isWindow(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModal` instead
    ///
    pub const IsModal = isModal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isModal(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowModality` instead
    ///
    pub const WindowModality = windowModality;

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
    pub fn windowModality(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowModality` instead
    ///
    pub const SetWindowModality = setWindowModality;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: KTreeWidgetSearchLine, _windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(_windowModality));
    }

    /// ### DEPRECATED: Use `isEnabled` instead
    ///
    pub const IsEnabled = isEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isEnabled(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEnabledTo` instead
    ///
    pub const IsEnabledTo = isEnabledTo;

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
    pub fn isEnabledTo(self: KTreeWidgetSearchLine, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setEnabled` instead
    ///
    pub const SetEnabled = setEnabled;

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
    pub fn setEnabled(self: KTreeWidgetSearchLine, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setDisabled` instead
    ///
    pub const SetDisabled = setDisabled;

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
    pub fn setDisabled(self: KTreeWidgetSearchLine, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// ### DEPRECATED: Use `setWindowModified` instead
    ///
    pub const SetWindowModified = setWindowModified;

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
    pub fn setWindowModified(self: KTreeWidgetSearchLine, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// ### DEPRECATED: Use `frameGeometry` instead
    ///
    pub const FrameGeometry = frameGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn frameGeometry(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `geometry` instead
    ///
    pub const Geometry = geometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn geometry(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `normalGeometry` instead
    ///
    pub const NormalGeometry = normalGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn normalGeometry(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `x` instead
    ///
    pub const X = x;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn x(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `y` instead
    ///
    pub const Y = y;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn y(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `pos` instead
    ///
    pub const Pos = pos;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn pos(self: KTreeWidgetSearchLine) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameSize` instead
    ///
    pub const FrameSize = frameSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn frameSize(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn size(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `width` instead
    ///
    pub const Width = width;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn width(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `height` instead
    ///
    pub const Height = height;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn height(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `rect` instead
    ///
    pub const Rect = rect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn rect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childrenRect` instead
    ///
    pub const ChildrenRect = childrenRect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn childrenRect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `childrenRegion` instead
    ///
    pub const ChildrenRegion = childrenRegion;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn childrenRegion(self: KTreeWidgetSearchLine) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumSize` instead
    ///
    pub const MinimumSize = minimumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn minimumSize(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `maximumSize` instead
    ///
    pub const MaximumSize = maximumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn maximumSize(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `minimumWidth` instead
    ///
    pub const MinimumWidth = minimumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn minimumWidth(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `minimumHeight` instead
    ///
    pub const MinimumHeight = minimumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn minimumHeight(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumWidth` instead
    ///
    pub const MaximumWidth = maximumWidth;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn maximumWidth(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `maximumHeight` instead
    ///
    pub const MaximumHeight = maximumHeight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn maximumHeight(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize` instead
    ///
    pub const SetMinimumSize = setMinimumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: KTreeWidgetSearchLine, _minimumSize: anytype) void {
        comptime _ = @TypeOf(_minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(_minimumSize.ptr));
    }

    /// ### DEPRECATED: Use `setMinimumSize2` instead
    ///
    pub const SetMinimumSize2 = setMinimumSize2;

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
    pub fn setMinimumSize2(self: KTreeWidgetSearchLine, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// ### DEPRECATED: Use `setMaximumSize` instead
    ///
    pub const SetMaximumSize = setMaximumSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: KTreeWidgetSearchLine, _maximumSize: anytype) void {
        comptime _ = @TypeOf(_maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(_maximumSize.ptr));
    }

    /// ### DEPRECATED: Use `setMaximumSize2` instead
    ///
    pub const SetMaximumSize2 = setMaximumSize2;

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
    pub fn setMaximumSize2(self: KTreeWidgetSearchLine, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// ### DEPRECATED: Use `setMinimumWidth` instead
    ///
    pub const SetMinimumWidth = setMinimumWidth;

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
    pub fn setMinimumWidth(self: KTreeWidgetSearchLine, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// ### DEPRECATED: Use `setMinimumHeight` instead
    ///
    pub const SetMinimumHeight = setMinimumHeight;

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
    pub fn setMinimumHeight(self: KTreeWidgetSearchLine, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// ### DEPRECATED: Use `setMaximumWidth` instead
    ///
    pub const SetMaximumWidth = setMaximumWidth;

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
    pub fn setMaximumWidth(self: KTreeWidgetSearchLine, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// ### DEPRECATED: Use `setMaximumHeight` instead
    ///
    pub const SetMaximumHeight = setMaximumHeight;

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
    pub fn setMaximumHeight(self: KTreeWidgetSearchLine, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// ### DEPRECATED: Use `sizeIncrement` instead
    ///
    pub const SizeIncrement = sizeIncrement;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn sizeIncrement(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizeIncrement` instead
    ///
    pub const SetSizeIncrement = setSizeIncrement;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: KTreeWidgetSearchLine, _sizeIncrement: anytype) void {
        comptime _ = @TypeOf(_sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(_sizeIncrement.ptr));
    }

    /// ### DEPRECATED: Use `setSizeIncrement2` instead
    ///
    pub const SetSizeIncrement2 = setSizeIncrement2;

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
    pub fn setSizeIncrement2(self: KTreeWidgetSearchLine, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `baseSize` instead
    ///
    pub const BaseSize = baseSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn baseSize(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBaseSize` instead
    ///
    pub const SetBaseSize = setBaseSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: KTreeWidgetSearchLine, _baseSize: anytype) void {
        comptime _ = @TypeOf(_baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(_baseSize.ptr));
    }

    /// ### DEPRECATED: Use `setBaseSize2` instead
    ///
    pub const SetBaseSize2 = setBaseSize2;

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
    pub fn setBaseSize2(self: KTreeWidgetSearchLine, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// ### DEPRECATED: Use `setFixedSize` instead
    ///
    pub const SetFixedSize = setFixedSize;

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
    pub fn setFixedSize(self: KTreeWidgetSearchLine, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// ### DEPRECATED: Use `setFixedSize2` instead
    ///
    pub const SetFixedSize2 = setFixedSize2;

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
    pub fn setFixedSize2(self: KTreeWidgetSearchLine, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setFixedWidth` instead
    ///
    pub const SetFixedWidth = setFixedWidth;

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
    pub fn setFixedWidth(self: KTreeWidgetSearchLine, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setFixedHeight` instead
    ///
    pub const SetFixedHeight = setFixedHeight;

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
    pub fn setFixedHeight(self: KTreeWidgetSearchLine, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// ### DEPRECATED: Use `mapToGlobal` instead
    ///
    pub const MapToGlobal = mapToGlobal;

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
    pub fn mapToGlobal(self: KTreeWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToGlobal2` instead
    ///
    pub const MapToGlobal2 = mapToGlobal2;

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
    pub fn mapToGlobal2(self: KTreeWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal` instead
    ///
    pub const MapFromGlobal = mapFromGlobal;

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
    pub fn mapFromGlobal(self: KTreeWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromGlobal2` instead
    ///
    pub const MapFromGlobal2 = mapFromGlobal2;

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
    pub fn mapFromGlobal2(self: KTreeWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent` instead
    ///
    pub const MapToParent = mapToParent;

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
    pub fn mapToParent(self: KTreeWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapToParent2` instead
    ///
    pub const MapToParent2 = mapToParent2;

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
    pub fn mapToParent2(self: KTreeWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent` instead
    ///
    pub const MapFromParent = mapFromParent;

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
    pub fn mapFromParent(self: KTreeWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFromParent2` instead
    ///
    pub const MapFromParent2 = mapFromParent2;

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
    pub fn mapFromParent2(self: KTreeWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `mapTo` instead
    ///
    pub const MapTo = mapTo;

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
    pub fn mapTo(self: KTreeWidgetSearchLine, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapTo(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapTo2` instead
    ///
    pub const MapTo2 = mapTo2;

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
    pub fn mapTo2(self: KTreeWidgetSearchLine, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapTo2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFrom` instead
    ///
    pub const MapFrom = mapFrom;

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
    pub fn mapFrom(self: KTreeWidgetSearchLine, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFrom(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `mapFrom2` instead
    ///
    pub const MapFrom2 = mapFrom2;

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
    pub fn mapFrom2(self: KTreeWidgetSearchLine, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFrom2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// ### DEPRECATED: Use `window` instead
    ///
    pub const Window = window;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn window(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nativeParentWidget` instead
    ///
    pub const NativeParentWidget = nativeParentWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn nativeParentWidget(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `topLevelWidget` instead
    ///
    pub const TopLevelWidget = topLevelWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn topLevelWidget(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `palette` instead
    ///
    pub const Palette = palette;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn palette(self: KTreeWidgetSearchLine) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPalette` instead
    ///
    pub const SetPalette = setPalette;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: KTreeWidgetSearchLine, _palette: anytype) void {
        comptime _ = @TypeOf(_palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(_palette.ptr));
    }

    /// ### DEPRECATED: Use `setBackgroundRole` instead
    ///
    pub const SetBackgroundRole = setBackgroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: KTreeWidgetSearchLine, _backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(_backgroundRole));
    }

    /// ### DEPRECATED: Use `backgroundRole` instead
    ///
    pub const BackgroundRole = backgroundRole;

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
    pub fn backgroundRole(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setForegroundRole` instead
    ///
    pub const SetForegroundRole = setForegroundRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: KTreeWidgetSearchLine, _foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(_foregroundRole));
    }

    /// ### DEPRECATED: Use `foregroundRole` instead
    ///
    pub const ForegroundRole = foregroundRole;

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
    pub fn foregroundRole(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn font(self: KTreeWidgetSearchLine) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: KTreeWidgetSearchLine, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `fontMetrics` instead
    ///
    pub const FontMetrics = fontMetrics;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn fontMetrics(self: KTreeWidgetSearchLine) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fontInfo` instead
    ///
    pub const FontInfo = fontInfo;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn fontInfo(self: KTreeWidgetSearchLine) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `cursor` instead
    ///
    pub const Cursor = cursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn cursor(self: KTreeWidgetSearchLine) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCursor` instead
    ///
    pub const SetCursor = setCursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: KTreeWidgetSearchLine, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `unsetCursor` instead
    ///
    pub const UnsetCursor = unsetCursor;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn unsetCursor(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMouseTracking` instead
    ///
    pub const SetMouseTracking = setMouseTracking;

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
    pub fn setMouseTracking(self: KTreeWidgetSearchLine, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasMouseTracking` instead
    ///
    pub const HasMouseTracking = hasMouseTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn hasMouseTracking(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `underMouse` instead
    ///
    pub const UnderMouse = underMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn underMouse(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabletTracking` instead
    ///
    pub const SetTabletTracking = setTabletTracking;

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
    pub fn setTabletTracking(self: KTreeWidgetSearchLine, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasTabletTracking` instead
    ///
    pub const HasTabletTracking = hasTabletTracking;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn hasTabletTracking(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMask` instead
    ///
    pub const SetMask = setMask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: KTreeWidgetSearchLine, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `setMask2` instead
    ///
    pub const SetMask2 = setMask2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: KTreeWidgetSearchLine, _mask: anytype) void {
        comptime _ = @TypeOf(_mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(_mask.ptr));
    }

    /// ### DEPRECATED: Use `mask` instead
    ///
    pub const Mask = mask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn mask(self: KTreeWidgetSearchLine) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `clearMask` instead
    ///
    pub const ClearMask = clearMask;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn clearMask(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `render` instead
    ///
    pub const Render = render;

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
    pub fn render(self: KTreeWidgetSearchLine, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// ### DEPRECATED: Use `render2` instead
    ///
    pub const Render2 = render2;

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
    pub fn render2(self: KTreeWidgetSearchLine, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `grab` instead
    ///
    pub const Grab = grab;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn grab(self: KTreeWidgetSearchLine) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `graphicsEffect` instead
    ///
    pub const GraphicsEffect = graphicsEffect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn graphicsEffect(self: KTreeWidgetSearchLine) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setGraphicsEffect` instead
    ///
    pub const SetGraphicsEffect = setGraphicsEffect;

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
    pub fn setGraphicsEffect(self: KTreeWidgetSearchLine, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// ### DEPRECATED: Use `grabGesture` instead
    ///
    pub const GrabGesture = grabGesture;

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
    pub fn grabGesture(self: KTreeWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `ungrabGesture` instead
    ///
    pub const UngrabGesture = ungrabGesture;

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
    pub fn ungrabGesture(self: KTreeWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `setWindowTitle` instead
    ///
    pub const SetWindowTitle = setWindowTitle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: KTreeWidgetSearchLine, _windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = _windowTitle.len,
            .data = _windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self.ptr), windowTitle_str);
    }

    /// ### DEPRECATED: Use `setStyleSheet` instead
    ///
    pub const SetStyleSheet = setStyleSheet;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: KTreeWidgetSearchLine, _styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = _styleSheet.len,
            .data = _styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self.ptr), styleSheet_str);
    }

    /// ### DEPRECATED: Use `styleSheet` instead
    ///
    pub const StyleSheet = styleSheet;

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
    pub fn styleSheet(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.styleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `windowTitle` instead
    ///
    pub const WindowTitle = windowTitle;

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
    pub fn windowTitle(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.windowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowIcon` instead
    ///
    pub const SetWindowIcon = setWindowIcon;

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
    pub fn setWindowIcon(self: KTreeWidgetSearchLine, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `windowIcon` instead
    ///
    pub const WindowIcon = windowIcon;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn windowIcon(self: KTreeWidgetSearchLine) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowIconText` instead
    ///
    pub const SetWindowIconText = setWindowIconText;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: KTreeWidgetSearchLine, _windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = _windowIconText.len,
            .data = _windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self.ptr), windowIconText_str);
    }

    /// ### DEPRECATED: Use `windowIconText` instead
    ///
    pub const WindowIconText = windowIconText;

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
    pub fn windowIconText(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.windowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowRole` instead
    ///
    pub const SetWindowRole = setWindowRole;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: KTreeWidgetSearchLine, _windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = _windowRole.len,
            .data = _windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self.ptr), windowRole_str);
    }

    /// ### DEPRECATED: Use `windowRole` instead
    ///
    pub const WindowRole = windowRole;

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
    pub fn windowRole(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.windowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowFilePath` instead
    ///
    pub const SetWindowFilePath = setWindowFilePath;

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
    pub fn setWindowFilePath(self: KTreeWidgetSearchLine, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self.ptr), filePath_str);
    }

    /// ### DEPRECATED: Use `windowFilePath` instead
    ///
    pub const WindowFilePath = windowFilePath;

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
    pub fn windowFilePath(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.windowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWindowOpacity` instead
    ///
    pub const SetWindowOpacity = setWindowOpacity;

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
    pub fn setWindowOpacity(self: KTreeWidgetSearchLine, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### DEPRECATED: Use `windowOpacity` instead
    ///
    pub const WindowOpacity = windowOpacity;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn windowOpacity(self: KTreeWidgetSearchLine) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowModified` instead
    ///
    pub const IsWindowModified = isWindowModified;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isWindowModified(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: KTreeWidgetSearchLine, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

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
    pub fn toolTip(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTipDuration` instead
    ///
    pub const SetToolTipDuration = setToolTipDuration;

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
    pub fn setToolTipDuration(self: KTreeWidgetSearchLine, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// ### DEPRECATED: Use `toolTipDuration` instead
    ///
    pub const ToolTipDuration = toolTipDuration;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn toolTipDuration(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: KTreeWidgetSearchLine, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

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
    pub fn statusTip(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: KTreeWidgetSearchLine, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

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
    pub fn whatsThis(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `accessibleName` instead
    ///
    pub const AccessibleName = accessibleName;

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
    pub fn accessibleName(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.accessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleName` instead
    ///
    pub const SetAccessibleName = setAccessibleName;

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
    pub fn setAccessibleName(self: KTreeWidgetSearchLine, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `accessibleDescription` instead
    ///
    pub const AccessibleDescription = accessibleDescription;

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
    pub fn accessibleDescription(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.accessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setAccessibleDescription` instead
    ///
    pub const SetAccessibleDescription = setAccessibleDescription;

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
    pub fn setAccessibleDescription(self: KTreeWidgetSearchLine, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `setLayoutDirection` instead
    ///
    pub const SetLayoutDirection = setLayoutDirection;

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
    pub fn setLayoutDirection(self: KTreeWidgetSearchLine, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### DEPRECATED: Use `layoutDirection` instead
    ///
    pub const LayoutDirection = layoutDirection;

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
    pub fn layoutDirection(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unsetLayoutDirection` instead
    ///
    pub const UnsetLayoutDirection = unsetLayoutDirection;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn unsetLayoutDirection(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLocale` instead
    ///
    pub const SetLocale = setLocale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: KTreeWidgetSearchLine, _locale: anytype) void {
        comptime _ = @TypeOf(_locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(_locale.ptr));
    }

    /// ### DEPRECATED: Use `locale` instead
    ///
    pub const Locale = locale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn locale(self: KTreeWidgetSearchLine) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `unsetLocale` instead
    ///
    pub const UnsetLocale = unsetLocale;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn unsetLocale(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRightToLeft` instead
    ///
    pub const IsRightToLeft = isRightToLeft;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isRightToLeft(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isLeftToRight` instead
    ///
    pub const IsLeftToRight = isLeftToRight;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isLeftToRight(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus` instead
    ///
    pub const SetFocus = setFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn setFocus(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isActiveWindow` instead
    ///
    pub const IsActiveWindow = isActiveWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isActiveWindow(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `activateWindow` instead
    ///
    pub const ActivateWindow = activateWindow;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn activateWindow(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearFocus` instead
    ///
    pub const ClearFocus = clearFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn clearFocus(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocus2` instead
    ///
    pub const SetFocus2 = setFocus2;

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
    pub fn setFocus2(self: KTreeWidgetSearchLine, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// ### DEPRECATED: Use `focusPolicy` instead
    ///
    pub const FocusPolicy = focusPolicy;

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
    pub fn focusPolicy(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFocusPolicy` instead
    ///
    pub const SetFocusPolicy = setFocusPolicy;

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
    pub fn setFocusPolicy(self: KTreeWidgetSearchLine, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `hasFocus` instead
    ///
    pub const HasFocus = hasFocus;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn hasFocus(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabOrder` instead
    ///
    pub const SetTabOrder = setTabOrder;

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
    pub fn setTabOrder(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.QWidget_SetTabOrder(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `setFocusProxy` instead
    ///
    pub const SetFocusProxy = setFocusProxy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: KTreeWidgetSearchLine, _focusProxy: anytype) void {
        comptime _ = @TypeOf(_focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(_focusProxy.ptr));
    }

    /// ### DEPRECATED: Use `focusProxy` instead
    ///
    pub const FocusProxy = focusProxy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn focusProxy(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contextMenuPolicy` instead
    ///
    pub const ContextMenuPolicy = contextMenuPolicy;

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
    pub fn contextMenuPolicy(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setContextMenuPolicy` instead
    ///
    pub const SetContextMenuPolicy = setContextMenuPolicy;

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
    pub fn setContextMenuPolicy(self: KTreeWidgetSearchLine, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `grabMouse` instead
    ///
    pub const GrabMouse = grabMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn grabMouse(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabMouse2` instead
    ///
    pub const GrabMouse2 = grabMouse2;

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
    pub fn grabMouse2(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `releaseMouse` instead
    ///
    pub const ReleaseMouse = releaseMouse;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn releaseMouse(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabKeyboard` instead
    ///
    pub const GrabKeyboard = grabKeyboard;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn grabKeyboard(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `releaseKeyboard` instead
    ///
    pub const ReleaseKeyboard = releaseKeyboard;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn releaseKeyboard(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `grabShortcut` instead
    ///
    pub const GrabShortcut = grabShortcut;

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
    pub fn grabShortcut(self: KTreeWidgetSearchLine, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// ### DEPRECATED: Use `releaseShortcut` instead
    ///
    pub const ReleaseShortcut = releaseShortcut;

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
    pub fn releaseShortcut(self: KTreeWidgetSearchLine, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled` instead
    ///
    pub const SetShortcutEnabled = setShortcutEnabled;

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
    pub fn setShortcutEnabled(self: KTreeWidgetSearchLine, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat` instead
    ///
    pub const SetShortcutAutoRepeat = setShortcutAutoRepeat;

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
    pub fn setShortcutAutoRepeat(self: KTreeWidgetSearchLine, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `mouseGrabber` instead
    ///
    pub const MouseGrabber = mouseGrabber;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn mouseGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_MouseGrabber() };
    }

    /// ### DEPRECATED: Use `keyboardGrabber` instead
    ///
    pub const KeyboardGrabber = keyboardGrabber;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn keyboardGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_KeyboardGrabber() };
    }

    /// ### DEPRECATED: Use `updatesEnabled` instead
    ///
    pub const UpdatesEnabled = updatesEnabled;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn updatesEnabled(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUpdatesEnabled` instead
    ///
    pub const SetUpdatesEnabled = setUpdatesEnabled;

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
    pub fn setUpdatesEnabled(self: KTreeWidgetSearchLine, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `graphicsProxyWidget` instead
    ///
    pub const GraphicsProxyWidget = graphicsProxyWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn graphicsProxyWidget(self: KTreeWidgetSearchLine) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn update(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `repaint` instead
    ///
    pub const Repaint = repaint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn repaint(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update2` instead
    ///
    pub const Update2 = update2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: KTreeWidgetSearchLine, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `update3` instead
    ///
    pub const Update3 = update3;

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
    pub fn update3(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `update4` instead
    ///
    pub const Update4 = update4;

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
    pub fn update4(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `repaint2` instead
    ///
    pub const Repaint2 = repaint2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: KTreeWidgetSearchLine, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `repaint3` instead
    ///
    pub const Repaint3 = repaint3;

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
    pub fn repaint3(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `repaint4` instead
    ///
    pub const Repaint4 = repaint4;

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
    pub fn repaint4(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setHidden` instead
    ///
    pub const SetHidden = setHidden;

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
    pub fn setHidden(self: KTreeWidgetSearchLine, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// ### DEPRECATED: Use `show` instead
    ///
    pub const Show = show;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn show(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hide` instead
    ///
    pub const Hide = hide;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn hide(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMinimized` instead
    ///
    pub const ShowMinimized = showMinimized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn showMinimized(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showMaximized` instead
    ///
    pub const ShowMaximized = showMaximized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn showMaximized(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showFullScreen` instead
    ///
    pub const ShowFullScreen = showFullScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn showFullScreen(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `showNormal` instead
    ///
    pub const ShowNormal = showNormal;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn showNormal(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `close` instead
    ///
    pub const Close = close;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn close(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `raise` instead
    ///
    pub const Raise = raise;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn raise(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lower` instead
    ///
    pub const Lower = lower;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn lower(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `stackUnder` instead
    ///
    pub const StackUnder = stackUnder;

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
    pub fn stackUnder(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `move` instead
    ///
    pub const Move = move;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: KTreeWidgetSearchLine, _x: i32, _y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `move2` instead
    ///
    pub const Move2 = move2;

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
    pub fn move2(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `resize` instead
    ///
    pub const Resize = resize;

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
    pub fn resize(self: KTreeWidgetSearchLine, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `resize2` instead
    ///
    pub const Resize2 = resize2;

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
    pub fn resize2(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `setGeometry` instead
    ///
    pub const SetGeometry = setGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: KTreeWidgetSearchLine, _x: i32, _y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y), @bitCast(w), @bitCast(h));
    }

    /// ### DEPRECATED: Use `setGeometry2` instead
    ///
    pub const SetGeometry2 = setGeometry2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: KTreeWidgetSearchLine, _geometry: anytype) void {
        comptime _ = @TypeOf(_geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(_geometry.ptr));
    }

    /// ### DEPRECATED: Use `saveGeometry` instead
    ///
    pub const SaveGeometry = saveGeometry;

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
    pub fn saveGeometry(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("KTreeWidgetSearchLine.saveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `restoreGeometry` instead
    ///
    pub const RestoreGeometry = restoreGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: KTreeWidgetSearchLine, _geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = _geometry.len,
            .data = _geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self.ptr), geometry_str);
    }

    /// ### DEPRECATED: Use `adjustSize` instead
    ///
    pub const AdjustSize = adjustSize;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn adjustSize(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisible` instead
    ///
    pub const IsVisible = isVisible;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isVisible(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isVisibleTo` instead
    ///
    pub const IsVisibleTo = isVisibleTo;

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
    pub fn isVisibleTo(self: KTreeWidgetSearchLine, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isHidden(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMinimized` instead
    ///
    pub const IsMinimized = isMinimized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isMinimized(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMaximized` instead
    ///
    pub const IsMaximized = isMaximized;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isMaximized(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isFullScreen` instead
    ///
    pub const IsFullScreen = isFullScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isFullScreen(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `windowState` instead
    ///
    pub const WindowState = windowState;

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
    pub fn windowState(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowState` instead
    ///
    pub const SetWindowState = setWindowState;

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
    pub fn setWindowState(self: KTreeWidgetSearchLine, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `overrideWindowState` instead
    ///
    pub const OverrideWindowState = overrideWindowState;

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
    pub fn overrideWindowState(self: KTreeWidgetSearchLine, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `sizePolicy` instead
    ///
    pub const SizePolicy = sizePolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn sizePolicy(self: KTreeWidgetSearchLine) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizePolicy` instead
    ///
    pub const SetSizePolicy = setSizePolicy;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: KTreeWidgetSearchLine, _sizePolicy: anytype) void {
        comptime _ = @TypeOf(_sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(_sizePolicy.ptr));
    }

    /// ### DEPRECATED: Use `setSizePolicy2` instead
    ///
    pub const SetSizePolicy2 = setSizePolicy2;

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
    pub fn setSizePolicy2(self: KTreeWidgetSearchLine, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// ### DEPRECATED: Use `visibleRegion` instead
    ///
    pub const VisibleRegion = visibleRegion;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn visibleRegion(self: KTreeWidgetSearchLine) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setContentsMargins` instead
    ///
    pub const SetContentsMargins = setContentsMargins;

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
    pub fn setContentsMargins(self: KTreeWidgetSearchLine, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `setContentsMargins2` instead
    ///
    pub const SetContentsMargins2 = setContentsMargins2;

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
    pub fn setContentsMargins2(self: KTreeWidgetSearchLine, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// ### DEPRECATED: Use `contentsMargins` instead
    ///
    pub const ContentsMargins = contentsMargins;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn contentsMargins(self: KTreeWidgetSearchLine) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentsRect` instead
    ///
    pub const ContentsRect = contentsRect;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn contentsRect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `layout` instead
    ///
    pub const Layout = layout;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn layout(self: KTreeWidgetSearchLine) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setLayout` instead
    ///
    pub const SetLayout = setLayout;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: KTreeWidgetSearchLine, _layout: anytype) void {
        comptime _ = @TypeOf(_layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(_layout.ptr));
    }

    /// ### DEPRECATED: Use `updateGeometry` instead
    ///
    pub const UpdateGeometry = updateGeometry;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn updateGeometry(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: KTreeWidgetSearchLine, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
    }

    /// ### DEPRECATED: Use `setParent2` instead
    ///
    pub const SetParent2 = setParent2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: KTreeWidgetSearchLine, _parent: anytype, f: i32) void {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(f));
    }

    /// ### DEPRECATED: Use `scroll` instead
    ///
    pub const Scroll = scroll;

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
    pub fn scroll(self: KTreeWidgetSearchLine, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `scroll2` instead
    ///
    pub const Scroll2 = scroll2;

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
    pub fn scroll2(self: KTreeWidgetSearchLine, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// ### DEPRECATED: Use `focusWidget` instead
    ///
    pub const FocusWidget = focusWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn focusWidget(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `nextInFocusChain` instead
    ///
    pub const NextInFocusChain = nextInFocusChain;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn nextInFocusChain(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previousInFocusChain` instead
    ///
    pub const PreviousInFocusChain = previousInFocusChain;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn previousInFocusChain(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `acceptDrops` instead
    ///
    pub const AcceptDrops = acceptDrops;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn acceptDrops(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptDrops` instead
    ///
    pub const SetAcceptDrops = setAcceptDrops;

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
    pub fn setAcceptDrops(self: KTreeWidgetSearchLine, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `addActions` instead
    ///
    pub const AddActions = addActions;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: KTreeWidgetSearchLine, _actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertActions` instead
    ///
    pub const InsertActions = insertActions;

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
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: KTreeWidgetSearchLine, before: anytype, _actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = _actions.len,
            .data = @ptrCast(_actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

    /// ### DEPRECATED: Use `insertAction` instead
    ///
    pub const InsertAction = insertAction;

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
    pub fn insertAction(self: KTreeWidgetSearchLine, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `removeAction` instead
    ///
    pub const RemoveAction = removeAction;

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
    pub fn removeAction(self: KTreeWidgetSearchLine, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// ### DEPRECATED: Use `actions` instead
    ///
    pub const Actions = actions;

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
    pub fn actions(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("KTreeWidgetSearchLine.actions: Memory allocation failed");
        const _data_val: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `addAction3` instead
    ///
    pub const AddAction3 = addAction3;

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
    /// ` _text: []const u8 `
    ///
    pub fn addAction3(self: KTreeWidgetSearchLine, icon: anytype, _text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `addAction4` instead
    ///
    pub const AddAction4 = addAction4;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: KTreeWidgetSearchLine, _text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction4(@ptrCast(self.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// ### DEPRECATED: Use `addAction5` instead
    ///
    pub const AddAction5 = addAction5;

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
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: KTreeWidgetSearchLine, icon: anytype, _text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// ### DEPRECATED: Use `parentWidget` instead
    ///
    pub const ParentWidget = parentWidget;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn parentWidget(self: KTreeWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setWindowFlags` instead
    ///
    pub const SetWindowFlags = setWindowFlags;

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
    pub fn setWindowFlags(self: KTreeWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `windowFlags` instead
    ///
    pub const WindowFlags = windowFlags;

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
    pub fn windowFlags(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWindowFlag` instead
    ///
    pub const SetWindowFlag = setWindowFlag;

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
    pub fn setWindowFlag(self: KTreeWidgetSearchLine, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `overrideWindowFlags` instead
    ///
    pub const OverrideWindowFlags = overrideWindowFlags;

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
    pub fn overrideWindowFlags(self: KTreeWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `windowType` instead
    ///
    pub const WindowType = windowType;

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
    pub fn windowType(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    pub fn find(param1: usize) QWidget {
        return .{ .ptr = qtc.QWidget_Find(@bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `childAt` instead
    ///
    pub const ChildAt = childAt;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: KTreeWidgetSearchLine, _x: i32, _y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `childAt2` instead
    ///
    pub const ChildAt2 = childAt2;

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
    pub fn childAt2(self: KTreeWidgetSearchLine, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `childAt3` instead
    ///
    pub const ChildAt3 = childAt3;

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
    pub fn childAt3(self: KTreeWidgetSearchLine, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `setAttribute` instead
    ///
    pub const SetAttribute = setAttribute;

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
    pub fn setAttribute(self: KTreeWidgetSearchLine, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `testAttribute` instead
    ///
    pub const TestAttribute = testAttribute;

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
    pub fn testAttribute(self: KTreeWidgetSearchLine, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `ensurePolished` instead
    ///
    pub const EnsurePolished = ensurePolished;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn ensurePolished(self: KTreeWidgetSearchLine) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isAncestorOf` instead
    ///
    pub const IsAncestorOf = isAncestorOf;

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
    pub fn isAncestorOf(self: KTreeWidgetSearchLine, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `autoFillBackground` instead
    ///
    pub const AutoFillBackground = autoFillBackground;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn autoFillBackground(self: KTreeWidgetSearchLine) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFillBackground` instead
    ///
    pub const SetAutoFillBackground = setAutoFillBackground;

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
    pub fn setAutoFillBackground(self: KTreeWidgetSearchLine, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `backingStore` instead
    ///
    pub const BackingStore = backingStore;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn backingStore(self: KTreeWidgetSearchLine) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `windowHandle` instead
    ///
    pub const WindowHandle = windowHandle;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn windowHandle(self: KTreeWidgetSearchLine) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `screen` instead
    ///
    pub const Screen = screen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn screen(self: KTreeWidgetSearchLine) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setScreen` instead
    ///
    pub const SetScreen = setScreen;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: KTreeWidgetSearchLine, _screen: anytype) void {
        comptime _ = @TypeOf(_screen)._is_QScreen;
        qtc.QWidget_SetScreen(@ptrCast(self.ptr), @ptrCast(_screen.ptr));
    }

    /// ### DEPRECATED: Use `createWindowContainer` instead
    ///
    pub const CreateWindowContainer = createWindowContainer;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    pub fn createWindowContainer(_window: anytype) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer(@ptrCast(_window.ptr)) };
    }

    /// ### DEPRECATED: Use `windowTitleChanged` instead
    ///
    pub const WindowTitleChanged = windowTitleChanged;

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
    pub fn windowTitleChanged(self: KTreeWidgetSearchLine, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `onWindowTitleChanged` instead
    ///
    pub const OnWindowTitleChanged = onWindowTitleChanged;

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
    pub fn onWindowTitleChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowIconChanged` instead
    ///
    pub const WindowIconChanged = windowIconChanged;

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
    pub fn windowIconChanged(self: KTreeWidgetSearchLine, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// ### DEPRECATED: Use `onWindowIconChanged` instead
    ///
    pub const OnWindowIconChanged = onWindowIconChanged;

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
    pub fn onWindowIconChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `windowIconTextChanged` instead
    ///
    pub const WindowIconTextChanged = windowIconTextChanged;

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
    pub fn windowIconTextChanged(self: KTreeWidgetSearchLine, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self.ptr), iconText_str);
    }

    /// ### DEPRECATED: Use `onWindowIconTextChanged` instead
    ///
    pub const OnWindowIconTextChanged = onWindowIconTextChanged;

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
    pub fn onWindowIconTextChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customContextMenuRequested` instead
    ///
    pub const CustomContextMenuRequested = customContextMenuRequested;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: KTreeWidgetSearchLine, _pos: anytype) void {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `onCustomContextMenuRequested` instead
    ///
    pub const OnCustomContextMenuRequested = onCustomContextMenuRequested;

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
    pub fn onCustomContextMenuRequested(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodHints` instead
    ///
    pub const InputMethodHints = inputMethodHints;

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
    pub fn inputMethodHints(self: KTreeWidgetSearchLine) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setInputMethodHints` instead
    ///
    pub const SetInputMethodHints = setInputMethodHints;

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
    pub fn setInputMethodHints(self: KTreeWidgetSearchLine, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// ### DEPRECATED: Use `render22` instead
    ///
    pub const Render22 = render22;

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
    pub fn render22(self: KTreeWidgetSearchLine, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr));
    }

    /// ### DEPRECATED: Use `render3` instead
    ///
    pub const Render3 = render3;

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
    pub fn render3(self: KTreeWidgetSearchLine, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// ### DEPRECATED: Use `render4` instead
    ///
    pub const Render4 = render4;

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
    pub fn render4(self: KTreeWidgetSearchLine, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// ### DEPRECATED: Use `render23` instead
    ///
    pub const Render23 = render23;

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
    pub fn render23(self: KTreeWidgetSearchLine, painter: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render23(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr));
    }

    /// ### DEPRECATED: Use `render32` instead
    ///
    pub const Render32 = render32;

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
    pub fn render32(self: KTreeWidgetSearchLine, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

    /// ### DEPRECATED: Use `render42` instead
    ///
    pub const Render42 = render42;

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
    pub fn render42(self: KTreeWidgetSearchLine, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

    /// ### DEPRECATED: Use `grab1` instead
    ///
    pub const Grab1 = grab1;

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
    pub fn grab1(self: KTreeWidgetSearchLine, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// ### DEPRECATED: Use `grabGesture2` instead
    ///
    pub const GrabGesture2 = grabGesture2;

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
    pub fn grabGesture2(self: KTreeWidgetSearchLine, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `grabShortcut2` instead
    ///
    pub const GrabShortcut2 = grabShortcut2;

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
    pub fn grabShortcut2(self: KTreeWidgetSearchLine, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// ### DEPRECATED: Use `setShortcutEnabled2` instead
    ///
    pub const SetShortcutEnabled2 = setShortcutEnabled2;

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
    pub fn setShortcutEnabled2(self: KTreeWidgetSearchLine, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// ### DEPRECATED: Use `setShortcutAutoRepeat2` instead
    ///
    pub const SetShortcutAutoRepeat2 = setShortcutAutoRepeat2;

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
    pub fn setShortcutAutoRepeat2(self: KTreeWidgetSearchLine, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// ### DEPRECATED: Use `setWindowFlag2` instead
    ///
    pub const SetWindowFlag2 = setWindowFlag2;

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
    pub fn setWindowFlag2(self: KTreeWidgetSearchLine, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `setAttribute2` instead
    ///
    pub const SetAttribute2 = setAttribute2;

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
    pub fn setAttribute2(self: KTreeWidgetSearchLine, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// ### DEPRECATED: Use `createWindowContainer2` instead
    ///
    pub const CreateWindowContainer2 = createWindowContainer2;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn createWindowContainer2(_window: anytype, _parent: anytype) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer2(@ptrCast(_window.ptr), @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `createWindowContainer3` instead
    ///
    pub const CreateWindowContainer3 = createWindowContainer3;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` _window: QWindow `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn createWindowContainer3(_window: anytype, _parent: anytype, flags: i32) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer3(@ptrCast(_window.ptr), @ptrCast(_parent.ptr), @bitCast(flags)) };
    }

    /// ### DEPRECATED: Use `objectName` instead
    ///
    pub const ObjectName = objectName;

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
    pub fn objectName(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KTreeWidgetSearchLine.objectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setObjectName` instead
    ///
    pub const SetObjectName = setObjectName;

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
    pub fn setObjectName(self: KTreeWidgetSearchLine, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `isWidgetType` instead
    ///
    pub const IsWidgetType = isWidgetType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isWidgetType(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWindowType` instead
    ///
    pub const IsWindowType = isWindowType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isWindowType(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isQuickItemType` instead
    ///
    pub const IsQuickItemType = isQuickItemType;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn isQuickItemType(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `signalsBlocked` instead
    ///
    pub const SignalsBlocked = signalsBlocked;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn signalsBlocked(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `blockSignals` instead
    ///
    pub const BlockSignals = blockSignals;

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
    pub fn blockSignals(self: KTreeWidgetSearchLine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `thread` instead
    ///
    pub const Thread = thread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn thread(self: KTreeWidgetSearchLine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `moveToThread` instead
    ///
    pub const MoveToThread = moveToThread;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: KTreeWidgetSearchLine, _thread: anytype) bool {
        comptime _ = @TypeOf(_thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(_thread.ptr));
    }

    /// ### DEPRECATED: Use `startTimer` instead
    ///
    pub const StartTimer = startTimer;

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
    pub fn startTimer(self: KTreeWidgetSearchLine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// ### DEPRECATED: Use `startTimer2` instead
    ///
    pub const StartTimer2 = startTimer2;

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
    pub fn startTimer2(self: KTreeWidgetSearchLine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// ### DEPRECATED: Use `killTimer` instead
    ///
    pub const KillTimer = killTimer;

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
    pub fn killTimer(self: KTreeWidgetSearchLine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `killTimer2` instead
    ///
    pub const KillTimer2 = killTimer2;

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
    pub fn killTimer2(self: KTreeWidgetSearchLine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// ### DEPRECATED: Use `children` instead
    ///
    pub const Children = children;

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
    pub fn children(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("KTreeWidgetSearchLine.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `installEventFilter` instead
    ///
    pub const InstallEventFilter = installEventFilter;

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
    pub fn installEventFilter(self: KTreeWidgetSearchLine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// ### DEPRECATED: Use `removeEventFilter` instead
    ///
    pub const RemoveEventFilter = removeEventFilter;

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
    pub fn removeEventFilter(self: KTreeWidgetSearchLine, obj: anytype) void {
        comptime _ = @TypeOf(obj)._is_QObject;
        qtc.QObject_RemoveEventFilter(@ptrCast(self.ptr), @ptrCast(obj.ptr));
    }

    /// ### DEPRECATED: Use `connect` instead
    ///
    pub const Connect = connect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring) };
    }

    /// ### DEPRECATED: Use `connect2` instead
    ///
    pub const Connect2 = connect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    pub fn connect2(_sender: anytype, signal: anytype, receiver: anytype, method: anytype) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr)) };
    }

    /// ### DEPRECATED: Use `connect3` instead
    ///
    pub const Connect3 = connect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: KTreeWidgetSearchLine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect3(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring) };
    }

    /// ### DEPRECATED: Use `disconnect` instead
    ///
    pub const Disconnect = disconnect;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect2` instead
    ///
    pub const Disconnect2 = disconnect2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: QMetaMethod `
    ///
    pub fn disconnect2(_sender: anytype, signal: anytype, receiver: anytype, member: anytype) bool {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(member)._is_QMetaMethod;
        return qtc.QObject_Disconnect2(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(member.ptr));
    }

    /// ### DEPRECATED: Use `disconnect3` instead
    ///
    pub const Disconnect3 = disconnect3;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn disconnect3(self: KTreeWidgetSearchLine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `disconnect4` instead
    ///
    pub const Disconnect4 = disconnect4;

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
    pub fn disconnect4(self: KTreeWidgetSearchLine, receiver: anytype) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect4(@ptrCast(self.ptr), @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect5` instead
    ///
    pub const Disconnect5 = disconnect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaObject__Connection `
    ///
    pub fn disconnect5(param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QMetaObject__Connection;
        return qtc.QObject_Disconnect5(@ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectTree` instead
    ///
    pub const DumpObjectTree = dumpObjectTree;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn dumpObjectTree(self: KTreeWidgetSearchLine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `dumpObjectInfo` instead
    ///
    pub const DumpObjectInfo = dumpObjectInfo;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn dumpObjectInfo(self: KTreeWidgetSearchLine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setProperty` instead
    ///
    pub const SetProperty = setProperty;

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
    pub fn setProperty(self: KTreeWidgetSearchLine, name: [:0]const u8, value: anytype) bool {
        const name_Cstring = name.ptr;
        comptime _ = @TypeOf(value)._is_QVariant;
        return qtc.QObject_SetProperty(@ptrCast(self.ptr), name_Cstring, @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `property` instead
    ///
    pub const Property = property;

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
    pub fn property(self: KTreeWidgetSearchLine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// ### DEPRECATED: Use `dynamicPropertyNames` instead
    ///
    pub const DynamicPropertyNames = dynamicPropertyNames;

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
    pub fn dynamicPropertyNames(self: KTreeWidgetSearchLine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("KTreeWidgetSearchLine.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KTreeWidgetSearchLine.dynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `bindingStorage` instead
    ///
    pub const BindingStorage = bindingStorage;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn bindingStorage(self: KTreeWidgetSearchLine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `bindingStorage2` instead
    ///
    pub const BindingStorage2 = bindingStorage2;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn bindingStorage2(self: KTreeWidgetSearchLine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `destroyed` instead
    ///
    pub const Destroyed = destroyed;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn destroyed(self: KTreeWidgetSearchLine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed` instead
    ///
    pub const OnDestroyed = onDestroyed;

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
    pub fn onDestroyed(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `parent` instead
    ///
    pub const Parent = parent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn parent(self: KTreeWidgetSearchLine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `inherits` instead
    ///
    pub const Inherits = inherits;

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
    pub fn inherits(self: KTreeWidgetSearchLine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// ### DEPRECATED: Use `deleteLater` instead
    ///
    pub const DeleteLater = deleteLater;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn deleteLater(self: KTreeWidgetSearchLine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `startTimer22` instead
    ///
    pub const StartTimer22 = startTimer22;

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
    pub fn startTimer22(self: KTreeWidgetSearchLine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `startTimer23` instead
    ///
    pub const StartTimer23 = startTimer23;

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
    pub fn startTimer23(self: KTreeWidgetSearchLine, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self.ptr), @bitCast(time), @bitCast(timerType));
    }

    /// ### DEPRECATED: Use `connect5` instead
    ///
    pub const Connect5 = connect5;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn connect5(_sender: anytype, signal: [:0]const u8, receiver: anytype, member: [:0]const u8, param5: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect5(@ptrCast(_sender.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring, @bitCast(param5)) };
    }

    /// ### DEPRECATED: Use `connect52` instead
    ///
    pub const Connect52 = connect52;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: QMetaMethod `
    ///
    /// ` receiver: QObject `
    ///
    /// ` method: QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect52(_sender: anytype, signal: anytype, receiver: anytype, method: anytype, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        comptime _ = @TypeOf(receiver)._is_QObject;
        comptime _ = @TypeOf(method)._is_QMetaMethod;
        return .{ .ptr = qtc.QObject_Connect52(@ptrCast(_sender.ptr), @ptrCast(signal.ptr), @ptrCast(receiver.ptr), @ptrCast(method.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `connect4` instead
    ///
    pub const Connect4 = connect4;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: KTreeWidgetSearchLine, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
        comptime _ = @TypeOf(_sender)._is_QObject;
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return .{ .ptr = qtc.QObject_Connect4(@ptrCast(self.ptr), @ptrCast(_sender.ptr), signal_Cstring, member_Cstring, @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `disconnect1` instead
    ///
    pub const Disconnect1 = disconnect1;

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
    pub fn disconnect1(self: KTreeWidgetSearchLine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect22` instead
    ///
    pub const Disconnect22 = disconnect22;

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
    pub fn disconnect22(self: KTreeWidgetSearchLine, signal: [:0]const u8, receiver: anytype) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        return qtc.QObject_Disconnect22(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr));
    }

    /// ### DEPRECATED: Use `disconnect32` instead
    ///
    pub const Disconnect32 = disconnect32;

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
    pub fn disconnect32(self: KTreeWidgetSearchLine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self.ptr), signal_Cstring, @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `disconnect23` instead
    ///
    pub const Disconnect23 = disconnect23;

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
    pub fn disconnect23(self: KTreeWidgetSearchLine, receiver: anytype, member: [:0]const u8) bool {
        comptime _ = @TypeOf(receiver)._is_QObject;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self.ptr), @ptrCast(receiver.ptr), member_Cstring);
    }

    /// ### DEPRECATED: Use `destroyed1` instead
    ///
    pub const Destroyed1 = destroyed1;

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
    pub fn destroyed1(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDestroyed1` instead
    ///
    pub const OnDestroyed1 = onDestroyed1;

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
    pub fn onDestroyed1(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintingActive` instead
    ///
    pub const PaintingActive = paintingActive;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn paintingActive(self: KTreeWidgetSearchLine) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `widthMM` instead
    ///
    pub const WidthMM = widthMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn widthMM(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `heightMM` instead
    ///
    pub const HeightMM = heightMM;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn heightMM(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiX` instead
    ///
    pub const LogicalDpiX = logicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn logicalDpiX(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `logicalDpiY` instead
    ///
    pub const LogicalDpiY = logicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn logicalDpiY(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiX` instead
    ///
    pub const PhysicalDpiX = physicalDpiX;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn physicalDpiX(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `physicalDpiY` instead
    ///
    pub const PhysicalDpiY = physicalDpiY;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn physicalDpiY(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatio` instead
    ///
    pub const DevicePixelRatio = devicePixelRatio;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn devicePixelRatio(self: KTreeWidgetSearchLine) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioF` instead
    ///
    pub const DevicePixelRatioF = devicePixelRatioF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn devicePixelRatioF(self: KTreeWidgetSearchLine) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `colorCount` instead
    ///
    pub const ColorCount = colorCount;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn colorCount(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `depth` instead
    ///
    pub const Depth = depth;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn depth(self: KTreeWidgetSearchLine) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `devicePixelRatioFScale` instead
    ///
    pub const DevicePixelRatioFScale = devicePixelRatioFScale;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn devicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// ### DEPRECATED: Use `encodeMetricF` instead
    ///
    pub const EncodeMetricF = encodeMetricF;

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` _metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn encodeMetricF(_metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(_metric), @bitCast(value));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

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
    pub fn superSizeHint(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QSize) void {
        qtc.KTreeWidgetSearchLine_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

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
    pub fn minimumSizeHint(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSizeHint` instead
    ///
    pub const SuperMinimumSizeHint = superMinimumSizeHint;

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
    pub fn superMinimumSizeHint(self: KTreeWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSizeHint` instead
    ///
    pub const OnMinimumSizeHint = onMinimumSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QSize) void {
        qtc.KTreeWidgetSearchLine_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

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
    pub fn mousePressEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    pub fn superMousePressEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

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
    pub fn mouseMoveEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

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
    pub fn superMouseMoveEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

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
    pub fn mouseReleaseEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    pub fn superMouseReleaseEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

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
    pub fn mouseDoubleClickEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

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
    pub fn superMouseDoubleClickEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KTreeWidgetSearchLine_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

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
    pub fn keyPressEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KTreeWidgetSearchLine_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    pub fn superKeyPressEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KTreeWidgetSearchLine_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QKeyEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

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
    pub fn keyReleaseEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KTreeWidgetSearchLine_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

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
    pub fn superKeyReleaseEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KTreeWidgetSearchLine_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

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
    pub fn onKeyReleaseEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QKeyEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

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
    pub fn focusInEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KTreeWidgetSearchLine_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

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
    pub fn superFocusInEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KTreeWidgetSearchLine_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QFocusEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

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
    pub fn focusOutEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KTreeWidgetSearchLine_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

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
    pub fn superFocusOutEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KTreeWidgetSearchLine_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QFocusEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

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
    pub fn paintEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KTreeWidgetSearchLine_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

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
    pub fn superPaintEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KTreeWidgetSearchLine_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

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
    pub fn onPaintEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QPaintEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

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
    pub fn dragEnterEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.KTreeWidgetSearchLine_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

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
    pub fn superDragEnterEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.KTreeWidgetSearchLine_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

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
    pub fn onDragEnterEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QDragEnterEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

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
    pub fn dragMoveEvent(self: KTreeWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.KTreeWidgetSearchLine_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

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
    pub fn superDragMoveEvent(self: KTreeWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.KTreeWidgetSearchLine_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

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
    pub fn onDragMoveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QDragMoveEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

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
    pub fn dragLeaveEvent(self: KTreeWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.KTreeWidgetSearchLine_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

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
    pub fn superDragLeaveEvent(self: KTreeWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.KTreeWidgetSearchLine_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

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
    pub fn onDragLeaveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

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
    pub fn dropEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.KTreeWidgetSearchLine_DropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

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
    pub fn superDropEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.KTreeWidgetSearchLine_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

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
    pub fn onDropEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QDropEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

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
    pub fn changeEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KTreeWidgetSearchLine_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

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
    pub fn superChangeEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KTreeWidgetSearchLine_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

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
    pub fn onChangeEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

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
    pub fn inputMethodEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KTreeWidgetSearchLine_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

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
    pub fn superInputMethodEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KTreeWidgetSearchLine_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

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
    pub fn onInputMethodEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QInputMethodEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initStyleOption` instead
    ///
    pub const InitStyleOption = initStyleOption;

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
    pub fn initStyleOption(self: KTreeWidgetSearchLine, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KTreeWidgetSearchLine_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `superInitStyleOption` instead
    ///
    pub const SuperInitStyleOption = superInitStyleOption;

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
    pub fn superInitStyleOption(self: KTreeWidgetSearchLine, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KTreeWidgetSearchLine_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitStyleOption` instead
    ///
    pub const OnInitStyleOption = onInitStyleOption;

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
    pub fn onInitStyleOption(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QStyleOptionFrame) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

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
    pub fn inputMethodQuery(self: KTreeWidgetSearchLine, param1: i32) QVariant {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

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
    pub fn superInputMethodQuery(self: KTreeWidgetSearchLine, param1: i32) QVariant {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32) callconv(.c) QVariant) void {
        qtc.KTreeWidgetSearchLine_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

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
    pub fn timerEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KTreeWidgetSearchLine_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    pub fn superTimerEvent(self: KTreeWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KTreeWidgetSearchLine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTimerEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `devType` instead
    ///
    pub const DevType = devType;

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
    pub fn devType(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDevType` instead
    ///
    pub const SuperDevType = superDevType;

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
    pub fn superDevType(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_SuperDevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDevType` instead
    ///
    pub const OnDevType = onDevType;

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
    pub fn onDevType(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

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
    pub fn setVisible(self: KTreeWidgetSearchLine, visible: bool) void {
        qtc.KTreeWidgetSearchLine_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `superSetVisible` instead
    ///
    pub const SuperSetVisible = superSetVisible;

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
    pub fn superSetVisible(self: KTreeWidgetSearchLine, visible: bool) void {
        qtc.KTreeWidgetSearchLine_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onSetVisible` instead
    ///
    pub const OnSetVisible = onSetVisible;

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
    pub fn onSetVisible(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, bool) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `heightForWidth` instead
    ///
    pub const HeightForWidth = heightForWidth;

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
    pub fn heightForWidth(self: KTreeWidgetSearchLine, param1: i32) i32 {
        return qtc.KTreeWidgetSearchLine_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superHeightForWidth` instead
    ///
    pub const SuperHeightForWidth = superHeightForWidth;

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
    pub fn superHeightForWidth(self: KTreeWidgetSearchLine, param1: i32) i32 {
        return qtc.KTreeWidgetSearchLine_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onHeightForWidth` instead
    ///
    pub const OnHeightForWidth = onHeightForWidth;

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
    pub fn onHeightForWidth(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32) callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hasHeightForWidth` instead
    ///
    pub const HasHeightForWidth = hasHeightForWidth;

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
    pub fn hasHeightForWidth(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHasHeightForWidth` instead
    ///
    pub const SuperHasHeightForWidth = superHasHeightForWidth;

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
    pub fn superHasHeightForWidth(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHasHeightForWidth` instead
    ///
    pub const OnHasHeightForWidth = onHasHeightForWidth;

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
    pub fn onHasHeightForWidth(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEngine` instead
    ///
    pub const PaintEngine = paintEngine;

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
    pub fn paintEngine(self: KTreeWidgetSearchLine) QPaintEngine {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superPaintEngine` instead
    ///
    pub const SuperPaintEngine = superPaintEngine;

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
    pub fn superPaintEngine(self: KTreeWidgetSearchLine) QPaintEngine {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onPaintEngine` instead
    ///
    pub const OnPaintEngine = onPaintEngine;

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
    pub fn onPaintEngine(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KTreeWidgetSearchLine_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

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
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.KTreeWidgetSearchLine_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.KTreeWidgetSearchLine_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QWheelEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `enterEvent` instead
    ///
    pub const EnterEvent = enterEvent;

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
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.KTreeWidgetSearchLine_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEnterEvent` instead
    ///
    pub const SuperEnterEvent = superEnterEvent;

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
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.KTreeWidgetSearchLine_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEnterEvent` instead
    ///
    pub const OnEnterEvent = onEnterEvent;

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
    pub fn onEnterEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEnterEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `leaveEvent` instead
    ///
    pub const LeaveEvent = leaveEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTreeWidgetSearchLine_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superLeaveEvent` instead
    ///
    pub const SuperLeaveEvent = superLeaveEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTreeWidgetSearchLine_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onLeaveEvent` instead
    ///
    pub const OnLeaveEvent = onLeaveEvent;

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
    pub fn onLeaveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveEvent` instead
    ///
    pub const MoveEvent = moveEvent;

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
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.KTreeWidgetSearchLine_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMoveEvent` instead
    ///
    pub const SuperMoveEvent = superMoveEvent;

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
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.KTreeWidgetSearchLine_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMoveEvent` instead
    ///
    pub const OnMoveEvent = onMoveEvent;

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
    pub fn onMoveEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMoveEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

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
    /// ` _event: QResizeEvent `
    ///
    pub fn resizeEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.KTreeWidgetSearchLine_ResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

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
    /// ` _event: QResizeEvent `
    ///
    pub fn superResizeEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QResizeEvent;
        qtc.KTreeWidgetSearchLine_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QResizeEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

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
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.KTreeWidgetSearchLine_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

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
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.KTreeWidgetSearchLine_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

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
    pub fn onCloseEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QCloseEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `tabletEvent` instead
    ///
    pub const TabletEvent = tabletEvent;

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
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.KTreeWidgetSearchLine_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superTabletEvent` instead
    ///
    pub const SuperTabletEvent = superTabletEvent;

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
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.KTreeWidgetSearchLine_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onTabletEvent` instead
    ///
    pub const OnTabletEvent = onTabletEvent;

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
    pub fn onTabletEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QTabletEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `actionEvent` instead
    ///
    pub const ActionEvent = actionEvent;

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
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.KTreeWidgetSearchLine_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superActionEvent` instead
    ///
    pub const SuperActionEvent = superActionEvent;

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
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.KTreeWidgetSearchLine_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onActionEvent` instead
    ///
    pub const OnActionEvent = onActionEvent;

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
    pub fn onActionEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QActionEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

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
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.KTreeWidgetSearchLine_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

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
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.KTreeWidgetSearchLine_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

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
    pub fn onShowEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QShowEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `hideEvent` instead
    ///
    pub const HideEvent = hideEvent;

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
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.KTreeWidgetSearchLine_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superHideEvent` instead
    ///
    pub const SuperHideEvent = superHideEvent;

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
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.KTreeWidgetSearchLine_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHideEvent` instead
    ///
    pub const OnHideEvent = onHideEvent;

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
    pub fn onHideEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QHideEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `nativeEvent` instead
    ///
    pub const NativeEvent = nativeEvent;

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
    pub fn nativeEvent(self: KTreeWidgetSearchLine, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTreeWidgetSearchLine_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `superNativeEvent` instead
    ///
    pub const SuperNativeEvent = superNativeEvent;

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
    pub fn superNativeEvent(self: KTreeWidgetSearchLine, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KTreeWidgetSearchLine_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `onNativeEvent` instead
    ///
    pub const OnNativeEvent = onNativeEvent;

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
    pub fn onNativeEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `metric` instead
    ///
    pub const Metric = metric;

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
    pub fn metric(self: KTreeWidgetSearchLine, param1: i32) i32 {
        return qtc.KTreeWidgetSearchLine_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superMetric` instead
    ///
    pub const SuperMetric = superMetric;

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
    pub fn superMetric(self: KTreeWidgetSearchLine, param1: i32) i32 {
        return qtc.KTreeWidgetSearchLine_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onMetric` instead
    ///
    pub const OnMetric = onMetric;

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
    pub fn onMetric(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32) callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initPainter` instead
    ///
    pub const InitPainter = initPainter;

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
    pub fn initPainter(self: KTreeWidgetSearchLine, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KTreeWidgetSearchLine_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `superInitPainter` instead
    ///
    pub const SuperInitPainter = superInitPainter;

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
    pub fn superInitPainter(self: KTreeWidgetSearchLine, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KTreeWidgetSearchLine_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `onInitPainter` instead
    ///
    pub const OnInitPainter = onInitPainter;

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
    pub fn onInitPainter(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QPainter) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redirected` instead
    ///
    pub const Redirected = redirected;

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
    pub fn redirected(self: KTreeWidgetSearchLine, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KTreeWidgetSearchLine_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `superRedirected` instead
    ///
    pub const SuperRedirected = superRedirected;

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
    pub fn superRedirected(self: KTreeWidgetSearchLine, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `onRedirected` instead
    ///
    pub const OnRedirected = onRedirected;

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
    pub fn onRedirected(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KTreeWidgetSearchLine_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sharedPainter` instead
    ///
    pub const SharedPainter = sharedPainter;

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
    pub fn sharedPainter(self: KTreeWidgetSearchLine) QPainter {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSharedPainter` instead
    ///
    pub const SuperSharedPainter = superSharedPainter;

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
    pub fn superSharedPainter(self: KTreeWidgetSearchLine) QPainter {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSharedPainter` instead
    ///
    pub const OnSharedPainter = onSharedPainter;

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
    pub fn onSharedPainter(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KTreeWidgetSearchLine_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

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
    pub fn focusNextPrevChild(self: KTreeWidgetSearchLine, next: bool) bool {
        return qtc.KTreeWidgetSearchLine_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

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
    pub fn superFocusNextPrevChild(self: KTreeWidgetSearchLine, next: bool) bool {
        return qtc.KTreeWidgetSearchLine_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

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
    pub fn onFocusNextPrevChild(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, bool) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: KTreeWidgetSearchLine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTreeWidgetSearchLine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: KTreeWidgetSearchLine, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.KTreeWidgetSearchLine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QObject, QEvent) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `childEvent` instead
    ///
    pub const ChildEvent = childEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTreeWidgetSearchLine_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superChildEvent` instead
    ///
    pub const SuperChildEvent = superChildEvent;

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
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.KTreeWidgetSearchLine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onChildEvent` instead
    ///
    pub const OnChildEvent = onChildEvent;

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
    pub fn onChildEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QChildEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `customEvent` instead
    ///
    pub const CustomEvent = customEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTreeWidgetSearchLine_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superCustomEvent` instead
    ///
    pub const SuperCustomEvent = superCustomEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: KTreeWidgetSearchLine, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.KTreeWidgetSearchLine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onCustomEvent` instead
    ///
    pub const OnCustomEvent = onCustomEvent;

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
    pub fn onCustomEvent(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QEvent) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `connectNotify` instead
    ///
    pub const ConnectNotify = connectNotify;

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
    pub fn connectNotify(self: KTreeWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTreeWidgetSearchLine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superConnectNotify` instead
    ///
    pub const SuperConnectNotify = superConnectNotify;

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
    pub fn superConnectNotify(self: KTreeWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTreeWidgetSearchLine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onConnectNotify` instead
    ///
    pub const OnConnectNotify = onConnectNotify;

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
    pub fn onConnectNotify(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMetaMethod) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `disconnectNotify` instead
    ///
    pub const DisconnectNotify = disconnectNotify;

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
    pub fn disconnectNotify(self: KTreeWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTreeWidgetSearchLine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superDisconnectNotify` instead
    ///
    pub const SuperDisconnectNotify = superDisconnectNotify;

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
    pub fn superDisconnectNotify(self: KTreeWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KTreeWidgetSearchLine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onDisconnectNotify` instead
    ///
    pub const OnDisconnectNotify = onDisconnectNotify;

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
    pub fn onDisconnectNotify(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMetaMethod) callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorRect` instead
    ///
    pub const CursorRect = cursorRect;

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
    pub fn cursorRect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_CursorRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superCursorRect` instead
    ///
    pub const SuperCursorRect = superCursorRect;

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
    pub fn superCursorRect(self: KTreeWidgetSearchLine) QRect {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperCursorRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCursorRect` instead
    ///
    pub const OnCursorRect = onCursorRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onCursorRect(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QRect) void {
        qtc.KTreeWidgetSearchLine_OnCursorRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateMicroFocus` instead
    ///
    pub const UpdateMicroFocus = updateMicroFocus;

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
    pub fn updateMicroFocus(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateMicroFocus` instead
    ///
    pub const SuperUpdateMicroFocus = superUpdateMicroFocus;

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
    pub fn superUpdateMicroFocus(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateMicroFocus` instead
    ///
    pub const OnUpdateMicroFocus = onUpdateMicroFocus;

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
    pub fn onUpdateMicroFocus(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

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
    pub fn create(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superCreate` instead
    ///
    pub const SuperCreate = superCreate;

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
    pub fn superCreate(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_SuperCreate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCreate` instead
    ///
    pub const OnCreate = onCreate;

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
    pub fn onCreate(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

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
    pub fn destroy(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDestroy` instead
    ///
    pub const SuperDestroy = superDestroy;

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
    pub fn superDestroy(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_SuperDestroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDestroy` instead
    ///
    pub const OnDestroy = onDestroy;

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
    pub fn onDestroy(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) void) void {
        qtc.KTreeWidgetSearchLine_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextChild` instead
    ///
    pub const FocusNextChild = focusNextChild;

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
    pub fn focusNextChild(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_FocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFocusNextChild` instead
    ///
    pub const SuperFocusNextChild = superFocusNextChild;

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
    pub fn superFocusNextChild(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusNextChild` instead
    ///
    pub const OnFocusNextChild = onFocusNextChild;

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
    pub fn onFocusNextChild(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusPreviousChild` instead
    ///
    pub const FocusPreviousChild = focusPreviousChild;

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
    pub fn focusPreviousChild(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_FocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superFocusPreviousChild` instead
    ///
    pub const SuperFocusPreviousChild = superFocusPreviousChild;

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
    pub fn superFocusPreviousChild(self: KTreeWidgetSearchLine) bool {
        return qtc.KTreeWidgetSearchLine_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFocusPreviousChild` instead
    ///
    pub const OnFocusPreviousChild = onFocusPreviousChild;

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
    pub fn onFocusPreviousChild(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sender` instead
    ///
    pub const Sender = sender;

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
    pub fn sender(self: KTreeWidgetSearchLine) QObject {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_Sender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSender` instead
    ///
    pub const SuperSender = superSender;

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
    pub fn superSender(self: KTreeWidgetSearchLine) QObject {
        return .{ .ptr = qtc.KTreeWidgetSearchLine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSender` instead
    ///
    pub const OnSender = onSender;

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
    pub fn onSender(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) QObject) void {
        qtc.KTreeWidgetSearchLine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `senderSignalIndex` instead
    ///
    pub const SenderSignalIndex = senderSignalIndex;

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
    pub fn senderSignalIndex(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_SenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSenderSignalIndex` instead
    ///
    pub const SuperSenderSignalIndex = superSenderSignalIndex;

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
    pub fn superSenderSignalIndex(self: KTreeWidgetSearchLine) i32 {
        return qtc.KTreeWidgetSearchLine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSenderSignalIndex` instead
    ///
    pub const OnSenderSignalIndex = onSenderSignalIndex;

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
    pub fn onSenderSignalIndex(self: KTreeWidgetSearchLine, callback: *const fn () callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `receivers` instead
    ///
    pub const Receivers = receivers;

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
    pub fn receivers(self: KTreeWidgetSearchLine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTreeWidgetSearchLine_Receivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `superReceivers` instead
    ///
    pub const SuperReceivers = superReceivers;

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
    pub fn superReceivers(self: KTreeWidgetSearchLine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KTreeWidgetSearchLine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// ### DEPRECATED: Use `onReceivers` instead
    ///
    pub const OnReceivers = onReceivers;

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
    pub fn onReceivers(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) i32) void {
        qtc.KTreeWidgetSearchLine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isSignalConnected` instead
    ///
    pub const IsSignalConnected = isSignalConnected;

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
    pub fn isSignalConnected(self: KTreeWidgetSearchLine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTreeWidgetSearchLine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `superIsSignalConnected` instead
    ///
    pub const SuperIsSignalConnected = superIsSignalConnected;

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
    pub fn superIsSignalConnected(self: KTreeWidgetSearchLine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KTreeWidgetSearchLine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// ### DEPRECATED: Use `onIsSignalConnected` instead
    ///
    pub const OnIsSignalConnected = onIsSignalConnected;

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
    pub fn onIsSignalConnected(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, QMetaMethod) callconv(.c) bool) void {
        qtc.KTreeWidgetSearchLine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getDecodedMetricF` instead
    ///
    pub const GetDecodedMetricF = getDecodedMetricF;

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
    pub fn getDecodedMetricF(self: KTreeWidgetSearchLine, metricA: i32, metricB: i32) f64 {
        return qtc.KTreeWidgetSearchLine_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `superGetDecodedMetricF` instead
    ///
    pub const SuperGetDecodedMetricF = superGetDecodedMetricF;

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
    pub fn superGetDecodedMetricF(self: KTreeWidgetSearchLine, metricA: i32, metricB: i32) f64 {
        return qtc.KTreeWidgetSearchLine_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `onGetDecodedMetricF` instead
    ///
    pub const OnGetDecodedMetricF = onGetDecodedMetricF;

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
    pub fn onGetDecodedMetricF(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, i32, i32) callconv(.c) f64) void {
        qtc.KTreeWidgetSearchLine_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `onObjectNameChanged` instead
    ///
    pub const OnObjectNameChanged = onObjectNameChanged;

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
    pub fn onObjectNameChanged(self: KTreeWidgetSearchLine, callback: *const fn (KTreeWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/ktreewidgetsearchline.html#dtor.KTreeWidgetSearchLine)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KTreeWidgetSearchLine `
    ///
    pub fn delete(self: KTreeWidgetSearchLine) void {
        qtc.KTreeWidgetSearchLine_Delete(@ptrCast(self.ptr));
    }
};
